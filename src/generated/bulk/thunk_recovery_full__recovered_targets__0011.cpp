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
typedef struct { char _p[3]; } undefined3;
typedef struct { char _p[5]; } undefined5;
typedef struct { char _p[6]; } undefined6;
typedef struct { char _p[7]; } undefined7;
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
extern int __std_exception_destroy(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern int fgetc(...);
extern int memchr(...);
extern int memmove(...);
extern int operator_new(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a3180(...);
extern int thunk_FUN_101fdfe0(...);
extern int thunk_FUN_10200aa0(...);
extern int thunk_FUN_10203dc0(...);
extern int thunk_FUN_10352a90(...);
extern int thunk_FUN_1036efe0(...);
extern int thunk_FUN_10370f20(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_10478ea0(...);
extern int thunk_FUN_105a7950(...);
extern int thunk_FUN_105ad900(...);
extern int thunk_FUN_10648010(...);
extern int thunk_FUN_106845c0(...);
extern int thunk_FUN_1068dd40(...);
extern int thunk_FUN_1068edf0(...);
extern int thunk_FUN_1068fa70(...);
extern int thunk_FUN_106905e0(...);
extern int thunk_FUN_10694b70(...);
extern int thunk_FUN_10694f70(...);
extern int thunk_FUN_10699d60(...);
extern int thunk_FUN_1069a360(...);
extern int thunk_FUN_1069bfb0(...);
extern int thunk_FUN_106a48e0(...);
extern int thunk_FUN_106a5620(...);
extern int thunk_FUN_106a9340(...);
extern int thunk_FUN_106a94b0(...);
extern int thunk_FUN_106a9bb0(...);
extern int thunk_FUN_106aaa10(...);
extern int thunk_FUN_106ab040(...);
extern int thunk_FUN_106ab5b0(...);
extern int thunk_FUN_106abdc0(...);
extern int thunk_FUN_106ae320(...);
extern int thunk_FUN_106aec80(...);
extern int thunk_FUN_106b1900(...);
extern int thunk_FUN_106bb660(...);
extern int thunk_FUN_106bb670(...);
extern int thunk_FUN_106bce00(...);
extern int thunk_FUN_106bce70(...);
extern int thunk_FUN_1074ed30(...);
extern int thunk_FUN_1076bff0(...);
extern int thunk_FUN_10783320(...);
extern int thunk_FUN_10bcef80(...);
extern int thunk_FUN_10eb4020(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
extern int thunk_FUN_10eb4cc0(...);
extern int thunk_FUN_10eb4d80(...);
extern int thunk_FUN_10eb4e80(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ebc1e0(...);
extern int thunk_FUN_10f04dc0(...);
extern int thunk_FUN_110a9ef0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_1148a50e(...);
extern int ungetc(...);
extern int DAT_11880fb0;
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
extern int DAT_121a2400;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpCDCreateObjectAIOOp;
extern int ghidra_vftable_SCAddMusicServiceLaunchable;
extern int ghidra_vftable_SCAddVoiceServicePopUpLaunchable;
extern int ghidra_vftable_SCAddVoiceServiceTileLaunchable;
extern int ghidra_vftable_SCAmpConfigurationLaunchable;
extern int ghidra_vftable_SCAssetDownloadCallback;
extern int ghidra_vftable_SCAsyncBrowseItem;
extern int ghidra_vftable_SCBTDeviceInfoLaunchable;
extern int ghidra_vftable_SCBTOnlyLaunchable;
extern int ghidra_vftable_SCBaseLaunchable;
extern int ghidra_vftable_SCBondingLaunchable;
extern int ghidra_vftable_SCDiscoveryHistoryStore_Listener;
extern int ghidra_vftable_SCEventSubscriptionImpl_EventSink;
extern int ghidra_vftable_SCFixUnconfiguredLaunchable;
extern int ghidra_vftable_SCIMusicServiceMenuItem;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIShare;
extern int ghidra_vftable_SCIShareManager;
extern int ghidra_vftable_SCJoinExistingLaunchable;
extern int ghidra_vftable_SCLaunchSoundLabAction;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCMusicServiceCatalogManager_EventSink;
extern int ghidra_vftable_SCMusicServiceCatalogRequest;
extern int ghidra_vftable_SCMusicServiceCatalog_EventSink;
extern int ghidra_vftable_SCMusicServiceFilterLearnMoreActionDescriptor;
extern int ghidra_vftable_SCNewWizControllerFor;
extern int ghidra_vftable_SCNewWizPage;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCPermissionsLaunchable;
extern int ghidra_vftable_SCProductOnboardingLaunchable;
extern int ghidra_vftable_SCShareBrowseItem;
extern int ghidra_vftable_SCSingleRoomHHOfferLaunchable;
extern int ghidra_vftable_SCSonosRadioHDLaunchable;
extern int ghidra_vftable_SCSonosVoiceOnboardingLaunchable;
extern int ghidra_vftable_SCSubwizState;
extern int ghidra_vftable_SCSubwizStateFor;
extern int ghidra_vftable_SCTVSetupLaunchable;
extern int ghidra_vftable_SCUpgradeOfferTileLaunchable;
extern int ghidra_vftable_SCUrlGetRequest;
extern int ghidra_vftable_SCWifiConfigLaunchable;
extern int ghidra_vftable_std_exception;
extern int in_EAX;
typedef void *E9;
typedef void *WARNING;
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CreateObject { char _pad; CreateObject(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIMusicServiceMenuItem { char _pad; SCIMusicServiceMenuItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIShare { char _pad; SCIShare(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIShareManager { char _pad; SCIShareManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIUrlRequest { char _pad; SCIUrlRequest(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCShareManager { char _pad; SCShareManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10656b00(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10656b30(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1065a500(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1065a5b0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1065acf0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1065ad10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1067f150(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1067f1f0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1067f320(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1067f330(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1067f340(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1067f450(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1067fb10(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1067fb30(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106815c0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106817f0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10681850(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10683090(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106830b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10683150(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10683160(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10683270(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10683280(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106832d0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106832f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10683300(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10683360(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_106846c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10684720(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_106847c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_106847e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10685070(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10685820(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10685890(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106859e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10685a50(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10685f10(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10685f30(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10686400(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10686420(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10688020(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106885e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1068c1f0(undefined4 *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1068c2a0(undefined4 *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1068c600(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1068c620(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1068c670(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1068c6a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1068c6c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall FUN_1068c740(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1068caa0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1068f8f0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10690dc0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10690ed0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10690ee0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10690ef0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10690f00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10690f30(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10690f40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10690f60(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10690f80(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10690fa0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10690fe0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10691020(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106910c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106913e0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10691440(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10691770(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106921a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106921b0(undefined4 param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_106929c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10692ac0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106938b0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_106938e0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10693930(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10693970(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106943e0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10694400(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10694420(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10694440(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106944a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10694990(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10694b00(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10694b20(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10694b40(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10694b50(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10694b60(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10695050(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10695060(byte *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10695520(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10695530(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10695540(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10696fa0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10699860(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106999d0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10699b20(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10699b40(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10699b60(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10699b80(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10699c90(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069ad40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069afa0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069afb0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall FUN_1069afe0(undefined8 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069b000(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069b3c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069b400(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069b440(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069b480(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069bb20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1069c780(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069c850(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069c970(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069ca90(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_1069cbd0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069ddc0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069dfc0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069dfe0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069e000(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069e010(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069e090(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069e0d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069e1d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069e1f0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069e210(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069e220(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_1069e3c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069ed20(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069ed50(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a1270(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_106a1290(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106a2a50(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106a2a70(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a2ec0(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a2ed0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a3030(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a3050(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a3060(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a3b30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a3b40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a3bd0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_106a3ef0(undefined4 *param_2,uint param_3,uint param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a3f60(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a3ff0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_106a4440(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106a4760(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106a4ec0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_106a4ee0(int param_2,uint param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a5010(int param_2,uint param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106a5480(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106a5520(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106a6530(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106a6a90(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_106a6ba0(char param_2,uint param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106a7680(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106a7ed0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_106a7ef0(undefined1 *param_2,uint param_3,uint param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a8720(undefined4 *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a8740(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a8760(undefined4 *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a8860(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a8b20(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a8b40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a8b50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a8b60(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a8b80(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a8d50(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a8ef0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a8fd0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a9020(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a9070(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_106a90a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_106a9120(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106aa350(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106aa400(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106aa430(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106aa4d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106aa550(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106aa580(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106ae100(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106af290(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106af370(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106afc80(int *param_2,int param_3,undefined4 param_4,undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b03f0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0470(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b04f0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0740(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0760(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0870(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0880(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0970(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0980(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0990(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b09d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b09e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0af0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0b00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0b10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0b20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0b30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0b80(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0b90(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0bb0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0bd0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0bf0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0c10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0c20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0c30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0c40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0c50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0c60(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0c90(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0cd0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0e30(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0fd0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b10d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b23b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b23e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b2410(undefined4 param_2,undefined1 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b2500(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b2530(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b25b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b25e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b2610(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b2650(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b2680(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b2da0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b2dd0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b2f10(undefined4 param_2,undefined1 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b3250(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_106b5450(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_106b5590(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_106b55f0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_106b5640(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_106b56d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_106b5730(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b5780(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b57b0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_106b5980(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_106b5c10(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_106b5c30(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_106b5c50(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_106b5c80(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_106b5ca0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_106b5cc0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_106b5ce0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_106b60f0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_106b6100(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_106b6110(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_106b6120(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_106b6140(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106b6490(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106b64e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106b6520(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_106b67d0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_106b67f0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106b81d0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106b8200(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_106b8230(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_106b8270(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_106b82b0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_106b82f0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106b86f0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106b87e0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106b8f80(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106ba450(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106ba860(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106ba960(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106ba970(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106ba980(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106bb0c0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106bb170(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106bb2d0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106bb380(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106bb3a0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106bb3c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106bb3d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106bb400(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106bb600(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106bb610(undefined4 *param_2); };
using namespace std;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654a40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654a70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654aa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654ad0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654b00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654b30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654b60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654b90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654bc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654bf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654c20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654c50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654c80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654cb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654ce0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654d10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654d40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654d70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654da0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654dd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654e00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654e30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655280(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106552d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106553e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655430(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655480(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106554d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655520(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655570(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106555c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655610(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655660(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655780(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106557d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655820(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655870(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106558c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655910(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655960(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106559b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655a00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655a50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655c30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655d50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655da0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655df0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655e40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655e90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655fc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656010(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656060(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106560b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656100(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10656b40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10656b50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10656b60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10656b70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10656b80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10656b90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1065a470(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1065a4a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1065ab80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065abc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065abd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065abe0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065abf0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065ac00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065ac10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065ac20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065ac30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065ac40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065ac60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1065ac70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1065ace0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1065af80(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1065b000(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1065b100(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1065e690(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1065e6e0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065e780(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1065e790(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1066d530(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1066e440(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677840(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677850(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677860(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677870(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677880(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677890(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106778a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106778b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106778c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106778d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106778e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106778f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677900(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677910(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677920(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677930(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677940(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677950(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677960(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677970(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677980(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677990(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106779a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106779b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106779c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106779d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106779e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106779f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677aa0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ab0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ac0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ad0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ae0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677af0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ba0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677bb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677bc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677bd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677be0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677bf0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ca0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677cb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677cc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677cd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ce0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677cf0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10677d10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677d20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677d30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677d40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677d50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677d60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677d70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677d80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677d90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677da0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677db0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677dc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677dd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677de0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677df0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ea0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677eb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ec0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ed0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ee0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ef0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677fa0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677fb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677fc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677fd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10678960(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1067efa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1067efb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1067efc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1067f050(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1067f080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1067f0b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1067f0e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1067f120(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1067f130(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1067f370(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1067f490(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1067f590(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1067f990(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1067f9a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10680540(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106805d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106813e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10681400(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10681420(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106815e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10681600(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10681870(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10681880(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10681890(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106818b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106818d0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106818e0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106818f0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10681900(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10681910(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10681920(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10682460(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10682480(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106825c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106825d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106825e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106825f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10682660(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682820(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682970(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682980(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682990(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106829a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106829b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106829c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106829d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106829e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106829f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682a00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682a10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682a20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682ce0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682d00(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682d20(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682d40(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682d60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682d70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682d80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682d90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682da0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682db0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682dc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682dd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682de0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682df0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682e00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682e10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10682e20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682f80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10683070(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10683290(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106832b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10683310(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10683330(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10683340(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10683350(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10683380(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10683580(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10684370(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10684910(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10684920(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10684930(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10684940(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10684950(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10684960(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10684970(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10684980(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10684990(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106849a0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106849b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106849c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10684b90(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10684ba0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10684fd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10685000(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10685180(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106851b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106851c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106851d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106851e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106851f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685200(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685210(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685220(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685230(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685240(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685250(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685260(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685270(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685280(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685290(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106852a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106852b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106852c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106852d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106852e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106852f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10685900(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10685930(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10685960(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10685990(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106859a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106859b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106859c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106859d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10685d40(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10685dc0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10685e40(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685f20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10685f40(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10685f80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10686260(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106862b0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10686300(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10686360(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10686410(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10686430(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10687200(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10687210(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10687220(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10687230(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10687240(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10687250(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10687260(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106872a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106872b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10687760(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10687770(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10687a10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10687d10(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10687d50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10687d60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10687e50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106880e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106880f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10688100(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10688ad0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10688b00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10688b10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10688c90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10688e70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10688eb0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10688ec0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10689680(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1068a160(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1068a730(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1068ad80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1068ad90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1068b960(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068bea0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1068bfe0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1068c190(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1068c1b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1068c1d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1068c370(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1068c390(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1068c3b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1068c3d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1068c3e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1068c650(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_1068c770(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068c890(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068c8a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068c8b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068c8e0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068c8f0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068c900(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068c910(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068c920(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068d530(undefined4 param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068d570(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068d590(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068d5b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068d5c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068d5d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068d5e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068d5f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068d600(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068d610(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068d7d0(int param_1,int param_2,int param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068dc50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1068ddc0(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1068de40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068ede0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068f030(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1068f1c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068f4c0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068f910(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068fd00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068fd10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068fd20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068fd40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068fd50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068fd60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068fd70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068fd80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068fd90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068fda0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068fdb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10690130(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690580(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106905a0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106905c0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106906e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106906f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690700(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690710(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690720(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690730(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690740(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690750(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690770(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690780(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690790(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106907a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106907b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106907c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106907d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106907e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690800(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690810(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690820(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690830(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690970(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690990(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106909a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106909b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106909c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10690b70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10690de0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10690df0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10690f10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10690fc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10691000(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10691040(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10691060(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10691080(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10691090(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106910a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106910b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106913c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10691420(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10691540(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10691560(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10691870(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10692570(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106928b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106929a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10692ae0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10692af0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10692b00(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10692b10(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10692b20(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10692b30(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10692b40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10692b50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10692b60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10692b70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10692b80(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10693720(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10693ba0(float *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10693e70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10693e80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694060(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694070(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694080(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694090(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106940a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106940b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106940c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106940d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106940e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106940f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694100(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694110(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694120(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694130(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694140(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106941d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106941e0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106941f0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694200(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694210(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106942a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106942b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106942c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106942d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694390(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106943a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106943b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106943c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106943d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10694560(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10694d80(int param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694dc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694dd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10694e10(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10694e80(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10694f00(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10694fe0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106950c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10695290(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106952b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106952c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106952d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10695370(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106953c0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10695410(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106954b0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10695500(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10695510(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106964e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10696930(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10696940(float *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10696950(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10696960(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10696970(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10696980(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10696990(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106969a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106969b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106969c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106969d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106969e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106969f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10696a00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10696c80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10696ca0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10697000(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106970f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10697150(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10697830(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10697a20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10697a30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10697a40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10699810(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10699820(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10699830(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10699940(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10699960(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10699980(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106999f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10699a00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10699a50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10699aa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10699ac0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10699bf0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10699c00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699c10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699c40(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699c50(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699c60(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699c70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699c80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699e40(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10699f00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10699f10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699f20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699f30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699f60(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699f80(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a210(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a220(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a240(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a250(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a260(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a270(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a340(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a3e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a3f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a410(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a420(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a430(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a440(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a460(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a470(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a4a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a4b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a4d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a4e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a4f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069a500(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069a520(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069a540(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1069ac60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1069ad60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1069afc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1069b020(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069b040(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069c150(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069c240(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069c250(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069c270(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069c290(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069c2b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069c710(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069cc20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069cc30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069cc40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069cc50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1069cc60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1069cc70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1069cc80(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1069cc90(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1069cca0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1069ccb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_1069ccc0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069d6d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1069d850(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1069d9c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069dc10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069dc20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069dc30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069dc40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069dc50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069dc60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069dc70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1069dd00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1069dd10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1069dd20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069ded0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069dee0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069dfa0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069dfb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069e200(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069e230(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069e240(int param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1069e2d0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1069e350(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069e3e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069e8e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069e9d0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1069ea20(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1069ea70(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106a0020(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_106a0030(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_106a0040(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a0050(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a0060(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a0070(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a0080(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a0090(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a00a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a00b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a00c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a0570(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a05a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a05d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a0600(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106a0630(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_106a12b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a12c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a1330(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a1560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a1660(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a19d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_106a1a40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a1de0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a1f10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a2ea0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a2ef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a30b0(undefined1 *param_1,FILE *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a3700(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a3710(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106a3740(int param_1,uint param_2,uint param_3,char param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_106a38d0(byte *param_1,FILE *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a3900(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a3910(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a3920(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a3970(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a3990(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a39a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a39b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a39c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a3be0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a3fa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a43e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106a4580(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_106a4590(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106a4600(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106a48c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a4e70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a5070(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a5590(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106a64e0(undefined4 *param_1,uint param_2,uint param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a6a80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a6b10(void *param_1,size_t param_2,char *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a6bf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_106a6e40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106a6ea0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106a6eb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a6ec0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a6ed0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a7330(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a7690(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a7ec0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a8680(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a86a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a86c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a86e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a8700(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a8880(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a88a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a8ba0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a8f10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a9000(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a9050(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9300(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9310(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9320(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9330(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9740(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9760(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a9b50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a9b60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9b70(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9b80(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9b90(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9ba0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9ff0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aa000(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aa140(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aba00(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aba20(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abb40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abb50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abb60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abb70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abb80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abb90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abba0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abbb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abbc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abbd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ac400(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ac410(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ac420(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_106ac460(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_106ac490(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106ac860(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ad1f0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ad200(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ad210(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ad220(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ad230(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106ad5d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ad6c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ad7e0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ad7f0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ad800(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106adc20(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_106adc40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae0f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae1b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae1c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae1d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae780(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae790(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae7a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae7b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae7c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae820(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae830(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae840(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae850(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae860(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae870(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae880(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae890(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae8a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae8b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae8c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae8d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae8e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae8f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae900(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae910(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae920(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae930(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae940(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae950(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae960(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ae970(int *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ae990(int *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106ae9b0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106ae9d0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aeaa0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aec40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aec60(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aed60(undefined4 param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106af010(undefined4 param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106af020(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106af030(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106af050(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af5c0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af5e0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af600(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af620(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af640(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af660(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af780(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af790(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af7a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af7b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af7c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af7d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af7e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af7f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af800(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af810(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af820(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af830(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af840(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af850(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af860(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af8c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af8d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af8e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af8f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af900(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af910(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af920(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af930(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af940(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af950(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af960(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af9c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af9d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af9e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af9f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106afa00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106afa10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106afa20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106afa30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106afa40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106afa50(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b0000(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b0010(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b0020(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b0080(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b0090(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b00a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b00b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b00c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b00d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b00e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106b00f0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106b0100(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106b02a0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b05e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0600(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0620(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b0780(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b0790(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0b40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0b60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0c70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0cb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0cf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b0d10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b0d20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b0d30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b0d40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b0d50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0de0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0f30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b10b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b1110(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b1350(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b22a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b2310(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b2330(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b2450(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b2560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b2640(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b2d00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b2d50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b2ec0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b3230(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b36a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b3940(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b52e0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b5970(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b5c70(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b6160(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b6170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106b6180(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b6190(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106b61a0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106b61b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b61c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b61d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b61e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b61f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b6200(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b6210(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b6220(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b6230(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b6240(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b6250(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b6260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b6270(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b6280(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b6290(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b62a0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b62b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b62c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b62d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_106b64b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_106b64c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_106b64d0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_106b6500(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_106b6510(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_106b6790(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_106b67b0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b8130(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b8160(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106b8690(float *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106b8900(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106b8910(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106b8920(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106b8a80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106b8aa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106b8f70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b9210(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9b50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9b60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9b70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9b80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9b90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9ba0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9bb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9bc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9bd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9be0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9bf0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9ca0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9cb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9cd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9ce0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9cf0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ba340(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106ba350(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106ba440(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106ba470(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106ba4d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106ba4e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_106ba4f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ba6c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ba6d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ba6e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ba6f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ba700(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ba710(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ba720(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ba730(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106ba7f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106ba800(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106ba810(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106ba820(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106ba830(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106ba840(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106ba850(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106bb3e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106bb3f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106bb410(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106bb420(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106bb430(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106bb620(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106bb630(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_106bcc30(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_106bcca0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_106bcd20(uint param_1);
// Reference entry 10654a40; body size 38 bytes.
#line 1 "ENTRY_10654a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654a40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654a70; body size 38 bytes.
#line 1 "ENTRY_10654a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654a70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654aa0; body size 38 bytes.
#line 1 "ENTRY_10654aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654aa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654ad0; body size 38 bytes.
#line 1 "ENTRY_10654ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654ad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654b00; body size 38 bytes.
#line 1 "ENTRY_10654b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654b00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654b30; body size 38 bytes.
#line 1 "ENTRY_10654b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654b30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654b60; body size 38 bytes.
#line 1 "ENTRY_10654b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654b60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654b90; body size 38 bytes.
#line 1 "ENTRY_10654b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654b90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654bc0; body size 38 bytes.
#line 1 "ENTRY_10654bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654bc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654bf0; body size 38 bytes.
#line 1 "ENTRY_10654bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654bf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654c20; body size 38 bytes.
#line 1 "ENTRY_10654c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654c20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654c50; body size 38 bytes.
#line 1 "ENTRY_10654c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654c50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654c80; body size 38 bytes.
#line 1 "ENTRY_10654c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654c80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654cb0; body size 38 bytes.
#line 1 "ENTRY_10654cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654cb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654ce0; body size 38 bytes.
#line 1 "ENTRY_10654ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654ce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654d10; body size 38 bytes.
#line 1 "ENTRY_10654d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654d10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654d40; body size 38 bytes.
#line 1 "ENTRY_10654d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654d40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654d70; body size 38 bytes.
#line 1 "ENTRY_10654d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654d70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654da0; body size 38 bytes.
#line 1 "ENTRY_10654da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654da0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654dd0; body size 38 bytes.
#line 1 "ENTRY_10654dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654dd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654e00; body size 38 bytes.
#line 1 "ENTRY_10654e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654e00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654e30; body size 38 bytes.
#line 1 "ENTRY_10654e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654e30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655280; body size 38 bytes.
#line 1 "ENTRY_10655280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655280(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106552d0; body size 38 bytes.
#line 1 "ENTRY_106552d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106552d0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPage;
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106553e0; body size 38 bytes.
#line 1 "ENTRY_106553e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106553e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655430; body size 38 bytes.
#line 1 "ENTRY_10655430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655430(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655480; body size 38 bytes.
#line 1 "ENTRY_10655480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655480(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106554d0; body size 38 bytes.
#line 1 "ENTRY_106554d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106554d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655520; body size 38 bytes.
#line 1 "ENTRY_10655520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655520(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655570; body size 38 bytes.
#line 1 "ENTRY_10655570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655570(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106555c0; body size 38 bytes.
#line 1 "ENTRY_106555c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106555c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPage;
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655610; body size 38 bytes.
#line 1 "ENTRY_10655610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655610(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPage;
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655660; body size 38 bytes.
#line 1 "ENTRY_10655660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655660(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPage;
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655780; body size 38 bytes.
#line 1 "ENTRY_10655780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655780(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106557d0; body size 38 bytes.
#line 1 "ENTRY_106557d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106557d0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPage;
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655820; body size 38 bytes.
#line 1 "ENTRY_10655820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655820(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPage;
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655870; body size 38 bytes.
#line 1 "ENTRY_10655870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655870(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106558c0; body size 38 bytes.
#line 1 "ENTRY_106558c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106558c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655910; body size 38 bytes.
#line 1 "ENTRY_10655910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655910(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655960; body size 38 bytes.
#line 1 "ENTRY_10655960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106559b0; body size 38 bytes.
#line 1 "ENTRY_106559b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106559b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655a00; body size 38 bytes.
#line 1 "ENTRY_10655a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655a00(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPage;
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655a50; body size 38 bytes.
#line 1 "ENTRY_10655a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655a50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655c30; body size 38 bytes.
#line 1 "ENTRY_10655c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655c30(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPage;
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655d50; body size 38 bytes.
#line 1 "ENTRY_10655d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655d50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655da0; body size 38 bytes.
#line 1 "ENTRY_10655da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655da0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655df0; body size 38 bytes.
#line 1 "ENTRY_10655df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655df0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655e40; body size 38 bytes.
#line 1 "ENTRY_10655e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655e40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655e90; body size 38 bytes.
#line 1 "ENTRY_10655e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655e90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655fc0; body size 38 bytes.
#line 1 "ENTRY_10655fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655fc0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPage;
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10656010; body size 38 bytes.
#line 1 "ENTRY_10656010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10656010(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10656060; body size 38 bytes.
#line 1 "ENTRY_10656060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10656060(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPage;
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106560b0; body size 38 bytes.
#line 1 "ENTRY_106560b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106560b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10656100; body size 38 bytes.
#line 1 "ENTRY_10656100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10656100(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizState;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizState;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10656b00; body size 31 bytes.
#line 1 "ENTRY_10656b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10656b00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if (param_1 != (undefined4 *)(param_2)) {
    thunk_FUN_10648010(*param_2,param_2[1],param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10656b30; body size 12 bytes.
#line 1 "ENTRY_10656b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10656b30(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 8);
}


// Reference entry 10656b40; body size 3 bytes.
#line 1 "ENTRY_10656b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10656b40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10656b50; body size 3 bytes.
#line 1 "ENTRY_10656b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10656b50(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10656b60; body size 3 bytes.
#line 1 "ENTRY_10656b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10656b60(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10656b70; body size 3 bytes.
#line 1 "ENTRY_10656b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10656b70(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10656b80; body size 3 bytes.
#line 1 "ENTRY_10656b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10656b80(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10656b90; body size 3 bytes.
#line 1 "ENTRY_10656b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10656b90(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1065a470; body size 31 bytes.
#line 1 "ENTRY_1065a470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1065a470(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 1065a4a0; body size 31 bytes.
#line 1 "ENTRY_1065a4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1065a4a0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 1065a500; body size 131 bytes.
#line 1 "ENTRY_1065a500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1065a500(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x71c71c8) {
    param_2 = (uint)(param_2 * 0x24);
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        pvVar1 = (void *)(operator_new(param_2));
        *param_1 = (uint)((uint)pvVar1);
        param_1[1] = (uint)pvVar1;
        param_1[2] = (uint)((int)pvVar1 + param_2);
        return;
      }
      *param_1 = (uint)(0);
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    if (param_2 < param_2 + 0x23) {
      pvVar1 = (void *)(operator_new(param_2 + 0x23));
      if (pvVar1 != (void *)0x0) {
        uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
        *(void **)(uVar2 - 4) = pvVar1;
        *param_1 = (uint)(uVar2);
        param_1[1] = uVar2;
        param_1[2] = uVar2 + param_2;
        return;
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 1065a5b0; body size 182 bytes.
#line 1 "ENTRY_1065a5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1065a5b0(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x1fffffff < param_2) {
                    
    thunk_FUN_1036efe0();
  }
  iVar2 = (int)(*param_1);
  uVar3 = (uint)(param_1[2] - iVar2 >> 3);
  if (0x1fffffff - (uVar3 >> 1) < uVar3) {
    uVar3 = (uint)(0x1fffffff);
  }
  else {
    uVar3 = (uint)((uVar3 >> 1) + uVar3);
    if (uVar3 < param_2) {
      uVar3 = (uint)(param_2);
    }
  }
  if (iVar2 != 0) {
    thunk_FUN_10352a90(iVar2,param_1[1],param_1);
    iVar2 = (int)(*param_1);
    uVar4 = (uint)(param_1[2] - iVar2 & 0xfffffff8);
    iVar1 = (int)(iVar2);
    if (0xfff < uVar4) {
      iVar1 = (int)(*(int *)(iVar2 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar2 - iVar1) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar1,uVar4);
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  iVar2 = (int)(thunk_FUN_10370f20(uVar3));
  *param_1 = (int)(iVar2);
  param_1[1] = iVar2;
  param_1[2] = iVar2 + uVar3 * 8;
  return;
}


// Reference entry 1065ab80; body size 8 bytes.
#line 1 "ENTRY_1065ab80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1065ab80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1065abc0; body size 3 bytes.
#line 1 "ENTRY_1065abc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065abc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1065abd0; body size 3 bytes.
#line 1 "ENTRY_1065abd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065abd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1065abe0; body size 3 bytes.
#line 1 "ENTRY_1065abe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065abe0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1065abf0; body size 3 bytes.
#line 1 "ENTRY_1065abf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065abf0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1065ac00; body size 3 bytes.
#line 1 "ENTRY_1065ac00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065ac00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1065ac10; body size 3 bytes.
#line 1 "ENTRY_1065ac10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065ac10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1065ac20; body size 3 bytes.
#line 1 "ENTRY_1065ac20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065ac20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1065ac30; body size 3 bytes.
#line 1 "ENTRY_1065ac30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065ac30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1065ac40; body size 3 bytes.
#line 1 "ENTRY_1065ac40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065ac40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1065ac60; body size 4 bytes.
#line 1 "ENTRY_1065ac60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065ac60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1065ac70; body size 7 bytes.
#line 1 "ENTRY_1065ac70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1065ac70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 1065ace0; body size 6 bytes.
#line 1 "ENTRY_1065ace0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1065ace0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1065acf0; body size 26 bytes.
#line 1 "ENTRY_1065acf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1065acf0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 1065ad10; body size 10 bytes.
#line 1 "ENTRY_1065ad10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1065ad10(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 1065af80; body size 90 bytes.
#line 1 "ENTRY_1065af80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1065af80(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xaaaaaab) {
    param_1 = (uint)(param_1 * 0x18);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 1065b000; body size 90 bytes.
#line 1 "ENTRY_1065b000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1065b000(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xaaaaaab) {
    param_1 = (uint)(param_1 * 0x18);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 1065b100; body size 7 bytes.
#line 1 "ENTRY_1065b100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1065b100(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(param_1 + 4) + -8);
}


// Reference entry 1065e690; body size 57 bytes.
#line 1 "ENTRY_1065e690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1065e690(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 1065e6e0; body size 57 bytes.
#line 1 "ENTRY_1065e6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1065e6e0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 1065e780; body size 3 bytes.
#line 1 "ENTRY_1065e780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065e780(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1065e790; body size 7 bytes.
#line 1 "ENTRY_1065e790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1065e790(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x11d));
}


// Reference entry 1066d530; body size 7 bytes.
#line 1 "ENTRY_1066d530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1066d530(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x100));
}


// Reference entry 1066e440; body size 7 bytes.
#line 1 "ENTRY_1066e440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1066e440(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x11c));
}


// Reference entry 10677840; body size 6 bytes.
#line 1 "ENTRY_10677840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677840(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2388);
}


// Reference entry 10677850; body size 6 bytes.
#line 1 "ENTRY_10677850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677850(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23d8);
}


// Reference entry 10677860; body size 6 bytes.
#line 1 "ENTRY_10677860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677860(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2390);
}


// Reference entry 10677870; body size 6 bytes.
#line 1 "ENTRY_10677870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677870(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2394);
}


// Reference entry 10677880; body size 6 bytes.
#line 1 "ENTRY_10677880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677880(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2378);
}


// Reference entry 10677890; body size 6 bytes.
#line 1 "ENTRY_10677890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677890(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23b0);
}


// Reference entry 106778a0; body size 6 bytes.
#line 1 "ENTRY_106778a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106778a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2398);
}


// Reference entry 106778b0; body size 6 bytes.
#line 1 "ENTRY_106778b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106778b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2374);
}


// Reference entry 106778c0; body size 6 bytes.
#line 1 "ENTRY_106778c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106778c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23a8);
}


// Reference entry 106778d0; body size 6 bytes.
#line 1 "ENTRY_106778d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106778d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23fc);
}


// Reference entry 106778e0; body size 6 bytes.
#line 1 "ENTRY_106778e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106778e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23f0);
}


// Reference entry 106778f0; body size 6 bytes.
#line 1 "ENTRY_106778f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106778f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23f8);
}


// Reference entry 10677900; body size 6 bytes.
#line 1 "ENTRY_10677900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677900(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a236c);
}


// Reference entry 10677910; body size 6 bytes.
#line 1 "ENTRY_10677910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677910(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a237c);
}


// Reference entry 10677920; body size 6 bytes.
#line 1 "ENTRY_10677920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677920(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23f4);
}


// Reference entry 10677930; body size 6 bytes.
#line 1 "ENTRY_10677930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677930(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23d4);
}


// Reference entry 10677940; body size 6 bytes.
#line 1 "ENTRY_10677940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677940(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23c8);
}


// Reference entry 10677950; body size 6 bytes.
#line 1 "ENTRY_10677950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677950(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a239c);
}


// Reference entry 10677960; body size 6 bytes.
#line 1 "ENTRY_10677960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677960(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2384);
}


// Reference entry 10677970; body size 6 bytes.
#line 1 "ENTRY_10677970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677970(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23b8);
}


// Reference entry 10677980; body size 6 bytes.
#line 1 "ENTRY_10677980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677980(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23ac);
}


// Reference entry 10677990; body size 6 bytes.
#line 1 "ENTRY_10677990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677990(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23ec);
}


// Reference entry 106779a0; body size 6 bytes.
#line 1 "ENTRY_106779a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106779a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23c0);
}


// Reference entry 106779b0; body size 6 bytes.
#line 1 "ENTRY_106779b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106779b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a238c);
}


// Reference entry 106779c0; body size 6 bytes.
#line 1 "ENTRY_106779c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106779c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2368);
}


// Reference entry 106779d0; body size 6 bytes.
#line 1 "ENTRY_106779d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106779d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23e0);
}


// Reference entry 106779e0; body size 6 bytes.
#line 1 "ENTRY_106779e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106779e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23dc);
}


// Reference entry 106779f0; body size 6 bytes.
#line 1 "ENTRY_106779f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106779f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2380);
}


// Reference entry 10677a00; body size 6 bytes.
#line 1 "ENTRY_10677a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a00(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23cc);
}


// Reference entry 10677a10; body size 6 bytes.
#line 1 "ENTRY_10677a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23bc);
}


// Reference entry 10677a20; body size 6 bytes.
#line 1 "ENTRY_10677a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23b4);
}


// Reference entry 10677a30; body size 6 bytes.
#line 1 "ENTRY_10677a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a30(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23d0);
}


// Reference entry 10677a40; body size 6 bytes.
#line 1 "ENTRY_10677a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2370);
}


// Reference entry 10677a50; body size 6 bytes.
#line 1 "ENTRY_10677a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23e4);
}


// Reference entry 10677a60; body size 6 bytes.
#line 1 "ENTRY_10677a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23c4);
}


// Reference entry 10677a70; body size 6 bytes.
#line 1 "ENTRY_10677a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23e8);
}


// Reference entry 10677a80; body size 6 bytes.
#line 1 "ENTRY_10677a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23a4);
}


// Reference entry 10677a90; body size 6 bytes.
#line 1 "ENTRY_10677a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23a0);
}


// Reference entry 10677aa0; body size 6 bytes.
#line 1 "ENTRY_10677aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677aa0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2400);
}


// Reference entry 10677ab0; body size 5 bytes.
#line 1 "ENTRY_10677ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ab0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677ac0; body size 5 bytes.
#line 1 "ENTRY_10677ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ac0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677ad0; body size 5 bytes.
#line 1 "ENTRY_10677ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ad0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677ae0; body size 5 bytes.
#line 1 "ENTRY_10677ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ae0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677af0; body size 5 bytes.
#line 1 "ENTRY_10677af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677af0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677b00; body size 5 bytes.
#line 1 "ENTRY_10677b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677b10; body size 5 bytes.
#line 1 "ENTRY_10677b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677b20; body size 5 bytes.
#line 1 "ENTRY_10677b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677b30; body size 5 bytes.
#line 1 "ENTRY_10677b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677b40; body size 5 bytes.
#line 1 "ENTRY_10677b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677b50; body size 5 bytes.
#line 1 "ENTRY_10677b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677b60; body size 5 bytes.
#line 1 "ENTRY_10677b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677b70; body size 5 bytes.
#line 1 "ENTRY_10677b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677b80; body size 5 bytes.
#line 1 "ENTRY_10677b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677b90; body size 5 bytes.
#line 1 "ENTRY_10677b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677ba0; body size 5 bytes.
#line 1 "ENTRY_10677ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ba0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677bb0; body size 5 bytes.
#line 1 "ENTRY_10677bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677bb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677bc0; body size 5 bytes.
#line 1 "ENTRY_10677bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677bc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677bd0; body size 5 bytes.
#line 1 "ENTRY_10677bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677bd0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677be0; body size 5 bytes.
#line 1 "ENTRY_10677be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677be0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677bf0; body size 5 bytes.
#line 1 "ENTRY_10677bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677bf0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677c00; body size 5 bytes.
#line 1 "ENTRY_10677c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677c10; body size 5 bytes.
#line 1 "ENTRY_10677c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677c20; body size 5 bytes.
#line 1 "ENTRY_10677c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677c30; body size 5 bytes.
#line 1 "ENTRY_10677c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677c40; body size 5 bytes.
#line 1 "ENTRY_10677c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677c50; body size 5 bytes.
#line 1 "ENTRY_10677c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677c60; body size 5 bytes.
#line 1 "ENTRY_10677c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677c70; body size 5 bytes.
#line 1 "ENTRY_10677c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677c80; body size 5 bytes.
#line 1 "ENTRY_10677c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677c90; body size 5 bytes.
#line 1 "ENTRY_10677c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677ca0; body size 5 bytes.
#line 1 "ENTRY_10677ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ca0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677cb0; body size 5 bytes.
#line 1 "ENTRY_10677cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677cb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677cc0; body size 5 bytes.
#line 1 "ENTRY_10677cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677cc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677cd0; body size 5 bytes.
#line 1 "ENTRY_10677cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677cd0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677ce0; body size 5 bytes.
#line 1 "ENTRY_10677ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ce0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677cf0; body size 5 bytes.
#line 1 "ENTRY_10677cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677cf0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10677d10; body size 7 bytes.
#line 1 "ENTRY_10677d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10677d10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x10c));
}


// Reference entry 10677d20; body size 5 bytes.
#line 1 "ENTRY_10677d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677d20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 10677d30; body size 5 bytes.
#line 1 "ENTRY_10677d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677d30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677d40; body size 5 bytes.
#line 1 "ENTRY_10677d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677d40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677d50; body size 5 bytes.
#line 1 "ENTRY_10677d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677d50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677d60; body size 5 bytes.
#line 1 "ENTRY_10677d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677d60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677d70; body size 5 bytes.
#line 1 "ENTRY_10677d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677d70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677d80; body size 5 bytes.
#line 1 "ENTRY_10677d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677d80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677d90; body size 5 bytes.
#line 1 "ENTRY_10677d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677d90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677da0; body size 5 bytes.
#line 1 "ENTRY_10677da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677da0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677db0; body size 5 bytes.
#line 1 "ENTRY_10677db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677db0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677dc0; body size 5 bytes.
#line 1 "ENTRY_10677dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677dc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677dd0; body size 5 bytes.
#line 1 "ENTRY_10677dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677dd0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677de0; body size 5 bytes.
#line 1 "ENTRY_10677de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677de0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677df0; body size 5 bytes.
#line 1 "ENTRY_10677df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677df0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677e00; body size 5 bytes.
#line 1 "ENTRY_10677e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677e10; body size 5 bytes.
#line 1 "ENTRY_10677e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677e20; body size 5 bytes.
#line 1 "ENTRY_10677e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677e30; body size 5 bytes.
#line 1 "ENTRY_10677e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677e40; body size 5 bytes.
#line 1 "ENTRY_10677e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677e50; body size 5 bytes.
#line 1 "ENTRY_10677e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677e60; body size 5 bytes.
#line 1 "ENTRY_10677e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677e70; body size 5 bytes.
#line 1 "ENTRY_10677e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677e80; body size 5 bytes.
#line 1 "ENTRY_10677e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677e90; body size 5 bytes.
#line 1 "ENTRY_10677e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677ea0; body size 5 bytes.
#line 1 "ENTRY_10677ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ea0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677eb0; body size 5 bytes.
#line 1 "ENTRY_10677eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677eb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677ec0; body size 5 bytes.
#line 1 "ENTRY_10677ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ec0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677ed0; body size 5 bytes.
#line 1 "ENTRY_10677ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ed0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677ee0; body size 5 bytes.
#line 1 "ENTRY_10677ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ee0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677ef0; body size 5 bytes.
#line 1 "ENTRY_10677ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ef0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677f00; body size 5 bytes.
#line 1 "ENTRY_10677f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677f10; body size 5 bytes.
#line 1 "ENTRY_10677f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677f20; body size 5 bytes.
#line 1 "ENTRY_10677f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677f30; body size 5 bytes.
#line 1 "ENTRY_10677f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677f40; body size 5 bytes.
#line 1 "ENTRY_10677f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677f50; body size 5 bytes.
#line 1 "ENTRY_10677f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677f60; body size 5 bytes.
#line 1 "ENTRY_10677f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677f70; body size 5 bytes.
#line 1 "ENTRY_10677f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677f80; body size 5 bytes.
#line 1 "ENTRY_10677f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677f90; body size 5 bytes.
#line 1 "ENTRY_10677f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677fa0; body size 5 bytes.
#line 1 "ENTRY_10677fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677fa0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677fb0; body size 5 bytes.
#line 1 "ENTRY_10677fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677fb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677fc0; body size 5 bytes.
#line 1 "ENTRY_10677fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677fc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10677fd0; body size 5 bytes.
#line 1 "ENTRY_10677fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677fd0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10678960; body size 7 bytes.
#line 1 "ENTRY_10678960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10678960(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 1067efa0; body size 3 bytes.
#line 1 "ENTRY_1067efa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1067efa0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1067efb0; body size 3 bytes.
#line 1 "ENTRY_1067efb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1067efb0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1067efc0; body size 3 bytes.
#line 1 "ENTRY_1067efc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1067efc0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1067f050; body size 28 bytes.
#line 1 "ENTRY_1067f050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1067f050(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 1067f080; body size 28 bytes.
#line 1 "ENTRY_1067f080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1067f080(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 1067f0b0; body size 28 bytes.
#line 1 "ENTRY_1067f0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1067f0b0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 1067f0e0; body size 28 bytes.
#line 1 "ENTRY_1067f0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1067f0e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 1067f120; body size 5 bytes.
#line 1 "ENTRY_1067f120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1067f120(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1067f130; body size 5 bytes.
#line 1 "ENTRY_1067f130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1067f130(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1067f150; body size 13 bytes.
#line 1 "ENTRY_1067f150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1067f150(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x11d) = param_2;
  return;
}


// Reference entry 1067f1f0; body size 13 bytes.
#line 1 "ENTRY_1067f1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1067f1f0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x11a) = param_2;
  return;
}


// Reference entry 1067f320; body size 13 bytes.
#line 1 "ENTRY_1067f320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1067f320(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x11c) = param_2;
  return;
}


// Reference entry 1067f330; body size 13 bytes.
#line 1 "ENTRY_1067f330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1067f330(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x100) = param_2;
  return;
}


// Reference entry 1067f340; body size 31 bytes.
#line 1 "ENTRY_1067f340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1067f340(undefined4 *param_2)
{
  int param_1 = (int )this;
  if ((undefined4 *)(param_1 + 0x110) != param_2) {
    thunk_FUN_10648010(*param_2,param_2[1],param_2);
  }
  return;
}


// Reference entry 1067f370; body size 9 bytes.
#line 1 "ENTRY_1067f370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1067f370(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 1067f450; body size 43 bytes.
#line 1 "ENTRY_1067f450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1067f450(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = 0;
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (int)piVar1;
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 1067f490; body size 5 bytes.
#line 1 "ENTRY_1067f490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1067f490(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1067f590; body size 10 bytes.
#line 1 "ENTRY_1067f590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1067f590(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1067f990; body size 8 bytes.
#line 1 "ENTRY_1067f990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1067f990(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 1067f9a0; body size 3 bytes.
#line 1 "ENTRY_1067f9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1067f9a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1067fb10; body size 26 bytes.
#line 1 "ENTRY_1067fb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1067fb10(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 1067fb30; body size 76 bytes.
#line 1 "ENTRY_1067fb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1067fb30(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_2[9]);
  if (piVar1 != (int *)0x0) {
    if (piVar1 == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1));
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)((int *)param_2[9]);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_2));
        param_2[9] = 0;
        return;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return;
}


// Reference entry 10680540; body size 3 bytes.
#line 1 "ENTRY_10680540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10680540(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106805d0; body size 28 bytes.
#line 1 "ENTRY_106805d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106805d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 106813e0; body size 18 bytes.
#line 1 "ENTRY_106813e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106813e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10681400; body size 18 bytes.
#line 1 "ENTRY_10681400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10681400(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10681420; body size 25 bytes.
#line 1 "ENTRY_10681420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10681420(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106815c0; body size 22 bytes.
#line 1 "ENTRY_106815c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106815c0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106815e0; body size 18 bytes.
#line 1 "ENTRY_106815e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106815e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10681600; body size 18 bytes.
#line 1 "ENTRY_10681600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10681600(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106817f0; body size 22 bytes.
#line 1 "ENTRY_106817f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106817f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10681850; body size 26 bytes.
#line 1 "ENTRY_10681850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10681850(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10681870; body size 12 bytes.
#line 1 "ENTRY_10681870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10681870(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10681880; body size 3 bytes.
#line 1 "ENTRY_10681880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10681880(void)

{
  return;
}


// Reference entry 10681890; body size 25 bytes.
#line 1 "ENTRY_10681890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10681890(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 106818b0; body size 25 bytes.
#line 1 "ENTRY_106818b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106818b0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 106818d0; body size 13 bytes.
#line 1 "ENTRY_106818d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106818d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106818e0; body size 13 bytes.
#line 1 "ENTRY_106818e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106818e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106818f0; body size 13 bytes.
#line 1 "ENTRY_106818f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106818f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10681900; body size 13 bytes.
#line 1 "ENTRY_10681900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10681900(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10681910; body size 3 bytes.
#line 1 "ENTRY_10681910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10681910(void)

{
  return;
}


// Reference entry 10681920; body size 3 bytes.
#line 1 "ENTRY_10681920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10681920(void)

{
  return;
}


// Reference entry 10682460; body size 15 bytes.
#line 1 "ENTRY_10682460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10682460(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10682480; body size 15 bytes.
#line 1 "ENTRY_10682480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10682480(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 106825c0; body size 7 bytes.
#line 1 "ENTRY_106825c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106825c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106825d0; body size 7 bytes.
#line 1 "ENTRY_106825d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106825d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106825e0; body size 5 bytes.
#line 1 "ENTRY_106825e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106825e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106825f0; body size 5 bytes.
#line 1 "ENTRY_106825f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106825f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682660; body size 92 bytes.
#line 1 "ENTRY_10682660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10682660(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (int *)(param_2)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_3);
  }
  do {
    iVar2 = (int)(*param_1);
    if (iVar2 != *param_3) {
      piVar1 = (int *)((int *)param_3[1]);
      if (piVar1 != (int *)0x0) {
        *param_3 = (int)(0);
        param_3[1] = 0;
        (**(code **)(*piVar1 + 8))();
        iVar2 = (int)(*param_1);
      }
      *param_3 = (int)(iVar2);
      piVar1 = (int *)((int *)param_1[1]);
      param_3[1] = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_1 = (int *)(param_1 + 2);
    param_3 = (int *)(param_3 + 2);
  } while (param_1 != (int *)(param_2));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_3);
}


// Reference entry 10682820; body size 5 bytes.
#line 1 "ENTRY_10682820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682820(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682970; body size 5 bytes.
#line 1 "ENTRY_10682970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682970(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682980; body size 5 bytes.
#line 1 "ENTRY_10682980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682980(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682990; body size 5 bytes.
#line 1 "ENTRY_10682990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682990(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106829a0; body size 5 bytes.
#line 1 "ENTRY_106829a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106829a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106829b0; body size 5 bytes.
#line 1 "ENTRY_106829b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106829b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106829c0; body size 5 bytes.
#line 1 "ENTRY_106829c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106829c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106829d0; body size 5 bytes.
#line 1 "ENTRY_106829d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106829d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106829e0; body size 5 bytes.
#line 1 "ENTRY_106829e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106829e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106829f0; body size 5 bytes.
#line 1 "ENTRY_106829f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106829f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682a00; body size 5 bytes.
#line 1 "ENTRY_10682a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682a00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682a10; body size 5 bytes.
#line 1 "ENTRY_10682a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682a10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682a20; body size 5 bytes.
#line 1 "ENTRY_10682a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682a20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682ce0; body size 15 bytes.
#line 1 "ENTRY_10682ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682ce0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10682d00; body size 15 bytes.
#line 1 "ENTRY_10682d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682d00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10682d20; body size 15 bytes.
#line 1 "ENTRY_10682d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682d20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10682d40; body size 15 bytes.
#line 1 "ENTRY_10682d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682d40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10682d60; body size 5 bytes.
#line 1 "ENTRY_10682d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682d60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682d70; body size 5 bytes.
#line 1 "ENTRY_10682d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682d70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682d80; body size 5 bytes.
#line 1 "ENTRY_10682d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682d80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682d90; body size 5 bytes.
#line 1 "ENTRY_10682d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682d90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682da0; body size 5 bytes.
#line 1 "ENTRY_10682da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682da0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682db0; body size 5 bytes.
#line 1 "ENTRY_10682db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682db0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682dc0; body size 5 bytes.
#line 1 "ENTRY_10682dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682dc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682dd0; body size 5 bytes.
#line 1 "ENTRY_10682dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682dd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682de0; body size 5 bytes.
#line 1 "ENTRY_10682de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682de0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682df0; body size 5 bytes.
#line 1 "ENTRY_10682df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682df0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682e00; body size 5 bytes.
#line 1 "ENTRY_10682e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682e00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682e10; body size 5 bytes.
#line 1 "ENTRY_10682e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682e10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10682e20; body size 6 bytes.
#line 1 "ENTRY_10682e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10682e20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIUrlRequest");
}


// Reference entry 10682f80; body size 5 bytes.
#line 1 "ENTRY_10682f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682f80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10683070; body size 16 bytes.
#line 1 "ENTRY_10683070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10683070(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10683090; body size 18 bytes.
#line 1 "ENTRY_10683090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10683090(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106830b0; body size 18 bytes.
#line 1 "ENTRY_106830b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106830b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10683150; body size 11 bytes.
#line 1 "ENTRY_10683150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10683150(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10683160; body size 11 bytes.
#line 1 "ENTRY_10683160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10683160(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10683270; body size 11 bytes.
#line 1 "ENTRY_10683270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10683270(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10683280; body size 11 bytes.
#line 1 "ENTRY_10683280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10683280(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10683290; body size 16 bytes.
#line 1 "ENTRY_10683290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10683290(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106832b0; body size 16 bytes.
#line 1 "ENTRY_106832b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106832b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106832d0; body size 21 bytes.
#line 1 "ENTRY_106832d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106832d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106832f0; body size 11 bytes.
#line 1 "ENTRY_106832f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106832f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10683300; body size 11 bytes.
#line 1 "ENTRY_10683300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10683300(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10683310; body size 23 bytes.
#line 1 "ENTRY_10683310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10683310(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10683330; body size 3 bytes.
#line 1 "ENTRY_10683330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10683330(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10683340; body size 3 bytes.
#line 1 "ENTRY_10683340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10683340(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10683350; body size 3 bytes.
#line 1 "ENTRY_10683350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10683350(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10683360; body size 18 bytes.
#line 1 "ENTRY_10683360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10683360(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10683380; body size 52 bytes.
#line 1 "ENTRY_10683380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10683380(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10683580; body size 23 bytes.
#line 1 "ENTRY_10683580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10683580(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10684370; body size 7 bytes.
#line 1 "ENTRY_10684370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10684370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 106846c0; body size 65 bytes.
#line 1 "ENTRY_106846c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_106846c0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if (iVar2 != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10684720; body size 65 bytes.
#line 1 "ENTRY_10684720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10684720(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if (iVar2 != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106847c0; body size 14 bytes.
#line 1 "ENTRY_106847c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_106847c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 106847e0; body size 14 bytes.
#line 1 "ENTRY_106847e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_106847e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10684910; body size 3 bytes.
#line 1 "ENTRY_10684910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10684910(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10684920; body size 3 bytes.
#line 1 "ENTRY_10684920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10684920(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10684930; body size 7 bytes.
#line 1 "ENTRY_10684930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10684930(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10684940; body size 8 bytes.
#line 1 "ENTRY_10684940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10684940(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10684950; body size 3 bytes.
#line 1 "ENTRY_10684950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10684950(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10684960; body size 3 bytes.
#line 1 "ENTRY_10684960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10684960(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10684970; body size 6 bytes.
#line 1 "ENTRY_10684970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10684970(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10684980; body size 6 bytes.
#line 1 "ENTRY_10684980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10684980(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10684990; body size 6 bytes.
#line 1 "ENTRY_10684990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10684990(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 106849a0; body size 6 bytes.
#line 1 "ENTRY_106849a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106849a0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 106849b0; body size 3 bytes.
#line 1 "ENTRY_106849b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106849b0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106849c0; body size 3 bytes.
#line 1 "ENTRY_106849c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106849c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10684b90; body size 6 bytes.
#line 1 "ENTRY_10684b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10684b90(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10684ba0; body size 6 bytes.
#line 1 "ENTRY_10684ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10684ba0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10684fd0; body size 31 bytes.
#line 1 "ENTRY_10684fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10684fd0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10685000; body size 31 bytes.
#line 1 "ENTRY_10685000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10685000(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10685070; body size 49 bytes.
#line 1 "ENTRY_10685070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10685070(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 3);
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x1fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10685180; body size 3 bytes.
#line 1 "ENTRY_10685180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10685180(void)

{
  return;
}


// Reference entry 106851b0; body size 5 bytes.
#line 1 "ENTRY_106851b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106851b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106851c0; body size 3 bytes.
#line 1 "ENTRY_106851c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106851c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106851d0; body size 3 bytes.
#line 1 "ENTRY_106851d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106851d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106851e0; body size 3 bytes.
#line 1 "ENTRY_106851e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106851e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106851f0; body size 3 bytes.
#line 1 "ENTRY_106851f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106851f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10685200; body size 3 bytes.
#line 1 "ENTRY_10685200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685200(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10685210; body size 3 bytes.
#line 1 "ENTRY_10685210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685210(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10685220; body size 3 bytes.
#line 1 "ENTRY_10685220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685220(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10685230; body size 3 bytes.
#line 1 "ENTRY_10685230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685230(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10685240; body size 3 bytes.
#line 1 "ENTRY_10685240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685240(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10685250; body size 3 bytes.
#line 1 "ENTRY_10685250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685250(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10685260; body size 3 bytes.
#line 1 "ENTRY_10685260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685260(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10685270; body size 3 bytes.
#line 1 "ENTRY_10685270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685270(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10685280; body size 3 bytes.
#line 1 "ENTRY_10685280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685280(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10685290; body size 3 bytes.
#line 1 "ENTRY_10685290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685290(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106852a0; body size 3 bytes.
#line 1 "ENTRY_106852a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106852a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106852b0; body size 3 bytes.
#line 1 "ENTRY_106852b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106852b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106852c0; body size 3 bytes.
#line 1 "ENTRY_106852c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106852c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106852d0; body size 3 bytes.
#line 1 "ENTRY_106852d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106852d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106852e0; body size 3 bytes.
#line 1 "ENTRY_106852e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106852e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106852f0; body size 3 bytes.
#line 1 "ENTRY_106852f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106852f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10685820; body size 79 bytes.
#line 1 "ENTRY_10685820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10685820(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8));
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = (int)(param_2);
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = (int *)(*(int **)(param_2 + 4));
  if (param_2 == *piVar2) {
    *piVar2 = (int)((int)piVar1);
    *piVar1 = (int)(param_2);
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = (int)(param_2);
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 10685890; body size 79 bytes.
#line 1 "ENTRY_10685890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10685890(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8));
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = (int)(param_2);
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = (int *)(*(int **)(param_2 + 4));
  if (param_2 == *piVar2) {
    *piVar2 = (int)((int)piVar1);
    *piVar1 = (int)(param_2);
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = (int)(param_2);
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 10685900; body size 30 bytes.
#line 1 "ENTRY_10685900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10685900(int param_1)

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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10685930; body size 31 bytes.
#line 1 "ENTRY_10685930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10685930(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = (char)(*(char *)(*param_1 + 0xd));
  piVar2 = (int *)((int *)*param_1);
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)((int *)*piVar3);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
    param_1 = (int *)(piVar3);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10685960; body size 31 bytes.
#line 1 "ENTRY_10685960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10685960(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = (char)(*(char *)(*param_1 + 0xd));
  piVar2 = (int *)((int *)*param_1);
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)((int *)*piVar3);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
    param_1 = (int *)(piVar3);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10685990; body size 3 bytes.
#line 1 "ENTRY_10685990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10685990(void)

{
  return;
}


// Reference entry 106859a0; body size 3 bytes.
#line 1 "ENTRY_106859a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106859a0(void)

{
  return;
}


// Reference entry 106859b0; body size 11 bytes.
#line 1 "ENTRY_106859b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106859b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 106859c0; body size 11 bytes.
#line 1 "ENTRY_106859c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106859c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 106859d0; body size 6 bytes.
#line 1 "ENTRY_106859d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106859d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106859e0; body size 83 bytes.
#line 1 "ENTRY_106859e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106859e0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(*(int *)(iVar1 + 8));
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)((int *)param_2[1]);
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = (int)(iVar1);
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 10685a50; body size 83 bytes.
#line 1 "ENTRY_10685a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10685a50(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(*(int *)(iVar1 + 8));
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)((int *)param_2[1]);
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = (int)(iVar1);
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 10685d40; body size 97 bytes.
#line 1 "ENTRY_10685d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10685d40(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x924924a) {
    param_1 = (uint)(param_1 * 0x1c);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10685dc0; body size 90 bytes.
#line 1 "ENTRY_10685dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10685dc0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xaaaaaab) {
    param_1 = (uint)(param_1 * 0x18);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10685e40; body size 87 bytes.
#line 1 "ENTRY_10685e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10685e40(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x20000000) {
    param_1 = (uint)(param_1 * 8);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10685f10; body size 13 bytes.
#line 1 "ENTRY_10685f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10685f10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10685f20; body size 3 bytes.
#line 1 "ENTRY_10685f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685f20(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10685f30; body size 11 bytes.
#line 1 "ENTRY_10685f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10685f30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10685f40; body size 9 bytes.
#line 1 "ENTRY_10685f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10685f40(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10685f80; body size 13 bytes.
#line 1 "ENTRY_10685f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10685f80(int param_1)

{
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
    return;
  }
  return;
}


// Reference entry 10686260; body size 63 bytes.
#line 1 "ENTRY_10686260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10686260(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x1c);
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


// Reference entry 106862b0; body size 57 bytes.
#line 1 "ENTRY_106862b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106862b0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10686300; body size 66 bytes.
#line 1 "ENTRY_10686300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10686300(int param_1,int param_2)

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


// Reference entry 10686360; body size 60 bytes.
#line 1 "ENTRY_10686360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10686360(int param_1,int param_2)

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


// Reference entry 10686400; body size 11 bytes.
#line 1 "ENTRY_10686400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10686400(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10686410; body size 4 bytes.
#line 1 "ENTRY_10686410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10686410(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10686420; body size 12 bytes.
#line 1 "ENTRY_10686420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10686420(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10686430; body size 13 bytes.
#line 1 "ENTRY_10686430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10686430(int param_1)

{
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x20) + 0x1c))();
    return;
  }
  return;
}


// Reference entry 10687200; body size 6 bytes.
#line 1 "ENTRY_10687200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10687200(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIUrlRequest");
}


// Reference entry 10687210; body size 6 bytes.
#line 1 "ENTRY_10687210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10687210(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10687220; body size 6 bytes.
#line 1 "ENTRY_10687220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10687220(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 10687230; body size 6 bytes.
#line 1 "ENTRY_10687230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10687230(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10687240; body size 6 bytes.
#line 1 "ENTRY_10687240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10687240(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10687250; body size 6 bytes.
#line 1 "ENTRY_10687250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10687250(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 10687260; body size 6 bytes.
#line 1 "ENTRY_10687260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10687260(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 106872a0; body size 5 bytes.
#line 1 "ENTRY_106872a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106872a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106872b0; body size 5 bytes.
#line 1 "ENTRY_106872b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106872b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10687760; body size 3 bytes.
#line 1 "ENTRY_10687760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10687760(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10687770; body size 3 bytes.
#line 1 "ENTRY_10687770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10687770(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10687a10; body size 28 bytes.
#line 1 "ENTRY_10687a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10687a10(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10687d10; body size 40 bytes.
#line 1 "ENTRY_10687d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10687d10(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10687d50; body size 6 bytes.
#line 1 "ENTRY_10687d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10687d50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIShare");
}


// Reference entry 10687d60; body size 6 bytes.
#line 1 "ENTRY_10687d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10687d60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIShareManager");
}


// Reference entry 10687e50; body size 27 bytes.
#line 1 "ENTRY_10687e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10687e50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10688020; body size 154 bytes.
#line 1 "ENTRY_10688020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10688020(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar1 = (int)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + 4 + param_2));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))());
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))());
  }
  iVar1 = (int)(*(int *)(*(int *)(param_2 + 4) + 4));
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50))
                    (param_3,param_4,param_5,param_6));
  pcVar5 = (char *)("CreateObject");
  uVar4 = (undefined4)((**(code **)(*(int *)(param_2 + iVar1 + 4) + 0x68))("CreateObject",uVar3));
  thunk_FUN_111c0760(uVar2,uVar4,pcVar5,uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDCreateObjectAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpCDCreateObjectAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpCDCreateObjectAIOOp;
  *(undefined1 *)(param_1 + 0x35f4) = 0;
  *(undefined1 *)(param_1 + 0x36f4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106880e0; body size 11 bytes.
#line 1 "ENTRY_106880e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106880e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIShare);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106880f0; body size 9 bytes.
#line 1 "ENTRY_106880f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106880f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIShare);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10688100; body size 9 bytes.
#line 1 "ENTRY_10688100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10688100(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIShareManager);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106885e0; body size 87 bytes.
#line 1 "ENTRY_106885e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106885e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10200aa0(param_2,param_3,param_4,param_5);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  param_1[6] = (uint)&ghidra_vftable_SCShareBrowseItem;
  param_1[0xe] = (uint)&ghidra_vftable_SCShareBrowseItem;
  param_1[0xf] = (uint)&ghidra_vftable_SCShareBrowseItem;
  param_1[0x10] = (uint)&ghidra_vftable_SCShareBrowseItem;
  param_1[0x11] = (uint)&ghidra_vftable_SCShareBrowseItem;
  param_1[0x46] = (uint)&ghidra_vftable_SCShareBrowseItem;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10688ad0; body size 28 bytes.
#line 1 "ENTRY_10688ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10688ad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDCreateObjectAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpCDCreateObjectAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpCDCreateObjectAIOOp;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpAsyncIOOperation;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpAsyncIOOperation;
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)0x0) {
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


// Reference entry 10688b00; body size 7 bytes.
#line 1 "ENTRY_10688b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10688b00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10688b10; body size 7 bytes.
#line 1 "ENTRY_10688b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10688b10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10688c90; body size 56 bytes.
#line 1 "ENTRY_10688c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10688c90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  param_1[6] = (uint)&ghidra_vftable_SCShareBrowseItem;
  param_1[0xe] = (uint)&ghidra_vftable_SCShareBrowseItem;
  param_1[0xf] = (uint)&ghidra_vftable_SCShareBrowseItem;
  param_1[0x10] = (uint)&ghidra_vftable_SCShareBrowseItem;
  param_1[0x11] = (uint)&ghidra_vftable_SCShareBrowseItem;
  param_1[0x46] = (uint)&ghidra_vftable_SCShareBrowseItem;
  param_1[0x46] = (uint)&ghidra_vftable_SCAsyncBrowseItem;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  param_1[6] = (uint)&ghidra_vftable_SCAsyncBrowseItem;
  param_1[0xe] = (uint)&ghidra_vftable_SCAsyncBrowseItem;
  param_1[0xf] = (uint)&ghidra_vftable_SCAsyncBrowseItem;
  param_1[0x10] = (uint)&ghidra_vftable_SCAsyncBrowseItem;
  param_1[0x11] = (uint)&ghidra_vftable_SCAsyncBrowseItem;
  thunk_FUN_110a9ef0();
  thunk_FUN_10203dc0();
  return;
}


// Reference entry 10688e70; body size 5 bytes.
#line 1 "ENTRY_10688e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10688e70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10688eb0; body size 7 bytes.
#line 1 "ENTRY_10688eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10688eb0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10688ec0; body size 4 bytes.
#line 1 "ENTRY_10688ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10688ec0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10689680; body size 6 bytes.
#line 1 "ENTRY_10689680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10689680(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCShareManager");
}


// Reference entry 1068a160; body size 16 bytes.
#line 1 "ENTRY_1068a160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1068a160(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 1068a730; body size 7 bytes.
#line 1 "ENTRY_1068a730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1068a730(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x430);
}


// Reference entry 1068ad80; body size 6 bytes.
#line 1 "ENTRY_1068ad80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1068ad80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIShare");
}


// Reference entry 1068ad90; body size 6 bytes.
#line 1 "ENTRY_1068ad90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1068ad90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIShareManager");
}


// Reference entry 1068b960; body size 28 bytes.
#line 1 "ENTRY_1068b960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1068b960(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 1068bea0; body size 6 bytes.
#line 1 "ENTRY_1068bea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068bea0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fe);
}


// Reference entry 1068bfe0; body size 39 bytes.
#line 1 "ENTRY_1068bfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1068bfe0(undefined4 *param_1)

{
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  param_1[0x200] = 0;
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1068c190; body size 25 bytes.
#line 1 "ENTRY_1068c190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1068c190(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1068c1b0; body size 25 bytes.
#line 1 "ENTRY_1068c1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1068c1b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1068c1d0; body size 25 bytes.
#line 1 "ENTRY_1068c1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1068c1d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1068c1f0; body size 22 bytes.
#line 1 "ENTRY_1068c1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1068c1f0(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1068c2a0; body size 22 bytes.
#line 1 "ENTRY_1068c2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1068c2a0(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1068c370; body size 18 bytes.
#line 1 "ENTRY_1068c370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1068c370(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1068c390; body size 25 bytes.
#line 1 "ENTRY_1068c390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1068c390(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1068c3b0; body size 25 bytes.
#line 1 "ENTRY_1068c3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1068c3b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1068c3d0; body size 5 bytes.
#line 1 "ENTRY_1068c3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1068c3d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1068c3e0; body size 5 bytes.
#line 1 "ENTRY_1068c3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1068c3e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1068c600; body size 22 bytes.
#line 1 "ENTRY_1068c600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1068c600(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1068c620; body size 33 bytes.
#line 1 "ENTRY_1068c620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1068c620(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(*param_6);
  uVar2 = (undefined4)(*param_5);
  *param_1 = (undefined4)(*param_4);
  param_1[2] = uVar1;
  param_1[1] = uVar2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1068c650; body size 25 bytes.
#line 1 "ENTRY_1068c650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1068c650(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1068c670; body size 33 bytes.
#line 1 "ENTRY_1068c670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1068c670(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(*param_6);
  uVar2 = (undefined4)(*param_5);
  *param_1 = (undefined4)(*param_4);
  param_1[2] = uVar1;
  param_1[1] = uVar2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1068c6a0; body size 26 bytes.
#line 1 "ENTRY_1068c6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1068c6a0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 1068c6c0; body size 91 bytes.
#line 1 "ENTRY_1068c6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1068c6c0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = (int)(0);
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if (piVar2 != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[1] = iVar3;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
  }
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 1068c740; body size 34 bytes.
#line 1 "ENTRY_1068c740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall Recovered_Bulk::FUN_1068c740(int *param_2)
{
  uint *param_1 = (uint *)this;
  int iVar1;
  
  *param_1 = (uint)(0);
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  *param_1 = (uint)(-(uint)(iVar1 != 0) & iVar1 + 8U);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint *)(param_1);
}


// Reference entry 1068c770; body size 12 bytes.
#line 1 "ENTRY_1068c770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_1068c770(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1068c890; body size 3 bytes.
#line 1 "ENTRY_1068c890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068c890(void)

{
  return;
}


// Reference entry 1068c8a0; body size 3 bytes.
#line 1 "ENTRY_1068c8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068c8a0(void)

{
  return;
}


// Reference entry 1068c8b0; body size 3 bytes.
#line 1 "ENTRY_1068c8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068c8b0(void)

{
  return;
}


// Reference entry 1068c8e0; body size 13 bytes.
#line 1 "ENTRY_1068c8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068c8e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1068c8f0; body size 13 bytes.
#line 1 "ENTRY_1068c8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068c8f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1068c900; body size 13 bytes.
#line 1 "ENTRY_1068c900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068c900(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1068c910; body size 3 bytes.
#line 1 "ENTRY_1068c910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068c910(void)

{
  return;
}


// Reference entry 1068c920; body size 3 bytes.
#line 1 "ENTRY_1068c920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068c920(void)

{
  return;
}


// Reference entry 1068caa0; body size 18 bytes.
#line 1 "ENTRY_1068caa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1068caa0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 1068d530; body size 41 bytes.
#line 1 "ENTRY_1068d530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068d530(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)param_2[1] = 0;
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_1148a50e(puVar2,0x10);
    puVar2 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 1068d570; body size 15 bytes.
#line 1 "ENTRY_1068d570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068d570(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 1068d590; body size 15 bytes.
#line 1 "ENTRY_1068d590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068d590(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 1068d5b0; body size 7 bytes.
#line 1 "ENTRY_1068d5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068d5b0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1068d5c0; body size 7 bytes.
#line 1 "ENTRY_1068d5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068d5c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1068d5d0; body size 7 bytes.
#line 1 "ENTRY_1068d5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068d5d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1068d5e0; body size 7 bytes.
#line 1 "ENTRY_1068d5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068d5e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1068d5f0; body size 7 bytes.
#line 1 "ENTRY_1068d5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068d5f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1068d600; body size 7 bytes.
#line 1 "ENTRY_1068d600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068d600(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1068d610; body size 5 bytes.
#line 1 "ENTRY_1068d610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068d610(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1068d7d0; body size 148 bytes.
#line 1 "ENTRY_1068d7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068d7d0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(param_3 - param_1 >> 3);
  if (0x28 < iVar1) {
    iVar2 = (int)(iVar1 + 1 >> 3);
    iVar1 = (int)(iVar2 * 8);
    thunk_FUN_1068dd40(param_1,iVar1 + param_1,param_1 + iVar2 * 0x10,param_4);
    thunk_FUN_1068dd40(param_2 + iVar2 * -8,param_2,iVar1 + param_2,param_4);
    iVar3 = (int)(param_3 + iVar2 * -8);
    thunk_FUN_1068dd40(param_3 + iVar2 * -0x10,iVar3,param_3,param_4);
    thunk_FUN_1068dd40(param_1 + iVar1,param_2,iVar3,param_4);
    return;
  }
  thunk_FUN_1068dd40(param_1,param_2,param_3,param_4);
  return;
}


// Reference entry 1068dc50; body size 5 bytes.
#line 1 "ENTRY_1068dc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068dc50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1068ddc0; body size 93 bytes.
#line 1 "ENTRY_1068ddc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_1068ddc0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((int *)(param_2) == param_1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_3);
  }
  do {
    iVar2 = (int)(param_2[-2]);
    piVar4 = (int *)(param_2 + -2);
    piVar3 = (int *)(param_3 + -2);
    if (iVar2 != *piVar3) {
      piVar1 = (int *)((int *)param_3[-1]);
      if (piVar1 != (int *)0x0) {
        *piVar3 = (int)(0);
        param_3[-1] = 0;
        (**(code **)(*piVar1 + 8))();
        iVar2 = (int)(*piVar4);
      }
      *piVar3 = (int)(iVar2);
      piVar1 = (int *)((int *)param_2[-1]);
      param_3[-1] = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_3 = (int *)(piVar3);
    param_2 = (int *)(piVar4);
  } while (piVar4 != (int *)(param_1));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(piVar3);
}


// Reference entry 1068de40; body size 8 bytes.
#line 1 "ENTRY_1068de40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1068de40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 8);
}


// Reference entry 1068ede0; body size 11 bytes.
#line 1 "ENTRY_1068ede0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068ede0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 1068f030; body size 92 bytes.
#line 1 "ENTRY_1068f030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068f030(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_1);
  if (iVar2 != *param_3) {
    piVar1 = (int *)((int *)param_3[1]);
    if (piVar1 != (int *)0x0) {
      *param_3 = (int)(0);
      param_3[1] = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_1);
    }
    *param_3 = (int)(iVar2);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  thunk_FUN_1068edf0(param_1,0,param_2 - (int)param_1 >> 3,param_4,param_5);
  return;
}


// Reference entry 1068f1c0; body size 8 bytes.
#line 1 "ENTRY_1068f1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1068f1c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + -8);
}


// Reference entry 1068f4c0; body size 13 bytes.
#line 1 "ENTRY_1068f4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068f4c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1068f8f0; body size 24 bytes.
#line 1 "ENTRY_1068f8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1068f8f0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1068fa70(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 1068f910; body size 5 bytes.
#line 1 "ENTRY_1068f910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068f910(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1068fd00; body size 5 bytes.
#line 1 "ENTRY_1068fd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068fd00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1068fd10; body size 5 bytes.
#line 1 "ENTRY_1068fd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068fd10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1068fd20; body size 5 bytes.
#line 1 "ENTRY_1068fd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068fd20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1068fd40; body size 5 bytes.
#line 1 "ENTRY_1068fd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068fd40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1068fd50; body size 5 bytes.
#line 1 "ENTRY_1068fd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068fd50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1068fd60; body size 5 bytes.
#line 1 "ENTRY_1068fd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068fd60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1068fd70; body size 5 bytes.
#line 1 "ENTRY_1068fd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068fd70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1068fd80; body size 5 bytes.
#line 1 "ENTRY_1068fd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068fd80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1068fd90; body size 5 bytes.
#line 1 "ENTRY_1068fd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068fd90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1068fda0; body size 11 bytes.
#line 1 "ENTRY_1068fda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068fda0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 1068fdb0; body size 22 bytes.
#line 1 "ENTRY_1068fdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068fdb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*param_3);
  param_2[1] = *param_4;
  return;
}


// Reference entry 10690130; body size 3 bytes.
#line 1 "ENTRY_10690130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10690130(void)

{
  return;
}


// Reference entry 10690580; body size 15 bytes.
#line 1 "ENTRY_10690580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690580(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 106905a0; body size 15 bytes.
#line 1 "ENTRY_106905a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106905a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 106905c0; body size 15 bytes.
#line 1 "ENTRY_106905c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106905c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 106906e0; body size 5 bytes.
#line 1 "ENTRY_106906e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106906e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106906f0; body size 5 bytes.
#line 1 "ENTRY_106906f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106906f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10690700; body size 5 bytes.
#line 1 "ENTRY_10690700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690700(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10690710; body size 5 bytes.
#line 1 "ENTRY_10690710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690710(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10690720; body size 5 bytes.
#line 1 "ENTRY_10690720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690720(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10690730; body size 5 bytes.
#line 1 "ENTRY_10690730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690730(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10690740; body size 5 bytes.
#line 1 "ENTRY_10690740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690740(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10690750; body size 5 bytes.
#line 1 "ENTRY_10690750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690750(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10690770; body size 5 bytes.
#line 1 "ENTRY_10690770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690770(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10690780; body size 5 bytes.
#line 1 "ENTRY_10690780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690780(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10690790; body size 5 bytes.
#line 1 "ENTRY_10690790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690790(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106907a0; body size 5 bytes.
#line 1 "ENTRY_106907a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106907a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106907b0; body size 5 bytes.
#line 1 "ENTRY_106907b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106907b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106907c0; body size 5 bytes.
#line 1 "ENTRY_106907c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106907c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106907d0; body size 5 bytes.
#line 1 "ENTRY_106907d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106907d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106907e0; body size 5 bytes.
#line 1 "ENTRY_106907e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106907e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10690800; body size 5 bytes.
#line 1 "ENTRY_10690800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690800(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10690810; body size 5 bytes.
#line 1 "ENTRY_10690810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690810(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10690820; body size 5 bytes.
#line 1 "ENTRY_10690820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690820(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10690830; body size 5 bytes.
#line 1 "ENTRY_10690830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690830(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10690970; body size 5 bytes.
#line 1 "ENTRY_10690970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690970(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10690990; body size 5 bytes.
#line 1 "ENTRY_10690990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690990(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106909a0; body size 5 bytes.
#line 1 "ENTRY_106909a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106909a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106909b0; body size 5 bytes.
#line 1 "ENTRY_106909b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106909b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106909c0; body size 5 bytes.
#line 1 "ENTRY_106909c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106909c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10690b70; body size 30 bytes.
#line 1 "ENTRY_10690b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10690b70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10690dc0; body size 18 bytes.
#line 1 "ENTRY_10690dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10690dc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10690de0; body size 3 bytes.
#line 1 "ENTRY_10690de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10690de0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10690df0; body size 10 bytes.
#line 1 "ENTRY_10690df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10690df0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10690ed0; body size 11 bytes.
#line 1 "ENTRY_10690ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10690ed0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10690ee0; body size 11 bytes.
#line 1 "ENTRY_10690ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10690ee0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10690ef0; body size 11 bytes.
#line 1 "ENTRY_10690ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10690ef0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10690f00; body size 11 bytes.
#line 1 "ENTRY_10690f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10690f00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10690f10; body size 16 bytes.
#line 1 "ENTRY_10690f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10690f10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10690f30; body size 13 bytes.
#line 1 "ENTRY_10690f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10690f30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10690f40; body size 14 bytes.
#line 1 "ENTRY_10690f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10690f40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10690f60; body size 21 bytes.
#line 1 "ENTRY_10690f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10690f60(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10690f80; body size 21 bytes.
#line 1 "ENTRY_10690f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10690f80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10690fa0; body size 21 bytes.
#line 1 "ENTRY_10690fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10690fa0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10690fc0; body size 23 bytes.
#line 1 "ENTRY_10690fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10690fc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10690fe0; body size 25 bytes.
#line 1 "ENTRY_10690fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10690fe0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10691000; body size 23 bytes.
#line 1 "ENTRY_10691000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10691000(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10691020; body size 25 bytes.
#line 1 "ENTRY_10691020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10691020(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10691040; body size 23 bytes.
#line 1 "ENTRY_10691040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10691040(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10691060; body size 23 bytes.
#line 1 "ENTRY_10691060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10691060(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10691080; body size 3 bytes.
#line 1 "ENTRY_10691080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10691080(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10691090; body size 3 bytes.
#line 1 "ENTRY_10691090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10691090(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106910a0; body size 3 bytes.
#line 1 "ENTRY_106910a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106910a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106910b0; body size 3 bytes.
#line 1 "ENTRY_106910b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106910b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106910c0; body size 11 bytes.
#line 1 "ENTRY_106910c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106910c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106913c0; body size 23 bytes.
#line 1 "ENTRY_106913c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106913c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106913e0; body size 49 bytes.
#line 1 "ENTRY_106913e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106913e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_2[2]);
  uVar2 = (undefined4)(*param_2);
  uVar3 = (undefined4)(param_2[1]);
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = (undefined4)(0);
  param_1[2] = uVar1;
  *param_1 = (undefined4)(uVar2);
  param_1[1] = uVar3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10691420; body size 23 bytes.
#line 1 "ENTRY_10691420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10691420(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10691440; body size 49 bytes.
#line 1 "ENTRY_10691440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10691440(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_2[2]);
  uVar2 = (undefined4)(*param_2);
  uVar3 = (undefined4)(param_2[1]);
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = (undefined4)(0);
  param_1[2] = uVar1;
  *param_1 = (undefined4)(uVar2);
  param_1[1] = uVar3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10691540; body size 23 bytes.
#line 1 "ENTRY_10691540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10691540(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10691560; body size 39 bytes.
#line 1 "ENTRY_10691560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10691560(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 10691770; body size 49 bytes.
#line 1 "ENTRY_10691770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10691770(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_2[2]);
  uVar2 = (undefined4)(*param_2);
  uVar3 = (undefined4)(param_2[1]);
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = (undefined4)(0);
  param_1[2] = uVar1;
  *param_1 = (undefined4)(uVar2);
  param_1[1] = uVar3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10691870; body size 23 bytes.
#line 1 "ENTRY_10691870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10691870(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106921a0; body size 11 bytes.
#line 1 "ENTRY_106921a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106921a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106921b0; body size 24 bytes.
#line 1 "ENTRY_106921b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106921b0(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = *(undefined4 *)(param_3 + 4);
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10692570; body size 3 bytes.
#line 1 "ENTRY_10692570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10692570(void)

{
  return;
}


// Reference entry 106928b0; body size 131 bytes.
#line 1 "ENTRY_106928b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106928b0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piStack_4;
  
  iVar1 = (int)(*param_1);
  if ((iVar1 != 0) && (*(uint *)(iVar1 + 8) != 0)) {
    piStack_4 = (int *)(param_1);
    if (*(uint *)(iVar1 + 8) < *(uint *)(iVar1 + 0x1c) >> 3) {
      thunk_FUN_10694b70(**(undefined4 **)(iVar1 + 4),*(undefined4 **)(iVar1 + 4));
      return;
    }
    puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 4));
    *(undefined4 *)puVar2[1] = 0;
    puVar2 = (undefined4 *)((undefined4 *)*puVar2);
    while (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)((undefined4 *)*puVar2);
      thunk_FUN_1148a50e(puVar2,0x10);
      puVar2 = (undefined4 *)(puVar3);
    }
    *(undefined4 *)*(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 4);
    *(int *)(*(int *)(iVar1 + 4) + 4) = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 8) = 0;
    piStack_4 = (int *)(*(int **)(iVar1 + 4));
    thunk_FUN_106905e0(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),&piStack_4);
  }
  return;
}


// Reference entry 106929a0; body size 18 bytes.
#line 1 "ENTRY_106929a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106929a0(int param_1)

{
  **(undefined4 **)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 4);
  return;
}


// Reference entry 106929c0; body size 65 bytes.
#line 1 "ENTRY_106929c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_106929c0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if (iVar2 != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10692ac0; body size 14 bytes.
#line 1 "ENTRY_10692ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10692ac0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10692ae0; body size 3 bytes.
#line 1 "ENTRY_10692ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10692ae0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10692af0; body size 8 bytes.
#line 1 "ENTRY_10692af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10692af0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10692b00; body size 6 bytes.
#line 1 "ENTRY_10692b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10692b00(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10692b10; body size 6 bytes.
#line 1 "ENTRY_10692b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10692b10(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10692b20; body size 6 bytes.
#line 1 "ENTRY_10692b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10692b20(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10692b30; body size 6 bytes.
#line 1 "ENTRY_10692b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10692b30(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10692b40; body size 3 bytes.
#line 1 "ENTRY_10692b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10692b40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10692b50; body size 9 bytes.
#line 1 "ENTRY_10692b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10692b50(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10692b60; body size 9 bytes.
#line 1 "ENTRY_10692b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10692b60(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10692b70; body size 3 bytes.
#line 1 "ENTRY_10692b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10692b70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10692b80; body size 10 bytes.
#line 1 "ENTRY_10692b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10692b80(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10693720; body size 22 bytes.
#line 1 "ENTRY_10693720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10693720(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x10));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 106938b0; body size 30 bytes.
#line 1 "ENTRY_106938b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106938b0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10694f70(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = iVar1;
  param_1[2] = iVar1 + param_2 * 8;
  return;
}


// Reference entry 106938e0; body size 63 bytes.
#line 1 "ENTRY_106938e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_106938e0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x28);
  if (0x6666666 - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x6666666);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10693930; body size 49 bytes.
#line 1 "ENTRY_10693930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10693930(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 3);
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x1fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10693970; body size 49 bytes.
#line 1 "ENTRY_10693970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10693970(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 3);
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x1fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10693ba0; body size 66 bytes.
#line 1 "ENTRY_10693ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10693ba0(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 10693e70; body size 8 bytes.
#line 1 "ENTRY_10693e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10693e70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10693e80; body size 5 bytes.
#line 1 "ENTRY_10693e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10693e80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10694060; body size 3 bytes.
#line 1 "ENTRY_10694060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694060(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10694070; body size 3 bytes.
#line 1 "ENTRY_10694070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694070(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10694080; body size 3 bytes.
#line 1 "ENTRY_10694080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694080(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10694090; body size 3 bytes.
#line 1 "ENTRY_10694090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694090(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106940a0; body size 3 bytes.
#line 1 "ENTRY_106940a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106940a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106940b0; body size 3 bytes.
#line 1 "ENTRY_106940b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106940b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106940c0; body size 3 bytes.
#line 1 "ENTRY_106940c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106940c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106940d0; body size 3 bytes.
#line 1 "ENTRY_106940d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106940d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106940e0; body size 3 bytes.
#line 1 "ENTRY_106940e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106940e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106940f0; body size 3 bytes.
#line 1 "ENTRY_106940f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106940f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10694100; body size 3 bytes.
#line 1 "ENTRY_10694100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694100(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10694110; body size 3 bytes.
#line 1 "ENTRY_10694110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694110(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10694120; body size 3 bytes.
#line 1 "ENTRY_10694120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694120(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10694130; body size 3 bytes.
#line 1 "ENTRY_10694130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694130(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10694140; body size 4 bytes.
#line 1 "ENTRY_10694140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694140(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 106941d0; body size 7 bytes.
#line 1 "ENTRY_106941d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106941d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 106941e0; body size 13 bytes.
#line 1 "ENTRY_106941e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106941e0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 106941f0; body size 13 bytes.
#line 1 "ENTRY_106941f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106941f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10694200; body size 3 bytes.
#line 1 "ENTRY_10694200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694200(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10694210; body size 3 bytes.
#line 1 "ENTRY_10694210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694210(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106942a0; body size 3 bytes.
#line 1 "ENTRY_106942a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106942a0(void)

{
  return;
}


// Reference entry 106942b0; body size 3 bytes.
#line 1 "ENTRY_106942b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106942b0(void)

{
  return;
}


// Reference entry 106942c0; body size 3 bytes.
#line 1 "ENTRY_106942c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106942c0(void)

{
  return;
}


// Reference entry 106942d0; body size 3 bytes.
#line 1 "ENTRY_106942d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106942d0(void)

{
  return;
}


// Reference entry 10694390; body size 11 bytes.
#line 1 "ENTRY_10694390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694390(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 106943a0; body size 6 bytes.
#line 1 "ENTRY_106943a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106943a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106943b0; body size 6 bytes.
#line 1 "ENTRY_106943b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106943b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106943c0; body size 6 bytes.
#line 1 "ENTRY_106943c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106943c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106943d0; body size 6 bytes.
#line 1 "ENTRY_106943d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106943d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106943e0; body size 26 bytes.
#line 1 "ENTRY_106943e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106943e0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10694400; body size 26 bytes.
#line 1 "ENTRY_10694400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10694400(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10694420; body size 26 bytes.
#line 1 "ENTRY_10694420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10694420(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10694440; body size 76 bytes.
#line 1 "ENTRY_10694440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10694440(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_2[9]);
  if (piVar1 != (int *)0x0) {
    if (piVar1 == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1));
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)((int *)param_2[9]);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_2));
        param_2[9] = 0;
        return;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return;
}


// Reference entry 106944a0; body size 10 bytes.
#line 1 "ENTRY_106944a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106944a0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10694560; body size 55 bytes.
#line 1 "ENTRY_10694560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10694560(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_1148a50e(puVar1,0x10);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 10694990; body size 24 bytes.
#line 1 "ENTRY_10694990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10694990(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1068fa70(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10694b00; body size 24 bytes.
#line 1 "ENTRY_10694b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10694b00(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1068fa70(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10694b20; body size 14 bytes.
#line 1 "ENTRY_10694b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10694b20(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4));
  return;
}


// Reference entry 10694b40; body size 13 bytes.
#line 1 "ENTRY_10694b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10694b40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10694b50; body size 12 bytes.
#line 1 "ENTRY_10694b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10694b50(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10694b60; body size 11 bytes.
#line 1 "ENTRY_10694b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10694b60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10694d80; body size 43 bytes.
#line 1 "ENTRY_10694d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10694d80(int param_1,int param_2,int param_3)

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
  *(int **)(param_1 + 4) = piVar2;
  *(int **)(param_3 + 4) = piVar1;
  *(int **)(param_2 + 4) = piVar3;
  return;
}


// Reference entry 10694dc0; body size 3 bytes.
#line 1 "ENTRY_10694dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694dc0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10694dd0; body size 3 bytes.
#line 1 "ENTRY_10694dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694dd0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10694e10; body size 87 bytes.
#line 1 "ENTRY_10694e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10694e10(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x10000000) {
    param_1 = (uint)(param_1 * 0x10);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10694e80; body size 90 bytes.
#line 1 "ENTRY_10694e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10694e80(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x6666667) {
    param_1 = (uint)(param_1 * 0x28);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10694f00; body size 87 bytes.
#line 1 "ENTRY_10694f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10694f00(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x20000000) {
    param_1 = (uint)(param_1 * 8);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10694fe0; body size 87 bytes.
#line 1 "ENTRY_10694fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10694fe0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10695050; body size 11 bytes.
#line 1 "ENTRY_10695050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10695050(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10695060; body size 68 bytes.
#line 1 "ENTRY_10695060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10695060(byte *param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0x18) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2])
          * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 106950c0; body size 4 bytes.
#line 1 "ENTRY_106950c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106950c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10695290; body size 23 bytes.
#line 1 "ENTRY_10695290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10695290(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[2] - *param_1) / 0x28);
}


// Reference entry 106952b0; body size 9 bytes.
#line 1 "ENTRY_106952b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106952b0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 106952c0; body size 9 bytes.
#line 1 "ENTRY_106952c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106952c0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 106952d0; body size 123 bytes.
#line 1 "ENTRY_106952d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106952d0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iStack_4;
  
  if (*(uint *)(param_1 + 8) != 0) {
    iStack_4 = (int)(param_1);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x1c) >> 3) {
      thunk_FUN_10694b70(**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
      return;
    }
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
    *(undefined4 *)puVar1[1] = 0;
    puVar1 = (undefined4 *)((undefined4 *)*puVar1);
    while (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((undefined4 *)*puVar1);
      thunk_FUN_1148a50e(puVar1,0x10);
      puVar1 = (undefined4 *)(puVar2);
    }
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
    iStack_4 = (int)(*(int *)(param_1 + 4));
    thunk_FUN_106905e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10695370; body size 59 bytes.
#line 1 "ENTRY_10695370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10695370(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_1148a50e(puVar1,0x10);
    puVar1 = (undefined4 *)(puVar2);
  }
  *(int *)*param_1 = (int)(*param_1);
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  return;
}


// Reference entry 106953c0; body size 54 bytes.
#line 1 "ENTRY_106953c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106953c0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10695410; body size 57 bytes.
#line 1 "ENTRY_10695410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10695410(int param_1,int param_2)

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


// Reference entry 106954b0; body size 61 bytes.
#line 1 "ENTRY_106954b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106954b0(int param_1,int param_2)

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


// Reference entry 10695500; body size 9 bytes.
#line 1 "ENTRY_10695500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10695500(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10695510; body size 9 bytes.
#line 1 "ENTRY_10695510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10695510(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10695520; body size 12 bytes.
#line 1 "ENTRY_10695520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10695520(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10695530; body size 11 bytes.
#line 1 "ENTRY_10695530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10695530(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10695540; body size 12 bytes.
#line 1 "ENTRY_10695540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10695540(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106964e0; body size 4 bytes.
#line 1 "ENTRY_106964e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106964e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x20));
}


// Reference entry 10696930; body size 7 bytes.
#line 1 "ENTRY_10696930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10696930(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10696940; body size 3 bytes.
#line 1 "ENTRY_10696940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10696940(float *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10)((float10)*param_1);
}


// Reference entry 10696950; body size 6 bytes.
#line 1 "ENTRY_10696950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10696950(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xfffffff);
}


// Reference entry 10696960; body size 6 bytes.
#line 1 "ENTRY_10696960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10696960(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x6666666);
}


// Reference entry 10696970; body size 6 bytes.
#line 1 "ENTRY_10696970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10696970(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10696980; body size 6 bytes.
#line 1 "ENTRY_10696980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10696980(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10696990; body size 6 bytes.
#line 1 "ENTRY_10696990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10696990(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 106969a0; body size 6 bytes.
#line 1 "ENTRY_106969a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106969a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 106969b0; body size 6 bytes.
#line 1 "ENTRY_106969b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106969b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xfffffff);
}


// Reference entry 106969c0; body size 6 bytes.
#line 1 "ENTRY_106969c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106969c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x6666666);
}


// Reference entry 106969d0; body size 6 bytes.
#line 1 "ENTRY_106969d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106969d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 106969e0; body size 6 bytes.
#line 1 "ENTRY_106969e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106969e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 106969f0; body size 5 bytes.
#line 1 "ENTRY_106969f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106969f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10696a00; body size 3 bytes.
#line 1 "ENTRY_10696a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10696a00(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10696c80; body size 5 bytes.
#line 1 "ENTRY_10696c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10696c80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10696ca0; body size 9 bytes.
#line 1 "ENTRY_10696ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10696ca0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10696fa0; body size 26 bytes.
#line 1 "ENTRY_10696fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10696fa0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10697000; body size 16 bytes.
#line 1 "ENTRY_10697000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10697000(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106970f0; body size 65 bytes.
#line 1 "ENTRY_106970f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106970f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLaunchSoundLabAction);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10697150; body size 33 bytes.
#line 1 "ENTRY_10697150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10697150(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceFilterLearnMoreActionDescriptor);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10697830; body size 19 bytes.
#line 1 "ENTRY_10697830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10697830(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10697a20; body size 3 bytes.
#line 1 "ENTRY_10697a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10697a20(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10697a30; body size 3 bytes.
#line 1 "ENTRY_10697a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10697a30(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10697a40; body size 3 bytes.
#line 1 "ENTRY_10697a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10697a40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10699810; body size 3 bytes.
#line 1 "ENTRY_10699810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10699810(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10699820; body size 3 bytes.
#line 1 "ENTRY_10699820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10699820(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10699830; body size 28 bytes.
#line 1 "ENTRY_10699830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10699830(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10699860; body size 22 bytes.
#line 1 "ENTRY_10699860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10699860(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10699940; body size 18 bytes.
#line 1 "ENTRY_10699940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10699940(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10699960; body size 25 bytes.
#line 1 "ENTRY_10699960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10699960(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10699980; body size 25 bytes.
#line 1 "ENTRY_10699980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10699980(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106999d0; body size 22 bytes.
#line 1 "ENTRY_106999d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106999d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106999f0; body size 5 bytes.
#line 1 "ENTRY_106999f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106999f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10699a00; body size 5 bytes.
#line 1 "ENTRY_10699a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10699a00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10699a50; body size 18 bytes.
#line 1 "ENTRY_10699a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10699a50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10699aa0; body size 25 bytes.
#line 1 "ENTRY_10699aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10699aa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10699ac0; body size 25 bytes.
#line 1 "ENTRY_10699ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10699ac0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10699b20; body size 26 bytes.
#line 1 "ENTRY_10699b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10699b20(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10699b40; body size 26 bytes.
#line 1 "ENTRY_10699b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10699b40(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10699b60; body size 26 bytes.
#line 1 "ENTRY_10699b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10699b60(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10699b80; body size 78 bytes.
#line 1 "ENTRY_10699b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10699b80(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if (piVar2 != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[1] = iVar3;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
  }
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10699bf0; body size 12 bytes.
#line 1 "ENTRY_10699bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10699bf0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10699c00; body size 12 bytes.
#line 1 "ENTRY_10699c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10699c00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10699c10; body size 3 bytes.
#line 1 "ENTRY_10699c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699c10(void)

{
  return;
}


// Reference entry 10699c40; body size 13 bytes.
#line 1 "ENTRY_10699c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699c40(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10699c50; body size 13 bytes.
#line 1 "ENTRY_10699c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699c50(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10699c60; body size 13 bytes.
#line 1 "ENTRY_10699c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699c60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10699c70; body size 3 bytes.
#line 1 "ENTRY_10699c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699c70(void)

{
  return;
}


// Reference entry 10699c80; body size 3 bytes.
#line 1 "ENTRY_10699c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699c80(void)

{
  return;
}


// Reference entry 10699c90; body size 18 bytes.
#line 1 "ENTRY_10699c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10699c90(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10699e40; body size 15 bytes.
#line 1 "ENTRY_10699e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699e40(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10699f00; body size 7 bytes.
#line 1 "ENTRY_10699f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10699f00(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10699f10; body size 5 bytes.
#line 1 "ENTRY_10699f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10699f10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10699f20; body size 3 bytes.
#line 1 "ENTRY_10699f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699f20(void)

{
  return;
}


// Reference entry 10699f30; body size 3 bytes.
#line 1 "ENTRY_10699f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699f30(void)

{
  return;
}


// Reference entry 10699f60; body size 19 bytes.
#line 1 "ENTRY_10699f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699f60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10699f80; body size 19 bytes.
#line 1 "ENTRY_10699f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699f80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 1069a210; body size 5 bytes.
#line 1 "ENTRY_1069a210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a210(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a220; body size 5 bytes.
#line 1 "ENTRY_1069a220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a220(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a240; body size 5 bytes.
#line 1 "ENTRY_1069a240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a240(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a250; body size 5 bytes.
#line 1 "ENTRY_1069a250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a250(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a260; body size 5 bytes.
#line 1 "ENTRY_1069a260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a260(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a270; body size 5 bytes.
#line 1 "ENTRY_1069a270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a270(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a340; body size 15 bytes.
#line 1 "ENTRY_1069a340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a340(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 1069a3e0; body size 5 bytes.
#line 1 "ENTRY_1069a3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a3e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a3f0; body size 5 bytes.
#line 1 "ENTRY_1069a3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a3f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a410; body size 5 bytes.
#line 1 "ENTRY_1069a410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a410(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a420; body size 5 bytes.
#line 1 "ENTRY_1069a420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a420(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a430; body size 5 bytes.
#line 1 "ENTRY_1069a430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a430(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a440; body size 5 bytes.
#line 1 "ENTRY_1069a440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a440(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a460; body size 5 bytes.
#line 1 "ENTRY_1069a460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a460(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a470; body size 5 bytes.
#line 1 "ENTRY_1069a470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a470(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a4a0; body size 5 bytes.
#line 1 "ENTRY_1069a4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a4a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a4b0; body size 5 bytes.
#line 1 "ENTRY_1069a4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a4b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a4d0; body size 5 bytes.
#line 1 "ENTRY_1069a4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a4d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a4e0; body size 5 bytes.
#line 1 "ENTRY_1069a4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a4e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a4f0; body size 5 bytes.
#line 1 "ENTRY_1069a4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a4f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069a500; body size 19 bytes.
#line 1 "ENTRY_1069a500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1069a500(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 1069a520; body size 19 bytes.
#line 1 "ENTRY_1069a520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1069a520(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 1069a540; body size 30 bytes.
#line 1 "ENTRY_1069a540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1069a540(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 1069ac60; body size 16 bytes.
#line 1 "ENTRY_1069ac60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1069ac60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1069ad40; body size 18 bytes.
#line 1 "ENTRY_1069ad40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069ad40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1069ad60; body size 10 bytes.
#line 1 "ENTRY_1069ad60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1069ad60(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1069afa0; body size 11 bytes.
#line 1 "ENTRY_1069afa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069afa0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1069afb0; body size 11 bytes.
#line 1 "ENTRY_1069afb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069afb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1069afc0; body size 16 bytes.
#line 1 "ENTRY_1069afc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1069afc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1069afe0; body size 23 bytes.
#line 1 "ENTRY_1069afe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall Recovered_Bulk::FUN_1069afe0(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  *param_1 = (undefined8)(*param_2);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 *)(param_1);
}


// Reference entry 1069b000; body size 14 bytes.
#line 1 "ENTRY_1069b000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069b000(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1069b020; body size 23 bytes.
#line 1 "ENTRY_1069b020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1069b020(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1069b040; body size 3 bytes.
#line 1 "ENTRY_1069b040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069b040(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069b3c0; body size 42 bytes.
#line 1 "ENTRY_1069b3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069b3c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1069b400; body size 42 bytes.
#line 1 "ENTRY_1069b400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069b400(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1069b440; body size 42 bytes.
#line 1 "ENTRY_1069b440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069b440(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCatalog_EventSink);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1069b480; body size 42 bytes.
#line 1 "ENTRY_1069b480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069b480(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCatalogManager_EventSink);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1069bb20; body size 11 bytes.
#line 1 "ENTRY_1069bb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069bb20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1069c150; body size 3 bytes.
#line 1 "ENTRY_1069c150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1069c150(void)

{
  return;
}


// Reference entry 1069c240; body size 5 bytes.
#line 1 "ENTRY_1069c240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1069c240(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = (int)(*(int *)(param_1 + 0x14));
  uVar3 = (uint)(*(int *)(param_1 + 0x18) - iVar1 & 0xfffffffc);
  iVar2 = (int)(iVar1);
  if (0xfff < uVar3) {
    iVar2 = (int)(*(int *)(iVar1 + -4));
    uVar3 = (uint)(uVar3 + 0x23);
    if (0x1f < (iVar1 - iVar2) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar2,uVar3);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar4 = (undefined4 *)((undefined4 *)(param_1 + 0xc));
  thunk_FUN_10699d60(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x14);
  return;
}


// Reference entry 1069c250; body size 19 bytes.
#line 1 "ENTRY_1069c250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1069c250(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1069c270; body size 19 bytes.
#line 1 "ENTRY_1069c270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1069c270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1069c290; body size 19 bytes.
#line 1 "ENTRY_1069c290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1069c290(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1069c2b0; body size 19 bytes.
#line 1 "ENTRY_1069c2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1069c2b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1069c710; body size 11 bytes.
#line 1 "ENTRY_1069c710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1069c710(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCatalogRequest);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlGetRequest);
  thunk_FUN_106845c0();
  return;
}


// Reference entry 1069c780; body size 65 bytes.
#line 1 "ENTRY_1069c780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1069c780(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if (iVar2 != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 1069c850; body size 226 bytes.
#line 1 "ENTRY_1069c850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069c850(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_2);
  if (param_1 != (undefined4 *)(param_2)) {
    if (param_1[2] != 0) {
      if ((uint)param_1[2] < (uint)param_1[7] >> 3) {
        thunk_FUN_10694b70(*(undefined4 *)param_1[1],(undefined4 *)param_1[1]);
      }
      else {
        puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
        *(undefined4 *)puVar1[1] = 0;
        puVar1 = (undefined4 *)((undefined4 *)*puVar1);
        while (puVar1 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)((undefined4 *)*puVar1);
          thunk_FUN_1148a50e(puVar1,0x10);
          puVar1 = (undefined4 *)(puVar2);
        }
        *(undefined4 *)param_1[1] = param_1[1];
        *(undefined4 *)(param_1[1] + 4) = param_1[1];
        param_1[2] = 0;
        param_2 = (undefined4 *)((undefined4 *)param_1[1]);
        thunk_FUN_106905e0(param_1[3],param_1[4],&param_2);
      }
    }
    *param_1 = (undefined4)(*puVar4);
    uVar3 = (undefined4)(param_1[1]);
    param_1[1] = puVar4[1];
    puVar4[1] = uVar3;
    uVar3 = (undefined4)(param_1[2]);
    param_1[2] = puVar4[2];
    puVar4[2] = uVar3;
    uVar3 = (undefined4)(param_1[3]);
    param_1[3] = puVar4[3];
    puVar4[3] = uVar3;
    uVar3 = (undefined4)(param_1[4]);
    param_1[4] = puVar4[4];
    puVar4[4] = uVar3;
    uVar3 = (undefined4)(param_1[5]);
    param_1[5] = puVar4[5];
    puVar4[5] = uVar3;
    uVar3 = (undefined4)(param_1[6]);
    param_1[6] = puVar4[6];
    puVar4[6] = uVar3;
    uVar3 = (undefined4)(param_1[7]);
    param_1[7] = puVar4[7];
    puVar4[7] = uVar3;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1069c970; body size 226 bytes.
#line 1 "ENTRY_1069c970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069c970(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_2);
  if (param_1 != (undefined4 *)(param_2)) {
    if (param_1[2] != 0) {
      if ((uint)param_1[2] < (uint)param_1[7] >> 3) {
        thunk_FUN_10694b70(*(undefined4 *)param_1[1],(undefined4 *)param_1[1]);
      }
      else {
        puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
        *(undefined4 *)puVar1[1] = 0;
        puVar1 = (undefined4 *)((undefined4 *)*puVar1);
        while (puVar1 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)((undefined4 *)*puVar1);
          thunk_FUN_1148a50e(puVar1,0x10);
          puVar1 = (undefined4 *)(puVar2);
        }
        *(undefined4 *)param_1[1] = param_1[1];
        *(undefined4 *)(param_1[1] + 4) = param_1[1];
        param_1[2] = 0;
        param_2 = (undefined4 *)((undefined4 *)param_1[1]);
        thunk_FUN_106905e0(param_1[3],param_1[4],&param_2);
      }
    }
    *param_1 = (undefined4)(*puVar4);
    uVar3 = (undefined4)(param_1[1]);
    param_1[1] = puVar4[1];
    puVar4[1] = uVar3;
    uVar3 = (undefined4)(param_1[2]);
    param_1[2] = puVar4[2];
    puVar4[2] = uVar3;
    uVar3 = (undefined4)(param_1[3]);
    param_1[3] = puVar4[3];
    puVar4[3] = uVar3;
    uVar3 = (undefined4)(param_1[4]);
    param_1[4] = puVar4[4];
    puVar4[4] = uVar3;
    uVar3 = (undefined4)(param_1[5]);
    param_1[5] = puVar4[5];
    puVar4[5] = uVar3;
    uVar3 = (undefined4)(param_1[6]);
    param_1[6] = puVar4[6];
    puVar4[6] = uVar3;
    uVar3 = (undefined4)(param_1[7]);
    param_1[7] = puVar4[7];
    puVar4[7] = uVar3;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1069ca90; body size 226 bytes.
#line 1 "ENTRY_1069ca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069ca90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_2);
  if (param_1 != (undefined4 *)(param_2)) {
    if (param_1[2] != 0) {
      if ((uint)param_1[2] < (uint)param_1[7] >> 3) {
        thunk_FUN_10694b70(*(undefined4 *)param_1[1],(undefined4 *)param_1[1]);
      }
      else {
        puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
        *(undefined4 *)puVar1[1] = 0;
        puVar1 = (undefined4 *)((undefined4 *)*puVar1);
        while (puVar1 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)((undefined4 *)*puVar1);
          thunk_FUN_1148a50e(puVar1,0x10);
          puVar1 = (undefined4 *)(puVar2);
        }
        *(undefined4 *)param_1[1] = param_1[1];
        *(undefined4 *)(param_1[1] + 4) = param_1[1];
        param_1[2] = 0;
        param_2 = (undefined4 *)((undefined4 *)param_1[1]);
        thunk_FUN_106905e0(param_1[3],param_1[4],&param_2);
      }
    }
    *param_1 = (undefined4)(*puVar4);
    uVar3 = (undefined4)(param_1[1]);
    param_1[1] = puVar4[1];
    puVar4[1] = uVar3;
    uVar3 = (undefined4)(param_1[2]);
    param_1[2] = puVar4[2];
    puVar4[2] = uVar3;
    uVar3 = (undefined4)(param_1[3]);
    param_1[3] = puVar4[3];
    puVar4[3] = uVar3;
    uVar3 = (undefined4)(param_1[4]);
    param_1[4] = puVar4[4];
    puVar4[4] = uVar3;
    uVar3 = (undefined4)(param_1[5]);
    param_1[5] = puVar4[5];
    puVar4[5] = uVar3;
    uVar3 = (undefined4)(param_1[6]);
    param_1[6] = puVar4[6];
    puVar4[6] = uVar3;
    uVar3 = (undefined4)(param_1[7]);
    param_1[7] = puVar4[7];
    puVar4[7] = uVar3;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1069cbd0; body size 14 bytes.
#line 1 "ENTRY_1069cbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_1069cbd0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 1069cc20; body size 3 bytes.
#line 1 "ENTRY_1069cc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069cc20(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1069cc30; body size 3 bytes.
#line 1 "ENTRY_1069cc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069cc30(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1069cc40; body size 3 bytes.
#line 1 "ENTRY_1069cc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069cc40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1069cc50; body size 3 bytes.
#line 1 "ENTRY_1069cc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069cc50(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1069cc60; body size 8 bytes.
#line 1 "ENTRY_1069cc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1069cc60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 1069cc70; body size 8 bytes.
#line 1 "ENTRY_1069cc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1069cc70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 1069cc80; body size 6 bytes.
#line 1 "ENTRY_1069cc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1069cc80(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 1069cc90; body size 6 bytes.
#line 1 "ENTRY_1069cc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1069cc90(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 1069cca0; body size 9 bytes.
#line 1 "ENTRY_1069cca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1069cca0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1069ccb0; body size 9 bytes.
#line 1 "ENTRY_1069ccb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1069ccb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1069ccc0; body size 10 bytes.
#line 1 "ENTRY_1069ccc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_1069ccc0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 1069d6d0; body size 22 bytes.
#line 1 "ENTRY_1069d6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1069d6d0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 1069d850; body size 67 bytes.
#line 1 "ENTRY_1069d850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1069d850(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  fVar2 = (float)((float)((double)iVar1 + (double)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
          (float)((double)*(int *)(param_1 + 0x24) +
                 (double)(&DAT_11880fb0)[-(*(int *)(param_1 + 0x24) >> 0x1f)]));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(float *)(param_1 + 8) <= fVar2 && fVar2 != *(float *)(param_1 + 8));
}


// Reference entry 1069d9c0; body size 8 bytes.
#line 1 "ENTRY_1069d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1069d9c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1069dc10; body size 3 bytes.
#line 1 "ENTRY_1069dc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069dc10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069dc20; body size 3 bytes.
#line 1 "ENTRY_1069dc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069dc20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069dc30; body size 3 bytes.
#line 1 "ENTRY_1069dc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069dc30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069dc40; body size 3 bytes.
#line 1 "ENTRY_1069dc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069dc40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069dc50; body size 3 bytes.
#line 1 "ENTRY_1069dc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069dc50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069dc60; body size 3 bytes.
#line 1 "ENTRY_1069dc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069dc60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1069dc70; body size 4 bytes.
#line 1 "ENTRY_1069dc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069dc70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1069dd00; body size 7 bytes.
#line 1 "ENTRY_1069dd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1069dd00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 1069dd10; body size 4 bytes.
#line 1 "ENTRY_1069dd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1069dd10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 8);
}


// Reference entry 1069dd20; body size 4 bytes.
#line 1 "ENTRY_1069dd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1069dd20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 8);
}


// Reference entry 1069ddc0; body size 216 bytes.
#line 1 "ENTRY_1069ddc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069ddc0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puStack_4;
  
  if (param_1[2] != 0) {
    puStack_4 = (undefined4 *)(param_1);
    if ((uint)param_1[2] < (uint)param_1[7] >> 3) {
      thunk_FUN_10694b70(*(undefined4 *)param_1[1],(undefined4 *)param_1[1]);
    }
    else {
      puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
      *(undefined4 *)puVar1[1] = 0;
      puVar1 = (undefined4 *)((undefined4 *)*puVar1);
      while (puVar1 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)((undefined4 *)*puVar1);
        thunk_FUN_1148a50e(puVar1,0x10);
        puVar1 = (undefined4 *)(puVar2);
      }
      *(undefined4 *)param_1[1] = param_1[1];
      *(undefined4 *)(param_1[1] + 4) = param_1[1];
      param_1[2] = 0;
      puStack_4 = (undefined4 *)((undefined4 *)param_1[1]);
      thunk_FUN_106905e0(param_1[3],param_1[4],&puStack_4);
    }
  }
  *param_1 = (undefined4)(*param_2);
  uVar3 = (undefined4)(param_1[1]);
  param_1[1] = param_2[1];
  param_2[1] = uVar3;
  uVar3 = (undefined4)(param_1[2]);
  param_1[2] = param_2[2];
  param_2[2] = uVar3;
  uVar3 = (undefined4)(param_1[3]);
  param_1[3] = param_2[3];
  param_2[3] = uVar3;
  uVar3 = (undefined4)(param_1[4]);
  param_1[4] = param_2[4];
  param_2[4] = uVar3;
  uVar3 = (undefined4)(param_1[5]);
  param_1[5] = param_2[5];
  param_2[5] = uVar3;
  uVar3 = (undefined4)(param_1[6]);
  param_1[6] = param_2[6];
  param_2[6] = uVar3;
  uVar3 = (undefined4)(param_1[7]);
  param_1[7] = param_2[7];
  param_2[7] = uVar3;
  return;
}


// Reference entry 1069ded0; body size 3 bytes.
#line 1 "ENTRY_1069ded0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1069ded0(void)

{
  return;
}


// Reference entry 1069dee0; body size 3 bytes.
#line 1 "ENTRY_1069dee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1069dee0(void)

{
  return;
}


// Reference entry 1069dfa0; body size 11 bytes.
#line 1 "ENTRY_1069dfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069dfa0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 1069dfb0; body size 6 bytes.
#line 1 "ENTRY_1069dfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1069dfb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1069dfc0; body size 26 bytes.
#line 1 "ENTRY_1069dfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069dfc0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 1069dfe0; body size 26 bytes.
#line 1 "ENTRY_1069dfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069dfe0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 1069e000; body size 10 bytes.
#line 1 "ENTRY_1069e000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069e000(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 1069e010; body size 97 bytes.
#line 1 "ENTRY_1069e010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069e010(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  return;
}


// Reference entry 1069e090; body size 45 bytes.
#line 1 "ENTRY_1069e090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069e090(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = (undefined4)(param_1[2]);
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  return;
}


// Reference entry 1069e0d0; body size 33 bytes.
#line 1 "ENTRY_1069e0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069e0d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  return;
}


// Reference entry 1069e1d0; body size 14 bytes.
#line 1 "ENTRY_1069e1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069e1d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc));
  return;
}


// Reference entry 1069e1f0; body size 13 bytes.
#line 1 "ENTRY_1069e1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069e1f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1069e200; body size 3 bytes.
#line 1 "ENTRY_1069e200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069e200(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1069e210; body size 12 bytes.
#line 1 "ENTRY_1069e210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069e210(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 1069e220; body size 11 bytes.
#line 1 "ENTRY_1069e220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069e220(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1069e230; body size 4 bytes.
#line 1 "ENTRY_1069e230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069e230(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1069e240; body size 43 bytes.
#line 1 "ENTRY_1069e240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1069e240(int param_1,int param_2,int param_3)

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
  *(int **)(param_1 + 4) = piVar2;
  *(int **)(param_3 + 4) = piVar1;
  *(int **)(param_2 + 4) = piVar3;
  return;
}


// Reference entry 1069e2d0; body size 90 bytes.
#line 1 "ENTRY_1069e2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1069e2d0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xccccccd) {
    param_1 = (uint)(param_1 * 0x14);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 1069e350; body size 87 bytes.
#line 1 "ENTRY_1069e350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1069e350(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 1069e3c0; body size 19 bytes.
#line 1 "ENTRY_1069e3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_1069e3c0(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(thunk_FUN_101a3180(param_2));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1 & *(uint *)(param_1 + 0x20));
}


// Reference entry 1069e3e0; body size 4 bytes.
#line 1 "ENTRY_1069e3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069e3e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1069e8e0; body size 68 bytes.
#line 1 "ENTRY_1069e8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1069e8e0(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)((int *)(param_1 + 0xc));
    iStack_4 = (int)(param_1);
    thunk_FUN_10699d60(piVar1,*(undefined4 *)(param_1 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(param_1 + 0x10) = 0;
    iStack_4 = (int)(*piVar1);
    thunk_FUN_1069a360(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),&iStack_4);
  }
  return;
}


// Reference entry 1069e9d0; body size 57 bytes.
#line 1 "ENTRY_1069e9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1069e9d0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 1069ea20; body size 60 bytes.
#line 1 "ENTRY_1069ea20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1069ea20(int param_1,int param_2)

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


// Reference entry 1069ea70; body size 61 bytes.
#line 1 "ENTRY_1069ea70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1069ea70(int param_1,int param_2)

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


// Reference entry 1069ed20; body size 32 bytes.
#line 1 "ENTRY_1069ed20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069ed20(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 1069ed50; body size 32 bytes.
#line 1 "ENTRY_1069ed50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069ed50(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 106a0020; body size 7 bytes.
#line 1 "ENTRY_106a0020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106a0020(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 106a0030; body size 4 bytes.
#line 1 "ENTRY_106a0030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_106a0030(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 8));
}


// Reference entry 106a0040; body size 4 bytes.
#line 1 "ENTRY_106a0040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_106a0040(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10)((float10)*(float *)(param_1 + 8));
}


// Reference entry 106a0050; body size 6 bytes.
#line 1 "ENTRY_106a0050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a0050(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xccccccc);
}


// Reference entry 106a0060; body size 6 bytes.
#line 1 "ENTRY_106a0060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a0060(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 106a0070; body size 6 bytes.
#line 1 "ENTRY_106a0070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a0070(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 106a0080; body size 6 bytes.
#line 1 "ENTRY_106a0080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a0080(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xccccccc);
}


// Reference entry 106a0090; body size 3 bytes.
#line 1 "ENTRY_106a0090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a0090(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106a00a0; body size 3 bytes.
#line 1 "ENTRY_106a00a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a00a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106a00b0; body size 3 bytes.
#line 1 "ENTRY_106a00b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a00b0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106a00c0; body size 3 bytes.
#line 1 "ENTRY_106a00c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a00c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106a0570; body size 28 bytes.
#line 1 "ENTRY_106a0570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106a0570(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 106a05a0; body size 28 bytes.
#line 1 "ENTRY_106a05a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106a05a0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 106a05d0; body size 28 bytes.
#line 1 "ENTRY_106a05d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106a05d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 106a0600; body size 28 bytes.
#line 1 "ENTRY_106a0600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106a0600(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 106a0630; body size 9 bytes.
#line 1 "ENTRY_106a0630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106a0630(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 106a1270; body size 25 bytes.
#line 1 "ENTRY_106a1270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a1270(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a1290; body size 26 bytes.
#line 1 "ENTRY_106a1290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_106a1290(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106a12b0; body size 6 bytes.
#line 1 "ENTRY_106a12b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_106a12b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIMusicServiceMenuItem");
}


// Reference entry 106a12c0; body size 27 bytes.
#line 1 "ENTRY_106a12c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a12c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a1330; body size 9 bytes.
#line 1 "ENTRY_106a1330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a1330(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIMusicServiceMenuItem);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a1560; body size 7 bytes.
#line 1 "ENTRY_106a1560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106a1560(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 106a1660; body size 3 bytes.
#line 1 "ENTRY_106a1660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a1660(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106a19d0; body size 9 bytes.
#line 1 "ENTRY_106a19d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a19d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 106a1a40; body size 6 bytes.
#line 1 "ENTRY_106a1a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_106a1a40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIMusicServiceMenuItem");
}


// Reference entry 106a1de0; body size 3 bytes.
#line 1 "ENTRY_106a1de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a1de0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106a1f10; body size 28 bytes.
#line 1 "ENTRY_106a1f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106a1f10(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 106a2a50; body size 14 bytes.
#line 1 "ENTRY_106a2a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106a2a50(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4));
  return;
}


// Reference entry 106a2a70; body size 13 bytes.
#line 1 "ENTRY_106a2a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106a2a70(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 106a2ea0; body size 18 bytes.
#line 1 "ENTRY_106a2ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a2ea0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a2ec0; body size 13 bytes.
#line 1 "ENTRY_106a2ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a2ec0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a2ed0; body size 22 bytes.
#line 1 "ENTRY_106a2ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a2ed0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a2ef0; body size 18 bytes.
#line 1 "ENTRY_106a2ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a2ef0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a3030; body size 22 bytes.
#line 1 "ENTRY_106a3030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a3030(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a3050; body size 11 bytes.
#line 1 "ENTRY_106a3050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a3050(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a3060; body size 13 bytes.
#line 1 "ENTRY_106a3060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a3060(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a30b0; body size 32 bytes.
#line 1 "ENTRY_106a30b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a30b0(undefined1 *param_1,FILE *param_2)

{
  int iVar1;
  
  iVar1 = (int)(fgetc(param_2));
  if (iVar1 == -1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  *param_1 = (undefined1)((char)iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 106a3700; body size 5 bytes.
#line 1 "ENTRY_106a3700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a3700(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106a3710; body size 37 bytes.
#line 1 "ENTRY_106a3710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a3710(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = (char)(thunk_FUN_106a48e0(param_2,param_1 + 0x10));
    if (cVar1 == '\0') {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 106a3740; body size 51 bytes.
#line 1 "ENTRY_106a3740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106a3740(int param_1,uint param_2,uint param_3,char param_4)

{
  void *pvVar1;
  
  if (param_3 < param_2) {
    pvVar1 = (void *)(memchr((void *)(param_1 + param_3),(int)param_4,param_2 - param_3));
    if (pvVar1 != (void *)0x0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((int)pvVar1 - param_1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-1);
}


// Reference entry 106a38d0; body size 28 bytes.
#line 1 "ENTRY_106a38d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_106a38d0(byte *param_1,FILE *param_2)

{
  int iVar1;
  
  iVar1 = (int)(ungetc((uint)*param_1,param_2));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(iVar1 != -1);
}


// Reference entry 106a3900; body size 5 bytes.
#line 1 "ENTRY_106a3900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a3900(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106a3910; body size 5 bytes.
#line 1 "ENTRY_106a3910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a3910(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106a3920; body size 5 bytes.
#line 1 "ENTRY_106a3920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a3920(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106a3970; body size 15 bytes.
#line 1 "ENTRY_106a3970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a3970(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 106a3990; body size 5 bytes.
#line 1 "ENTRY_106a3990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a3990(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106a39a0; body size 5 bytes.
#line 1 "ENTRY_106a39a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a39a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106a39b0; body size 5 bytes.
#line 1 "ENTRY_106a39b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a39b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106a39c0; body size 5 bytes.
#line 1 "ENTRY_106a39c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a39c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106a3b30; body size 11 bytes.
#line 1 "ENTRY_106a3b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a3b30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a3b40; body size 11 bytes.
#line 1 "ENTRY_106a3b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a3b40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a3bd0; body size 11 bytes.
#line 1 "ENTRY_106a3bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a3bd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a3be0; body size 3 bytes.
#line 1 "ENTRY_106a3be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a3be0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106a3ef0; body size 78 bytes.
#line 1 "ENTRY_106a3ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_106a3ef0(undefined4 *param_2,uint param_3,uint param_4)
{
  undefined1 *param_1 = (undefined1 *)this;
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (undefined1)(0);
  if (param_3 <= (uint)param_2[4]) {
    uVar1 = (uint)(param_2[4] - param_3);
    if (uVar1 < param_4) {
      param_4 = (uint)(uVar1);
    }
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)((undefined4 *)*param_2);
    }
    thunk_FUN_1012d130((int)param_2 + param_3,param_4);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
  }
                    
  thunk_FUN_106a5620();
}


// Reference entry 106a3f60; body size 46 bytes.
#line 1 "ENTRY_106a3f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a3f60(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_4);
  param_1[1] = param_5;
  param_1[4] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a3fa0; body size 52 bytes.
#line 1 "ENTRY_106a3fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a3fa0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x20));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a3ff0; body size 11 bytes.
#line 1 "ENTRY_106a3ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a3ff0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a43e0; body size 17 bytes.
#line 1 "ENTRY_106a43e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106a43e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  __std_exception_destroy(param_1 + 1);
  return;
}


// Reference entry 106a4440; body size 14 bytes.
#line 1 "ENTRY_106a4440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_106a4440(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 106a4580; body size 6 bytes.
#line 1 "ENTRY_106a4580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106a4580(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 106a4590; body size 82 bytes.
#line 1 "ENTRY_106a4590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_106a4590(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)((int *)*param_1);
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)((int *)(piVar2[2] + 0x10));
  }
  iVar3 = (int)(*piVar2);
  if (*(char *)(iVar3 + 0xd) != '\0') {
    cVar1 = (char)(*(char *)(piVar2[1] + 0xd));
    piVar5 = (int *)((int *)piVar2[1]);
    while ((cVar1 == '\0' && (piVar2 == (int *)*piVar5))) {
      cVar1 = (char)(*(char *)(piVar5[1] + 0xd));
      piVar2 = (int *)(piVar5);
      piVar5 = (int *)((int *)piVar5[1]);
    }
    if (*(char *)((int)piVar2 + 0xd) != '\0') {
      piVar5 = (int *)(piVar2);
    }
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(piVar5 + 4);
  }
  cVar1 = (char)(*(char *)(*(int *)(iVar3 + 8) + 0xd));
  iVar4 = (int)(*(int *)(iVar3 + 8));
  while (cVar1 == '\0') {
    cVar1 = (char)(*(char *)(*(int *)(iVar4 + 8) + 0xd));
    iVar3 = (int)(iVar4);
    iVar4 = (int)(*(int *)(iVar4 + 8));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)((int *)(iVar3 + 0x10));
}


// Reference entry 106a4600; body size 6 bytes.
#line 1 "ENTRY_106a4600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106a4600(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 106a4760; body size 16 bytes.
#line 1 "ENTRY_106a4760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106a4760(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 4);
  return;
}


// Reference entry 106a48c0; body size 23 bytes.
#line 1 "ENTRY_106a48c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106a48c0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
                    
                    
    (**(code **)*param_1)();
    return;
  }
  return;
}


// Reference entry 106a4e70; body size 31 bytes.
#line 1 "ENTRY_106a4e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106a4e70(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 106a4ec0; body size 17 bytes.
#line 1 "ENTRY_106a4ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106a4ec0(uint param_2)
{
  int param_1 = (int )this;
  if (param_2 <= *(uint *)(param_1 + 0x10)) {
    return;
  }
                    
  thunk_FUN_106a5620();
}


// Reference entry 106a4ee0; body size 19 bytes.
#line 1 "ENTRY_106a4ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_106a4ee0(int param_2,uint param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x10) - param_2);
  if (uVar1 < param_3) {
    param_3 = (uint)(uVar1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(param_3);
}


// Reference entry 106a5010; body size 68 bytes.
#line 1 "ENTRY_106a5010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a5010(int param_2,uint param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = (uint)(param_1[4] - param_2);
  if (uVar1 < param_3) {
    param_3 = (uint)(uVar1);
  }
  puVar2 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)((undefined4 *)*param_1);
  }
  iVar3 = (int)(param_1[4] - param_3);
  param_1[4] = iVar3;
  memmove((void *)((int)puVar2 + param_2),(void *)((int)puVar2 + param_2 + param_3),
          (iVar3 - param_2) + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a5070; body size 3 bytes.
#line 1 "ENTRY_106a5070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a5070(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106a5480; body size 79 bytes.
#line 1 "ENTRY_106a5480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106a5480(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8));
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = (int)(param_2);
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = (int *)(*(int **)(param_2 + 4));
  if (param_2 == *piVar2) {
    *piVar2 = (int)((int)piVar1);
    *piVar1 = (int)(param_2);
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = (int)(param_2);
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 106a5520; body size 83 bytes.
#line 1 "ENTRY_106a5520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106a5520(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(*(int *)(iVar1 + 8));
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)((int *)param_2[1]);
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = (int)(iVar1);
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 106a5590; body size 51 bytes.
#line 1 "ENTRY_106a5590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106a5590(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1 + 0x3c);
  iVar2 = (int)(**(int **)(param_1 + 0xc));
  if (iVar2 != iVar1) {
    *(int *)(param_1 + 0x50) = iVar2;
    *(int *)(param_1 + 0x54) = **(int **)(param_1 + 0x2c) + **(int **)(param_1 + 0x1c);
  }
  **(int **)(param_1 + 0xc) = iVar1;
  **(int **)(param_1 + 0x1c) = iVar1;
  **(undefined4 **)(param_1 + 0x2c) = 1;
  return;
}


// Reference entry 106a64e0; body size 59 bytes.
#line 1 "ENTRY_106a64e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106a64e0(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 <= (uint)param_1[4]) {
    uVar1 = (uint)(param_1[4] - param_2);
    if (uVar1 < param_3) {
      param_3 = (uint)(uVar1);
    }
    if (0xf < (uint)param_1[5]) {
      param_1 = (undefined4 *)((undefined4 *)*param_1);
    }
    thunk_FUN_1012d130((int)param_1 + param_2,param_3);
    return;
  }
                    
  thunk_FUN_106a5620();
}


// Reference entry 106a6530; body size 13 bytes.
#line 1 "ENTRY_106a6530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106a6530(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 106a6a80; body size 12 bytes.
#line 1 "ENTRY_106a6a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a6a80(undefined4 *param_1)

{
  if (0xf < (uint)param_1[5]) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)((undefined4 *)*param_1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a6a90; body size 11 bytes.
#line 1 "ENTRY_106a6a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106a6a90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106a6b10; body size 25 bytes.
#line 1 "ENTRY_106a6b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a6b10(void *param_1,size_t param_2,char *param_3)

{
  memchr(param_1,(int)*param_3,param_2);
  return;
}


// Reference entry 106a6ba0; body size 60 bytes.
#line 1 "ENTRY_106a6ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_106a6ba0(char param_2,uint param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)((undefined4 *)*param_1);
  }
  if (param_3 < (uint)param_1[4]) {
    pvVar1 = (void *)(memchr((void *)((int)puVar2 + param_3),(int)param_2,param_1[4] - param_3));
    if (pvVar1 != (void *)0x0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((int)pvVar1 - (int)puVar2);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-1);
}


// Reference entry 106a6bf0; body size 12 bytes.
#line 1 "ENTRY_106a6bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a6bf0(undefined4 *param_1)

{
  if (0xf < (uint)param_1[5]) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)((undefined4 *)*param_1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a6e40; body size 7 bytes.
#line 1 "ENTRY_106a6e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_106a6e40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106a6ea0; body size 8 bytes.
#line 1 "ENTRY_106a6ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106a6ea0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x4c) != 0);
}


// Reference entry 106a6eb0; body size 8 bytes.
#line 1 "ENTRY_106a6eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106a6eb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 100) != 0);
}


// Reference entry 106a6ec0; body size 6 bytes.
#line 1 "ENTRY_106a6ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a6ec0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x7ffffff);
}


// Reference entry 106a6ed0; body size 6 bytes.
#line 1 "ENTRY_106a6ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a6ed0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x7ffffff);
}


// Reference entry 106a7330; body size 5 bytes.
#line 1 "ENTRY_106a7330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a7330(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106a7680; body size 11 bytes.
#line 1 "ENTRY_106a7680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106a7680(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106a7690; body size 9 bytes.
#line 1 "ENTRY_106a7690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a7690(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 106a7ec0; body size 4 bytes.
#line 1 "ENTRY_106a7ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a7ec0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 106a7ed0; body size 18 bytes.
#line 1 "ENTRY_106a7ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106a7ed0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x14));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x10));
  param_2[1] = uVar1;
  return;
}


// Reference entry 106a7ef0; body size 76 bytes.
#line 1 "ENTRY_106a7ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_106a7ef0(undefined1 *param_2,uint param_3,uint param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = (undefined1)(0);
  if (param_3 <= (uint)param_1[4]) {
    uVar1 = (uint)(param_1[4] - param_3);
    if (uVar1 < param_4) {
      param_4 = (uint)(uVar1);
    }
    if (0xf < (uint)param_1[5]) {
      param_1 = (undefined4 *)((undefined4 *)*param_1);
    }
    thunk_FUN_1012d130((int)param_1 + param_3,param_4);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_2);
  }
                    
  thunk_FUN_106a5620();
}


// Reference entry 106a8680; body size 18 bytes.
#line 1 "ENTRY_106a8680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a8680(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a86a0; body size 18 bytes.
#line 1 "ENTRY_106a86a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a86a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a86c0; body size 25 bytes.
#line 1 "ENTRY_106a86c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a86c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a86e0; body size 25 bytes.
#line 1 "ENTRY_106a86e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a86e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a8700; body size 25 bytes.
#line 1 "ENTRY_106a8700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a8700(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a8720; body size 22 bytes.
#line 1 "ENTRY_106a8720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a8720(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a8740; body size 22 bytes.
#line 1 "ENTRY_106a8740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a8740(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a8760; body size 22 bytes.
#line 1 "ENTRY_106a8760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a8760(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a8860; body size 22 bytes.
#line 1 "ENTRY_106a8860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a8860(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a8880; body size 18 bytes.
#line 1 "ENTRY_106a8880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a8880(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a88a0; body size 18 bytes.
#line 1 "ENTRY_106a88a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a88a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a8b20; body size 25 bytes.
#line 1 "ENTRY_106a8b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a8b20(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a8b40; body size 11 bytes.
#line 1 "ENTRY_106a8b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a8b40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a8b50; body size 11 bytes.
#line 1 "ENTRY_106a8b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a8b50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a8b60; body size 22 bytes.
#line 1 "ENTRY_106a8b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a8b60(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a8b80; body size 22 bytes.
#line 1 "ENTRY_106a8b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a8b80(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a8ba0; body size 18 bytes.
#line 1 "ENTRY_106a8ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a8ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a8d50; body size 11 bytes.
#line 1 "ENTRY_106a8d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a8d50(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a8ef0; body size 22 bytes.
#line 1 "ENTRY_106a8ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a8ef0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a8f10; body size 18 bytes.
#line 1 "ENTRY_106a8f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a8f10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a8fd0; body size 33 bytes.
#line 1 "ENTRY_106a8fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a8fd0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(*param_6);
  uVar2 = (undefined4)(*param_5);
  *param_1 = (undefined4)(*param_4);
  param_1[2] = uVar1;
  param_1[1] = uVar2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a9000; body size 25 bytes.
#line 1 "ENTRY_106a9000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a9000(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a9020; body size 33 bytes.
#line 1 "ENTRY_106a9020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a9020(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(*param_6);
  uVar2 = (undefined4)(*param_5);
  *param_1 = (undefined4)(*param_4);
  param_1[2] = uVar1;
  param_1[1] = uVar2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a9050; body size 25 bytes.
#line 1 "ENTRY_106a9050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a9050(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a9070; body size 27 bytes.
#line 1 "ENTRY_106a9070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a9070(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106a90a0; body size 91 bytes.
#line 1 "ENTRY_106a90a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_106a90a0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = (int)(0);
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if (piVar2 != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[1] = iVar3;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
  }
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106a9120; body size 26 bytes.
#line 1 "ENTRY_106a9120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_106a9120(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106a9300; body size 3 bytes.
#line 1 "ENTRY_106a9300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9300(void)

{
  return;
}


// Reference entry 106a9310; body size 3 bytes.
#line 1 "ENTRY_106a9310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9310(void)

{
  return;
}


// Reference entry 106a9320; body size 3 bytes.
#line 1 "ENTRY_106a9320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9320(void)

{
  return;
}


// Reference entry 106a9330; body size 3 bytes.
#line 1 "ENTRY_106a9330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9330(void)

{
  return;
}


// Reference entry 106a9740; body size 25 bytes.
#line 1 "ENTRY_106a9740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9740(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 106a9760; body size 25 bytes.
#line 1 "ENTRY_106a9760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9760(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x28));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 106a9b50; body size 5 bytes.
#line 1 "ENTRY_106a9b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a9b50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106a9b60; body size 5 bytes.
#line 1 "ENTRY_106a9b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a9b60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106a9b70; body size 13 bytes.
#line 1 "ENTRY_106a9b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9b70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106a9b80; body size 13 bytes.
#line 1 "ENTRY_106a9b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9b80(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106a9b90; body size 13 bytes.
#line 1 "ENTRY_106a9b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9b90(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106a9ba0; body size 13 bytes.
#line 1 "ENTRY_106a9ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9ba0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106a9ff0; body size 3 bytes.
#line 1 "ENTRY_106a9ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9ff0(void)

{
  return;
}


// Reference entry 106aa000; body size 3 bytes.
#line 1 "ENTRY_106aa000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aa000(void)

{
  return;
}


// Reference entry 106aa140; body size 34 bytes.
#line 1 "ENTRY_106aa140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aa140(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 5) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 106aa350; body size 23 bytes.
#line 1 "ENTRY_106aa350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106aa350(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_106b1900(param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x14;
  return;
}


// Reference entry 106aa400; body size 29 bytes.
#line 1 "ENTRY_106aa400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106aa400(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_106aec80(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x14;
  return;
}


// Reference entry 106aa430; body size 46 bytes.
#line 1 "ENTRY_106aa430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106aa430(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  **(int **)(param_1 + 4) = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 106aa4d0; body size 23 bytes.
#line 1 "ENTRY_106aa4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106aa4d0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_106b1900(param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x14;
  return;
}


// Reference entry 106aa550; body size 27 bytes.
#line 1 "ENTRY_106aa550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106aa550(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_106aec80(param_1,*(undefined4 *)(param_1 + 4),param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x14;
  return;
}


// Reference entry 106aa580; body size 46 bytes.
#line 1 "ENTRY_106aa580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106aa580(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  **(int **)(param_1 + 4) = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 106aba00; body size 15 bytes.
#line 1 "ENTRY_106aba00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aba00(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 106aba20; body size 15 bytes.
#line 1 "ENTRY_106aba20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aba20(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x28);
  return;
}


// Reference entry 106abb40; body size 7 bytes.
#line 1 "ENTRY_106abb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abb40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106abb50; body size 7 bytes.
#line 1 "ENTRY_106abb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abb50(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106abb60; body size 5 bytes.
#line 1 "ENTRY_106abb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abb60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106abb70; body size 7 bytes.
#line 1 "ENTRY_106abb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abb70(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106abb80; body size 7 bytes.
#line 1 "ENTRY_106abb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abb80(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106abb90; body size 7 bytes.
#line 1 "ENTRY_106abb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abb90(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106abba0; body size 7 bytes.
#line 1 "ENTRY_106abba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abba0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106abbb0; body size 7 bytes.
#line 1 "ENTRY_106abbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abbb0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106abbc0; body size 7 bytes.
#line 1 "ENTRY_106abbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abbc0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106abbd0; body size 7 bytes.
#line 1 "ENTRY_106abbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abbd0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106ac400; body size 5 bytes.
#line 1 "ENTRY_106ac400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ac400(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ac410; body size 5 bytes.
#line 1 "ENTRY_106ac410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ac410(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ac420; body size 5 bytes.
#line 1 "ENTRY_106ac420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ac420(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ac460; body size 31 bytes.
#line 1 "ENTRY_106ac460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_106ac460(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 106ac490; body size 31 bytes.
#line 1 "ENTRY_106ac490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_106ac490(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 106ac860; body size 8 bytes.
#line 1 "ENTRY_106ac860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106ac860(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 8);
}


// Reference entry 106ad1f0; body size 11 bytes.
#line 1 "ENTRY_106ad1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ad1f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 106ad200; body size 3 bytes.
#line 1 "ENTRY_106ad200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ad200(void)

{
  return;
}


// Reference entry 106ad210; body size 3 bytes.
#line 1 "ENTRY_106ad210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ad210(void)

{
  return;
}


// Reference entry 106ad220; body size 3 bytes.
#line 1 "ENTRY_106ad220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ad220(void)

{
  return;
}


// Reference entry 106ad230; body size 3 bytes.
#line 1 "ENTRY_106ad230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ad230(void)

{
  return;
}


// Reference entry 106ad5d0; body size 8 bytes.
#line 1 "ENTRY_106ad5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106ad5d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + -8);
}


// Reference entry 106ad6c0; body size 5 bytes.
#line 1 "ENTRY_106ad6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ad6c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ad7e0; body size 13 bytes.
#line 1 "ENTRY_106ad7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ad7e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106ad7f0; body size 13 bytes.
#line 1 "ENTRY_106ad7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ad7f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106ad800; body size 13 bytes.
#line 1 "ENTRY_106ad800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ad800(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106adc20; body size 19 bytes.
#line 1 "ENTRY_106adc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106adc20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 106adc40; body size 3 bytes.
#line 1 "ENTRY_106adc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_106adc40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
}


// Reference entry 106ae0f0; body size 7 bytes.
#line 1 "ENTRY_106ae0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae0f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106ae100; body size 24 bytes.
#line 1 "ENTRY_106ae100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106ae100(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106ae320(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 106ae1b0; body size 5 bytes.
#line 1 "ENTRY_106ae1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae1b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae1c0; body size 5 bytes.
#line 1 "ENTRY_106ae1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae1c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae1d0; body size 5 bytes.
#line 1 "ENTRY_106ae1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae1d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae780; body size 5 bytes.
#line 1 "ENTRY_106ae780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae780(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae790; body size 5 bytes.
#line 1 "ENTRY_106ae790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae790(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae7a0; body size 5 bytes.
#line 1 "ENTRY_106ae7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae7a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae7b0; body size 5 bytes.
#line 1 "ENTRY_106ae7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae7b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae7c0; body size 5 bytes.
#line 1 "ENTRY_106ae7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae7c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae820; body size 5 bytes.
#line 1 "ENTRY_106ae820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae820(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae830; body size 5 bytes.
#line 1 "ENTRY_106ae830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae830(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae840; body size 5 bytes.
#line 1 "ENTRY_106ae840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae840(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae850; body size 5 bytes.
#line 1 "ENTRY_106ae850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae850(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae860; body size 5 bytes.
#line 1 "ENTRY_106ae860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae860(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae870; body size 5 bytes.
#line 1 "ENTRY_106ae870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae870(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae880; body size 5 bytes.
#line 1 "ENTRY_106ae880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae880(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae890; body size 5 bytes.
#line 1 "ENTRY_106ae890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae890(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae8a0; body size 5 bytes.
#line 1 "ENTRY_106ae8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae8a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae8b0; body size 5 bytes.
#line 1 "ENTRY_106ae8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae8b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae8c0; body size 5 bytes.
#line 1 "ENTRY_106ae8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae8c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae8d0; body size 5 bytes.
#line 1 "ENTRY_106ae8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae8d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae8e0; body size 5 bytes.
#line 1 "ENTRY_106ae8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae8e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae8f0; body size 5 bytes.
#line 1 "ENTRY_106ae8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae8f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae900; body size 5 bytes.
#line 1 "ENTRY_106ae900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae900(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae910; body size 5 bytes.
#line 1 "ENTRY_106ae910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae910(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae920; body size 5 bytes.
#line 1 "ENTRY_106ae920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae920(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae930; body size 5 bytes.
#line 1 "ENTRY_106ae930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae930(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae940; body size 5 bytes.
#line 1 "ENTRY_106ae940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae940(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae950; body size 5 bytes.
#line 1 "ENTRY_106ae950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae950(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae960; body size 5 bytes.
#line 1 "ENTRY_106ae960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae960(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ae970; body size 18 bytes.
#line 1 "ENTRY_106ae970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ae970(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 8);
  return;
}


// Reference entry 106ae990; body size 17 bytes.
#line 1 "ENTRY_106ae990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ae990(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 0x14);
  return;
}


// Reference entry 106ae9b0; body size 20 bytes.
#line 1 "ENTRY_106ae9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106ae9b0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_106a9340(param_1,param_2,param_2);
  return;
}


// Reference entry 106ae9d0; body size 20 bytes.
#line 1 "ENTRY_106ae9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106ae9d0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_106a94b0(param_1,param_2,param_2);
  return;
}


// Reference entry 106aeaa0; body size 22 bytes.
#line 1 "ENTRY_106aeaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aeaa0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[3] = 0;
  return;
}


// Reference entry 106aec40; body size 14 bytes.
#line 1 "ENTRY_106aec40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aec40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_106b1900(param_3);
  return;
}


// Reference entry 106aec60; body size 14 bytes.
#line 1 "ENTRY_106aec60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aec60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_106b1900(param_3);
  return;
}


// Reference entry 106aed60; body size 35 bytes.
#line 1 "ENTRY_106aed60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aed60(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return;
}


// Reference entry 106af010; body size 11 bytes.
#line 1 "ENTRY_106af010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106af010(undefined4 param_1,undefined4 *param_2)

{
  (**(code **)*param_2)(0);
  return;
}


// Reference entry 106af020; body size 12 bytes.
#line 1 "ENTRY_106af020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106af020(int param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 - param_1 >> 3);
}


// Reference entry 106af030; body size 26 bytes.
#line 1 "ENTRY_106af030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106af030(int param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - param_1) / 0x14);
}


// Reference entry 106af050; body size 86 bytes.
#line 1 "ENTRY_106af050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106af050(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (int)(0);
  while (param_1 != (int *)(param_2)) {
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
      while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
        cVar1 = (char)(*(char *)(param_1[1] + 0xd));
        piVar3 = (int *)((int *)param_1[1]);
        piVar2 = (int *)(param_1);
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar4);
}


// Reference entry 106af290; body size 40 bytes.
#line 1 "ENTRY_106af290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106af290(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    thunk_FUN_106b1900(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x14;
    return;
  }
  thunk_FUN_106aaa10(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 106af370; body size 42 bytes.
#line 1 "ENTRY_106af370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106af370(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    thunk_FUN_106aec80(param_1);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x14;
    return;
  }
  thunk_FUN_106ab040(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 106af5c0; body size 15 bytes.
#line 1 "ENTRY_106af5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af5c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 106af5e0; body size 15 bytes.
#line 1 "ENTRY_106af5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af5e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 106af600; body size 15 bytes.
#line 1 "ENTRY_106af600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af600(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 106af620; body size 15 bytes.
#line 1 "ENTRY_106af620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af620(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 106af640; body size 15 bytes.
#line 1 "ENTRY_106af640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af640(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 106af660; body size 15 bytes.
#line 1 "ENTRY_106af660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af660(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 106af780; body size 5 bytes.
#line 1 "ENTRY_106af780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af780(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af790; body size 5 bytes.
#line 1 "ENTRY_106af790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af790(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af7a0; body size 5 bytes.
#line 1 "ENTRY_106af7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af7a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af7b0; body size 5 bytes.
#line 1 "ENTRY_106af7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af7b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af7c0; body size 5 bytes.
#line 1 "ENTRY_106af7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af7c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af7d0; body size 5 bytes.
#line 1 "ENTRY_106af7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af7d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af7e0; body size 5 bytes.
#line 1 "ENTRY_106af7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af7e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af7f0; body size 5 bytes.
#line 1 "ENTRY_106af7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af7f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af800; body size 5 bytes.
#line 1 "ENTRY_106af800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af800(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af810; body size 5 bytes.
#line 1 "ENTRY_106af810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af810(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af820; body size 5 bytes.
#line 1 "ENTRY_106af820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af820(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af830; body size 5 bytes.
#line 1 "ENTRY_106af830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af830(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af840; body size 5 bytes.
#line 1 "ENTRY_106af840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af840(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af850; body size 5 bytes.
#line 1 "ENTRY_106af850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af850(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af860; body size 5 bytes.
#line 1 "ENTRY_106af860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af860(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af8c0; body size 5 bytes.
#line 1 "ENTRY_106af8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af8c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af8d0; body size 5 bytes.
#line 1 "ENTRY_106af8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af8d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af8e0; body size 5 bytes.
#line 1 "ENTRY_106af8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af8e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af8f0; body size 5 bytes.
#line 1 "ENTRY_106af8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af8f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af900; body size 5 bytes.
#line 1 "ENTRY_106af900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af900(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af910; body size 5 bytes.
#line 1 "ENTRY_106af910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af910(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af920; body size 5 bytes.
#line 1 "ENTRY_106af920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af920(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af930; body size 5 bytes.
#line 1 "ENTRY_106af930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af930(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af940; body size 5 bytes.
#line 1 "ENTRY_106af940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af940(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af950; body size 5 bytes.
#line 1 "ENTRY_106af950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af950(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af960; body size 5 bytes.
#line 1 "ENTRY_106af960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af960(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af9c0; body size 5 bytes.
#line 1 "ENTRY_106af9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af9c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af9d0; body size 5 bytes.
#line 1 "ENTRY_106af9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af9d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af9e0; body size 5 bytes.
#line 1 "ENTRY_106af9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af9e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106af9f0; body size 5 bytes.
#line 1 "ENTRY_106af9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af9f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106afa00; body size 5 bytes.
#line 1 "ENTRY_106afa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106afa00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106afa10; body size 5 bytes.
#line 1 "ENTRY_106afa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106afa10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106afa20; body size 5 bytes.
#line 1 "ENTRY_106afa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106afa20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106afa30; body size 5 bytes.
#line 1 "ENTRY_106afa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106afa30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106afa40; body size 5 bytes.
#line 1 "ENTRY_106afa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106afa40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106afa50; body size 11 bytes.
#line 1 "ENTRY_106afa50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106afa50(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 106afc80; body size 49 bytes.
#line 1 "ENTRY_106afc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106afc80(int *param_2,int param_3,undefined4 param_4,undefined4 param_5)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_106abdc0(param_3,param_4,param_5,param_3);
  *param_2 = (int)(*param_1 + (param_3 - iVar1 >> 3) * 8);
  return;
}


// Reference entry 106b0000; body size 5 bytes.
#line 1 "ENTRY_106b0000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b0000(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b0010; body size 5 bytes.
#line 1 "ENTRY_106b0010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b0010(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b0020; body size 5 bytes.
#line 1 "ENTRY_106b0020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b0020(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b0080; body size 5 bytes.
#line 1 "ENTRY_106b0080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b0080(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b0090; body size 5 bytes.
#line 1 "ENTRY_106b0090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b0090(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b00a0; body size 5 bytes.
#line 1 "ENTRY_106b00a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b00a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b00b0; body size 5 bytes.
#line 1 "ENTRY_106b00b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b00b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b00c0; body size 5 bytes.
#line 1 "ENTRY_106b00c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b00c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b00d0; body size 5 bytes.
#line 1 "ENTRY_106b00d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b00d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b00e0; body size 5 bytes.
#line 1 "ENTRY_106b00e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b00e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b00f0; body size 12 bytes.
#line 1 "ENTRY_106b00f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106b00f0(int param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + param_2 * 8);
}


// Reference entry 106b0100; body size 15 bytes.
#line 1 "ENTRY_106b0100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106b0100(int param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + param_2 * 0x14);
}


// Reference entry 106b02a0; body size 19 bytes.
#line 1 "ENTRY_106b02a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106b02a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 106b03f0; body size 95 bytes.
#line 1 "ENTRY_106b03f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b03f0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_1074ed30());
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4));
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0470; body size 95 bytes.
#line 1 "ENTRY_106b0470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0470(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_1076bff0());
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4));
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b04f0; body size 95 bytes.
#line 1 "ENTRY_106b04f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b04f0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10783320());
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4));
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b05e0; body size 16 bytes.
#line 1 "ENTRY_106b05e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b05e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0600; body size 16 bytes.
#line 1 "ENTRY_106b0600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b0600(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0620; body size 16 bytes.
#line 1 "ENTRY_106b0620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b0620(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0740; body size 18 bytes.
#line 1 "ENTRY_106b0740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0740(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0760; body size 18 bytes.
#line 1 "ENTRY_106b0760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0760(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0780; body size 3 bytes.
#line 1 "ENTRY_106b0780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b0780(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b0790; body size 10 bytes.
#line 1 "ENTRY_106b0790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b0790(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 106b0870; body size 11 bytes.
#line 1 "ENTRY_106b0870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0870(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0880; body size 11 bytes.
#line 1 "ENTRY_106b0880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0880(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0970; body size 11 bytes.
#line 1 "ENTRY_106b0970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0970(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0980; body size 11 bytes.
#line 1 "ENTRY_106b0980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0980(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0990; body size 51 bytes.
#line 1 "ENTRY_106b0990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0990(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  pvVar1 = (void *)(operator_new(0x28));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *(void **)param_1[1] = pvVar1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b09d0; body size 11 bytes.
#line 1 "ENTRY_106b09d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b09d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b09e0; body size 11 bytes.
#line 1 "ENTRY_106b09e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b09e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0af0; body size 11 bytes.
#line 1 "ENTRY_106b0af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0af0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0b00; body size 11 bytes.
#line 1 "ENTRY_106b0b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0b00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0b10; body size 11 bytes.
#line 1 "ENTRY_106b0b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0b10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0b20; body size 11 bytes.
#line 1 "ENTRY_106b0b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0b20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0b30; body size 11 bytes.
#line 1 "ENTRY_106b0b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0b30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0b40; body size 16 bytes.
#line 1 "ENTRY_106b0b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b0b40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0b60; body size 16 bytes.
#line 1 "ENTRY_106b0b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b0b60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0b80; body size 13 bytes.
#line 1 "ENTRY_106b0b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0b80(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0b90; body size 21 bytes.
#line 1 "ENTRY_106b0b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0b90(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0bb0; body size 21 bytes.
#line 1 "ENTRY_106b0bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0bb0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0bd0; body size 21 bytes.
#line 1 "ENTRY_106b0bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0bd0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0bf0; body size 21 bytes.
#line 1 "ENTRY_106b0bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0bf0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0c10; body size 11 bytes.
#line 1 "ENTRY_106b0c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0c10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0c20; body size 11 bytes.
#line 1 "ENTRY_106b0c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0c20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0c30; body size 11 bytes.
#line 1 "ENTRY_106b0c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0c30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0c40; body size 11 bytes.
#line 1 "ENTRY_106b0c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0c40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0c50; body size 11 bytes.
#line 1 "ENTRY_106b0c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0c50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0c60; body size 11 bytes.
#line 1 "ENTRY_106b0c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0c60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0c70; body size 23 bytes.
#line 1 "ENTRY_106b0c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b0c70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0c90; body size 25 bytes.
#line 1 "ENTRY_106b0c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0c90(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0cb0; body size 23 bytes.
#line 1 "ENTRY_106b0cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b0cb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0cd0; body size 25 bytes.
#line 1 "ENTRY_106b0cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0cd0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0cf0; body size 23 bytes.
#line 1 "ENTRY_106b0cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b0cf0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0d10; body size 3 bytes.
#line 1 "ENTRY_106b0d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b0d10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b0d20; body size 3 bytes.
#line 1 "ENTRY_106b0d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b0d20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b0d30; body size 3 bytes.
#line 1 "ENTRY_106b0d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b0d30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b0d40; body size 3 bytes.
#line 1 "ENTRY_106b0d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b0d40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b0d50; body size 3 bytes.
#line 1 "ENTRY_106b0d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b0d50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b0de0; body size 52 bytes.
#line 1 "ENTRY_106b0de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b0de0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x20));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0e30; body size 76 bytes.
#line 1 "ENTRY_106b0e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0e30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar2 = (void *)(operator_new(0x28));
  *(void **)pvVar2 = (void *)(pvVar2);
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)((int)pvVar2 + 8) = pvVar2;
  *(undefined2 *)((int)pvVar2 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar2);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(pvVar2);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0f30; body size 52 bytes.
#line 1 "ENTRY_106b0f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b0f30(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x28));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b0fd0; body size 13 bytes.
#line 1 "ENTRY_106b0fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0fd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b10b0; body size 23 bytes.
#line 1 "ENTRY_106b10b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b10b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b10d0; body size 49 bytes.
#line 1 "ENTRY_106b10d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b10d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_2[2]);
  uVar2 = (undefined4)(*param_2);
  uVar3 = (undefined4)(param_2[1]);
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = (undefined4)(0);
  param_1[2] = uVar1;
  *param_1 = (undefined4)(uVar2);
  param_1[1] = uVar3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b1110; body size 23 bytes.
#line 1 "ENTRY_106b1110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b1110(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b1350; body size 23 bytes.
#line 1 "ENTRY_106b1350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b1350(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b22a0; body size 9 bytes.
#line 1 "ENTRY_106b22a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b22a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDiscoveryHistoryStore_Listener);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b2310; body size 14 bytes.
#line 1 "ENTRY_106b2310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b2310(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b2330; body size 60 bytes.
#line 1 "ENTRY_106b2330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b2330(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (uint)&ghidra_vftable_SCBaseLaunchable;
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddMusicServiceLaunchable);
  param_1[2] = (uint)&ghidra_vftable_SCAddMusicServiceLaunchable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b23b0; body size 37 bytes.
#line 1 "ENTRY_106b23b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b23b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f04dc0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServicePopUpLaunchable);
  param_1[2] = (uint)&ghidra_vftable_SCAddVoiceServicePopUpLaunchable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b23e0; body size 37 bytes.
#line 1 "ENTRY_106b23e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b23e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f04dc0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceTileLaunchable);
  param_1[2] = (uint)&ghidra_vftable_SCAddVoiceServiceTileLaunchable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b2410; body size 44 bytes.
#line 1 "ENTRY_106b2410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b2410(undefined4 param_2,undefined1 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f04dc0(param_2);
  *(undefined1 *)(param_1 + 6) = param_3;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationLaunchable);
  param_1[2] = (uint)&ghidra_vftable_SCAmpConfigurationLaunchable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b2450; body size 9 bytes.
#line 1 "ENTRY_106b2450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b2450(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAssetDownloadCallback);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b2500; body size 37 bytes.
#line 1 "ENTRY_106b2500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b2500(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f04dc0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBTDeviceInfoLaunchable);
  param_1[2] = (uint)&ghidra_vftable_SCBTDeviceInfoLaunchable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b2530; body size 37 bytes.
#line 1 "ENTRY_106b2530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b2530(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f04dc0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBTOnlyLaunchable);
  param_1[2] = (uint)&ghidra_vftable_SCBTOnlyLaunchable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b2560; body size 54 bytes.
#line 1 "ENTRY_106b2560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b2560(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (uint)&ghidra_vftable_SCLoggingHelper;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBaseLaunchable);
  param_1[2] = (uint)&ghidra_vftable_SCBaseLaunchable;
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b25b0; body size 37 bytes.
#line 1 "ENTRY_106b25b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b25b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f04dc0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBondingLaunchable);
  param_1[2] = (uint)&ghidra_vftable_SCBondingLaunchable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b25e0; body size 37 bytes.
#line 1 "ENTRY_106b25e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b25e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f04dc0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredLaunchable);
  param_1[2] = (uint)&ghidra_vftable_SCFixUnconfiguredLaunchable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b2610; body size 37 bytes.
#line 1 "ENTRY_106b2610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b2610(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f04dc0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinExistingLaunchable);
  param_1[2] = (uint)&ghidra_vftable_SCJoinExistingLaunchable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b2640; body size 11 bytes.
#line 1 "ENTRY_106b2640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b2640(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b2650; body size 37 bytes.
#line 1 "ENTRY_106b2650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b2650(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f04dc0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPermissionsLaunchable);
  param_1[2] = (uint)&ghidra_vftable_SCPermissionsLaunchable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b2680; body size 37 bytes.
#line 1 "ENTRY_106b2680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b2680(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f04dc0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCProductOnboardingLaunchable);
  param_1[2] = (uint)&ghidra_vftable_SCProductOnboardingLaunchable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b2d00; body size 60 bytes.
#line 1 "ENTRY_106b2d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b2d00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (uint)&ghidra_vftable_SCBaseLaunchable;
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSingleRoomHHOfferLaunchable);
  param_1[2] = (uint)&ghidra_vftable_SCSingleRoomHHOfferLaunchable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b2d50; body size 60 bytes.
#line 1 "ENTRY_106b2d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b2d50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (uint)&ghidra_vftable_SCBaseLaunchable;
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonosRadioHDLaunchable);
  param_1[2] = (uint)&ghidra_vftable_SCSonosRadioHDLaunchable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b2da0; body size 37 bytes.
#line 1 "ENTRY_106b2da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b2da0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f04dc0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceOnboardingLaunchable);
  param_1[2] = (uint)&ghidra_vftable_SCSonosVoiceOnboardingLaunchable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b2dd0; body size 37 bytes.
#line 1 "ENTRY_106b2dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b2dd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f04dc0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTVSetupLaunchable);
  param_1[2] = (uint)&ghidra_vftable_SCTVSetupLaunchable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b2ec0; body size 60 bytes.
#line 1 "ENTRY_106b2ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b2ec0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (uint)&ghidra_vftable_SCBaseLaunchable;
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUpgradeOfferTileLaunchable);
  param_1[2] = (uint)&ghidra_vftable_SCUpgradeOfferTileLaunchable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b2f10; body size 44 bytes.
#line 1 "ENTRY_106b2f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b2f10(undefined4 param_2,undefined1 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f04dc0(param_2);
  *(undefined1 *)(param_1 + 6) = param_3;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigLaunchable);
  param_1[2] = (uint)&ghidra_vftable_SCWifiConfigLaunchable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b3230; body size 15 bytes.
#line 1 "ENTRY_106b3230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b3230(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 106b3250; body size 11 bytes.
#line 1 "ENTRY_106b3250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b3250(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b36a0; body size 34 bytes.
#line 1 "ENTRY_106b36a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106b36a0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}


// Reference entry 106b3940; body size 19 bytes.
#line 1 "ENTRY_106b3940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106b3940(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x28);
  }
  return;
}


// Reference entry 106b52e0; body size 18 bytes.
#line 1 "ENTRY_106b52e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106b52e0(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 106b5450; body size 65 bytes.
#line 1 "ENTRY_106b5450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_106b5450(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if (iVar2 != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106b5590; body size 67 bytes.
#line 1 "ENTRY_106b5590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_106b5590(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if (param_1 != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_106ab5b0(param_1,*(undefined4 *)(iVar1 + 4));
    *(int *)(iVar1 + 4) = iVar1;
    *(int *)iVar1 = (int)(iVar1);
    *(int *)(iVar1 + 8) = iVar1;
    param_1[1] = 0;
    iVar1 = (int)(*param_1);
    *param_1 = (int)(*param_2);
    *param_2 = (int)(iVar1);
    iVar1 = (int)(param_1[1]);
    param_1[1] = param_2[1];
    param_2[1] = iVar1;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106b55f0; body size 58 bytes.
#line 1 "ENTRY_106b55f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_106b55f0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if (param_1 != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_106ab5b0(param_1,*(undefined4 *)(iVar1 + 4));
    *(int *)(iVar1 + 4) = iVar1;
    *(int *)iVar1 = (int)(iVar1);
    *(int *)(iVar1 + 8) = iVar1;
    param_1[1] = 0;
    thunk_FUN_106a9bb0(param_2,param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106b5640; body size 112 bytes.
#line 1 "ENTRY_106b5640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_106b5640(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  if (param_1 != (int *)(param_2)) {
    piVar1 = (int *)((int *)param_1[9]);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1));
      param_1[9] = 0;
    }
    piVar1 = (int *)((int *)param_2[9]);
    if (piVar1 != (int *)0x0) {
      if (piVar1 == (int *)(param_2)) {
        iVar2 = (int)((**(code **)(*piVar1 + 4))(param_1));
        param_1[9] = iVar2;
        piVar1 = (int *)((int *)param_2[9]);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_2));
          param_2[9] = 0;
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
        }
      }
      else {
        param_1[9] = (int)piVar1;
        param_2[9] = 0;
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106b56d0; body size 67 bytes.
#line 1 "ENTRY_106b56d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_106b56d0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if (param_1 != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_106ab5b0(param_1,*(undefined4 *)(iVar1 + 4));
    *(int *)(iVar1 + 4) = iVar1;
    *(int *)iVar1 = (int)(iVar1);
    *(int *)(iVar1 + 8) = iVar1;
    param_1[1] = 0;
    iVar1 = (int)(*param_1);
    *param_1 = (int)(*param_2);
    *param_2 = (int)(iVar1);
    iVar1 = (int)(param_1[1]);
    param_1[1] = param_2[1];
    param_2[1] = iVar1;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106b5730; body size 58 bytes.
#line 1 "ENTRY_106b5730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_106b5730(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if (param_1 != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_106ab5b0(param_1,*(undefined4 *)(iVar1 + 4));
    *(int *)(iVar1 + 4) = iVar1;
    *(int *)iVar1 = (int)(iVar1);
    *(int *)(iVar1 + 8) = iVar1;
    param_1[1] = 0;
    thunk_FUN_106a9bb0(param_2,param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106b5780; body size 31 bytes.
#line 1 "ENTRY_106b5780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b5780(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if (param_1 != (undefined4 *)(param_2)) {
    thunk_FUN_106a9340(*param_2,param_2[1],param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b57b0; body size 31 bytes.
#line 1 "ENTRY_106b57b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b57b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if (param_1 != (undefined4 *)(param_2)) {
    thunk_FUN_106a94b0(*param_2,param_2[1],param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106b5970; body size 5 bytes.
#line 1 "ENTRY_106b5970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b5970(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b5980; body size 112 bytes.
#line 1 "ENTRY_106b5980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_106b5980(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  if (param_1 != (int *)(param_2)) {
    piVar1 = (int *)((int *)param_1[9]);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1));
      param_1[9] = 0;
    }
    piVar1 = (int *)((int *)param_2[9]);
    if (piVar1 != (int *)0x0) {
      if (piVar1 == (int *)(param_2)) {
        iVar2 = (int)((**(code **)(*piVar1 + 4))(param_1));
        param_1[9] = iVar2;
        piVar1 = (int *)((int *)param_2[9]);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_2));
          param_2[9] = 0;
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
        }
      }
      else {
        param_1[9] = (int)piVar1;
        param_2[9] = 0;
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106b5c10; body size 14 bytes.
#line 1 "ENTRY_106b5c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_106b5c10(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 106b5c30; body size 14 bytes.
#line 1 "ENTRY_106b5c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_106b5c30(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 106b5c50; body size 14 bytes.
#line 1 "ENTRY_106b5c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_106b5c50(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 106b5c70; body size 12 bytes.
#line 1 "ENTRY_106b5c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b5c70(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(char *)(*param_1 + 0xd) == '\0')));
}


// Reference entry 106b5c80; body size 14 bytes.
#line 1 "ENTRY_106b5c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_106b5c80(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 106b5ca0; body size 14 bytes.
#line 1 "ENTRY_106b5ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_106b5ca0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 106b5cc0; body size 14 bytes.
#line 1 "ENTRY_106b5cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_106b5cc0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 106b5ce0; body size 14 bytes.
#line 1 "ENTRY_106b5ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_106b5ce0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 106b60f0; body size 12 bytes.
#line 1 "ENTRY_106b60f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_106b60f0(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 8);
}


// Reference entry 106b6100; body size 12 bytes.
#line 1 "ENTRY_106b6100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_106b6100(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 8);
}


// Reference entry 106b6110; body size 12 bytes.
#line 1 "ENTRY_106b6110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_106b6110(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 8);
}


// Reference entry 106b6120; body size 15 bytes.
#line 1 "ENTRY_106b6120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_106b6120(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 0x14);
}


// Reference entry 106b6140; body size 15 bytes.
#line 1 "ENTRY_106b6140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_106b6140(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 0x14);
}


// Reference entry 106b6160; body size 3 bytes.
#line 1 "ENTRY_106b6160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b6160(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106b6170; body size 3 bytes.
#line 1 "ENTRY_106b6170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b6170(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106b6180; body size 7 bytes.
#line 1 "ENTRY_106b6180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106b6180(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 106b6190; body size 3 bytes.
#line 1 "ENTRY_106b6190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b6190(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106b61a0; body size 7 bytes.
#line 1 "ENTRY_106b61a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106b61a0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 106b61b0; body size 7 bytes.
#line 1 "ENTRY_106b61b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106b61b0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 106b61c0; body size 3 bytes.
#line 1 "ENTRY_106b61c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b61c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106b61d0; body size 3 bytes.
#line 1 "ENTRY_106b61d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b61d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106b61e0; body size 3 bytes.
#line 1 "ENTRY_106b61e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b61e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106b61f0; body size 3 bytes.
#line 1 "ENTRY_106b61f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b61f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106b6200; body size 6 bytes.
#line 1 "ENTRY_106b6200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b6200(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 106b6210; body size 6 bytes.
#line 1 "ENTRY_106b6210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b6210(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 106b6220; body size 6 bytes.
#line 1 "ENTRY_106b6220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b6220(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 106b6230; body size 3 bytes.
#line 1 "ENTRY_106b6230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b6230(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106b6240; body size 3 bytes.
#line 1 "ENTRY_106b6240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b6240(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106b6250; body size 3 bytes.
#line 1 "ENTRY_106b6250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b6250(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106b6260; body size 3 bytes.
#line 1 "ENTRY_106b6260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b6260(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106b6270; body size 6 bytes.
#line 1 "ENTRY_106b6270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b6270(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 106b6280; body size 6 bytes.
#line 1 "ENTRY_106b6280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b6280(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 106b6290; body size 6 bytes.
#line 1 "ENTRY_106b6290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b6290(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 106b62a0; body size 6 bytes.
#line 1 "ENTRY_106b62a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b62a0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 106b62b0; body size 6 bytes.
#line 1 "ENTRY_106b62b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b62b0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 106b62c0; body size 3 bytes.
#line 1 "ENTRY_106b62c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b62c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106b62d0; body size 3 bytes.
#line 1 "ENTRY_106b62d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b62d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106b6490; body size 16 bytes.
#line 1 "ENTRY_106b6490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106b6490(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 8);
  return;
}


// Reference entry 106b64b0; body size 6 bytes.
#line 1 "ENTRY_106b64b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_106b64b0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106b64c0; body size 6 bytes.
#line 1 "ENTRY_106b64c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_106b64c0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106b64d0; body size 6 bytes.
#line 1 "ENTRY_106b64d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_106b64d0(int *param_1)

{
  *param_1 = (int)(*param_1 + 0x14);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106b64e0; body size 16 bytes.
#line 1 "ENTRY_106b64e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106b64e0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 8);
  return;
}


// Reference entry 106b6500; body size 6 bytes.
#line 1 "ENTRY_106b6500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_106b6500(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106b6510; body size 6 bytes.
#line 1 "ENTRY_106b6510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_106b6510(int *param_1)

{
  *param_1 = (int)(*param_1 + 0x14);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106b6520; body size 18 bytes.
#line 1 "ENTRY_106b6520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106b6520(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 106b6790; body size 18 bytes.
#line 1 "ENTRY_106b6790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_106b6790(int *param_1,int *param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 < *param_2);
}


// Reference entry 106b67b0; body size 18 bytes.
#line 1 "ENTRY_106b67b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_106b67b0(int *param_1,int *param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 < *param_2);
}


// Reference entry 106b67d0; body size 14 bytes.
#line 1 "ENTRY_106b67d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_106b67d0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106b67f0; body size 14 bytes.
#line 1 "ENTRY_106b67f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_106b67f0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106b8130; body size 31 bytes.
#line 1 "ENTRY_106b8130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106b8130(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 106b8160; body size 31 bytes.
#line 1 "ENTRY_106b8160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106b8160(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x28));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 106b81d0; body size 30 bytes.
#line 1 "ENTRY_106b81d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106b81d0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106bce00(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = iVar1;
  param_1[2] = iVar1 + param_2 * 8;
  return;
}


// Reference entry 106b8200; body size 33 bytes.
#line 1 "ENTRY_106b8200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106b8200(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106bce70(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = iVar1;
  param_1[2] = iVar1 + param_2 * 0x14;
  return;
}


// Reference entry 106b8230; body size 49 bytes.
#line 1 "ENTRY_106b8230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_106b8230(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 3);
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x1fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 106b8270; body size 49 bytes.
#line 1 "ENTRY_106b8270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_106b8270(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 3);
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x1fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 106b82b0; body size 49 bytes.
#line 1 "ENTRY_106b82b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_106b82b0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 3);
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x1fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 106b82f0; body size 63 bytes.
#line 1 "ENTRY_106b82f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_106b82f0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x14);
  if (0xccccccc - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0xccccccc);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 106b8690; body size 66 bytes.
#line 1 "ENTRY_106b8690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106b8690(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 106b86f0; body size 182 bytes.
#line 1 "ENTRY_106b86f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106b86f0(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x1fffffff < param_2) {
                    
    thunk_FUN_106bb660();
  }
  iVar2 = (int)(*param_1);
  uVar3 = (uint)(param_1[2] - iVar2 >> 3);
  if (0x1fffffff - (uVar3 >> 1) < uVar3) {
    uVar3 = (uint)(0x1fffffff);
  }
  else {
    uVar3 = (uint)((uVar3 >> 1) + uVar3);
    if (uVar3 < param_2) {
      uVar3 = (uint)(param_2);
    }
  }
  if (iVar2 != 0) {
    thunk_FUN_10478ea0(iVar2,param_1[1],param_1);
    iVar2 = (int)(*param_1);
    uVar4 = (uint)(param_1[2] - iVar2 & 0xfffffff8);
    iVar1 = (int)(iVar2);
    if (0xfff < uVar4) {
      iVar1 = (int)(*(int *)(iVar2 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar2 - iVar1) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar1,uVar4);
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  iVar2 = (int)(thunk_FUN_106bce00(uVar3));
  *param_1 = (int)(iVar2);
  param_1[1] = iVar2;
  param_1[2] = iVar2 + uVar3 * 8;
  return;
}


// Reference entry 106b87e0; body size 227 bytes.
#line 1 "ENTRY_106b87e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106b87e0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (0xccccccc < param_2) {
                    
    thunk_FUN_106bb670();
  }
  puVar4 = (undefined4 *)((undefined4 *)*param_1);
  uVar3 = (uint)((param_1[2] - (int)puVar4) / 0x14);
  if (0xccccccc - (uVar3 >> 1) < uVar3) {
    uVar3 = (uint)(0xccccccc);
  }
  else {
    uVar3 = (uint)((uVar3 >> 1) + uVar3);
    if (uVar3 < param_2) {
      uVar3 = (uint)(param_2);
    }
  }
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)((undefined4 *)param_1[1]);
    if (puVar4 != (undefined4 *)(puVar5)) {
      do {
        (**(code **)*puVar4)(0);
        puVar4 = (undefined4 *)(puVar4 + 5);
      } while (puVar4 != (undefined4 *)(puVar5));
      puVar4 = (undefined4 *)((undefined4 *)*param_1);
    }
    uVar1 = (uint)(((param_1[2] - (int)puVar4) / 0x14) * 0x14);
    puVar5 = (undefined4 *)(puVar4);
    if (0xfff < uVar1) {
      puVar5 = (undefined4 *)((undefined4 *)puVar4[-1]);
      uVar1 = (uint)(uVar1 + 0x23);
      if (0x1f < (uint)((int)puVar4 + (-4 - (int)puVar5))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(puVar5,uVar1);
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  iVar2 = (int)(thunk_FUN_106bce70(uVar3));
  *param_1 = (int)(iVar2);
  param_1[1] = iVar2;
  param_1[2] = iVar2 + uVar3 * 0x14;
  return;
}


// Reference entry 106b8900; body size 3 bytes.
#line 1 "ENTRY_106b8900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106b8900(void)

{
  return;
}


// Reference entry 106b8910; body size 3 bytes.
#line 1 "ENTRY_106b8910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106b8910(void)

{
  return;
}


// Reference entry 106b8920; body size 3 bytes.
#line 1 "ENTRY_106b8920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106b8920(void)

{
  return;
}


// Reference entry 106b8a80; body size 21 bytes.
#line 1 "ENTRY_106b8a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106b8a80(undefined4 *param_1)

{
  thunk_FUN_106a9340(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 106b8aa0; body size 21 bytes.
#line 1 "ENTRY_106b8aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106b8aa0(undefined4 *param_1)

{
  thunk_FUN_106a94b0(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 106b8f70; body size 8 bytes.
#line 1 "ENTRY_106b8f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106b8f70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 106b8f80; body size 54 bytes.
#line 1 "ENTRY_106b8f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106b8f80(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0xc) + param_3 * 8));
  if ((int *)piVar1[1] != param_2) {
    if ((int *)*piVar1 == (int *)(param_2)) {
      *piVar1 = (int)(*param_2);
    }
    return;
  }
  if ((int *)*piVar1 == (int *)(param_2)) {
    iVar2 = (int)(*(int *)(param_1 + 4));
    *piVar1 = (int)(iVar2);
    piVar1[1] = iVar2;
    return;
  }
  piVar1[1] = param_2[1];
  return;
}


// Reference entry 106b9210; body size 5 bytes.
#line 1 "ENTRY_106b9210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b9210(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9b50; body size 3 bytes.
#line 1 "ENTRY_106b9b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9b50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9b60; body size 3 bytes.
#line 1 "ENTRY_106b9b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9b60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9b70; body size 3 bytes.
#line 1 "ENTRY_106b9b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9b70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9b80; body size 3 bytes.
#line 1 "ENTRY_106b9b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9b80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9b90; body size 3 bytes.
#line 1 "ENTRY_106b9b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9b90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9ba0; body size 3 bytes.
#line 1 "ENTRY_106b9ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9ba0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9bb0; body size 3 bytes.
#line 1 "ENTRY_106b9bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9bb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9bc0; body size 3 bytes.
#line 1 "ENTRY_106b9bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9bc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9bd0; body size 3 bytes.
#line 1 "ENTRY_106b9bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9bd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9be0; body size 3 bytes.
#line 1 "ENTRY_106b9be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9be0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9bf0; body size 3 bytes.
#line 1 "ENTRY_106b9bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9bf0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9c00; body size 3 bytes.
#line 1 "ENTRY_106b9c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9c10; body size 3 bytes.
#line 1 "ENTRY_106b9c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9c20; body size 3 bytes.
#line 1 "ENTRY_106b9c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9c30; body size 3 bytes.
#line 1 "ENTRY_106b9c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9c40; body size 3 bytes.
#line 1 "ENTRY_106b9c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9c50; body size 3 bytes.
#line 1 "ENTRY_106b9c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9c60; body size 3 bytes.
#line 1 "ENTRY_106b9c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9c70; body size 3 bytes.
#line 1 "ENTRY_106b9c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9c80; body size 3 bytes.
#line 1 "ENTRY_106b9c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9c90; body size 3 bytes.
#line 1 "ENTRY_106b9c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9ca0; body size 3 bytes.
#line 1 "ENTRY_106b9ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9ca0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9cb0; body size 3 bytes.
#line 1 "ENTRY_106b9cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9cb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9cd0; body size 3 bytes.
#line 1 "ENTRY_106b9cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9cd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9ce0; body size 3 bytes.
#line 1 "ENTRY_106b9ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9ce0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9cf0; body size 3 bytes.
#line 1 "ENTRY_106b9cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9cf0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9d00; body size 3 bytes.
#line 1 "ENTRY_106b9d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9d10; body size 3 bytes.
#line 1 "ENTRY_106b9d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9d20; body size 3 bytes.
#line 1 "ENTRY_106b9d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9d30; body size 3 bytes.
#line 1 "ENTRY_106b9d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9d40; body size 3 bytes.
#line 1 "ENTRY_106b9d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9d50; body size 3 bytes.
#line 1 "ENTRY_106b9d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9d60; body size 3 bytes.
#line 1 "ENTRY_106b9d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9d70; body size 3 bytes.
#line 1 "ENTRY_106b9d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9d80; body size 3 bytes.
#line 1 "ENTRY_106b9d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106b9d90; body size 4 bytes.
#line 1 "ENTRY_106b9d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 106ba340; body size 5 bytes.
#line 1 "ENTRY_106ba340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ba340(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ba350; body size 7 bytes.
#line 1 "ENTRY_106ba350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106ba350(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 106ba440; body size 13 bytes.
#line 1 "ENTRY_106ba440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106ba440(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 106ba450; body size 18 bytes.
#line 1 "ENTRY_106ba450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106ba450(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 106ba470; body size 30 bytes.
#line 1 "ENTRY_106ba470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106ba470(int param_1)

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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 106ba4d0; body size 3 bytes.
#line 1 "ENTRY_106ba4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106ba4d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ba4e0; body size 3 bytes.
#line 1 "ENTRY_106ba4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106ba4e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106ba4f0; body size 31 bytes.
#line 1 "ENTRY_106ba4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_106ba4f0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = (char)(*(char *)(*param_1 + 0xd));
  piVar2 = (int *)((int *)*param_1);
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)((int *)*piVar3);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
    param_1 = (int *)(piVar3);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 106ba6c0; body size 3 bytes.
#line 1 "ENTRY_106ba6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ba6c0(void)

{
  return;
}


// Reference entry 106ba6d0; body size 3 bytes.
#line 1 "ENTRY_106ba6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ba6d0(void)

{
  return;
}


// Reference entry 106ba6e0; body size 3 bytes.
#line 1 "ENTRY_106ba6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ba6e0(void)

{
  return;
}


// Reference entry 106ba6f0; body size 3 bytes.
#line 1 "ENTRY_106ba6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ba6f0(void)

{
  return;
}


// Reference entry 106ba700; body size 3 bytes.
#line 1 "ENTRY_106ba700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ba700(void)

{
  return;
}


// Reference entry 106ba710; body size 3 bytes.
#line 1 "ENTRY_106ba710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ba710(void)

{
  return;
}


// Reference entry 106ba720; body size 3 bytes.
#line 1 "ENTRY_106ba720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ba720(void)

{
  return;
}


// Reference entry 106ba730; body size 3 bytes.
#line 1 "ENTRY_106ba730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ba730(void)

{
  return;
}


// Reference entry 106ba7f0; body size 11 bytes.
#line 1 "ENTRY_106ba7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106ba7f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 106ba800; body size 11 bytes.
#line 1 "ENTRY_106ba800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106ba800(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 106ba810; body size 8 bytes.
#line 1 "ENTRY_106ba810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106ba810(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// Reference entry 106ba820; body size 6 bytes.
#line 1 "ENTRY_106ba820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106ba820(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106ba830; body size 6 bytes.
#line 1 "ENTRY_106ba830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106ba830(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106ba840; body size 6 bytes.
#line 1 "ENTRY_106ba840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106ba840(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106ba850; body size 6 bytes.
#line 1 "ENTRY_106ba850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106ba850(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106ba860; body size 26 bytes.
#line 1 "ENTRY_106ba860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106ba860(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 106ba960; body size 9 bytes.
#line 1 "ENTRY_106ba960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106ba960(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 106ba970; body size 10 bytes.
#line 1 "ENTRY_106ba970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106ba970(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 106ba980; body size 33 bytes.
#line 1 "ENTRY_106ba980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106ba980(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  return;
}


// Reference entry 106bb0c0; body size 24 bytes.
#line 1 "ENTRY_106bb0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106bb0c0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106ae320(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 106bb170; body size 24 bytes.
#line 1 "ENTRY_106bb170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106bb170(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101fdfe0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 106bb2d0; body size 24 bytes.
#line 1 "ENTRY_106bb2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106bb2d0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106ae320(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 106bb380; body size 24 bytes.
#line 1 "ENTRY_106bb380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106bb380(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101fdfe0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 106bb3a0; body size 14 bytes.
#line 1 "ENTRY_106bb3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106bb3a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4));
  return;
}


// Reference entry 106bb3c0; body size 13 bytes.
#line 1 "ENTRY_106bb3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106bb3c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 106bb3d0; body size 13 bytes.
#line 1 "ENTRY_106bb3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106bb3d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 106bb3e0; body size 3 bytes.
#line 1 "ENTRY_106bb3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106bb3e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106bb3f0; body size 3 bytes.
#line 1 "ENTRY_106bb3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106bb3f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106bb400; body size 12 bytes.
#line 1 "ENTRY_106bb400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106bb400(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106bb410; body size 10 bytes.
#line 1 "ENTRY_106bb410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106bb410(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 106bb420; body size 4 bytes.
#line 1 "ENTRY_106bb420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106bb420(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 106bb430; body size 4 bytes.
#line 1 "ENTRY_106bb430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106bb430(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 106bb600; body size 11 bytes.
#line 1 "ENTRY_106bb600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106bb600(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106bb610; body size 11 bytes.
#line 1 "ENTRY_106bb610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106bb610(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106bb620; body size 3 bytes.
#line 1 "ENTRY_106bb620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106bb620(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106bb630; body size 3 bytes.
#line 1 "ENTRY_106bb630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106bb630(void)

{
  return;
}


// Reference entry 106bcc30; body size 87 bytes.
#line 1 "ENTRY_106bcc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_106bcc30(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x8000000) {
    param_1 = (uint)(param_1 * 0x20);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 106bcca0; body size 90 bytes.
#line 1 "ENTRY_106bcca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_106bcca0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x6666667) {
    param_1 = (uint)(param_1 * 0x28);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 106bcd20; body size 87 bytes.
#line 1 "ENTRY_106bcd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_106bcd20(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x20000000) {
    param_1 = (uint)(param_1 * 8);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


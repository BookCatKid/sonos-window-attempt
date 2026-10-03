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
extern int FUN_10ce4d40(...);
extern int FUN_10ce4f30(...);
extern int FUN_117e9640(...);
extern int FUN_117eda60(...);
extern int FUN_1180abf0(...);
extern int FUN_1183f2c0(...);
extern int FUN_11862560(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern int _atexit(...);
extern int _eh_vector_destructor_iterator_(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int ceil(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int length(...);
extern int op_ctor(...);
extern int op_eq(...);
extern int operator_new(...);
extern int setFromUTF16(...);
extern int thunk_FUN_10116b10(...);
extern int thunk_FUN_101170a0(...);
extern int thunk_FUN_10117950(...);
extern int thunk_FUN_10117ac0(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_10118fc0(...);
extern int thunk_FUN_10129760(...);
extern int thunk_FUN_10129af0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012cab0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a1ea0(...);
extern int thunk_FUN_101a2000(...);
extern int thunk_FUN_101a2160(...);
extern int thunk_FUN_101da5c0(...);
extern int thunk_FUN_10265c30(...);
extern int thunk_FUN_10266f90(...);
extern int thunk_FUN_10288030(...);
extern int thunk_FUN_103056e0(...);
extern int thunk_FUN_10310680(...);
extern int thunk_FUN_103d0280(...);
extern int thunk_FUN_1059bd30(...);
extern int thunk_FUN_106a2610(...);
extern int thunk_FUN_106b2750(...);
extern int thunk_FUN_10c40d70(...);
extern int thunk_FUN_10f6ff60(...);
extern int thunk_FUN_1114a7f0(...);
extern int thunk_FUN_111d7e60(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_112a7b70(...);
extern int thunk_FUN_112a7ea0(...);
extern int thunk_FUN_112a9cf0(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148ac80(...);
extern int thunk_FUN_1148b586(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11882ff0;
extern int DAT_11d33164;
extern int DAT_12119064;
extern int DAT_12119fcc;
extern int DAT_12119fd4;
extern int DAT_12119ff0;
extern int DAT_12119ff8;
extern int DAT_12119ffc;
extern int DAT_1211a004;
extern int DAT_1211a028;
extern int DAT_1211a02c;
extern int DAT_1211c1d8;
extern int DAT_1211c1f8;
extern int DAT_1211c9f9;
extern int DAT_1211d1fc;
extern int DAT_1211d215;
extern int DAT_1211d25c;
extern int DAT_1211dc08;
extern int DAT_1211dc0c;
extern int DAT_1211dc10;
extern int DAT_12126b84;
extern int DAT_121a06a0;
extern int DAT_121a06a4;
extern int DAT_121a06a8;
extern int DAT_121a06ac;
extern int DAT_121a06b0;
extern int DAT_121a06b4;
extern int DAT_121a06b8;
extern int DAT_121a06bc;
extern int DAT_121a06c0;
extern int DAT_121a06c4;
extern int DAT_121a06d4;
extern int DAT_121a06d8;
extern int DAT_121a07b0;
extern int DAT_121a07b4;
extern int DAT_121a0bb4;
extern int DAT_121a0bb8;
extern int DAT_121a0c3c;
extern int DAT_121a0fd4;
extern int DAT_121a0fd8;
extern int DAT_121a1028;
extern int DAT_121a10c8;
extern int DAT_121a1494;
extern int DAT_121a1498;
extern int DAT_121a149c;
extern int DAT_121a14a0;
extern int DAT_121a14a4;
extern int DAT_121a14b4;
extern int DAT_121a14c4;
extern int DAT_121a14d4;
extern int DAT_121a14e4;
extern int DAT_121a14f4;
extern int DAT_121a2650;
extern int DAT_121a2654;
extern int DAT_121a26cc;
extern int DAT_121a2764;
extern int DAT_121a49a0;
extern int DAT_121a49a4;
extern int DAT_121a49a8;
extern int DAT_121a5544;
extern int DAT_121a5f78;
extern int DAT_121a5f84;
extern int DAT_121a5f88;
extern int DAT_121a5f94;
extern int DAT_121a5f98;
extern int DAT_121a5fa4;
extern int DAT_121a5fa8;
extern int DAT_121a5fb4;
extern int DAT_121a5fb8;
extern int DAT_121a5fc4;
extern int DAT_121a5fc8;
extern int DAT_121a5fd4;
extern int DAT_121a5fd8;
extern int DAT_121a5fe4;
extern int DAT_121a5fe8;
extern int DAT_121a5ff4;
extern int DAT_121a5ff8;
extern int DAT_121a6004;
extern int DAT_121a6008;
extern int DAT_121a6014;
extern int DAT_121a6ab8;
extern int DAT_121a6abc;
extern int DAT_121a6ac0;
extern int DAT_121a6ac4;
extern int DAT_121a6ac8;
extern int DAT_121a6acc;
extern int DAT_121a6ad0;
extern int DAT_121a6ad4;
extern int DAT_121a6ad8;
extern int DAT_121a6adc;
extern int DAT_121a6ae0;
extern int DAT_121a6ae4;
extern int DAT_121a6ae8;
extern int DAT_121a6aec;
extern int DAT_122f33e0;
extern int DAT_122f33e8;
extern int DAT_122f33f4;
extern int _DAT_11921680;
extern int _DAT_119216a0;
extern int _DAT_119216c0;
extern int _DAT_12119fd0;
extern int _DAT_12119fd8;
extern int _DAT_12119fe8;
extern int _DAT_1211a000;
extern int _DAT_1211a008;
extern int _DAT_1211a018;
extern int _DAT_1211c1cc;
extern int _DAT_1211c1d0;
extern int _DAT_1211c1d4;
extern int _DAT_1211d258;
extern int _DAT_1211dc04;
extern int _DAT_1211dc14;
extern int _DAT_1211dc18;
extern int _DAT_1211dc1c;
extern int _DAT_1211dc20;
extern int _DAT_1211dc24;
extern int _DAT_1211dc28;
extern int _DAT_1211dc2c;
extern int _DAT_1211dc30;
extern int _DAT_1211dc34;
extern int _DAT_1211dc38;
extern int _DAT_1211dc3c;
extern int _DAT_1211dc40;
extern int _DAT_1211dc44;
extern int _DAT_1211dc48;
extern int _DAT_1211dc4c;
extern int _DAT_1211dc50;
extern int _DAT_1211dc54;
extern int _DAT_1211dc58;
extern int _DAT_1211dc5c;
extern int _DAT_1211dc60;
extern int _DAT_1211dc64;
extern int _DAT_1211dc68;
extern int _DAT_1211dc6c;
extern int _DAT_1211dc70;
extern int _DAT_1211dc74;
extern int _DAT_1211dc78;
extern int _DAT_1211dc7c;
extern int _DAT_1211dc80;
extern int _DAT_1211dc84;
extern int _DAT_1211dc88;
extern int _DAT_1211dc8c;
extern int _DAT_1211dc90;
extern int _DAT_1211dc94;
extern int _DAT_1211dc98;
extern int _DAT_1211dc9c;
extern int _DAT_1211dca0;
extern int _DAT_1211dca4;
extern int _DAT_1211dca8;
extern int _DAT_1211dcac;
extern int _DAT_1211dcb0;
extern int _DAT_1211dcb4;
extern int _DAT_1211dcb8;
extern int _DAT_1211dcbc;
extern int _DAT_1211dcc0;
extern int _DAT_1211dcc4;
extern int _DAT_1211dcc8;
extern int _DAT_1211dccc;
extern int _DAT_1211dcd0;
extern int _DAT_1211dcd4;
extern int _DAT_1211dcd8;
extern int _DAT_1211dcdc;
extern int _DAT_1211dce0;
extern int _DAT_1211dce4;
extern int _DAT_1211dce8;
extern int _DAT_1211dcec;
extern int _DAT_1211dcf0;
extern int _DAT_1211dcf4;
extern int _DAT_1211dcf8;
extern int _DAT_1211dcfc;
extern int _DAT_1211dd00;
extern int _DAT_1211dd04;
extern int _DAT_1211dd08;
extern int _DAT_1211dd0c;
extern int _DAT_1211dd10;
extern int _DAT_1211dd14;
extern int _DAT_1211dd18;
extern int _DAT_1211dd1c;
extern int _DAT_1211dd20;
extern int _DAT_1211dd24;
extern int _DAT_1211dd28;
extern int _DAT_1211dd2c;
extern int _DAT_1211dd30;
extern int _DAT_1211dd34;
extern int _DAT_1211dd38;
extern int _DAT_1211dd3c;
extern int _DAT_1211dd40;
extern int _DAT_1211dd44;
extern int _DAT_1211dd48;
extern int _DAT_1211dd4c;
extern int _DAT_1211dd50;
extern int _DAT_1211dd54;
extern int _DAT_1211dd58;
extern int _DAT_1211dd5c;
extern int _DAT_1211dd60;
extern int _DAT_1211dd64;
extern int _DAT_1211dd68;
extern int _DAT_1211dd6c;
extern int _DAT_1211dd70;
extern int _DAT_1211dd74;
extern int _DAT_1211dd78;
extern int _DAT_1211dd7c;
extern int _DAT_1211dd80;
extern int _DAT_1211dd84;
extern int _DAT_1211dd88;
extern int _DAT_1211dd8c;
extern int _DAT_1211dd90;
extern int _DAT_1211dd94;
extern int _DAT_1211dd98;
extern int _DAT_1211dd9c;
extern int _DAT_1211dda0;
extern int _DAT_1211dda4;
extern int _DAT_1211dda8;
extern int _DAT_1211ddac;
extern int _DAT_1211ddb0;
extern int _DAT_1211ddb4;
extern int _DAT_1211ddb8;
extern int _DAT_1211ddbc;
extern int _DAT_1211ddc0;
extern int _DAT_1211ddc4;
extern int _DAT_1211ddc8;
extern int _DAT_1211ddcc;
extern int _DAT_1211ddd0;
extern int _DAT_1211ddd4;
extern int _DAT_1211ddd8;
extern int _DAT_1211dddc;
extern int _DAT_1211dde0;
extern int _DAT_1211dde4;
extern int _DAT_1211dde8;
extern int _DAT_1211ddec;
extern int _DAT_1211ddf0;
extern int _DAT_1211ddf4;
extern int _DAT_1211ddf8;
extern int _DAT_1211ddfc;
extern int _DAT_1211de00;
extern int _DAT_1211de04;
extern int _DAT_1211de08;
extern int _DAT_1211de0c;
extern int _DAT_1211de10;
extern int _DAT_1211de14;
extern int _DAT_121a0fe4;
extern int _DAT_121a14a8;
extern int _DAT_121a14ac;
extern int _DAT_121a14b0;
extern int _DAT_121a14b8;
extern int _DAT_121a14bc;
extern int _DAT_121a14c0;
extern int _DAT_121a14c8;
extern int _DAT_121a14cc;
extern int _DAT_121a14d0;
extern int _DAT_121a14d8;
extern int _DAT_121a14dc;
extern int _DAT_121a14e0;
extern int _DAT_121a14e8;
extern int _DAT_121a14ec;
extern int _DAT_121a14f0;
extern int _DAT_121a14f8;
extern int _DAT_121a14fc;
extern int _DAT_121a5f7c;
extern int _DAT_121a5f80;
extern int _DAT_121a5f8c;
extern int _DAT_121a5f90;
extern int _DAT_121a5f9c;
extern int _DAT_121a5fa0;
extern int _DAT_121a5fac;
extern int _DAT_121a5fb0;
extern int _DAT_121a5fbc;
extern int _DAT_121a5fc0;
extern int _DAT_121a5fcc;
extern int _DAT_121a5fd0;
extern int _DAT_121a5fdc;
extern int _DAT_121a5fe0;
extern int _DAT_121a5fec;
extern int _DAT_121a5ff0;
extern int _DAT_121a5ffc;
extern int _DAT_121a6000;
extern int _DAT_121a600c;
extern int _DAT_121a6010;
extern int _DAT_122f33dc;
extern int _DAT_122f33ec;
extern int _DAT_122f33f0;
extern int _DAT_122f33f8;
extern int _UNK_11921684;
extern int _UNK_11921688;
extern int _UNK_1192168c;
extern int _UNK_119216a4;
extern int _UNK_119216a8;
extern int _UNK_119216ac;
extern int _UNK_119216c4;
extern int _UNK_119216c8;
extern int _UNK_119216cc;
extern int g_lSCObjCount;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RSonosCPFaultHandler;
extern int ghidra_vftable_SCFoundProductManager;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIPlatformDateTimeProvider;
extern int ghidra_vftable_SCIUINotificationsDelegate;
extern int ghidra_vftable_SCLibAssertionFailureCallback;
extern int ghidra_vftable_SCLibCallUIThreadCallback;
extern int ghidra_vftable_SCLibCustomSubWizardCallback;
extern int ghidra_vftable_SCLibDelegateFactory;
extern int ghidra_vftable_SCLibDiagnosticConsoleLogCallback;
extern int ghidra_vftable_SCLibDiagnosticExtraInfoCallback;
extern int ghidra_vftable_SCLibLogCallback;
extern int ghidra_vftable_SCLibPlatformStringCallback;
extern int ghidra_vftable_SCLibSonarCallback;
extern int ghidra_vftable_SCLibTruncatedStringsCallback;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCNewWizManager;
extern int ghidra_vftable_SCTestPointManager;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCUpnpSubscriptionManager;
extern int ghidra_vftable_SwfObjHouseholdOAuthCB;
extern int ghidra_vftable_SwigDirector_SCIAbilityDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIActionDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIActionFactorySwigBase;
extern int ghidra_vftable_SwigDirector_SCIActionFilterSwigBase;
extern int ghidra_vftable_SwigDirector_SCIActionSwigBase;
extern int ghidra_vftable_SwigDirector_SCIAutomationDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIBTAccessoryDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIBTClassicConnectionCallbackSwigBase;
extern int ghidra_vftable_SwigDirector_SCIBTClassicConnectionProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCIBleDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIBlePeripheralDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIBrowseItemSwigBase;
extern int ghidra_vftable_SwigDirector_SCIChirpDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIClipboardDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCICrashReportProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCICustomSubWizardSwigBase;
extern int ghidra_vftable_SwigDirector_SCIEventSinkSwigBase;
extern int ghidra_vftable_SwigDirector_SCIExperimentManagerProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCIGetAboutSonosStringCBSwigBase;
extern int ghidra_vftable_SwigDirector_SCIGetSonosPlaylistsCBSwigBase;
extern int ghidra_vftable_SwigDirector_SCIHapticDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIInAppMessagingProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCIInAppPurchaseManagerProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCILifecycleAppProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCILocalMediaCollectionSwigBase;
extern int ghidra_vftable_SwigDirector_SCILocalMusicBrowseItemInfoSwigBase;
extern int ghidra_vftable_SwigDirector_SCILocalMusicSearchableDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCILoggingProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCIMdnsDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIMusicServerBrowseDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIMusicServerDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCINetstartListenerSwigBase;
extern int ghidra_vftable_SwigDirector_SCINetworkManagementDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCINewWizDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCINfcDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIOpCBSwigBase;
extern int ghidra_vftable_SwigDirector_SCIPlatformDateTimeProvider;
extern int ghidra_vftable_SwigDirector_SCISavedDataProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCISecureStoreSwigBase;
extern int ghidra_vftable_SwigDirector_SCISecurityContextSwigBase;
extern int ghidra_vftable_SwigDirector_SCIServiceAppInteropSwigBase;
extern int ghidra_vftable_SwigDirector_SCIStackTraceCaptureDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIStringInputSwigBase;
extern int ghidra_vftable_SwigDirector_SCITrackInfoSwigBase;
extern int ghidra_vftable_SwigDirector_SCIUINotificationsDelegate;
extern int ghidra_vftable_SwigDirector_SCIUrbanAirshipDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIUrlConnectionSwigBase;
extern int ghidra_vftable_SwigDirector_SCIUrlSessionCallbackSwigBase;
extern int ghidra_vftable_SwigDirector_SCIUrlSessionProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCIVoiceServiceDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIVpnDelegate;
extern int ghidra_vftable_SwigDirector_SCIVpnDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIWebsocketCallbackSwigBase;
extern int ghidra_vftable_SwigDirector_SCIWebsocketDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIWifiDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCLibAssertionFailureCallback;
extern int ghidra_vftable_SwigDirector_SCLibCallUIThreadCallback;
extern int ghidra_vftable_SwigDirector_SCLibCustomSubWizardCallback;
extern int ghidra_vftable_SwigDirector_SCLibDelegateFactory;
extern int ghidra_vftable_SwigDirector_SCLibDiagnosticConsoleLogCallback;
extern int ghidra_vftable_SwigDirector_SCLibDiagnosticExtraInfoCallback;
extern int ghidra_vftable_SwigDirector_SCLibLogCallback;
extern int ghidra_vftable_SwigDirector_SCLibPlatformStringCallback;
extern int ghidra_vftable_SwigDirector_SCLibSonarCallback;
extern int ghidra_vftable_SwigDirector_SCLibTruncatedStringsCallback;
extern int ghidra_vftable_Swig_DirectorException;
extern int ghidra_vftable_Swig_DirectorPureVirtualException;
extern int uRam12119fdc;
extern int uRam12119fe0;
extern int uRam12119fe4;
extern int uRam12119fec;
extern int uRam12119ff4;
extern int uRam1211a00c;
extern int uRam1211a010;
extern int uRam1211a014;
extern int uRam1211a01c;
extern int uRam1211a020;
extern int uRam1211a024;
extern int uStack_24;
extern int uStack_8;
extern undefined1 LAB_101190d0[];
extern undefined1 LAB_10129824[];
extern undefined1 LAB_1012983f[];
extern undefined1 LAB_114d9e2d[];
extern undefined1 LAB_114d9e7b[];
extern undefined1 LAB_114d9ec5[];
extern undefined1 LAB_114d9f05[];
extern undefined1 LAB_114d9f45[];
extern undefined1 LAB_114da09b[];
extern undefined1 LAB_114da0eb[];
extern undefined1 LAB_114da13b[];
extern undefined1 LAB_114da185[];
extern undefined1 LAB_114da34b[];
extern undefined1 LAB_114da3d0[];
extern undefined1 LAB_114da490[];
extern undefined1 LAB_114da4c0[];
extern undefined1 LAB_114da4f0[];
extern undefined1 LAB_114dbfc0[];
extern undefined1 LAB_114dc110[];
extern undefined1 LAB_114dc140[];
extern undefined1 LAB_114dc170[];
extern undefined1 LAB_114dc1a0[];
extern undefined1 LAB_114dc1d0[];
extern undefined1 LAB_114dc200[];
extern undefined1 LAB_114dc230[];
extern undefined1 LAB_114dc260[];
extern undefined1 LAB_114dc290[];
extern undefined1 LAB_114dc2c0[];
extern undefined1 LAB_114dc2f0[];
extern undefined1 LAB_114dc320[];
extern undefined1 LAB_114dc350[];
extern undefined1 LAB_114dc380[];
extern undefined1 LAB_114dc3b0[];
extern undefined1 LAB_114dc3e0[];
extern undefined1 LAB_114dc410[];
extern undefined1 LAB_114dc440[];
extern undefined1 LAB_114dc470[];
extern undefined1 LAB_114dc4a0[];
extern undefined1 LAB_114dc4d0[];
extern undefined1 LAB_114dc500[];
extern undefined1 LAB_114dc530[];
extern undefined1 LAB_114dc560[];
extern undefined1 LAB_114dc590[];
extern undefined1 LAB_114dc5c0[];
extern undefined1 LAB_114dc5f0[];
extern undefined1 LAB_114dc620[];
extern undefined1 LAB_114dc650[];
extern undefined1 LAB_114dc680[];
extern undefined1 LAB_114dc6b0[];
extern undefined1 LAB_114dc6e0[];
extern undefined1 LAB_114dc710[];
extern undefined1 LAB_114dc740[];
extern undefined1 LAB_114dc770[];
extern undefined1 LAB_114dc7a0[];
extern undefined1 LAB_114dc7d0[];
extern undefined1 LAB_114dc800[];
extern undefined1 LAB_114dc830[];
extern undefined1 LAB_114dc860[];
extern undefined1 LAB_114dc890[];
extern undefined1 LAB_114dc8c0[];
extern undefined1 LAB_114dc8f0[];
extern undefined1 LAB_114dc920[];
extern undefined1 LAB_114dc950[];
extern undefined1 LAB_114dc980[];
extern undefined1 LAB_114dc9b0[];
extern undefined1 LAB_114dc9e0[];
extern undefined1 LAB_114dca10[];
extern undefined1 LAB_114dca40[];
extern undefined1 LAB_114dca70[];
extern undefined1 LAB_114dcaa0[];
extern undefined1 LAB_114dcad0[];
extern undefined1 LAB_114dcb00[];
extern undefined1 LAB_114dcb30[];
extern undefined1 LAB_114dcb60[];
extern undefined1 LAB_114dcb90[];
extern undefined1 LAB_114dcbc0[];
extern undefined1 LAB_114dcbf0[];
extern undefined1 LAB_114dcc20[];
extern undefined1 LAB_114dcc50[];
extern undefined1 LAB_114dcc80[];
extern undefined1 LAB_114dccb0[];
extern undefined1 LAB_114dcce0[];
extern undefined1 LAB_114dcd10[];
extern undefined1 LAB_114dce30[];
extern undefined1 LAB_114dce60[];
extern undefined1 LAB_114dce90[];
extern undefined1 LAB_114dcec0[];
extern undefined1 LAB_114dcef0[];
extern undefined1 LAB_114dcf20[];
extern undefined1 LAB_114dcf50[];
extern undefined1 LAB_114dcf80[];
extern undefined1 LAB_114dcfb0[];
extern undefined1 LAB_114dcfe0[];
extern undefined1 LAB_114dd010[];
extern undefined1 LAB_114dd040[];
extern undefined1 LAB_114dd070[];
extern undefined1 LAB_114dd0a0[];
extern undefined1 LAB_114dd0d0[];
extern undefined1 LAB_114dd100[];
extern undefined1 LAB_114dd130[];
extern undefined1 LAB_114dd160[];
extern undefined1 LAB_114dd190[];
extern undefined1 LAB_114dd1c0[];
extern undefined1 LAB_114dd1f0[];
extern undefined1 LAB_114dd220[];
extern undefined1 LAB_114dd250[];
extern undefined1 LAB_114dd280[];
extern undefined1 LAB_114dd2b0[];
extern undefined1 LAB_114dd2e0[];
extern undefined1 LAB_114dd310[];
extern undefined1 LAB_114dd340[];
extern undefined1 LAB_114dd370[];
extern undefined1 LAB_114dd3a0[];
extern undefined1 LAB_114dd3d0[];
extern undefined1 LAB_114dd400[];
extern undefined1 LAB_114dd430[];
extern undefined1 LAB_114dd460[];
extern undefined1 LAB_114dd490[];
extern undefined1 LAB_114dd4c0[];
extern undefined1 LAB_114dd4f0[];
extern undefined1 LAB_114dd520[];
extern undefined1 LAB_114dd550[];
extern undefined1 LAB_114dd580[];
extern undefined1 LAB_114dd5b0[];
extern undefined1 LAB_114dd5e0[];
extern undefined1 LAB_114dd610[];
extern undefined1 LAB_114dd640[];
extern undefined1 LAB_114dd670[];
extern undefined1 LAB_114dd6a0[];
extern undefined1 LAB_114dd6d0[];
extern undefined1 LAB_114dd700[];
extern undefined1 LAB_114dd730[];
extern undefined1 LAB_114dd760[];
extern undefined1 LAB_114dd790[];
extern undefined1 LAB_114dd7c0[];
extern undefined1 LAB_114dd7f0[];
extern undefined1 LAB_114dd820[];
extern undefined1 LAB_114dd850[];
extern undefined1 LAB_114dd880[];
extern undefined1 LAB_114dd8b0[];
extern undefined1 LAB_114dd8e0[];
extern undefined1 LAB_114dd910[];
extern undefined1 LAB_114dd940[];
extern undefined1 LAB_114dd970[];
extern undefined1 LAB_114dd9a0[];
extern undefined1 LAB_114dd9d0[];
extern undefined1 LAB_114dda00[];
extern undefined1 LAB_114dda30[];
extern undefined1 LAB_114ddcbb[];
extern undefined1 LAB_114ddd5b[];
extern undefined1 LAB_114dddbb[];
extern undefined1 LAB_114dde32[];
extern undefined1 LAB_114ddeb2[];
extern undefined1 LAB_114ddf3d[];
extern undefined1 LAB_114ddf9e[];
extern undefined1 LAB_114ddffe[];
extern undefined1 LAB_114de071[];
extern undefined1 LAB_114de11d[];
extern undefined1 LAB_114de1a2[];
extern undefined1 LAB_114de22d[];
extern undefined1 LAB_114de2b8[];
extern undefined1 LAB_114de347[];
extern undefined1 LAB_114de3d7[];
extern undefined1 LAB_114de45d[];
extern undefined1 LAB_114de4d2[];
extern undefined1 LAB_114de55c[];
extern undefined1 LAB_114de5d1[];
extern undefined1 LAB_114de651[];
extern undefined1 LAB_114de6be[];
extern undefined1 LAB_114de73d[];
extern undefined1 LAB_114de7b2[];
extern undefined1 LAB_114de81e[];
extern undefined1 LAB_114de89d[];
extern undefined1 LAB_114de8fe[];
extern undefined1 LAB_114de95e[];
extern undefined1 LAB_114de9dd[];
extern undefined1 LAB_114dea3e[];
extern undefined1 LAB_114deaba[];
extern undefined1 LAB_114deb32[];
extern undefined1 LAB_114deb9e[];
extern undefined1 LAB_114debf0[];
extern undefined1 LAB_114dec48[];
extern undefined1 LAB_114ded0e[];
extern undefined1 LAB_114dee2d[];
extern undefined1 LAB_114dee8d[];
extern undefined1 LAB_114deeed[];
extern undefined1 LAB_114df060[];
extern undefined1 LAB_114df29e[];
extern undefined1 LAB_114df370[];
extern undefined1 LAB_114df42e[];
extern undefined1 LAB_114df48e[];
extern undefined1 LAB_114df54e[];
extern undefined1 LAB_114df60e[];
extern undefined1 LAB_114dfa20[];
extern undefined1 LAB_114dfa7e[];
extern undefined1 LAB_114dfade[];
extern undefined1 LAB_114dfb43[];
extern undefined1 LAB_114dfba6[];
extern undefined1 LAB_114dfc8e[];
extern undefined1 LAB_114dfcee[];
extern undefined1 LAB_114dff20[];
extern undefined1 LAB_114dff7d[];
extern undefined1 LAB_114dffcd[];
extern undefined1 LAB_114e001d[];
extern undefined1 LAB_114e00ce[];
extern undefined1 LAB_114e014a[];
extern undefined1 LAB_114e01ca[];
extern undefined1 LAB_114e022e[];
extern undefined1 LAB_114e046e[];
extern undefined1 LAB_114e04ce[];
extern undefined1 LAB_114e092e[];
extern undefined1 LAB_114e0b2e[];
extern undefined1 LAB_114e0b8e[];
extern undefined1 LAB_114e0cae[];
extern undefined1 LAB_114e0d0e[];
extern undefined1 LAB_114e0e8d[];
extern undefined1 LAB_114e0ee0[];
extern undefined1 LAB_114e105e[];
extern undefined1 LAB_114e1412[];
extern undefined1 LAB_114e147e[];
extern undefined1 LAB_114e14de[];
extern undefined1 LAB_114e1530[];
extern undefined1 LAB_114e1580[];
extern undefined1 LAB_114e15d0[];
extern undefined1 LAB_114e162b[];
extern undefined1 LAB_114e1680[];
extern undefined1 LAB_114e16db[];
extern undefined1 LAB_114e173b[];
extern undefined1 LAB_114e1790[];
extern undefined1 LAB_114e17e0[];
extern undefined1 LAB_114e1830[];
extern undefined1 LAB_114e19e8[];
extern undefined1 LAB_114e1a40[];
extern undefined1 LAB_114e1a98[];
extern undefined1 LAB_114e1af0[];
extern undefined1 LAB_114e1b48[];
extern undefined1 LAB_114e1ba0[];
extern undefined1 LAB_114e1c12[];
extern undefined1 LAB_114e1c78[];
extern undefined1 LAB_114e1cd0[];
extern undefined1 LAB_114e1d20[];
extern undefined1 LAB_114e1d70[];
extern undefined1 LAB_114e1dc0[];
extern undefined1 LAB_114e1e1b[];
extern undefined1 LAB_114e3870[];
extern undefined1 LAB_114e38c0[];
extern undefined1 LAB_114e391b[];
extern undefined1 LAB_114e3970[];
extern undefined1 LAB_114e39c8[];
extern undefined1 LAB_114e3a28[];
extern undefined1 LAB_114e3a8b[];
extern undefined1 LAB_114e3ae0[];
extern undefined1 LAB_114e3b38[];
extern undefined1 LAB_114e3b90[];
extern undefined1 LAB_114e3be8[];
extern undefined1 LAB_114e3c40[];
extern undefined1 LAB_114e3ca6[];
extern undefined1 LAB_114e3d08[];
extern undefined1 LAB_114e3d60[];
extern undefined1 LAB_114e3db8[];
extern undefined1 LAB_114e3e10[];
extern undefined1 LAB_114e3e6b[];
extern undefined1 LAB_114e3ecb[];
extern undefined1 LAB_114e3f20[];
extern undefined1 LAB_114e3f78[];
extern undefined1 LAB_114e3fd0[];
extern undefined1 LAB_114e4020[];
extern undefined1 LAB_114e4070[];
extern undefined1 LAB_114e40c0[];
extern undefined1 LAB_114e4170[];
extern undefined1 LAB_114e41b0[];
extern undefined1 LAB_114e41e0[];
extern undefined1 LAB_114e4210[];
extern undefined1 LAB_114e4240[];
extern undefined1 LAB_114e4270[];
extern undefined1 LAB_114e42a0[];
extern undefined1 LAB_114e42d0[];
extern undefined1 LAB_114e4300[];
extern undefined1 LAB_114e4330[];
extern undefined1 LAB_114e4360[];
extern undefined1 LAB_114e4390[];
extern undefined1 LAB_114e43c0[];
extern undefined1 LAB_114e43f0[];
extern undefined1 LAB_114e4420[];
extern undefined1 LAB_114e4450[];
extern undefined1 LAB_114e4480[];
extern undefined1 LAB_114e44b0[];
extern undefined1 LAB_114e44e0[];
extern undefined1 LAB_114e4510[];
extern undefined1 LAB_114e4540[];
extern undefined1 LAB_114e4570[];
extern undefined1 LAB_114e45a0[];
extern undefined1 LAB_114e45d0[];
extern undefined1 LAB_114e4600[];
extern undefined1 LAB_114e4630[];
extern undefined1 LAB_114e4660[];
extern undefined1 LAB_114e4690[];
extern undefined1 LAB_114e46c0[];
extern undefined1 LAB_114e46f0[];
extern undefined1 LAB_114e4720[];
extern undefined1 LAB_114e4750[];
extern undefined1 LAB_114e4780[];
extern undefined1 LAB_114e47b0[];
extern undefined1 LAB_114e47e0[];
extern undefined1 LAB_114e4810[];
extern undefined1 LAB_114e4840[];
extern undefined1 LAB_114e4870[];
extern undefined1 LAB_114e48a0[];
extern undefined1 LAB_114e48d0[];
extern undefined1 LAB_114e4900[];
extern undefined1 LAB_114e4930[];
extern undefined1 LAB_114e4960[];
extern undefined1 LAB_114e4990[];
extern undefined1 LAB_114e49c0[];
extern undefined1 LAB_114e49f0[];
extern undefined1 LAB_114e4a20[];
extern undefined1 LAB_114e4a50[];
extern undefined1 LAB_114e4a80[];
extern undefined1 LAB_114e4ab0[];
extern undefined1 LAB_114e4ae0[];
extern undefined1 LAB_114e4b10[];
extern undefined1 LAB_114e4b40[];
extern undefined1 LAB_114e4b70[];
extern undefined1 LAB_114e4ba0[];
extern undefined1 LAB_114e4bd0[];
extern undefined1 LAB_114e4c00[];
extern undefined1 LAB_114e4c30[];
extern undefined1 LAB_114e4c60[];
extern undefined1 LAB_114e4c90[];
extern undefined1 LAB_114e4cc0[];
extern undefined1 LAB_114e4cf0[];
extern undefined1 LAB_114e4d20[];
extern undefined1 LAB_114e4d50[];
extern undefined1 LAB_114e4d80[];
extern undefined1 LAB_114e4db0[];
extern undefined1 LAB_114e4de0[];
extern undefined1 LAB_114e4e10[];
extern undefined1 LAB_114e4e40[];
extern undefined1 LAB_114e4e70[];
extern undefined1 LAB_114e4ea0[];
extern undefined1 LAB_114e4ed0[];
extern undefined1 LAB_114e4f00[];
extern undefined1 LAB_114e4f30[];
extern undefined1 LAB_114e4f60[];
extern undefined1 LAB_114e4f90[];
extern undefined1 LAB_114e4fc0[];
extern undefined1 LAB_114e4ff0[];
extern undefined1 LAB_114e5020[];
extern undefined1 LAB_114e5050[];
extern undefined1 LAB_114e5080[];
extern undefined1 LAB_114e50b0[];
extern undefined1 LAB_114e50e0[];
extern undefined1 LAB_114e5110[];
extern undefined1 LAB_114e5140[];
extern undefined1 LAB_114e5170[];
extern undefined1 LAB_114e51a0[];
extern undefined1 LAB_114e51d0[];
extern undefined1 LAB_114e5200[];
extern undefined1 LAB_114e5230[];
extern undefined1 LAB_114e5260[];
extern undefined1 LAB_114e5290[];
extern undefined1 LAB_114e52f0[];
extern undefined1 LAB_114e5320[];
extern undefined1 LAB_114e5350[];
extern undefined1 LAB_114e5380[];
extern undefined1 LAB_114e53e0[];
extern undefined1 LAB_114e5410[];
extern undefined1 LAB_114e5440[];
extern undefined1 LAB_114e54a0[];
extern undefined1 LAB_114e54d0[];
extern undefined1 LAB_114e5500[];
extern undefined1 LAB_114e5530[];
extern undefined1 LAB_114e5560[];
extern undefined1 LAB_114e5590[];
extern undefined1 LAB_114e55c0[];
extern undefined1 LAB_114e55f0[];
extern undefined1 LAB_114e5650[];
extern undefined1 LAB_114e5680[];
extern undefined1 LAB_114e56b0[];
extern undefined1 LAB_114e56e0[];
extern undefined1 LAB_114e5710[];
extern undefined1 LAB_114e5740[];
extern undefined1 LAB_114e5770[];
extern undefined1 LAB_114e57a0[];
extern undefined1 LAB_114e57d0[];
extern undefined1 LAB_114e5800[];
extern undefined1 LAB_114e5830[];
extern undefined1 LAB_114e5860[];
extern undefined1 LAB_114e5890[];
extern undefined1 LAB_114e58c0[];
extern undefined1 LAB_114e58f0[];
extern undefined1 LAB_114e5920[];
extern undefined1 LAB_114e5950[];
extern undefined1 LAB_114e5980[];
extern undefined1 LAB_114e59b0[];
extern undefined1 LAB_114e59e0[];
extern undefined1 LAB_114e5a10[];
extern undefined1 LAB_114e5a40[];
extern undefined1 LAB_114e5a70[];
extern undefined1 LAB_114e5aa0[];
extern undefined1 LAB_114e5ad0[];
extern undefined1 LAB_114e5b00[];
extern undefined1 LAB_114e5b30[];
extern undefined1 LAB_114e5b60[];
extern undefined1 LAB_114e5bc0[];
extern undefined1 LAB_114e5bf0[];
extern undefined1 LAB_114e5c20[];
extern undefined1 LAB_114e5c50[];
extern undefined1 LAB_114e5c80[];
extern undefined1 LAB_114e5cb0[];
extern undefined1 LAB_114e5ce0[];
extern undefined1 LAB_114e5d10[];
extern undefined1 LAB_114e5d40[];
extern undefined1 LAB_114e5d70[];
extern undefined1 LAB_114e5da0[];
extern undefined1 LAB_114e5dd0[];
extern undefined1 LAB_114e5e00[];
extern undefined1 LAB_114e5e30[];
extern undefined1 LAB_114f8587[];
extern undefined1 LAB_1151a1dd[];
extern undefined1 LAB_1151b8d8[];
extern undefined1 LAB_11530617[];
extern undefined1 LAB_11531a5a[];
extern undefined1 LAB_115387b4[];
extern undefined1 LAB_11560281[];
extern undefined1 LAB_115daf07[];
extern undefined1 LAB_115df715[];
extern undefined1 LAB_115e026c[];
extern undefined1 LAB_1169a559[];
extern undefined1 LAB_116dcdd7[];
extern undefined1 LAB_116f8a79[];
extern undefined1 LAB_117065cf[];
extern undefined1 LAB_117066af[];
extern undefined1 LAB_1172a260[];
extern undefined1 LAB_1172a300[];
extern undefined1 LAB_117561a7[];
extern undefined1 LAB_11779dc0[];
extern undefined1 LAB_117a541f[];
extern undefined1 LAB_117ae58f[];
extern undefined1 LAB_117c41a9[];
extern undefined1 LAB_117edc30[];
extern undefined1 LAB_117f7c00[];
extern undefined1 LAB_1182aca0[];
extern undefined1 LAB_1183a740[];
extern undefined1 LAB_1183f350[];
extern undefined1 LAB_11846210[];
extern undefined1 LAB_11846250[];
extern undefined1 LAB_1184e030[];
extern undefined1 LAB_1185b5a0[];
extern undefined1 LAB_11861ea0[];
extern undefined1 LAB_118620a0[];
extern int *PTR_vftable_1211c1c8;
extern int *stack0x00000004;
extern int *stack0xffffffe0;
extern int *stack0xffffffe4;
extern int *stack0xfffffffc;
extern char s_Attempt_to_invoke_pure_virtual_m_1186d2c0[];
extern char s_RHHSTR_LIBRARY_ADDFAIL_ALBUM_119c5738[];
extern char s_RHHSTR_LIBRARY_ADDFAIL_ARTIST_119c575c[];
extern char s_RHHSTR_LIBRARY_ADDFAIL_PLAYLIST_119c5780[];
extern char s_RHHSTR_LIBRARY_ADDFAIL_TRACK_119c5714[];
extern char s_RHHSTR_LIBRARY_AUTOMIXFAIL_TRACK_119c57a8[];
extern char s_RHHSTR_LIBRARY_POSTED_TRACK_119c57f4[];
extern char s_RHHSTR_LIBRARY_POSTFAIL_TRACK_119c5818[];
extern char s_RHHSTR_LIBRARY_POSTING_TRACK_119c57d0[];
extern char s_RHHSTR_LIBRARY_REMOVEFAIL_ALBUM_119c5698[];
extern char s_RHHSTR_LIBRARY_REMOVEFAIL_ARTIST_119c56c0[];
extern char s_RHHSTR_LIBRARY_REMOVEFAIL_PLAYLI_119c56e8[];
extern char s_RHHSTR_LIBRARY_REMOVEFAIL_TRACK_119c5670[];
extern char s_RHHSTR_LIBRARY_SONOS_ADDED_ALBUM_119c536c[];
extern char s_RHHSTR_LIBRARY_SONOS_ADDED_ARTIS_119c5394[];
extern char s_RHHSTR_LIBRARY_SONOS_ADDED_PLAYL_119c53bc[];
extern char s_RHHSTR_LIBRARY_SONOS_ADDED_TRACK_119c5344[];
extern char s_RHHSTR_LIBRARY_SONOS_ADDING_ALBU_119c52c4[];
extern char s_RHHSTR_LIBRARY_SONOS_ADDING_ARTI_119c52ec[];
extern char s_RHHSTR_LIBRARY_SONOS_ADDING_PLAY_119c5318[];
extern char s_RHHSTR_LIBRARY_SONOS_ADDING_TRAC_119c529c[];
extern char s_RHHSTR_LIBRARY_SONOS_AUTOMIXED_T_119c5418[];
extern char s_RHHSTR_LIBRARY_SONOS_AUTOMIXING__119c53e8[];
extern char s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5444[];
extern char s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5474[];
extern char s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54a4[];
extern char s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54d4[];
extern char s_RHHSTR_LIBRARY_SONOS_REMOVED_ALB_119c55e8[];
extern char s_RHHSTR_LIBRARY_SONOS_REMOVED_ART_119c5614[];
extern char s_RHHSTR_LIBRARY_SONOS_REMOVED_PLA_119c5640[];
extern char s_RHHSTR_LIBRARY_SONOS_REMOVED_TRA_119c55bc[];
extern char s_RHHSTR_LIBRARY_SONOS_REMOVING_AL_119c5534[];
extern char s_RHHSTR_LIBRARY_SONOS_REMOVING_AR_119c5560[];
extern char s_RHHSTR_LIBRARY_SONOS_REMOVING_PL_119c558c[];
extern char s_RHHSTR_LIBRARY_SONOS_REMOVING_TR_119c5508[];
extern void *ExceptionList;
struct SCIAbilityDelegateSwigBase { char _pad; SCIAbilityDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int canEnablePrereq; static int canRequestPrereq; static int canSuggestPrereq; static int enablePrereq; static int getIOSControlPanelSwipeDirection; static int initialize; static int isAlwaysAvailable; static int isAlwaysDisallowed; static int isPrereq; static int requestPrereq; static int requireFineLocationPermission; static int shutdown; static int suggestPrereq; };
struct SCIActionDelegateSwigBase { char _pad; SCIActionDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int asyncActionHasCompleted; };
struct SCIActionFactorySwigBase { char _pad; SCIActionFactorySwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int createBrowsePickerAction; static int createCustomUIAction; static int createDisplayBrowseStackAction; static int createDisplayCustomControlAction; static int createDisplayDatePickerAction; static int createDisplayDualTextInputAction; static int createDisplayHelpSheetAction; static int createDisplayInfoViewAction; static int createDisplayIntegerInputAction; static int createDisplayMenuAction; static int createDisplayMenuAndTextInputAction; static int createDisplayMenuPopupAction; static int createDisplayMessagePopupAction; static int createDisplayTextInputAction; static int createDisplayTextPaneAction; static int createDisplayTimePickerAction; static int createDisplayWizardAction; static int createInlineControllerUpdateAction; static int createModalSettingsMenuAction; static int createNavigationAction; static int createOpenURIAction; static int createPopBrowseAction; static int createPresentAlarmInterfaceAction; static int createPushSCUriAction; static int createRunAsyncIOOperationAction; static int createRunAsyncIOOperationActionWithMessage; static int createScheduleAlarmMonitorAction; static int createSummonNewWizAction; };
struct SCIActionFilterSwigBase { char _pad; SCIActionFilterSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int acceptsAction; };
struct SCIActionSwigBase { char _pad; SCIActionSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int perform; };
struct SCIAutomationDelegateSwigBase { char _pad; SCIAutomationDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int hhidUpdated; static int initializeFlutterAutomation; };
struct SCIBTAccessoryDelegateSwigBase { char _pad; SCIBTAccessoryDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getConnectedDevices; static int isDeviceBonded; static int registerListener; static int requestOSPairing; static int requestPairing; static int shutdown; static int startDiscoveryScan; static int stopDiscoveryScan; static int unregisterListener; };
struct SCIBTClassicConnectionCallbackSwigBase { char _pad; SCIBTClassicConnectionCallbackSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int connectedToDevice; static int deviceInfoChanged; static int disconnectedFromDevice; static int isMobConnected; };
struct SCIBTClassicConnectionProviderSwigBase { char _pad; SCIBTClassicConnectionProviderSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int isConnectedToSonosDevice; static int isPlaying; static int setCallback; };
struct SCIBleDelegateSwigBase { char _pad; SCIBleDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int clearPacketQueue; static int getPacketQueueLength; static int queuePacketForSend; static int registerListener; static int sendQueuedPackets; static int setTransferTestPacket; static int shutdown; static int tryConnect; static int tryDisconnect; static int tryFlushTransferTestBurst; static int tryStartScan; static int tryStopScan; static int unregisterListener; };
struct SCIBlePeripheralDelegateSwigBase { char _pad; SCIBlePeripheralDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getRequireSecurePairing; static int initPeripheral; static int registerListener; static int setRequireSecurePairing; static int shutdown; static int tryStartAdvertising; static int tryStopAdvertising; static int unregisterListener; };
struct SCIBrowseItemSwigBase { char _pad; SCIBrowseItemSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int canActOn; static int canPush; static int getActions; static int getAlbumArt; static int getAlbumArtAdornmentImageResource; static int getAlbumArtType; static int getAttributes; static int getChildDataSource; static int getDurationMillis; static int getExtension; static int getFilteredActions; static int getMoreMenuDataSource; static int getNumberOfAlbumArtURLs; static int getResumeOffsetMillis; static int getServiceAttributionLogo; static int hasMoreMenu; static int hasOrdinal; static int isBrowseItemTextAvailable; static int isCompletelyPlayed; static int isDataAvailable; static int isLoading; static int isParentOfSearch; static int isPlaying; static int isSecondaryTitleValid; static int isSonosRadio; static int isUnavailable; static int resolveArtworkUrls; static int showExplicitBadge; static int showProgressInfo; static int subscribe; static int unsubscribe; };
struct SCIChirpDelegateSwigBase { char _pad; SCIChirpDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int registerListener; static int shutdown; static int startChirpReceiving; static int stopChirpReceiving; static int unregisterListener; };
struct SCIClipboardDelegateSwigBase { char _pad; SCIClipboardDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int setClipboardData; };
struct SCICrashReportProviderSwigBase { char _pad; SCICrashReportProviderSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int enableLogging; static int setTag; static int startCrashReporter; static int updateUser; };
struct SCICustomSubWizardSwigBase { char _pad; SCICustomSubWizardSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int canClientCancelWizard; static int canClientTransitionToNextState; static int canClientTransitionToPreviousState; static int enter; static int exit; static int getNextStateID; static int getPropertyBag; static int getStringInput; static int getWizardComponents; static int getWizardPageProperties; static int isStateDone; static int onSubWizardStateTransition; static int raiseEvent; static int skipStateOnBacktracking; };
struct SCIEventSinkSwigBase { char _pad; SCIEventSinkSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int dispatchEvent; };
struct SCIExperimentManagerProviderSwigBase { char _pad; SCIExperimentManagerProviderSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getExperiments; static int getFeatureVariableDouble; static int getFeatureVariableInteger; static int getFeatures; static int getVariations; static int initialize; static int isFeatureEnabled; static int isInitialized; static int isVariationForced; static int saveFeaturesJson; static int saveVariationsJson; static int setForcedVariation; };
struct SCIGetAboutSonosStringCBSwigBase { char _pad; SCIGetAboutSonosStringCBSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int updateGetAboutSonosString; };
struct SCIGetSonosPlaylistsCBSwigBase { char _pad; SCIGetSonosPlaylistsCBSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getSonosPlaylistsFailed; static int getSonosPlaylistsSucceeded; };
struct SCIHapticDelegateSwigBase { char _pad; SCIHapticDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int vibrate; };
struct SCIInAppMessagingProviderSwigBase { char _pad; SCIInAppMessagingProviderSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int addTagToGroup; static int hasDeviceToken; static int removeTagFromGroup; static int updateRegistration; };
struct SCIInAppPurchaseManagerProviderSwigBase { char _pad; SCIInAppPurchaseManagerProviderSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int canMakePurchases; static int fetchProducts; static int initialize; static int purchaseProduct; static int shutdown; };
struct SCILifecycleAppProviderSwigBase { char _pad; SCILifecycleAppProviderSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int isAppWithSWGenInstalled; };
struct SCILocalMediaCollectionSwigBase { char _pad; SCILocalMediaCollectionSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getAllNodeType; static int getCount; static int getItemAt; static int getItemThumbnailsPresentationType; static int getPresentationType; static int registerMediaCollectionListener; };
struct SCILocalMusicBrowseItemInfoSwigBase { char _pad; SCILocalMusicBrowseItemInfoSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getArtType; static int getByteOffsetForTime; static int getDuration; static int getItemType; static int getTrackNumber; static int isContainer; static int isPlayable; };
struct SCILocalMusicSearchableDelegateSwigBase { char _pad; SCILocalMusicSearchableDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getCategoryIDs; };
struct SCILoggingProviderSwigBase { char _pad; SCILoggingProviderSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getAppLevel; static int getFlutterLevel; static int setAppLevel; static int setFlutterLevel; };
struct SCIMdnsDelegateSwigBase { char _pad; SCIMdnsDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int registerListener; static int startPlayerDiscovery; static int stopPlayerDiscovery; static int unregisterListener; };
struct SCIMusicServerBrowseDelegateSwigBase { char _pad; SCIMusicServerBrowseDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getAuthorization; static int getLocalMediaCollectionForId; static int getLocalMusicItemInfoForId; static int getLocalMusicSearchableDelegate; static int getRootItem; };
struct SCIMusicServerDelegateSwigBase { char _pad; SCIMusicServerDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int fillImageBytes; static int getMusicServerBrowseDelegate; static int onBeginStreaming; static int onEndStreaming; static int openFileDescriptor; };
struct SCINetstartListenerSwigBase { char _pad; SCINetstartListenerSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int onDeviceDiscoveryWaiting; static int onJoinComplete; static int onJoinFail; static int onNetParamsAcquired; };
struct SCINetworkManagementDelegateSwigBase { char _pad; SCINetworkManagementDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getNetworkType; static int refreshSSID; };
struct SCINewWizDelegateSwigBase { char _pad; SCINewWizDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int performUpdate; };
struct SCINfcDelegateSwigBase { char _pad; SCINfcDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int registerListener; static int shutdown; static int startScan; static int stopScan; static int unregisterListener; static int updateNfcCardMessage; };
struct SCIOpCBSwigBase { char _pad; SCIOpCBSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int _operationComplete; };
struct SCIPlatformDateTimeProvider { char _pad; SCIPlatformDateTimeProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int doesPlatformTimeZoneMatch; static int getPlatformDateTime; };
struct SCISavedDataProviderSwigBase { char _pad; SCISavedDataProviderSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getBoolValue; static int getDoubleValue; static int getIntegerValue; static int registerDefaultBoolValue; static int registerDefaultIntegerValue; static int registerDefaultStringValue; static int remove; static int setBoolValue; static int setIntegerValue; static int setStringValue; };
struct SCISecureStoreSwigBase { char _pad; SCISecureStoreSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int isSecure; static int removeBlob; static int setBlob; };
struct SCISecurityContextSwigBase { char _pad; SCISecurityContextSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getEnvironment; static int logCertificateData; static int setCertificateEnvironment; static int setCustomerID; static int setHHID; static int setSerialNumber; static int validateCertificateChain; static int validateCertificateData; };
struct SCIServiceAppInteropSwigBase { char _pad; SCIServiceAppInteropSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getAppInstallState; static int openApp; };
struct SCIStackTraceCaptureDelegateSwigBase { char _pad; SCIStackTraceCaptureDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int stackTraceCaptured; };
struct SCIStringInputSwigBase { char _pad; SCIStringInputSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getMaxNumChars; static int getRecommendedInputMethodType; static int getValidationStatus; static int isLocked; static int isValid; static int setString; };
struct SCITrackInfoSwigBase { char _pad; SCITrackInfoSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getDuration; };
struct SCIUINotificationsDelegate { char _pad; SCIUINotificationsDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int notificationsEnabled; static int registerLocalNotification; static int requestNotificationsPermissions; };
struct SCIUrbanAirshipDelegateSwigBase { char _pad; SCIUrbanAirshipDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int addAndRemoveClientTags; static int addClientTags; static int hasUnreadMessages; static int postCustomEvent; static int registerListener; static int unregisterListener; };
struct SCIUrlConnectionSwigBase { char _pad; SCIUrlConnectionSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getCallback; static int getRequest; static int serialNum; static int setResponse; static int setResult; };
struct SCIUrlSessionCallbackSwigBase { char _pad; SCIUrlSessionCallbackSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int sessionComplete; };
struct SCIUrlSessionProviderSwigBase { char _pad; SCIUrlSessionProviderSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int cancelURLConnection; static int clearCache; static int endURLSession; static int startURLSession; };
struct SCIVoiceServiceDelegateSwigBase { char _pad; SCIVoiceServiceDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int canDeviceSetupVoice; static int registerListener; static int startAuthentication; };
struct SCIVpnDelegate { char _pad; SCIVpnDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int canOpenVPNSettings; static int getRootObject; static int openVPNSettings; static int queryInterface; static int requestVPN; };
struct SCIVpnDelegateSwigBase { char _pad; SCIVpnDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int canOpenVPNSettings; static int openVPNSettings; static int requestVPN; };
struct SCIWebsocketCallbackSwigBase { char _pad; SCIWebsocketCallbackSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int onWebsocketConnected; static int onWebsocketDisconnected; static int onWebsocketError; static int receivedData; static int receivedString; };
struct SCIWebsocketDelegateSwigBase { char _pad; SCIWebsocketDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int connect; static int destroy; static int disconnect; static int setCallback; static int writeData; static int writeString; };
struct SCIWifiDelegateSwigBase { char _pad; SCIWifiDelegateSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int canConfigureAccessories; static int canJoinSSIDs; static int canStartScan; static int getConnectionOpen; static int isWifiConnected; static int joinSSID; static int launchAccessoryConfiguration; static int leaveSSID; static int registerListener; static int startScan; static int stopScan; static int unregisterListener; };
struct SCLibAssertionFailureCallback { char _pad; SCLibAssertionFailureCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int assertionFailed; };
struct SCLibCallUIThreadCallback { char _pad; SCLibCallUIThreadCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int callSCLibOnUIThread; };
struct SCLibCustomSubWizardCallback { char _pad; SCLibCustomSubWizardCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int createCustomSubWizard; static int hasCustomSubWizard; };
struct SCLibDelegateFactory { char _pad; SCLibDelegateFactory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getSCLibDelegate; static int hasSCLibDelegate; };
struct SCLibLogCallback { char _pad; SCLibLogCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int LogDebugMessage; };
struct SCLibSonarCallback { char _pad; SCLibSonarCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int canHardwareGainBeSet; static int cleanupRecording; static int getBitsPerSample; static int getChannels; static int getHoldStyle; static int getSampleRate; static int hasLimitedVerticalSpace; static int prepareForRecording; static int requireInputToChangeHoldStyle; static int sonarBegin; static int sonarEnd; static int startMotionData; static int startRawMotionData; static int startRecording; static int stopMotionData; static int stopRawMotionData; static int stopRecording; };
struct SCLibTruncatedStringsCallback { char _pad; SCLibTruncatedStringsCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int clearTruncatedStrings; };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int length(A...); template<class... A> int op_ctor(A...); template<class... A> int op_dtor(A...); template<class... A> int op_eq(A...); template<class... A> int setFromUTF16(A...); };
typedef void *A;
typedef void *ALBUM;
typedef void *ALBUMARTIST;
typedef void *ARTIST;
typedef void *BUSINESS;
typedef void *COMPOSER;
typedef void *CONSUMER;
typedef void *GENRE;
typedef void *PLAYLISTS;
typedef void *S;
typedef void *TRACKS;
typedef void *WARNING;
typedef void *_func_4879;
struct Attempt { char _pad; Attempt(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ChirpReAuthentication { char _pad; ChirpReAuthentication(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DirectByteBuffer { char _pad; DirectByteBuffer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct LogDebugMessage { char _pad; LogDebugMessage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RINCON_AssociatedZPUDN { char _pad; RINCON_AssociatedZPUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAbilityDelegate { char _pad; SCIAbilityDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAction { char _pad; SCIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIActionDelegate { char _pad; SCIActionDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIActionFactory { char _pad; SCIActionFactory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIActionFilter { char _pad; SCIActionFilter(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAutomationDelegate { char _pad; SCIAutomationDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBTAccessoryDelegate { char _pad; SCIBTAccessoryDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBTClassicConnectionCallback { char _pad; SCIBTClassicConnectionCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBTClassicConnectionProvider { char _pad; SCIBTClassicConnectionProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBleDelegate { char _pad; SCIBleDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBlePeripheralDelegate { char _pad; SCIBlePeripheralDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBrowseItem { char _pad; SCIBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIChirpDelegate { char _pad; SCIChirpDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIClipboardDelegate { char _pad; SCIClipboardDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCICrashReportProvider { char _pad; SCICrashReportProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCICustomSubWizard { char _pad; SCICustomSubWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIEventSink { char _pad; SCIEventSink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIExperimentManagerProvider { char _pad; SCIExperimentManagerProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIGetAboutSonosStringCB { char _pad; SCIGetAboutSonosStringCB(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIGetSonosPlaylistsCB { char _pad; SCIGetSonosPlaylistsCB(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIHapticDelegate { char _pad; SCIHapticDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIInAppMessagingProvider { char _pad; SCIInAppMessagingProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIInAppPurchaseManagerProvider { char _pad; SCIInAppPurchaseManagerProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCILifecycleAppProvider { char _pad; SCILifecycleAppProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCILocalMediaCollection { char _pad; SCILocalMediaCollection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCILocalMusicBrowseItemInfo { char _pad; SCILocalMusicBrowseItemInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCILocalMusicSearchableDelegate { char _pad; SCILocalMusicSearchableDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCILoggingProvider { char _pad; SCILoggingProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIMdnsDelegate { char _pad; SCIMdnsDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIMusicServerBrowseDelegate { char _pad; SCIMusicServerBrowseDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIMusicServerDelegate { char _pad; SCIMusicServerDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINetstartListener { char _pad; SCINetstartListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINetworkManagementDelegate { char _pad; SCINetworkManagementDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINewWizDelegate { char _pad; SCINewWizDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINfcDelegate { char _pad; SCINfcDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlaying { char _pad; SCINowPlaying(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpCB { char _pad; SCIOpCB(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCISavedDataProvider { char _pad; SCISavedDataProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCISecureStore { char _pad; SCISecureStore(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCISecurityContext { char _pad; SCISecurityContext(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIServiceAppInterop { char _pad; SCIServiceAppInterop(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIStackTraceCaptureDelegate { char _pad; SCIStackTraceCaptureDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIStringInput { char _pad; SCIStringInput(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCISystem { char _pad; SCISystem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCITrackInfo { char _pad; SCITrackInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIUrbanAirshipDelegate { char _pad; SCIUrbanAirshipDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIUrlConnection { char _pad; SCIUrlConnection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIUrlSessionCallback { char _pad; SCIUrlSessionCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIUrlSessionProvider { char _pad; SCIUrlSessionProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIVoiceServiceDelegate { char _pad; SCIVoiceServiceDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIWebsocketCallback { char _pad; SCIWebsocketCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIWebsocketDelegate { char _pad; SCIWebsocketDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIWifiDelegate { char _pad; SCIWifiDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIZoneGroupMgr { char _pad; SCIZoneGroupMgr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCImageResource { char _pad; SCImageResource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLIB_STR_SonosRadioTileExtension_Free_Subtitle { char _pad; SCLIB_STR_SonosRadioTileExtension_Free_Subtitle(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLIB_STR_SonosRadioTileExtension_Free_Title { char _pad; SCLIB_STR_SonosRadioTileExtension_Free_Title(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLIB_STR_SonosRadioTileExtension_MySonos_Free_Subtitle { char _pad; SCLIB_STR_SonosRadioTileExtension_MySonos_Free_Subtitle(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLIB_STR_SonosRadioTileExtension_MySonos_Free_Title { char _pad; SCLIB_STR_SonosRadioTileExtension_MySonos_Free_Title(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLIB_STR_SonosRadioTileExtension_MySonos_Holidays_Subtitle { char _pad; SCLIB_STR_SonosRadioTileExtension_MySonos_Holidays_Subtitle(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLIB_STR_SonosRadioTileExtension_MySonos_Holidays_Subtitle_2 { char _pad; SCLIB_STR_SonosRadioTileExtension_MySonos_Holidays_Subtitle_2(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLIB_STR_SonosRadioTileExtension_MySonos_Holidays_Title { char _pad; SCLIB_STR_SonosRadioTileExtension_MySonos_Holidays_Title(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLIB_STR_SonosRadioTileExtension_MySonos_Holidays_Title_2 { char _pad; SCLIB_STR_SonosRadioTileExtension_MySonos_Holidays_Title_2(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLIB_STR_SonosRadioTileExtension_MySonos_Premium1_Subtitle { char _pad; SCLIB_STR_SonosRadioTileExtension_MySonos_Premium1_Subtitle(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLIB_STR_SonosRadioTileExtension_MySonos_Premium1_Title { char _pad; SCLIB_STR_SonosRadioTileExtension_MySonos_Premium1_Title(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLIB_STR_SonosRadioTileExtension_MySonos_Premium2_Subtitle { char _pad; SCLIB_STR_SonosRadioTileExtension_MySonos_Premium2_Subtitle(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLIB_STR_SonosRadioTileExtension_MySonos_Premium2_Title { char _pad; SCLIB_STR_SonosRadioTileExtension_MySonos_Premium2_Title(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLIB_STR_SonosRadioTileExtension_Premium_Subtitle { char _pad; SCLIB_STR_SonosRadioTileExtension_Premium_Subtitle(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLIB_STR_SonosRadioTileExtension_Premium_Title { char _pad; SCLIB_STR_SonosRadioTileExtension_Premium_Title(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWeakRefMgr { char _pad; SCWeakRefMgr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct This { char _pad; This(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Unexpected { char _pad; Unexpected(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; undefined4 * __thiscall FUN_10116600(undefined4 param_2,SCStr *param_3); undefined4 * __thiscall FUN_10116710(undefined4 *param_2); int * __thiscall FUN_101167f0(undefined4 *param_2); int * __thiscall FUN_101168d0(undefined4 *param_2); int * __thiscall FUN_101169f0(undefined4 *param_2); void __thiscall FUN_10117000(int *param_2,SCStr *param_3,uint param_4); undefined4 * __thiscall FUN_10118a20(undefined4 *param_2); undefined4 * __thiscall FUN_10118c40(undefined4 *param_2); undefined4 * __thiscall FUN_10118d60(undefined4 *param_2); void __thiscall FUN_10118fc0(undefined4 param_2); SCStr * __thiscall FUN_10119e10(SCStr *param_2); undefined4 * __thiscall FUN_1011a340(undefined4 *param_2); undefined1 * __thiscall FUN_10124ee0(undefined1 *param_2); undefined4 * __thiscall FUN_10126ab0(byte param_2); undefined4 * __thiscall FUN_10126b50(byte param_2); undefined4 * __thiscall FUN_10126bf0(byte param_2); undefined4 * __thiscall FUN_10126c90(byte param_2); undefined4 * __thiscall FUN_10126d30(byte param_2); undefined4 * __thiscall FUN_10126dd0(byte param_2); undefined4 * __thiscall FUN_10126e70(byte param_2); undefined4 * __thiscall FUN_10126f10(byte param_2); undefined4 * __thiscall FUN_10126fb0(byte param_2); undefined4 * __thiscall FUN_10127050(byte param_2); undefined4 * __thiscall FUN_101270f0(byte param_2); undefined4 * __thiscall FUN_10127190(byte param_2); undefined4 * __thiscall FUN_10127230(byte param_2); undefined4 * __thiscall FUN_101272d0(byte param_2); undefined4 * __thiscall FUN_10127370(byte param_2); undefined4 * __thiscall FUN_10127410(byte param_2); undefined4 * __thiscall FUN_101274b0(byte param_2); undefined4 * __thiscall FUN_10127550(byte param_2); undefined4 * __thiscall FUN_101275f0(byte param_2); undefined4 * __thiscall FUN_10127690(byte param_2); undefined4 * __thiscall FUN_10127730(byte param_2); undefined4 * __thiscall FUN_101277d0(byte param_2); undefined4 * __thiscall FUN_10127870(byte param_2); undefined4 * __thiscall FUN_10127910(byte param_2); undefined4 * __thiscall FUN_101279b0(byte param_2); undefined4 * __thiscall FUN_10127a50(byte param_2); undefined4 * __thiscall FUN_10127af0(byte param_2); undefined4 * __thiscall FUN_10127b90(byte param_2); undefined4 * __thiscall FUN_10127c30(byte param_2); undefined4 * __thiscall FUN_10127cd0(byte param_2); undefined4 * __thiscall FUN_10127d70(byte param_2); undefined4 * __thiscall FUN_10127e10(byte param_2); undefined4 * __thiscall FUN_10127eb0(byte param_2); undefined4 * __thiscall FUN_10127f50(byte param_2); undefined4 * __thiscall FUN_10127ff0(byte param_2); undefined4 * __thiscall FUN_10128090(byte param_2); undefined4 * __thiscall FUN_10128130(byte param_2); undefined4 * __thiscall FUN_101281d0(byte param_2); undefined4 * __thiscall FUN_10128270(byte param_2); undefined4 * __thiscall FUN_10128310(byte param_2); undefined4 * __thiscall FUN_101283b0(byte param_2); undefined4 * __thiscall FUN_10128450(byte param_2); undefined4 * __thiscall FUN_101284f0(byte param_2); undefined4 * __thiscall FUN_10128590(byte param_2); undefined4 * __thiscall FUN_10128630(byte param_2); undefined4 * __thiscall FUN_101286d0(byte param_2); undefined4 * __thiscall FUN_10128770(byte param_2); undefined4 * __thiscall FUN_10128810(byte param_2); undefined4 * __thiscall FUN_101288b0(byte param_2); undefined4 * __thiscall FUN_10128950(byte param_2); undefined4 * __thiscall FUN_101289f0(byte param_2); undefined4 * __thiscall FUN_10128a90(byte param_2); undefined4 * __thiscall FUN_10128b30(byte param_2); undefined4 * __thiscall FUN_10128bd0(byte param_2); undefined4 * __thiscall FUN_10128c70(byte param_2); undefined4 * __thiscall FUN_10128d10(byte param_2); undefined4 * __thiscall FUN_10128db0(byte param_2); undefined4 * __thiscall FUN_10128e50(byte param_2); undefined4 * __thiscall FUN_10128ef0(byte param_2); undefined4 * __thiscall FUN_10128f90(byte param_2); undefined4 * __thiscall FUN_10129030(byte param_2); undefined4 * __thiscall FUN_101290d0(byte param_2); undefined4 * __thiscall FUN_10129170(byte param_2); undefined4 * __thiscall FUN_10129210(byte param_2); undefined4 * __thiscall FUN_101292b0(byte param_2); void __thiscall FUN_10129550(undefined4 *param_2,undefined4 param_3,undefined4 *param_4); void __thiscall FUN_10129760(uint param_2,undefined4 param_3); float __thiscall FUN_10129a20(int param_2); void __thiscall FUN_10129ef0(int param_2); void __thiscall FUN_1012a4d0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_1012a540(int *param_2); void __thiscall FUN_1012a5c0(int *param_2,int *param_3); void __thiscall FUN_1012a650(int *param_2); void __thiscall FUN_1012b750(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_1012cfb0(undefined4 *param_2,undefined4 param_3,undefined4 *param_4); void __thiscall FUN_1012d250(int *param_2,int *param_3); void __thiscall FUN_1012d550(undefined4 param_2); void __thiscall FUN_1012d5c0(undefined4 param_2); void __thiscall FUN_1012d870(undefined4 param_2); void __thiscall FUN_1012d940(undefined4 param_2); void __thiscall FUN_1012d9b0(int *param_2); void __thiscall FUN_1012dc40(int *param_2,int *param_3); void __thiscall FUN_1012ddd0(undefined4 *param_2,int *param_3,undefined4 *param_4); void __thiscall FUN_1012df20(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_1012e040(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4); void __thiscall FUN_1012e1d0(undefined4 *param_2,int *param_3); void __thiscall FUN_1012e2b0(undefined4 *param_2,undefined4 param_3); void __thiscall FUN_1012e380(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5); /* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall FUN_1012e530(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,int *param_7,undefined4 *param_8,
            undefined4 *param_9,int *param_10); void __thiscall FUN_1012e850(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_1012e970(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4); void __thiscall FUN_1012eb00(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8); /* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall FUN_1012ece0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,int *param_7,int *param_8,undefined4 param_9); /* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall FUN_1012ef60(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined1 param_6,int *param_7,undefined4 param_8,int *param_9,
            undefined4 param_10,undefined4 *param_11); void __thiscall FUN_1012f1f0(undefined4 *param_2,undefined4 *param_3,int *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 *param_8,undefined1 param_9,
            undefined1 param_10); void __thiscall FUN_1012f3b0(undefined4 *param_2,undefined4 *param_3,undefined4 param_4); void __thiscall FUN_1012f4e0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,int *param_6); void __thiscall FUN_1012f6e0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5); void __thiscall FUN_1012f890(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5); void __thiscall FUN_1012fa40(undefined4 *param_2,int *param_3); void __thiscall FUN_1012fb20(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4); void __thiscall FUN_1012fcb0(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_1012fdd0(undefined4 *param_2,undefined4 param_3,int *param_4); void __thiscall FUN_1012fec0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4); void __thiscall FUN_10130050(undefined4 *param_2,undefined4 param_3); void __thiscall FUN_10130120(undefined4 *param_2,undefined4 param_3,undefined4 param_4); void __thiscall FUN_101301f0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined1 param_5); void __thiscall FUN_10130380(undefined4 *param_2,int *param_3); void __thiscall FUN_10130460(undefined4 *param_2,int *param_3,undefined1 *param_4); void __thiscall FUN_101305b0(undefined4 *param_2,undefined1 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6); void __thiscall FUN_101306e0(undefined4 *param_2,int *param_3); void __thiscall FUN_10131350(int *param_2,undefined4 *param_3); void __thiscall FUN_10131440(int *param_2); void __thiscall FUN_10131500(undefined1 param_2); void __thiscall FUN_10131560(undefined4 param_2); void __thiscall FUN_10131630(int *param_2); void __thiscall FUN_10131710(int *param_2,int *param_3); void __thiscall FUN_101317a0(int *param_2,undefined1 *param_3); void __thiscall FUN_10131970(undefined4 *param_2); void __thiscall FUN_10131bd0(SCStr *param_2,undefined4 param_3); void __thiscall FUN_10131d60(SCStr *param_2,undefined4 param_3,undefined4 param_4); void __thiscall FUN_10131f00(SCStr *param_2); void __thiscall FUN_10132090(undefined4 param_2); void __thiscall FUN_10132430(undefined4 *param_2); void __thiscall FUN_101329e0(undefined4 *param_2); void __thiscall FUN_10132ca0(undefined4 *param_2); void __thiscall FUN_10132e60(undefined4 param_2); void __thiscall FUN_10132ec0(undefined4 *param_2); void __thiscall FUN_10132f80(undefined4 *param_2); void __thiscall FUN_10133170(undefined4 *param_2); void __thiscall FUN_10133310(undefined4 *param_2); void __thiscall FUN_10133cc0(undefined4 *param_2); void __thiscall FUN_10133f40(undefined4 *param_2); void __thiscall FUN_10134000(undefined4 *param_2); void __thiscall FUN_101340d0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5); void __thiscall FUN_10134290(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5); void __thiscall FUN_10134660(undefined4 *param_2); void __thiscall FUN_10134720(undefined4 *param_2,int *param_3); void __thiscall FUN_10134d60(undefined4 *param_2); void __thiscall FUN_10135210(undefined4 *param_2,undefined4 param_3); void __thiscall FUN_101353a0(undefined4 *param_2,undefined1 *param_3); void __thiscall FUN_101354d0(undefined4 *param_2,undefined1 *param_3); void __thiscall FUN_10135600(undefined4 *param_2); void __thiscall FUN_10135b30(undefined4 *param_2); void __thiscall FUN_10135bf0(undefined4 *param_2); void __thiscall FUN_101367b0(undefined4 *param_2); void __thiscall FUN_10136c70(undefined4 *param_2); void __thiscall FUN_10136d90(undefined4 *param_2); void __thiscall FUN_101370b0(undefined4 *param_2); void __thiscall FUN_10137860(undefined4 *param_2,undefined4 param_3); void __thiscall FUN_10137c00(SCStr *param_2,undefined4 param_3); void __thiscall FUN_10137e00(undefined4 *param_2); void __thiscall FUN_10138160(undefined4 *param_2,undefined4 param_3); void __thiscall FUN_10138ab0(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_10138bd0(undefined4 *param_2); void __thiscall FUN_10138c90(undefined4 *param_2); void __thiscall FUN_10138d50(undefined4 *param_2); void __thiscall FUN_10138fb0(undefined4 param_2); void __thiscall FUN_10139150(int *param_2); void __thiscall FUN_101391d0(undefined4 *param_2); void __thiscall FUN_101393a0(undefined4 param_2); void __thiscall FUN_10139410(undefined4 param_2); void __thiscall FUN_10139480(undefined4 param_2); void __thiscall FUN_101394f0(undefined4 param_2); void __thiscall FUN_101396e0(undefined4 *param_2); void __thiscall FUN_10139830(undefined4 *param_2,undefined4 *param_3,int *param_4); void __thiscall FUN_10139cd0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10139f20(undefined4 *param_2); void __thiscall FUN_1013a060(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_1013a200(undefined4 *param_2,undefined4 *param_3,undefined4 param_4); void __thiscall FUN_1013a340(undefined4 *param_2); void __thiscall FUN_1013a420(undefined4 *param_2); void __thiscall FUN_1013a530(undefined4 *param_2); void __thiscall FUN_1013a790(int *param_2); void __thiscall FUN_1013acb0(undefined1 *param_2,undefined4 param_3); void __thiscall FUN_1013ada0(undefined4 param_2); void __thiscall FUN_1013ae00(int *param_2); void __thiscall FUN_1013ae80(int *param_2); void __thiscall FUN_1013af00(int *param_2); void __thiscall FUN_1013af80(undefined4 *param_2,int *param_3); void __thiscall FUN_1013b080(undefined1 *param_2); void __thiscall FUN_1013b230(int *param_2); void __thiscall FUN_1013b2b0(undefined4 *param_2,int *param_3); void __thiscall FUN_1013b3a0(undefined1 *param_2); void __thiscall FUN_1013b490(int *param_2); void __thiscall FUN_1013b5a0(undefined4 *param_2,int *param_3,int *param_4); undefined4 * __thiscall FUN_1013d0b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d120(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d190(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d200(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d270(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d2e0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d350(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d3c0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d430(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d4a0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d510(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d580(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d5f0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d660(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d6d0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d740(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d7b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d820(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d890(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d900(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d970(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d9e0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013da50(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013dac0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013db30(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013dba0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013dc10(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013dc80(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013dcf0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013dd60(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013ddd0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013de40(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013deb0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013df20(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013df90(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e000(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e070(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e0e0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e150(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e1c0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e230(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e2a0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e310(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e380(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e3f0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e460(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e4d0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e540(undefined4 *param_2,SCStr *param_3); void __thiscall FUN_1013e5b0(undefined4 *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_1013e6d0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e740(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e7b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e820(undefined4 *param_2,SCStr *param_3); void __thiscall FUN_1013e8f0(undefined1 *param_2); void __thiscall FUN_1013e9e0(undefined4 param_2,undefined4 param_3,int *param_4); void __thiscall FUN_1013ea70(undefined4 *param_2,int *param_3); void __thiscall FUN_1013eb60(undefined1 param_2); void __thiscall FUN_1013ebc0(undefined4 *param_2,undefined1 param_3); void __thiscall FUN_1013eca0(undefined4 param_2,undefined8 param_3); void __thiscall FUN_1013ed90(undefined4 *param_2,undefined4 param_3); void __thiscall FUN_1013ee70(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_1013efa0(int *param_2); void __thiscall FUN_1013f020(int *param_2); void __thiscall FUN_1013f0a0(int *param_2); void __thiscall FUN_1013f120(int *param_2); void __thiscall FUN_1013f1a0(int *param_2); void __thiscall FUN_1013f220(int *param_2); void __thiscall FUN_1013f2a0(int *param_2); void __thiscall FUN_1013f320(undefined4 param_2,int *param_3); void __thiscall FUN_1013f3a0(int *param_2); void __thiscall FUN_1013f420(int *param_2,int *param_3); void __thiscall FUN_1013f4c0(int *param_2); void __thiscall FUN_10143df0(undefined4 *param_2); void __thiscall FUN_10143ed0(undefined4 *param_2); void __thiscall FUN_10143fb0(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_101440e0(int *param_2); void __thiscall FUN_101441c0(undefined4 *param_2); void __thiscall FUN_101442a0(undefined4 param_2); void __thiscall FUN_101444f0(undefined1 *param_2); void __thiscall FUN_101445e0(undefined1 *param_2); void __thiscall FUN_101447b0(int *param_2); void __thiscall FUN_10144860(undefined4 param_2); void __thiscall FUN_101448c0(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_10144a00(undefined4 *param_2,undefined1 param_3); void __thiscall FUN_10144ae0(int *param_2); void __thiscall FUN_10144b60(int *param_2); void __thiscall FUN_10144be0(undefined1 *param_2); void __thiscall FUN_10144cd0(undefined4 *param_2); void __thiscall FUN_10144db0(undefined1 *param_2); void __thiscall FUN_10144ea0(undefined4 param_2,undefined8 param_3); void __thiscall FUN_10144f90(undefined4 param_2); void __thiscall FUN_10144ff0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4); void __thiscall FUN_101451a0(undefined1 *param_2); void __thiscall FUN_10145290(undefined4 *param_2,undefined4 param_3); void __thiscall FUN_10145370(undefined1 param_2); void __thiscall FUN_101453d0(int *param_2); void __thiscall FUN_10145450(undefined4 param_2); void __thiscall FUN_101454b0(undefined1 *param_2); void __thiscall FUN_101455a0(undefined4 *param_2); void __thiscall FUN_10145680(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_101457b0(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_10145dd0(undefined4 *param_2); void __thiscall FUN_10145eb0(undefined4 param_2,int *param_3); void __thiscall FUN_10145f30(undefined4 param_2); void __thiscall FUN_10145f90(undefined4 param_2); void __thiscall FUN_10146050(undefined4 param_2,int *param_3); void __thiscall FUN_10146130(undefined4 param_2,int *param_3); void __thiscall FUN_101461b0(undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined1 *param_8); void __thiscall FUN_10146340(undefined1 param_2); void __thiscall FUN_101463b0(int *param_2); void __thiscall FUN_10146770(int *param_2,undefined1 param_3); void __thiscall FUN_101467f0(undefined4 param_2); void __thiscall FUN_10148a00(undefined4 *param_2); void __thiscall FUN_10148b40(undefined4 param_2); void __thiscall FUN_10148ba0(undefined4 *param_2); void __thiscall FUN_10148c80(undefined1 param_2); void __thiscall FUN_10148da0(int *param_2); void __thiscall FUN_10148e20(int *param_2); void __thiscall FUN_10148ea0(int *param_2); void __thiscall FUN_10148f20(int *param_2); void __thiscall FUN_10148fa0(int *param_2); void __thiscall FUN_10149020(int *param_2); void __thiscall FUN_101490a0(int *param_2); void __thiscall FUN_10149120(int *param_2); void __thiscall FUN_101491a0(int *param_2); void __thiscall FUN_10149220(undefined4 *param_2); void __thiscall FUN_10149300(undefined4 *param_2); void __thiscall FUN_10149440(int *param_2); void __thiscall FUN_101495b0(int *param_2); void __thiscall FUN_10149630(int *param_2); void __thiscall FUN_101496b0(undefined4 param_2); void __thiscall FUN_101497b0(undefined4 *param_2); };
using namespace std;
void FUN_100ab330(void);
void FUN_100ad880(void);
void FUN_100ada80(void);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_100af860(void);
void FUN_100af920(void);
void FUN_100afe80(void);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_100b2910(void);
void FUN_100bacf0(void);
void FUN_100bb530(void);
void FUN_100bb6f0(void);
void FUN_100c8c90(void);
void FUN_100cef50(void);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_100d2af0(void);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_100d4c80(void);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_100d4d20(void);
void FUN_100d8400(void);
void FUN_100d8520(void);
void FUN_100dbcc0(void);
void FUN_100e18a0(void);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void __fastcall FUN_100e4610(undefined4 param_1);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_100e47d0(void);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_100e5ed0(void);
void FUN_10117950(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __fastcall FUN_10118e40(undefined4 *param_1);
void __fastcall FUN_1011bf90(int *param_1);
void __fastcall FUN_1011bff0(int *param_1);
void __fastcall FUN_1011c050(int *param_1);
void __fastcall FUN_1011f5e0(int param_1);
void __fastcall FUN_1011f660(int *param_1);
void __fastcall FUN_1011f810(int *param_1);
void __fastcall FUN_101203e0(undefined4 *param_1);
void __fastcall FUN_10120460(undefined4 *param_1);
void __fastcall FUN_101204e0(undefined4 *param_1);
void __fastcall FUN_10120560(undefined4 *param_1);
void __fastcall FUN_101205e0(undefined4 *param_1);
void __fastcall FUN_10120660(undefined4 *param_1);
void __fastcall FUN_101206e0(undefined4 *param_1);
void __fastcall FUN_10120760(undefined4 *param_1);
void __fastcall FUN_101207e0(undefined4 *param_1);
void __fastcall FUN_10120860(undefined4 *param_1);
void __fastcall FUN_101208e0(undefined4 *param_1);
void __fastcall FUN_10120960(undefined4 *param_1);
void __fastcall FUN_101209e0(undefined4 *param_1);
void __fastcall FUN_10120a60(undefined4 *param_1);
void __fastcall FUN_10120ae0(undefined4 *param_1);
void __fastcall FUN_10120b60(undefined4 *param_1);
void __fastcall FUN_10120be0(undefined4 *param_1);
void __fastcall FUN_10120c60(undefined4 *param_1);
void __fastcall FUN_10120ce0(undefined4 *param_1);
void __fastcall FUN_10120d60(undefined4 *param_1);
void __fastcall FUN_10120de0(undefined4 *param_1);
void __fastcall FUN_10120e60(undefined4 *param_1);
void __fastcall FUN_10120ee0(undefined4 *param_1);
void __fastcall FUN_10120f60(undefined4 *param_1);
void __fastcall FUN_10120fe0(undefined4 *param_1);
void __fastcall FUN_10121060(undefined4 *param_1);
void __fastcall FUN_101210e0(undefined4 *param_1);
void __fastcall FUN_10121160(undefined4 *param_1);
void __fastcall FUN_101211e0(undefined4 *param_1);
void __fastcall FUN_10121260(undefined4 *param_1);
void __fastcall FUN_101212e0(undefined4 *param_1);
void __fastcall FUN_10121360(undefined4 *param_1);
void __fastcall FUN_101213e0(undefined4 *param_1);
void __fastcall FUN_10121460(undefined4 *param_1);
void __fastcall FUN_101214e0(undefined4 *param_1);
void __fastcall FUN_10121560(undefined4 *param_1);
void __fastcall FUN_101215e0(undefined4 *param_1);
void __fastcall FUN_10121660(undefined4 *param_1);
void __fastcall FUN_101216e0(undefined4 *param_1);
void __fastcall FUN_10121760(undefined4 *param_1);
void __fastcall FUN_101217e0(undefined4 *param_1);
void __fastcall FUN_10121860(undefined4 *param_1);
void __fastcall FUN_101218e0(undefined4 *param_1);
void __fastcall FUN_10121960(undefined4 *param_1);
void __fastcall FUN_101219e0(undefined4 *param_1);
void __fastcall FUN_10121a60(undefined4 *param_1);
void __fastcall FUN_10121ae0(undefined4 *param_1);
void __fastcall FUN_10121b60(undefined4 *param_1);
void __fastcall FUN_10121be0(undefined4 *param_1);
void __fastcall FUN_10121c60(undefined4 *param_1);
void __fastcall FUN_10121ce0(undefined4 *param_1);
void __fastcall FUN_10121d60(undefined4 *param_1);
void __fastcall FUN_10121de0(undefined4 *param_1);
void __fastcall FUN_10121e60(undefined4 *param_1);
void __fastcall FUN_10121ee0(undefined4 *param_1);
void __fastcall FUN_10121f60(undefined4 *param_1);
void __fastcall FUN_10121fe0(undefined4 *param_1);
void __fastcall FUN_10122060(undefined4 *param_1);
void __fastcall FUN_101220e0(undefined4 *param_1);
void __fastcall FUN_10122160(undefined4 *param_1);
void __fastcall FUN_101221e0(undefined4 *param_1);
void __fastcall FUN_10122260(undefined4 *param_1);
void __fastcall FUN_101222e0(undefined4 *param_1);
void __fastcall FUN_10122360(undefined4 *param_1);
void __fastcall FUN_101223e0(undefined4 *param_1);
void __fastcall FUN_10122490(int *param_1);
void __fastcall FUN_1012a080(float *param_1);
void __fastcall FUN_1012a2d0(int *param_1);
void * FUN_1012cab0(uint param_1);
void __fastcall FUN_1012d310(int param_1);
void __fastcall FUN_1012d370(int param_1);
void __fastcall FUN_1012d3d0(int param_1);
void __fastcall FUN_1012d430(int param_1);
void __fastcall FUN_1012d490(int param_1);
void __fastcall FUN_1012d4f0(int param_1);
void __fastcall FUN_1012d630(int param_1);
void __fastcall FUN_1012d690(int param_1);
void __fastcall FUN_1012d6f0(int param_1);
void __fastcall FUN_1012d750(int param_1);
void __fastcall FUN_1012d7b0(int param_1);
void __fastcall FUN_1012d810(int param_1);
void __fastcall FUN_1012d8e0(int param_1);
void __fastcall FUN_1012da30(int param_1);
void __fastcall FUN_1012db20(int param_1);
void __fastcall FUN_1012db80(int param_1);
void __fastcall FUN_1012dbe0(int param_1);
void __fastcall FUN_1012dcd0(int param_1);
void __fastcall FUN_10130900(int param_1);
void __fastcall FUN_10131230(int param_1);
void __fastcall FUN_10131290(int param_1);
void __fastcall FUN_101312f0(int param_1);
void __fastcall FUN_101315d0(int param_1);
void __fastcall FUN_101316b0(int param_1);
void __fastcall FUN_101320f0(int param_1);
void __fastcall FUN_101323d0(int param_1);
void __fastcall FUN_10132510(int param_1);
void __fastcall FUN_10132640(int param_1);
void __fastcall FUN_10132ab0(int param_1);
void __fastcall FUN_10132b10(int param_1);
void __fastcall FUN_10133110(int param_1);
void __fastcall FUN_101333d0(int param_1);
void __fastcall FUN_10133440(int param_1);
void __fastcall FUN_10133db0(int param_1);
void __fastcall FUN_10133e10(int param_1);
void __fastcall FUN_10133e70(int param_1);
void __fastcall FUN_10133ee0(int param_1);
void __fastcall FUN_10134800(int param_1);
void __fastcall FUN_10134b00(int param_1);
void __fastcall FUN_10134b60(int param_1);
undefined4 * FUN_10134e40(undefined4 *param_1,undefined4 *param_2);
undefined4 * FUN_10134f40(undefined4 *param_1,undefined4 *param_2);
undefined4 * FUN_10135040(undefined4 *param_1,undefined4 *param_2);
void __fastcall FUN_101352e0(int param_1);
void __fastcall FUN_10135340(int param_1);
void __fastcall FUN_10135790(int param_1);
void __fastcall FUN_10135d80(int param_1);
void __fastcall FUN_10135de0(int param_1);
void __fastcall FUN_10135e40(int param_1);
void __fastcall FUN_101360b0(int param_1);
void __fastcall FUN_10136a70(int param_1);
void __fastcall FUN_10136d30(int param_1);
void __fastcall FUN_10136e50(int param_1);
void __fastcall FUN_10137050(int param_1);
void __fastcall FUN_101377b0(int param_1);
void __fastcall FUN_10137a00(int param_1);
void __fastcall FUN_10137da0(int param_1);
void __fastcall FUN_101385d0(int param_1);
void __fastcall FUN_101388a0(int param_1);
void __fastcall FUN_10138e30(int param_1);
void __fastcall FUN_10138e90(int param_1);
void __fastcall FUN_10138ef0(int param_1);
void __fastcall FUN_10138f50(int param_1);
void __fastcall FUN_10139020(int param_1);
void __fastcall FUN_10139090(int param_1);
void __fastcall FUN_101390f0(int param_1);
void __fastcall FUN_101392b0(int param_1);
void __fastcall FUN_10139310(int param_1);
void __fastcall FUN_10139560(int param_1);
void __fastcall FUN_101395c0(int param_1);
void __fastcall FUN_10139620(int param_1);
void __fastcall FUN_10139680(int param_1);
void __fastcall FUN_101399a0(int param_1);
void __fastcall FUN_10139a00(int param_1);
void __fastcall FUN_10139a60(int param_1);
void __fastcall FUN_10139ac0(int param_1);
void __fastcall FUN_10139b50(int param_1);
void __fastcall FUN_10139bb0(int param_1);
void __fastcall FUN_10139c10(int param_1);
void __fastcall FUN_10139c70(int param_1);
void __fastcall FUN_10139d40(int param_1);
void __fastcall FUN_10139da0(int param_1);
void __fastcall FUN_10139e00(int param_1);
void __fastcall FUN_10139e60(int param_1);
void __fastcall FUN_10139ec0(int param_1);
void __fastcall FUN_1013a000(int param_1);
void __fastcall FUN_1013a1a0(int param_1);
void __fastcall FUN_1013a8b0(int param_1);
void __fastcall FUN_1013aad0(int param_1);
void __fastcall FUN_1013ab30(int param_1);
void __fastcall FUN_1013ab90(int param_1);
void __fastcall FUN_1013abf0(int param_1);
void __fastcall FUN_1013ac50(int param_1);
void __fastcall FUN_1013b170(int param_1);
void __fastcall FUN_1013b1d0(int param_1);
void __fastcall FUN_1013e890(int param_1);
void __fastcall FUN_10144160(int param_1);
void __fastcall FUN_10144310(int param_1);
void __fastcall FUN_10144370(int param_1);
void __fastcall FUN_101443d0(int param_1);
void __fastcall FUN_10144430(int param_1);
void __fastcall FUN_10144490(int param_1);
void __fastcall FUN_101446f0(int param_1);
void __fastcall FUN_10144750(int param_1);
void __fastcall FUN_101458e0(int param_1);
void __fastcall FUN_10145940(int param_1);
void __fastcall FUN_101459a0(int param_1);
void __fastcall FUN_10145a00(int param_1);
void __fastcall FUN_10145a60(int param_1);
void __fastcall FUN_10145ac0(int param_1);
void __fastcall FUN_10145b20(int param_1);
void __fastcall FUN_10145b80(int param_1);
void __fastcall FUN_10145be0(int param_1);
void __fastcall FUN_10145c40(int param_1);
void __fastcall FUN_10145cb0(int param_1);
void __fastcall FUN_10145d10(int param_1);
void __fastcall FUN_10145d70(int param_1);
void __fastcall FUN_10145ff0(int param_1);
void __fastcall FUN_101460d0(int param_1);
void __fastcall FUN_101462e0(int param_1);
void __fastcall FUN_10146430(int param_1);
void __fastcall FUN_10146490(int param_1);
void __fastcall FUN_101464f0(int param_1);
void __fastcall FUN_10146550(int param_1);
void __fastcall FUN_101465b0(int param_1);
void __fastcall FUN_10146610(int param_1);
void __fastcall FUN_10146670(int param_1);
void __fastcall FUN_101466d0(int param_1);
void __fastcall FUN_10148ae0(int param_1);
void __fastcall FUN_10148ce0(int param_1);
void __fastcall FUN_10148d40(int param_1);
void __fastcall FUN_101493e0(int param_1);
void __fastcall FUN_10149740(int param_1);
undefined4 FUN_10149950(void);
undefined4 FUN_10149a40(void);
undefined4 FUN_10149b30(void);
undefined4 FUN_10149c20(void);
undefined4 FUN_10149d10(void);
undefined4 FUN_10149e00(void);
undefined4 FUN_10149ef0(void);
undefined4 FUN_10149fe0(void);
undefined4 FUN_1014a0d0(void);
undefined4 FUN_1014a1c0(void);
undefined4
__stdcall FUN_1014cf50(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
            ushort *param_6,undefined4 param_7,undefined4 param_8);
undefined4 __stdcall FUN_1014d0f0(int *param_1,ushort *param_2);
undefined4 FUN_1014d210(int *param_1);
undefined4 FUN_1014d2b0(int *param_1);
undefined4 FUN_1014d350(int *param_1);
undefined4 __stdcall FUN_1014d3f0(int *param_1,undefined4 param_2);
undefined4 FUN_1014d4e0(void);
void __stdcall FUN_1014d5a0(int *param_1,ushort *param_2);
undefined4 FUN_1014d690(int *param_1);
undefined4 __stdcall FUN_1014d7f0(int *param_1);
undefined4 __stdcall FUN_1014d8e0(int *param_1);
undefined4 __stdcall FUN_1014d9d0(int *param_1);
SCStr * __stdcall FUN_1014dac0(int *param_1);
undefined4 __stdcall FUN_1014dc10(int *param_1);
undefined4 __stdcall FUN_1014dd00(int *param_1);
undefined4 __stdcall FUN_1014df80(int *param_1,undefined4 param_2,ushort *param_3);
undefined4 __stdcall FUN_1014e030(int *param_1,ushort *param_2,ushort *param_3);
undefined4 FUN_1014e120(int *param_1,undefined4 param_2);
undefined4 FUN_1014e1c0(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_1014e260(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4);
undefined4
__stdcall FUN_1014e350(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8,undefined4 param_9);
undefined4 __stdcall FUN_1014e520(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1014e5d0(int *param_1,ushort *param_2,ushort *param_3);
undefined4
__stdcall FUN_1014e6c0(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7);
undefined4
__stdcall FUN_1014e7f0(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8);
undefined4
__stdcall FUN_1014e950(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            ushort *param_10);
undefined4
__stdcall FUN_1014eac0(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,ushort *param_7,int param_8,int param_9);
undefined4 __stdcall FUN_1014ebd0(int *param_1,ushort *param_2,undefined4 param_3);
undefined4
__stdcall FUN_1014ec80(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,undefined4 param_5);
undefined4 __stdcall FUN_1014eda0(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4);
undefined4 __stdcall FUN_1014ee90(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4);
undefined4 FUN_1014ef80(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_1014f020(int *param_1,ushort *param_2,ushort *param_3);
undefined4 __stdcall FUN_1014f110(int *param_1,ushort *param_2);
undefined4 FUN_1014f1c0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 __stdcall FUN_1014f260(int *param_1,ushort *param_2,ushort *param_3);
undefined4 FUN_1014f350(int *param_1,undefined4 param_2);
undefined4 FUN_1014f3f0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 __stdcall FUN_1014f490(int *param_1,ushort *param_2,ushort *param_3,int param_4);
undefined4 FUN_1014f580(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_1014f620(int *param_1,undefined4 param_2,ushort *param_3);
undefined4
__stdcall FUN_1014f6e0(int *param_1,int param_2,ushort *param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_1014f7a0(int *param_1,undefined4 param_2);
undefined4 FUN_1014f8d0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_1014f980(int *param_1);
undefined4 FUN_1014fa30(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_1014fae0(int *param_1,ushort *param_2);
undefined4 FUN_1014fc20(int *param_1,int *param_2);
undefined4 FUN_1014fce0(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_1014fd90(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1014fe80(int *param_1,ushort *param_2,undefined4 param_3);
undefined4 FUN_1014ffb0(int *param_1,undefined4 param_2);
undefined4 FUN_10150050(int *param_1,undefined4 param_2);
undefined4 FUN_101500f0(int *param_1);
undefined4 FUN_101501a0(int *param_1);
undefined4 __stdcall FUN_10150240(int *param_1);
undefined4 FUN_10150330(int *param_1,undefined4 param_2);
undefined4 FUN_101503d0(int *param_1);
undefined4 FUN_10150470(int *param_1);
undefined4 FUN_10150510(int *param_1,undefined4 param_2);
undefined4 FUN_101505b0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_10150690(int *param_1,undefined4 param_2);
undefined4 FUN_101507c0(int *param_1);
undefined4 __stdcall FUN_10150860(int *param_1);
undefined4 __stdcall FUN_10150960(int *param_1);
undefined4 __stdcall FUN_10150a50(int *param_1);
undefined4 FUN_10150b50(int *param_1);
undefined4 FUN_10150bf0(int *param_1);
undefined4 FUN_10150c90(int *param_1);
undefined4 FUN_10150d30(int *param_1);
undefined4 __stdcall FUN_10150dd0(int *param_1);
undefined4 FUN_10150ec0(int *param_1);
undefined4 __stdcall FUN_10150f80(int *param_1);
undefined4 __stdcall FUN_10151070(int *param_1);
undefined4 __stdcall FUN_10151190(int *param_1);
undefined4 FUN_10151280(int *param_1);
undefined4 __stdcall FUN_10151320(int *param_1);
undefined4 __stdcall FUN_10151410(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_10151500(int *param_1);
undefined4 FUN_10151670(int *param_1);
void __stdcall FUN_10151790(int *param_1,ushort *param_2);
void __stdcall FUN_10151ac0(int *param_1,ushort *param_2);
void __stdcall FUN_10151b50(int *param_1);
void __stdcall FUN_10151bd0(int *param_1,int param_2,ushort *param_3);
void __stdcall FUN_10151c60(int *param_1,int param_2);
undefined4 __stdcall FUN_10151e10(int *param_1);
undefined4 __stdcall FUN_10151f00(int *param_1);
undefined4 __stdcall FUN_10152050(int *param_1,undefined4 param_2);
void __stdcall FUN_10152240(int *param_1,ushort *param_2);
void __stdcall FUN_101522c0(int *param_1,ushort *param_2);
void __stdcall FUN_10152340(int *param_1,ushort *param_2);
void __stdcall FUN_101524a0(int *param_1,undefined4 param_2,ushort *param_3);
void __stdcall FUN_10152530(int *param_1,undefined4 param_2,ushort *param_3,undefined4 param_4);
undefined4 __stdcall FUN_10152650(int *param_1);
undefined1 __stdcall FUN_101527d0(int *param_1,ushort *param_2,undefined4 param_3,int param_4);
undefined1 __stdcall FUN_10152870(int *param_1,ushort *param_2,undefined4 param_3);
undefined4 FUN_10152bc0(int *param_1,int *param_2);
undefined4 FUN_10152c70(int *param_1);
undefined4 FUN_10152d10(int *param_1);
undefined4 __stdcall FUN_10152db0(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_10152e60(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4);
undefined1 __stdcall FUN_10152f30(int *param_1,ushort *param_2,int param_3);
undefined1 __stdcall FUN_10152fd0(int *param_1,ushort *param_2);
undefined4 FUN_10153070(int *param_1);
undefined4 __stdcall FUN_10153110(int *param_1);
undefined4 __stdcall FUN_10153200(int *param_1);
void __stdcall FUN_10153330(int *param_1,ushort *param_2);
undefined4 FUN_101533d0(int *param_1,undefined4 param_2);
undefined4 FUN_101534a0(int *param_1,undefined4 param_2);
undefined4 FUN_10153540(int *param_1);
undefined4 FUN_101535e0(int *param_1,undefined4 param_2);
undefined4 FUN_10153680(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_10153720(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_10153810(int *param_1,int *param_2);
undefined4 __stdcall FUN_101538c0(int *param_1,ushort *param_2,undefined4 param_3);
SCStr * __stdcall FUN_101539f0(int *param_1);
undefined4 __stdcall FUN_10153b70(int *param_1);
undefined4 __stdcall FUN_10153da0(int *param_1);
undefined4 __stdcall FUN_10153e90(int *param_1);
undefined4 FUN_10154270(int *param_1);
undefined1 __stdcall FUN_10154310(int *param_1,ushort *param_2);
void __stdcall FUN_101543d0(int *param_1,ushort *param_2);
void __stdcall FUN_101544d0(int *param_1,ushort *param_2,undefined4 param_3);
void __stdcall FUN_10154560(int *param_1,ushort *param_2,ushort *param_3,int param_4);
undefined4 __stdcall FUN_10154820(int *param_1);
undefined4 __stdcall FUN_10154910(int *param_1);
undefined1 __stdcall FUN_10154a20(int *param_1,ushort *param_2,ushort *param_3);
undefined1 __stdcall FUN_10154af0(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_10154c80(int *param_1);
undefined4 __stdcall FUN_10154d70(int *param_1);
undefined4 __stdcall FUN_10154e60(int *param_1);
undefined4 __stdcall FUN_10154ff0(int *param_1);
SCStr * __stdcall FUN_101550e0(int *param_1);
undefined4 __stdcall FUN_10155230(int *param_1);
void __stdcall FUN_101554f0(int *param_1,ushort *param_2);
void __stdcall FUN_10155600(int *param_1,ushort *param_2,ushort *param_3,undefined4 *param_4,int param_5,
                 undefined4 param_6);
void __stdcall FUN_101558b0(int *param_1,ushort *param_2);
void __stdcall FUN_101559c0(int *param_1,ushort *param_2);
// Reference entry 100ab330; body size 137 bytes.
#line 1 "ENTRY_100ab330"

void FUN_100ab330(void)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)((SCStr *)&DAT_121a07b0))->int_release();
  DAT_121a07b0 = (int)(local_14);
  ((SCStr *)((SCStr *)&DAT_121a07b0))->int_addref();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&local_14))->int_release();
  DAT_121a07b4 = (int)(0);
  _atexit(FUN_117e9640);

  return;

 } catch (...) { }
}


// Reference entry 100ad880; body size 291 bytes.
#line 1 "ENTRY_100ad880"

void FUN_100ad880(void)

{
 try {
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x2c));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCLoggingHelper);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCNewWizManager);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCNewWizManager);
    piVar2[3] = (int)(0);
    piVar2[4] = (int)(0);
    piVar2[5] = (int)(0);
    piVar2[6] = (int)(0);
    piVar2[7] = (int)(0);

    piVar2[8] = (int)(0);
    piVar2[9] = (int)(0);
    pvVar3 = (void *)(operator_new(0x14));
    *(void**)pvVar3 = (void *)((void *)(pvVar3));
    *(void **)((int)pvVar3 + 4) = pvVar3;
    *(void **)((int)pvVar3 + 8) = pvVar3;
    *(undefined2 *)((int)pvVar3 + 0xc) = 0x101;
    piVar2[8] = (int)((int)pvVar3);
    piVar2[10] = (int)(0);
  }

  DAT_121a0bb8 = (int)((int *)0x0);
  DAT_121a0bb4 = (int)(piVar2);
  if (piVar2 != (int *)0x0) {
    if (*(code **)(*piVar2 + 0xc) != thunk_FUN_10288030) {
      piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(uVar1));
    }
    DAT_121a0bb8 = (int)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }
  _atexit(FUN_117eda60);

  return;

 } catch (...) { }
}


// Reference entry 100ada80; body size 126 bytes.
#line 1 "ENTRY_100ada80"

void FUN_100ada80(void)

{
 try {
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)(local_14))->op_ctor((SCStr *)&DAT_121a0c3c);

  thunk_FUN_106a2610(local_14,&local_10);

  _eh_vector_destructor_iterator_(local_14,4,1,((int (SCStr::*)())&SCStr::op_dtor));
  _atexit((_func_4879 *)LAB_117edc30);

  return;

 } catch (...) { }
}


// Reference entry 100af860; body size 115 bytes.
#line 1 "ENTRY_100af860"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100af860(void)

{
 try {
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  if ((DAT_121a0fd4 == 0) && (DAT_121a0fd8 == '\0')) {
    pvVar2 = (void *)(operator_new(0xfc));

    if (pvVar2 == (void *)0x0) {
      DAT_121a0fd4 = (int)(0);
    }
    else {
      DAT_121a0fd4 = (int)(thunk_FUN_103056e0(uVar1,pvVar2));
    }
  }
  _DAT_121a0fe4 = (int)(DAT_121a0fd4);

  return;

 } catch (...) { }
}


// Reference entry 100af920; body size 248 bytes.
#line 1 "ENTRY_100af920"

void FUN_100af920(void)

{
 try {
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x50));

  if (pvVar2 != (void *)0x0) {
    *(undefined4 *)((int)pvVar2 + 0x30) = 0;
    *(undefined4 *)((int)pvVar2 + 0x34) = 0;
    *(undefined4 *)((int)pvVar2 + 0x38) = 0;
    pvVar3 = (void *)(operator_new(0x4c));
    *(void**)pvVar3 = (void *)((void *)(pvVar3));
    *(void **)((int)pvVar3 + 4) = pvVar3;
    *(void **)((int)pvVar2 + 0x34) = pvVar3;
    *(undefined4 *)((int)pvVar2 + 0x3c) = 0;
    *(undefined4 *)((int)pvVar2 + 0x40) = 0;
    *(undefined4 *)((int)pvVar2 + 0x44) = 0;
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    *(undefined4 *)((int)pvVar2 + 0x48) = 7;
    *(undefined4 *)((int)pvVar2 + 0x4c) = 8;
    *(undefined4 *)((int)pvVar2 + 0x30) = 0x3f800000;
    thunk_FUN_10310680(0x10,*(undefined4 *)((int)pvVar2 + 0x34));
    thunk_FUN_112a7ea0(pvVar2,"SCWeakRefMgr",uVar1);
    thunk_FUN_112a7b70((int)pvVar2 + 8,"SCWeakRefMgr");
    DAT_121a1028 = (int)(pvVar2);

    return;
  }
  DAT_121a1028 = (int)((void *)0x0);

  return;

 } catch (...) { }
}


// Reference entry 100afe80; body size 468 bytes.
#line 1 "ENTRY_100afe80"

void FUN_100afe80(void)

{
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)(operator_new(0xd8));

  if (puVar2 != (undefined4 *)0x0) {
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("scan");
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    thunk_FUN_103d0280(&local_14);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    ((SCStr *)((SCStr *)&local_14))->int_release();

    puVar2[0x1c] = (undefined4)((uint)&ghidra_vftable_RITQHandler);
    puVar2[0x1d] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
    puVar1 = (undefined4 *)(puVar2 + 0x1e);
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
    thunk_FUN_1059bd30(puVar1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFoundProductManager);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCFoundProductManager);
    puVar2[0x1c] = (undefined4)((uint)&ghidra_vftable_SCFoundProductManager);
    puVar2[0x1d] = (undefined4)((uint)&ghidra_vftable_SCFoundProductManager);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    puVar2[0x25] = (undefined4)(0);
    puVar2[0x26] = (undefined4)(0);
    pvVar3 = (void *)(operator_new(0x1c));
    *(void**)pvVar3 = (void *)((void *)(pvVar3));
    *(void **)((int)pvVar3 + 4) = pvVar3;
    *(void **)((int)pvVar3 + 8) = pvVar3;
    *(undefined2 *)((int)pvVar3 + 0xc) = 0x101;
    puVar2[0x25] = (undefined4)(pvVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    puVar2[0x27] = (undefined4)(0);
    puVar2[0x28] = (undefined4)(0);
    pvVar3 = (void *)(operator_new(0x1c));
    *(void**)pvVar3 = (void *)((void *)(pvVar3));
    *(void **)((int)pvVar3 + 4) = pvVar3;
    *(void **)((int)pvVar3 + 8) = pvVar3;
    *(undefined2 *)((int)pvVar3 + 0xc) = 0x101;
    puVar2[0x27] = (undefined4)(pvVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
    puVar2[0x29] = (undefined4)(0);
    puVar2[0x2a] = (undefined4)(0);
    pvVar3 = (void *)(operator_new(0x1c));
    *(void**)pvVar3 = (void *)((void *)(pvVar3));
    *(void **)((int)pvVar3 + 4) = pvVar3;
    *(void **)((int)pvVar3 + 8) = pvVar3;
    *(undefined2 *)((int)pvVar3 + 0xc) = 0x101;
    puVar2[0x29] = (undefined4)(pvVar3);
    puVar2[0x2d] = (undefined4)(0);
    puVar2[0x2e] = (undefined4)(0);
    puVar2[0x2f] = (undefined4)(0);
    puVar2[0x32] = (undefined4)(0);
    puVar2[0x33] = (undefined4)(0);
    puVar2[0x34] = (undefined4)(0);
    thunk_FUN_112a9cf0(puVar2 + 0x2b);
    thunk_FUN_112a9cf0(puVar2 + 0x30);
    DAT_121a10c8 = (int)(puVar2);

    return;
  }
  DAT_121a10c8 = (int)((undefined4 *)0x0);

  return;

 } catch (...) { }
}


// Reference entry 100b2910; body size 394 bytes.
#line 1 "ENTRY_100b2910"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b2910(void)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&DAT_121a1494))->int_allocRep("sun");
  DAT_121a1498 = (int)(0x115);
  DAT_121a149c = (int)(&DAT_11882ff0);

  DAT_121a14a0 = (int)(1);
  ((SCStr *)((SCStr *)&DAT_121a14a4))->int_allocRep("mon");
  _DAT_121a14a8 = (int)(0x116);
  _DAT_121a14ac = (int)(&DAT_11882ff0);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  _DAT_121a14b0 = (int)(2);
  ((SCStr *)((SCStr *)&DAT_121a14b4))->int_allocRep("tue");
  _DAT_121a14b8 = (int)(0x117);
  _DAT_121a14bc = (int)(&DAT_11882ff0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  _DAT_121a14c0 = (int)(3);
  ((SCStr *)((SCStr *)&DAT_121a14c4))->int_allocRep("wed");
  _DAT_121a14c8 = (int)(0x118);
  _DAT_121a14cc = (int)(&DAT_11882ff0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  _DAT_121a14d0 = (int)(4);
  ((SCStr *)((SCStr *)&DAT_121a14d4))->int_allocRep("thu");
  _DAT_121a14d8 = (int)(0x119);
  _DAT_121a14dc = (int)(&DAT_11882ff0);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  _DAT_121a14e0 = (int)(5);
  ((SCStr *)((SCStr *)&DAT_121a14e4))->int_allocRep("fri");
  _DAT_121a14e8 = (int)(0x11a);
  _DAT_121a14ec = (int)(&DAT_11882ff0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  _DAT_121a14f0 = (int)(6);
  ((SCStr *)((SCStr *)&DAT_121a14f4))->int_allocRep("sat");
  _DAT_121a14f8 = (int)(0x11b);
  _DAT_121a14fc = (int)(&DAT_11882ff0);
  _atexit((_func_4879 *)LAB_117f7c00);

  return;

 } catch (...) { }
}


// Reference entry 100bacf0; body size 150 bytes.
#line 1 "ENTRY_100bacf0"

void FUN_100bacf0(void)

{
 try {
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x1d8));

  if (pvVar2 == (void *)0x0) {
    DAT_121a2650 = (int)(0);
  }
  else {
    DAT_121a2650 = (int)(thunk_FUN_106b2750(uVar1,pvVar2));
  }

  DAT_121a2654 = (int)((int *)0x0);
  if (DAT_121a2650 != 0) {
    DAT_121a2654 = (int)((int *)(**(code **)(*(int *)(DAT_121a2650 + 200) + 0xc))());
    (**(code **)(*(int *)(uint)(DAT_121a2654) + 4))();
  }
  _atexit(FUN_1180abf0);

  return;

 } catch (...) { }
}


// Reference entry 100bb530; body size 292 bytes.
#line 1 "ENTRY_100bb530"

void FUN_100bb530(void)

{
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)(operator_new(0x54));

  if (puVar2 != (undefined4 *)0x0) {
    thunk_FUN_1114a7f0(puVar2);
    puVar2[1] = (undefined4)((uint)&ghidra_vftable_RITQHandler);
    puVar1 = (undefined4 *)(puVar2 + 2);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
    thunk_FUN_1059bd30(puVar1);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCUpnpSubscriptionManager);
    puVar2[1] = (undefined4)((uint)&ghidra_vftable_SCUpnpSubscriptionManager);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCUpnpSubscriptionManager);
    *(undefined2 *)(puVar2 + 9) = 0;
    ((SCStr *)((SCStr *)(puVar2 + 10)))->int_allocRep("");
    *(undefined1 *)(puVar2 + 0xb) = 0;
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    puVar2[0xc] = (undefined4)(0);
    puVar2[0xd] = (undefined4)(0);
    pvVar3 = (void *)(operator_new(0x1c));
    *(void**)pvVar3 = (void *)((void *)(pvVar3));
    *(void **)((int)pvVar3 + 4) = pvVar3;
    *(void **)((int)pvVar3 + 8) = pvVar3;
    *(undefined2 *)((int)pvVar3 + 0xc) = 0x101;
    puVar2[0xc] = (undefined4)(pvVar3);
    puVar2[0x10] = (undefined4)(0);
    puVar2[0x13] = (undefined4)(0);
    *(undefined2 *)(puVar2 + 0x14) = 0;
    thunk_FUN_112a9cf0(puVar2 + 0xe);
    thunk_FUN_112a9cf0(puVar2 + 0x11);
    DAT_121a26cc = (int)(puVar2);

    return;
  }
  DAT_121a26cc = (int)((undefined4 *)0x0);

  return;

 } catch (...) { }
}


// Reference entry 100bb6f0; body size 158 bytes.
#line 1 "ENTRY_100bb6f0"

void FUN_100bb6f0(void)

{
 try {
  undefined4 *puVar1;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0x70));

  if (puVar1 != (undefined4 *)0x0) {
    ((SCStr *)(local_14))->int_allocRep("root");
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    thunk_FUN_103d0280(local_14);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    ((SCStr *)(local_14))->int_release();
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCTestPointManager);
    DAT_121a2764 = (int)(puVar1);

    return;
  }
  DAT_121a2764 = (int)((undefined4 *)0x0);

  return;

 } catch (...) { }
}


// Reference entry 100c8c90; body size 118 bytes.
#line 1 "ENTRY_100c8c90"

void FUN_100c8c90(void)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&DAT_121a49a0))->int_allocRep("This is a first note");

  ((SCStr *)((SCStr *)&DAT_121a49a4))->int_allocRep("This is a second note");
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  ((SCStr *)((SCStr *)&DAT_121a49a8))->int_allocRep("This is a third note");
  _atexit((_func_4879 *)LAB_1182aca0);

  return;

 } catch (...) { }
}


// Reference entry 100cef50; body size 114 bytes.
#line 1 "ENTRY_100cef50"

void FUN_100cef50(void)

{
 try {
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x80));

  if (pvVar2 != (void *)0x0) {
    DAT_121a5544 = (int)(thunk_FUN_10c40d70(uVar1,pvVar2));

    return;
  }
  DAT_121a5544 = (int)(0);

  return;

 } catch (...) { }
}


// Reference entry 100d2af0; body size 222 bytes.
#line 1 "ENTRY_100d2af0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d2af0(void)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&DAT_12119fcc))->int_allocRep("");
  _DAT_12119fd8 = (int)(_DAT_119216c0);
  uRam12119fdc = (int)(_UNK_119216c4);
  uRam12119fe0 = (int)(_UNK_119216c8);
  uRam12119fe4 = (int)(_UNK_119216cc);

  _DAT_12119fd0 = (int)(FUN_10ce4d40);
  DAT_12119fd4 = (int)(1);
  _DAT_12119fe8 = (int)(_DAT_11921680);
  uRam12119fec = (int)(_UNK_11921684);
  DAT_12119ff0 = (int)(_UNK_11921688);
  uRam12119ff4 = (int)(_UNK_1192168c);
  DAT_12119ff8 = (int)(1);
  ((SCStr *)((SCStr *)&DAT_12119ffc))->int_allocRep("");
  _DAT_1211a008 = (int)(_DAT_119216c0);
  uRam1211a00c = (int)(_UNK_119216c4);
  uRam1211a010 = (int)(_UNK_119216c8);
  uRam1211a014 = (int)(_UNK_119216cc);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  _DAT_1211a000 = (int)(FUN_10ce4f30);
  DAT_1211a004 = (int)(1);
  _DAT_1211a018 = (int)(_DAT_119216a0);
  uRam1211a01c = (int)(_UNK_119216a4);
  uRam1211a020 = (int)(_UNK_119216a8);
  uRam1211a024 = (int)(_UNK_119216ac);
  DAT_1211a028 = (int)(1);
  ((SCStr *)((SCStr *)&DAT_1211a02c))->int_allocRep("");
  _atexit((_func_4879 *)LAB_1183a740);

  return;

 } catch (...) { }
}


// Reference entry 100d4c80; body size 118 bytes.
#line 1 "ENTRY_100d4c80"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d4c80(void)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&DAT_121a6008))->int_allocRep("x-sonos-scuri://musiclibrary");

  _DAT_121a600c = (int)(0x2a1);
  _DAT_121a6010 = (int)(1);
  ((SCStr *)((SCStr *)&DAT_121a6014))->int_allocRep("");
  _atexit(FUN_1183f2c0);

  return;

 } catch (...) { }
}


// Reference entry 100d4d20; body size 577 bytes.
#line 1 "ENTRY_100d4d20"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d4d20(void)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&DAT_121a5f78))->int_allocRep("x-sonos-scuri://searchtypes?oid=na&cpudn=RINCON_AssociatedZPUDN");

  _DAT_121a5f7c = (int)(0xe6);
  _DAT_121a5f80 = (int)(1);
  ((SCStr *)((SCStr *)&DAT_121a5f84))->int_allocRep("");

  ((SCStr *)((SCStr *)&DAT_121a5f88))->int_allocRep("x-sonos-scuri://asyncbrowse?oid=A:ALBUMARTIST&cpudn=RINCON_AssociatedZPUDN&class=object.container");
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  _DAT_121a5f8c = (int)(0xdf);
  _DAT_121a5f90 = (int)(1);
  ((SCStr *)((SCStr *)&DAT_121a5f94))->int_allocRep("artist");
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&DAT_121a5f98))->int_allocRep("x-sonos-scuri://asyncbrowse?oid=A:ARTIST&cpudn=RINCON_AssociatedZPUDN&class=object.container");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  _DAT_121a5f9c = (int)(0xe0);
  _DAT_121a5fa0 = (int)(1);
  ((SCStr *)((SCStr *)&DAT_121a5fa4))->int_allocRep("artist");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)((SCStr *)&DAT_121a5fa8))->int_allocRep("x-sonos-scuri://asyncbrowse?oid=A:ALBUM&cpudn=RINCON_AssociatedZPUDN&class=object.container.albumlist");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  _DAT_121a5fac = (int)(0xe1);
  _DAT_121a5fb0 = (int)(1);
  ((SCStr *)((SCStr *)&DAT_121a5fb4))->int_allocRep("albums");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&DAT_121a5fb8))->int_allocRep("x-sonos-scuri://asyncbrowse?oid=A:COMPOSER&cpudn=RINCON_AssociatedZPUDN&class=object.container");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  _DAT_121a5fbc = (int)(0xe2);
  _DAT_121a5fc0 = (int)(1);
  ((SCStr *)((SCStr *)&DAT_121a5fc4))->int_allocRep("composers");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&DAT_121a5fc8))->int_allocRep("x-sonos-scuri://asyncbrowse?oid=A:GENRE&cpudn=RINCON_AssociatedZPUDN&class=object.container");
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  _DAT_121a5fcc = (int)(0xe3);
  _DAT_121a5fd0 = (int)(1);
  ((SCStr *)((SCStr *)&DAT_121a5fd4))->int_allocRep("genre");
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)((SCStr *)&DAT_121a5fd8))->int_allocRep("x-sonos-scuri://asyncbrowse?oid=A:TRACKS&cpudn=RINCON_AssociatedZPUDN&class=object.container.playlistContainer&parentOID=A:");
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  _DAT_121a5fdc = (int)(0xe4);
  _DAT_121a5fe0 = (int)(1);
  ((SCStr *)((SCStr *)&DAT_121a5fe4))->int_allocRep("tracks");
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  ((SCStr *)((SCStr *)&DAT_121a5fe8))->int_allocRep("x-sonos-scuri://asyncbrowse?oid=A:PLAYLISTS&cpudn=RINCON_AssociatedZPUDN&class=object.container");
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  _DAT_121a5fec = (int)(0x2b1);
  _DAT_121a5ff0 = (int)(1);
  ((SCStr *)((SCStr *)&DAT_121a5ff4))->int_allocRep("playlists");
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  ((SCStr *)((SCStr *)&DAT_121a5ff8))->int_allocRep("x-sonos-scuri://asyncbrowse?oid=S:&cpudn=RINCON_AssociatedZPUDN&class=object.container");
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x10)));
  _DAT_121a5ffc = (int)(0x29f);
  _DAT_121a6000 = (int)(1);
  ((SCStr *)((SCStr *)&DAT_121a6004))->int_allocRep("folder");
  _atexit((_func_4879 *)LAB_1183f350);

  return;

 } catch (...) { }
}


// Reference entry 100d8400; body size 223 bytes.
#line 1 "ENTRY_100d8400"

void FUN_100d8400(void)

{
 try {
  SCStr local_34 [4];
  undefined4 local_30;
  SCStr local_2c [4];
  undefined4 local_28;
  SCStr local_24 [4];
  undefined4 local_20;
  SCStr local_1c [4];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (uint)(DAT_12126b84);

  ((SCStr *)(local_34))->int_allocRep("SCLIB_STR_SonosRadioTileExtension_Free_Title");


  ((SCStr *)(local_2c))->int_allocRep("SCLIB_STR_SonosRadioTileExtension_Free_Subtitle");

  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)(local_24))->int_allocRep("SCLIB_STR_SonosRadioTileExtension_Premium_Title");

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)(local_1c))->int_allocRep("SCLIB_STR_SonosRadioTileExtension_Premium_Subtitle");


  thunk_FUN_10265c30(local_34,&local_14);

  _eh_vector_destructor_iterator_(local_34,8,4,thunk_FUN_10266f90);
  _atexit((_func_4879 *)LAB_11846210);

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 100d8520; body size 367 bytes.
#line 1 "ENTRY_100d8520"

void FUN_100d8520(void)

{
 try {
  SCStr local_64 [4];
  undefined4 local_60;
  SCStr local_5c [4];
  undefined4 local_58;
  SCStr local_54 [4];
  undefined4 local_50;
  SCStr local_4c [4];
  undefined4 local_48;
  SCStr local_44 [4];
  undefined4 local_40;
  SCStr local_3c [4];
  undefined4 local_38;
  SCStr local_34 [4];
  undefined4 local_30;
  SCStr local_2c [4];
  undefined4 local_28;
  SCStr local_24 [4];
  undefined4 local_20;
  SCStr local_1c [4];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (uint)(DAT_12126b84);

  ((SCStr *)(local_64))->int_allocRep("SCLIB_STR_SonosRadioTileExtension_MySonos_Free_Title");


  ((SCStr *)(local_5c))->int_allocRep("SCLIB_STR_SonosRadioTileExtension_MySonos_Free_Subtitle");

  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)(local_54))->int_allocRep("SCLIB_STR_SonosRadioTileExtension_MySonos_Premium1_Title");

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_4c))->int_allocRep("SCLIB_STR_SonosRadioTileExtension_MySonos_Premium1_Subtitle");

  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)(local_44))->int_allocRep("SCLIB_STR_SonosRadioTileExtension_MySonos_Premium2_Title");

  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)(local_3c))->int_allocRep("SCLIB_STR_SonosRadioTileExtension_MySonos_Premium2_Subtitle");

  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_34))->int_allocRep("SCLIB_STR_SonosRadioTileExtension_MySonos_Holidays_Title");

  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)(local_2c))->int_allocRep("SCLIB_STR_SonosRadioTileExtension_MySonos_Holidays_Subtitle");

  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_24))->int_allocRep("SCLIB_STR_SonosRadioTileExtension_MySonos_Holidays_Title_2");

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  ((SCStr *)(local_1c))->int_allocRep("SCLIB_STR_SonosRadioTileExtension_MySonos_Holidays_Subtitle_2");


  thunk_FUN_10265c30(local_64,&local_14);

  _eh_vector_destructor_iterator_(local_64,8,10,thunk_FUN_10266f90);
  _atexit((_func_4879 *)LAB_11846250);

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 100dbcc0; body size 324 bytes.
#line 1 "ENTRY_100dbcc0"

void FUN_100dbcc0(void)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&DAT_121a6ab8))->int_allocRep("devicePermissions-bluetoothAccess");

  ((SCStr *)((SCStr *)&DAT_121a6abc))->int_allocRep("devicePermissions-bluetooth-ios");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)((SCStr *)&DAT_121a6ac0))->int_allocRep("devicePermissions-locationServices-ios");
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&DAT_121a6ac4))->int_allocRep("devicePermissions-locationAccess-ios");
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&DAT_121a6ac8))->int_allocRep("devicePermissions-microphone-ios");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)((SCStr *)&DAT_121a6acc))->int_allocRep("customerCare");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)((SCStr *)&DAT_121a6ad0))->int_allocRep("joinProduct-routerError");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&DAT_121a6ad4))->int_allocRep("authPlusAndSecureAuthentication-buttonPress");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&DAT_121a6ad8))->int_allocRep("legacyAuthentication-buttonPress");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&DAT_121a6adc))->int_allocRep("networkCredentials-networkNotFound");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&DAT_121a6ae0))->int_allocRep("productDeactivated");
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((SCStr *)((SCStr *)&DAT_121a6ae4))->int_allocRep("nfc-learnmore");
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)((SCStr *)&DAT_121a6ae8))->int_allocRep("ChirpReAuthentication-buttonPress");
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc)));
  ((SCStr *)((SCStr *)&DAT_121a6aec))->int_allocRep((char *)0x0);
  _atexit((_func_4879 *)LAB_1184e030);

  return;

 } catch (...) { }
}


// Reference entry 100e18a0; body size 152 bytes.
#line 1 "ENTRY_100e18a0"

void FUN_100e18a0(void)

{
 try {
  SCStr local_1c [4];
  SCStr local_18 [4];
  undefined1 local_14 [3];
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)(local_1c))->int_allocRep("CONSUMER");

  ((SCStr *)(local_18))->int_allocRep("BUSINESS");

  thunk_FUN_10f6ff60(local_1c,local_14,&local_11);

  _eh_vector_destructor_iterator_(local_1c,4,2,((int (SCStr::*)())&SCStr::op_dtor));
  _atexit((_func_4879 *)LAB_1185b5a0);

  return;

 } catch (...) { }
}


// Reference entry 100e4610; body size 172 bytes.
#line 1 "ENTRY_100e4610"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100e4610(undefined4 param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  thunk_FUN_11240650(DAT_12126b84 ,param_1);
  PTR_vftable_1211c1c8 = (int *)((undefined *)(uint)&ghidra_vftable_SwfObjHouseholdOAuthCB);
  _DAT_1211c1cc = (int)((uint)&ghidra_vftable_SwfObjHouseholdOAuthCB);
  _DAT_1211c1d0 = (int)((uint)&ghidra_vftable_RSonosCPFaultHandler);
  _DAT_1211c1d4 = (int)(0);
  DAT_1211c1d8 = (int)(0);
  DAT_1211c1f8 = (int)(0);
  DAT_1211c9f9 = (int)(0);
  DAT_1211d1fc = (int)(0);
  DAT_1211d215 = (int)(0);
  _DAT_1211d258 = (int)(0);
  DAT_1211d25c = (int)(0);
  _atexit((_func_4879 *)LAB_11861ea0);

  return;

 } catch (...) { }
}


// Reference entry 100e47d0; body size 3991 bytes.
#line 1 "ENTRY_100e47d0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e47d0(void)

{
 try {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x32,DAT_12126b84 ));
  *puVar4 = (undefined4)(1);
  _DAT_1211dc04 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x21);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_TRAC_119c529c + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_TRAC_119c529c + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_TRAC_119c529c + 4));
  *(undefined4*)_DAT_1211dc04 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_TRAC_119c529c + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_TRAC_119c529c + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_TRAC_119c529c + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_TRAC_119c529c + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_TRAC_119c529c + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  *(char *)(puVar4 + 0xc) = s_RHHSTR_LIBRARY_SONOS_ADDING_TRAC_119c529c[0x20];
  *(undefined1 *)((int)puVar4 + 0x31) = 0;

  DAT_1211dc08 = (int)(0);
  DAT_1211dc0c = (int)(4);
  DAT_1211dc10 = (int)(0x142);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x32));
  *puVar4 = (undefined4)(1);
  _DAT_1211dc14 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x21);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_ALBU_119c52c4 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_ALBU_119c52c4 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_ALBU_119c52c4 + 4));
  *(undefined4*)_DAT_1211dc14 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_ALBU_119c52c4 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_ALBU_119c52c4 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_ALBU_119c52c4 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_ALBU_119c52c4 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_ALBU_119c52c4 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  *(char *)(puVar4 + 0xc) = s_RHHSTR_LIBRARY_SONOS_ADDING_ALBU_119c52c4[0x20];
  *(undefined1 *)((int)puVar4 + 0x31) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  _DAT_1211dc18 = (int)(0);
  _DAT_1211dc1c = (int)(5);
  _DAT_1211dc20 = (int)(0x143);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x33));
  *puVar4 = (undefined4)(1);
  _DAT_1211dc24 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x22);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_ARTI_119c52ec + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_ARTI_119c52ec + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_ARTI_119c52ec + 4));
  *(undefined4*)_DAT_1211dc24 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_ARTI_119c52ec + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_ARTI_119c52ec + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_ARTI_119c52ec + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_ARTI_119c52ec + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_ARTI_119c52ec + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  *(undefined2 *)(puVar4 + 0xc) = *(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_ARTI_119c52ec + 32);
  *(undefined1 *)((int)puVar4 + 0x32) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  _DAT_1211dc28 = (int)(0);
  _DAT_1211dc2c = (int)(6);
  _DAT_1211dc30 = (int)(0x144);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x35));
  *puVar4 = (undefined4)(1);
  _DAT_1211dc34 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x24);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_PLAY_119c5318 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_PLAY_119c5318 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_PLAY_119c5318 + 4));
  *(undefined4*)_DAT_1211dc34 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_PLAY_119c5318 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_PLAY_119c5318 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_PLAY_119c5318 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_PLAY_119c5318 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_PLAY_119c5318 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  puVar4[0xc] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDING_PLAY_119c5318 + 32));
  *(undefined1 *)(puVar4 + 0xd) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  _DAT_1211dc38 = (int)(1);
  _DAT_1211dc3c = (int)(3);
  _DAT_1211dc40 = (int)(0x146);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x31));
  *puVar4 = (undefined4)(1);
  puVar4[3] = (undefined4)(0x20);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_TRACK_119c5344 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_TRACK_119c5344 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_TRACK_119c5344 + 4));
  _DAT_1211dc44 = (int)((char *)(puVar4 + 4));
  *(undefined4*)_DAT_1211dc44 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_TRACK_119c5344 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_TRACK_119c5344 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_TRACK_119c5344 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_TRACK_119c5344 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_TRACK_119c5344 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  *(undefined1 *)(puVar4 + 0xc) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  _DAT_1211dc48 = (int)(1);
  _DAT_1211dc4c = (int)(4);
  _DAT_1211dc50 = (int)(0x14a);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x31));
  *puVar4 = (undefined4)(1);
  puVar4[3] = (undefined4)(0x20);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_ALBUM_119c536c + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_ALBUM_119c536c + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_ALBUM_119c536c + 4));
  _DAT_1211dc54 = (int)((char *)(puVar4 + 4));
  *(undefined4*)_DAT_1211dc54 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_ALBUM_119c536c + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_ALBUM_119c536c + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_ALBUM_119c536c + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_ALBUM_119c536c + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_ALBUM_119c536c + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  *(undefined1 *)(puVar4 + 0xc) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  _DAT_1211dc58 = (int)(1);
  _DAT_1211dc5c = (int)(5);
  _DAT_1211dc60 = (int)(0x14b);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x32));
  *puVar4 = (undefined4)(1);
  _DAT_1211dc64 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x21);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_ARTIS_119c5394 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_ARTIS_119c5394 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_ARTIS_119c5394 + 4));
  *(undefined4*)_DAT_1211dc64 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_ARTIS_119c5394 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_ARTIS_119c5394 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_ARTIS_119c5394 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_ARTIS_119c5394 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_ARTIS_119c5394 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  *(char *)(puVar4 + 0xc) = s_RHHSTR_LIBRARY_SONOS_ADDED_ARTIS_119c5394[0x20];
  *(undefined1 *)((int)puVar4 + 0x31) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  _DAT_1211dc68 = (int)(1);
  _DAT_1211dc6c = (int)(6);
  _DAT_1211dc70 = (int)(0x14c);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x34));
  *puVar4 = (undefined4)(1);
  _DAT_1211dc74 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x23);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_PLAYL_119c53bc + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_PLAYL_119c53bc + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_PLAYL_119c53bc + 4));
  *(undefined4*)_DAT_1211dc74 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_PLAYL_119c53bc + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_PLAYL_119c53bc + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_PLAYL_119c53bc + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_PLAYL_119c53bc + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_PLAYL_119c53bc + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  *(undefined2 *)(puVar4 + 0xc) = *(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_ADDED_PLAYL_119c53bc + 32);
  *(char *)((int)puVar4 + 0x32) = s_RHHSTR_LIBRARY_SONOS_ADDED_PLAYL_119c53bc[0x22];
  *(undefined1 *)((int)puVar4 + 0x33) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  _DAT_1211dc78 = (int)(7);
  _DAT_1211dc7c = (int)(3);
  _DAT_1211dc80 = (int)(0x147);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x36));
  *puVar4 = (undefined4)(1);
  puVar4[3] = (undefined4)(0x25);
  puVar4[2] = (undefined4)(0);
  _DAT_1211dc84 = (int)((char *)(puVar4 + 4));
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_AUTOMIXING__119c53e8 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_AUTOMIXING__119c53e8 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_AUTOMIXING__119c53e8 + 4));
  *(undefined4*)_DAT_1211dc84 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_AUTOMIXING__119c53e8 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_AUTOMIXING__119c53e8 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_AUTOMIXING__119c53e8 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_AUTOMIXING__119c53e8 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_AUTOMIXING__119c53e8 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  puVar4[0xc] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_AUTOMIXING__119c53e8 + 32));
  *(char *)(puVar4 + 0xd) = s_RHHSTR_LIBRARY_SONOS_AUTOMIXING__119c53e8[0x24];
  *(undefined1 *)((int)puVar4 + 0x35) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  _DAT_1211dc88 = (int)(8);
  _DAT_1211dc8c = (int)(3);
  _DAT_1211dc90 = (int)(0x148);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x35));
  *puVar4 = (undefined4)(1);
  _DAT_1211dc94 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x24);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_AUTOMIXED_T_119c5418 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_AUTOMIXED_T_119c5418 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_AUTOMIXED_T_119c5418 + 4));
  *(undefined4*)_DAT_1211dc94 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_AUTOMIXED_T_119c5418 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_AUTOMIXED_T_119c5418 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_AUTOMIXED_T_119c5418 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_AUTOMIXED_T_119c5418 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_AUTOMIXED_T_119c5418 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  puVar4[0xc] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_AUTOMIXED_T_119c5418 + 32));
  *(undefined1 *)(puVar4 + 0xd) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  _DAT_1211dc98 = (int)(2);
  _DAT_1211dc9c = (int)(3);
  _DAT_1211dca0 = (int)(0x14e);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x36));
  *puVar4 = (undefined4)(1);
  _DAT_1211dca4 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x25);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5444 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5444 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5444 + 4));
  *(undefined4*)_DAT_1211dca4 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5444 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5444 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5444 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5444 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5444 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  puVar4[0xc] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5444 + 32));
  *(char *)(puVar4 + 0xd) = s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5444[0x24];
  *(undefined1 *)((int)puVar4 + 0x35) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  _DAT_1211dca8 = (int)(2);
  _DAT_1211dcac = (int)(4);
  _DAT_1211dcb0 = (int)(0x150);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x36));
  *puVar4 = (undefined4)(1);
  _DAT_1211dcb4 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x25);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5474 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5474 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5474 + 4));
  *(undefined4*)_DAT_1211dcb4 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5474 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5474 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5474 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5474 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5474 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  puVar4[0xc] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5474 + 32));
  *(char *)(puVar4 + 0xd) = s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c5474[0x24];
  *(undefined1 *)((int)puVar4 + 0x35) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  _DAT_1211dcb8 = (int)(2);
  _DAT_1211dcbc = (int)(5);
  _DAT_1211dcc0 = (int)(0x151);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x37));
  *puVar4 = (undefined4)(1);
  _DAT_1211dcc4 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x26);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54a4 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54a4 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54a4 + 4));
  *(undefined4*)_DAT_1211dcc4 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54a4 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54a4 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54a4 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54a4 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54a4 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  puVar4[0xc] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54a4 + 32));
  *(undefined2 *)(puVar4 + 0xd) = *(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54a4 + 36);
  *(undefined1 *)((int)puVar4 + 0x36) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  _DAT_1211dcc8 = (int)(2);
  _DAT_1211dccc = (int)(6);
  _DAT_1211dcd0 = (int)(0x152);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x39));
  *puVar4 = (undefined4)(1);
  puVar4[3] = (undefined4)(0x28);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54d4 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54d4 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54d4 + 4));
  _DAT_1211dcd4 = (int)((char *)(puVar4 + 4));
  *(undefined4*)_DAT_1211dcd4 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54d4 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54d4 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54d4 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54d4 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54d4 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  *(undefined8 *)(puVar4 + 0xc) = *(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_CONFREMOVE__119c54d4 + 32);
  *(undefined1 *)(puVar4 + 0xe) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  _DAT_1211dcd8 = (int)(3);
  _DAT_1211dcdc = (int)(3);
  _DAT_1211dce0 = (int)(0x154);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x34));
  *puVar4 = (undefined4)(1);
  _DAT_1211dce4 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x23);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_TR_119c5508 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_TR_119c5508 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_TR_119c5508 + 4));
  *(undefined4*)_DAT_1211dce4 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_TR_119c5508 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_TR_119c5508 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_TR_119c5508 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_TR_119c5508 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_TR_119c5508 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  *(undefined2 *)(puVar4 + 0xc) = *(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_TR_119c5508 + 32);
  *(char *)((int)puVar4 + 0x32) = s_RHHSTR_LIBRARY_SONOS_REMOVING_TR_119c5508[0x22];
  *(undefined1 *)((int)puVar4 + 0x33) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  _DAT_1211dce8 = (int)(3);
  _DAT_1211dcec = (int)(4);
  _DAT_1211dcf0 = (int)(0x156);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x34));
  *puVar4 = (undefined4)(1);
  _DAT_1211dcf4 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x23);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_AL_119c5534 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_AL_119c5534 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_AL_119c5534 + 4));
  *(undefined4*)_DAT_1211dcf4 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_AL_119c5534 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_AL_119c5534 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_AL_119c5534 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_AL_119c5534 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_AL_119c5534 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  *(undefined2 *)(puVar4 + 0xc) = *(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_AL_119c5534 + 32);
  *(char *)((int)puVar4 + 0x32) = s_RHHSTR_LIBRARY_SONOS_REMOVING_AL_119c5534[0x22];
  *(undefined1 *)((int)puVar4 + 0x33) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  _DAT_1211dcf8 = (int)(3);
  _DAT_1211dcfc = (int)(5);
  _DAT_1211dd00 = (int)(0x157);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x35));
  *puVar4 = (undefined4)(1);
  _DAT_1211dd04 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x24);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_AR_119c5560 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_AR_119c5560 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_AR_119c5560 + 4));
  *(undefined4*)_DAT_1211dd04 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_AR_119c5560 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_AR_119c5560 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_AR_119c5560 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_AR_119c5560 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_AR_119c5560 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  puVar4[0xc] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_AR_119c5560 + 32));
  *(undefined1 *)(puVar4 + 0xd) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0x10;
  _DAT_1211dd08 = (int)(3);
  _DAT_1211dd0c = (int)(6);
  _DAT_1211dd10 = (int)(0x158);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x37));
  *puVar4 = (undefined4)(1);
  _DAT_1211dd14 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x26);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_PL_119c558c + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_PL_119c558c + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_PL_119c558c + 4));
  *(undefined4*)_DAT_1211dd14 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_PL_119c558c + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_PL_119c558c + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_PL_119c558c + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_PL_119c558c + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_PL_119c558c + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  puVar4[0xc] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_PL_119c558c + 32));
  *(undefined2 *)(puVar4 + 0xd) = *(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVING_PL_119c558c + 36);
  *(undefined1 *)((int)puVar4 + 0x36) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0x11;
  _DAT_1211dd18 = (int)(4);
  _DAT_1211dd1c = (int)(3);
  _DAT_1211dd20 = (int)(0x15a);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x33));
  *puVar4 = (undefined4)(1);
  _DAT_1211dd24 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x22);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_TRA_119c55bc + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_TRA_119c55bc + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_TRA_119c55bc + 4));
  *(undefined4*)_DAT_1211dd24 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_TRA_119c55bc + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_TRA_119c55bc + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_TRA_119c55bc + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_TRA_119c55bc + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_TRA_119c55bc + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  *(undefined2 *)(puVar4 + 0xc) = *(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_TRA_119c55bc + 32);
  *(undefined1 *)((int)puVar4 + 0x32) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0x12;
  _DAT_1211dd28 = (int)(4);
  _DAT_1211dd2c = (int)(4);
  _DAT_1211dd30 = (int)(0x15c);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x33));
  *puVar4 = (undefined4)(1);
  _DAT_1211dd34 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x22);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_ALB_119c55e8 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_ALB_119c55e8 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_ALB_119c55e8 + 4));
  *(undefined4*)_DAT_1211dd34 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_ALB_119c55e8 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_ALB_119c55e8 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_ALB_119c55e8 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_ALB_119c55e8 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_ALB_119c55e8 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  *(undefined2 *)(puVar4 + 0xc) = *(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_ALB_119c55e8 + 32);
  *(undefined1 *)((int)puVar4 + 0x32) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0x13;
  _DAT_1211dd38 = (int)(4);
  _DAT_1211dd3c = (int)(5);
  _DAT_1211dd40 = (int)(0x15d);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x34));
  *puVar4 = (undefined4)(1);
  _DAT_1211dd44 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x23);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_ART_119c5614 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_ART_119c5614 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_ART_119c5614 + 4));
  *(undefined4*)_DAT_1211dd44 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_ART_119c5614 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_ART_119c5614 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_ART_119c5614 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_ART_119c5614 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_ART_119c5614 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  *(undefined2 *)(puVar4 + 0xc) = *(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_ART_119c5614 + 32);
  *(char *)((int)puVar4 + 0x32) = s_RHHSTR_LIBRARY_SONOS_REMOVED_ART_119c5614[0x22];
  *(undefined1 *)((int)puVar4 + 0x33) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0x14;
  _DAT_1211dd48 = (int)(4);
  _DAT_1211dd4c = (int)(6);
  _DAT_1211dd50 = (int)(0x15e);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x36));
  *puVar4 = (undefined4)(1);
  _DAT_1211dd54 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x25);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_PLA_119c5640 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_PLA_119c5640 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_PLA_119c5640 + 4));
  *(undefined4*)_DAT_1211dd54 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_PLA_119c5640 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_PLA_119c5640 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_PLA_119c5640 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_PLA_119c5640 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_PLA_119c5640 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  puVar4[0xc] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_SONOS_REMOVED_PLA_119c5640 + 32));
  *(char *)(puVar4 + 0xd) = s_RHHSTR_LIBRARY_SONOS_REMOVED_PLA_119c5640[0x24];
  *(undefined1 *)((int)puVar4 + 0x35) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0x15;
  _DAT_1211dd58 = (int)(5);
  _DAT_1211dd5c = (int)(3);
  _DAT_1211dd60 = (int)(0x130);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x30));
  *puVar4 = (undefined4)(1);
  _DAT_1211dd64 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x1f);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_TRACK_119c5670 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_TRACK_119c5670 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_TRACK_119c5670 + 4));
  *(undefined4*)_DAT_1211dd64 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_TRACK_119c5670 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  *(undefined8 *)(puVar4 + 8) = *(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_TRACK_119c5670 + 16);
  puVar4[10] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_TRACK_119c5670 + 24));
  *(undefined2 *)(puVar4 + 0xb) = *(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_TRACK_119c5670 + 28);
  *(char *)((int)puVar4 + 0x2e) = s_RHHSTR_LIBRARY_REMOVEFAIL_TRACK_119c5670[0x1e];
  *(undefined1 *)((int)puVar4 + 0x2f) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0x16;
  _DAT_1211dd68 = (int)(5);
  _DAT_1211dd6c = (int)(4);
  _DAT_1211dd70 = (int)(0x132);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x30));
  *puVar4 = (undefined4)(1);
  puVar4[3] = (undefined4)(0x1f);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_ALBUM_119c5698 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_ALBUM_119c5698 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_ALBUM_119c5698 + 4));
  _DAT_1211dd74 = (int)((char *)(puVar4 + 4));
  *(undefined4*)_DAT_1211dd74 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_ALBUM_119c5698 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  *(undefined8 *)(puVar4 + 8) = *(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_ALBUM_119c5698 + 16);
  puVar4[10] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_ALBUM_119c5698 + 24));
  *(undefined2 *)(puVar4 + 0xb) = *(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_ALBUM_119c5698 + 28);
  *(char *)((int)puVar4 + 0x2e) = s_RHHSTR_LIBRARY_REMOVEFAIL_ALBUM_119c5698[0x1e];
  *(undefined1 *)((int)puVar4 + 0x2f) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0x17;
  _DAT_1211dd78 = (int)(5);
  _DAT_1211dd7c = (int)(5);
  _DAT_1211dd80 = (int)(0x133);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x31));
  *puVar4 = (undefined4)(1);
  puVar4[3] = (undefined4)(0x20);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_ARTIST_119c56c0 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_ARTIST_119c56c0 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_ARTIST_119c56c0 + 4));
  _DAT_1211dd84 = (int)((char *)(puVar4 + 4));
  *(undefined4*)_DAT_1211dd84 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_ARTIST_119c56c0 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_ARTIST_119c56c0 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_ARTIST_119c56c0 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_ARTIST_119c56c0 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_ARTIST_119c56c0 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  *(undefined1 *)(puVar4 + 0xc) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0x18;
  _DAT_1211dd88 = (int)(5);
  _DAT_1211dd8c = (int)(6);
  _DAT_1211dd90 = (int)(0x134);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x33));
  *puVar4 = (undefined4)(1);
  _DAT_1211dd94 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x22);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_PLAYLI_119c56e8 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_PLAYLI_119c56e8 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_PLAYLI_119c56e8 + 4));
  *(undefined4*)_DAT_1211dd94 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_PLAYLI_119c56e8 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_PLAYLI_119c56e8 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_PLAYLI_119c56e8 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_PLAYLI_119c56e8 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_PLAYLI_119c56e8 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  *(undefined2 *)(puVar4 + 0xc) = *(uint *)((char *)&s_RHHSTR_LIBRARY_REMOVEFAIL_PLAYLI_119c56e8 + 32);
  *(undefined1 *)((int)puVar4 + 0x32) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0x19;
  _DAT_1211dd98 = (int)(6);
  _DAT_1211dd9c = (int)(3);
  _DAT_1211dda0 = (int)(0x136);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x2d));
  *puVar4 = (undefined4)(1);
  _DAT_1211dda4 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x1c);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_TRACK_119c5714 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_TRACK_119c5714 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_TRACK_119c5714 + 4));
  *(undefined4*)_DAT_1211dda4 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_TRACK_119c5714 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  *(undefined8 *)(puVar4 + 8) = *(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_TRACK_119c5714 + 16);
  puVar4[10] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_TRACK_119c5714 + 24));
  *(undefined1 *)(puVar4 + 0xb) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0x1a;
  _DAT_1211dda8 = (int)(6);
  _DAT_1211ddac = (int)(4);
  _DAT_1211ddb0 = (int)(0x13c);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x2d));
  *puVar4 = (undefined4)(1);
  puVar4[3] = (undefined4)(0x1c);
  puVar4[2] = (undefined4)(0);
  _DAT_1211ddb4 = (int)((char *)(puVar4 + 4));
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_ALBUM_119c5738 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_ALBUM_119c5738 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_ALBUM_119c5738 + 4));
  *(undefined4*)_DAT_1211ddb4 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_ALBUM_119c5738 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  *(undefined8 *)(puVar4 + 8) = *(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_ALBUM_119c5738 + 16);
  puVar4[10] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_ALBUM_119c5738 + 24));
  *(undefined1 *)(puVar4 + 0xb) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0x1b;
  _DAT_1211ddb8 = (int)(6);
  _DAT_1211ddbc = (int)(5);
  _DAT_1211ddc0 = (int)(0x13d);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x2e));
  *puVar4 = (undefined4)(1);
  _DAT_1211ddc4 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x1d);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_ARTIST_119c575c + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_ARTIST_119c575c + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_ARTIST_119c575c + 4));
  *(undefined4*)_DAT_1211ddc4 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_ARTIST_119c575c + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  *(undefined8 *)(puVar4 + 8) = *(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_ARTIST_119c575c + 16);
  puVar4[10] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_ARTIST_119c575c + 24));
  *(char *)(puVar4 + 0xb) = s_RHHSTR_LIBRARY_ADDFAIL_ARTIST_119c575c[0x1c];
  *(undefined1 *)((int)puVar4 + 0x2d) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0x1c;
  _DAT_1211ddc8 = (int)(6);
  _DAT_1211ddcc = (int)(6);
  _DAT_1211ddd0 = (int)(0x13e);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x30));
  *puVar4 = (undefined4)(1);
  _DAT_1211ddd4 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x1f);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_PLAYLIST_119c5780 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_PLAYLIST_119c5780 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_PLAYLIST_119c5780 + 4));
  *(undefined4*)_DAT_1211ddd4 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_PLAYLIST_119c5780 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  *(undefined8 *)(puVar4 + 8) = *(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_PLAYLIST_119c5780 + 16);
  puVar4[10] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_PLAYLIST_119c5780 + 24));
  *(undefined2 *)(puVar4 + 0xb) = *(uint *)((char *)&s_RHHSTR_LIBRARY_ADDFAIL_PLAYLIST_119c5780 + 28);
  *(char *)((int)puVar4 + 0x2e) = s_RHHSTR_LIBRARY_ADDFAIL_PLAYLIST_119c5780[0x1e];
  *(undefined1 *)((int)puVar4 + 0x2f) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0x1d;
  _DAT_1211ddd8 = (int)(9);
  _DAT_1211dddc = (int)(3);
  _DAT_1211dde0 = (int)(0x13a);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x31));
  *puVar4 = (undefined4)(1);
  puVar4[3] = (undefined4)(0x20);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_AUTOMIXFAIL_TRACK_119c57a8 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_AUTOMIXFAIL_TRACK_119c57a8 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_AUTOMIXFAIL_TRACK_119c57a8 + 4));
  _DAT_1211dde4 = (int)((char *)(puVar4 + 4));
  *(undefined4*)_DAT_1211dde4 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_AUTOMIXFAIL_TRACK_119c57a8 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_AUTOMIXFAIL_TRACK_119c57a8 + 28));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_AUTOMIXFAIL_TRACK_119c57a8 + 24));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_AUTOMIXFAIL_TRACK_119c57a8 + 20));
  puVar4[8] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_AUTOMIXFAIL_TRACK_119c57a8 + 16));
  puVar4[9] = (undefined4)(uVar1);
  puVar4[10] = (undefined4)(uVar2);
  puVar4[0xb] = (undefined4)(uVar3);
  *(undefined1 *)(puVar4 + 0xc) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0x1e;
  _DAT_1211dde8 = (int)(10);
  _DAT_1211ddec = (int)(3);
  _DAT_1211ddf0 = (int)(0x138);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x2d));
  *puVar4 = (undefined4)(1);
  _DAT_1211ddf4 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x1c);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_POSTING_TRACK_119c57d0 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_POSTING_TRACK_119c57d0 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_POSTING_TRACK_119c57d0 + 4));
  *(undefined4*)_DAT_1211ddf4 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_POSTING_TRACK_119c57d0 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  *(undefined8 *)(puVar4 + 8) = *(uint *)((char *)&s_RHHSTR_LIBRARY_POSTING_TRACK_119c57d0 + 16);
  puVar4[10] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_POSTING_TRACK_119c57d0 + 24));
  *(undefined1 *)(puVar4 + 0xb) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 0x1f;
  _DAT_1211ddf8 = (int)(0xb);
  _DAT_1211ddfc = (int)(3);
  _DAT_1211de00 = (int)(0x137);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x2c));
  *puVar4 = (undefined4)(1);
  _DAT_1211de04 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x1b);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_POSTED_TRACK_119c57f4 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_POSTED_TRACK_119c57f4 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_POSTED_TRACK_119c57f4 + 4));
  *(undefined4*)_DAT_1211de04 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_POSTED_TRACK_119c57f4 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  *(undefined8 *)(puVar4 + 8) = *(uint *)((char *)&s_RHHSTR_LIBRARY_POSTED_TRACK_119c57f4 + 16);
  *(undefined2 *)(puVar4 + 10) = *(uint *)((char *)&s_RHHSTR_LIBRARY_POSTED_TRACK_119c57f4 + 24);
  *(char *)((int)puVar4 + 0x2a) = s_RHHSTR_LIBRARY_POSTED_TRACK_119c57f4[0x1a];
  *(undefined1 *)((int)puVar4 + 0x2b) = 0;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x20)));
  _DAT_1211de08 = (int)(0xc);
  _DAT_1211de0c = (int)(3);
  _DAT_1211de10 = (int)(0x139);
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x2e));
  *puVar4 = (undefined4)(1);
  _DAT_1211de14 = (int)((char *)(puVar4 + 4));
  puVar4[3] = (undefined4)(0x1d);
  puVar4[2] = (undefined4)(0);
  puVar4[1] = (undefined4)(0);
  uVar3 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_POSTFAIL_TRACK_119c5818 + 12));
  uVar2 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_POSTFAIL_TRACK_119c5818 + 8));
  uVar1 = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_POSTFAIL_TRACK_119c5818 + 4));
  *(undefined4*)_DAT_1211de14 = (int)((undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_POSTFAIL_TRACK_119c5818 + 0)));
  puVar4[5] = (undefined4)(uVar1);
  puVar4[6] = (undefined4)(uVar2);
  puVar4[7] = (undefined4)(uVar3);
  *(undefined8 *)(puVar4 + 8) = *(uint *)((char *)&s_RHHSTR_LIBRARY_POSTFAIL_TRACK_119c5818 + 16);
  puVar4[10] = (undefined4)(*(uint *)((char *)&s_RHHSTR_LIBRARY_POSTFAIL_TRACK_119c5818 + 24));
  *(char *)(puVar4 + 0xb) = s_RHHSTR_LIBRARY_POSTFAIL_TRACK_119c5818[0x1c];
  *(undefined1 *)((int)puVar4 + 0x2d) = 0;
  _atexit((_func_4879 *)LAB_118620a0);

  return;

 } catch (...) { }
}


// Reference entry 100e5ed0; body size 193 bytes.
#line 1 "ENTRY_100e5ed0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e5ed0(void)

{
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  pvVar1 = (void *)(operator_new(0x18ab));
  if (pvVar1 != (void *)0x0) {
    DAT_122f33e0 = (int)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void **)(DAT_122f33e0 - 4) = pvVar1;
    *(uint*)DAT_122f33e0 = (int)((uint)(DAT_122f33e0));
    *(uint *)(DAT_122f33e0 + 4) = DAT_122f33e0;
    DAT_122f33e8 = (int)(0);
    _DAT_122f33ec = (int)(0);
    _DAT_122f33f0 = (int)(0);

    DAT_122f33f4 = (int)(7);
    _DAT_122f33f8 = (int)(8);
    _DAT_122f33dc = (int)(0x3f800000);
    thunk_FUN_111d7e60(0x10,DAT_122f33e0);
    _atexit(FUN_11862560);

    return;
  }
                    
  _invalid_parameter_noinfo_noreturn();

 } catch (...) { }
}


// Reference entry 10116600; body size 104 bytes.
#line 1 "ENTRY_10116600"

undefined4 * __thiscall Recovered_Bulk::FUN_10116600(undefined4 param_2,SCStr *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0xc));
  param_1[1] = (undefined4)(pvVar1);
  ((SCStr *)((SCStr *)((int)pvVar1 + 8)))->op_ctor(param_3);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10116710; body size 179 bytes.
#line 1 "ENTRY_10116710"

undefined4 * __thiscall Recovered_Bulk::FUN_10116710(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0xc));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(param_2[6]);
  param_1[7] = (undefined4)(param_2[7]);

  thunk_FUN_10129760((int)(param_2[4] - param_2[3]) >> 2,param_1[1]);
  thunk_FUN_10117ac0(*(undefined4 *)param_2[1],(undefined4 *)param_2[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101167f0; body size 169 bytes.
#line 1 "ENTRY_101167f0"

int * __thiscall Recovered_Bulk::FUN_101167f0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  if (param_2 != (undefined4 *)0x0) {
    local_14 = (int *)(param_1);
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIZoneGroupMgr");

    piVar4 = (int *)((int *)(**(code **)*puVar2)(&local_14,&param_2,uVar3));
    iVar1 = (int)(*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)((int *)*param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(iVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 101168d0; body size 169 bytes.
#line 1 "ENTRY_101168d0"

int * __thiscall Recovered_Bulk::FUN_101168d0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  if (param_2 != (undefined4 *)0x0) {
    local_14 = (int *)(param_1);
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCISystem");

    piVar4 = (int *)((int *)(**(code **)*puVar2)(&local_14,&param_2,uVar3));
    iVar1 = (int)(*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)((int *)*param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(iVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 101169f0; body size 169 bytes.
#line 1 "ENTRY_101169f0"

int * __thiscall Recovered_Bulk::FUN_101169f0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  if (param_2 != (undefined4 *)0x0) {
    local_14 = (int *)(param_1);
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCINowPlaying");

    piVar4 = (int *)((int *)(**(code **)*puVar2)(&local_14,&param_2,uVar3));
    iVar1 = (int)(*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)((int *)*param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(iVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10117000; body size 124 bytes.
#line 1 "ENTRY_10117000"

void __thiscall Recovered_Bulk::FUN_10117000(int *param_2,SCStr *param_3,uint param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  param_4 = (uint)(*(uint *)(param_1 + 0x18) & param_4);
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0xc) + 4 + param_4 * 8));
  if (piVar1 == *(int **)(param_1 + 4)) {
    *param_2 = (int)((int)*(int **)(param_1 + 4));
    param_2[1] = (int)(0);
    return;
  }
  piVar2 = (int *)(*(int **)(*(int *)(param_1 + 0xc) + param_4 * 8));
  bVar4 = (bool)(((SCStr *)(param_3))->op_eq((SCStr *)(piVar1 + 2)));
  while( true ) {
    if (bVar4) {
      iVar3 = (int)(*piVar1);
      param_2[1] = (int)((int)piVar1);
      *param_2 = (int)(iVar3);
      return;
    }
    if (piVar1 == (int *)(piVar2)) break;
    piVar1 = (int *)((int *)piVar1[1]);
    bVar4 = (bool)(((SCStr *)(param_3))->op_eq((SCStr *)(piVar1 + 2)));
  }
  *param_2 = (int)((int)piVar1);
  param_2[1] = (int)(0);
  return;
}


// Reference entry 10117950; body size 95 bytes.
#line 1 "ENTRY_10117950"

void FUN_10117950(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = (uint)((uint)((int)param_2 + (3 - (int)param_1)) >> 2);
  if (param_2 < param_1) {
    uVar3 = (uint)(0);
  }
  puVar2 = (undefined4 *)(param_1);
  if ((uVar3 != 0) && (3 < uVar3)) {
    uVar1 = (undefined4)(*param_3);
    if ((param_3 < param_1) || (param_1 + (uVar3 - 1) < param_3)) {
      puVar2 = (undefined4 *)(param_1 + (uVar3 & 0xfffffffc));
      for (uVar3 = (uint)(uVar3 & 0x3ffffffc); uVar3 != 0; uVar3 = uVar3 - 1) {
        *param_1 = (undefined4)(uVar1);
        param_1 = (undefined4 *)(param_1 + 1);
      }
    }
  }
  for (; puVar2 != (undefined4 *)(param_2); puVar2 = puVar2 + 1) {
    *puVar2 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10118a20; body size 164 bytes.
#line 1 "ENTRY_10118a20"

undefined4 * __thiscall Recovered_Bulk::FUN_10118a20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0xc));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_10129760(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10118c40; body size 121 bytes.
#line 1 "ENTRY_10118c40"

undefined4 * __thiscall Recovered_Bulk::FUN_10118c40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *_Dst;
  uint uVar5;
  
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  uVar1 = (uint)(param_2[4]);
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)((undefined4 *)*param_2);
  }
  if (uVar1 < 0x10) {
    uVar2 = (undefined4)(param_2[1]);
    uVar3 = (undefined4)(param_2[2]);
    uVar4 = (undefined4)(param_2[3]);
    *param_1 = (undefined4)(*param_2);
    param_1[1] = (undefined4)(uVar2);
    param_1[2] = (undefined4)(uVar3);
    param_1[3] = (undefined4)(uVar4);
    param_1[4] = (undefined4)(uVar1);
    param_1[5] = (undefined4)(0xf);
    return (undefined4 *)(param_1);
  }
  uVar5 = (uint)(uVar1 | 0xf);
  if (0x7fffffff < uVar5) {
    uVar5 = (uint)(0x7fffffff);
  }
  _Dst = (void *)((void *)thunk_FUN_1012cab0(uVar5 + 1));
  *param_1 = (undefined4)(_Dst);
  memcpy(_Dst,param_2,uVar1 + 1);
  param_1[4] = (undefined4)(uVar1);
  param_1[5] = (undefined4)(uVar5);
  return (undefined4 *)(param_1);
}


// Reference entry 10118d60; body size 179 bytes.
#line 1 "ENTRY_10118d60"

undefined4 * __thiscall Recovered_Bulk::FUN_10118d60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0xc));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(param_2[6]);
  param_1[7] = (undefined4)(param_2[7]);

  thunk_FUN_10129760((int)(param_2[4] - param_2[3]) >> 2,param_1[1]);
  thunk_FUN_10117ac0(*(undefined4 *)param_2[1],(undefined4 *)param_2[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10118e40; body size 161 bytes.
#line 1 "ENTRY_10118e40"

undefined4 * __fastcall FUN_10118e40(undefined4 *param_1)

{
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0xc));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_10129760(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10118fc0; body size 325 bytes.
#line 1 "ENTRY_10118fc0"

void __thiscall Recovered_Bulk::FUN_10118fc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  char *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar3);
  local_2c[0] = (char *)((char *)thunk_FUN_1012cab0(0x30));
  uVar2 = (undefined4)(*(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 12));
  uVar1 = (undefined4)(*(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 8));
  uVar4 = (undefined4)(*(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 4));


  *(undefined4*)local_2c[0] = (undefined4)((char *)(*(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 0)));
  *(undefined4 *)(local_2c[0] + 4) = uVar4;
  *(undefined4 *)(local_2c[0] + 8) = uVar1;
  *(undefined4 *)(local_2c[0] + 0xc) = uVar2;
  uVar2 = (undefined4)(*(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 28));
  uVar1 = (undefined4)(*(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 24));
  uVar4 = (undefined4)(*(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 20));
  *(undefined4 *)(local_2c[0] + 0x10) = *(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 16);
  *(undefined4 *)(local_2c[0] + 0x14) = uVar4;
  *(undefined4 *)(local_2c[0] + 0x18) = uVar1;
  *(undefined4 *)(local_2c[0] + 0x1c) = uVar2;
  *(undefined4 *)(local_2c[0] + 0x20) = *(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 32);
  *(undefined2 *)(local_2c[0] + 0x24) = *(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 36);
  local_2c[0][0x26] = '\0';

  uVar4 = (undefined4)(thunk_FUN_10116b10(local_44,local_2c,param_2,uVar3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  *param_1 = (undefined4)((uint)&ghidra_vftable_Swig_DirectorException);
  thunk_FUN_10118c40(uVar4);
  if (0xf < local_30) {
    uVar6 = (uint)(local_30 + 1);
    uVar3 = (uint)(local_44[0]);
    if (0xfff < uVar6) {
      uVar3 = (uint)(*(uint *)(local_44[0] - 4));
      uVar6 = (uint)(local_30 + 0x24);
      if (0x1f < (local_44[0] - uVar3) - 4) goto LAB_101190d0;
    }
    thunk_FUN_1148a50e(uVar3,uVar6);
  }


  local_44[0] = (uint)(local_44[0] & 0xffffff00);
  if (0xf < local_18) {
    uVar3 = (uint)(local_18 + 1);
    pcVar5 = (char *)(local_2c[0]);
    if (0xfff < uVar3) {
      pcVar5 = (char *)(*(char **)(local_2c[0] + -4));
      uVar3 = (uint)(local_18 + 0x24);
      if ((char *)0x1f < local_2c[0] + (-4 - (int)pcVar5)) {
LAB_101190d0:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(pcVar5,uVar3);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_Swig_DirectorPureVirtualException);

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10119e10; body size 934 bytes.
#line 1 "ENTRY_10119e10"

SCStr * __thiscall Recovered_Bulk::FUN_10119e10(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)(param_1))->op_ctor(param_2);

  ((SCStr *)(param_1 + 4))->op_ctor(param_2 + 4);
  param_1[8] = (SCStr)(param_2[8]);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)(param_1 + 0xc))->op_ctor(param_2 + 0xc);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(param_1 + 0x10))->op_ctor(param_2 + 0x10);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)(param_1 + 0x14))->op_ctor(param_2 + 0x14);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)(param_1 + 0x18))->op_ctor(param_2 + 0x18);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(param_1 + 0x1c))->op_ctor(param_2 + 0x1c);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)(param_1 + 0x20))->op_ctor(param_2 + 0x20);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(param_1 + 0x24))->op_ctor(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  piVar1 = (int *)(*(int **)(param_2 + 0x2c));
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  *(int **)(param_1 + 0x2c) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)(param_1 + 0x30))->op_ctor(param_2 + 0x30);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((SCStr *)(param_1 + 0x34))->op_ctor(param_2 + 0x34);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)(param_1 + 0x38))->op_ctor(param_2 + 0x38);
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((SCStr *)(param_1 + 0x3c))->op_ctor(param_2 + 0x3c);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  ((SCStr *)(param_1 + 0x40))->op_ctor(param_2 + 0x40);
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  ((SCStr *)(param_1 + 0x44))->op_ctor(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  ((SCStr *)(param_1 + 0x4c))->op_ctor(param_2 + 0x4c);
  param_1[0x50] = (SCStr)(param_2[0x50]);
  param_1[0x51] = (SCStr)(param_2[0x51]);
  param_1[0x52] = (SCStr)(param_2[0x52]);
  param_1[0x53] = (SCStr)(param_2[0x53]);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(unsigned char *)((char *)&local_8 + 0) = 0x10;
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  piVar1 = (int *)(*(int **)(param_2 + 0x9c));
  *(int **)(param_1 + 0x9c) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  piVar1 = (int *)(*(int **)(param_2 + 0xa4));
  *(unsigned char *)((char *)&local_8 + 0) = 0x11;
  *(int **)(param_1 + 0xa4) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(unsigned char *)((char *)&local_8 + 0) = 0x12;
  ((SCStr *)(param_1 + 0xd8))->op_ctor(param_2 + 0xd8);
  *(unsigned char *)((char *)&local_8 + 0) = 0x13;
  ((SCStr *)(param_1 + 0xdc))->op_ctor(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  param_1[0xec] = (SCStr)(param_2[0xec]);
  param_1[0xed] = (SCStr)(param_2[0xed]);
  param_1[0xee] = (SCStr)(param_2[0xee]);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  piVar1 = (int *)(*(int **)(param_2 + 0xf4));
  *(unsigned char *)((char *)&local_8 + 0) = 0x14;
  *(int **)(param_1 + 0xf4) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  piVar1 = (int *)(*(int **)(param_2 + 0xfc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x15;
  *(int **)(param_1 + 0xfc) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  piVar1 = (int *)(*(int **)(param_2 + 0x104));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x16)));
  *(int **)(param_1 + 0x104) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 1011a340; body size 197 bytes.
#line 1 "ENTRY_1011a340"

undefined4 * __thiscall Recovered_Bulk::FUN_1011a340(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  param_1[3] = (undefined4)(param_2[3]);
  param_1[4] = (undefined4)(param_2[4]);
  param_1[5] = (undefined4)(param_2[5]);
  param_1[6] = (undefined4)(param_2[6]);
  param_1[7] = (undefined4)(param_2[7]);
  param_1[8] = (undefined4)(param_2[8]);
  param_1[9] = (undefined4)(param_2[9]);
  param_1[10] = (undefined4)(param_2[10]);
  param_1[0xb] = (undefined4)(param_2[0xb]);
  piVar1 = (int *)((int *)param_2[0xc]);
  param_1[0xc] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  param_1[0xd] = (undefined4)(param_2[0xd]);
  piVar1 = (int *)((int *)param_2[0xe]);

  param_1[0xe] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  param_1[0xf] = (undefined4)(param_2[0xf]);
  param_1[0x10] = (undefined4)(param_2[0x10]);
  param_1[0x11] = (undefined4)(param_2[0x11]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1011bf90; body size 68 bytes.
#line 1 "ENTRY_1011bf90"

void __fastcall FUN_1011bf90(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1011bff0; body size 68 bytes.
#line 1 "ENTRY_1011bff0"

void __fastcall FUN_1011bff0(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1011c050; body size 68 bytes.
#line 1 "ENTRY_1011c050"

void __fastcall FUN_1011c050(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1011f5e0; body size 99 bytes.
#line 1 "ENTRY_1011f5e0"

void __fastcall FUN_1011f5e0(int param_1)

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
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  puVar4 = (undefined4 *)((undefined4 *)(param_1 + 4));
  thunk_FUN_101170a0(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0xc);
  return;
}


// Reference entry 1011f660; body size 77 bytes.
#line 1 "ENTRY_1011f660"

void __fastcall FUN_1011f660(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(*param_1);
  uVar3 = (uint)(param_1[1] - iVar1 & 0xfffffffc);
  iVar2 = (int)(iVar1);
  if (0xfff < uVar3) {
    iVar2 = (int)(*(int *)(iVar1 + -4));
    uVar3 = (uint)(uVar3 + 0x23);
    if (0x1f < (iVar1 - iVar2) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar2,uVar3);
  *param_1 = (int)(0);
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  return;
}


// Reference entry 1011f810; body size 72 bytes.
#line 1 "ENTRY_1011f810"

void __fastcall FUN_1011f810(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if (*param_1 != 0) {
    (*(code *)(uint)(DAT_121a06d4))(*param_1,DAT_12126b84 );
    *param_1 = (int)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 101203e0; body size 93 bytes.
#line 1 "ENTRY_101203e0"

void __fastcall FUN_101203e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIAbilityDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10120460; body size 93 bytes.
#line 1 "ENTRY_10120460"

void __fastcall FUN_10120460(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIActionDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101204e0; body size 93 bytes.
#line 1 "ENTRY_101204e0"

void __fastcall FUN_101204e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIActionFactorySwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10120560; body size 93 bytes.
#line 1 "ENTRY_10120560"

void __fastcall FUN_10120560(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIActionFilterSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101205e0; body size 93 bytes.
#line 1 "ENTRY_101205e0"

void __fastcall FUN_101205e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIActionSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10120660; body size 93 bytes.
#line 1 "ENTRY_10120660"

void __fastcall FUN_10120660(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIAutomationDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101206e0; body size 93 bytes.
#line 1 "ENTRY_101206e0"

void __fastcall FUN_101206e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIBTAccessoryDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10120760; body size 93 bytes.
#line 1 "ENTRY_10120760"

void __fastcall FUN_10120760(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIBTClassicConnectionCallbackSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101207e0; body size 93 bytes.
#line 1 "ENTRY_101207e0"

void __fastcall FUN_101207e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIBTClassicConnectionProviderSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10120860; body size 93 bytes.
#line 1 "ENTRY_10120860"

void __fastcall FUN_10120860(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIBleDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101208e0; body size 93 bytes.
#line 1 "ENTRY_101208e0"

void __fastcall FUN_101208e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIBlePeripheralDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10120960; body size 93 bytes.
#line 1 "ENTRY_10120960"

void __fastcall FUN_10120960(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIBrowseItemSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101209e0; body size 93 bytes.
#line 1 "ENTRY_101209e0"

void __fastcall FUN_101209e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIChirpDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10120a60; body size 93 bytes.
#line 1 "ENTRY_10120a60"

void __fastcall FUN_10120a60(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIClipboardDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10120ae0; body size 93 bytes.
#line 1 "ENTRY_10120ae0"

void __fastcall FUN_10120ae0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCICrashReportProviderSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10120b60; body size 93 bytes.
#line 1 "ENTRY_10120b60"

void __fastcall FUN_10120b60(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCICustomSubWizardSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10120be0; body size 93 bytes.
#line 1 "ENTRY_10120be0"

void __fastcall FUN_10120be0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIEventSinkSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10120c60; body size 93 bytes.
#line 1 "ENTRY_10120c60"

void __fastcall FUN_10120c60(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIExperimentManagerProviderSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10120ce0; body size 93 bytes.
#line 1 "ENTRY_10120ce0"

void __fastcall FUN_10120ce0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIGetAboutSonosStringCBSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10120d60; body size 93 bytes.
#line 1 "ENTRY_10120d60"

void __fastcall FUN_10120d60(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIGetSonosPlaylistsCBSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10120de0; body size 93 bytes.
#line 1 "ENTRY_10120de0"

void __fastcall FUN_10120de0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIHapticDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10120e60; body size 93 bytes.
#line 1 "ENTRY_10120e60"

void __fastcall FUN_10120e60(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIInAppMessagingProviderSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10120ee0; body size 93 bytes.
#line 1 "ENTRY_10120ee0"

void __fastcall FUN_10120ee0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIInAppPurchaseManagerProviderSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10120f60; body size 93 bytes.
#line 1 "ENTRY_10120f60"

void __fastcall FUN_10120f60(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCILifecycleAppProviderSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10120fe0; body size 93 bytes.
#line 1 "ENTRY_10120fe0"

void __fastcall FUN_10120fe0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCILocalMediaCollectionSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121060; body size 93 bytes.
#line 1 "ENTRY_10121060"

void __fastcall FUN_10121060(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCILocalMusicBrowseItemInfoSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101210e0; body size 93 bytes.
#line 1 "ENTRY_101210e0"

void __fastcall FUN_101210e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCILocalMusicSearchableDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121160; body size 93 bytes.
#line 1 "ENTRY_10121160"

void __fastcall FUN_10121160(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCILoggingProviderSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101211e0; body size 93 bytes.
#line 1 "ENTRY_101211e0"

void __fastcall FUN_101211e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIMdnsDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121260; body size 93 bytes.
#line 1 "ENTRY_10121260"

void __fastcall FUN_10121260(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIMusicServerBrowseDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101212e0; body size 93 bytes.
#line 1 "ENTRY_101212e0"

void __fastcall FUN_101212e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIMusicServerDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121360; body size 93 bytes.
#line 1 "ENTRY_10121360"

void __fastcall FUN_10121360(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCINetstartListenerSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101213e0; body size 93 bytes.
#line 1 "ENTRY_101213e0"

void __fastcall FUN_101213e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCINetworkManagementDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121460; body size 93 bytes.
#line 1 "ENTRY_10121460"

void __fastcall FUN_10121460(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCINewWizDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101214e0; body size 93 bytes.
#line 1 "ENTRY_101214e0"

void __fastcall FUN_101214e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCINfcDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121560; body size 93 bytes.
#line 1 "ENTRY_10121560"

void __fastcall FUN_10121560(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIOpCBSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101215e0; body size 93 bytes.
#line 1 "ENTRY_101215e0"

void __fastcall FUN_101215e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIPlatformDateTimeProvider);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIPlatformDateTimeProvider);

  return;

 } catch (...) { }
}


// Reference entry 10121660; body size 93 bytes.
#line 1 "ENTRY_10121660"

void __fastcall FUN_10121660(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCISavedDataProviderSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101216e0; body size 93 bytes.
#line 1 "ENTRY_101216e0"

void __fastcall FUN_101216e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCISecureStoreSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121760; body size 93 bytes.
#line 1 "ENTRY_10121760"

void __fastcall FUN_10121760(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCISecurityContextSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101217e0; body size 93 bytes.
#line 1 "ENTRY_101217e0"

void __fastcall FUN_101217e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIServiceAppInteropSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121860; body size 93 bytes.
#line 1 "ENTRY_10121860"

void __fastcall FUN_10121860(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIStackTraceCaptureDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101218e0; body size 93 bytes.
#line 1 "ENTRY_101218e0"

void __fastcall FUN_101218e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIStringInputSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121960; body size 93 bytes.
#line 1 "ENTRY_10121960"

void __fastcall FUN_10121960(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCITrackInfoSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101219e0; body size 93 bytes.
#line 1 "ENTRY_101219e0"

void __fastcall FUN_101219e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIUINotificationsDelegate);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIUINotificationsDelegate);

  return;

 } catch (...) { }
}


// Reference entry 10121a60; body size 93 bytes.
#line 1 "ENTRY_10121a60"

void __fastcall FUN_10121a60(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIUrbanAirshipDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121ae0; body size 93 bytes.
#line 1 "ENTRY_10121ae0"

void __fastcall FUN_10121ae0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIUrlConnectionSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121b60; body size 93 bytes.
#line 1 "ENTRY_10121b60"

void __fastcall FUN_10121b60(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIUrlSessionCallbackSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121be0; body size 93 bytes.
#line 1 "ENTRY_10121be0"

void __fastcall FUN_10121be0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIUrlSessionProviderSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121c60; body size 93 bytes.
#line 1 "ENTRY_10121c60"

void __fastcall FUN_10121c60(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIVoiceServiceDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121ce0; body size 93 bytes.
#line 1 "ENTRY_10121ce0"

void __fastcall FUN_10121ce0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIVpnDelegate);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121d60; body size 93 bytes.
#line 1 "ENTRY_10121d60"

void __fastcall FUN_10121d60(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIVpnDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121de0; body size 93 bytes.
#line 1 "ENTRY_10121de0"

void __fastcall FUN_10121de0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIWebsocketCallbackSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121e60; body size 93 bytes.
#line 1 "ENTRY_10121e60"

void __fastcall FUN_10121e60(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIWebsocketDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121ee0; body size 93 bytes.
#line 1 "ENTRY_10121ee0"

void __fastcall FUN_10121ee0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIWifiDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10121f60; body size 93 bytes.
#line 1 "ENTRY_10121f60"

void __fastcall FUN_10121f60(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibAssertionFailureCallback);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibAssertionFailureCallback);

  return;

 } catch (...) { }
}


// Reference entry 10121fe0; body size 93 bytes.
#line 1 "ENTRY_10121fe0"

void __fastcall FUN_10121fe0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibCallUIThreadCallback);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibCallUIThreadCallback);

  return;

 } catch (...) { }
}


// Reference entry 10122060; body size 93 bytes.
#line 1 "ENTRY_10122060"

void __fastcall FUN_10122060(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibCustomSubWizardCallback);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibCustomSubWizardCallback);

  return;

 } catch (...) { }
}


// Reference entry 101220e0; body size 93 bytes.
#line 1 "ENTRY_101220e0"

void __fastcall FUN_101220e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibDelegateFactory);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibDelegateFactory);

  return;

 } catch (...) { }
}


// Reference entry 10122160; body size 93 bytes.
#line 1 "ENTRY_10122160"

void __fastcall FUN_10122160(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibDiagnosticConsoleLogCallback);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibDiagnosticConsoleLogCallback);

  return;

 } catch (...) { }
}


// Reference entry 101221e0; body size 93 bytes.
#line 1 "ENTRY_101221e0"

void __fastcall FUN_101221e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibDiagnosticExtraInfoCallback);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibDiagnosticExtraInfoCallback);

  return;

 } catch (...) { }
}


// Reference entry 10122260; body size 93 bytes.
#line 1 "ENTRY_10122260"

void __fastcall FUN_10122260(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibLogCallback);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibLogCallback);

  return;

 } catch (...) { }
}


// Reference entry 101222e0; body size 93 bytes.
#line 1 "ENTRY_101222e0"

void __fastcall FUN_101222e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibPlatformStringCallback);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibPlatformStringCallback);

  return;

 } catch (...) { }
}


// Reference entry 10122360; body size 93 bytes.
#line 1 "ENTRY_10122360"

void __fastcall FUN_10122360(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibSonarCallback);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibSonarCallback);

  return;

 } catch (...) { }
}


// Reference entry 101223e0; body size 93 bytes.
#line 1 "ENTRY_101223e0"

void __fastcall FUN_101223e0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibTruncatedStringsCallback);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibTruncatedStringsCallback);

  return;

 } catch (...) { }
}


// Reference entry 10122490; body size 72 bytes.
#line 1 "ENTRY_10122490"

void __fastcall FUN_10122490(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 4));
    local_4 = (int *)(param_1);
    thunk_FUN_101170a0(piVar1,*(undefined4 *)(iVar2 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    local_4 = (int *)((int *)*piVar1);
    thunk_FUN_10117950(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),&local_4);
  }
  return;
}


// Reference entry 10124ee0; body size 65 bytes.
#line 1 "ENTRY_10124ee0"

undefined1 * __thiscall Recovered_Bulk::FUN_10124ee0(undefined1 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = (char *)("");
  if ((char *)*param_1 != (char *)0x0) {
    pcVar3 = (char *)((char *)*param_1);
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = (undefined1)(0);
  pcVar2 = (char *)(pcVar3);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130(pcVar3,(int)pcVar2 - (int)(pcVar3 + 1));
  return (undefined1 *)(param_2);
}


// Reference entry 10126ab0; body size 114 bytes.
#line 1 "ENTRY_10126ab0"

undefined4 * __thiscall Recovered_Bulk::FUN_10126ab0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIAbilityDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10126b50; body size 114 bytes.
#line 1 "ENTRY_10126b50"

undefined4 * __thiscall Recovered_Bulk::FUN_10126b50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIActionDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10126bf0; body size 114 bytes.
#line 1 "ENTRY_10126bf0"

undefined4 * __thiscall Recovered_Bulk::FUN_10126bf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIActionFactorySwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x7c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10126c90; body size 114 bytes.
#line 1 "ENTRY_10126c90"

undefined4 * __thiscall Recovered_Bulk::FUN_10126c90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIActionFilterSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10126d30; body size 114 bytes.
#line 1 "ENTRY_10126d30"

undefined4 * __thiscall Recovered_Bulk::FUN_10126d30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIActionSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10126dd0; body size 114 bytes.
#line 1 "ENTRY_10126dd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10126dd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIAutomationDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10126e70; body size 114 bytes.
#line 1 "ENTRY_10126e70"

undefined4 * __thiscall Recovered_Bulk::FUN_10126e70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIBTAccessoryDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10126f10; body size 114 bytes.
#line 1 "ENTRY_10126f10"

undefined4 * __thiscall Recovered_Bulk::FUN_10126f10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIBTClassicConnectionCallbackSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10126fb0; body size 114 bytes.
#line 1 "ENTRY_10126fb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10126fb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIBTClassicConnectionProviderSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127050; body size 114 bytes.
#line 1 "ENTRY_10127050"

undefined4 * __thiscall Recovered_Bulk::FUN_10127050(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIBleDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101270f0; body size 114 bytes.
#line 1 "ENTRY_101270f0"

undefined4 * __thiscall Recovered_Bulk::FUN_101270f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIBlePeripheralDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127190; body size 117 bytes.
#line 1 "ENTRY_10127190"

undefined4 * __thiscall Recovered_Bulk::FUN_10127190(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIBrowseItemSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127230; body size 114 bytes.
#line 1 "ENTRY_10127230"

undefined4 * __thiscall Recovered_Bulk::FUN_10127230(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIChirpDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101272d0; body size 114 bytes.
#line 1 "ENTRY_101272d0"

undefined4 * __thiscall Recovered_Bulk::FUN_101272d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIClipboardDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127370; body size 114 bytes.
#line 1 "ENTRY_10127370"

undefined4 * __thiscall Recovered_Bulk::FUN_10127370(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCICrashReportProviderSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127410; body size 114 bytes.
#line 1 "ENTRY_10127410"

undefined4 * __thiscall Recovered_Bulk::FUN_10127410(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCICustomSubWizardSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x44);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101274b0; body size 114 bytes.
#line 1 "ENTRY_101274b0"

undefined4 * __thiscall Recovered_Bulk::FUN_101274b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIEventSinkSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127550; body size 114 bytes.
#line 1 "ENTRY_10127550"

undefined4 * __thiscall Recovered_Bulk::FUN_10127550(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIExperimentManagerProviderSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101275f0; body size 114 bytes.
#line 1 "ENTRY_101275f0"

undefined4 * __thiscall Recovered_Bulk::FUN_101275f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIGetAboutSonosStringCBSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127690; body size 114 bytes.
#line 1 "ENTRY_10127690"

undefined4 * __thiscall Recovered_Bulk::FUN_10127690(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIGetSonosPlaylistsCBSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127730; body size 114 bytes.
#line 1 "ENTRY_10127730"

undefined4 * __thiscall Recovered_Bulk::FUN_10127730(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIHapticDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101277d0; body size 114 bytes.
#line 1 "ENTRY_101277d0"

undefined4 * __thiscall Recovered_Bulk::FUN_101277d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIInAppMessagingProviderSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127870; body size 114 bytes.
#line 1 "ENTRY_10127870"

undefined4 * __thiscall Recovered_Bulk::FUN_10127870(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIInAppPurchaseManagerProviderSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127910; body size 114 bytes.
#line 1 "ENTRY_10127910"

undefined4 * __thiscall Recovered_Bulk::FUN_10127910(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCILifecycleAppProviderSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101279b0; body size 114 bytes.
#line 1 "ENTRY_101279b0"

undefined4 * __thiscall Recovered_Bulk::FUN_101279b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCILocalMediaCollectionSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127a50; body size 114 bytes.
#line 1 "ENTRY_10127a50"

undefined4 * __thiscall Recovered_Bulk::FUN_10127a50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCILocalMusicBrowseItemInfoSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127af0; body size 114 bytes.
#line 1 "ENTRY_10127af0"

undefined4 * __thiscall Recovered_Bulk::FUN_10127af0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCILocalMusicSearchableDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127b90; body size 114 bytes.
#line 1 "ENTRY_10127b90"

undefined4 * __thiscall Recovered_Bulk::FUN_10127b90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCILoggingProviderSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127c30; body size 114 bytes.
#line 1 "ENTRY_10127c30"

undefined4 * __thiscall Recovered_Bulk::FUN_10127c30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIMdnsDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127cd0; body size 114 bytes.
#line 1 "ENTRY_10127cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10127cd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIMusicServerBrowseDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127d70; body size 114 bytes.
#line 1 "ENTRY_10127d70"

undefined4 * __thiscall Recovered_Bulk::FUN_10127d70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIMusicServerDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127e10; body size 114 bytes.
#line 1 "ENTRY_10127e10"

undefined4 * __thiscall Recovered_Bulk::FUN_10127e10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCINetstartListenerSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127eb0; body size 114 bytes.
#line 1 "ENTRY_10127eb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10127eb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCINetworkManagementDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127f50; body size 114 bytes.
#line 1 "ENTRY_10127f50"

undefined4 * __thiscall Recovered_Bulk::FUN_10127f50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCINewWizDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10127ff0; body size 114 bytes.
#line 1 "ENTRY_10127ff0"

undefined4 * __thiscall Recovered_Bulk::FUN_10127ff0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCINfcDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128090; body size 114 bytes.
#line 1 "ENTRY_10128090"

undefined4 * __thiscall Recovered_Bulk::FUN_10128090(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIOpCBSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128130; body size 114 bytes.
#line 1 "ENTRY_10128130"

undefined4 * __thiscall Recovered_Bulk::FUN_10128130(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIPlatformDateTimeProvider);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIPlatformDateTimeProvider);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101281d0; body size 114 bytes.
#line 1 "ENTRY_101281d0"

undefined4 * __thiscall Recovered_Bulk::FUN_101281d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCISavedDataProviderSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128270; body size 114 bytes.
#line 1 "ENTRY_10128270"

undefined4 * __thiscall Recovered_Bulk::FUN_10128270(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCISecureStoreSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128310; body size 114 bytes.
#line 1 "ENTRY_10128310"

undefined4 * __thiscall Recovered_Bulk::FUN_10128310(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCISecurityContextSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101283b0; body size 114 bytes.
#line 1 "ENTRY_101283b0"

undefined4 * __thiscall Recovered_Bulk::FUN_101283b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIServiceAppInteropSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128450; body size 114 bytes.
#line 1 "ENTRY_10128450"

undefined4 * __thiscall Recovered_Bulk::FUN_10128450(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIStackTraceCaptureDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101284f0; body size 114 bytes.
#line 1 "ENTRY_101284f0"

undefined4 * __thiscall Recovered_Bulk::FUN_101284f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIStringInputSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128590; body size 114 bytes.
#line 1 "ENTRY_10128590"

undefined4 * __thiscall Recovered_Bulk::FUN_10128590(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCITrackInfoSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128630; body size 114 bytes.
#line 1 "ENTRY_10128630"

undefined4 * __thiscall Recovered_Bulk::FUN_10128630(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIUINotificationsDelegate);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIUINotificationsDelegate);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101286d0; body size 114 bytes.
#line 1 "ENTRY_101286d0"

undefined4 * __thiscall Recovered_Bulk::FUN_101286d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIUrbanAirshipDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128770; body size 114 bytes.
#line 1 "ENTRY_10128770"

undefined4 * __thiscall Recovered_Bulk::FUN_10128770(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIUrlConnectionSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128810; body size 114 bytes.
#line 1 "ENTRY_10128810"

undefined4 * __thiscall Recovered_Bulk::FUN_10128810(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIUrlSessionCallbackSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101288b0; body size 114 bytes.
#line 1 "ENTRY_101288b0"

undefined4 * __thiscall Recovered_Bulk::FUN_101288b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIUrlSessionProviderSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128950; body size 114 bytes.
#line 1 "ENTRY_10128950"

undefined4 * __thiscall Recovered_Bulk::FUN_10128950(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIVoiceServiceDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101289f0; body size 114 bytes.
#line 1 "ENTRY_101289f0"

undefined4 * __thiscall Recovered_Bulk::FUN_101289f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIVpnDelegate);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128a90; body size 114 bytes.
#line 1 "ENTRY_10128a90"

undefined4 * __thiscall Recovered_Bulk::FUN_10128a90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIVpnDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128b30; body size 114 bytes.
#line 1 "ENTRY_10128b30"

undefined4 * __thiscall Recovered_Bulk::FUN_10128b30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIWebsocketCallbackSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128bd0; body size 114 bytes.
#line 1 "ENTRY_10128bd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10128bd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIWebsocketDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128c70; body size 114 bytes.
#line 1 "ENTRY_10128c70"

undefined4 * __thiscall Recovered_Bulk::FUN_10128c70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIWifiDelegateSwigBase);

  if (param_1[2] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[2],uVar1);
    param_1[2] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128d10; body size 114 bytes.
#line 1 "ENTRY_10128d10"

undefined4 * __thiscall Recovered_Bulk::FUN_10128d10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibAssertionFailureCallback);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibAssertionFailureCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128db0; body size 114 bytes.
#line 1 "ENTRY_10128db0"

undefined4 * __thiscall Recovered_Bulk::FUN_10128db0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibCallUIThreadCallback);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibCallUIThreadCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128e50; body size 114 bytes.
#line 1 "ENTRY_10128e50"

undefined4 * __thiscall Recovered_Bulk::FUN_10128e50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibCustomSubWizardCallback);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibCustomSubWizardCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128ef0; body size 114 bytes.
#line 1 "ENTRY_10128ef0"

undefined4 * __thiscall Recovered_Bulk::FUN_10128ef0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibDelegateFactory);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibDelegateFactory);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10128f90; body size 114 bytes.
#line 1 "ENTRY_10128f90"

undefined4 * __thiscall Recovered_Bulk::FUN_10128f90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibDiagnosticConsoleLogCallback);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibDiagnosticConsoleLogCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10129030; body size 114 bytes.
#line 1 "ENTRY_10129030"

undefined4 * __thiscall Recovered_Bulk::FUN_10129030(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibDiagnosticExtraInfoCallback);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibDiagnosticExtraInfoCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101290d0; body size 114 bytes.
#line 1 "ENTRY_101290d0"

undefined4 * __thiscall Recovered_Bulk::FUN_101290d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibLogCallback);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibLogCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10129170; body size 114 bytes.
#line 1 "ENTRY_10129170"

undefined4 * __thiscall Recovered_Bulk::FUN_10129170(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibPlatformStringCallback);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibPlatformStringCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10129210; body size 114 bytes.
#line 1 "ENTRY_10129210"

undefined4 * __thiscall Recovered_Bulk::FUN_10129210(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibSonarCallback);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibSonarCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x5c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101292b0; body size 114 bytes.
#line 1 "ENTRY_101292b0"

undefined4 * __thiscall Recovered_Bulk::FUN_101292b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibTruncatedStringsCallback);

  if (param_1[1] != 0) {
    (*(code *)(uint)(DAT_121a06d4))(param_1[1],uVar1);
    param_1[1] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibTruncatedStringsCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10129550; body size 245 bytes.
#line 1 "ENTRY_10129550"

void __thiscall Recovered_Bulk::FUN_10129550(undefined4 *param_2,undefined4 param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 8) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 8))(uVar2,param_3,uVar3);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibLogCallback::LogDebugMessage");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10129760; body size 228 bytes.
#line 1 "ENTRY_10129760"

void __thiscall Recovered_Bulk::FUN_10129760(uint param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  uVar5 = (uint)(param_1[1] - *param_1 >> 2);
  if (param_2 <= uVar5) {
    thunk_FUN_10117950(*param_1,param_1[1],&param_3);
    return;
  }
  if (0x3fffffff < param_2) {
LAB_1012983f:
                    
    thunk_FUN_1012a2a0();
  }
  uVar7 = (uint)(param_2 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      puVar6 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      puVar6 = (undefined4 *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_1012983f;
    pvVar3 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar3 == (void *)0x0) goto LAB_10129824;
    puVar6 = (undefined4 *)((undefined4 *)((int)pvVar3 + 0x23U & 0xffffffe0));
    puVar6[-1] = (undefined4)(pvVar3);
  }
  if (uVar5 != 0) {
    iVar2 = (int)(*param_1);
    uVar5 = (uint)(uVar5 * 4);
    iVar4 = (int)(iVar2);
    if (0xfff < uVar5) {
      iVar4 = (int)(*(int *)(iVar2 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_10129824:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar5);
  }
  puVar1 = (undefined4 *)(puVar6 + param_2);
  *param_1 = (int)((int)puVar6);
  param_1[1] = (int)((int)puVar1);
  param_1[2] = (int)((int)puVar1);
  for (; (undefined4 *)(puVar6) != puVar1; puVar6 = puVar6 + 1) {
    *puVar6 = (undefined4)(param_3);
  }
  return;
}


// Reference entry 10129a20; body size 136 bytes.
#line 1 "ENTRY_10129a20"

float __thiscall Recovered_Bulk::FUN_10129a20(int param_2)
{
  float *param_1 = (float *)this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)(param_1[7]);
  ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) / *param_1));
  fVar2 = (float)((float)thunk_FUN_1148ac80());
  fVar3 = (float)(1.12104e-44);
  if (8 < (uint)fVar2) {
    fVar3 = (float)(fVar2);
  }
  if ((uint)fVar3 <= (uint)fVar1) {
    return (float)(fVar1);
  }
  if ((0x1ff < (uint)fVar1) ||
     (fVar2 = (float)((int)fVar1 * 8), (uint)((int)fVar1 * 8) < (uint)fVar3)) {
    fVar2 = (float)(fVar3);
  }
  return (float)(fVar2);
}


// Reference entry 10129ef0; body size 87 bytes.
#line 1 "ENTRY_10129ef0"

void __thiscall Recovered_Bulk::FUN_10129ef0(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 1012a080; body size 133 bytes.
#line 1 "ENTRY_1012a080"

void __fastcall FUN_1012a080(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10129af0();
  return;
}


// Reference entry 1012a2d0; body size 77 bytes.
#line 1 "ENTRY_1012a2d0"

void __fastcall FUN_1012a2d0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(*param_1);
  uVar3 = (uint)(param_1[1] - iVar1 & 0xfffffffc);
  iVar2 = (int)(iVar1);
  if (0xfff < uVar3) {
    iVar2 = (int)(*(int *)(iVar1 + -4));
    uVar3 = (uint)(uVar3 + 0x23);
    if (0x1f < (iVar1 - iVar2) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar2,uVar3);
  *param_1 = (int)(0);
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  return;
}


// Reference entry 1012a4d0; body size 77 bytes.
#line 1 "ENTRY_1012a4d0"

void __thiscall Recovered_Bulk::FUN_1012a4d0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIOpCBSwigBase::_operationComplete");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012a540; body size 99 bytes.
#line 1 "ENTRY_1012a540"

void __thiscall Recovered_Bulk::FUN_1012a540(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0xc));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0xc));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFilterSwigBase::acceptsAction");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012a5c0; body size 111 bytes.
#line 1 "ENTRY_1012a5c0"

void __thiscall Recovered_Bulk::FUN_1012a5c0(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(int *)(param_1 + 0xc) != 0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
    }
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    (**(code **)(param_1 + 0xc))(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIUrbanAirshipDelegateSwigBase::addAndRemoveClientTags");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012a650; body size 94 bytes.
#line 1 "ENTRY_1012a650"

void __thiscall Recovered_Bulk::FUN_1012a650(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x10));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x10));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIUrbanAirshipDelegateSwigBase::addClientTags");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012b750; body size 242 bytes.
#line 1 "ENTRY_1012b750"

void __thiscall Recovered_Bulk::FUN_1012b750(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x18))(uVar2,uVar3);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIInAppMessagingProviderSwigBase::addTagToGroup");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012cab0; body size 77 bytes.
#line 1 "ENTRY_1012cab0"

void * FUN_1012cab0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x1000) {
    if (param_1 != 0) {
      pvVar1 = (void *)(operator_new(param_1));
      return (void *)(pvVar1);
    }
    return (void *)((void *)0x0);
  }
  if (param_1 < param_1 + 0x23) {
    pvVar1 = (void *)(operator_new(param_1 + 0x23));
    if (pvVar1 != (void *)0x0) {
      pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
      *(void **)((int)pvVar2 - 4) = pvVar1;
      return (void *)(pvVar2);
    }
                    
    _invalid_parameter_noinfo_noreturn();
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 1012cfb0; body size 245 bytes.
#line 1 "ENTRY_1012cfb0"

void __thiscall Recovered_Bulk::FUN_1012cfb0(undefined4 *param_2,undefined4 param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 8) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 8))(uVar2,param_3,uVar3);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibAssertionFailureCallback::assertionFailed");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012d250; body size 111 bytes.
#line 1 "ENTRY_1012d250"

void __thiscall Recovered_Bulk::FUN_1012d250(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(int *)(param_1 + 0xc) != 0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
    }
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    (**(code **)(param_1 + 0xc))(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionDelegateSwigBase::asyncActionHasCompleted");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d310; body size 67 bytes.
#line 1 "ENTRY_1012d310"

void __fastcall FUN_1012d310(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibCallUIThreadCallback::callSCLibOnUIThread");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d370; body size 72 bytes.
#line 1 "ENTRY_1012d370"

void __fastcall FUN_1012d370(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::canActOn");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d3d0; body size 72 bytes.
#line 1 "ENTRY_1012d3d0"

void __fastcall FUN_1012d3d0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCICustomSubWizardSwigBase::canClientCancelWizard");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d430; body size 72 bytes.
#line 1 "ENTRY_1012d430"

void __fastcall FUN_1012d430(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCICustomSubWizardSwigBase::canClientTransitionToNextState");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d490; body size 72 bytes.
#line 1 "ENTRY_1012d490"

void __fastcall FUN_1012d490(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCICustomSubWizardSwigBase::canClientTransitionToPreviousState");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d4f0; body size 72 bytes.
#line 1 "ENTRY_1012d4f0"

void __fastcall FUN_1012d4f0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
    (**(code **)(param_1 + 0x44))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWifiDelegateSwigBase::canConfigureAccessories");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d550; body size 78 bytes.
#line 1 "ENTRY_1012d550"

void __thiscall Recovered_Bulk::FUN_1012d550(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIVoiceServiceDelegateSwigBase::canDeviceSetupVoice");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d5c0; body size 78 bytes.
#line 1 "ENTRY_1012d5c0"

void __thiscall Recovered_Bulk::FUN_1012d5c0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIAbilityDelegateSwigBase::canEnablePrereq");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d630; body size 72 bytes.
#line 1 "ENTRY_1012d630"

void __fastcall FUN_1012d630(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    (**(code **)(param_1 + 0x50))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibSonarCallback::canHardwareGainBeSet");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d690; body size 72 bytes.
#line 1 "ENTRY_1012d690"

void __fastcall FUN_1012d690(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWifiDelegateSwigBase::canJoinSSIDs");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d6f0; body size 72 bytes.
#line 1 "ENTRY_1012d6f0"

void __fastcall FUN_1012d6f0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIInAppPurchaseManagerProviderSwigBase::canMakePurchases");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d750; body size 72 bytes.
#line 1 "ENTRY_1012d750"

void __fastcall FUN_1012d750(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIVpnDelegate::canOpenVPNSettings");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d7b0; body size 72 bytes.
#line 1 "ENTRY_1012d7b0"

void __fastcall FUN_1012d7b0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIVpnDelegateSwigBase::canOpenVPNSettings");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d810; body size 72 bytes.
#line 1 "ENTRY_1012d810"

void __fastcall FUN_1012d810(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::canPush");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d870; body size 78 bytes.
#line 1 "ENTRY_1012d870"

void __thiscall Recovered_Bulk::FUN_1012d870(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIAbilityDelegateSwigBase::canRequestPrereq");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d8e0; body size 72 bytes.
#line 1 "ENTRY_1012d8e0"

void __fastcall FUN_1012d8e0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWifiDelegateSwigBase::canStartScan");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d940; body size 78 bytes.
#line 1 "ENTRY_1012d940"

void __thiscall Recovered_Bulk::FUN_1012d940(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIAbilityDelegateSwigBase::canSuggestPrereq");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d9b0; body size 94 bytes.
#line 1 "ENTRY_1012d9b0"

void __thiscall Recovered_Bulk::FUN_1012d9b0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x10));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x10));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIUrlSessionProviderSwigBase::cancelURLConnection");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012da30; body size 67 bytes.
#line 1 "ENTRY_1012da30"

void __fastcall FUN_1012da30(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibSonarCallback::cleanupRecording");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012db20; body size 67 bytes.
#line 1 "ENTRY_1012db20"

void __fastcall FUN_1012db20(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIUrlSessionProviderSwigBase::clearCache");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012db80; body size 67 bytes.
#line 1 "ENTRY_1012db80"

void __fastcall FUN_1012db80(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBleDelegateSwigBase::clearPacketQueue");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012dbe0; body size 67 bytes.
#line 1 "ENTRY_1012dbe0"

void __fastcall FUN_1012dbe0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibTruncatedStringsCallback::clearTruncatedStrings");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012dc40; body size 111 bytes.
#line 1 "ENTRY_1012dc40"

void __thiscall Recovered_Bulk::FUN_1012dc40(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(int *)(param_1 + 0xc) != 0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
    }
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    (**(code **)(param_1 + 0xc))(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWebsocketDelegateSwigBase::connect");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012dcd0; body size 67 bytes.
#line 1 "ENTRY_1012dcd0"

void __fastcall FUN_1012dcd0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBTClassicConnectionCallbackSwigBase::connectedToDevice");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012ddd0; body size 257 bytes.
#line 1 "ENTRY_1012ddd0"

void __thiscall Recovered_Bulk::FUN_1012ddd0(undefined4 *param_2,int *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  if (*(int *)(param_1 + 0x2c) != 0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(local_14);
    }
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar1 = (undefined4)(thunk_FUN_101a2160());
    piVar2 = (int *)((int *)(**(code **)(param_1 + 0x2c))(param_3,uVar1));
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createBrowsePickerAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012df20; body size 228 bytes.
#line 1 "ENTRY_1012df20"

void __thiscall Recovered_Bulk::FUN_1012df20(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar3 = (int *)((int *)(**(code **)(param_1 + 0xc))(uVar2));
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibCustomSubWizardCallback::createCustomSubWizard");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012e040; body size 311 bytes.
#line 1 "ENTRY_1012e040"

void __thiscall Recovered_Bulk::FUN_1012e040(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x5c) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar4 = (int *)((int *)(**(code **)(param_1 + 0x5c))(uVar2,uVar3));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createCustomUIAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012e1d0; body size 177 bytes.
#line 1 "ENTRY_1012e1d0"

void __thiscall Recovered_Bulk::FUN_1012e1d0(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  code *pcVar1;
  int *piVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);
  pcVar1 = (code *)(*(code **)(param_1 + 0x28));

  if (pcVar1 != (code *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(local_14);
      pcVar1 = (code *)(*(code **)(param_1 + 0x28));
    }
    piVar2 = (int *)((int *)(*pcVar1)(param_3));
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createDisplayBrowseStackAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012e2b0; body size 156 bytes.
#line 1 "ENTRY_1012e2b0"

void __thiscall Recovered_Bulk::FUN_1012e2b0(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x50))(param_3,local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createDisplayCustomControlAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012e380; body size 337 bytes.
#line 1 "ENTRY_1012e380"

void __thiscall Recovered_Bulk::FUN_1012e380(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  void *local_840;
  undefined1 *puStack_83c;
  undefined4 local_838;
  undefined1 local_834 [2064];
  undefined1 local_24 [28];
  uint local_8;

  uVar1 = (uint)(DAT_12126b84 ^ (uint)local_834);

  *param_2 = (undefined4)(0);

  local_8 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x54) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_838 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_838 + 1)) << 8 | (uint)(2)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    if (param_5 != (int *)0x0) {
      (**(code **)(*param_5 + 4))();
    }
    piVar4 = (int *)((int *)(**(code **)(param_1 + 0x54))(uVar2,uVar3,param_5));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createDisplayDatePickerAction");
                    
  _CxxThrowException(local_24,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012e530; body size 638 bytes.
#line 1 "ENTRY_1012e530"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall Recovered_Bulk::FUN_1012e530(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,int *param_7,undefined4 *param_8,
            undefined4 *param_9,int *param_10)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined1 *puVar9;
  void *local_1860;
  undefined1 *puStack_185c;
  undefined4 local_1858;
  undefined1 local_1854 [6192];
  undefined1 local_24 [28];
  uint local_8;

  uVar1 = (uint)(DAT_12126b84 ^ (uint)local_1854);

  *param_2 = (undefined4)(0);

  local_8 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x44) != 0) {
    puVar9 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar9);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar9 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar9);
    *(unsigned char *)((char *)&local_1858 + 0) = 2;
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar9 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_5 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)((undefined1 *)*param_5);
    }
    thunk_FUN_101a1ea0(puVar9);
    *(unsigned char *)((char *)&local_1858 + 0) = 3;
    uVar4 = (undefined4)(thunk_FUN_101a2160());
    puVar9 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_6 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)((undefined1 *)*param_6);
    }
    thunk_FUN_101a1ea0(puVar9);
    local_1858 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_1858 + 1)) << 8 | (uint)(4)));
    uVar5 = (undefined4)(thunk_FUN_101a2160());
    if (param_7 != (int *)0x0) {
      (**(code **)(*param_7 + 4))();
    }
    puVar9 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_8 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)((undefined1 *)*param_8);
    }
    thunk_FUN_101a1ea0(puVar9);
    *(unsigned char *)((char *)&local_1858 + 0) = 5;
    uVar6 = (undefined4)(thunk_FUN_101a2160());
    puVar9 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_9 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)((undefined1 *)*param_9);
    }
    thunk_FUN_101a1ea0(puVar9);
    local_1858 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_1858 + 1)) << 8 | (uint)(6)));
    uVar7 = (undefined4)(thunk_FUN_101a2160());
    if (param_10 != (int *)0x0) {
      (**(code **)(*param_10 + 4))();
    }
    piVar8 = (int *)((int *)(**(code **)(param_1 + 0x44))
                              (uVar2,uVar3,uVar4,uVar5,param_7,uVar6,uVar7,param_10));
    *param_2 = (undefined4)(piVar8);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createDisplayDualTextInputAction");
                    
  _CxxThrowException(local_24,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012e850; body size 228 bytes.
#line 1 "ENTRY_1012e850"

void __thiscall Recovered_Bulk::FUN_1012e850(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x74) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar3 = (int *)((int *)(**(code **)(param_1 + 0x74))(uVar2));
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createDisplayHelpSheetAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012e970; body size 311 bytes.
#line 1 "ENTRY_1012e970"

void __thiscall Recovered_Bulk::FUN_1012e970(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x24) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar4 = (int *)((int *)(**(code **)(param_1 + 0x24))(uVar2,uVar3));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createDisplayInfoViewAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012eb00; body size 383 bytes.
#line 1 "ENTRY_1012eb00"

void __thiscall Recovered_Bulk::FUN_1012eb00(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x48) != 0) {
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar6);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar6);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_5 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)((undefined1 *)*param_5);
    }
    thunk_FUN_101a1ea0(puVar6);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    uVar4 = (undefined4)(thunk_FUN_101a2160());
    piVar5 = (int *)((int *)(**(code **)(param_1 + 0x48))(uVar2,uVar3,uVar4,param_6,param_7,param_8));
    *param_2 = (undefined4)(piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createDisplayIntegerInputAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012ece0; body size 502 bytes.
#line 1 "ENTRY_1012ece0"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall Recovered_Bulk::FUN_1012ece0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,int *param_7,int *param_8,undefined4 param_9)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 *puVar7;
  void *local_1050;
  undefined1 *puStack_104c;
  undefined4 local_1048;
  undefined1 local_1044 [4128];
  undefined1 local_24 [28];
  uint local_8;

  uVar1 = (uint)(DAT_12126b84 ^ (uint)local_1044);

  *param_2 = (undefined4)(0);

  local_8 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar7);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar7);
    *(unsigned char *)((char *)&local_1048 + 0) = 2;
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_5 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((undefined1 *)*param_5);
    }
    thunk_FUN_101a1ea0(puVar7);
    *(unsigned char *)((char *)&local_1048 + 0) = 3;
    uVar4 = (undefined4)(thunk_FUN_101a2160());
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_6 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((undefined1 *)*param_6);
    }
    thunk_FUN_101a1ea0(puVar7);
    local_1048 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_1048 + 1)) << 8 | (uint)(4)));
    uVar5 = (undefined4)(thunk_FUN_101a2160());
    if (param_7 != (int *)0x0) {
      (**(code **)(*param_7 + 4))();
    }
    if (param_8 != (int *)0x0) {
      (**(code **)(*param_8 + 4))();
    }
    piVar6 = (int *)((int *)(**(code **)(param_1 + 0x38))(uVar2,uVar3,uVar4,uVar5,param_7,param_8,param_9));
    *param_2 = (undefined4)(piVar6);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createDisplayMenuAction");
                    
  _CxxThrowException(local_24,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012ef60; body size 521 bytes.
#line 1 "ENTRY_1012ef60"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall Recovered_Bulk::FUN_1012ef60(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined1 param_6,int *param_7,undefined4 param_8,int *param_9,
            undefined4 param_10,undefined4 *param_11)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 *puVar7;
  void *local_1050;
  undefined1 *puStack_104c;
  undefined4 local_1048;
  undefined1 local_1044 [4128];
  undefined1 local_24 [28];
  uint local_8;

  uVar1 = (uint)(DAT_12126b84 ^ (uint)local_1044);

  *param_2 = (undefined4)(0);

  local_8 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x3c) != 0) {
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar7);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar7);
    *(unsigned char *)((char *)&local_1048 + 0) = 2;
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_5 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((undefined1 *)*param_5);
    }
    thunk_FUN_101a1ea0(puVar7);
    local_1048 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_1048 + 1)) << 8 | (uint)(3)));
    uVar4 = (undefined4)(thunk_FUN_101a2160());
    if (param_7 != (int *)0x0) {
      (**(code **)(*param_7 + 4))();
    }
    if (param_9 != (int *)0x0) {
      (**(code **)(*param_9 + 4))();
    }
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_11 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((undefined1 *)*param_11);
    }
    thunk_FUN_101a1ea0(puVar7);
    local_1048 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_1048 + 1)) << 8 | (uint)(4)));
    uVar5 = (undefined4)(thunk_FUN_101a2160());
    piVar6 = (int *)((int *)(**(code **)(param_1 + 0x3c))
                              (uVar2,uVar3,uVar4,param_6,param_7,param_8,param_9,param_10,uVar5));
    *param_2 = (undefined4)(piVar6);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createDisplayMenuAndTextInputAction");
                    
  _CxxThrowException(local_24,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012f1f0; body size 347 bytes.
#line 1 "ENTRY_1012f1f0"

void __thiscall Recovered_Bulk::FUN_1012f1f0(undefined4 *param_2,undefined4 *param_3,int *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 *param_8,undefined1 param_9,
            undefined1 param_10)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 4))();
    }
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_8 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_8);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar4 = (int *)((int *)(**(code **)(param_1 + 0x18))
                              (uVar2,param_4,param_5,param_6,param_7,uVar3,param_9,param_10));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createDisplayMenuPopupAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012f3b0; body size 231 bytes.
#line 1 "ENTRY_1012f3b0"

void __thiscall Recovered_Bulk::FUN_1012f3b0(undefined4 *param_2,undefined4 *param_3,undefined4 param_4)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar3 = (int *)((int *)(**(code **)(param_1 + 0x1c))(uVar2,param_4));
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createDisplayMessagePopupAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012f4e0; body size 402 bytes.
#line 1 "ENTRY_1012f4e0"

void __thiscall Recovered_Bulk::FUN_1012f4e0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,int *param_6)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 *puVar6;
  void *local_c48;
  undefined1 *puStack_c44;
  undefined4 local_c40;
  undefined1 local_c3c [3096];
  undefined1 local_24 [28];
  uint local_8;

  uVar1 = (uint)(DAT_12126b84 ^ (uint)local_c3c);

  *param_2 = (undefined4)(0);

  local_8 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x40) != 0) {
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar6);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar6);
    *(unsigned char *)((char *)&local_c40 + 0) = 2;
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_5 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)((undefined1 *)*param_5);
    }
    thunk_FUN_101a1ea0(puVar6);
    local_c40 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_c40 + 1)) << 8 | (uint)(3)));
    uVar4 = (undefined4)(thunk_FUN_101a2160());
    if (param_6 != (int *)0x0) {
      (**(code **)(*param_6 + 4))();
    }
    piVar5 = (int *)((int *)(**(code **)(param_1 + 0x40))(uVar2,uVar3,uVar4,param_6));
    *param_2 = (undefined4)(piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createDisplayTextInputAction");
                    
  _CxxThrowException(local_24,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012f6e0; body size 337 bytes.
#line 1 "ENTRY_1012f6e0"

void __thiscall Recovered_Bulk::FUN_1012f6e0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  void *local_840;
  undefined1 *puStack_83c;
  undefined4 local_838;
  undefined1 local_834 [2064];
  undefined1 local_24 [28];
  uint local_8;

  uVar1 = (uint)(DAT_12126b84 ^ (uint)local_834);

  *param_2 = (undefined4)(0);

  local_8 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x4c) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_838 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_838 + 1)) << 8 | (uint)(2)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    if (param_5 != (int *)0x0) {
      (**(code **)(*param_5 + 4))();
    }
    piVar4 = (int *)((int *)(**(code **)(param_1 + 0x4c))(uVar2,uVar3,param_5));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createDisplayTextPaneAction");
                    
  _CxxThrowException(local_24,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012f890; body size 337 bytes.
#line 1 "ENTRY_1012f890"

void __thiscall Recovered_Bulk::FUN_1012f890(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  void *local_840;
  undefined1 *puStack_83c;
  undefined4 local_838;
  undefined1 local_834 [2064];
  undefined1 local_24 [28];
  uint local_8;

  uVar1 = (uint)(DAT_12126b84 ^ (uint)local_834);

  *param_2 = (undefined4)(0);

  local_8 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x58) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_838 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_838 + 1)) << 8 | (uint)(2)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    if (param_5 != (int *)0x0) {
      (**(code **)(*param_5 + 4))();
    }
    piVar4 = (int *)((int *)(**(code **)(param_1 + 0x58))(uVar2,uVar3,param_5));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createDisplayTimePickerAction");
                    
  _CxxThrowException(local_24,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012fa40; body size 177 bytes.
#line 1 "ENTRY_1012fa40"

void __thiscall Recovered_Bulk::FUN_1012fa40(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  code *pcVar1;
  int *piVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);
  pcVar1 = (code *)(*(code **)(param_1 + 0x34));

  if (pcVar1 != (code *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(local_14);
      pcVar1 = (code *)(*(code **)(param_1 + 0x34));
    }
    piVar2 = (int *)((int *)(*pcVar1)(param_3));
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createDisplayWizardAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012fb20; body size 311 bytes.
#line 1 "ENTRY_1012fb20"

void __thiscall Recovered_Bulk::FUN_1012fb20(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x70) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar4 = (int *)((int *)(**(code **)(param_1 + 0x70))(uVar2,uVar3));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createInlineControllerUpdateAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012fcb0; body size 228 bytes.
#line 1 "ENTRY_1012fcb0"

void __thiscall Recovered_Bulk::FUN_1012fcb0(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x78) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar3 = (int *)((int *)(**(code **)(param_1 + 0x78))(uVar2));
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createModalSettingsMenuAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012fdd0; body size 180 bytes.
#line 1 "ENTRY_1012fdd0"

void __thiscall Recovered_Bulk::FUN_1012fdd0(undefined4 *param_2,undefined4 param_3,int *param_4)
{
  int param_1 = (int )this;
 try {
  code *pcVar1;
  int *piVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);
  pcVar1 = (code *)(*(code **)(param_1 + 0xc));

  if (pcVar1 != (code *)0x0) {
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 4))(local_14);
      pcVar1 = (code *)(*(code **)(param_1 + 0xc));
    }
    piVar2 = (int *)((int *)(*pcVar1)(param_3,param_4));
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createNavigationAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1012fec0; body size 311 bytes.
#line 1 "ENTRY_1012fec0"

void __thiscall Recovered_Bulk::FUN_1012fec0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x6c) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar4 = (int *)((int *)(**(code **)(param_1 + 0x6c))(uVar2,uVar3));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createOpenURIAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10130050; body size 156 bytes.
#line 1 "ENTRY_10130050"

void __thiscall Recovered_Bulk::FUN_10130050(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  if (*(code **)(param_1 + 0x68) != (code *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x68))(param_3,local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createPopBrowseAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10130120; body size 159 bytes.
#line 1 "ENTRY_10130120"

void __thiscall Recovered_Bulk::FUN_10130120(undefined4 *param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  if (*(code **)(param_1 + 100) != (code *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(param_1 + 100))(param_3,param_4,local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createPresentAlarmInterfaceAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101301f0; body size 318 bytes.
#line 1 "ENTRY_101301f0"

void __thiscall Recovered_Bulk::FUN_101301f0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined1 param_5)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar4 = (int *)((int *)(**(code **)(param_1 + 0x20))(uVar2,uVar3,param_5));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createPushSCUriAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10130380; body size 177 bytes.
#line 1 "ENTRY_10130380"

void __thiscall Recovered_Bulk::FUN_10130380(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  code *pcVar1;
  int *piVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);
  pcVar1 = (code *)(*(code **)(param_1 + 0x10));

  if (pcVar1 != (code *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(local_14);
      pcVar1 = (code *)(*(code **)(param_1 + 0x10));
    }
    piVar2 = (int *)((int *)(*pcVar1)(param_3));
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createRunAsyncIOOperationAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10130460; body size 259 bytes.
#line 1 "ENTRY_10130460"

void __thiscall Recovered_Bulk::FUN_10130460(undefined4 *param_2,int *param_3,undefined1 *param_4)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);
  if (*(int *)(param_1 + 0x14) != 0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(local_14);
    }
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_4 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_4);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar1 = (undefined4)(thunk_FUN_101a2160());
    piVar2 = (int *)((int *)(**(code **)(param_1 + 0x14))(param_3,uVar1));
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    thunk_FUN_101a2000();

    ((SCStr *)((SCStr *)&param_4))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createRunAsyncIOOperationActionWithMessage");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101305b0; body size 241 bytes.
#line 1 "ENTRY_101305b0"

void __thiscall Recovered_Bulk::FUN_101305b0(undefined4 *param_2,undefined1 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x60) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar4);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar3 = (int *)((int *)(**(code **)(param_1 + 0x60))(param_3,uVar2,param_5,param_6));
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createScheduleAlarmMonitorAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101306e0; body size 177 bytes.
#line 1 "ENTRY_101306e0"

void __thiscall Recovered_Bulk::FUN_101306e0(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  code *pcVar1;
  int *piVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);
  pcVar1 = (code *)(*(code **)(param_1 + 0x30));

  if (pcVar1 != (code *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(local_14);
      pcVar1 = (code *)(*(code **)(param_1 + 0x30));
    }
    piVar2 = (int *)((int *)(*pcVar1)(param_3));
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionFactorySwigBase::createSummonNewWizAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10130900; body size 67 bytes.
#line 1 "ENTRY_10130900"

void __fastcall FUN_10130900(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWebsocketDelegateSwigBase::destroy");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10131230; body size 67 bytes.
#line 1 "ENTRY_10131230"

void __fastcall FUN_10131230(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBTClassicConnectionCallbackSwigBase::deviceInfoChanged");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10131290; body size 67 bytes.
#line 1 "ENTRY_10131290"

void __fastcall FUN_10131290(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWebsocketDelegateSwigBase::disconnect");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101312f0; body size 67 bytes.
#line 1 "ENTRY_101312f0"

void __fastcall FUN_101312f0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBTClassicConnectionCallbackSwigBase::disconnectedFromDevice");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10131350; body size 188 bytes.
#line 1 "ENTRY_10131350"

void __thiscall Recovered_Bulk::FUN_10131350(int *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0xc) != 0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))(local_14);
    }
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar2);

    uVar1 = (undefined4)(thunk_FUN_101a2160());
    (**(code **)(param_1 + 0xc))(param_2,uVar1);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIEventSinkSwigBase::dispatchEvent");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10131440; body size 99 bytes.
#line 1 "ENTRY_10131440"

void __thiscall Recovered_Bulk::FUN_10131440(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 8));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 8));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIPlatformDateTimeProvider::doesPlatformTimeZoneMatch");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10131500; body size 75 bytes.
#line 1 "ENTRY_10131500"

void __thiscall Recovered_Bulk::FUN_10131500(undefined1 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCICrashReportProviderSwigBase::enableLogging");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10131560; body size 78 bytes.
#line 1 "ENTRY_10131560"

void __thiscall Recovered_Bulk::FUN_10131560(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
    (**(code **)(param_1 + 0x2c))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIAbilityDelegateSwigBase::enablePrereq");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101315d0; body size 67 bytes.
#line 1 "ENTRY_101315d0"

void __fastcall FUN_101315d0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIUrlSessionProviderSwigBase::endURLSession");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10131630; body size 94 bytes.
#line 1 "ENTRY_10131630"

void __thiscall Recovered_Bulk::FUN_10131630(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0xc));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0xc));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCICustomSubWizardSwigBase::enter");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101316b0; body size 67 bytes.
#line 1 "ENTRY_101316b0"

void __fastcall FUN_101316b0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCICustomSubWizardSwigBase::exit");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10131710; body size 111 bytes.
#line 1 "ENTRY_10131710"

void __thiscall Recovered_Bulk::FUN_10131710(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(int *)(param_1 + 0x14) != 0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
    }
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    (**(code **)(param_1 + 0x14))(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIInAppPurchaseManagerProviderSwigBase::fetchProducts");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101317a0; body size 203 bytes.
#line 1 "ENTRY_101317a0"

void __thiscall Recovered_Bulk::FUN_101317a0(int *param_2,undefined1 *param_3)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0x10) != 0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))(local_14);
    }
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (param_3 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(param_3);
    }
    thunk_FUN_101a1ea0(puVar2);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar1 = (undefined4)(thunk_FUN_101a2160());
    (**(code **)(param_1 + 0x10))(param_2,uVar1);
    thunk_FUN_101a2000();

    ((SCStr *)((SCStr *)&param_3))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIMusicServerDelegateSwigBase::fillImageBytes");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10131970; body size 153 bytes.
#line 1 "ENTRY_10131970"

void __thiscall Recovered_Bulk::FUN_10131970(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x28))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::getActions");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10131bd0; body size 319 bytes.
#line 1 "ENTRY_10131bd0"

void __thiscall Recovered_Bulk::FUN_10131bd0(SCStr *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  SCStr *pSVar2;
  SCStr *local_3c;
  SCStr *local_38;
  undefined4 local_34;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_3c = (SCStr *)(param_2);
  local_38 = (SCStr *)((SCStr *)0x0);

  local_14 = (uint)(uVar1);
  ((SCStr *)((SCStr *)&local_3c))->int_allocRep("none");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)((SCStr *)&local_38))->int_release();
  local_38 = (SCStr *)(local_3c);
  ((SCStr *)((SCStr *)&local_38))->int_addref();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&local_3c))->int_release();
  local_3c = (SCStr *)((SCStr *)0x0);


  if (*(code **)(param_1 + 0x60) != (code *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)(**(code **)(param_1 + 0x60))(param_3,uVar1));
    if (pSVar2 == (SCStr *)0x0) {
      (*(code *)(uint)(DAT_12119064))("Unexpected null return for type SCImageResource",0);
      ((SCStr *)(param_2))->op_ctor((SCStr *)&local_38);
      *(undefined4 *)(param_2 + 4) = local_34;

    }
    else {
      if (pSVar2 != (SCStr *)&local_38) {
        ((SCStr *)((SCStr *)&local_38))->int_release();
        local_38 = (SCStr *)(*(SCStr **)pSVar2);
        ((SCStr *)((SCStr *)&local_38))->int_addref();
      }
      local_34 = (undefined4)(*(undefined4 *)(pSVar2 + 4));
      ((SCStr *)(param_2))->op_ctor((SCStr *)&local_38);
      *(undefined4 *)(param_2 + 4) = local_34;

    }
    ((SCStr *)((SCStr *)&local_38))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::getAlbumArt");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10131d60; body size 322 bytes.
#line 1 "ENTRY_10131d60"

void __thiscall Recovered_Bulk::FUN_10131d60(SCStr *param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  SCStr *pSVar2;
  SCStr *local_3c;
  SCStr *local_38;
  undefined4 local_34;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_3c = (SCStr *)(param_2);
  local_38 = (SCStr *)((SCStr *)0x0);

  local_14 = (uint)(uVar1);
  ((SCStr *)((SCStr *)&local_3c))->int_allocRep("none");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)((SCStr *)&local_38))->int_release();
  local_38 = (SCStr *)(local_3c);
  ((SCStr *)((SCStr *)&local_38))->int_addref();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&local_3c))->int_release();
  local_3c = (SCStr *)((SCStr *)0x0);


  if (*(code **)(param_1 + 100) != (code *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)(**(code **)(param_1 + 100))(param_3,param_4,uVar1));
    if (pSVar2 == (SCStr *)0x0) {
      (*(code *)(uint)(DAT_12119064))("Unexpected null return for type SCImageResource",0);
      ((SCStr *)(param_2))->op_ctor((SCStr *)&local_38);
      *(undefined4 *)(param_2 + 4) = local_34;

    }
    else {
      if (pSVar2 != (SCStr *)&local_38) {
        ((SCStr *)((SCStr *)&local_38))->int_release();
        local_38 = (SCStr *)(*(SCStr **)pSVar2);
        ((SCStr *)((SCStr *)&local_38))->int_addref();
      }
      local_34 = (undefined4)(*(undefined4 *)(pSVar2 + 4));
      ((SCStr *)(param_2))->op_ctor((SCStr *)&local_38);
      *(undefined4 *)(param_2 + 4) = local_34;

    }
    ((SCStr *)((SCStr *)&local_38))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::getAlbumArt");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10131f00; body size 319 bytes.
#line 1 "ENTRY_10131f00"

void __thiscall Recovered_Bulk::FUN_10131f00(SCStr *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  SCStr *pSVar2;
  SCStr *local_3c;
  SCStr *local_38;
  undefined4 local_34;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_3c = (SCStr *)(param_2);
  local_38 = (SCStr *)((SCStr *)0x0);

  local_14 = (uint)(uVar1);
  ((SCStr *)((SCStr *)&local_3c))->int_allocRep("none");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)((SCStr *)&local_38))->int_release();
  local_38 = (SCStr *)(local_3c);
  ((SCStr *)((SCStr *)&local_38))->int_addref();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&local_3c))->int_release();
  local_3c = (SCStr *)((SCStr *)0x0);


  if (*(code **)(param_1 + 0x8c) != (code *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)(**(code **)(param_1 + 0x8c))(uVar1));
    if (pSVar2 == (SCStr *)0x0) {
      (*(code *)(uint)(DAT_12119064))("Unexpected null return for type SCImageResource",0);
      ((SCStr *)(param_2))->op_ctor((SCStr *)&local_38);
      *(undefined4 *)(param_2 + 4) = local_34;

    }
    else {
      if (pSVar2 != (SCStr *)&local_38) {
        ((SCStr *)((SCStr *)&local_38))->int_release();
        local_38 = (SCStr *)(*(SCStr **)pSVar2);
        ((SCStr *)((SCStr *)&local_38))->int_addref();
      }
      local_34 = (undefined4)(*(undefined4 *)(pSVar2 + 4));
      ((SCStr *)(param_2))->op_ctor((SCStr *)&local_38);
      *(undefined4 *)(param_2 + 4) = local_34;

    }
    ((SCStr *)((SCStr *)&local_38))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::getAlbumArtAdornmentImageResource");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10132090; body size 76 bytes.
#line 1 "ENTRY_10132090"

void __thiscall Recovered_Bulk::FUN_10132090(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
    (**(code **)(param_1 + 0x88))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::getAlbumArtType");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101320f0; body size 70 bytes.
#line 1 "ENTRY_101320f0"

void __fastcall FUN_101320f0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x84) != (code *)0x0) {
    (**(code **)(param_1 + 0x84))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::getAlbumArtType");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101323d0; body size 67 bytes.
#line 1 "ENTRY_101323d0"

void __fastcall FUN_101323d0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILocalMediaCollectionSwigBase::getAllNodeType");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10132430; body size 173 bytes.
#line 1 "ENTRY_10132430"

void __thiscall Recovered_Bulk::FUN_10132430(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0xc))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIServiceAppInteropSwigBase::getAppInstallState");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10132510; body size 67 bytes.
#line 1 "ENTRY_10132510"

void __fastcall FUN_10132510(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILoggingProviderSwigBase::getAppLevel");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10132640; body size 67 bytes.
#line 1 "ENTRY_10132640"

void __fastcall FUN_10132640(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILocalMusicBrowseItemInfoSwigBase::getArtType");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101329e0; body size 156 bytes.
#line 1 "ENTRY_101329e0"

void __thiscall Recovered_Bulk::FUN_101329e0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x90) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x90))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::getAttributes");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10132ab0; body size 67 bytes.
#line 1 "ENTRY_10132ab0"

void __fastcall FUN_10132ab0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIMusicServerBrowseDelegateSwigBase::getAuthorization");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10132b10; body size 67 bytes.
#line 1 "ENTRY_10132b10"

void __fastcall FUN_10132b10(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibSonarCallback::getBitsPerSample");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10132ca0; body size 176 bytes.
#line 1 "ENTRY_10132ca0"

void __thiscall Recovered_Bulk::FUN_10132ca0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0xc))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISavedDataProviderSwigBase::getBoolValue");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10132e60; body size 73 bytes.
#line 1 "ENTRY_10132e60"

void __thiscall Recovered_Bulk::FUN_10132e60(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    (**(code **)(param_1 + 0x48))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILocalMusicBrowseItemInfoSwigBase::getByteOffsetForTime");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10132ec0; body size 153 bytes.
#line 1 "ENTRY_10132ec0"

void __thiscall Recovered_Bulk::FUN_10132ec0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x10))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("SCIUrlConnectionSwigBase::getCallback");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10132f80; body size 153 bytes.
#line 1 "ENTRY_10132f80"

void __thiscall Recovered_Bulk::FUN_10132f80(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0xc))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("SCILocalMusicSearchableDelegateSwigBase::getCategoryIDs");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10133110; body size 67 bytes.
#line 1 "ENTRY_10133110"

void __fastcall FUN_10133110(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibSonarCallback::getChannels");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10133170; body size 156 bytes.
#line 1 "ENTRY_10133170"

void __thiscall Recovered_Bulk::FUN_10133170(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0xa8) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0xa8))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::getChildDataSource");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10133310; body size 153 bytes.
#line 1 "ENTRY_10133310"

void __thiscall Recovered_Bulk::FUN_10133310(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0xc))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("SCIBTAccessoryDelegateSwigBase::getConnectedDevices");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101333d0; body size 72 bytes.
#line 1 "ENTRY_101333d0"

void __fastcall FUN_101333d0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    (**(code **)(param_1 + 0x40))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWifiDelegateSwigBase::getConnectionOpen");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10133440; body size 67 bytes.
#line 1 "ENTRY_10133440"

void __fastcall FUN_10133440(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILocalMediaCollectionSwigBase::getCount");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10133cc0; body size 181 bytes.
#line 1 "ENTRY_10133cc0"

void __thiscall Recovered_Bulk::FUN_10133cc0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x24) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x24))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISavedDataProviderSwigBase::getDoubleValue");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10133db0; body size 67 bytes.
#line 1 "ENTRY_10133db0"

void __fastcall FUN_10133db0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILocalMusicBrowseItemInfoSwigBase::getDuration");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10133e10; body size 67 bytes.
#line 1 "ENTRY_10133e10"

void __fastcall FUN_10133e10(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCITrackInfoSwigBase::getDuration");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10133e70; body size 67 bytes.
#line 1 "ENTRY_10133e70"

void __fastcall FUN_10133e70(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x7c) != (code *)0x0) {
    (**(code **)(param_1 + 0x7c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::getDurationMillis");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10133ee0; body size 67 bytes.
#line 1 "ENTRY_10133ee0"

void __fastcall FUN_10133ee0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISecurityContextSwigBase::getEnvironment");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10133f40; body size 153 bytes.
#line 1 "ENTRY_10133f40"

void __thiscall Recovered_Bulk::FUN_10133f40(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x2c))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("SCIExperimentManagerProviderSwigBase::getExperiments");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10134000; body size 156 bytes.
#line 1 "ENTRY_10134000"

void __thiscall Recovered_Bulk::FUN_10134000(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0xbc) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0xbc))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::getExtension");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101340d0; body size 351 bytes.
#line 1 "ENTRY_101340d0"

void __thiscall Recovered_Bulk::FUN_101340d0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  void *local_c48;
  undefined1 *puStack_c44;
  undefined4 local_c40;
  undefined1 local_c3c [3096];
  undefined1 local_24 [28];
  uint local_8;


  uVar1 = (uint)(DAT_12126b84 ^ (uint)local_c3c);

  local_8 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar5);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);
    *(unsigned char *)((char *)&local_c40 + 0) = 1;
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_c40 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_c40 + 1)) << 8 | (uint)(2)));
    uVar4 = (undefined4)(thunk_FUN_101a2160());
    if (param_5 != (int *)0x0) {
      (**(code **)(*param_5 + 4))();
    }
    (**(code **)(param_1 + 0x20))(uVar2,uVar3,uVar4,param_5);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIExperimentManagerProviderSwigBase::getFeatureVariableDouble");
                    
  _CxxThrowException(local_24,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10134290; body size 346 bytes.
#line 1 "ENTRY_10134290"

void __thiscall Recovered_Bulk::FUN_10134290(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar5);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar4 = (undefined4)(thunk_FUN_101a2160());
    if (param_5 != (int *)0x0) {
      (**(code **)(*param_5 + 4))();
    }
    (**(code **)(param_1 + 0x1c))(uVar2,uVar3,uVar4,param_5);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIExperimentManagerProviderSwigBase::getFeatureVariableInteger");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10134660; body size 153 bytes.
#line 1 "ENTRY_10134660"

void __thiscall Recovered_Bulk::FUN_10134660(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x28))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("SCIExperimentManagerProviderSwigBase::getFeatures");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10134720; body size 177 bytes.
#line 1 "ENTRY_10134720"

void __thiscall Recovered_Bulk::FUN_10134720(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  code *pcVar1;
  int *piVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);
  pcVar1 = (code *)(*(code **)(param_1 + 0x2c));

  if (pcVar1 != (code *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(local_14);
      pcVar1 = (code *)(*(code **)(param_1 + 0x2c));
    }
    piVar2 = (int *)((int *)(*pcVar1)(param_3));
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::getFilteredActions");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10134800; body size 67 bytes.
#line 1 "ENTRY_10134800"

void __fastcall FUN_10134800(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILoggingProviderSwigBase::getFlutterLevel");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10134b00; body size 67 bytes.
#line 1 "ENTRY_10134b00"

void __fastcall FUN_10134b00(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    (**(code **)(param_1 + 0x48))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibSonarCallback::getHoldStyle");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10134b60; body size 67 bytes.
#line 1 "ENTRY_10134b60"

void __fastcall FUN_10134b60(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIAbilityDelegateSwigBase::getIOSControlPanelSwipeDirection");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10134d60; body size 173 bytes.
#line 1 "ENTRY_10134d60"

void __thiscall Recovered_Bulk::FUN_10134d60(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x18))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISavedDataProviderSwigBase::getIntegerValue");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10134e40; body size 194 bytes.
#line 1 "ENTRY_10134e40"

undefined4 * FUN_10134e40(undefined4 *param_1,undefined4 *param_2)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);


  uVar1 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)0x0);
  local_14 = (int *)((int *)0x0);
  if (param_2 != (undefined4 *)0x0) {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCINowPlaying");

    puVar2 = (undefined4 *)((undefined4 *)(**(code **)*puVar2)(&local_18,&param_2));
    piVar3 = (int *)((int *)*puVar2);
    *puVar2 = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    local_14 = (int *)(piVar3);
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
    param_2 = (undefined4 *)((undefined4 *)0x0);
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10134f40; body size 194 bytes.
#line 1 "ENTRY_10134f40"

undefined4 * FUN_10134f40(undefined4 *param_1,undefined4 *param_2)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);


  uVar1 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)0x0);
  local_14 = (int *)((int *)0x0);
  if (param_2 != (undefined4 *)0x0) {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCISystem");

    puVar2 = (undefined4 *)((undefined4 *)(**(code **)*puVar2)(&local_18,&param_2));
    piVar3 = (int *)((int *)*puVar2);
    *puVar2 = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    local_14 = (int *)(piVar3);
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
    param_2 = (undefined4 *)((undefined4 *)0x0);
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10135040; body size 194 bytes.
#line 1 "ENTRY_10135040"

undefined4 * FUN_10135040(undefined4 *param_1,undefined4 *param_2)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);


  uVar1 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)0x0);
  local_14 = (int *)((int *)0x0);
  if (param_2 != (undefined4 *)0x0) {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIZoneGroupMgr");

    puVar2 = (undefined4 *)((undefined4 *)(**(code **)*puVar2)(&local_18,&param_2));
    piVar3 = (int *)((int *)*puVar2);
    *puVar2 = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    local_14 = (int *)(piVar3);
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
    param_2 = (undefined4 *)((undefined4 *)0x0);
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10135210; body size 156 bytes.
#line 1 "ENTRY_10135210"

void __thiscall Recovered_Bulk::FUN_10135210(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x10))(param_3,local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILocalMediaCollectionSwigBase::getItemAt");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101352e0; body size 67 bytes.
#line 1 "ENTRY_101352e0"

void __fastcall FUN_101352e0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILocalMediaCollectionSwigBase::getItemThumbnailsPresentationType");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10135340; body size 67 bytes.
#line 1 "ENTRY_10135340"

void __fastcall FUN_10135340(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILocalMusicBrowseItemInfoSwigBase::getItemType");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101353a0; body size 238 bytes.
#line 1 "ENTRY_101353a0"

void __thiscall Recovered_Bulk::FUN_101353a0(undefined4 *param_2,undefined1 *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if (param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)(param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar3 = (int *)((int *)(**(code **)(param_1 + 0x14))(uVar2));
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    thunk_FUN_101a2000();

    ((SCStr *)((SCStr *)&param_3))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIMusicServerBrowseDelegateSwigBase::getLocalMediaCollectionForId");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101354d0; body size 238 bytes.
#line 1 "ENTRY_101354d0"

void __thiscall Recovered_Bulk::FUN_101354d0(undefined4 *param_2,undefined1 *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if (param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)(param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar3 = (int *)((int *)(**(code **)(param_1 + 0x10))(uVar2));
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    thunk_FUN_101a2000();

    ((SCStr *)((SCStr *)&param_3))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIMusicServerBrowseDelegateSwigBase::getLocalMusicItemInfoForId");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10135600; body size 153 bytes.
#line 1 "ENTRY_10135600"

void __thiscall Recovered_Bulk::FUN_10135600(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x20))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("SCIMusicServerBrowseDelegateSwigBase::getLocalMusicSearchableDelegate");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10135790; body size 67 bytes.
#line 1 "ENTRY_10135790"

void __fastcall FUN_10135790(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIStringInputSwigBase::getMaxNumChars");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10135b30; body size 153 bytes.
#line 1 "ENTRY_10135b30"

void __thiscall Recovered_Bulk::FUN_10135b30(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x20))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::getMoreMenuDataSource");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10135bf0; body size 153 bytes.
#line 1 "ENTRY_10135bf0"

void __thiscall Recovered_Bulk::FUN_10135bf0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x1c))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("SCIMusicServerDelegateSwigBase::getMusicServerBrowseDelegate");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10135d80; body size 67 bytes.
#line 1 "ENTRY_10135d80"

void __fastcall FUN_10135d80(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCINetworkManagementDelegateSwigBase::getNetworkType");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10135de0; body size 67 bytes.
#line 1 "ENTRY_10135de0"

void __fastcall FUN_10135de0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCICustomSubWizardSwigBase::getNextStateID");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10135e40; body size 67 bytes.
#line 1 "ENTRY_10135e40"

void __fastcall FUN_10135e40(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x58) != (code *)0x0) {
    (**(code **)(param_1 + 0x58))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::getNumberOfAlbumArtURLs");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101360b0; body size 67 bytes.
#line 1 "ENTRY_101360b0"

void __fastcall FUN_101360b0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBleDelegateSwigBase::getPacketQueueLength");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101367b0; body size 153 bytes.
#line 1 "ENTRY_101367b0"

void __thiscall Recovered_Bulk::FUN_101367b0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0xc))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("SCIPlatformDateTimeProvider::getPlatformDateTime");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10136a70; body size 67 bytes.
#line 1 "ENTRY_10136a70"

void __fastcall FUN_10136a70(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILocalMediaCollectionSwigBase::getPresentationType");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10136c70; body size 153 bytes.
#line 1 "ENTRY_10136c70"

void __thiscall Recovered_Bulk::FUN_10136c70(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x30))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("SCICustomSubWizardSwigBase::getPropertyBag");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10136d30; body size 67 bytes.
#line 1 "ENTRY_10136d30"

void __fastcall FUN_10136d30(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIStringInputSwigBase::getRecommendedInputMethodType");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10136d90; body size 153 bytes.
#line 1 "ENTRY_10136d90"

void __thiscall Recovered_Bulk::FUN_10136d90(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0xc))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("SCIUrlConnectionSwigBase::getRequest");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10136e50; body size 72 bytes.
#line 1 "ENTRY_10136e50"

void __fastcall FUN_10136e50(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBlePeripheralDelegateSwigBase::getRequireSecurePairing");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10137050; body size 70 bytes.
#line 1 "ENTRY_10137050"

void __fastcall FUN_10137050(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x80) != (code *)0x0) {
    (**(code **)(param_1 + 0x80))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::getResumeOffsetMillis");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101370b0; body size 153 bytes.
#line 1 "ENTRY_101370b0"

void __thiscall Recovered_Bulk::FUN_101370b0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x18))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("SCIMusicServerBrowseDelegateSwigBase::getRootItem");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101377b0; body size 84 bytes.
#line 1 "ENTRY_101377b0"

void __fastcall FUN_101377b0(int param_1)

{
  int *piVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0xc))());
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIVpnDelegate::getRootObject");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10137860; body size 156 bytes.
#line 1 "ENTRY_10137860"

void __thiscall Recovered_Bulk::FUN_10137860(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0xc))(param_3,local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibDelegateFactory::getSCLibDelegate");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10137a00; body size 67 bytes.
#line 1 "ENTRY_10137a00"

void __fastcall FUN_10137a00(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x34) != (code *)0x0) {
    (**(code **)(param_1 + 0x34))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibSonarCallback::getSampleRate");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10137c00; body size 322 bytes.
#line 1 "ENTRY_10137c00"

void __thiscall Recovered_Bulk::FUN_10137c00(SCStr *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  SCStr *pSVar2;
  SCStr *local_3c;
  SCStr *local_38;
  undefined4 local_34;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_3c = (SCStr *)(param_2);
  local_38 = (SCStr *)((SCStr *)0x0);

  local_14 = (uint)(uVar1);
  ((SCStr *)((SCStr *)&local_3c))->int_allocRep("none");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)((SCStr *)&local_38))->int_release();
  local_38 = (SCStr *)(local_3c);
  ((SCStr *)((SCStr *)&local_38))->int_addref();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&local_3c))->int_release();
  local_3c = (SCStr *)((SCStr *)0x0);


  if (*(code **)(param_1 + 0xac) != (code *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)(**(code **)(param_1 + 0xac))(param_3,uVar1));
    if (pSVar2 == (SCStr *)0x0) {
      (*(code *)(uint)(DAT_12119064))("Unexpected null return for type SCImageResource",0);
      ((SCStr *)(param_2))->op_ctor((SCStr *)&local_38);
      *(undefined4 *)(param_2 + 4) = local_34;

    }
    else {
      if (pSVar2 != (SCStr *)&local_38) {
        ((SCStr *)((SCStr *)&local_38))->int_release();
        local_38 = (SCStr *)(*(SCStr **)pSVar2);
        ((SCStr *)((SCStr *)&local_38))->int_addref();
      }
      local_34 = (undefined4)(*(undefined4 *)(pSVar2 + 4));
      ((SCStr *)(param_2))->op_ctor((SCStr *)&local_38);
      *(undefined4 *)(param_2 + 4) = local_34;

    }
    ((SCStr *)((SCStr *)&local_38))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::getServiceAttributionLogo");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10137da0; body size 67 bytes.
#line 1 "ENTRY_10137da0"

void __fastcall FUN_10137da0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIGetSonosPlaylistsCBSwigBase::getSonosPlaylistsFailed");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10137e00; body size 169 bytes.
#line 1 "ENTRY_10137e00"

void __thiscall Recovered_Bulk::FUN_10137e00(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0xc))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIGetSonosPlaylistsCBSwigBase::getSonosPlaylistsSucceeded");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10138160; body size 156 bytes.
#line 1 "ENTRY_10138160"

void __thiscall Recovered_Bulk::FUN_10138160(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x3c))(param_3,local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCICustomSubWizardSwigBase::getStringInput");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101385d0; body size 67 bytes.
#line 1 "ENTRY_101385d0"

void __fastcall FUN_101385d0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
    (**(code **)(param_1 + 0x44))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILocalMusicBrowseItemInfoSwigBase::getTrackNumber");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101388a0; body size 67 bytes.
#line 1 "ENTRY_101388a0"

void __fastcall FUN_101388a0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
    (**(code **)(param_1 + 0x2c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIStringInputSwigBase::getValidationStatus");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10138ab0; body size 228 bytes.
#line 1 "ENTRY_10138ab0"

void __thiscall Recovered_Bulk::FUN_10138ab0(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar3 = (int *)((int *)(**(code **)(param_1 + 0x30))(uVar2));
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIExperimentManagerProviderSwigBase::getVariations");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10138bd0; body size 153 bytes.
#line 1 "ENTRY_10138bd0"

void __thiscall Recovered_Bulk::FUN_10138bd0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x34) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x34))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("SCICustomSubWizardSwigBase::getWizardComponents");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10138c90; body size 153 bytes.
#line 1 "ENTRY_10138c90"

void __thiscall Recovered_Bulk::FUN_10138c90(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x1c))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }

    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("SCICustomSubWizardSwigBase::getWizardPageProperties");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10138d50; body size 176 bytes.
#line 1 "ENTRY_10138d50"

void __thiscall Recovered_Bulk::FUN_10138d50(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 8) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 8))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibCustomSubWizardCallback::hasCustomSubWizard");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10138e30; body size 72 bytes.
#line 1 "ENTRY_10138e30"

void __fastcall FUN_10138e30(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIInAppMessagingProviderSwigBase::hasDeviceToken");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10138e90; body size 72 bytes.
#line 1 "ENTRY_10138e90"

void __fastcall FUN_10138e90(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x54) != (code *)0x0) {
    (**(code **)(param_1 + 0x54))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibSonarCallback::hasLimitedVerticalSpace");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10138ef0; body size 72 bytes.
#line 1 "ENTRY_10138ef0"

void __fastcall FUN_10138ef0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::hasMoreMenu");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10138f50; body size 72 bytes.
#line 1 "ENTRY_10138f50"

void __fastcall FUN_10138f50(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x6c) != (code *)0x0) {
    (**(code **)(param_1 + 0x6c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::hasOrdinal");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10138fb0; body size 78 bytes.
#line 1 "ENTRY_10138fb0"

void __thiscall Recovered_Bulk::FUN_10138fb0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibDelegateFactory::hasSCLibDelegate");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139020; body size 72 bytes.
#line 1 "ENTRY_10139020"

void __fastcall FUN_10139020(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIUrbanAirshipDelegateSwigBase::hasUnreadMessages");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139090; body size 67 bytes.
#line 1 "ENTRY_10139090"

void __fastcall FUN_10139090(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIAutomationDelegateSwigBase::hhidUpdated");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101390f0; body size 67 bytes.
#line 1 "ENTRY_101390f0"

void __fastcall FUN_101390f0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBlePeripheralDelegateSwigBase::initPeripheral");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139150; body size 94 bytes.
#line 1 "ENTRY_10139150"

void __thiscall Recovered_Bulk::FUN_10139150(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x38));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x38));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIAbilityDelegateSwigBase::initialize");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101391d0; body size 169 bytes.
#line 1 "ENTRY_101391d0"

void __thiscall Recovered_Bulk::FUN_101391d0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0xc))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIExperimentManagerProviderSwigBase::initialize");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101392b0; body size 67 bytes.
#line 1 "ENTRY_101392b0"

void __fastcall FUN_101392b0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIInAppPurchaseManagerProviderSwigBase::initialize");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139310; body size 67 bytes.
#line 1 "ENTRY_10139310"

void __fastcall FUN_10139310(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIAutomationDelegateSwigBase::initializeFlutterAutomation");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101393a0; body size 78 bytes.
#line 1 "ENTRY_101393a0"

void __thiscall Recovered_Bulk::FUN_101393a0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIAbilityDelegateSwigBase::isAlwaysAvailable");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139410; body size 78 bytes.
#line 1 "ENTRY_10139410"

void __thiscall Recovered_Bulk::FUN_10139410(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIAbilityDelegateSwigBase::isAlwaysDisallowed");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139480; body size 78 bytes.
#line 1 "ENTRY_10139480"

void __thiscall Recovered_Bulk::FUN_10139480(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILifecycleAppProviderSwigBase::isAppWithSWGenInstalled");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101394f0; body size 78 bytes.
#line 1 "ENTRY_101394f0"

void __thiscall Recovered_Bulk::FUN_101394f0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
    (**(code **)(param_1 + 0x44))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::isBrowseItemTextAvailable");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139560; body size 72 bytes.
#line 1 "ENTRY_10139560"

void __fastcall FUN_10139560(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x78) != (code *)0x0) {
    (**(code **)(param_1 + 0x78))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::isCompletelyPlayed");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101395c0; body size 72 bytes.
#line 1 "ENTRY_101395c0"

void __fastcall FUN_101395c0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBTClassicConnectionProviderSwigBase::isConnectedToSonosDevice");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139620; body size 72 bytes.
#line 1 "ENTRY_10139620"

void __fastcall FUN_10139620(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x34) != (code *)0x0) {
    (**(code **)(param_1 + 0x34))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILocalMusicBrowseItemInfoSwigBase::isContainer");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139680; body size 75 bytes.
#line 1 "ENTRY_10139680"

void __fastcall FUN_10139680(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x98) != (code *)0x0) {
    (**(code **)(param_1 + 0x98))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::isDataAvailable");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101396e0; body size 176 bytes.
#line 1 "ENTRY_101396e0"

void __thiscall Recovered_Bulk::FUN_101396e0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x10))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBTAccessoryDelegateSwigBase::isDeviceBonded");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10139830; body size 275 bytes.
#line 1 "ENTRY_10139830"

void __thiscall Recovered_Bulk::FUN_10139830(undefined4 *param_2,undefined4 *param_3,int *param_4)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 4))();
    }
    (**(code **)(param_1 + 0x14))(uVar2,uVar3,param_4);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIExperimentManagerProviderSwigBase::isFeatureEnabled");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101399a0; body size 72 bytes.
#line 1 "ENTRY_101399a0"

void __fastcall FUN_101399a0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIExperimentManagerProviderSwigBase::isInitialized");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139a00; body size 75 bytes.
#line 1 "ENTRY_10139a00"

void __fastcall FUN_10139a00(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
    (**(code **)(param_1 + 0xb0))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::isLoading");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139a60; body size 72 bytes.
#line 1 "ENTRY_10139a60"

void __fastcall FUN_10139a60(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIStringInputSwigBase::isLocked");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139ac0; body size 72 bytes.
#line 1 "ENTRY_10139ac0"

void __fastcall FUN_10139ac0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBTClassicConnectionCallbackSwigBase::isMobConnected");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139b50; body size 75 bytes.
#line 1 "ENTRY_10139b50"

void __fastcall FUN_10139b50(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x94) != (code *)0x0) {
    (**(code **)(param_1 + 0x94))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::isParentOfSearch");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139bb0; body size 72 bytes.
#line 1 "ENTRY_10139bb0"

void __fastcall FUN_10139bb0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILocalMusicBrowseItemInfoSwigBase::isPlayable");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139c10; body size 72 bytes.
#line 1 "ENTRY_10139c10"

void __fastcall FUN_10139c10(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBTClassicConnectionProviderSwigBase::isPlaying");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139c70; body size 75 bytes.
#line 1 "ENTRY_10139c70"

void __fastcall FUN_10139c70(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x9c) != (code *)0x0) {
    (**(code **)(param_1 + 0x9c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::isPlaying");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139cd0; body size 82 bytes.
#line 1 "ENTRY_10139cd0"

void __thiscall Recovered_Bulk::FUN_10139cd0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIAbilityDelegateSwigBase::isPrereq");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139d40; body size 72 bytes.
#line 1 "ENTRY_10139d40"

void __fastcall FUN_10139d40(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::isSecondaryTitleValid");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139da0; body size 72 bytes.
#line 1 "ENTRY_10139da0"

void __fastcall FUN_10139da0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISecureStoreSwigBase::isSecure");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139e00; body size 75 bytes.
#line 1 "ENTRY_10139e00"

void __fastcall FUN_10139e00(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xb8) != (code *)0x0) {
    (**(code **)(param_1 + 0xb8))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::isSonosRadio");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139e60; body size 72 bytes.
#line 1 "ENTRY_10139e60"

void __fastcall FUN_10139e60(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
    (**(code **)(param_1 + 0x2c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCICustomSubWizardSwigBase::isStateDone");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139ec0; body size 75 bytes.
#line 1 "ENTRY_10139ec0"

void __fastcall FUN_10139ec0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xa4) != (code *)0x0) {
    (**(code **)(param_1 + 0xa4))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::isUnavailable");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139f20; body size 176 bytes.
#line 1 "ENTRY_10139f20"

void __thiscall Recovered_Bulk::FUN_10139f20(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x28))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIStringInputSwigBase::isValid");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013a000; body size 72 bytes.
#line 1 "ENTRY_1013a000"

void __fastcall FUN_1013a000(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIStringInputSwigBase::isValid");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013a060; body size 249 bytes.
#line 1 "ENTRY_1013a060"

void __thiscall Recovered_Bulk::FUN_1013a060(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x38))(uVar2,uVar3);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIExperimentManagerProviderSwigBase::isVariationForced");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013a1a0; body size 72 bytes.
#line 1 "ENTRY_1013a1a0"

void __fastcall FUN_1013a1a0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x34) != (code *)0x0) {
    (**(code **)(param_1 + 0x34))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWifiDelegateSwigBase::isWifiConnected");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013a200; body size 245 bytes.
#line 1 "ENTRY_1013a200"

void __thiscall Recovered_Bulk::FUN_1013a200(undefined4 *param_2,undefined4 *param_3,undefined4 param_4)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x10))(uVar2,uVar3,param_4);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWifiDelegateSwigBase::joinSSID");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013a340; body size 169 bytes.
#line 1 "ENTRY_1013a340"

void __thiscall Recovered_Bulk::FUN_1013a340(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x48) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x48))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWifiDelegateSwigBase::launchAccessoryConfiguration");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013a420; body size 169 bytes.
#line 1 "ENTRY_1013a420"

void __thiscall Recovered_Bulk::FUN_1013a420(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x18))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWifiDelegateSwigBase::leaveSSID");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013a530; body size 153 bytes.
#line 1 "ENTRY_1013a530"

void __thiscall Recovered_Bulk::FUN_1013a530(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0x10) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x10))(uVar2);
    thunk_FUN_101a2000();
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 1013a790; body size 94 bytes.
#line 1 "ENTRY_1013a790"

void __thiscall Recovered_Bulk::FUN_1013a790(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x34));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x34));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISecurityContextSwigBase::logCertificateData");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013a8b0; body size 72 bytes.
#line 1 "ENTRY_1013a8b0"

void __fastcall FUN_1013a8b0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIUINotificationsDelegate::notificationsEnabled");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013aad0; body size 67 bytes.
#line 1 "ENTRY_1013aad0"

void __fastcall FUN_1013aad0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIMusicServerDelegateSwigBase::onBeginStreaming");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013ab30; body size 67 bytes.
#line 1 "ENTRY_1013ab30"

void __fastcall FUN_1013ab30(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCINetstartListenerSwigBase::onDeviceDiscoveryWaiting");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013ab90; body size 67 bytes.
#line 1 "ENTRY_1013ab90"

void __fastcall FUN_1013ab90(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIMusicServerDelegateSwigBase::onEndStreaming");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013abf0; body size 67 bytes.
#line 1 "ENTRY_1013abf0"

void __fastcall FUN_1013abf0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCINetstartListenerSwigBase::onJoinComplete");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013ac50; body size 67 bytes.
#line 1 "ENTRY_1013ac50"

void __fastcall FUN_1013ac50(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCINetstartListenerSwigBase::onJoinFail");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013acb0; body size 189 bytes.
#line 1 "ENTRY_1013acb0"

void __thiscall Recovered_Bulk::FUN_1013acb0(undefined1 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x18))(uVar2,param_3);
    thunk_FUN_101a2000();

    ((SCStr *)((SCStr *)&param_2))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCINetstartListenerSwigBase::onNetParamsAcquired");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013ada0; body size 73 bytes.
#line 1 "ENTRY_1013ada0"

void __thiscall Recovered_Bulk::FUN_1013ada0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCICustomSubWizardSwigBase::onSubWizardStateTransition");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013ae00; body size 94 bytes.
#line 1 "ENTRY_1013ae00"

void __thiscall Recovered_Bulk::FUN_1013ae00(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x14));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x14));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWebsocketCallbackSwigBase::onWebsocketConnected");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013ae80; body size 94 bytes.
#line 1 "ENTRY_1013ae80"

void __thiscall Recovered_Bulk::FUN_1013ae80(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x18));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x18));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWebsocketCallbackSwigBase::onWebsocketDisconnected");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013af00; body size 94 bytes.
#line 1 "ENTRY_1013af00"

void __thiscall Recovered_Bulk::FUN_1013af00(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWebsocketCallbackSwigBase::onWebsocketError");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013af80; body size 197 bytes.
#line 1 "ENTRY_1013af80"

void __thiscall Recovered_Bulk::FUN_1013af80(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    (**(code **)(param_1 + 0x10))(uVar2,param_3);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIServiceAppInteropSwigBase::openApp");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013b080; body size 190 bytes.
#line 1 "ENTRY_1013b080"

void __thiscall Recovered_Bulk::FUN_1013b080(undefined1 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0xc))(uVar2);
    thunk_FUN_101a2000();

    ((SCStr *)((SCStr *)&param_2))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIMusicServerDelegateSwigBase::openFileDescriptor");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013b170; body size 67 bytes.
#line 1 "ENTRY_1013b170"

void __fastcall FUN_1013b170(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIVpnDelegate::openVPNSettings");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013b1d0; body size 67 bytes.
#line 1 "ENTRY_1013b1d0"

void __fastcall FUN_1013b1d0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIVpnDelegateSwigBase::openVPNSettings");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013b230; body size 94 bytes.
#line 1 "ENTRY_1013b230"

void __thiscall Recovered_Bulk::FUN_1013b230(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0xc));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0xc));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIActionSwigBase::perform");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013b2b0; body size 190 bytes.
#line 1 "ENTRY_1013b2b0"

void __thiscall Recovered_Bulk::FUN_1013b2b0(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    (**(code **)(param_1 + 0xc))(uVar2,param_3);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCINewWizDelegateSwigBase::performUpdate");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013b3a0; body size 186 bytes.
#line 1 "ENTRY_1013b3a0"

void __thiscall Recovered_Bulk::FUN_1013b3a0(undefined1 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x14))(uVar2);
    thunk_FUN_101a2000();

    ((SCStr *)((SCStr *)&param_2))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIUrbanAirshipDelegateSwigBase::postCustomEvent");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013b490; body size 94 bytes.
#line 1 "ENTRY_1013b490"

void __thiscall Recovered_Bulk::FUN_1013b490(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x10));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x10));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibSonarCallback::prepareForRecording");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013b5a0; body size 214 bytes.
#line 1 "ENTRY_1013b5a0"

void __thiscall Recovered_Bulk::FUN_1013b5a0(undefined4 *param_2,int *param_3,int *param_4)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 4))();
    }
    (**(code **)(param_1 + 0x18))(uVar2,param_3,param_4);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIInAppPurchaseManagerProviderSwigBase::purchaseProduct");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013d0b0; body size 79 bytes.
#line 1 "ENTRY_1013d0b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d0b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIAbilityDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d120; body size 79 bytes.
#line 1 "ENTRY_1013d120"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d120(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIActionDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d190; body size 79 bytes.
#line 1 "ENTRY_1013d190"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d190(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIActionFactory"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d200; body size 79 bytes.
#line 1 "ENTRY_1013d200"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d200(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIActionFilter"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d270; body size 79 bytes.
#line 1 "ENTRY_1013d270"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d270(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIAction"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d2e0; body size 79 bytes.
#line 1 "ENTRY_1013d2e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d2e0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIAutomationDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d350; body size 79 bytes.
#line 1 "ENTRY_1013d350"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d350(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBTAccessoryDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d3c0; body size 79 bytes.
#line 1 "ENTRY_1013d3c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d3c0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBTClassicConnectionCallback"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d430; body size 79 bytes.
#line 1 "ENTRY_1013d430"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d430(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBTClassicConnectionProvider"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d4a0; body size 79 bytes.
#line 1 "ENTRY_1013d4a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d4a0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBleDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d510; body size 79 bytes.
#line 1 "ENTRY_1013d510"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d510(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBlePeripheralDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d580; body size 79 bytes.
#line 1 "ENTRY_1013d580"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d580(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBrowseItem"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d5f0; body size 79 bytes.
#line 1 "ENTRY_1013d5f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d5f0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIChirpDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d660; body size 79 bytes.
#line 1 "ENTRY_1013d660"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d660(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIClipboardDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d6d0; body size 79 bytes.
#line 1 "ENTRY_1013d6d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d6d0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCICrashReportProvider"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d740; body size 79 bytes.
#line 1 "ENTRY_1013d740"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d740(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCICustomSubWizard"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d7b0; body size 79 bytes.
#line 1 "ENTRY_1013d7b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d7b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIEventSink"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d820; body size 79 bytes.
#line 1 "ENTRY_1013d820"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d820(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIExperimentManagerProvider"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d890; body size 79 bytes.
#line 1 "ENTRY_1013d890"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d890(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIGetAboutSonosStringCB"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d900; body size 79 bytes.
#line 1 "ENTRY_1013d900"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d900(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIGetSonosPlaylistsCB"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d970; body size 79 bytes.
#line 1 "ENTRY_1013d970"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d970(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHapticDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d9e0; body size 79 bytes.
#line 1 "ENTRY_1013d9e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d9e0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIInAppMessagingProvider"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013da50; body size 79 bytes.
#line 1 "ENTRY_1013da50"

undefined4 * __thiscall Recovered_Bulk::FUN_1013da50(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIInAppPurchaseManagerProvider"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013dac0; body size 79 bytes.
#line 1 "ENTRY_1013dac0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013dac0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCILifecycleAppProvider"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013db30; body size 79 bytes.
#line 1 "ENTRY_1013db30"

undefined4 * __thiscall Recovered_Bulk::FUN_1013db30(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCILocalMediaCollection"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013dba0; body size 79 bytes.
#line 1 "ENTRY_1013dba0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013dba0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCILocalMusicBrowseItemInfo"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013dc10; body size 79 bytes.
#line 1 "ENTRY_1013dc10"

undefined4 * __thiscall Recovered_Bulk::FUN_1013dc10(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCILocalMusicSearchableDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013dc80; body size 79 bytes.
#line 1 "ENTRY_1013dc80"

undefined4 * __thiscall Recovered_Bulk::FUN_1013dc80(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCILoggingProvider"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013dcf0; body size 79 bytes.
#line 1 "ENTRY_1013dcf0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013dcf0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIMdnsDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013dd60; body size 79 bytes.
#line 1 "ENTRY_1013dd60"

undefined4 * __thiscall Recovered_Bulk::FUN_1013dd60(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIMusicServerBrowseDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013ddd0; body size 79 bytes.
#line 1 "ENTRY_1013ddd0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013ddd0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIMusicServerDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013de40; body size 79 bytes.
#line 1 "ENTRY_1013de40"

undefined4 * __thiscall Recovered_Bulk::FUN_1013de40(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCINetstartListener"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013deb0; body size 79 bytes.
#line 1 "ENTRY_1013deb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013deb0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCINetworkManagementDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013df20; body size 79 bytes.
#line 1 "ENTRY_1013df20"

undefined4 * __thiscall Recovered_Bulk::FUN_1013df20(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCINewWizDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013df90; body size 79 bytes.
#line 1 "ENTRY_1013df90"

undefined4 * __thiscall Recovered_Bulk::FUN_1013df90(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCINfcDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e000; body size 79 bytes.
#line 1 "ENTRY_1013e000"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e000(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIOpCB"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e070; body size 79 bytes.
#line 1 "ENTRY_1013e070"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e070(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCISavedDataProvider"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e0e0; body size 79 bytes.
#line 1 "ENTRY_1013e0e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e0e0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCISecureStore"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e150; body size 79 bytes.
#line 1 "ENTRY_1013e150"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e150(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCISecurityContext"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e1c0; body size 79 bytes.
#line 1 "ENTRY_1013e1c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e1c0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIServiceAppInterop"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e230; body size 79 bytes.
#line 1 "ENTRY_1013e230"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e230(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIStackTraceCaptureDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e2a0; body size 79 bytes.
#line 1 "ENTRY_1013e2a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e2a0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIStringInput"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e310; body size 79 bytes.
#line 1 "ENTRY_1013e310"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e310(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCITrackInfo"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e380; body size 79 bytes.
#line 1 "ENTRY_1013e380"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e380(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIUrbanAirshipDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e3f0; body size 79 bytes.
#line 1 "ENTRY_1013e3f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e3f0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIUrlConnection"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e460; body size 79 bytes.
#line 1 "ENTRY_1013e460"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e460(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIUrlSessionCallback"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e4d0; body size 79 bytes.
#line 1 "ENTRY_1013e4d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e4d0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIUrlSessionProvider"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e540; body size 79 bytes.
#line 1 "ENTRY_1013e540"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e540(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIVoiceServiceDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e5b0; body size 228 bytes.
#line 1 "ENTRY_1013e5b0"

void __thiscall Recovered_Bulk::FUN_1013e5b0(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 8) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar3 = (int *)((int *)(**(code **)(param_1 + 8))(uVar2));
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIVpnDelegate::queryInterface");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013e6d0; body size 79 bytes.
#line 1 "ENTRY_1013e6d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e6d0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIVpnDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e740; body size 79 bytes.
#line 1 "ENTRY_1013e740"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e740(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIWebsocketCallback"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e7b0; body size 79 bytes.
#line 1 "ENTRY_1013e7b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e7b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIWebsocketDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e820; body size 79 bytes.
#line 1 "ENTRY_1013e820"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e820(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIWifiDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e890; body size 74 bytes.
#line 1 "ENTRY_1013e890"

void __fastcall FUN_1013e890(int param_1)

{
 try {
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))(&stack0x00000004);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBleDelegateSwigBase::queuePacketForSend");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013e8f0; body size 186 bytes.
#line 1 "ENTRY_1013e8f0"

void __thiscall Recovered_Bulk::FUN_1013e8f0(undefined1 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x38))(uVar2);
    thunk_FUN_101a2000();

    ((SCStr *)((SCStr *)&param_2))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCICustomSubWizardSwigBase::raiseEvent");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013e9e0; body size 104 bytes.
#line 1 "ENTRY_1013e9e0"

void __thiscall Recovered_Bulk::FUN_1013e9e0(undefined4 param_2,undefined4 param_3,int *param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  code *pcVar2;
  undefined1 local_20 [28];
  uint local_4;
  
  piVar1 = (int *)(param_4);
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar2 = (code *)(*(code **)(param_1 + 0x10));
  if (pcVar2 != (code *)0x0) {
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 4))();
      pcVar2 = (code *)(*(code **)(param_1 + 0x10));
    }
    (*pcVar2)(&param_2,piVar1);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWebsocketCallbackSwigBase::receivedData");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013ea70; body size 190 bytes.
#line 1 "ENTRY_1013ea70"

void __thiscall Recovered_Bulk::FUN_1013ea70(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    (**(code **)(param_1 + 0xc))(uVar2,param_3);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWebsocketCallbackSwigBase::receivedString");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013eb60; body size 75 bytes.
#line 1 "ENTRY_1013eb60"

void __thiscall Recovered_Bulk::FUN_1013eb60(undefined1 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCINetworkManagementDelegateSwigBase::refreshSSID");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013ebc0; body size 174 bytes.
#line 1 "ENTRY_1013ebc0"

void __thiscall Recovered_Bulk::FUN_1013ebc0(undefined4 *param_2,undefined1 param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x14))(uVar2,param_3);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISavedDataProviderSwigBase::registerDefaultBoolValue");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013eca0; body size 182 bytes.
#line 1 "ENTRY_1013eca0"

void __thiscall Recovered_Bulk::FUN_1013eca0(undefined4 param_2,undefined8 param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_101a1ea0();

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x2c))(uVar2,param_3);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0();
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013ed90; body size 172 bytes.
#line 1 "ENTRY_1013ed90"

void __thiscall Recovered_Bulk::FUN_1013ed90(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x20))(uVar2,param_3);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISavedDataProviderSwigBase::registerDefaultIntegerValue");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013ee70; body size 242 bytes.
#line 1 "ENTRY_1013ee70"

void __thiscall Recovered_Bulk::FUN_1013ee70(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x38))(uVar2,uVar3);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISavedDataProviderSwigBase::registerDefaultStringValue");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 1013efa0; body size 99 bytes.
#line 1 "ENTRY_1013efa0"

void __thiscall Recovered_Bulk::FUN_1013efa0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x24));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x24));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBTAccessoryDelegateSwigBase::registerListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f020; body size 99 bytes.
#line 1 "ENTRY_1013f020"

void __thiscall Recovered_Bulk::FUN_1013f020(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x34));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x34));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBleDelegateSwigBase::registerListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f0a0; body size 99 bytes.
#line 1 "ENTRY_1013f0a0"

void __thiscall Recovered_Bulk::FUN_1013f0a0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x20));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x20));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBlePeripheralDelegateSwigBase::registerListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f120; body size 99 bytes.
#line 1 "ENTRY_1013f120"

void __thiscall Recovered_Bulk::FUN_1013f120(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x14));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x14));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIChirpDelegateSwigBase::registerListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f1a0; body size 99 bytes.
#line 1 "ENTRY_1013f1a0"

void __thiscall Recovered_Bulk::FUN_1013f1a0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x14));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x14));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIMdnsDelegateSwigBase::registerListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f220; body size 99 bytes.
#line 1 "ENTRY_1013f220"

void __thiscall Recovered_Bulk::FUN_1013f220(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x18));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x18));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCINfcDelegateSwigBase::registerListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f2a0; body size 99 bytes.
#line 1 "ENTRY_1013f2a0"

void __thiscall Recovered_Bulk::FUN_1013f2a0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIUrbanAirshipDelegateSwigBase::registerListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f320; body size 98 bytes.
#line 1 "ENTRY_1013f320"

void __thiscall Recovered_Bulk::FUN_1013f320(undefined4 param_2,int *param_3)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x10));
  if (pcVar1 != (code *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x10));
    }
    (*pcVar1)(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIVoiceServiceDelegateSwigBase::registerListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f3a0; body size 99 bytes.
#line 1 "ENTRY_1013f3a0"

void __thiscall Recovered_Bulk::FUN_1013f3a0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWifiDelegateSwigBase::registerListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f420; body size 116 bytes.
#line 1 "ENTRY_1013f420"

void __thiscall Recovered_Bulk::FUN_1013f420(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(int *)(param_1 + 0x10) != 0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
    }
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    (**(code **)(param_1 + 0x10))(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIUINotificationsDelegate::registerLocalNotification");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f4c0; body size 94 bytes.
#line 1 "ENTRY_1013f4c0"

void __thiscall Recovered_Bulk::FUN_1013f4c0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x18));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x18));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILocalMediaCollectionSwigBase::registerMediaCollectionListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10143df0; body size 169 bytes.
#line 1 "ENTRY_10143df0"

void __thiscall Recovered_Bulk::FUN_10143df0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x3c) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x3c))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISavedDataProviderSwigBase::remove");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10143ed0; body size 176 bytes.
#line 1 "ENTRY_10143ed0"

void __thiscall Recovered_Bulk::FUN_10143ed0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x14))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISecureStoreSwigBase::removeBlob");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10143fb0; body size 242 bytes.
#line 1 "ENTRY_10143fb0"

void __thiscall Recovered_Bulk::FUN_10143fb0(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x1c))(uVar2,uVar3);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIInAppMessagingProviderSwigBase::removeTagFromGroup");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101440e0; body size 94 bytes.
#line 1 "ENTRY_101440e0"

void __thiscall Recovered_Bulk::FUN_101440e0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 8));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 8));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIUINotificationsDelegate::requestNotificationsPermissions");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144160; body size 67 bytes.
#line 1 "ENTRY_10144160"

void __fastcall FUN_10144160(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBTAccessoryDelegateSwigBase::requestOSPairing");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101441c0; body size 169 bytes.
#line 1 "ENTRY_101441c0"

void __thiscall Recovered_Bulk::FUN_101441c0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x1c))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBTAccessoryDelegateSwigBase::requestPairing");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101442a0; body size 78 bytes.
#line 1 "ENTRY_101442a0"

void __thiscall Recovered_Bulk::FUN_101442a0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIAbilityDelegateSwigBase::requestPrereq");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144310; body size 72 bytes.
#line 1 "ENTRY_10144310"

void __fastcall FUN_10144310(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIVpnDelegate::requestVPN");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144370; body size 72 bytes.
#line 1 "ENTRY_10144370"

void __fastcall FUN_10144370(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIVpnDelegateSwigBase::requestVPN");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101443d0; body size 72 bytes.
#line 1 "ENTRY_101443d0"

void __fastcall FUN_101443d0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x34) != (code *)0x0) {
    (**(code **)(param_1 + 0x34))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIAbilityDelegateSwigBase::requireFineLocationPermission");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144430; body size 72 bytes.
#line 1 "ENTRY_10144430"

void __fastcall FUN_10144430(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x4c) != (code *)0x0) {
    (**(code **)(param_1 + 0x4c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibSonarCallback::requireInputToChangeHoldStyle");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144490; body size 72 bytes.
#line 1 "ENTRY_10144490"

void __fastcall FUN_10144490(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x68) != (code *)0x0) {
    (**(code **)(param_1 + 0x68))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::resolveArtworkUrls");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101444f0; body size 186 bytes.
#line 1 "ENTRY_101444f0"

void __thiscall Recovered_Bulk::FUN_101444f0(undefined1 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x4c) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x4c))(uVar2);
    thunk_FUN_101a2000();

    ((SCStr *)((SCStr *)&param_2))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIExperimentManagerProviderSwigBase::saveFeaturesJson");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101445e0; body size 186 bytes.
#line 1 "ENTRY_101445e0"

void __thiscall Recovered_Bulk::FUN_101445e0(undefined1 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x44) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x44))(uVar2);
    thunk_FUN_101a2000();

    ((SCStr *)((SCStr *)&param_2))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIExperimentManagerProviderSwigBase::saveVariationsJson");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101446f0; body size 67 bytes.
#line 1 "ENTRY_101446f0"

void __fastcall FUN_101446f0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBleDelegateSwigBase::sendQueuedPackets");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144750; body size 67 bytes.
#line 1 "ENTRY_10144750"

void __fastcall FUN_10144750(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIUrlConnectionSwigBase::serialNum");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101447b0; body size 94 bytes.
#line 1 "ENTRY_101447b0"

void __thiscall Recovered_Bulk::FUN_101447b0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0xc));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0xc));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIUrlSessionCallbackSwigBase::sessionComplete");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144860; body size 73 bytes.
#line 1 "ENTRY_10144860"

void __thiscall Recovered_Bulk::FUN_10144860(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILoggingProviderSwigBase::setAppLevel");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101448c0; body size 249 bytes.
#line 1 "ENTRY_101448c0"

void __thiscall Recovered_Bulk::FUN_101448c0(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0xc))(uVar2,uVar3);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISecureStoreSwigBase::setBlob");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10144a00; body size 174 bytes.
#line 1 "ENTRY_10144a00"

void __thiscall Recovered_Bulk::FUN_10144a00(undefined4 *param_2,undefined1 param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x10))(uVar2,param_3);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISavedDataProviderSwigBase::setBoolValue");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10144ae0; body size 94 bytes.
#line 1 "ENTRY_10144ae0"

void __thiscall Recovered_Bulk::FUN_10144ae0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x20));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x20));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBTClassicConnectionProviderSwigBase::setCallback");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144b60; body size 94 bytes.
#line 1 "ENTRY_10144b60"

void __thiscall Recovered_Bulk::FUN_10144b60(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x20));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x20));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWebsocketDelegateSwigBase::setCallback");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144be0; body size 186 bytes.
#line 1 "ENTRY_10144be0"

void __thiscall Recovered_Bulk::FUN_10144be0(undefined1 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x28))(uVar2);
    thunk_FUN_101a2000();

    ((SCStr *)((SCStr *)&param_2))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISecurityContextSwigBase::setCertificateEnvironment");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10144cd0; body size 169 bytes.
#line 1 "ENTRY_10144cd0"

void __thiscall Recovered_Bulk::FUN_10144cd0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0xc))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIClipboardDelegateSwigBase::setClipboardData");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10144db0; body size 186 bytes.
#line 1 "ENTRY_10144db0"

void __thiscall Recovered_Bulk::FUN_10144db0(undefined1 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x18))(uVar2);
    thunk_FUN_101a2000();

    ((SCStr *)((SCStr *)&param_2))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISecurityContextSwigBase::setCustomerID");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10144ea0; body size 182 bytes.
#line 1 "ENTRY_10144ea0"

void __thiscall Recovered_Bulk::FUN_10144ea0(undefined4 param_2,undefined8 param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x28) != 0) {
    thunk_FUN_101a1ea0();

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x28))(uVar2,param_3);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0();
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10144f90; body size 73 bytes.
#line 1 "ENTRY_10144f90"

void __thiscall Recovered_Bulk::FUN_10144f90(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILoggingProviderSwigBase::setFlutterLevel");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144ff0; body size 307 bytes.
#line 1 "ENTRY_10144ff0"

void __thiscall Recovered_Bulk::FUN_10144ff0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x34) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar5);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar4 = (undefined4)(thunk_FUN_101a2160());
    (**(code **)(param_1 + 0x34))(uVar2,uVar3,uVar4);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIExperimentManagerProviderSwigBase::setForcedVariation");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101451a0; body size 186 bytes.
#line 1 "ENTRY_101451a0"

void __thiscall Recovered_Bulk::FUN_101451a0(undefined1 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x10))(uVar2);
    thunk_FUN_101a2000();

    ((SCStr *)((SCStr *)&param_2))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISecurityContextSwigBase::setHHID");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10145290; body size 172 bytes.
#line 1 "ENTRY_10145290"

void __thiscall Recovered_Bulk::FUN_10145290(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x1c))(uVar2,param_3);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISavedDataProviderSwigBase::setIntegerValue");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10145370; body size 75 bytes.
#line 1 "ENTRY_10145370"

void __thiscall Recovered_Bulk::FUN_10145370(undefined1 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBlePeripheralDelegateSwigBase::setRequireSecurePairing");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101453d0; body size 94 bytes.
#line 1 "ENTRY_101453d0"

void __thiscall Recovered_Bulk::FUN_101453d0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIUrlConnectionSwigBase::setResponse");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145450; body size 73 bytes.
#line 1 "ENTRY_10145450"

void __thiscall Recovered_Bulk::FUN_10145450(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIUrlConnectionSwigBase::setResult");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101454b0; body size 186 bytes.
#line 1 "ENTRY_101454b0"

void __thiscall Recovered_Bulk::FUN_101454b0(undefined1 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x20))(uVar2);
    thunk_FUN_101a2000();

    ((SCStr *)((SCStr *)&param_2))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISecurityContextSwigBase::setSerialNumber");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101455a0; body size 169 bytes.
#line 1 "ENTRY_101455a0"

void __thiscall Recovered_Bulk::FUN_101455a0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x14))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIStringInputSwigBase::setString");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10145680; body size 242 bytes.
#line 1 "ENTRY_10145680"

void __thiscall Recovered_Bulk::FUN_10145680(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x34) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x34))(uVar2,uVar3);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISavedDataProviderSwigBase::setStringValue");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101457b0; body size 242 bytes.
#line 1 "ENTRY_101457b0"

void __thiscall Recovered_Bulk::FUN_101457b0(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x14))(uVar2,uVar3);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCICrashReportProviderSwigBase::setTag");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101458e0; body size 74 bytes.
#line 1 "ENTRY_101458e0"

void __fastcall FUN_101458e0(int param_1)

{
 try {
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))(&stack0x00000004);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBleDelegateSwigBase::setTransferTestPacket");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10145940; body size 75 bytes.
#line 1 "ENTRY_10145940"

void __fastcall FUN_10145940(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
    (**(code **)(param_1 + 0xa0))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::showExplicitBadge");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101459a0; body size 72 bytes.
#line 1 "ENTRY_101459a0"

void __fastcall FUN_101459a0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x74) != (code *)0x0) {
    (**(code **)(param_1 + 0x74))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::showProgressInfo");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145a00; body size 67 bytes.
#line 1 "ENTRY_10145a00"

void __fastcall FUN_10145a00(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    (**(code **)(param_1 + 0x3c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIAbilityDelegateSwigBase::shutdown");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145a60; body size 67 bytes.
#line 1 "ENTRY_10145a60"

void __fastcall FUN_10145a60(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
    (**(code **)(param_1 + 0x2c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBTAccessoryDelegateSwigBase::shutdown");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145ac0; body size 67 bytes.
#line 1 "ENTRY_10145ac0"

void __fastcall FUN_10145ac0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    (**(code **)(param_1 + 0x3c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBleDelegateSwigBase::shutdown");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145b20; body size 67 bytes.
#line 1 "ENTRY_10145b20"

void __fastcall FUN_10145b20(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBlePeripheralDelegateSwigBase::shutdown");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145b80; body size 67 bytes.
#line 1 "ENTRY_10145b80"

void __fastcall FUN_10145b80(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIChirpDelegateSwigBase::shutdown");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145be0; body size 67 bytes.
#line 1 "ENTRY_10145be0"

void __fastcall FUN_10145be0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIInAppPurchaseManagerProviderSwigBase::shutdown");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145c40; body size 67 bytes.
#line 1 "ENTRY_10145c40"

void __fastcall FUN_10145c40(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCINfcDelegateSwigBase::shutdown");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145cb0; body size 72 bytes.
#line 1 "ENTRY_10145cb0"

void __fastcall FUN_10145cb0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    (**(code **)(param_1 + 0x40))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCICustomSubWizardSwigBase::skipStateOnBacktracking");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145d10; body size 67 bytes.
#line 1 "ENTRY_10145d10"

void __fastcall FUN_10145d10(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibSonarCallback::sonarBegin");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145d70; body size 67 bytes.
#line 1 "ENTRY_10145d70"

void __fastcall FUN_10145d70(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibSonarCallback::sonarEnd");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145dd0; body size 169 bytes.
#line 1 "ENTRY_10145dd0"

void __thiscall Recovered_Bulk::FUN_10145dd0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0xc))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIStackTraceCaptureDelegateSwigBase::stackTraceCaptured");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10145eb0; body size 98 bytes.
#line 1 "ENTRY_10145eb0"

void __thiscall Recovered_Bulk::FUN_10145eb0(undefined4 param_2,int *param_3)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0xc));
  if (pcVar1 != (code *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0xc));
    }
    (*pcVar1)(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIVoiceServiceDelegateSwigBase::startAuthentication");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145f30; body size 73 bytes.
#line 1 "ENTRY_10145f30"

void __thiscall Recovered_Bulk::FUN_10145f30(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIChirpDelegateSwigBase::startChirpReceiving");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145f90; body size 73 bytes.
#line 1 "ENTRY_10145f90"

void __thiscall Recovered_Bulk::FUN_10145f90(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCICrashReportProviderSwigBase::startCrashReporter");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145ff0; body size 72 bytes.
#line 1 "ENTRY_10145ff0"

void __fastcall FUN_10145ff0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBTAccessoryDelegateSwigBase::startDiscoveryScan");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10146050; body size 98 bytes.
#line 1 "ENTRY_10146050"

void __thiscall Recovered_Bulk::FUN_10146050(undefined4 param_2,int *param_3)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x20));
  if (pcVar1 != (code *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x20));
    }
    (*pcVar1)(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibSonarCallback::startMotionData");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101460d0; body size 67 bytes.
#line 1 "ENTRY_101460d0"

void __fastcall FUN_101460d0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIMdnsDelegateSwigBase::startPlayerDiscovery");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10146130; body size 98 bytes.
#line 1 "ENTRY_10146130"

void __thiscall Recovered_Bulk::FUN_10146130(undefined4 param_2,int *param_3)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x28));
  if (pcVar1 != (code *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x28));
    }
    (*pcVar1)(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibSonarCallback::startRawMotionData");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101461b0; body size 234 bytes.
#line 1 "ENTRY_101461b0"

void __thiscall Recovered_Bulk::FUN_101461b0(undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined1 *param_8)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0x14) != 0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(local_14);
    }
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (param_8 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(param_8);
    }
    thunk_FUN_101a1ea0(puVar2);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar1 = (undefined4)(thunk_FUN_101a2160());
    (**(code **)(param_1 + 0x14))(param_2,param_3,param_4,param_5,param_6,param_7,uVar1);
    thunk_FUN_101a2000();

    ((SCStr *)((SCStr *)&param_8))->int_release();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibSonarCallback::startRecording");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101462e0; body size 67 bytes.
#line 1 "ENTRY_101462e0"

void __fastcall FUN_101462e0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCINfcDelegateSwigBase::startScan");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10146340; body size 80 bytes.
#line 1 "ENTRY_10146340"

void __thiscall Recovered_Bulk::FUN_10146340(undefined1 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWifiDelegateSwigBase::startScan");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101463b0; body size 94 bytes.
#line 1 "ENTRY_101463b0"

void __thiscall Recovered_Bulk::FUN_101463b0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0xc));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0xc));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIUrlSessionProviderSwigBase::startURLSession");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10146430; body size 67 bytes.
#line 1 "ENTRY_10146430"

void __fastcall FUN_10146430(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIChirpDelegateSwigBase::stopChirpReceiving");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10146490; body size 72 bytes.
#line 1 "ENTRY_10146490"

void __fastcall FUN_10146490(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBTAccessoryDelegateSwigBase::stopDiscoveryScan");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101464f0; body size 67 bytes.
#line 1 "ENTRY_101464f0"

void __fastcall FUN_101464f0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibSonarCallback::stopMotionData");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10146550; body size 67 bytes.
#line 1 "ENTRY_10146550"

void __fastcall FUN_10146550(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIMdnsDelegateSwigBase::stopPlayerDiscovery");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101465b0; body size 67 bytes.
#line 1 "ENTRY_101465b0"

void __fastcall FUN_101465b0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
    (**(code **)(param_1 + 0x2c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibSonarCallback::stopRawMotionData");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10146610; body size 67 bytes.
#line 1 "ENTRY_10146610"

void __fastcall FUN_10146610(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCLibSonarCallback::stopRecording");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10146670; body size 67 bytes.
#line 1 "ENTRY_10146670"

void __fastcall FUN_10146670(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCINfcDelegateSwigBase::stopScan");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101466d0; body size 67 bytes.
#line 1 "ENTRY_101466d0"

void __fastcall FUN_101466d0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWifiDelegateSwigBase::stopScan");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10146770; body size 100 bytes.
#line 1 "ENTRY_10146770"

void __thiscall Recovered_Bulk::FUN_10146770(int *param_2,undefined1 param_3)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0xc));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0xc));
    }
    (*pcVar1)(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::subscribe");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101467f0; body size 78 bytes.
#line 1 "ENTRY_101467f0"

void __thiscall Recovered_Bulk::FUN_101467f0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIAbilityDelegateSwigBase::suggestPrereq");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148a00; body size 169 bytes.
#line 1 "ENTRY_10148a00"

void __thiscall Recovered_Bulk::FUN_10148a00(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x14))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBleDelegateSwigBase::tryConnect");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10148ae0; body size 67 bytes.
#line 1 "ENTRY_10148ae0"

void __fastcall FUN_10148ae0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBleDelegateSwigBase::tryDisconnect");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148b40; body size 73 bytes.
#line 1 "ENTRY_10148b40"

void __thiscall Recovered_Bulk::FUN_10148b40(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
    (**(code **)(param_1 + 0x2c))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBleDelegateSwigBase::tryFlushTransferTestBurst");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148ba0; body size 169 bytes.
#line 1 "ENTRY_10148ba0"

void __thiscall Recovered_Bulk::FUN_10148ba0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x10))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBlePeripheralDelegateSwigBase::tryStartAdvertising");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10148c80; body size 75 bytes.
#line 1 "ENTRY_10148c80"

void __thiscall Recovered_Bulk::FUN_10148c80(undefined1 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBleDelegateSwigBase::tryStartScan");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148ce0; body size 67 bytes.
#line 1 "ENTRY_10148ce0"

void __fastcall FUN_10148ce0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBlePeripheralDelegateSwigBase::tryStopAdvertising");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148d40; body size 67 bytes.
#line 1 "ENTRY_10148d40"

void __fastcall FUN_10148d40(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBleDelegateSwigBase::tryStopScan");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148da0; body size 99 bytes.
#line 1 "ENTRY_10148da0"

void __thiscall Recovered_Bulk::FUN_10148da0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x28));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x28));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBTAccessoryDelegateSwigBase::unregisterListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148e20; body size 99 bytes.
#line 1 "ENTRY_10148e20"

void __thiscall Recovered_Bulk::FUN_10148e20(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x38));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x38));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBleDelegateSwigBase::unregisterListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148ea0; body size 99 bytes.
#line 1 "ENTRY_10148ea0"

void __thiscall Recovered_Bulk::FUN_10148ea0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x24));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x24));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBlePeripheralDelegateSwigBase::unregisterListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148f20; body size 99 bytes.
#line 1 "ENTRY_10148f20"

void __thiscall Recovered_Bulk::FUN_10148f20(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x18));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x18));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIChirpDelegateSwigBase::unregisterListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148fa0; body size 99 bytes.
#line 1 "ENTRY_10148fa0"

void __thiscall Recovered_Bulk::FUN_10148fa0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x18));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x18));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIMdnsDelegateSwigBase::unregisterListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10149020; body size 99 bytes.
#line 1 "ENTRY_10149020"

void __thiscall Recovered_Bulk::FUN_10149020(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCINfcDelegateSwigBase::unregisterListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101490a0; body size 99 bytes.
#line 1 "ENTRY_101490a0"

void __thiscall Recovered_Bulk::FUN_101490a0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x20));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x20));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIUrbanAirshipDelegateSwigBase::unregisterListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10149120; body size 99 bytes.
#line 1 "ENTRY_10149120"

void __thiscall Recovered_Bulk::FUN_10149120(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x20));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x20));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWifiDelegateSwigBase::unregisterListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101491a0; body size 94 bytes.
#line 1 "ENTRY_101491a0"

void __thiscall Recovered_Bulk::FUN_101491a0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x10));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x10));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIBrowseItemSwigBase::unsubscribe");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10149220; body size 169 bytes.
#line 1 "ENTRY_10149220"

void __thiscall Recovered_Bulk::FUN_10149220(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0xc))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIGetAboutSonosStringCBSwigBase::updateGetAboutSonosString");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10149300; body size 169 bytes.
#line 1 "ENTRY_10149300"

void __thiscall Recovered_Bulk::FUN_10149300(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x14))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCINfcDelegateSwigBase::updateNfcCardMessage");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101493e0; body size 67 bytes.
#line 1 "ENTRY_101493e0"

void __fastcall FUN_101493e0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIInAppMessagingProviderSwigBase::updateRegistration");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10149440; body size 94 bytes.
#line 1 "ENTRY_10149440"

void __thiscall Recovered_Bulk::FUN_10149440(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x10));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x10));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCICrashReportProviderSwigBase::updateUser");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101495b0; body size 99 bytes.
#line 1 "ENTRY_101495b0"

void __thiscall Recovered_Bulk::FUN_101495b0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x30));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x30));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISecurityContextSwigBase::validateCertificateChain");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10149630; body size 99 bytes.
#line 1 "ENTRY_10149630"

void __thiscall Recovered_Bulk::FUN_10149630(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x2c));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x2c));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCISecurityContextSwigBase::validateCertificateData");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101496b0; body size 78 bytes.
#line 1 "ENTRY_101496b0"

void __thiscall Recovered_Bulk::FUN_101496b0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIHapticDelegateSwigBase::vibrate");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10149740; body size 79 bytes.
#line 1 "ENTRY_10149740"

void __fastcall FUN_10149740(int param_1)

{
 try {
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))(&stack0x00000004);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWebsocketDelegateSwigBase::writeData");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 101497b0; body size 169 bytes.
#line 1 "ENTRY_101497b0"

void __thiscall Recovered_Bulk::FUN_101497b0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);

    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x18))(uVar2);
    thunk_FUN_101a2000();

    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCIWebsocketDelegateSwigBase::writeString");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);

 } catch (...) { }
}


// Reference entry 10149950; body size 180 bytes.
#line 1 "ENTRY_10149950"

undefined4 FUN_10149950(void)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar2 = (SCStr *)((SCStr *)((SCStr *)((SCStr *)&local_18))->op_ctor((SCStr *)&DAT_121a06b0));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar2);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&local_18))->int_release();


  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)(local_14);
  }
  uVar3 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar4 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar5,uVar3,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 10149a40; body size 180 bytes.
#line 1 "ENTRY_10149a40"

undefined4 FUN_10149a40(void)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar2 = (SCStr *)((SCStr *)((SCStr *)((SCStr *)&local_18))->op_ctor((SCStr *)&DAT_121a06a0));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar2);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&local_18))->int_release();


  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)(local_14);
  }
  uVar3 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar4 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar5,uVar3,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 10149b30; body size 180 bytes.
#line 1 "ENTRY_10149b30"

undefined4 FUN_10149b30(void)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar2 = (SCStr *)((SCStr *)((SCStr *)((SCStr *)&local_18))->op_ctor((SCStr *)&DAT_121a06b4));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar2);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&local_18))->int_release();


  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)(local_14);
  }
  uVar3 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar4 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar5,uVar3,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 10149c20; body size 180 bytes.
#line 1 "ENTRY_10149c20"

undefined4 FUN_10149c20(void)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar2 = (SCStr *)((SCStr *)((SCStr *)((SCStr *)&local_18))->op_ctor((SCStr *)&DAT_121a06a4));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar2);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&local_18))->int_release();


  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)(local_14);
  }
  uVar3 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar4 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar5,uVar3,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 10149d10; body size 180 bytes.
#line 1 "ENTRY_10149d10"

undefined4 FUN_10149d10(void)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar2 = (SCStr *)((SCStr *)((SCStr *)((SCStr *)&local_18))->op_ctor((SCStr *)&DAT_121a06bc));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar2);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&local_18))->int_release();


  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)(local_14);
  }
  uVar3 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar4 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar5,uVar3,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 10149e00; body size 180 bytes.
#line 1 "ENTRY_10149e00"

undefined4 FUN_10149e00(void)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar2 = (SCStr *)((SCStr *)((SCStr *)((SCStr *)&local_18))->op_ctor((SCStr *)&DAT_121a06a8));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar2);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&local_18))->int_release();


  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)(local_14);
  }
  uVar3 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar4 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar5,uVar3,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 10149ef0; body size 180 bytes.
#line 1 "ENTRY_10149ef0"

undefined4 FUN_10149ef0(void)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar2 = (SCStr *)((SCStr *)((SCStr *)((SCStr *)&local_18))->op_ctor((SCStr *)&DAT_121a06c4));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar2);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&local_18))->int_release();


  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)(local_14);
  }
  uVar3 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar4 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar5,uVar3,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 10149fe0; body size 180 bytes.
#line 1 "ENTRY_10149fe0"

undefined4 FUN_10149fe0(void)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar2 = (SCStr *)((SCStr *)((SCStr *)((SCStr *)&local_18))->op_ctor((SCStr *)&DAT_121a06b8));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar2);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&local_18))->int_release();


  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)(local_14);
  }
  uVar3 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar4 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar5,uVar3,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 1014a0d0; body size 180 bytes.
#line 1 "ENTRY_1014a0d0"

undefined4 FUN_1014a0d0(void)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar2 = (SCStr *)((SCStr *)((SCStr *)((SCStr *)&local_18))->op_ctor((SCStr *)&DAT_121a06c0));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar2);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&local_18))->int_release();


  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)(local_14);
  }
  uVar3 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar4 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar5,uVar3,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 1014a1c0; body size 180 bytes.
#line 1 "ENTRY_1014a1c0"

undefined4 FUN_1014a1c0(void)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar2 = (SCStr *)((SCStr *)((SCStr *)((SCStr *)&local_18))->op_ctor((SCStr *)&DAT_121a06ac));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar2);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&local_18))->int_release();


  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)(local_14);
  }
  uVar3 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar4 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar5,uVar3,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 1014cf50; body size 316 bytes.
#line 1 "ENTRY_1014cf50"

undefined4
__stdcall FUN_1014cf50(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
            ushort *param_6,undefined4 param_7,undefined4 param_8)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_20))->setFromUTF16(param_2);

  ((SCStr *)((SCStr *)&local_1c))->setFromUTF16(param_3);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_4);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_5);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_6);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))
                     (&param_3,&local_20,&local_1c,&local_18,&local_14,&param_2,param_7,param_8));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();


  ((SCStr *)((SCStr *)&local_1c))->int_release();


  ((SCStr *)((SCStr *)&local_20))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014d0f0; body size 225 bytes.
#line 1 "ENTRY_1014d0f0"

undefined4 __stdcall FUN_1014d0f0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (undefined1 *)((undefined1 *)0x0);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);
  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x1c))(&param_2,&local_18,uVar1));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar2);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar1 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar1));

  ((SCStr *)((SCStr *)&local_18))->int_release();


  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 1014d210; body size 114 bytes.
#line 1 "ENTRY_1014d210"

undefined4 FUN_1014d210(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014d2b0; body size 114 bytes.
#line 1 "ENTRY_1014d2b0"

undefined4 FUN_1014d2b0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014d350; body size 114 bytes.
#line 1 "ENTRY_1014d350"

undefined4 FUN_1014d350(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014d3f0; body size 182 bytes.
#line 1 "ENTRY_1014d3f0"

undefined4 __stdcall FUN_1014d3f0(int *param_1,undefined4 param_2)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x30))
                              (&param_1,param_2,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 1014d4e0; body size 111 bytes.
#line 1 "ENTRY_1014d4e0"

undefined4 FUN_1014d4e0(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101da5c0(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014d5a0; body size 97 bytes.
#line 1 "ENTRY_1014d5a0"

void __stdcall FUN_1014d5a0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x24))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1014d690; body size 114 bytes.
#line 1 "ENTRY_1014d690"

undefined4 FUN_1014d690(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014d7f0; body size 179 bytes.
#line 1 "ENTRY_1014d7f0"

undefined4 __stdcall FUN_1014d7f0(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 1014d8e0; body size 179 bytes.
#line 1 "ENTRY_1014d8e0"

undefined4 __stdcall FUN_1014d8e0(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 1014d9d0; body size 179 bytes.
#line 1 "ENTRY_1014d9d0"

undefined4 __stdcall FUN_1014d9d0(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x20))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 1014dac0; body size 257 bytes.
#line 1 "ENTRY_1014dac0"

SCStr * __stdcall FUN_1014dac0(int *param_1)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x24))(local_24,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 1014dc10; body size 179 bytes.
#line 1 "ENTRY_1014dc10"

undefined4 __stdcall FUN_1014dc10(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 1014dd00; body size 179 bytes.
#line 1 "ENTRY_1014dd00"

undefined4 __stdcall FUN_1014dd00(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 1014df80; body size 135 bytes.
#line 1 "ENTRY_1014df80"

undefined4 __stdcall FUN_1014df80(int *param_1,undefined4 param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x34))(&param_3,param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014e030; body size 176 bytes.
#line 1 "ENTRY_1014e030"

undefined4 __stdcall FUN_1014e030(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 100))(&param_3,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014e120; body size 117 bytes.
#line 1 "ENTRY_1014e120"

undefined4 FUN_1014e120(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014e1c0; body size 117 bytes.
#line 1 "ENTRY_1014e1c0"

undefined4 FUN_1014e1c0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x58))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014e260; body size 179 bytes.
#line 1 "ENTRY_1014e260"

undefined4 __stdcall FUN_1014e260(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x5c))(&param_3,&local_14,&param_2,param_4,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014e350; body size 360 bytes.
#line 1 "ENTRY_1014e350"

undefined4
__stdcall FUN_1014e350(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8,undefined4 param_9)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_24))->setFromUTF16(param_2);

  ((SCStr *)((SCStr *)&local_20))->setFromUTF16(param_3);

  ((SCStr *)((SCStr *)&local_1c))->setFromUTF16(param_4);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_5);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_7);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_8);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x4c))
                     (&param_3,&local_24,&local_20,&local_1c,&local_18,param_6,&local_14,&param_2,
                      param_9));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();


  ((SCStr *)((SCStr *)&local_1c))->int_release();


  ((SCStr *)((SCStr *)&local_20))->int_release();


  ((SCStr *)((SCStr *)&local_24))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014e520; body size 132 bytes.
#line 1 "ENTRY_1014e520"

undefined4 __stdcall FUN_1014e520(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x7c))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014e5d0; body size 176 bytes.
#line 1 "ENTRY_1014e5d0"

undefined4 __stdcall FUN_1014e5d0(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x2c))(&param_3,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014e6c0; body size 231 bytes.
#line 1 "ENTRY_1014e6c0"

undefined4
__stdcall FUN_1014e6c0(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_4);
  puVar3 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x50))
                     (&param_3,&local_18,&local_14,&param_2,param_5,param_6,param_7,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014e7f0; body size 275 bytes.
#line 1 "ENTRY_1014e7f0"

undefined4
__stdcall FUN_1014e7f0(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_1c))->setFromUTF16(param_2);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_3);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_4);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_5);
  puVar3 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x40))
                     (&param_3,&local_1c,&local_18,&local_14,&param_2,param_6,param_7,param_8,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();


  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014e950; body size 289 bytes.
#line 1 "ENTRY_1014e950"

undefined4
__stdcall FUN_1014e950(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            ushort *param_10)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_1c))->setFromUTF16(param_2);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_3);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_4);
  param_3 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_3 + 1)) << 8 | (uint)(param_5 != 0)));
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_10);
  puVar3 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x44))
                     (&param_4,&local_1c,&local_18,&local_14,param_3,param_6,param_7,param_8,param_9
                      ,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_4 != (ushort *)0x0) {
    (**(code **)(*(int *)param_4 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();


  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014eac0; body size 210 bytes.
#line 1 "ENTRY_1014eac0"

undefined4
__stdcall FUN_1014eac0(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,ushort *param_7,int param_8,int param_9)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_7);
  param_8 = (int)(((uint)(*(unsigned short *)((char *)&param_8 + 1)) << 8 | (uint)(param_8 != 0)));
  param_7 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_7 + 1)) << 8 | (uint)(param_9 != 0)));
  puVar3 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))
                     (&param_7,&local_14,param_3,param_4,param_5,param_6,&param_2,param_8,param_7,
                      uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_7 != (ushort *)0x0) {
    (**(code **)(*(int *)param_7 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014ebd0; body size 135 bytes.
#line 1 "ENTRY_1014ebd0"

undefined4 __stdcall FUN_1014ebd0(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x24))(&param_2,&local_14,param_3,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014ec80; body size 225 bytes.
#line 1 "ENTRY_1014ec80"

undefined4
__stdcall FUN_1014ec80(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,undefined4 param_5)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_4);
  puVar3 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x48))(&param_3,&local_18,&local_14,&param_2,param_5,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014eda0; body size 179 bytes.
#line 1 "ENTRY_1014eda0"

undefined4 __stdcall FUN_1014eda0(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x54))(&param_3,&local_14,&param_2,param_4,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014ee90; body size 179 bytes.
#line 1 "ENTRY_1014ee90"

undefined4 __stdcall FUN_1014ee90(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x60))(&param_3,&local_14,&param_2,param_4,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014ef80; body size 117 bytes.
#line 1 "ENTRY_1014ef80"

undefined4 FUN_1014ef80(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x3c))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014f020; body size 176 bytes.
#line 1 "ENTRY_1014f020"

undefined4 __stdcall FUN_1014f020(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x78))(&param_3,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014f110; body size 135 bytes.
#line 1 "ENTRY_1014f110"

undefined4 __stdcall FUN_1014f110(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x80))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014f1c0; body size 120 bytes.
#line 1 "ENTRY_1014f1c0"

undefined4 FUN_1014f1c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))
                     (&param_1,param_2,param_3,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014f260; body size 176 bytes.
#line 1 "ENTRY_1014f260"

undefined4 __stdcall FUN_1014f260(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x74))(&param_3,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014f350; body size 117 bytes.
#line 1 "ENTRY_1014f350"

undefined4 FUN_1014f350(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x70))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014f3f0; body size 120 bytes.
#line 1 "ENTRY_1014f3f0"

undefined4 FUN_1014f3f0(int *param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x6c))
                     (&param_1,param_2,param_3,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014f490; body size 187 bytes.
#line 1 "ENTRY_1014f490"

undefined4 __stdcall FUN_1014f490(int *param_1,ushort *param_2,ushort *param_3,int param_4)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  param_3 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_3 + 1)) << 8 | (uint)(param_4 != 0)));
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x28))(&param_3,&local_14,&param_2,param_3,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014f580; body size 117 bytes.
#line 1 "ENTRY_1014f580"

undefined4 FUN_1014f580(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014f620; body size 143 bytes.
#line 1 "ENTRY_1014f620"

undefined4 __stdcall FUN_1014f620(int *param_1,undefined4 param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x1c))(&param_3,param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014f6e0; body size 149 bytes.
#line 1 "ENTRY_1014f6e0"

undefined4
__stdcall FUN_1014f6e0(int *param_1,int param_2,ushort *param_3,undefined4 param_4,undefined4 param_5)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  bVar4 = (bool)(param_2 != 0);
  param_2 = (int)(0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x68))(&param_3,bVar4,&param_2,param_4,param_5,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014f7a0; body size 117 bytes.
#line 1 "ENTRY_1014f7a0"

undefined4 FUN_1014f7a0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x38))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014f8d0; body size 120 bytes.
#line 1 "ENTRY_1014f8d0"

undefined4 FUN_1014f8d0(int *param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))
                     (&param_1,param_2,param_3,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014f980; body size 114 bytes.
#line 1 "ENTRY_1014f980"

undefined4 FUN_1014f980(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014fa30; body size 117 bytes.
#line 1 "ENTRY_1014fa30"

undefined4 FUN_1014fa30(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014fae0; body size 132 bytes.
#line 1 "ENTRY_1014fae0"

undefined4 __stdcall FUN_1014fae0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x34))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014fc20; body size 125 bytes.
#line 1 "ENTRY_1014fc20"

undefined4 FUN_1014fc20(int *param_1,int *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  param_2 = (int *)((int *)((uint)(*(unsigned short *)((char *)&param_2 + 1)) << 8 | (uint)(param_2 != (int *)0x0)));
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_2,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014fce0; body size 117 bytes.
#line 1 "ENTRY_1014fce0"

undefined4 FUN_1014fce0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014fd90; body size 132 bytes.
#line 1 "ENTRY_1014fd90"

undefined4 __stdcall FUN_1014fd90(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x34))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014fe80; body size 135 bytes.
#line 1 "ENTRY_1014fe80"

undefined4 __stdcall FUN_1014fe80(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x34))(&param_2,&local_14,param_3,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1014ffb0; body size 117 bytes.
#line 1 "ENTRY_1014ffb0"

undefined4 FUN_1014ffb0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x3c))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10150050; body size 117 bytes.
#line 1 "ENTRY_10150050"

undefined4 FUN_10150050(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x38))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101500f0; body size 114 bytes.
#line 1 "ENTRY_101500f0"

undefined4 FUN_101500f0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101501a0; body size 114 bytes.
#line 1 "ENTRY_101501a0"

undefined4 FUN_101501a0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10150240; body size 179 bytes.
#line 1 "ENTRY_10150240"

undefined4 __stdcall FUN_10150240(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x2c))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10150330; body size 117 bytes.
#line 1 "ENTRY_10150330"

undefined4 FUN_10150330(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x44))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101503d0; body size 114 bytes.
#line 1 "ENTRY_101503d0"

undefined4 FUN_101503d0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x40))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10150470; body size 114 bytes.
#line 1 "ENTRY_10150470"

undefined4 FUN_10150470(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x60))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10150510; body size 117 bytes.
#line 1 "ENTRY_10150510"

undefined4 FUN_10150510(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x50))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101505b0; body size 120 bytes.
#line 1 "ENTRY_101505b0"

undefined4 FUN_101505b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x54))
                     (&param_1,param_2,param_3,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10150690; body size 117 bytes.
#line 1 "ENTRY_10150690"

undefined4 FUN_10150690(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101507c0; body size 114 bytes.
#line 1 "ENTRY_101507c0"

undefined4 FUN_101507c0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10150860; body size 179 bytes.
#line 1 "ENTRY_10150860"

undefined4 __stdcall FUN_10150860(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10150960; body size 179 bytes.
#line 1 "ENTRY_10150960"

undefined4 __stdcall FUN_10150960(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10150a50; body size 179 bytes.
#line 1 "ENTRY_10150a50"

undefined4 __stdcall FUN_10150a50(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10150b50; body size 117 bytes.
#line 1 "ENTRY_10150b50"

undefined4 FUN_10150b50(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x94))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10150bf0; body size 114 bytes.
#line 1 "ENTRY_10150bf0"

undefined4 FUN_10150bf0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10150c90; body size 114 bytes.
#line 1 "ENTRY_10150c90"

undefined4 FUN_10150c90(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10150d30; body size 114 bytes.
#line 1 "ENTRY_10150d30"

undefined4 FUN_10150d30(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x58))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10150dd0; body size 179 bytes.
#line 1 "ENTRY_10150dd0"

undefined4 __stdcall FUN_10150dd0(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x50))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10150ec0; body size 114 bytes.
#line 1 "ENTRY_10150ec0"

undefined4 FUN_10150ec0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x38))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10150f80; body size 179 bytes.
#line 1 "ENTRY_10150f80"

undefined4 __stdcall FUN_10150f80(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x74))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10151070; body size 179 bytes.
#line 1 "ENTRY_10151070"

undefined4 __stdcall FUN_10151070(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x70))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10151190; body size 179 bytes.
#line 1 "ENTRY_10151190"

undefined4 __stdcall FUN_10151190(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x5c))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10151280; body size 114 bytes.
#line 1 "ENTRY_10151280"

undefined4 FUN_10151280(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x40))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10151320; body size 179 bytes.
#line 1 "ENTRY_10151320"

undefined4 __stdcall FUN_10151320(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x6c))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10151410; body size 182 bytes.
#line 1 "ENTRY_10151410"

undefined4 __stdcall FUN_10151410(int *param_1,undefined4 param_2)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x68))
                              (&param_1,param_2,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10151500; body size 179 bytes.
#line 1 "ENTRY_10151500"

undefined4 __stdcall FUN_10151500(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 100))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10151670; body size 114 bytes.
#line 1 "ENTRY_10151670"

undefined4 FUN_10151670(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10151790; body size 97 bytes.
#line 1 "ENTRY_10151790"

void __stdcall FUN_10151790(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x4c))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10151ac0; body size 100 bytes.
#line 1 "ENTRY_10151ac0"

void __stdcall FUN_10151ac0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x80))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10151b50; body size 95 bytes.
#line 1 "ENTRY_10151b50"

void __stdcall FUN_10151b50(int *param_1)

{
 try {
  uint uVar1;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)(local_14))->int_allocRep("");
  (**(code **)(*param_1 + 0x80))(local_14,uVar1);

  ((SCStr *)(local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10151bd0; body size 108 bytes.
#line 1 "ENTRY_10151bd0"

void __stdcall FUN_10151bd0(int *param_1,int param_2,ushort *param_3)

{
 try {
  uint uVar1;
  bool bVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  bVar2 = (bool)(param_2 != 0);
  param_2 = (int)(0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x7c))(bVar2,&param_2,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10151c60; body size 103 bytes.
#line 1 "ENTRY_10151c60"

void __stdcall FUN_10151c60(int *param_1,int param_2)

{
 try {
  uint uVar1;
  bool bVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  bVar2 = (bool)(param_2 != 0);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep("");
  (**(code **)(*param_1 + 0x7c))(bVar2,&param_2,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10151e10; body size 179 bytes.
#line 1 "ENTRY_10151e10"

undefined4 __stdcall FUN_10151e10(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x6c))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10151f00; body size 179 bytes.
#line 1 "ENTRY_10151f00"

undefined4 __stdcall FUN_10151f00(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x74))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10152050; body size 182 bytes.
#line 1 "ENTRY_10152050"

undefined4 __stdcall FUN_10152050(int *param_1,undefined4 param_2)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x54))
                              (&param_1,param_2,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10152240; body size 97 bytes.
#line 1 "ENTRY_10152240"

void __stdcall FUN_10152240(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x50))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101522c0; body size 97 bytes.
#line 1 "ENTRY_101522c0"

void __stdcall FUN_101522c0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x68))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10152340; body size 97 bytes.
#line 1 "ENTRY_10152340"

void __stdcall FUN_10152340(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x70))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101524a0; body size 100 bytes.
#line 1 "ENTRY_101524a0"

void __stdcall FUN_101524a0(int *param_1,undefined4 param_2,ushort *param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x34))(param_2,&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10152530; body size 103 bytes.
#line 1 "ENTRY_10152530"

void __stdcall FUN_10152530(int *param_1,undefined4 param_2,ushort *param_3,undefined4 param_4)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x30))(param_2,&local_14,param_4,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10152650; body size 179 bytes.
#line 1 "ENTRY_10152650"

undefined4 __stdcall FUN_10152650(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 101527d0; body size 120 bytes.
#line 1 "ENTRY_101527d0"

undefined1 __stdcall FUN_101527d0(int *param_1,ushort *param_2,undefined4 param_3,int param_4)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x20))(&local_14,param_3,param_4 != 0,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10152870; body size 111 bytes.
#line 1 "ENTRY_10152870"

undefined1 __stdcall FUN_10152870(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x20))(&local_14,param_3,0,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10152bc0; body size 125 bytes.
#line 1 "ENTRY_10152bc0"

undefined4 FUN_10152bc0(int *param_1,int *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  param_2 = (int *)((int *)((uint)(*(unsigned short *)((char *)&param_2 + 1)) << 8 | (uint)(param_2 != (int *)0x0)));
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_2,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10152c70; body size 116 bytes.
#line 1 "ENTRY_10152c70"

undefined4 FUN_10152c70(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10152d10; body size 114 bytes.
#line 1 "ENTRY_10152d10"

undefined4 FUN_10152d10(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10152db0; body size 132 bytes.
#line 1 "ENTRY_10152db0"

undefined4 __stdcall FUN_10152db0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x18))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10152e60; body size 153 bytes.
#line 1 "ENTRY_10152e60"

undefined1 __stdcall FUN_10152e60(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x28))(&local_14,&param_2,param_4,uVar2));

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10152f30; body size 117 bytes.
#line 1 "ENTRY_10152f30"

undefined1 __stdcall FUN_10152f30(int *param_1,ushort *param_2,int param_3)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x24))(&local_14,param_3 != 0,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10152fd0; body size 108 bytes.
#line 1 "ENTRY_10152fd0"

undefined1 __stdcall FUN_10152fd0(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x24))(&local_14,0,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10153070; body size 114 bytes.
#line 1 "ENTRY_10153070"

undefined4 FUN_10153070(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10153110; body size 179 bytes.
#line 1 "ENTRY_10153110"

undefined4 __stdcall FUN_10153110(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10153200; body size 179 bytes.
#line 1 "ENTRY_10153200"

undefined4 __stdcall FUN_10153200(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10153330; body size 105 bytes.
#line 1 "ENTRY_10153330"

void __stdcall FUN_10153330(int *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe4))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x18))();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101533d0; body size 117 bytes.
#line 1 "ENTRY_101533d0"

undefined4 FUN_101533d0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101534a0; body size 117 bytes.
#line 1 "ENTRY_101534a0"

undefined4 FUN_101534a0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10153540; body size 114 bytes.
#line 1 "ENTRY_10153540"

undefined4 FUN_10153540(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101535e0; body size 117 bytes.
#line 1 "ENTRY_101535e0"

undefined4 FUN_101535e0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10153680; body size 123 bytes.
#line 1 "ENTRY_10153680"

undefined4 FUN_10153680(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))
                     (&param_1,param_2,param_3,param_4,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10153720; body size 123 bytes.
#line 1 "ENTRY_10153720"

undefined4 FUN_10153720(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))
                     (&param_1,param_2,param_3,param_4,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10153810; body size 134 bytes.
#line 1 "ENTRY_10153810"

undefined4 FUN_10153810(int *param_1,int *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (param_2 == (int *)0x0) {
    (*(code *)(uint)(DAT_12119064))("SCImageResource const & type is null",0);

    return (undefined4)(0);
  }
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_2,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101538c0; body size 143 bytes.
#line 1 "ENTRY_101538c0"

undefined4 __stdcall FUN_101538c0(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uStack_24;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;



  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&uStack_24))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x14))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101539f0; body size 257 bytes.
#line 1 "ENTRY_101539f0"

SCStr * __stdcall FUN_101539f0(int *param_1)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x40))(local_24,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10153b70; body size 179 bytes.
#line 1 "ENTRY_10153b70"

undefined4 __stdcall FUN_10153b70(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x50))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10153da0; body size 179 bytes.
#line 1 "ENTRY_10153da0"

undefined4 __stdcall FUN_10153da0(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x20))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10153e90; body size 179 bytes.
#line 1 "ENTRY_10153e90"

undefined4 __stdcall FUN_10153e90(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10154270; body size 114 bytes.
#line 1 "ENTRY_10154270"

undefined4 FUN_10154270(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10154310; body size 106 bytes.
#line 1 "ENTRY_10154310"

undefined1 __stdcall FUN_10154310(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x18))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 101543d0; body size 97 bytes.
#line 1 "ENTRY_101543d0"

void __stdcall FUN_101543d0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x24))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101544d0; body size 100 bytes.
#line 1 "ENTRY_101544d0"

void __stdcall FUN_101544d0(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x14))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10154560; body size 152 bytes.
#line 1 "ENTRY_10154560"

void __stdcall FUN_10154560(int *param_1,ushort *param_2,ushort *param_3,int param_4)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  param_3 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_3 + 1)) << 8 | (uint)(param_4 != 0)));
  (**(code **)(*param_1 + 0x1c))(&local_14,&param_2,param_3,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10154820; body size 179 bytes.
#line 1 "ENTRY_10154820"

undefined4 __stdcall FUN_10154820(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10154910; body size 179 bytes.
#line 1 "ENTRY_10154910"

undefined4 __stdcall FUN_10154910(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10154a20; body size 150 bytes.
#line 1 "ENTRY_10154a20"

undefined1 __stdcall FUN_10154a20(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x20))(&local_14,&param_2,uVar2));

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10154af0; body size 139 bytes.
#line 1 "ENTRY_10154af0"

undefined1 __stdcall FUN_10154af0(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep((char *)0x0);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x20))(&local_14,&param_2,uVar2));

  ((SCStr *)((SCStr *)&param_2))->int_release();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10154c80; body size 179 bytes.
#line 1 "ENTRY_10154c80"

undefined4 __stdcall FUN_10154c80(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10154d70; body size 179 bytes.
#line 1 "ENTRY_10154d70"

undefined4 __stdcall FUN_10154d70(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x20))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10154e60; body size 179 bytes.
#line 1 "ENTRY_10154e60"

undefined4 __stdcall FUN_10154e60(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x24))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10154ff0; body size 179 bytes.
#line 1 "ENTRY_10154ff0"

undefined4 __stdcall FUN_10154ff0(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 101550e0; body size 257 bytes.
#line 1 "ENTRY_101550e0"

SCStr * __stdcall FUN_101550e0(int *param_1)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x18))(local_24,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10155230; body size 179 bytes.
#line 1 "ENTRY_10155230"

undefined4 __stdcall FUN_10155230(int *param_1)

{
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 101554f0; body size 97 bytes.
#line 1 "ENTRY_101554f0"

void __stdcall FUN_101554f0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x1c))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10155600; body size 181 bytes.
#line 1 "ENTRY_10155600"

void __stdcall FUN_10155600(int *param_1,ushort *param_2,ushort *param_3,undefined4 *param_4,int param_5,
                 undefined4 param_6)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  if (param_4 == (undefined4 *)0x0) {
    (*(code *)(uint)(DAT_12119064))("Attempt to dereference null DirectByteBuffer const",0);
  }
  else {
    param_3 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_3 + 1)) << 8 | (uint)(param_5 != 0)));
    (**(code **)(*param_1 + 0x18))(&local_14,&param_2,*param_4,param_4[1],param_3,param_6,uVar1);
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101558b0; body size 97 bytes.
#line 1 "ENTRY_101558b0"

void __stdcall FUN_101558b0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x18))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101559c0; body size 100 bytes.
#line 1 "ENTRY_101559c0"

void __stdcall FUN_101559c0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0xc4))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


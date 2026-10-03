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
extern int FUN_100487ed(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _time64(...);
extern __declspec(dllimport) int atoi(...);
extern __declspec(dllimport) int ceil(...);
extern int createDisplayWizardAction(...);
extern int createPropertyBag(...);
extern int createSCObject(...);
extern int getCurrentThreadID(...);
extern int getMainThreadID(...);
extern int getSCHousehold(...);
extern int getSingleton(...);
extern int int_release(...);
extern int int_start(...);
extern __declspec(dllimport) int memmove(...);
extern int op_eq(...);
extern int operator_new(...);
extern __declspec(dllimport) int strncmp(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_10120220(...);
extern int thunk_FUN_10124b40(...);
extern int thunk_FUN_10129a20(...);
extern int thunk_FUN_10129af0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101a2bf0(...);
extern int thunk_FUN_101a2c70(...);
extern int thunk_FUN_101a9be0(...);
extern int thunk_FUN_101aa810(...);
extern int thunk_FUN_101aa9f0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101bb8a0(...);
extern int thunk_FUN_101ccb50(...);
extern int thunk_FUN_101cd010(...);
extern int thunk_FUN_101cd150(...);
extern int thunk_FUN_101d3630(...);
extern int thunk_FUN_101d95e0(...);
extern int thunk_FUN_101da240(...);
extern int thunk_FUN_101da390(...);
extern int thunk_FUN_101da4a0(...);
extern int thunk_FUN_101da860(...);
extern int thunk_FUN_101dce50(...);
extern int thunk_FUN_101dcfc0(...);
extern int thunk_FUN_101e6900(...);
extern int thunk_FUN_101eb2b0(...);
extern int thunk_FUN_101f08d0(...);
extern int thunk_FUN_101f1c60(...);
extern int thunk_FUN_101f1fa0(...);
extern int thunk_FUN_101f53d0(...);
extern int thunk_FUN_101f6530(...);
extern int thunk_FUN_102037c0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_10225d70(...);
extern int thunk_FUN_1022de20(...);
extern int thunk_FUN_1023a9b0(...);
extern int thunk_FUN_1023a9c0(...);
extern int thunk_FUN_1023ab10(...);
extern int thunk_FUN_102460b0(...);
extern int thunk_FUN_10246720(...);
extern int thunk_FUN_10272300(...);
extern int thunk_FUN_1028c030(...);
extern int thunk_FUN_10290460(...);
extern int thunk_FUN_102909a0(...);
extern int thunk_FUN_10292c70(...);
extern int thunk_FUN_10292cf0(...);
extern int thunk_FUN_102a3810(...);
extern int thunk_FUN_102a88c0(...);
extern int thunk_FUN_102bba10(...);
extern int thunk_FUN_102bce30(...);
extern int thunk_FUN_102e78c0(...);
extern int thunk_FUN_103238a0(...);
extern int thunk_FUN_10328710(...);
extern int thunk_FUN_10350870(...);
extern int thunk_FUN_103535f0(...);
extern int thunk_FUN_1036e480(...);
extern int thunk_FUN_10371ff0(...);
extern int thunk_FUN_10372420(...);
extern int thunk_FUN_1037f130(...);
extern int thunk_FUN_10384800(...);
extern int thunk_FUN_10384890(...);
extern int thunk_FUN_10388cc0(...);
extern int thunk_FUN_103892b0(...);
extern int thunk_FUN_1038a490(...);
extern int thunk_FUN_1038aea0(...);
extern int thunk_FUN_1038b140(...);
extern int thunk_FUN_1038b3c0(...);
extern int thunk_FUN_1038b640(...);
extern int thunk_FUN_1038b8c0(...);
extern int thunk_FUN_1038bbb0(...);
extern int thunk_FUN_1038d3c0(...);
extern int thunk_FUN_1038ea50(...);
extern int thunk_FUN_10397340(...);
extern int thunk_FUN_1039a660(...);
extern int thunk_FUN_103a2ff0(...);
extern int thunk_FUN_103a4d50(...);
extern int thunk_FUN_103a5300(...);
extern int thunk_FUN_103a6780(...);
extern int thunk_FUN_103a7c30(...);
extern int thunk_FUN_103a7d90(...);
extern int thunk_FUN_103a81d0(...);
extern int thunk_FUN_103ab950(...);
extern int thunk_FUN_103aba20(...);
extern int thunk_FUN_103aba30(...);
extern int thunk_FUN_103b6e20(...);
extern int thunk_FUN_103b7ae0(...);
extern int thunk_FUN_103b8760(...);
extern int thunk_FUN_103be5e0(...);
extern int thunk_FUN_103be9e0(...);
extern int thunk_FUN_103bf020(...);
extern int thunk_FUN_103c0be0(...);
extern int thunk_FUN_103cd850(...);
extern int thunk_FUN_103cda00(...);
extern int thunk_FUN_103cdb40(...);
extern int thunk_FUN_103cdcc0(...);
extern int thunk_FUN_103cfae0(...);
extern int thunk_FUN_103d52b0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103d61d0(...);
extern int thunk_FUN_103d6860(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_103d9b50(...);
extern int thunk_FUN_103d9ca0(...);
extern int thunk_FUN_103da840(...);
extern int thunk_FUN_103daf00(...);
extern int thunk_FUN_103db630(...);
extern int thunk_FUN_103db9c0(...);
extern int thunk_FUN_103e12e0(...);
extern int thunk_FUN_103e1440(...);
extern int thunk_FUN_103e15a0(...);
extern int thunk_FUN_103e22b0(...);
extern int thunk_FUN_103e28a0(...);
extern int thunk_FUN_103e2a30(...);
extern int thunk_FUN_103e2b80(...);
extern int thunk_FUN_103e2eb0(...);
extern int thunk_FUN_103e3250(...);
extern int thunk_FUN_103e6760(...);
extern int thunk_FUN_103e67d0(...);
extern int thunk_FUN_103e6840(...);
extern int thunk_FUN_103e6b60(...);
extern int thunk_FUN_103e6e90(...);
extern int thunk_FUN_103e6f00(...);
extern int thunk_FUN_103e6f80(...);
extern int thunk_FUN_103e70e0(...);
extern int thunk_FUN_103e9550(...);
extern int thunk_FUN_103e9800(...);
extern int thunk_FUN_103e9cb0(...);
extern int thunk_FUN_103ece00(...);
extern int thunk_FUN_103f6500(...);
extern int thunk_FUN_103f6890(...);
extern int thunk_FUN_103f6e10(...);
extern int thunk_FUN_10403900(...);
extern int thunk_FUN_10404470(...);
extern int thunk_FUN_10404dc0(...);
extern int thunk_FUN_10405f90(...);
extern int thunk_FUN_10406570(...);
extern int thunk_FUN_10406690(...);
extern int thunk_FUN_10406d40(...);
extern int thunk_FUN_10407800(...);
extern int thunk_FUN_10407ce0(...);
extern int thunk_FUN_10408020(...);
extern int thunk_FUN_10408360(...);
extern int thunk_FUN_104083e0(...);
extern int thunk_FUN_10409b40(...);
extern int thunk_FUN_1040be20(...);
extern int thunk_FUN_1040c3a0(...);
extern int thunk_FUN_1040c4f0(...);
extern int thunk_FUN_1040c790(...);
extern int thunk_FUN_1040cd70(...);
extern int thunk_FUN_1040d410(...);
extern int thunk_FUN_1040ed00(...);
extern int thunk_FUN_1040fe70(...);
extern int thunk_FUN_10410930(...);
extern int thunk_FUN_10411ab0(...);
extern int thunk_FUN_10412bd0(...);
extern int thunk_FUN_10413900(...);
extern int thunk_FUN_10416370(...);
extern int thunk_FUN_10424b40(...);
extern int thunk_FUN_10436ab0(...);
extern int thunk_FUN_10436cd0(...);
extern int thunk_FUN_104384c0(...);
extern int thunk_FUN_104ddf90(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_1059d5a0(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_105a7950(...);
extern int thunk_FUN_105a85f0(...);
extern int thunk_FUN_105aca80(...);
extern int thunk_FUN_1061cb50(...);
extern int thunk_FUN_10708df0(...);
extern int thunk_FUN_10c0a0f0(...);
extern int thunk_FUN_10c83a10(...);
extern int thunk_FUN_10c83c30(...);
extern int thunk_FUN_10c83c80(...);
extern int thunk_FUN_10c83ce0(...);
extern int thunk_FUN_10c83f90(...);
extern int thunk_FUN_10c83fc0(...);
extern int thunk_FUN_10c944f0(...);
extern int thunk_FUN_10c9af60(...);
extern int thunk_FUN_10cb6540(...);
extern int thunk_FUN_10cb8420(...);
extern int thunk_FUN_10cbe410(...);
extern int thunk_FUN_10cc0e80(...);
extern int thunk_FUN_10cc0ff0(...);
extern int thunk_FUN_10cedac0(...);
extern int thunk_FUN_10d09230(...);
extern int thunk_FUN_10d87f10(...);
extern int thunk_FUN_1107f270(...);
extern int thunk_FUN_1107f880(...);
extern int thunk_FUN_11080e90(...);
extern int thunk_FUN_11081120(...);
extern int thunk_FUN_110816c0(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110830e0(...);
extern int thunk_FUN_11093230(...);
extern int thunk_FUN_11096620(...);
extern int thunk_FUN_110978c0(...);
extern int thunk_FUN_11097b00(...);
extern int thunk_FUN_1109f0a0(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a0140(...);
extern int thunk_FUN_110c2bc0(...);
extern int thunk_FUN_110c4a10(...);
extern int thunk_FUN_110c4a40(...);
extern int thunk_FUN_110c4a70(...);
extern int thunk_FUN_110cdb30(...);
extern int thunk_FUN_110ce190(...);
extern int thunk_FUN_110d9b30(...);
extern int thunk_FUN_11131cc0(...);
extern int thunk_FUN_11132140(...);
extern int thunk_FUN_11132ba0(...);
extern int thunk_FUN_11132c10(...);
extern int thunk_FUN_11138b60(...);
extern int thunk_FUN_111c05a0(...);
extern int thunk_FUN_111c06e0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11243350(...);
extern int thunk_FUN_11243770(...);
extern int thunk_FUN_11243910(...);
extern int thunk_FUN_11244810(...);
extern int thunk_FUN_1124a160(...);
extern int thunk_FUN_1124a200(...);
extern int thunk_FUN_1124f350(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_11250160(...);
extern int thunk_FUN_112501c0(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_11255220(...);
extern int thunk_FUN_11261330(...);
extern int thunk_FUN_11261e50(...);
extern int thunk_FUN_11261f10(...);
extern int thunk_FUN_11283440(...);
extern int thunk_FUN_112a7c70(...);
extern int thunk_FUN_112a7da0(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_112c35f0(...);
extern int thunk_FUN_112c3710(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_114574b0(...);
extern int thunk_FUN_1145c930(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148ac80(...);
extern int thunk_FUN_1148b586(...);
extern int DAT_00000004;
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_12126b84;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RHTTPBufferedDataIO;
extern int ghidra_vftable_RHttpPostNoRedirectAIOOp;
extern int ghidra_vftable_RRefreshTokenRequest;
extern int ghidra_vftable_RSecRegAccountTransferAIOOp;
extern int ghidra_vftable_RSecRegAccountTransferRequest;
extern int ghidra_vftable_RSecRegBeginSecureTransferAIOOp;
extern int ghidra_vftable_RSecRegBeginSecureTransferRequest;
extern int ghidra_vftable_RSecRegClientTokenAIOOPBase;
extern int ghidra_vftable_RSecRegCreateIdentityRequest;
extern int ghidra_vftable_RSecRegGetRegistrationResult;
extern int ghidra_vftable_RSecRegGetUserAccountRequest;
extern int ghidra_vftable_RSecRegPasswordSetAIOOp;
extern int ghidra_vftable_RSecRegPasswordSetRequest;
extern int ghidra_vftable_RSecRegResetPasswordAIOOp;
extern int ghidra_vftable_RSecRegUpdateUserAIOOp;
extern int ghidra_vftable_RSecRegUserEmailAIOOp;
extern int ghidra_vftable_RSecRegUserGetRequest;
extern int ghidra_vftable_RSecRegValidateEmailAIOOp;
extern int ghidra_vftable_RSecRegVerifyEmailSubmitAIOOp;
extern int ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp;
extern int ghidra_vftable_SCAlarmContentDataSource;
extern int ghidra_vftable_SCAlarmDeleteActionDescriptor;
extern int ghidra_vftable_SCAlarmMusicDataSource;
extern int ghidra_vftable_SCBrowseStackManager;
extern int ghidra_vftable_SCBrowseStackManagerEventSink;
extern int ghidra_vftable_SCChangeEmailWizardActionDescriptor;
extern int ghidra_vftable_SCContentRootPageDataSource;
extern int ghidra_vftable_SCContentSessionCallback;
extern int ghidra_vftable_SCDisplayWizardActionDescriptorBase;
extern int ghidra_vftable_SCElapsedTimeMeasurement;
extern int ghidra_vftable_SCEnumerator;
extern int ghidra_vftable_SCEventSinkDelegate;
extern int ghidra_vftable_SCEventSource;
extern int ghidra_vftable_SCEventSubscriptionImpl;
extern int ghidra_vftable_SCFeatureManager;
extern int ghidra_vftable_SCFeatureManagerEventSink;
extern int ghidra_vftable_SCHouseholdEventSink;
extern int ghidra_vftable_SCIArrayImpl;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIndexedShareDataSource;
extern int ghidra_vftable_SCJsonHelper;
extern int ghidra_vftable_SCJsonValue;
extern int ghidra_vftable_SCLastFMBrowseDataSource;
extern int ghidra_vftable_SCNewWizControllerFor;
extern int ghidra_vftable_SCOfflineTroubleshootActionDescriptor;
extern int ghidra_vftable_SCOpAddAccountX;
extern int ghidra_vftable_SCOpAddLinkCodeAccount;
extern int ghidra_vftable_SCOpFetchToken;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpSecRegCreateIdentity;
extern int ghidra_vftable_SCOpSecRegPasswordSet;
extern int ghidra_vftable_SCOpSecRegRegisterPlayer;
extern int ghidra_vftable_SCOpSecRegUpdateUser;
extern int ghidra_vftable_SCOpSecRegUserEmail;
extern int ghidra_vftable_SCRemoveMeSettingsMenu;
extern int ghidra_vftable_SCRequireTokenActionDescriptor;
extern int ghidra_vftable_SCServiceDescriptor;
extern int ghidra_vftable_SCServiceDescriptorInternals;
extern int ghidra_vftable_SCSettingsMenuAccount;
extern int ghidra_vftable_SCSettingsMenuAirPlay;
extern int ghidra_vftable_SCSettingsMenuAlarm;
extern int ghidra_vftable_SCSettingsMenuAlarmDuration;
extern int ghidra_vftable_SCSettingsMenuAlarmRepeat;
extern int ghidra_vftable_SCSettingsMenuAlarmRoom;
extern int ghidra_vftable_SCSettingsMenuAlarmSnoozeDuration;
extern int ghidra_vftable_SCSettingsMenuAlarms;
extern int ghidra_vftable_SCShareManagerEventSink;
extern int ghidra_vftable_SCSwfObjBCListener;
extern int ghidra_vftable_SCSwfObjHHListener;
extern int ghidra_vftable_SCSwfObjSysListener;
extern int ghidra_vftable_SCTokenManagerEventSink;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_stack_00000018;
extern undefined1 LAB_10092587[];
extern undefined1 LAB_10383897[];
extern undefined1 LAB_1038d7da[];
extern undefined1 LAB_10391b43[];
extern undefined1 LAB_103a540a[];
extern undefined1 LAB_103a5410[];
extern undefined1 LAB_103aa995[];
extern undefined1 LAB_103aa9a2[];
extern undefined1 LAB_103aab96[];
extern undefined1 LAB_103aaba3[];
extern undefined1 LAB_103ee872[];
extern undefined1 LAB_10409325[];
extern undefined1 LAB_10409332[];
extern undefined1 LAB_1041c94e[];
extern undefined1 LAB_115445c7[];
extern undefined1 LAB_115447dd[];
extern undefined1 LAB_11544825[];
extern undefined1 LAB_115448f5[];
extern undefined1 LAB_1154498d[];
extern undefined1 LAB_11544a3d[];
extern undefined1 LAB_11544acd[];
extern undefined1 LAB_11544b25[];
extern undefined1 LAB_11544bad[];
extern undefined1 LAB_11544cab[];
extern undefined1 LAB_1154537e[];
extern undefined1 LAB_11545a3d[];
extern undefined1 LAB_11545b35[];
extern undefined1 LAB_11545c65[];
extern undefined1 LAB_11545cad[];
extern undefined1 LAB_11545cf5[];
extern undefined1 LAB_11546205[];
extern undefined1 LAB_1154624d[];
extern undefined1 LAB_11546295[];
extern undefined1 LAB_115466d5[];
extern undefined1 LAB_115467e5[];
extern undefined1 LAB_1154693d[];
extern undefined1 LAB_11546b50[];
extern undefined1 LAB_11546c60[];
extern undefined1 LAB_11546d4d[];
extern undefined1 LAB_11546d95[];
extern undefined1 LAB_11546ddd[];
extern undefined1 LAB_11546fb0[];
extern undefined1 LAB_11547275[];
extern undefined1 LAB_1154751d[];
extern undefined1 LAB_11547804[];
extern undefined1 LAB_11547925[];
extern undefined1 LAB_11547c85[];
extern undefined1 LAB_11547cc5[];
extern undefined1 LAB_11547fd5[];
extern undefined1 LAB_11548027[];
extern undefined1 LAB_11548074[];
extern undefined1 LAB_11548215[];
extern undefined1 LAB_11548255[];
extern undefined1 LAB_115483e4[];
extern undefined1 LAB_11548485[];
extern undefined1 LAB_115484bd[];
extern undefined1 LAB_11548555[];
extern undefined1 LAB_115488e4[];
extern undefined1 LAB_1154909d[];
extern undefined1 LAB_115490dd[];
extern undefined1 LAB_1154913b[];
extern undefined1 LAB_1154919b[];
extern undefined1 LAB_115491fb[];
extern undefined1 LAB_1154925b[];
extern undefined1 LAB_115492a8[];
extern undefined1 LAB_115492ed[];
extern undefined1 LAB_11549380[];
extern undefined1 LAB_115493b0[];
extern undefined1 LAB_115493e0[];
extern undefined1 LAB_11549470[];
extern undefined1 LAB_115494d0[];
extern undefined1 LAB_11549bed[];
extern undefined1 LAB_11549c2d[];
extern undefined1 LAB_11549c6d[];
extern undefined1 LAB_11549cad[];
extern undefined1 LAB_11549ced[];
extern undefined1 LAB_1154a020[];
extern undefined1 LAB_1154a050[];
extern undefined1 LAB_1154a080[];
extern undefined1 LAB_1154a0f0[];
extern undefined1 LAB_1154a120[];
extern undefined1 LAB_1154a16b[];
extern undefined1 LAB_1154a4e0[];
extern undefined1 LAB_1154a510[];
extern undefined1 LAB_1154a540[];
extern undefined1 LAB_1154a570[];
extern undefined1 LAB_1154a5a0[];
extern undefined1 LAB_1154a5d0[];
extern undefined1 LAB_1154a600[];
extern undefined1 LAB_1154a6c0[];
extern undefined1 LAB_1154a750[];
extern undefined1 LAB_1154a780[];
extern undefined1 LAB_1154a7b0[];
extern undefined1 LAB_1154a7e0[];
extern undefined1 LAB_1154a8b0[];
extern undefined1 LAB_1154a910[];
extern undefined1 LAB_1154a940[];
extern undefined1 LAB_1154ac70[];
extern undefined1 LAB_1154b8c0[];
extern undefined1 LAB_1154b904[];
extern undefined1 LAB_1154ba9e[];
extern undefined1 LAB_1154c020[];
extern undefined1 LAB_1154c4a0[];
extern undefined1 LAB_1154c795[];
extern undefined1 LAB_1154c85d[];
extern undefined1 LAB_1154c920[];
extern undefined1 LAB_1154c950[];
extern undefined1 LAB_1154c980[];
extern undefined1 LAB_1154ca2d[];
extern undefined1 LAB_1154ca85[];
extern undefined1 LAB_1154cacd[];
extern undefined1 LAB_1154cb0d[];
extern undefined1 LAB_1154cb4d[];
extern undefined1 LAB_1154cd0d[];
extern undefined1 LAB_1154cd4d[];
extern undefined1 LAB_1154cdab[];
extern undefined1 LAB_1154ce0b[];
extern undefined1 LAB_1154ce8d[];
extern undefined1 LAB_1154cecd[];
extern undefined1 LAB_1154d005[];
extern undefined1 LAB_1154d1ed[];
extern undefined1 LAB_1154d4a0[];
extern undefined1 LAB_1154d4d0[];
extern undefined1 LAB_1154d500[];
extern undefined1 LAB_1154d530[];
extern undefined1 LAB_1154d560[];
extern undefined1 LAB_1154d590[];
extern undefined1 LAB_1154d5c0[];
extern undefined1 LAB_1154d710[];
extern undefined1 LAB_1154d970[];
extern undefined1 LAB_1154e210[];
extern undefined1 LAB_1154e240[];
extern undefined1 LAB_1154e79d[];
extern undefined1 LAB_1154e7dd[];
extern undefined1 LAB_1154ea5d[];
extern undefined1 LAB_1154ea9d[];
extern undefined1 LAB_1154eb3c[];
extern undefined1 LAB_1154eea7[];
extern undefined1 LAB_1154f07d[];
extern undefined1 LAB_1154f0bd[];
extern undefined1 LAB_1154f0fd[];
extern undefined1 LAB_1154f71d[];
extern undefined1 LAB_1154f75d[];
extern undefined1 LAB_1154f79d[];
extern undefined1 LAB_1154fc00[];
extern undefined1 LAB_115504ed[];
extern undefined1 LAB_115508ad[];
extern undefined1 LAB_1155093e[];
extern undefined1 LAB_11550a80[];
extern undefined1 LAB_11550ab0[];
extern undefined1 LAB_11550b35[];
extern undefined1 LAB_11550b6d[];
extern undefined1 LAB_11550c20[];
extern undefined1 LAB_11550c50[];
extern undefined1 LAB_11550c80[];
extern undefined1 LAB_11550de4[];
extern undefined1 LAB_11550e20[];
extern undefined1 LAB_11550e50[];
extern undefined1 LAB_11550e8d[];
extern undefined1 LAB_11550ecd[];
extern undefined1 LAB_11550f0d[];
extern undefined1 LAB_11550f4d[];
extern undefined1 LAB_11550f8d[];
extern undefined1 LAB_11550fcd[];
extern undefined1 LAB_1155100d[];
extern undefined1 LAB_1155104d[];
extern undefined1 LAB_1155108d[];
extern undefined1 LAB_115510cd[];
extern undefined1 LAB_1155110d[];
extern undefined1 LAB_1155114d[];
extern undefined1 LAB_1155118d[];
extern undefined1 LAB_115511cd[];
extern undefined1 LAB_1155120d[];
extern undefined1 LAB_1155124d[];
extern undefined1 LAB_1155128d[];
extern undefined1 LAB_115512eb[];
extern undefined1 LAB_1155134b[];
extern undefined1 LAB_115513ab[];
extern undefined1 LAB_1155140b[];
extern undefined1 LAB_1155146b[];
extern undefined1 LAB_115514cb[];
extern undefined1 LAB_1155152b[];
extern undefined1 LAB_1155158b[];
extern undefined1 LAB_115515eb[];
extern undefined1 LAB_1155164b[];
extern undefined1 LAB_115516ab[];
extern undefined1 LAB_1155170b[];
extern undefined1 LAB_1155176b[];
extern undefined1 LAB_115517cb[];
extern undefined1 LAB_1155182b[];
extern undefined1 LAB_1155188b[];
extern undefined1 LAB_115518eb[];
extern undefined1 LAB_11551aa1[];
extern undefined1 LAB_11551b09[];
extern undefined1 LAB_11551b66[];
extern undefined1 LAB_11551d87[];
extern undefined1 LAB_11552079[];
extern undefined1 LAB_11552581[];
extern undefined1 LAB_11552d0d[];
extern undefined1 LAB_11552f8d[];
extern undefined1 LAB_115530bd[];
extern undefined1 LAB_115531fd[];
extern undefined1 LAB_1155326d[];
extern undefined1 LAB_11553890[];
extern undefined1 LAB_11553950[];
extern undefined1 LAB_115539b0[];
extern undefined1 LAB_11553a10[];
extern undefined1 LAB_11553bf0[];
extern undefined1 LAB_11553d10[];
extern undefined1 LAB_11553d70[];
extern undefined1 LAB_11553e30[];
extern undefined1 LAB_11553ef0[];
extern undefined1 LAB_11553fe0[];
extern undefined1 LAB_11554010[];
extern undefined1 LAB_11554130[];
extern undefined1 LAB_115541c0[];
extern undefined1 LAB_115541f0[];
extern undefined1 LAB_11554220[];
extern undefined1 LAB_11554280[];
extern undefined1 LAB_115545ed[];
extern undefined1 LAB_1155462d[];
extern undefined1 LAB_1155466d[];
extern undefined1 LAB_1155569d[];
extern undefined1 LAB_115556dd[];
extern undefined1 LAB_1155571d[];
extern undefined1 LAB_1155575d[];
extern undefined1 LAB_1155579d[];
extern undefined1 LAB_115557dd[];
extern undefined1 LAB_1155581d[];
extern undefined1 LAB_1155585d[];
extern undefined1 LAB_1155589d[];
extern undefined1 LAB_115558dd[];
extern undefined1 LAB_1155591d[];
extern undefined1 LAB_1155595d[];
extern undefined1 LAB_1155599d[];
extern undefined1 LAB_115559dd[];
extern undefined1 LAB_11555a1d[];
extern undefined1 LAB_11555a5d[];
extern undefined1 LAB_11555a9d[];
extern undefined1 LAB_11555add[];
extern undefined1 LAB_11555b1d[];
extern undefined1 LAB_11555b5d[];
extern undefined1 LAB_11555b9d[];
extern undefined1 LAB_11555bdd[];
extern undefined1 LAB_11555c1d[];
extern undefined1 LAB_11555c5d[];
extern undefined1 LAB_11555c9d[];
extern undefined1 LAB_11555cdd[];
extern undefined1 LAB_11555d1d[];
extern undefined1 LAB_11555d5d[];
extern undefined1 LAB_11555d9d[];
extern undefined1 LAB_11555ddd[];
extern undefined1 LAB_11555e1d[];
extern undefined1 LAB_11555e5d[];
extern undefined1 LAB_11555e9d[];
extern undefined1 LAB_11555edd[];
extern undefined1 LAB_11556877[];
extern undefined1 LAB_115568c7[];
extern undefined1 LAB_11556a57[];
extern undefined1 LAB_11556aa7[];
extern undefined1 LAB_11556af7[];
extern undefined1 LAB_11556bbd[];
extern undefined1 LAB_11556bfd[];
extern undefined1 LAB_11556eb5[];
extern undefined1 LAB_1155711d[];
extern undefined1 LAB_1155715d[];
extern undefined1 LAB_1155719d[];
extern undefined1 LAB_115571dd[];
extern undefined1 LAB_1155721d[];
extern undefined1 LAB_1155725d[];
extern undefined1 LAB_1155729d[];
extern undefined1 LAB_11557700[];
extern undefined1 LAB_11557730[];
extern undefined1 LAB_11557760[];
extern undefined1 LAB_11557790[];
extern undefined1 LAB_115577c0[];
extern undefined1 LAB_115577f0[];
extern undefined1 LAB_11557820[];
extern undefined1 LAB_11557850[];
extern undefined1 LAB_11557880[];
extern undefined1 LAB_115578b0[];
extern undefined1 LAB_115578e0[];
extern undefined1 LAB_11557a00[];
extern undefined1 LAB_11557aad[];
extern undefined1 LAB_11557be0[];
extern undefined1 LAB_11557c70[];
extern undefined1 LAB_11557ff5[];
extern undefined1 LAB_11558735[];
extern undefined1 LAB_11558b5d[];
extern undefined1 LAB_11559120[];
extern undefined1 LAB_11559245[];
extern undefined1 LAB_115593b5[];
extern undefined1 LAB_115593f5[];
extern undefined1 LAB_1155948d[];
extern undefined1 LAB_11559770[];
extern undefined1 LAB_11559820[];
extern undefined1 LAB_11559850[];
extern undefined1 LAB_11559970[];
extern undefined1 LAB_11559a4d[];
extern undefined1 LAB_11559ac0[];
extern undefined1 LAB_11559b12[];
extern undefined1 LAB_11559bc0[];
extern undefined1 LAB_11559c08[];
extern undefined1 LAB_11559c90[];
extern undefined1 LAB_11559cc0[];
extern undefined1 LAB_11559d20[];
extern undefined1 LAB_11559d50[];
extern undefined1 LAB_11559de0[];
extern undefined1 LAB_11559e10[];
extern undefined1 LAB_11559ed0[];
extern undefined1 LAB_11559f40[];
extern undefined1 LAB_11559fc4[];
extern undefined1 LAB_1155a004[];
extern undefined1 LAB_1155a0b3[];
extern undefined1 LAB_1155a0f4[];
extern undefined1 LAB_1155a134[];
extern undefined1 LAB_1155a314[];
extern undefined1 LAB_1155a36d[];
extern undefined1 LAB_1155a3dd[];
extern undefined1 LAB_1155a42d[];
extern undefined1 LAB_1155a460[];
extern undefined1 LAB_1155af2d[];
extern undefined1 LAB_1155af6d[];
extern undefined1 LAB_1155b0b0[];
extern undefined1 LAB_1155b0e0[];
extern undefined1 LAB_1155b1a0[];
extern undefined1 LAB_1155b1d0[];
extern undefined1 LAB_1155b260[];
extern undefined1 LAB_1155b676[];
extern undefined1 LAB_1155bf10[];
extern undefined1 LAB_1155bf40[];
extern undefined1 LAB_1155bf70[];
extern undefined1 LAB_1155c37f[];
extern undefined1 LAB_1155c3c7[];
extern undefined1 LAB_1155c59f[];
extern undefined1 LAB_1155c5ef[];
extern undefined1 LAB_1155c63f[];
extern undefined1 LAB_1155c68f[];
extern undefined1 LAB_1155c7df[];
extern undefined1 LAB_1155c98f[];
extern undefined1 LAB_1155cacf[];
extern undefined1 LAB_1155cb1f[];
extern undefined1 LAB_1155cb6f[];
extern undefined1 LAB_1155d725[];
extern undefined1 LAB_1155d89d[];
extern undefined1 LAB_1155dc3d[];
extern undefined1 LAB_1155dc7d[];
extern undefined1 LAB_1155dcbd[];
extern undefined1 LAB_1155dcfd[];
extern undefined1 LAB_1155df00[];
extern undefined1 LAB_1155df30[];
extern undefined1 LAB_1155df60[];
extern undefined1 LAB_1155df90[];
extern undefined1 LAB_1155dfc0[];
extern undefined1 LAB_1155dff0[];
extern undefined1 LAB_1155e5d0[];
extern undefined1 LAB_1155e600[];
extern undefined1 LAB_1155e6cd[];
extern undefined1 LAB_1155e8ad[];
extern undefined1 LAB_1155e905[];
extern undefined1 LAB_1155eb50[];
extern undefined1 LAB_1155eb80[];
extern undefined1 LAB_1155ee45[];
extern undefined1 LAB_1155eee5[];
extern undefined1 LAB_1155ef25[];
extern undefined1 LAB_1155efa5[];
extern undefined1 LAB_1155fe50[];
extern undefined1 LAB_1155fe80[];
extern undefined1 LAB_1155feb0[];
extern undefined1 LAB_1155fee0[];
extern undefined1 LAB_1155ff70[];
extern undefined1 LAB_1155ffa0[];
extern undefined1 LAB_1155ffd0[];
extern undefined1 LAB_11560000[];
extern undefined1 LAB_11560030[];
extern undefined1 LAB_11560060[];
extern undefined1 LAB_11560090[];
extern undefined1 LAB_115600c0[];
extern undefined1 LAB_115600f0[];
extern undefined1 LAB_11560120[];
extern undefined1 LAB_11560150[];
extern undefined1 LAB_11560180[];
extern undefined1 LAB_115601b0[];
extern int *PTR_s_LastUpdateSystemStatusShown_1211956c;
extern int *stack0x00000008;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std {}
struct SCFetchTokenOpActionWrapper { char _pad; SCFetchTokenOpActionWrapper(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int perform; };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int createDisplayWizardAction(A...); template<class... A> int getCurrentThreadID(A...); template<class... A> int getMainThreadID(A...); template<class... A> int getSCHousehold(A...); template<class... A> int getSingleton(A...); };
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int int_start(A...); };
struct SCPropertyBag { char _pad; SCPropertyBag(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int createSCObject(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int int_release(A...); template<class... A> int op_eq(A...); };
namespace std { template<class...> struct _Parallelism_allocator { char _pad; _Parallelism_allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct allocator { char _pad; allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct greater { char _pad; greater(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct priority_queue { char _pad; priority_queue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct vector { char _pad; vector(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
typedef void *CHN;
typedef void *LOCK;
typedef void *UNLOCK;
typedef void *WARNING;
struct AccountID { char _pad; AccountID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AccountKey { char _pad; AccountKey(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AccountNickname { char _pad; AccountNickname(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AccountPassword { char _pad; AccountPassword(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AccountTier { char _pad; AccountTier(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AccountToken { char _pad; AccountToken(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AccountType { char _pad; AccountType(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AccountUDN { char _pad; AccountUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AddOAuthAccountX { char _pad; AddOAuthAccountX(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Attempting { char _pad; Attempting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AuthorizationCode { char _pad; AuthorizationCode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Base { char _pad; Base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Canceling { char _pad; Canceling(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Different { char _pad; Different(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Event { char _pad; Event(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FID_conflict__Tidy { char _pad; FID_conflict__Tidy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Forced { char _pad; Forced(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Library { char _pad; Library(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Matches { char _pad; Matches(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Multiple { char _pad; Multiple(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Names { char _pad; Names(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct OAuthDeviceID { char _pad; OAuthDeviceID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Performing { char _pad; Performing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RTMFetchClientTokenRequest { char _pad; RTMFetchClientTokenRequest(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Received { char _pad; Received(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RedirectURI { char _pad; RedirectURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Release { char _pad; Release(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Remove { char _pad; Remove(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Retrying { char _pad; Retrying(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Running { char _pad; Running(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCEventSource { char _pad; SCEventSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCHousehold { char _pad; SCHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIUserAccount { char _pad; SCIUserAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIWizard { char _pad; SCIWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCOpRefreshToken { char _pad; SCOpRefreshToken(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Sink { char _pad; Sink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Stopping { char _pad; Stopping(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct StringValue { char _pad; StringValue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Studio { char _pad; Studio(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SystemProperties { char _pad; SystemProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct The { char _pad; The(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UserIdHashCode { char _pad; UserIdHashCode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct VariableName { char _pad; VariableName(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Visual { char _pad; Visual(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct With { char _pad; With(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; undefined4 * __thiscall FUN_10382470(undefined4 *param_2); int __thiscall FUN_10383210(undefined4 param_2,int *param_3); undefined4 __thiscall FUN_10384680(int param_2); undefined4 * __thiscall FUN_10384dc0(undefined4 *param_2,undefined4 param_3); int * __thiscall FUN_1038a190(int *param_2); undefined4 * __thiscall FUN_1038f1c0(undefined4 *param_2,int *param_3); undefined4 * __thiscall FUN_1038f5d0(undefined4 *param_2,int *param_3); undefined4 * __thiscall FUN_1038f940(undefined4 *param_2,int *param_3); int * __thiscall FUN_1038faf0(int *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1038fc10(undefined4 *param_2,int *param_3); undefined4 * __thiscall FUN_10390660(undefined4 *param_2,int *param_3); void __thiscall FUN_10391970(int param_2); void __thiscall FUN_10391a10(int param_2); void __thiscall FUN_10392f70(int *param_2); void __thiscall FUN_10392ff0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10393730(char param_2); int __thiscall FUN_10395b90(int param_2); undefined4 __thiscall FUN_10395c10(int param_2); undefined4 __thiscall FUN_10396540(undefined4 param_2); void __thiscall FUN_103970c0(int *param_2); void __thiscall FUN_10399410(undefined4 param_2); void __thiscall FUN_10399500(int *param_2); void __thiscall FUN_1039a280(int param_2); undefined4 * __thiscall FUN_1039ecd0(int param_2); undefined4 * __thiscall FUN_1039ed60(int param_2); undefined4 * __thiscall FUN_1039ee80(int param_2); undefined4 * __thiscall FUN_1039efe0(int param_2); undefined4 * __thiscall FUN_1039f2f0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); undefined4 * __thiscall FUN_1039f3d0(int param_2); undefined4 * __thiscall FUN_1039f540(int param_2); undefined4 * __thiscall FUN_1039f6c0(undefined4 param_2); undefined4 * __thiscall FUN_1039f770(int param_2); int * __thiscall FUN_1039ff50(int *param_2); undefined4 * __thiscall FUN_103a0420(byte param_2); void __thiscall FUN_103a0620(int *param_2,undefined4 param_3); void __thiscall FUN_103a0700(int *param_2,undefined4 param_3); void __thiscall FUN_103a32b0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103a33e0(undefined4 param_2,undefined4 param_3); int __thiscall FUN_103a3f30(undefined4 param_2,undefined4 param_3); int __thiscall FUN_103a3fe0(undefined4 param_2,undefined4 param_3); int * __thiscall FUN_103a4600(int *param_2); void __thiscall FUN_103a5290(uint param_2,undefined4 param_3); void __thiscall FUN_103a5300(uint param_2,undefined4 param_3); undefined4 * __thiscall FUN_103a65f0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9); int * __thiscall FUN_103a8a50(int *param_2); void __thiscall FUN_103a9120(int *param_2,uint param_3); void __thiscall FUN_103a91a0(int *param_2,int param_3); int * __thiscall FUN_103a9240(int param_2); undefined4 * __thiscall FUN_103a9740(byte param_2); undefined4 * __thiscall FUN_103a9880(byte param_2); undefined4 * __thiscall FUN_103a9a90(byte param_2); undefined4 * __thiscall FUN_103a9b70(byte param_2); undefined4 * __thiscall FUN_103a9c90(byte param_2); undefined4 * __thiscall FUN_103a9d50(byte param_2); void __thiscall FUN_103aa810(uint param_2); void __thiscall FUN_103aaa10(uint param_2); void __thiscall FUN_103ab380(int param_2); void __thiscall FUN_103ab5c0(int *param_2); void __thiscall FUN_103ac060(int *param_2); void __thiscall FUN_103b6b10(int *param_2); undefined4 * __thiscall FUN_103b7120(undefined4 *param_2); undefined4 * __thiscall FUN_103b7770(undefined4 *param_2); void __thiscall FUN_103b99d0(int param_2); void __thiscall FUN_103bd680(uint param_2,undefined4 param_3); void __thiscall FUN_103be270(int param_2); undefined4 * __thiscall FUN_103be350(undefined4 *param_2,int *param_3,int *param_4); undefined4 * __thiscall FUN_103be8f0(byte param_2); undefined4 __thiscall FUN_103beae0(int *param_2,int param_3); undefined4 * __thiscall FUN_103bec30(undefined4 *param_2,int *param_3); int * __thiscall FUN_103bed80(int *param_2); undefined4 * __thiscall FUN_103bee80(undefined4 *param_2,int *param_3,int *param_4); void __thiscall FUN_103bf020(uint param_2,int *param_3); undefined4 * __thiscall FUN_103c0250(int param_2); undefined4 * __thiscall FUN_103c02e0(int param_2); undefined4 * __thiscall FUN_103c0420(int param_2); undefined4 * __thiscall FUN_103c0580(int param_2); int __thiscall FUN_103c0a80(int param_2); int __thiscall FUN_103c0b10(int param_2); undefined4 * __thiscall FUN_103c1540(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6); int * __thiscall FUN_103c31d0(int *param_2); int * __thiscall FUN_103c3240(int *param_2); int * __thiscall FUN_103c32b0(int *param_2); int * __thiscall FUN_103c3320(int *param_2); int * __thiscall FUN_103c3390(int *param_2); undefined4 * __thiscall FUN_103c3c80(byte param_2); undefined4 * __thiscall FUN_103c3f70(byte param_2); void __thiscall FUN_103c4b80(int param_2); void __thiscall FUN_103c4ca0(int *param_2); void __thiscall FUN_103c5d70(int *param_2,undefined4 param_3); void __thiscall FUN_103c5e50(int *param_2,undefined4 param_3); int __thiscall FUN_103c64f0(int *param_2); void __thiscall FUN_103ca3b0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103ca4e0(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_103ca610(int *param_2); int __thiscall FUN_103cbe30(int param_2); undefined4 * __thiscall FUN_103ccf00(undefined4 param_2); int * __thiscall FUN_103ccfc0(int *param_2); int * __thiscall FUN_103cd0e0(int *param_2); void __thiscall FUN_103cd850(int *param_2,undefined4 param_3); undefined4 * __thiscall FUN_103ceef0(undefined4 *param_2); undefined4 * __thiscall FUN_103cef90(undefined4 *param_2); undefined4 * __thiscall FUN_103cf280(undefined4 param_2); int * __thiscall FUN_103cf370(int *param_2); int * __thiscall FUN_103cf4f0(int *param_2); void __thiscall FUN_103d21d0(int param_2); void __thiscall FUN_103d2430(int *param_2); undefined4 * __thiscall FUN_103d4210(undefined4 *param_2); undefined4 __thiscall FUN_103d4e00(int param_2); int __thiscall FUN_103d51f0(int param_2,undefined4 param_3); undefined4 __thiscall FUN_103d53c0(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_103d5970(byte param_2); void __thiscall FUN_103d5b30(int *param_2); int * __thiscall FUN_103d5ca0(int *param_2,int param_3); int __thiscall FUN_103d6140(byte param_2); undefined4 * __thiscall FUN_103d6740(undefined4 *param_2); undefined4 __thiscall FUN_103d6930(int param_2); undefined4 * __thiscall FUN_103d7050(int param_2); undefined4 * __thiscall FUN_103d70e0(int param_2); undefined4 * __thiscall FUN_103d7170(int param_2); undefined4 * __thiscall FUN_103d7200(int param_2); undefined4 * __thiscall FUN_103d7290(int param_2); undefined4 * __thiscall FUN_103d7320(int param_2); undefined4 * __thiscall FUN_103d73b0(int param_2); undefined4 * __thiscall FUN_103d7440(int param_2); undefined4 * __thiscall FUN_103d74d0(int param_2); undefined4 * __thiscall FUN_103d7560(int param_2); undefined4 * __thiscall FUN_103d75f0(int param_2); undefined4 * __thiscall FUN_103d7680(int param_2); undefined4 * __thiscall FUN_103d7710(int param_2); undefined4 * __thiscall FUN_103d77a0(int param_2); undefined4 * __thiscall FUN_103d7830(int param_2); undefined4 * __thiscall FUN_103d78c0(int param_2); undefined4 * __thiscall FUN_103d7950(int param_2); undefined4 * __thiscall FUN_103d7a10(int param_2); undefined4 * __thiscall FUN_103d7b70(int param_2); undefined4 * __thiscall FUN_103d7cd0(int param_2); undefined4 * __thiscall FUN_103d7e30(int param_2); undefined4 * __thiscall FUN_103d7f90(int param_2); undefined4 * __thiscall FUN_103d80f0(int param_2); undefined4 * __thiscall FUN_103d8250(int param_2); undefined4 * __thiscall FUN_103d83b0(int param_2); undefined4 * __thiscall FUN_103d8510(int param_2); undefined4 * __thiscall FUN_103d8670(int param_2); undefined4 * __thiscall FUN_103d87d0(int param_2); undefined4 * __thiscall FUN_103d8930(int param_2); undefined4 * __thiscall FUN_103d8a90(int param_2); undefined4 * __thiscall FUN_103d8bf0(int param_2); undefined4 * __thiscall FUN_103d8d50(int param_2); undefined4 * __thiscall FUN_103d8eb0(int param_2); undefined4 * __thiscall FUN_103d9010(int param_2); undefined4 * __thiscall FUN_103d9640(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_103d97c0(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_103d98e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7); undefined4 * __thiscall FUN_103d9f60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_103daa90(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_103dd590(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_103dde60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_103de320(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13); undefined4 * __thiscall FUN_103de830(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_103de9e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_103e4480(byte param_2); undefined4 * __thiscall FUN_103e4570(byte param_2); undefined4 * __thiscall FUN_103e4df0(byte param_2); undefined4 * __thiscall FUN_103e5190(byte param_2); undefined4 * __thiscall FUN_103e5280(byte param_2); undefined4 * __thiscall FUN_103e5360(byte param_2); undefined4 * __thiscall FUN_103e5430(byte param_2); undefined4 * __thiscall FUN_103e5640(byte param_2); void __thiscall FUN_103e7150(int *param_2,undefined4 param_3); void __thiscall FUN_103e7230(int *param_2,undefined4 param_3); void __thiscall FUN_103e7310(int *param_2,undefined4 param_3); void __thiscall FUN_103e73f0(int *param_2,undefined4 param_3); void __thiscall FUN_103e74d0(int *param_2,undefined4 param_3); void __thiscall FUN_103e75b0(int *param_2,undefined4 param_3); void __thiscall FUN_103e7690(int *param_2,undefined4 param_3); void __thiscall FUN_103e7770(int *param_2,undefined4 param_3); void __thiscall FUN_103e7850(int *param_2,undefined4 param_3); void __thiscall FUN_103e7930(int *param_2,undefined4 param_3); void __thiscall FUN_103e7a10(int *param_2,undefined4 param_3); void __thiscall FUN_103e7af0(int *param_2,undefined4 param_3); void __thiscall FUN_103e7bd0(int *param_2,undefined4 param_3); void __thiscall FUN_103e7cb0(int *param_2,undefined4 param_3); void __thiscall FUN_103e7d90(int *param_2,undefined4 param_3); void __thiscall FUN_103e7e70(int *param_2,undefined4 param_3); void __thiscall FUN_103e7f50(int *param_2,undefined4 param_3); void __thiscall FUN_103e8170(int param_2,int *param_3); undefined4 __thiscall FUN_103ee850(int param_2,undefined4 param_3); void __thiscall FUN_103f0b40(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103f0c70(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103f0da0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103f0ed0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103f1000(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103f1130(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103f1260(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103f1390(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103f14c0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103f15f0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103f1720(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103f1850(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103f1980(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103f1ab0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103f1be0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103f1d10(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103f1e40(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103f4ff0(undefined4 param_2); void __thiscall FUN_103f50e0(undefined4 param_2); void __thiscall FUN_103f5770(undefined4 param_2); void __thiscall FUN_103f58f0(undefined4 param_2); void __thiscall FUN_103f5a00(undefined4 param_2); undefined4 * __thiscall FUN_103f5dc0(int param_2); int * __thiscall FUN_103f5ee0(int *param_2); int * __thiscall FUN_103f6e10(int *param_2,int *param_3); int __thiscall FUN_103f7710(int *param_2,undefined4 param_3); undefined4 * __thiscall FUN_103f8420(undefined4 *param_2); int __thiscall FUN_103f8710(int param_2); int __thiscall FUN_103f8790(int *param_2); int __thiscall FUN_103f8800(int param_2); int __thiscall FUN_103f8890(int param_2); int __thiscall FUN_103f8920(int param_2); int __thiscall FUN_103f89b0(int param_2); int __thiscall FUN_103f8a40(int param_2); int * __thiscall FUN_103f8b40(int *param_2); int * __thiscall FUN_103fb4b0(int *param_2); undefined4 * __thiscall FUN_103fbfb0(byte param_2); undefined4 * __thiscall FUN_103fc3c0(byte param_2); void __thiscall FUN_103ff350(int *param_2,int *param_3); int __thiscall FUN_10405240(undefined4 param_2,undefined4 *param_3); int * __thiscall FUN_10405900(int *param_2); undefined4 __thiscall FUN_10406570(undefined4 param_2,int *param_3); int __thiscall FUN_10406620(undefined4 *param_2); int * __thiscall FUN_10406690(int *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_10407b30(int param_2,undefined1 param_3); undefined4 * __thiscall FUN_10407c50(undefined4 param_2,undefined1 param_3); int * __thiscall FUN_10408680(int *param_2); undefined4 * __thiscall FUN_10408ab0(byte param_2); void __thiscall FUN_10408e60(int param_2,int param_3,int param_4); void __thiscall FUN_104091a0(uint param_2); void __thiscall FUN_1040a540(int *param_2,undefined4 *param_3); void __thiscall FUN_1040a620(undefined4 param_2); void __thiscall FUN_1040a7d0(int param_2,undefined1 param_3); void __thiscall FUN_1040acc0(int param_2); void __thiscall FUN_1040af40(int param_2); void __thiscall FUN_1040b120(undefined4 param_2); undefined4 * __thiscall FUN_1040b6e0(undefined4 *param_2); int * __thiscall FUN_1040be20(int *param_2,undefined4 param_3,undefined4 param_4); int * __thiscall FUN_1040f7e0(int *param_2); int __thiscall FUN_10411310(int *param_2); int __thiscall FUN_10411380(int param_2); int __thiscall FUN_10411400(int param_2); undefined4 * __thiscall FUN_10412190(byte param_2); undefined4 * __thiscall FUN_104124d0(byte param_2); void __thiscall FUN_104127f0(int param_2,int param_3,int param_4); float __thiscall FUN_10412aa0(int param_2); void __thiscall FUN_10412f60(int param_2); int * __thiscall FUN_10415f70(int *param_2); int * __thiscall FUN_10416f00(int *param_2); int * __thiscall FUN_10416f70(int *param_2); int * __thiscall FUN_10417040(int *param_2); int * __thiscall FUN_104170b0(int *param_2); undefined4 * __thiscall FUN_1041c840(undefined4 *param_2); void __thiscall FUN_1041cfb0(int *param_2); void __thiscall FUN_1041d230(int *param_2); void __thiscall FUN_1041d2c0(int *param_2); void __thiscall FUN_1041d3a0(int param_2,int param_3,undefined1 param_4); void __thiscall FUN_1041d490(int *param_2); void __thiscall FUN_1041d5a0(undefined4 *param_2); int __thiscall FUN_1041eff0(int param_2); int __thiscall FUN_1041f070(int param_2); int __thiscall FUN_1041f0f0(int param_2); int __thiscall FUN_1041f170(int param_2); undefined4 * __thiscall FUN_1041f210(undefined1 param_2); undefined4 * __thiscall FUN_10421ea0(byte param_2); undefined4 * __thiscall FUN_10421f10(byte param_2); undefined4 * __thiscall FUN_10421f80(byte param_2); undefined4 * __thiscall FUN_10421ff0(byte param_2); undefined4 * __thiscall FUN_10422060(byte param_2); undefined4 * __thiscall FUN_10422150(byte param_2); void __thiscall FUN_10422780(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_104248b0(byte param_2); int * __thiscall FUN_104259a0(int *param_2); int * __thiscall FUN_10425b60(int *param_2); undefined4 * __thiscall FUN_1042b2d0(byte param_2); undefined4 * __thiscall FUN_1042b3b0(byte param_2); undefined4 * __thiscall FUN_1042b510(byte param_2); undefined4 * __thiscall FUN_1042b5f0(byte param_2); undefined4 * __thiscall FUN_1042b6d0(byte param_2); };
using namespace std;
void __stdcall FUN_103832e0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6,
                 int *param_7,int *param_8);
undefined1 __fastcall FUN_10383800(int *param_1);
bool __fastcall FUN_10383ab0(int param_1);
bool __stdcall FUN_10383e50(int param_1);
bool __fastcall FUN_10384120(int param_1);
undefined4 __fastcall FUN_103841c0(int param_1);
undefined4 __fastcall FUN_103842d0(int param_1);
int __fastcall FUN_10384350(int param_1);
void __fastcall FUN_10384750(int param_1);
void __fastcall FUN_10384890(int param_1);
undefined4 * FUN_10387aa0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined1 * __fastcall FUN_1038a490(int param_1);
void __fastcall FUN_1038a990(int param_1);
void __fastcall FUN_1038aa80(int param_1);
void __fastcall FUN_1038aba0(int param_1);
void __fastcall FUN_1038bb40(int param_1);
void __fastcall FUN_1038be90(int param_1);
void __fastcall FUN_1038bf80(int param_1);
void __fastcall FUN_1038c0a0(int param_1);
undefined1 __stdcall FUN_1038d6f0(char param_1);
bool FUN_1038dd80(void);
void __fastcall FUN_1038e3d0(int param_1);
void FUN_10391bc0(void);
void __fastcall FUN_103952e0(int param_1);
void __fastcall FUN_10395810(int *param_1);
void FUN_10397190(char *param_1);
void __fastcall FUN_10397e40(int *param_1);
undefined1 * __fastcall FUN_103987b0(int param_1);
void __fastcall FUN_103988e0(int param_1);
void __fastcall FUN_103989d0(int *param_1);
void __fastcall FUN_10399ec0(int param_1);
void __fastcall FUN_1039a4d0(int param_1);
void __fastcall FUN_1039a5e0(int *param_1);
void __fastcall FUN_1039aa10(int param_1);
void __fastcall FUN_1039bf90(int param_1);
void __fastcall FUN_1039fb50(undefined4 *param_1);
void __fastcall FUN_1039fbc0(undefined4 *param_1);
void __fastcall FUN_1039fc30(undefined4 *param_1);
void __fastcall FUN_1039fe50(undefined4 *param_1);
void __fastcall FUN_103a0560(int param_1);
void __fastcall FUN_103a05c0(int param_1);
void __fastcall FUN_103a0890(int param_1);
undefined1 __fastcall FUN_103a0910(int param_1);
undefined4 __fastcall FUN_103a1600(int param_1);
undefined4 __fastcall FUN_103a1fd0(int param_1);
undefined4 __fastcall FUN_103a2ff0(int *param_1);
void __fastcall FUN_103a3130(int param_1);
void __fastcall FUN_103a31d0(int param_1);
int FUN_103a3ed0(int *param_1);
void FUN_103a5a40(undefined4 param_1,undefined4 *param_2);
undefined4 * __fastcall FUN_103a5f40(undefined4 *param_1);
undefined4 * __fastcall FUN_103a5fe0(undefined4 *param_1);
undefined4 * __fastcall FUN_103a64a0(undefined4 *param_1);
undefined4 * __fastcall FUN_103a6530(undefined4 *param_1);
void __fastcall FUN_103a76b0(undefined4 *param_1);
void __fastcall FUN_103a7720(undefined4 *param_1);
void __fastcall FUN_103a7790(undefined4 *param_1);
void __fastcall FUN_103a7800(undefined4 *param_1);
void __fastcall FUN_103a7870(undefined4 *param_1);
void __fastcall FUN_103a78e0(undefined4 *param_1);
void __fastcall FUN_103a7950(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_103a7bc0(int *param_1);
void __fastcall FUN_103a7c30(undefined4 *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_103a7fd0(int *param_1);
void __fastcall FUN_103a8040(undefined4 *param_1);
void __fastcall FUN_103a81d0(undefined4 *param_1);
void __fastcall FUN_103a8350(undefined4 *param_1);
void __fastcall FUN_103a8600(undefined4 *param_1);
void __fastcall FUN_103ab630(int param_1);
int * FUN_103ab950(int *param_1,int param_2,int *param_3);
void __stdcall FUN_103b71b0(undefined4 *param_1);
void __stdcall FUN_103b9e20(int param_1);
void __fastcall FUN_103bc4b0(int param_1);
void __fastcall FUN_103bc670(int *param_1);
void __stdcall FUN_103bddb0(int *param_1);
void __fastcall FUN_103be770(int param_1);
void __fastcall FUN_103be7e0(undefined4 *param_1);
undefined4 * __fastcall FUN_103c0e80(undefined4 *param_1);
void __fastcall FUN_103c20e0(undefined4 *param_1);
void __fastcall FUN_103c21d0(undefined4 *param_1);
void __fastcall FUN_103c22c0(undefined4 *param_1);
void __fastcall FUN_103c2330(undefined4 *param_1);
void __fastcall FUN_103c23a0(undefined4 *param_1);
void __fastcall FUN_103c2410(undefined4 *param_1);
void __fastcall FUN_103c2480(undefined4 *param_1);
void __fastcall FUN_103c2d10(undefined4 *param_1);
void __fastcall FUN_103c4e00(int param_1);
void __fastcall FUN_103c4e60(int param_1);
void __fastcall FUN_103c4ec0(int param_1);
void __fastcall FUN_103c6b20(int param_1);
void __fastcall FUN_103c6bb0(int param_1);
void __stdcall FUN_103c6d60(undefined4 param_1,int *param_2);
void __stdcall FUN_103c6dd0(undefined4 param_1,int *param_2);
void __fastcall FUN_103c9230(int param_1);
void __fastcall FUN_103c92e0(int param_1);
void __fastcall FUN_103c9570(int param_1);
void __fastcall FUN_103c9610(int param_1);
void __fastcall FUN_103cbfc0(int param_1);
void __fastcall FUN_103d0670(undefined4 *param_1);
int * __fastcall FUN_103d12c0(int *param_1);
int * __fastcall FUN_103d1360(int *param_1);
void __fastcall FUN_103d4880(int param_1);
void __fastcall FUN_103d5870(undefined4 *param_1);
void __fastcall FUN_103d6030(int param_1);
void __fastcall FUN_103d60a0(undefined4 *param_1);
void __fastcall FUN_103d6860(int param_1);
void __fastcall FUN_103d6e00(longlong *param_1);
undefined4 * __fastcall FUN_103da330(undefined4 *param_1);
undefined4 * __fastcall FUN_103da3e0(undefined4 *param_1);
undefined4 * __fastcall FUN_103dbde0(undefined4 *param_1);
void __fastcall FUN_103e0d50(undefined4 *param_1);
void __fastcall FUN_103e1250(undefined4 *param_1);
void __fastcall FUN_103e13b0(undefined4 *param_1);
void __fastcall FUN_103e15a0(undefined4 *param_1);
void __fastcall FUN_103e21d0(undefined4 *param_1);
void __fastcall FUN_103e2810(undefined4 *param_1);
void __fastcall FUN_103e29a0(undefined4 *param_1);
void __fastcall FUN_103e2e20(undefined4 *param_1);
void __fastcall FUN_103e31c0(undefined4 *param_1);
void __fastcall FUN_103e5fc0(int param_1);
void __fastcall FUN_103e6020(int param_1);
void __fastcall FUN_103e6080(int param_1);
void __fastcall FUN_103e60e0(int param_1);
void __fastcall FUN_103e6140(int param_1);
void __fastcall FUN_103e61a0(int param_1);
void __fastcall FUN_103e6200(int param_1);
void __fastcall FUN_103e6260(int param_1);
void __fastcall FUN_103e62c0(int param_1);
void __fastcall FUN_103e6320(int param_1);
void __fastcall FUN_103e6380(int param_1);
void __fastcall FUN_103e63e0(int param_1);
void __fastcall FUN_103e6440(int param_1);
void __fastcall FUN_103e64a0(int param_1);
void __fastcall FUN_103e6500(int param_1);
void __fastcall FUN_103e6560(int param_1);
void __fastcall FUN_103e65c0(int param_1);
void __fastcall FUN_103e6620(int param_1);
void __fastcall FUN_103e6690(int param_1);
void __fastcall FUN_103e6760(int param_1);
void __fastcall FUN_103e67d0(int param_1);
void __fastcall FUN_103e6840(int param_1);
void __fastcall FUN_103e6940(int param_1);
void __fastcall FUN_103e6a10(int param_1);
void __fastcall FUN_103e6a80(int param_1);
void __fastcall FUN_103e6af0(int param_1);
void __fastcall FUN_103e6b60(int param_1);
void __fastcall FUN_103e6cd0(int param_1);
void __fastcall FUN_103e6d40(int param_1);
void __fastcall FUN_103e6e90(int param_1);
void __fastcall FUN_103e6f00(int param_1);
void __fastcall FUN_103e6f80(int param_1);
void __fastcall FUN_103e6ff0(int param_1);
void __fastcall FUN_103e70e0(int param_1);
void __fastcall FUN_103f00a0(int param_1);
void __fastcall FUN_103f0140(int param_1);
void __fastcall FUN_103f01e0(int param_1);
void __fastcall FUN_103f0280(int param_1);
void __fastcall FUN_103f0320(int param_1);
void __fastcall FUN_103f03c0(int param_1);
void __fastcall FUN_103f0460(int param_1);
void __fastcall FUN_103f0500(int param_1);
void __fastcall FUN_103f05a0(int param_1);
void __fastcall FUN_103f0640(int param_1);
void __fastcall FUN_103f06e0(int param_1);
void __fastcall FUN_103f0780(int param_1);
void __fastcall FUN_103f0820(int param_1);
void __fastcall FUN_103f08c0(int param_1);
void __fastcall FUN_103f0960(int param_1);
void __fastcall FUN_103f0a00(int param_1);
void __fastcall FUN_103f0aa0(int param_1);
undefined4 * FUN_103f6fe0(int param_1);
int __fastcall FUN_103fa290(undefined4 *param_1);
void __fastcall FUN_103fa3e0(undefined4 *param_1);
void __fastcall FUN_103fa4d0(undefined4 *param_1);
void __fastcall FUN_103fa5c0(undefined4 *param_1);
void __fastcall FUN_103fa6b0(undefined4 *param_1);
void __fastcall FUN_103fa7a0(undefined4 *param_1);
void __fastcall FUN_103fa810(undefined4 *param_1);
void __fastcall FUN_103fa880(undefined4 *param_1);
void __fastcall FUN_103fa8f0(undefined4 *param_1);
void __fastcall FUN_103fa960(undefined4 *param_1);
void __fastcall FUN_103fa9d0(undefined4 *param_1);
void __fastcall FUN_103fb050(undefined4 *param_1);
int * __fastcall FUN_103fbb60(int *param_1);
undefined4 * __fastcall FUN_103fc5b0(int param_1);
void __fastcall FUN_103fe890(int param_1);
void __fastcall FUN_10400090(int param_1);
void __fastcall FUN_104002d0(int param_1);
void __fastcall FUN_10400380(int param_1);
void __fastcall FUN_10400430(int param_1);
void __fastcall FUN_104004e0(int param_1);
int * FUN_10401930(int *param_1,int *param_2);
void __fastcall FUN_10403de0(undefined4 *param_1);
undefined4 __stdcall FUN_10404180(undefined4 param_1,undefined4 param_2);
undefined1 __stdcall FUN_10404be0(undefined4 param_1);
undefined1 __stdcall FUN_10404cd0(undefined4 param_1,undefined4 param_2);
void FUN_10405f90(undefined4 *param_1,undefined4 *param_2);
void FUN_10406750(undefined4 param_1,int param_2);
void FUN_10406e10(undefined4 param_1,undefined4 *param_2);
int FUN_10407300(int param_1,undefined4 param_2,undefined4 *param_3);
undefined4 * __fastcall FUN_10407750(undefined4 *param_1);
void * __fastcall FUN_10407800(void *param_1);
void __fastcall FUN_10407de0(undefined4 *param_1);
void __fastcall FUN_10407e50(int *param_1);
void __fastcall FUN_10407f60(undefined4 *param_1);
void __fastcall FUN_10408020(undefined4 *param_1);
void __fastcall FUN_10408360(int *param_1);
void __fastcall FUN_104083e0(int param_1);
void __fastcall FUN_10408520(undefined4 *param_1);
void __fastcall FUN_10409870(int param_1);
void __fastcall FUN_104099c0(int *param_1);
void * FUN_10409cd0(uint param_1);
undefined4 FUN_10409d60(int param_1);
void FUN_1040bfe0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
void FUN_1040c1b0(int *param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_1040c3a0(int param_1);
void __fastcall FUN_1040c4f0(int param_1);
void FUN_10410930(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
int __fastcall FUN_10411810(undefined4 *param_1);
void __fastcall FUN_10411960(undefined4 *param_1);
void __fastcall FUN_10411ab0(int param_1);
void __fastcall FUN_10411b30(int *param_1);
void __fastcall FUN_10411dc0(undefined4 *param_1);
void __fastcall FUN_10411ed0(int *param_1);
void __fastcall FUN_10413020(float *param_1);
void __fastcall FUN_10413200(int *param_1);
undefined4 * FUN_10413900(undefined4 *param_1);
void FUN_10413a80(undefined4 *param_1);
void __fastcall FUN_104152b0(int param_1);
void __fastcall FUN_104167f0(undefined4 *param_1);
void __fastcall FUN_10416860(undefined4 *param_1);
void __fastcall FUN_104168d0(undefined4 *param_1);
undefined4 *
FUN_104175e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,uint param_6);
undefined4 *
FUN_10417750(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 *
FUN_10417de0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,uint param_6);
undefined4 *
FUN_10417f30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,uint param_6);
undefined4 *
FUN_10418030(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 *
FUN_10418120(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,uint param_6);
undefined4 *
FUN_10418650(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,uint param_6);
undefined4 *
FUN_10418ec0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,uint param_6);
undefined4 *
FUN_104193f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,uint param_6);
undefined4 *
FUN_10419560(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6);
undefined4 *
FUN_10419660(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,undefined4 param_6);
undefined1 __fastcall FUN_1041cb80(int param_1);
int * FUN_1041e050(int *param_1,int *param_2,int *param_3);
void __fastcall FUN_1041f950(undefined4 *param_1);
void __fastcall FUN_1041f9c0(undefined4 *param_1);
void __fastcall FUN_1041fa30(undefined4 *param_1);
void __fastcall FUN_1041faa0(undefined4 *param_1);
void __fastcall FUN_1041fc90(undefined4 *param_1);
void __fastcall FUN_1041fd40(undefined4 *param_1);
void __fastcall FUN_10422de0(int param_1);
void __fastcall FUN_10423730(int param_1);
void __fastcall FUN_10423b10(int param_1);
void __fastcall FUN_104247d0(undefined4 *param_1);
bool FUN_10424a60(void);
void __fastcall FUN_10424d10(int param_1);
void __fastcall FUN_10424df0(int param_1);
undefined4 FUN_10425010(void);
void __fastcall FUN_1042a580(undefined4 *param_1);
void __fastcall FUN_1042a5f0(undefined4 *param_1);
void __fastcall FUN_1042a660(undefined4 *param_1);
void __fastcall FUN_1042a6d0(int *param_1);
void __fastcall FUN_1042a860(undefined4 *param_1);
void __fastcall FUN_1042a920(undefined4 *param_1);
void __fastcall FUN_1042a9f0(undefined4 *param_1);
void __fastcall FUN_1042ac20(undefined4 *param_1);
void __fastcall FUN_1042ace0(undefined4 *param_1);
void __fastcall FUN_1042ada0(undefined4 *param_1);
void __fastcall FUN_1042ae90(undefined4 *param_1);
void __fastcall FUN_1042af50(undefined4 *param_1);
// Reference entry 10382470; body size 275 bytes.
#line 1 "ENTRY_10382470"

undefined4 * __thiscall Recovered_Bulk::FUN_10382470(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  void *pvVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115445c7);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0xf0) == 0) {
    pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    if ((*(int *)(pSVar3 + 0x4c) == 0) || (*(char *)(*(int *)(pSVar3 + 0x4c) + 0x52) != '\0')) {
      pvVar4 = (void *)(operator_new(0x94));
      local_8 = (undefined4)(0);
      if (pvVar4 == (void *)0x0) {
        piVar5 = (int *)((int *)0x0);
      }
      else {
        piVar5 = (int *)((int *)thunk_FUN_102a88c0(param_1));
      }
      local_8 = (undefined4)(0xffffffff);
      if (piVar5 != *(int **)(param_1 + 0xf0)) {
        piVar1 = (int *)(*(int **)(param_1 + 0xf4));
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0xf0) = 0;
          *(undefined4 *)(param_1 + 0xf4) = 0;
          (**(code **)(*piVar1 + 8))();
        }
        *(int **)(param_1 + 0xf0) = piVar5;
        if (piVar5 == (int *)0x0) {
          *(undefined4 *)(param_1 + 0xf4) = 0;
        }
        else {
          piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
          *(int **)(param_1 + 0xf4) = piVar5;
          (**(code **)(*piVar5 + 4))();
        }
      }
    }
  }
  if (*(int **)(param_1 + 0xf0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xf0) + 0x18))(param_2,uVar2);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10383210; body size 158 bytes.
#line 1 "ENTRY_10383210"

int __thiscall Recovered_Bulk::FUN_10383210(undefined4 param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115447dd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0xbc) + 0x38))
                            (&param_3,param_2,param_3,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  local_8 = (undefined4)(1);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  if (piVar1 == (int *)0x0) {
    iVar3 = (int)(0);
  }
  else {
    iVar3 = (int)(piVar1[2]);
  }
  local_8 = (undefined4)(3);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int)(iVar3);
}


// Reference entry 103832e0; body size 467 bytes.
#line 1 "ENTRY_103832e0"

void __stdcall FUN_103832e0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6,
                 int *param_7,int *param_8)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *local_24;
  undefined4 *local_20;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = (int)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11544825);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)(0);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)(0);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (int)(0);
  }
  if (param_4 != (int *)0x0) {
    *param_4 = (int)(0);
  }
  if (param_5 != (int *)0x0) {
    *param_5 = (int)(0);
  }
  if (param_6 != (int *)0x0) {
    *param_6 = (int)(0);
  }
  if (param_7 != (int *)0x0) {
    *param_7 = (int)(0);
  }
  if (param_8 != (int *)0x0) {
    *param_8 = (int)(0);
  }
  thunk_FUN_1037f130(&local_24,9);
  local_8 = (int)(0);
  puVar5 = (undefined4 *)(local_24);
  if (local_24 != (undefined4 *)(local_20)) {
    do {
      piVar1 = (int *)((int *)puVar5[1]);
      piVar2 = (int *)((int *)*puVar5);
      local_18 = (int *)(piVar2);
      local_14 = (int *)(piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      if (((((((param_1 != (int *)0x0) &&
              (cVar3 = (**(code **)(*piVar2 + 0x1c))(), piVar4 = param_1, cVar3 != '\0')) ||
             ((param_2 != (int *)0x0 &&
              ((cVar3 = thunk_FUN_10328710(), piVar4 = param_2, cVar3 != '\0' ||
               (cVar3 = (**(code **)(*piVar2 + 0x34))(), cVar3 != '\0')))))) ||
            ((param_3 != (int *)0x0 &&
             ((cVar3 = (**(code **)(*piVar2 + 0x28))(), piVar4 = param_3, cVar3 == '\0' ||
              (cVar3 = (**(code **)(*piVar2 + 0x30))(), cVar3 != '\0')))))) ||
           (((param_4 != (int *)0x0 &&
             (cVar3 = (**(code **)(*piVar2 + 0x3c))(), piVar4 = param_4, cVar3 == '\0')) ||
            ((param_5 != (int *)0x0 &&
             (cVar3 = (**(code **)(*piVar2 + 0x38))(), piVar4 = param_5, cVar3 == '\0')))))) ||
          ((param_6 != (int *)0x0 &&
           (cVar3 = (**(code **)(*piVar2 + 0x98))(), piVar4 = param_6, cVar3 == '\0')))) ||
         (piVar4 = param_7, param_7 != (int *)0x0)) {
        *piVar4 = (int)(*piVar4 + 1);
      }
      if (param_8 != (int *)0x0) {
        *param_8 = (int)(*param_8 + 1);
      }
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      if (piVar1 != (int *)0x0) {
        local_18 = (int *)((int *)0x0);
        local_14 = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
      puVar5 = (undefined4 *)(puVar5 + 2);
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
    } while (puVar5 != (undefined4 *)(local_20));
  }
  thunk_FUN_101f53d0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10383800; body size 198 bytes.
#line 1 "ENTRY_10383800"

undefined1 __fastcall FUN_10383800(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 local_1c;
  int *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = (int)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115448f5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  (**(code **)(*param_1 + 0x4c))(&local_28,0,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (int)(0);
  local_14 = (undefined4 *)(local_24);
  puVar4 = (undefined4 *)(local_28);
  if (local_28 != (undefined4 *)(local_24)) {
    do {
      piVar1 = (int *)((int *)puVar4[1]);
      local_1c = (undefined4)(*puVar4);
      local_18 = (int *)(piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      cVar2 = (char)(thunk_FUN_10c9af60());
      if (cVar2 != '\0') {
        local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))();
        }
        uVar3 = (undefined1)(1);
        goto LAB_10383897;
      }
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      if (piVar1 != (int *)0x0) {
        local_1c = (undefined4)(0);
        local_18 = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
      puVar4 = (undefined4 *)(puVar4 + 2);
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
    } while (puVar4 != (undefined4 *)(local_14));
  }
  uVar3 = (undefined1)(0);
LAB_10383897:
  thunk_FUN_1036e480();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar3);
}


// Reference entry 10383ab0; body size 158 bytes.
#line 1 "ENTRY_10383ab0"

bool __fastcall FUN_10383ab0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154498d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_1109f7f0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  thunk_FUN_110a0140();
  uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 200) + 100))());
  thunk_FUN_11131cc0(uVar1,2,0);
  local_8 = (undefined4)(0);
  iVar2 = (int)(thunk_FUN_11132ba0());
  thunk_FUN_11132140();
  ExceptionList = (void *)(local_10);
  return (bool)(iVar2 != 0);
}


// Reference entry 10383e50; body size 182 bytes.
#line 1 "ENTRY_10383e50"

bool __stdcall FUN_10383e50(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11544a3d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_110828b0(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  thunk_FUN_11131cc0(uVar2,2,0);
  local_8 = (undefined4)(0);
  iVar3 = (int)(thunk_FUN_11132ba0());
  if (param_1 == 2) {
    iVar5 = (int)(0);
    iVar4 = (int)(0);
    if (0 < iVar3) {
      do {
        thunk_FUN_11132c10(iVar4);
        uVar2 = (undefined4)(thunk_FUN_110d9b30());
        cVar1 = (char)(thunk_FUN_114574b0(uVar2));
        if (cVar1 != '\0') {
          iVar5 = (int)(iVar5 + 1);
        }
        iVar4 = (int)(iVar4 + 1);
      } while (iVar4 < iVar3);
    }
    bVar6 = (bool)(iVar3 != iVar5 && -1 < iVar3 - iVar5);
  }
  else {
    bVar6 = (bool)(iVar3 != 0);
  }
  thunk_FUN_11132140();
  ExceptionList = (void *)(local_10);
  return (bool)(bVar6);
}


// Reference entry 10384120; body size 122 bytes.
#line 1 "ENTRY_10384120"

bool __fastcall FUN_10384120(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11544acd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 200) + 100))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  thunk_FUN_11131cc0(uVar1,2,0);
  local_8 = (undefined4)(0);
  iVar2 = (int)(thunk_FUN_11132ba0());
  thunk_FUN_11132140();
  ExceptionList = (void *)(local_10);
  return (bool)(iVar2 != 0);
}


// Reference entry 103841c0; body size 120 bytes.
#line 1 "ENTRY_103841c0"

undefined4 __fastcall FUN_103841c0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piStack_8;
  
  iVar5 = (int)(0);
  iVar4 = (int)(0);
  uVar2 = (uint)((**(code **)(*(int *)(param_1 + 0xc) + 0x14))(9));
  uVar6 = (uint)(0);
  piVar7 = (int *)((int *)(param_1 + 0xc));
  if (uVar2 != 0) {
    do {
      iVar3 = (int)((**(code **)(*piVar7 + 0x18))(uVar6,9));
      if (*(char *)(iVar3 + 0x520) != '\0') {
        cVar1 = (char)(FUN_100487ed());
        if ((cVar1 != '\0') && (iVar5 = iVar5 + 1, *(int *)(iVar3 + 0x53c) != 0)) {
          iVar4 = (int)(iVar4 + 1);
        }
      }
      uVar6 = (uint)(uVar6 + 1);
      piVar7 = (int *)(piStack_8);
    } while (uVar6 < uVar2);
    if ((iVar5 != 0) && (iVar4 == 0)) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 103842d0; body size 96 bytes.
#line 1 "ENTRY_103842d0"

undefined4 __fastcall FUN_103842d0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (uint)((**(code **)(*(int *)(param_1 + 0xc) + 0x14))(9));
  uVar3 = (uint)(0);
  if (uVar1 != 0) {
    do {
      iVar2 = (int)((**(code **)(*(int *)(param_1 + 0xc) + 0x18))(uVar3,9));
      if (*(char *)(iVar2 + 0x530) != '\0') {
        iVar2 = (int)(thunk_FUN_110d9b30());
        if (iVar2 != 4) {
          iVar2 = (int)(thunk_FUN_110d9b30());
          if (iVar2 != 0xb) {
            return (undefined4)(1);
          }
        }
      }
      uVar3 = (uint)(uVar3 + 1);
    } while (uVar3 < uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10384350; body size 369 bytes.
#line 1 "ENTRY_10384350"

int __fastcall FUN_10384350(int param_1)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  uint3 uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11544b25);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_20 = (int)(param_1);
  thunk_FUN_10436cd0(&local_24,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  local_18 = (uint)(thunk_FUN_10436ab0());
  local_18 = (uint)(local_18 & 0xffff);
  piVar6 = (int *)((int *)0x0);
  local_1c = (int *)((int *)0x0);
  thunk_FUN_1037f130(&local_38,9);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  puVar8 = (undefined4 *)(local_38);
  if (local_38 != (undefined4 *)(local_34)) {
    do {
      piVar1 = (int *)((int *)puVar8[1]);
      local_2c = (undefined4)(*puVar8);
      local_28 = (int *)(piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
      uVar2 = (ushort)(thunk_FUN_103238a0());
      if (uVar2 < (ushort)local_18) {
        uVar7 = (uint)(4);
      }
      else {
        sVar3 = (short)(thunk_FUN_103238a0());
        uVar7 = (uint)((sVar3 == (ushort)local_18) + 1);
      }
      piVar6 = (int *)((int *)(uVar7 | (uint)local_1c));
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      if (piVar1 != (int *)0x0) {
        local_2c = (undefined4)(0);
        local_28 = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
      puVar8 = (undefined4 *)(puVar8 + 2);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      param_1 = (int)(local_20);
      local_1c = (int *)(piVar6);
    } while (puVar8 != (undefined4 *)(local_34));
  }
  thunk_FUN_101f53d0();
  local_8 = (undefined4)(4);
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10436cd0(&local_1c);
  local_8 = (undefined4)(5);
  uVar4 = (undefined4)(thunk_FUN_10436ab0());
  local_11 = (char)(*(short *)(param_1 + 0x834) == (short)uVar4);
  uVar5 = (uint3)((uint3)((uint)uVar4 >> 8));
  local_8 = (undefined4)(6);
  if (local_1c != (int *)0x0) {
    uVar4 = (undefined4)((**(code **)(*local_1c + 8))());
    uVar5 = (uint3)((uint3)((uint)uVar4 >> 8));
  }
  if ((piVar6 == (int *)&DAT_00000004) && (local_11 != '\0')) {
    ExceptionList = (void *)(local_10);
    return (int)(((uint)(uVar5) << 8 | (uint)(1)));
  }
  ExceptionList = (void *)(local_10);
  return (int)((uint)uVar5 << 8);
}


// Reference entry 10384680; body size 162 bytes.
#line 1 "ENTRY_10384680"

undefined4 __thiscall Recovered_Bulk::FUN_10384680(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(), cVar1 == '\0')) {
    iVar2 = (int)(*(int *)(param_1 + 0x24));
  }
  else {
    iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x20) + 8))());
  }
  if (iVar2 == param_2) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    return (undefined4)(1);
  }
  if ((*(int **)(param_1 + 0x2c) == (int *)0x0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0xc))(), cVar1 == '\0')) {
    iVar2 = (int)(*(int *)(param_1 + 0x30));
  }
  else {
    iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x2c) + 8))());
  }
  if (iVar2 != param_2) {
    if ((*(int **)(param_1 + 0x38) == (int *)0x0) ||
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0xc))(), cVar1 == '\0')) {
      iVar2 = (int)(*(int *)(param_1 + 0x3c));
    }
    else {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x38) + 8))());
    }
    if (iVar2 != param_2) {
      return (undefined4)(1);
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    thunk_FUN_1038ea50();
    return (undefined4)(0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return (undefined4)(1);
}


// Reference entry 10384750; body size 135 bytes.
#line 1 "ENTRY_10384750"

void __fastcall FUN_10384750(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x3c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = (int *)(*(int **)(param_1 + 100));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (char)((**(code **)(**(int **)(param_1 + 4) + 0x1c))());
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 10384890; body size 214 bytes.
#line 1 "ENTRY_10384890"

void __fastcall FUN_10384890(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  void **ppvVar5;
  char cVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11544bad);
  local_10 = (void *)(ExceptionList);
  uVar7 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  if (*(int *)(param_1 + 0x450) != 0) {
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x44c));
    ppvVar5 = (void **)(&local_10);
    for (puVar2 = (undefined4 *)((undefined4 *)*puVar1); ExceptionList = (void *)(ppvVar5, (undefined4 *)(puVar2) != puVar1);
        puVar2 = (undefined4 *)*puVar2) {
      local_8 = (undefined4)(0xffffffff);
      piVar3 = (int *)((int *)puVar2[4]);
      piVar4 = (int *)((int *)puVar2[3]);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))(uVar7);
      }
      local_8 = (undefined4)(0);
      cVar6 = (char)((**(code **)(*piVar4 + 0x1c))());
      if (cVar6 != '\0') {
        (**(code **)(*piVar4 + 0x18))();
      }
      local_8 = (undefined4)(1);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))();
      }
      ppvVar5 = (void **)(ExceptionList);
    }
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_10372420();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10384dc0; body size 277 bytes.
#line 1 "ENTRY_10384dc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10384dc0(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11544cab);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 200) + 100))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if (iVar1 != 0) {
    pvVar2 = (void *)(operator_new(0x74));
    local_8 = (undefined4)(0);
    if (pvVar2 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(thunk_FUN_10cc0e80(param_1,param_3));
    }
    local_8 = (undefined4)(0xffffffff);
    pvVar2 = (void *)(operator_new(0x48));
    local_8 = (undefined4)(1);
    if (pvVar2 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_10cc0ff0(uVar3));
    }
    piVar5 = (int *)((int *)0x0);
    local_8 = (undefined4)(0xffffffff);
    if (piVar4 != (int *)0x0) {
      piVar5 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      (**(code **)(*piVar5 + 4))();
    }
    local_8 = (undefined4)(2);
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    local_8 = (undefined4)(3);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10387aa0; body size 351 bytes.
#line 1 "ENTRY_10387aa0"

undefined4 * FUN_10387aa0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = (void *)(ExceptionList);
  puStack_c = (undefined1 *)(LAB_1154537e);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  local_14 = (undefined4)(1);
  for (; param_2 != (undefined4 *)(param_3); param_2 = param_2 + 2) {
    piVar1 = (int *)((int *)param_2[1]);
    uVar2 = (undefined4)(*param_2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar4);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    piVar5 = (int *)((int *)thunk_FUN_10c944f0(&local_1c,uVar2));
    local_24 = (int *)((int *)*piVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    *piVar5 = (int)(0);
    local_18 = (int *)(local_24);
    if (local_24 == (int *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      piVar5 = (int *)((int *)(**(code **)(*local_24 + 0xc))());
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    piVar3 = (int *)((int *)param_1[1]);
    local_20 = (int *)(piVar5);
    if (piVar3 == (int *)param_1[2]) {
      thunk_FUN_103535f0(piVar3,&local_24);
    }
    else {
      *piVar3 = (int)((int)local_18);
      piVar3[1] = (int)piVar5;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))();
      }
      param_1[1] = param_1[1] + 8;
    }
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    if (piVar5 != (int *)0x0) {
      local_24 = (int *)((int *)0x0);
      local_20 = (int *)((int *)0x0);
      (**(code **)(*piVar5 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  }
  thunk_FUN_101f53d0();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1038a190; body size 205 bytes.
#line 1 "ENTRY_1038a190"

int * __thiscall Recovered_Bulk::FUN_1038a190(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11545a3d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (int *)(param_1);
  if (param_1[0x30] == 0) {
    piVar2 = (int *)((int *)thunk_FUN_10c0a0f0(&local_14,param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
    piVar1 = (int *)((int *)*piVar2);
    *piVar2 = (int)(0);
    piVar2 = (int *)((int *)param_1[0x31]);
    local_8 = (undefined4)(0);
    if (piVar2 != (int *)0x0) {
      param_1[0x30] = 0;
      param_1[0x31] = 0;
      (**(code **)(*piVar2 + 8))();
    }
    param_1[0x30] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar3 = (int)(0);
    }
    else {
      iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    }
    param_1[0x31] = iVar3;
    local_8 = (undefined4)(1);
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
  }
  local_8 = (undefined4)(0xffffffff);
  piVar1 = (int *)((int *)param_1[0x30]);
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 1038a490; body size 180 bytes.
#line 1 "ENTRY_1038a490"

undefined1 * __fastcall FUN_1038a490(int param_1)

{
  undefined1 auStack_100 [204];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int **ppiStack_28;
  uint uStack_24;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11545b35);
  local_10 = (void *)(ExceptionList);
  uStack_24 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  if (*(int *)(param_1 + 0x7f8) != 0) {
    ppiStack_28 = (int **)(&local_14);
    uStack_2c = (undefined4)(0x1038a4ca);
    ExceptionList = (void *)(&local_10);
    ppiStack_28 = (int **)((int **)thunk_FUN_10292c70());
    local_8 = (undefined4)(0);
    uStack_2c = (undefined4)(0x1038a4dd);
    thunk_FUN_101cd010();
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      ppiStack_28 = (int **)((int **)0x1038a4ed);
      (**(code **)(*local_14 + 8))();
    }
    ppiStack_28 = (int **)((int **)0x1);
    uStack_2c = (undefined4)(0);
    uStack_30 = (undefined4)(*(undefined4 *)(param_1 + 0x7f8));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uStack_34 = (undefined4)(0x1038a503);
    (**(code **)(*local_1c + 0x3c))();
    *(undefined4 *)(param_1 + 0x7f8) = 0;
    local_8 = (undefined4)(4);
    if (local_18 != (int *)0x0) {
      uStack_34 = (undefined4)(0x1038a520);
      (**(code **)(*local_18 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined1 *)((undefined1 *)0x1);
  }
  return (undefined1 *)(auStack_100);
}


// Reference entry 1038a990; body size 183 bytes.
#line 1 "ENTRY_1038a990"

void __fastcall FUN_1038a990(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11545c65);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(char *)(param_1 + 0x805) == '\0') {
    piVar2 = (int *)((int *)thunk_FUN_1023a9c0(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
    piVar1 = (int *)((int *)*piVar2);
    local_8 = (undefined4)(0);
    *piVar2 = (int)(0);
    if (piVar1 == (int *)0x0) {
      piVar2 = (int *)((int *)0x0);
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))(*(undefined4 *)(param_1 + 0xac),0);
    }
    local_8 = (undefined4)(4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
    *(undefined1 *)(param_1 + 0x805) = 1;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1038aa80; body size 220 bytes.
#line 1 "ENTRY_1038aa80"

void __fastcall FUN_1038aa80(int param_1)

{
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *piVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11545cad);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar5 = (int *)((int *)0x0);
  if (pSVar3 != (SCLibrary *)0x0) {
    piVar5 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0xc))(uVar2));
    (**(code **)(*piVar5 + 4))();
  }
  local_8 = (undefined4)(0);
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x88))(&local_14));
  piVar1 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  (**(code **)(*(int *)(param_1 + 0x78) + 4))(piVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  local_8 = (undefined4)(6);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1038aba0; body size 157 bytes.
#line 1 "ENTRY_1038aba0"

void __fastcall FUN_1038aba0(int param_1)

{
  undefined4 uVar1;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11545cf5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(char *)(param_1 + 0x804) == '\0') {
    uVar1 = (undefined4)(thunk_FUN_10292c70(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
    local_8 = (undefined4)(0);
    thunk_FUN_101cd010(uVar1);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 0x4c))(*(undefined4 *)(param_1 + 0x94));
    }
    *(undefined1 *)(param_1 + 0x804) = 1;
    local_8 = (undefined4)(4);
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1038bb40; body size 90 bytes.
#line 1 "ENTRY_1038bb40"

void __fastcall FUN_1038bb40(int param_1)

{
  int iVar1;
  
  iVar1 = (int)((*(code *)**(undefined4 **)(param_1 + 0xc))());
  if (iVar1 != 0) {
    thunk_FUN_1038b3c0(0);
    thunk_FUN_1038b640(0);
    thunk_FUN_1038b8c0(0);
    thunk_FUN_1038aea0(0);
    thunk_FUN_1038b140(0);
    thunk_FUN_1038bbb0(0);
    return;
  }
  *(undefined4 *)(param_1 + 0x7fc) = 0;
  *(undefined1 *)(param_1 + 0x800) = 0;
  return;
}


// Reference entry 1038be90; body size 181 bytes.
#line 1 "ENTRY_1038be90"

void __fastcall FUN_1038be90(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11546205);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(char *)(param_1 + 0x805) != '\0') {
    piVar2 = (int *)((int *)thunk_FUN_1023ab10(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
    piVar1 = (int *)((int *)*piVar2);
    local_8 = (undefined4)(0);
    *piVar2 = (int)(0);
    if (piVar1 == (int *)0x0) {
      piVar2 = (int *)((int *)0x0);
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x28))(*(undefined4 *)(param_1 + 0xac));
    }
    local_8 = (undefined4)(4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
    *(undefined1 *)(param_1 + 0x805) = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1038bf80; body size 225 bytes.
#line 1 "ENTRY_1038bf80"

void __fastcall FUN_1038bf80(int param_1)

{
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *piVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154624d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar5 = (int *)((int *)0x0);
  if (pSVar3 != (SCLibrary *)0x0) {
    piVar5 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0xc))(uVar2));
    (**(code **)(*piVar5 + 4))();
  }
  local_8 = (undefined4)(0);
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x88))(&local_14));
  piVar1 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(param_1 + 0x7c));
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  local_8 = (undefined4)(6);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1038c0a0; body size 157 bytes.
#line 1 "ENTRY_1038c0a0"

void __fastcall FUN_1038c0a0(int param_1)

{
  undefined4 uVar1;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11546295);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(char *)(param_1 + 0x804) != '\0') {
    uVar1 = (undefined4)(thunk_FUN_10292c70(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
    local_8 = (undefined4)(0);
    thunk_FUN_101cd010(uVar1);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 0x50))(*(undefined4 *)(param_1 + 0x94));
    }
    *(undefined1 *)(param_1 + 0x804) = 0;
    local_8 = (undefined4)(4);
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1038d6f0; body size 265 bytes.
#line 1 "ENTRY_1038d6f0"

undefined1 __stdcall FUN_1038d6f0(char param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *local_30;
  undefined4 *local_2c;
  int *local_24;
  int *local_20;
  int *local_1c;
  uint local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = (int)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115466d5);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_11 = (undefined1)(1);
  thunk_FUN_1037f130(&local_30,9);
  local_8 = (int)(0);
  puVar5 = (undefined4 *)(local_30);
  do {
    if (puVar5 == (undefined4 *)(local_2c)) {
LAB_1038d7da:
      thunk_FUN_101f53d0();
      ExceptionList = (void *)(local_10);
      return (undefined1)(local_11);
    }
    piVar1 = (int *)((int *)puVar5[1]);
    local_24 = (int *)((int *)*puVar5);
    local_20 = (int *)(piVar1);
    local_1c = (int *)(local_24);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    local_18 = (uint)(local_18 & 0xffffff00);
    if (param_1 != '\0') {
      iVar4 = (int)((**(code **)(*local_1c + 0xf4))());
      local_18 = (uint)(local_18 & 0xff);
      if (iVar4 == 2) {
        local_18 = (uint)(1);
      }
    }
    cVar2 = (char)((**(code **)(*local_1c + 0x1c))());
    if ((cVar2 == '\0') && ((char)local_18 == '\0')) {
      local_11 = (undefined1)(0);
      local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
      goto LAB_1038d7da;
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (piVar1 != (int *)0x0) {
      local_24 = (int *)((int *)0x0);
      local_20 = (int *)((int *)0x0);
      (**(code **)(*piVar1 + 8))();
    }
    puVar5 = (undefined4 *)(puVar5 + 2);
    local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
  } while( true );
}


// Reference entry 1038dd80; body size 191 bytes.
#line 1 "ENTRY_1038dd80"

bool FUN_1038dd80(void)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115467e5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  bVar4 = (bool)(false);
  piVar2 = (int *)((int *)thunk_FUN_10436cd0(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar3 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if ((*(int *)(local_14 + 0x838) != 1) && (*(int *)(local_14 + 0x838) != 0)) {
    uVar1 = (ushort)(thunk_FUN_10436ab0());
    bVar4 = (bool)(*(ushort *)(local_14 + 0x834) < uVar1);
  }
  local_8 = (undefined4)(4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (bool)(bVar4);
}


// Reference entry 1038e3d0; body size 128 bytes.
#line 1 "ENTRY_1038e3d0"

void __fastcall FUN_1038e3d0(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154693d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1038f1c0; body size 102 bytes.
#line 1 "ENTRY_1038f1c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1038f1c0(undefined4 *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11546b50);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1b8))(&param_3,param_3,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);
  local_8 = (undefined4)(0);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 1038f5d0; body size 102 bytes.
#line 1 "ENTRY_1038f5d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1038f5d0(undefined4 *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11546c60);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c0))(&param_3,param_3,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);
  local_8 = (undefined4)(0);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 1038f940; body size 284 bytes.
#line 1 "ENTRY_1038f940"

undefined4 * __thiscall Recovered_Bulk::FUN_1038f940(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11546d4d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 200) + 0x2c))
                            (&local_14,param_3,1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar3 = (int *)((int *)*piVar1);
  local_8 = (undefined4)(0);
  *piVar1 = (int)(0);
  if (piVar3 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if ((piVar3 == (int *)0x0) && (*(int **)(param_1 + 0xcc) != (int *)0x0)) {
    puVar2 = (undefined4 *)((undefined4 *)(**(code **)(**(int **)(param_1 + 0xcc) + 0x2c))(&param_3,param_3,1));
    piVar3 = (int *)((int *)*puVar2);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    *puVar2 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    if (piVar3 == (int *)0x0) {
      piVar1 = (int *)((int *)0x0);
    }
    else {
      piVar1 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 8))();
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_2 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(6);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 1038faf0; body size 230 bytes.
#line 1 "ENTRY_1038faf0"

int * __thiscall Recovered_Bulk::FUN_1038faf0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11546d95);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x1b8))
                            (&local_14,param_3,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 != (int *)0x0) {
    *param_2 = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
    local_8 = (undefined4)(4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
  (**(code **)(*param_1 + 0x1c0))(param_2,param_3);
  local_8 = (undefined4)(5);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 1038fc10; body size 280 bytes.
#line 1 "ENTRY_1038fc10"

undefined4 * __thiscall Recovered_Bulk::FUN_1038fc10(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11546ddd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 200) + 0x14))
                            (&local_14,param_3,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar3 = (int *)((int *)*piVar1);
  local_8 = (undefined4)(0);
  *piVar1 = (int)(0);
  if (piVar3 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if ((piVar3 == (int *)0x0) && (*(int **)(param_1 + 0xcc) != (int *)0x0)) {
    puVar2 = (undefined4 *)((undefined4 *)(**(code **)(**(int **)(param_1 + 0xcc) + 0x14))(&param_3,param_3));
    piVar3 = (int *)((int *)*puVar2);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    *puVar2 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    if (piVar3 == (int *)0x0) {
      piVar1 = (int *)((int *)0x0);
    }
    else {
      piVar1 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 8))();
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_2 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(6);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10390660; body size 105 bytes.
#line 1 "ENTRY_10390660"

undefined4 * __thiscall Recovered_Bulk::FUN_10390660(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11546fb0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(**(int **)(param_1 + 200) + 0x14))
                     (&param_3,param_3,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);
  local_8 = (undefined4)(0);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10391970; body size 89 bytes.
#line 1 "ENTRY_10391970"

void __thiscall Recovered_Bulk::FUN_10391970(int param_2)
{
  int param_1 = (int )this;
  if ((-(uint)(param_2 != 0) & param_2 + 0xcU) == *(uint *)(param_1 + 0x2c)) {
    thunk_FUN_103892b0();
    return;
  }
  if ((-(uint)(param_2 != 0) & param_2 - 0xcU) == *(uint *)(param_1 + 0x30)) {
    thunk_FUN_10388cc0();
    return;
  }
  thunk_FUN_112af4e0("SCHousehold",1,
                     "Received an event from an adapter that wasn\'t assigned to us.");
  return;
}


// Reference entry 10391a10; body size 328 bytes.
#line 1 "ENTRY_10391a10"

void __thiscall Recovered_Bulk::FUN_10391a10(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  if (param_2 == 0) {
    cVar1 = (char)(thunk_FUN_10397340());
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x79c) == '\0')) {
      cVar1 = (char)((**(code **)(*(int *)(param_1 + -8) + 0x158))());
      if (cVar1 == '\0') {
        iVar2 = (int)((**(code **)(**(int **)(param_1 + 0xc0) + 100))());
        if (iVar2 != 0) {
          cVar1 = (char)(thunk_FUN_11093230());
          if (cVar1 != '\0') {
            if (*(int *)(param_1 + 0x798) != 0) {
              thunk_FUN_10c83fc0();
              if (*(undefined4 **)(param_1 + 0x798) != (undefined4 *)0x0) {
                (**(code **)**(undefined4 **)(param_1 + 0x798))(1);
              }
              *(undefined4 *)(param_1 + 0x798) = 0;
            }
            uVar3 = (undefined4)(thunk_FUN_1059d5a0(1000));
            *(undefined4 *)(param_1 + 0x110) = uVar3;
            pcVar4 = (char *)("Forced update check succeeded. Running update.");
            goto LAB_10391b43;
          }
        }
      }
    }
  }
  else if (param_2 == 1) {
    if (*(int *)(param_1 + 0x798) != 0) {
      thunk_FUN_10c83fc0();
      if (*(undefined4 **)(param_1 + 0x798) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x798))(1);
      }
      *(undefined4 *)(param_1 + 0x798) = 0;
    }
    pcVar4 = (char *)("Forced update check succeeded. No update needed.");
    goto LAB_10391b43;
  }
  if (*(uint *)(param_1 + 0x7a4) < 3) {
    uVar3 = (undefined4)(thunk_FUN_1059d5a0(1000));
    *(int *)(param_1 + 0x7a4) = *(int *)(param_1 + 0x7a4) + 1;
    *(undefined4 *)(param_1 + 0x114) = uVar3;
    pcVar4 = (char *)("Forced update check failed. Retrying in 1 second.");
  }
  else {
    if (*(int *)(param_1 + 0x798) != 0) {
      thunk_FUN_10c83fc0();
      if (*(undefined4 **)(param_1 + 0x798) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x798))(1);
      }
      *(undefined4 *)(param_1 + 0x798) = 0;
    }
    pcVar4 = (char *)("Forced update check failed too many times. Stopping automatic updates.");
  }
LAB_10391b43:
  thunk_FUN_112af4e0("SCHousehold",2,pcVar4);
  return;
}


// Reference entry 10391bc0; body size 382 bytes.
#line 1 "ENTRY_10391bc0"

void FUN_10391bc0(void)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11547275);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_112af4e0("SCHousehold",2,"The household got an onConnectivityStateChanged event",
                     DAT_12126b84 ^ (uint)&stack0xfffffffc);
  cVar1 = (char)(thunk_FUN_1038d3c0());
  if (cVar1 == '\0') {
    uVar2 = (undefined4)(thunk_FUN_10292cf0(&local_18));
    local_8 = (undefined4)(0);
    thunk_FUN_101cd150(uVar2);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_20 != (int *)0x0) {
      piVar3 = (int *)((int *)(local_14 + 0x768));
      piVar5 = (int *)((int *)*piVar3);
      piVar4 = (int *)((int *)*piVar5);
      if (piVar4 != (int *)(piVar5)) {
        do {
          (**(code **)(*local_20 + 0x3c))(piVar4[5],0,0);
          piVar5 = (int *)((int *)piVar4[2]);
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            cVar1 = (char)(*(char *)(*piVar5 + 0xd));
            piVar4 = (int *)(piVar5);
            piVar5 = (int *)((int *)*piVar5);
            while (cVar1 == '\0') {
              cVar1 = (char)(*(char *)(*piVar5 + 0xd));
              piVar4 = (int *)(piVar5);
              piVar5 = (int *)((int *)*piVar5);
            }
          }
          else {
            cVar1 = (char)(*(char *)(piVar4[1] + 0xd));
            piVar3 = (int *)((int *)piVar4[1]);
            piVar5 = (int *)(piVar4);
            while ((piVar4 = piVar3, cVar1 == '\0' && (piVar5 == (int *)piVar4[2]))) {
              cVar1 = (char)(*(char *)(piVar4[1] + 0xd));
              piVar3 = (int *)((int *)piVar4[1]);
              piVar5 = (int *)(piVar4);
            }
          }
          piVar3 = (int *)((int *)(local_14 + 0x768));
          piVar5 = (int *)((int *)*piVar3);
        } while (piVar4 != (int *)(piVar5));
      }
      thunk_FUN_1028c030(piVar3,piVar5[1]);
      piVar5[1] = (int)piVar5;
      *piVar5 = (int)((int)piVar5);
      piVar5[2] = (int)piVar5;
      *(undefined4 *)(local_14 + 0x76c) = 0;
      thunk_FUN_110828b0();
      cVar1 = (char)(thunk_FUN_1107f880());
      if (cVar1 != '\0') {
        thunk_FUN_10290460();
      }
    }
    thunk_FUN_1038a490();
    local_8 = (undefined4)(4);
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    local_8 = (undefined4)(0xffffffff);
  }
  thunk_FUN_103892b0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10392f70; body size 86 bytes.
#line 1 "ENTRY_10392f70"

void __thiscall Recovered_Bulk::FUN_10392f70(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 uVar2;
  __time64_t _Var3;
  
  iVar1 = (int)((**(code **)(*param_2 + 0x2c))());
  if (iVar1 == *(int *)(param_1 + 0x768)) {
    _Var3 = (__time64_t)(_time64((__time64_t *)0x0));
    *(undefined4 *)(param_1 + 0x768) = 0;
    thunk_FUN_10cedac0(PTR_s_LastUpdateSystemStatusShown_1211956c,_Var3);
    if (*(int *)(param_1 + 0x84) < 0) {
      uVar2 = (undefined4)(thunk_FUN_1059d5a0(0x240c8400));
      *(undefined4 *)(param_1 + 0x84) = uVar2;
    }
  }
  return;
}


// Reference entry 10392ff0; body size 232 bytes.
#line 1 "ENTRY_10392ff0"

void __thiscall Recovered_Bulk::FUN_10392ff0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154751d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x38))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10393730; body size 115 bytes.
#line 1 "ENTRY_10393730"

void __thiscall Recovered_Bulk::FUN_10393730(char param_2)
{
  int param_1 = (int )this;
  int iVar1;
  char *pcVar2;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 200) + 100))());
  if (iVar1 != 0) {
    iVar1 = (int)(thunk_FUN_110816c0());
    if (iVar1 == 1) {
      pcVar2 = (char *)("Performing automatic household rescan");
      if (param_2 != '\0') {
        pcVar2 = (char *)("Performing manual household rescan");
      }
      thunk_FUN_112af4e0("healthcheck",1,pcVar2);
      thunk_FUN_11097b00(0);
      thunk_FUN_11080e90();
      thunk_FUN_11096620();
      return;
    }
    thunk_FUN_112af4e0("healthcheck",0,"Attempting rescan when networking is suspended");
  }
  return;
}


// Reference entry 103952e0; body size 211 bytes.
#line 1 "ENTRY_103952e0"

void __fastcall FUN_103952e0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11547804);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x820) == 0) {
    pvVar3 = (void *)(operator_new(0x34));
    local_8 = (undefined4)(0);
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_1061cb50());
    }
    local_8 = (undefined4)(0xffffffff);
    if (piVar4 != *(int **)(param_1 + 0x820)) {
      piVar1 = (int *)(*(int **)(param_1 + 0x824));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x820) = 0;
        *(undefined4 *)(param_1 + 0x824) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(int **)(param_1 + 0x820) = piVar4;
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x824) = 0;
      }
      else {
        piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
        *(int **)(param_1 + 0x824) = piVar4;
        (**(code **)(*piVar4 + 4))();
      }
    }
  }
  (**(code **)(**(int **)(param_1 + 0x820) + 0x18))(uVar2);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10395810; body size 324 bytes.
#line 1 "ENTRY_10395810"

void __fastcall FUN_10395810(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  SCLibrary *this_;
  undefined4 uVar4;
  SCIWizard *pSVar5;
  int *piVar6;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11547925);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  cVar1 = (char)(thunk_FUN_10397340(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if ((cVar1 != '\0') && ((char)param_1[0x1e9] == '\0')) {
    cVar1 = (char)((**(code **)(*param_1 + 0x158))());
    if (cVar1 == '\0') {
      iVar2 = (int)((**(code **)(*(int *)param_1[0x32] + 100))());
      if (iVar2 != 0) {
        cVar1 = (char)(thunk_FUN_11093230());
        if (cVar1 != '\0') {
          piVar3 = (int *)((int *)thunk_FUN_10cb8420(&local_14,0,0));
          piVar6 = (int *)((int *)*piVar3);
          local_8 = (undefined4)(0);
          *piVar3 = (int)(0);
          if (piVar6 == (int *)0x0) {
            piVar3 = (int *)((int *)0x0);
          }
          else {
            piVar3 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
          }
          *(unsigned char *)((char *)&local_8 + 0) = 3;
          if (local_14 != (int *)0x0) {
            (**(code **)(*local_14 + 8))();
          }
          *(unsigned char *)((char *)&local_8 + 0) = 2;
          thunk_FUN_10cb6540(param_1 + 0x1d);
          pSVar5 = (SCIWizard *)((SCIWizard *)&local_1c);
          this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
          uVar4 = (undefined4)(((SCLibrary *)(this_))->createDisplayWizardAction(pSVar5));
          *(unsigned char *)((char *)&local_8 + 0) = 4;
          thunk_FUN_101aa810(uVar4);
          *(unsigned char *)((char *)&local_8 + 0) = 7;
          if (local_1c != (int *)0x0) {
            (**(code **)(*local_1c + 8))(piVar6);
          }
          *(unsigned char *)((char *)&local_8 + 0) = 6;
          (**(code **)(*local_18 + 0x14))();
          *(undefined1 *)(param_1 + 0x1e9) = 1;
          local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
          if (local_14 != (int *)0x0) {
            (**(code **)(*local_14 + 8))();
          }
          local_8 = (undefined4)(9);
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))();
          }
        }
      }
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10395b90; body size 99 bytes.
#line 1 "ENTRY_10395b90"

int __thiscall Recovered_Bulk::FUN_10395b90(int param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    if (*(int *)(param_1 + 8) != 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    }
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(int *)(param_1 + 4) = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return (int)(param_2);
}


// Reference entry 10395c10; body size 102 bytes.
#line 1 "ENTRY_10395c10"

undefined4 __thiscall Recovered_Bulk::FUN_10395c10(int param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    if (*(int *)(param_1 + 8) != 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    }
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(int *)(param_1 + 4) = param_2;
  uVar3 = (undefined4)(0);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
    uVar3 = (undefined4)(*(undefined4 *)(param_1 + 4));
  }
  return (undefined4)(uVar3);
}


// Reference entry 10396540; body size 69 bytes.
#line 1 "ENTRY_10396540"

undefined4 __thiscall Recovered_Bulk::FUN_10396540(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("VariableName",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("StringValue",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 103970c0; body size 166 bytes.
#line 1 "ENTRY_103970c0"

void __thiscall Recovered_Bulk::FUN_103970c0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11547c85);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)(**(code **)(*param_1 + 0xec))
                            (&param_2,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  (**(code **)(*param_1 + 0xf4))(piVar1);
  local_8 = (undefined4)(4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10397190; body size 299 bytes.
#line 1 "ENTRY_10397190"

void FUN_10397190(char *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  size_t _Size;
  uint in_stack_00000018;
  undefined4 **ppuVar8;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11547cc5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  pcVar5 = (char *)((char *)&param_1);
  if (((in_stack_00000018 < 0x10) || (pcVar5 = param_1, param_1 != (char *)0x0)) &&
     (*pcVar5 != '\0')) {
    pcVar7 = (char *)(pcVar5);
    do {
      cVar2 = (char)(*pcVar7);
      pcVar7 = (char *)(pcVar7 + 1);
    } while (cVar2 != '\0');
    _Size = (size_t)((int)pcVar7 - (int)(pcVar5 + 1));
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11,DAT_12126b84 ^ (uint)&stack0xfffffffc));
    puVar1 = (undefined4 *)(puVar3 + 4);
    *puVar3 = (undefined4)(1);
    puVar3[3] = _Size;
    puVar3[2] = 0;
    puVar3[1] = 0;
    memcpy(puVar1,pcVar5,_Size);
    *(undefined1 *)((int)puVar1 + _Size) = 0;
    local_14 = (undefined4 *)(puVar1);
  }
  else {
    local_14 = (undefined4 *)((undefined4 *)0x0);
  }
  ppuVar8 = (undefined4 **)(&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  thunk_FUN_110828b0(ppuVar8);
  thunk_FUN_110978c0(ppuVar8);
  puVar1 = (undefined4 *)(local_14);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if ((local_14 != (undefined4 *)0x0) && (puVar3 = local_14 + -4, (int)local_14[-4] < 0xffff)) {
    iVar4 = (int)(thunk_FUN_1123fcd0(puVar3));
    if (iVar4 == 0) {
      puVar1[-2] = 0;
      puVar1[-3] = 0;
      thunk_FUN_113cfb70(puVar1,puVar1[-1]);
      free(puVar3);
    }
  }
  if (0xf < in_stack_00000018) {
    uVar6 = (uint)(in_stack_00000018 + 1);
    pcVar5 = (char *)(param_1);
    if (0xfff < uVar6) {
      pcVar5 = (char *)(*(char **)(param_1 + -4));
      uVar6 = (uint)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_1 + (-4 - (int)pcVar5)) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(pcVar5,uVar6);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10397e40; body size 1750 bytes.
#line 1 "ENTRY_10397e40"

void __fastcall FUN_10397e40(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  SCLibrary *pSVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11547fd5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  (**(code **)(*(int *)param_1[0x32] + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  if (param_1[0x57] != 0) {
    uVar2 = (undefined4)((**(code **)(*param_1 + 0x1dc))(&local_14));
    local_8 = (undefined4)(0);
    thunk_FUN_10350870(uVar2);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    (**(code **)(*local_20 + 0x18))(param_1[0x57]);
    piVar6 = (int *)((int *)param_1[0x58]);
    if (piVar6 != (int *)0x0) {
      param_1[0x57] = 0;
      param_1[0x58] = 0;
      (**(code **)(*piVar6 + 8))();
    }
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    local_8 = (undefined4)(4);
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    local_8 = (undefined4)(0xffffffff);
  }
  if ((param_1[0x53] != 0) && ((int *)param_1[0x52] != (int *)0x0)) {
    (**(code **)(*(int *)param_1[0x52] + 0x10))();
    puVar7 = (undefined4 *)((undefined4 *)param_1[0x52]);
    if ((puVar7 != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar7 + 1), iVar3 == 0)) {
      (**(code **)*puVar7)(1);
    }
    param_1[0x52] = 0;
    param_1[0x53] = 0;
  }
  if (((int *)param_1[0x77] != (int *)0x0) &&
     (cVar1 = (**(code **)(*(int *)param_1[0x77] + 0x1c))(), cVar1 != '\0')) {
    (**(code **)(param_1[0x76] + 4))();
  }
  if (((int *)param_1[0x91] != (int *)0x0) &&
     (cVar1 = (**(code **)(*(int *)param_1[0x91] + 0x1c))(), cVar1 != '\0')) {
    (**(code **)(param_1[0x90] + 4))();
  }
  if (((int *)param_1[0xab] != (int *)0x0) &&
     (cVar1 = (**(code **)(*(int *)param_1[0xab] + 0x1c))(), cVar1 != '\0')) {
    (**(code **)(param_1[0xaa] + 4))();
  }
  if (((int *)param_1[0xc5] != (int *)0x0) &&
     (cVar1 = (**(code **)(*(int *)param_1[0xc5] + 0x1c))(), cVar1 != '\0')) {
    (**(code **)(param_1[0xc4] + 4))();
  }
  if (((int *)param_1[0xdf] != (int *)0x0) &&
     (cVar1 = (**(code **)(*(int *)param_1[0xdf] + 0x1c))(), cVar1 != '\0')) {
    (**(code **)(param_1[0xde] + 4))();
  }
  if (((int *)param_1[0xf9] != (int *)0x0) &&
     (cVar1 = (**(code **)(*(int *)param_1[0xf9] + 0x1c))(), cVar1 != '\0')) {
    (**(code **)(param_1[0xf8] + 4))();
  }
  if ((param_1[0x11c] != 0) && ((int *)param_1[0x11b] != (int *)0x0)) {
    (**(code **)(*(int *)param_1[0x11b] + 0x10))();
    puVar7 = (undefined4 *)((undefined4 *)param_1[0x11b]);
    if ((puVar7 != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar7 + 1), iVar3 == 0)) {
      (**(code **)*puVar7)(1);
    }
    param_1[0x11b] = 0;
    param_1[0x11c] = 0;
  }
  if (((int *)param_1[0x11f] != (int *)0x0) &&
     (cVar1 = (**(code **)(*(int *)param_1[0x11f] + 0x1c))(), cVar1 != '\0')) {
    (**(code **)(param_1[0x11e] + 4))();
  }
  if (((int *)param_1[0x139] != (int *)0x0) &&
     (cVar1 = (**(code **)(*(int *)param_1[0x139] + 0x1c))(), cVar1 != '\0')) {
    (**(code **)(param_1[0x138] + 4))();
  }
  if (((int *)param_1[0x153] != (int *)0x0) &&
     (cVar1 = (**(code **)(*(int *)param_1[0x153] + 0x1c))(), cVar1 != '\0')) {
    (**(code **)(param_1[0x152] + 4))();
  }
  if (((int *)param_1[0x1a1] != (int *)0x0) &&
     (cVar1 = (**(code **)(*(int *)param_1[0x1a1] + 0x1c))(), cVar1 != '\0')) {
    (**(code **)(param_1[0x1a0] + 4))();
  }
  if (((int *)param_1[0x187] != (int *)0x0) &&
     (cVar1 = (**(code **)(*(int *)param_1[0x187] + 0x1c))(), cVar1 != '\0')) {
    (**(code **)(param_1[0x186] + 4))();
  }
  if (((int *)param_1[0x5d] != (int *)0x0) &&
     (cVar1 = (**(code **)(*(int *)param_1[0x5d] + 0x1c))(), cVar1 != '\0')) {
    (**(code **)(param_1[0x5c] + 4))();
  }
  if (param_1[0x1e3] != 0) {
    thunk_FUN_10384800();
  }
  thunk_FUN_10384890();
  thunk_FUN_1059d800();
  if (*(char *)((int)param_1 + 0x805) != '\0') {
    piVar4 = (int *)((int *)thunk_FUN_1023ab10(&local_14));
    piVar6 = (int *)((int *)*piVar4);
    local_8 = (undefined4)(5);
    *piVar4 = (int)(0);
    if (piVar6 == (int *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    local_1c = (int *)(piVar4);
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x28))(param_1[0x2b]);
    }
    local_8 = (undefined4)(9);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
    local_8 = (undefined4)(0xffffffff);
    *(undefined1 *)((int)param_1 + 0x805) = 0;
  }
  pSVar5 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  local_24 = (int *)((int *)0x0);
  if (pSVar5 != (SCLibrary *)0x0) {
    local_24 = (int *)((int *)(**(code **)(*(int *)pSVar5 + 0xc))());
    (**(code **)(*local_24 + 4))();
  }
  local_8 = (undefined4)(10);
  piVar6 = (int *)((int *)(**(code **)(*(int *)pSVar5 + 0x88))(&local_14));
  local_18 = (int *)((int *)*piVar6);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  *piVar6 = (int)(0);
  if (local_18 == (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
  }
  else {
    piVar6 = (int *)((int *)(**(code **)(*local_18 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  local_1c = (int *)(piVar6);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 0x2c))(param_1[0x1f]);
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  local_8 = (undefined4)(0x10);
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  local_8 = (undefined4)(0xffffffff);
  if ((char)param_1[0x201] != '\0') {
    uVar2 = (undefined4)(thunk_FUN_10292c70(&local_18));
    local_8 = (undefined4)(0x11);
    thunk_FUN_101cd010(uVar2);
    *(unsigned char *)((char *)&local_8 + 0) = 0x14;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x13)));
    if (pSVar5 != (SCLibrary *)0x0) {
      (**(code **)(*(int *)pSVar5 + 0x50))(param_1[0x25]);
    }
    *(undefined1 *)(param_1 + 0x201) = 0;
    local_8 = (undefined4)(0x15);
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))();
    }
  }
  local_8 = (undefined4)(0xffffffff);
  if (param_1[0x1e7] != 0) {
    thunk_FUN_10c83c80();
    if ((undefined4 *)param_1[0x1e7] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x1e7])(1);
    }
    param_1[0x1e7] = 0;
  }
  if (param_1[0x1e8] != 0) {
    thunk_FUN_10c83fc0();
    if ((undefined4 *)param_1[0x1e8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x1e8])(1);
    }
    param_1[0x1e8] = 0;
  }
  thunk_FUN_1039a660();
  if (param_1[0x3c] != 0) {
    thunk_FUN_102bba10();
    piVar6 = (int *)((int *)param_1[0x3d]);
    if (piVar6 != (int *)0x0) {
      param_1[0x3c] = 0;
      param_1[0x3d] = 0;
      (**(code **)(*piVar6 + 8))();
    }
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
  }
  piVar6 = (int *)((int *)param_1[0x37]);
  if (piVar6 != (int *)0x0) {
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    (**(code **)(*piVar6 + 8))();
  }
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  piVar6 = (int *)((int *)param_1[0x39]);
  if (piVar6 != (int *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (**(code **)(*piVar6 + 8))();
  }
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  piVar6 = (int *)((int *)param_1[0x3f]);
  if (piVar6 != (int *)0x0) {
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    (**(code **)(*piVar6 + 8))();
  }
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  piVar6 = (int *)((int *)param_1[0x3b]);
  if (piVar6 != (int *)0x0) {
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    (**(code **)(*piVar6 + 8))();
  }
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  if ((param_1[0x32] != 0) && (*(char *)((int)param_1 + 0x806) != '\0')) {
    (**(code **)(**(int **)(param_1[0x32] + 4) + 0x18))(param_1[0x28]);
  }
  if ((param_1[0x33] != 0) && (*(char *)((int)param_1 + 0x807) != '\0')) {
    (**(code **)(**(int **)(param_1[0x33] + 4) + 0x18))(param_1[0x28]);
  }
  puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_10436cd0(&local_1c));
  local_8 = (undefined4)(0x16);
  (**(code **)(*(int *)*puVar7 + 0x1c))(param_1[0x2e]);
  local_8 = (undefined4)(0x17);
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103987b0; body size 242 bytes.
#line 1 "ENTRY_103987b0"

undefined1 * __fastcall FUN_103987b0(int param_1)

{
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 auStackY_100 [216];
  undefined4 uStackY_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11548027);
  local_10 = (void *)(ExceptionList);
  if (*(char *)(param_1 + 0x803) == '\0') {
    return (undefined1 *)(auStackY_100);
  }
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x13c) == 0) {
    uStackY_28 = (undefined4)(0x1039880a);
    pvVar2 = (void *)(operator_new(0x558));
    local_8 = (undefined4)(0);
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)thunk_FUN_10cbe410());
    }
    local_8 = (undefined4)(0xffffffff);
    if (piVar3 != *(int **)(param_1 + 0x13c)) {
      piVar1 = (int *)(*(int **)(param_1 + 0x140));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x13c) = 0;
        *(undefined4 *)(param_1 + 0x140) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(int **)(param_1 + 0x13c) = piVar3;
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x140) = 0;
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
        *(int **)(param_1 + 0x140) = piVar3;
        (**(code **)(*piVar3 + 4))();
      }
    }
  }
  puVar4 = (undefined1 *)((undefined1 *)(**(code **)(**(int **)(param_1 + 0x13c) + 0x18))());
  ExceptionList = (void *)(local_10);
  return (undefined1 *)(puVar4);
}


// Reference entry 103988e0; body size 181 bytes.
#line 1 "ENTRY_103988e0"

void __fastcall FUN_103988e0(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11548074);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10371ff0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar1 = (int)((*(code *)**(undefined4 **)(*(int *)(param_1 + 0x40) + 0x1c))());
    if (iVar1 != 0) {
      iVar1 = (int)(thunk_FUN_110ce190());
      if (*(int *)(iVar1 + 0x2c) != 0) {
        thunk_FUN_1038ea50();
        ExceptionList = (void *)(local_10);
        return;
      }
    }
  }
  pvVar2 = (void *)(operator_new(0x6c));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    uVar3 = (undefined4)(0);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_111c06e0(0));
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_102207b0(uVar3,param_1 + 8,0);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103989d0; body size 116 bytes.
#line 1 "ENTRY_103989d0"

void __fastcall FUN_103989d0(int *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)(thunk_FUN_10397340());
  if ((cVar1 != '\0') && ((char)param_1[0x1e9] == '\0')) {
    cVar1 = (char)((**(code **)(*param_1 + 0x158))());
    if (cVar1 == '\0') {
      iVar2 = (int)((**(code **)(*(int *)param_1[0x32] + 100))());
      if (iVar2 != 0) {
        cVar1 = (char)(thunk_FUN_11093230());
        if (cVar1 != '\0') {
          iVar2 = (int)(thunk_FUN_1059d5a0(1000));
          param_1[0x46] = iVar2;
          return;
        }
      }
    }
  }
  cVar1 = (char)(thunk_FUN_10397340());
  if (cVar1 != '\0') {
    iVar2 = (int)(thunk_FUN_1059d5a0(1000));
    param_1[0x47] = iVar2;
  }
  return;
}


// Reference entry 10399410; body size 167 bytes.
#line 1 "ENTRY_10399410"

void __thiscall Recovered_Bulk::FUN_10399410(undefined4 param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11548215);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_1023a9c0(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(*(undefined4 *)(param_1 + 4),param_2);
  }
  local_8 = (undefined4)(4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10399500; body size 162 bytes.
#line 1 "ENTRY_10399500"

void __thiscall Recovered_Bulk::FUN_10399500(int *param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11548255);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (int *)(param_1);
  if ((char)param_2 != '\0') {
    thunk_FUN_10436cd0(&param_2,uVar1);
    local_8 = (undefined4)(0);
    thunk_FUN_104384c0();
    local_8 = (undefined4)(1);
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))();
    }
  }
  local_8 = (undefined4)(0xffffffff);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10436cd0(&local_14,uVar1));
  local_8 = (undefined4)(2);
  (**(code **)(*(int *)*puVar2 + 0x14))(param_1[1]);
  local_8 = (undefined4)(3);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10399ec0; body size 126 bytes.
#line 1 "ENTRY_10399ec0"

void __fastcall FUN_10399ec0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115483e4);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x7a0) == 0) {
    pvVar2 = (void *)(operator_new(0x1c));
    local_8 = (undefined4)(0);
    if (pvVar2 == (void *)0x0) {
      iVar3 = (int)(0);
    }
    else {
      iVar3 = (int)(thunk_FUN_10c83ce0(param_1 + 8));
    }
    local_8 = (undefined4)(0xffffffff);
    *(int *)(param_1 + 0x7a0) = iVar3;
    if (iVar3 != 0) {
      thunk_FUN_10c83f90(uVar1);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1039a280; body size 461 bytes.
#line 1 "ENTRY_1039a280"

void __thiscall Recovered_Bulk::FUN_1039a280(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
    thunk_FUN_112af4e0("SCHousehold",3,"Remove Event Sink %p",param_2);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    thunk_FUN_112af4e0("SCHousehold",3,"No more subscribers. Canceling upstream subscriptions.");
    if (*(int *)(param_1 + 0x10f8) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0x10fc));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x10f8) = 0;
        *(undefined4 *)(param_1 + 0x10fc) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x10f8) = 0;
      *(undefined4 *)(param_1 + 0x10fc) = 0;
    }
    if (*(int *)(param_1 + 0x1114) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0x1118));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x1114) = 0;
        *(undefined4 *)(param_1 + 0x1118) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x1114) = 0;
      *(undefined4 *)(param_1 + 0x1118) = 0;
    }
    if (*(int *)(param_1 + 0x1100) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0x1104));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x1100) = 0;
        *(undefined4 *)(param_1 + 0x1104) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x1100) = 0;
      *(undefined4 *)(param_1 + 0x1104) = 0;
    }
    if (*(int *)(param_1 + 0x1128) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0x112c));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x1128) = 0;
        *(undefined4 *)(param_1 + 0x112c) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x1128) = 0;
      *(undefined4 *)(param_1 + 0x112c) = 0;
    }
    if (*(int *)(param_1 + 0x1120) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0x1124));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x1120) = 0;
        *(undefined4 *)(param_1 + 0x1124) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x1120) = 0;
      *(undefined4 *)(param_1 + 0x1124) = 0;
    }
    if (*(int *)(param_1 + 0x1138) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0x113c));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x1138) = 0;
        *(undefined4 *)(param_1 + 0x113c) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x1138) = 0;
      *(undefined4 *)(param_1 + 0x113c) = 0;
    }
  }
  return;
}


// Reference entry 1039a4d0; body size 162 bytes.
#line 1 "ENTRY_1039a4d0"

void __fastcall FUN_1039a4d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11548485);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_1023ab10(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(*(undefined4 *)(param_1 + 4));
  }
  local_8 = (undefined4)(4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1039a5e0; body size 102 bytes.
#line 1 "ENTRY_1039a5e0"

void __fastcall FUN_1039a5e0(int *param_1)

{
  undefined4 *puVar1;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115484bd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (int *)(param_1);
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10436cd0(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  (**(code **)(*(int *)*puVar1 + 0x1c))(param_1[1]);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1039aa10; body size 214 bytes.
#line 1 "ENTRY_1039aa10"

void __fastcall FUN_1039aa10(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *local_28;
  undefined4 *local_24;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = (int)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11548555);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (int)(param_1);
  thunk_FUN_1037f130(&local_28,9);
  local_8 = (int)(0);
  *(undefined1 *)(param_1 + 0x80e) = 0;
  *(bool *)(param_1 + 0x80d) = local_28 != (undefined4 *)(local_24);
  puVar5 = (undefined4 *)(local_28);
  if (local_28 != (undefined4 *)(local_24)) {
    do {
      piVar1 = (int *)((int *)puVar5[1]);
      piVar2 = (int *)((int *)*puVar5);
      local_1c = (int *)(piVar2);
      local_18 = (int *)(piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar3);
      }
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      iVar4 = (int)((**(code **)(*piVar2 + 0xf4))());
      if (iVar4 == 2) {
        *(undefined1 *)(local_14 + 0x80e) = 1;
      }
      else {
        *(undefined1 *)(local_14 + 0x80d) = 0;
      }
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      if (piVar1 != (int *)0x0) {
        local_1c = (int *)((int *)0x0);
        local_18 = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
      puVar5 = (undefined4 *)(puVar5 + 2);
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
    } while (puVar5 != (undefined4 *)(local_24));
  }
  thunk_FUN_101f53d0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1039bf90; body size 231 bytes.
#line 1 "ENTRY_1039bf90"

void __fastcall FUN_1039bf90(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115488e4);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x79c) != 0) {
    thunk_FUN_10c83c80(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    if (*(undefined4 **)(param_1 + 0x79c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x79c))(1);
    }
    *(undefined4 *)(param_1 + 0x79c) = 0;
  }
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 200) + 100))());
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 200) + 100))();
    iVar1 = (int)(thunk_FUN_11081120());
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x79c) == 0)) {
      iVar1 = (int)(thunk_FUN_11138b60(iVar1 + 0x44));
      if (iVar1 != 0) {
        pvVar2 = (void *)(operator_new(0x20));
        local_8 = (undefined4)(0);
        if (pvVar2 == (void *)0x0) {
          uVar3 = (undefined4)(0);
        }
        else {
          uVar3 = (undefined4)(thunk_FUN_110cdb30());
          uVar3 = (undefined4)(thunk_FUN_10c83a10(param_1 + 0x70,uVar3));
        }
        local_8 = (undefined4)(0xffffffff);
        *(undefined4 *)(param_1 + 0x79c) = uVar3;
        thunk_FUN_10c83c30();
      }
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1039ecd0; body size 114 bytes.
#line 1 "ENTRY_1039ecd0"

undefined4 * __thiscall Recovered_Bulk::FUN_1039ecd0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154909d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1039ed60; body size 114 bytes.
#line 1 "ENTRY_1039ed60"

undefined4 * __thiscall Recovered_Bulk::FUN_1039ed60(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115490dd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1039ee80; body size 278 bytes.
#line 1 "ENTRY_1039ee80"

undefined4 * __thiscall Recovered_Bulk::FUN_1039ee80(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154913b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1039efe0; body size 278 bytes.
#line 1 "ENTRY_1039efe0"

undefined4 * __thiscall Recovered_Bulk::FUN_1039efe0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154919b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1039f2f0; body size 141 bytes.
#line 1 "ENTRY_1039f2f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1039f2f0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:SystemProperties:1","AddOAuthAccountX",
                     uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp;
  *(undefined1 *)(param_1 + 0x35f4) = 0;
  *(undefined1 *)(param_1 + 0x36f4) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 1039f3d0; body size 292 bytes.
#line 1 "ENTRY_1039f3d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1039f3d0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115491fb);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAddAccountX);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpAddAccountX);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1039f540; body size 306 bytes.
#line 1 "ENTRY_1039f540"

undefined4 * __thiscall Recovered_Bulk::FUN_1039f540(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154925b);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAddLinkCodeAccount);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpAddLinkCodeAccount);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1039f6c0; body size 129 bytes.
#line 1 "ENTRY_1039f6c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1039f6c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115492a8);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceDescriptor);
  param_1[2] = 0;
  param_1[3] = 0;
  local_8 = (undefined4)(1);
  uVar2 = (undefined4)(thunk_FUN_110c2bc0(uVar1));
  param_1[4] = uVar2;
  param_1[5] = param_2;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1039f770; body size 150 bytes.
#line 1 "ENTRY_1039f770"

undefined4 * __thiscall Recovered_Bulk::FUN_1039f770(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115492ed);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceDescriptorInternals);
  param_1[2] = param_2;
  thunk_FUN_11255220(uVar1);
  if ((param_2 == 1) || (param_2 == 2)) {
    param_1[4] = 0xca07;
  }
  else if ((param_2 == 0xd) || (param_2 == 0xe)) {
    param_1[4] = 0xcb07;
  }
  else {
    param_1[4] = param_2;
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1039fb50; body size 76 bytes.
#line 1 "ENTRY_1039fb50"

void __fastcall FUN_1039fb50(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11549380);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1039fbc0; body size 76 bytes.
#line 1 "ENTRY_1039fbc0"

void __fastcall FUN_1039fbc0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115493b0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1039fc30; body size 76 bytes.
#line 1 "ENTRY_1039fc30"

void __fastcall FUN_1039fc30(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115493e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1039fe50; body size 155 bytes.
#line 1 "ENTRY_1039fe50"

void __fastcall FUN_1039fe50(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11549470);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceDescriptor);
  piVar2 = (int *)((int *)param_1[3]);
  if (param_1[2] != 0) {
    if (piVar2 != (int *)0x0) {
      param_1[2] = 0;
      param_1[3] = 0;
      (**(code **)(*piVar2 + 8))(uVar1);
    }
    param_1[2] = 0;
    piVar2 = (int *)((int *)0x0);
    param_1[3] = 0;
  }
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1039ff50; body size 81 bytes.
#line 1 "ENTRY_1039ff50"

int * __thiscall Recovered_Bulk::FUN_1039ff50(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 103a0420; body size 180 bytes.
#line 1 "ENTRY_103a0420"

undefined4 * __thiscall Recovered_Bulk::FUN_103a0420(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115494d0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceDescriptor);
  piVar2 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (param_1[2] != 0) {
    if (piVar2 != (int *)0x0) {
      param_1[2] = 0;
      param_1[3] = 0;
      (**(code **)(*piVar2 + 8))(uVar1);
    }
    param_1[2] = 0;
    piVar2 = (int *)((int *)0x0);
    param_1[3] = 0;
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (piVar2 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103a0560; body size 76 bytes.
#line 1 "ENTRY_103a0560"

void __fastcall FUN_103a0560(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103a05c0; body size 76 bytes.
#line 1 "ENTRY_103a05c0"

void __fastcall FUN_103a05c0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103a0620; body size 149 bytes.
#line 1 "ENTRY_103a0620"

void __thiscall Recovered_Bulk::FUN_103a0620(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103a0700; body size 149 bytes.
#line 1 "ENTRY_103a0700"

void __thiscall Recovered_Bulk::FUN_103a0700(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103a0890; body size 95 bytes.
#line 1 "ENTRY_103a0890"

void __fastcall FUN_103a0890(int param_1)

{
  char cVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  
  cVar1 = (char)('\0');
  piVar2 = (int *)(*(int **)(param_1 + 0x14));
  iVar4 = (int)(*piVar2);
  if (iVar4 == 0) {
    cVar1 = (char)(thunk_FUN_11283440());
    piVar2 = (int *)(*(int **)(param_1 + 0x14));
    iVar4 = (int)(*piVar2);
  }
  bVar3 = (byte)(0);
  if (iVar4 == 0) {
    bVar3 = (byte)(~(byte)(*(uint *)(piVar2[1] + 0x130) >> 0xe) & 1);
  }
  if ((cVar1 != '\0') && (bVar3 == 0)) {
    cVar1 = (char)(thunk_FUN_103a2ff0());
    if (cVar1 == '\0') {
      return;
    }
  }
  thunk_FUN_110828b0();
  thunk_FUN_1107f270(*(undefined4 *)(param_1 + 0x14),0);
  return;
}


// Reference entry 103a0910; body size 80 bytes.
#line 1 "ENTRY_103a0910"

undefined1 __fastcall FUN_103a0910(int param_1)

{
  char cVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  
  cVar1 = (char)('\0');
  piVar2 = (int *)(*(int **)(param_1 + 0x14));
  iVar4 = (int)(*piVar2);
  if (iVar4 == 0) {
    cVar1 = (char)(thunk_FUN_11283440());
    piVar2 = (int *)(*(int **)(param_1 + 0x14));
    iVar4 = (int)(*piVar2);
  }
  bVar3 = (byte)(0);
  if (iVar4 == 0) {
    bVar3 = (byte)(~(byte)(*(uint *)(piVar2[1] + 0x130) >> 0xe) & 1);
  }
  if ((cVar1 != '\0') && (bVar3 == 0)) {
    cVar1 = (char)(thunk_FUN_103a2ff0());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 103a1600; body size 66 bytes.
#line 1 "ENTRY_103a1600"

undefined4 __fastcall FUN_103a1600(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    cVar1 = (char)(thunk_FUN_110c4a10());
    if (cVar1 != '\0') {
      return (undefined4)(0);
    }
    cVar1 = (char)(thunk_FUN_110c4a70());
    if (cVar1 != '\0') {
      return (undefined4)(2);
    }
    cVar1 = (char)(thunk_FUN_110c4a40());
    if (cVar1 != '\0') {
      return (undefined4)(3);
    }
  }
  return (undefined4)(1);
}


// Reference entry 103a1fd0; body size 65 bytes.
#line 1 "ENTRY_103a1fd0"

undefined4 __fastcall FUN_103a1fd0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (int)(thunk_FUN_110828b0());
  if (iVar2 == 0) {
    return (undefined4)(0);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x14));
  if (*piVar1 == 0) {
    uVar3 = (undefined4)(thunk_FUN_110830e0(*(int *)(piVar1[1] + 0x134) << 8 | 7,0));
    return (undefined4)(uVar3);
  }
  uVar3 = (undefined4)(thunk_FUN_110830e0((char)piVar1[2],0));
  return (undefined4)(uVar3);
}


// Reference entry 103a2ff0; body size 157 bytes.
#line 1 "ENTRY_103a2ff0"

undefined4 __fastcall FUN_103a2ff0(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11549bed);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(int *)param_1[5] == 0) {
    iVar3 = (int)(*(int *)(((int *)param_1[5])[1] + 0x134));
  }
  else {
    iVar3 = (int)(0);
  }
  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10413900(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)((**(code **)(*(int *)*puVar2 + 0x3c))());
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  if ((iVar3 == 0x12f) && (cVar1 != '\0')) {
    ExceptionList = (void *)(local_10);
    return (undefined4)(1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 103a3130; body size 128 bytes.
#line 1 "ENTRY_103a3130"

void __fastcall FUN_103a3130(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11549c2d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103a31d0; body size 128 bytes.
#line 1 "ENTRY_103a31d0"

void __fastcall FUN_103a31d0(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11549c6d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103a32b0; body size 232 bytes.
#line 1 "ENTRY_103a32b0"

void __thiscall Recovered_Bulk::FUN_103a32b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11549cad);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x3c))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103a33e0; body size 232 bytes.
#line 1 "ENTRY_103a33e0"

void __thiscall Recovered_Bulk::FUN_103a33e0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11549ced);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x3c))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103a3ed0; body size 68 bytes.
#line 1 "ENTRY_103a3ed0"

int FUN_103a3ed0(int *param_1)

{
  int iVar1;
  char *_Str1;
  undefined1 *puVar2;
  
  _Str1 = (char *)("");
  if ((char *)*param_1 != (char *)0x0) {
    _Str1 = (char *)((char *)*param_1);
  }
  iVar1 = (int)(strncmp(_Str1,"x-sonos-svcid:",0xe));
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)((undefined1 *)*param_1);
    }
                    
                    
    iVar1 = (int)(atoi(puVar2 + 0xe));
    return (int)(iVar1);
  }
  return (int)(0);
}


// Reference entry 103a3f30; body size 129 bytes.
#line 1 "ENTRY_103a3f30"

int __thiscall Recovered_Bulk::FUN_103a3f30(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  thunk_FUN_1124ffa0("AccountType",0);
  thunk_FUN_1124f350(param_2);
  piVar1 = (int *)((int *)thunk_FUN_112501c0("AccountID"));
  (**(code **)(*piVar1 + 0xc))(param_3);
  piVar1 = (int *)((int *)thunk_FUN_112501c0("AccountPassword"));
  (**(code **)(*piVar1 + 0xc))(param_3);
  uVar3 = (undefined4)(0x400);
  iVar2 = (int)(param_1 + 0xd7d0);
  thunk_FUN_11250160("AccountUDN");
  thunk_FUN_112503c0(iVar2,uVar3);
  return (int)(param_1);
}


// Reference entry 103a3fe0; body size 275 bytes.
#line 1 "ENTRY_103a3fe0"

int __thiscall Recovered_Bulk::FUN_103a3fe0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  thunk_FUN_1124ffa0("AccountType",0);
  thunk_FUN_1124f350(param_2);
  piVar1 = (int *)((int *)thunk_FUN_112501c0("AccountToken"));
  (**(code **)(*piVar1 + 0xc))(param_3);
  piVar1 = (int *)((int *)thunk_FUN_112501c0("AccountKey"));
  (**(code **)(*piVar1 + 0xc))(param_3);
  piVar1 = (int *)((int *)thunk_FUN_112501c0("OAuthDeviceID"));
  (**(code **)(*piVar1 + 0xc))(param_3);
  piVar1 = (int *)((int *)thunk_FUN_112501c0("AuthorizationCode"));
  (**(code **)(*piVar1 + 0xc))(param_3);
  piVar1 = (int *)((int *)thunk_FUN_112501c0("RedirectURI"));
  (**(code **)(*piVar1 + 0xc))(param_3);
  piVar1 = (int *)((int *)thunk_FUN_112501c0("UserIdHashCode"));
  (**(code **)(*piVar1 + 0xc))(param_3);
  thunk_FUN_1124ffa0("AccountTier",0);
  thunk_FUN_1124f350(param_3);
  uVar3 = (undefined4)(0x400);
  iVar2 = (int)(param_1 + 0xd7d0);
  thunk_FUN_11250160("AccountUDN");
  thunk_FUN_112503c0(iVar2,uVar3);
  uVar3 = (undefined4)(0x400);
  iVar2 = (int)(param_1 + 0xdbd0);
  thunk_FUN_11250160("AccountNickname");
  thunk_FUN_112503c0(iVar2,uVar3);
  return (int)(param_1);
}


// Reference entry 103a4600; body size 91 bytes.
#line 1 "ENTRY_103a4600"

int * __thiscall Recovered_Bulk::FUN_103a4600(int *param_2)
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
    return (int *)(param_1);
  }
  param_1[1] = 0;
  return (int *)(param_1);
}


// Reference entry 103a5290; body size 85 bytes.
#line 1 "ENTRY_103a5290"

void __thiscall Recovered_Bulk::FUN_103a5290(uint param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(*param_1);
  uVar2 = (uint)(param_1[1] - iVar1 >> 2);
  if (param_2 < uVar2) {
    param_1[1] = iVar1 + param_2 * 4;
    return;
  }
  if (uVar2 < param_2) {
    if ((uint)(param_1[2] - iVar1 >> 2) < param_2) {
      thunk_FUN_103a5300(param_2,param_3);
      return;
    }
    iVar1 = (int)(thunk_FUN_103ab950(param_1[1],param_2 - uVar2,param_3));
    param_1[1] = iVar1;
  }
  return;
}


// Reference entry 103a5300; body size 282 bytes.
#line 1 "ENTRY_103a5300"

void __thiscall Recovered_Bulk::FUN_103a5300(uint param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *_Dst;
  
  if (0x3fffffff < param_2) {
                    
    thunk_FUN_101a9be0();
  }
  iVar3 = (int)(param_1[1] - *param_1 >> 2);
  uVar4 = (uint)(param_1[2] - *param_1 >> 2);
  if ((0x3fffffff - (uVar4 >> 1) < uVar4) ||
     ((uVar4 = (uVar4 >> 1) + uVar4, uVar5 = param_2, param_2 <= uVar4 &&
      (uVar5 = uVar4, 0x3fffffff < uVar4)))) {
LAB_103a5410:
                    
    thunk_FUN_1012a2a0();
  }
  uVar5 = (uint)(uVar5 * 4);
  if (uVar5 < 0x1000) {
    if (uVar5 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar5));
    }
  }
  else {
    if (uVar5 + 0x23 <= uVar5) goto LAB_103a5410;
    pvVar1 = (void *)(operator_new(uVar5 + 0x23));
    if (pvVar1 == (void *)0x0) goto LAB_103a540a;
    _Dst = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar1;
  }
  thunk_FUN_103ab950((void *)((int)_Dst + iVar3 * 4),param_2 - iVar3,param_3);
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  iVar3 = (int)(*param_1);
  if (iVar3 != 0) {
    uVar4 = (uint)(param_1[2] - iVar3 & 0xfffffffc);
    iVar2 = (int)(iVar3);
    if (0xfff < uVar4) {
      iVar2 = (int)(*(int *)(iVar3 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar3 - iVar2) - 4U) {
LAB_103a540a:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar4);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)_Dst + param_2 * 4);
  param_1[2] = (int)(uVar5 + (int)_Dst);
  return;
}


// Reference entry 103a5a40; body size 84 bytes.
#line 1 "ENTRY_103a5a40"

void FUN_103a5a40(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154a020);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103a5f40; body size 121 bytes.
#line 1 "ENTRY_103a5f40"

undefined4 * __fastcall FUN_103a5f40(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154a050);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar1 = (undefined4 *)(operator_new(8));
  puVar1[1] = 0;
  *param_1 = (undefined4)(puVar1);
  *puVar1 = (undefined4)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103a5fe0; body size 121 bytes.
#line 1 "ENTRY_103a5fe0"

undefined4 * __fastcall FUN_103a5fe0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154a080);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar1 = (undefined4 *)(operator_new(8));
  puVar1[1] = 0;
  *param_1 = (undefined4)(puVar1);
  *puVar1 = (undefined4)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103a64a0; body size 110 bytes.
#line 1 "ENTRY_103a64a0"

undefined4 * __fastcall FUN_103a64a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154a0f0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar1 = (undefined4 *)(operator_new(8));
  puVar1[1] = 0;
  *param_1 = (undefined4)(puVar1);
  *puVar1 = (undefined4)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6530; body size 110 bytes.
#line 1 "ENTRY_103a6530"

undefined4 * __fastcall FUN_103a6530(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154a120);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar1 = (undefined4 *)(operator_new(8));
  puVar1[1] = 0;
  *param_1 = (undefined4)(puVar1);
  *puVar1 = (undefined4)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103a65f0; body size 318 bytes.
#line 1 "ENTRY_103a65f0"

undefined4 * __thiscall Recovered_Bulk::FUN_103a65f0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154a16b);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_103a6780(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  param_1[0xa6] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xa7] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xa6] = (uint)&ghidra_vftable_SCContentSessionCallback;
  local_8 = (undefined4)(1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlarmContentDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x21] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x22] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x23] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x24] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x25] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x94] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x95] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x96] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0xa0] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0xa6] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  thunk_FUN_101e6900(param_2);
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103a76b0; body size 76 bytes.
#line 1 "ENTRY_103a76b0"

void __fastcall FUN_103a76b0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154a4e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103a7720; body size 76 bytes.
#line 1 "ENTRY_103a7720"

void __fastcall FUN_103a7720(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154a510);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103a7790; body size 76 bytes.
#line 1 "ENTRY_103a7790"

void __fastcall FUN_103a7790(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154a540);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103a7800; body size 76 bytes.
#line 1 "ENTRY_103a7800"

void __fastcall FUN_103a7800(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154a570);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103a7870; body size 76 bytes.
#line 1 "ENTRY_103a7870"

void __fastcall FUN_103a7870(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154a5a0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103a78e0; body size 76 bytes.
#line 1 "ENTRY_103a78e0"

void __fastcall FUN_103a78e0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154a5d0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103a7950; body size 68 bytes.
#line 1 "ENTRY_103a7950"

void __fastcall FUN_103a7950(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154a600);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103a7bc0; body size 81 bytes.
#line 1 "ENTRY_103a7bc0"

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct
   std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned
   int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct
   std::greater<void> >(void_)
    public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int>
   >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_)
    public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int>
   >::~vector<unsigned int,class std::allocator<unsigned int> >(void_)
    public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct
   CHN *,class std::allocator<struct CHN *> >(void_)
     7 names - too many to list
   
   Library: Visual Studio 2019 Release */

void __fastcall FID_conflict__Tidy_103a7bc0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    uVar3 = (uint)(param_1[2] - iVar1 & 0xfffffffc);
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 103a7c30; body size 275 bytes.
#line 1 "ENTRY_103a7c30"

void __fastcall FUN_103a7c30(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154a6c0);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar7 = (int)(param_1[4]);
  if (iVar7 != 0) {
    do {
      uVar5 = (uint)(param_1[3] + -1 + iVar7);
      uVar6 = (uint)(uVar5 & 1);
      iVar4 = (int)(*(int *)(param_1[1] + (param_1[2] - 1 & uVar5 >> 1) * 4));
      piVar1 = (int *)(*(int **)(iVar4 + 4 + uVar6 * 8));
      local_8 = (undefined4)(0);
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(iVar4 + uVar6 * 8) = 0;
        *(undefined4 *)(iVar4 + 4 + uVar6 * 8) = 0;
        (**(code **)(*piVar1 + 8))(uVar3);
        iVar7 = (int)(param_1[4]);
      }
      iVar7 = (int)(iVar7 + -1);
      param_1[4] = iVar7;
    } while (iVar7 != 0);
    param_1[3] = 0;
  }
  local_8 = (undefined4)(0xffffffff);
  iVar7 = (int)(param_1[2]);
  while (iVar7 != 0) {
    iVar7 = (int)(iVar7 + -1);
    iVar4 = (int)(*(int *)(param_1[1] + iVar7 * 4));
    if (iVar4 != 0) {
      thunk_FUN_1148a50e(iVar4,0x10);
    }
  }
  iVar7 = (int)(param_1[1]);
  if (iVar7 != 0) {
    uVar3 = (uint)(param_1[2] * 4);
    iVar4 = (int)(iVar7);
    if (0xfff < uVar3) {
      iVar4 = (int)(*(int *)(iVar7 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar7 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar3);
  }
  uVar2 = (undefined4)(*param_1);
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = (undefined4)(0);
  thunk_FUN_1148a50e(uVar2,8);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103a7fd0; body size 81 bytes.
#line 1 "ENTRY_103a7fd0"

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct
   std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned
   int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct
   std::greater<void> >(void_)
    public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int>
   >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_)
    public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int>
   >::~vector<unsigned int,class std::allocator<unsigned int> >(void_)
    public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct
   CHN *,class std::allocator<struct CHN *> >(void_)
     7 names - too many to list
   
   Library: Visual Studio 2019 Release */

void __fastcall FID_conflict__Tidy_103a7fd0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    uVar3 = (uint)(param_1[2] - iVar1 & 0xfffffffc);
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 103a8040; body size 311 bytes.
#line 1 "ENTRY_103a8040"

void __fastcall FUN_103a8040(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154a750);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlarmContentDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x21] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x22] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x23] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x24] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x25] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x94] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x95] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x96] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0xa0] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0xa6] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  piVar1 = (int *)((int *)param_1[0xb4]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0xb3] = 0;
    param_1[0xb4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0xb2]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[0xb1] = 0;
    param_1[0xb2] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10120220();
  param_1[0xa6] = (uint)&ghidra_vftable_SCIObjImpl;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xa6] = (uint)&ghidra_vftable_SCIObj;
  thunk_FUN_103a81d0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103a81d0; body size 295 bytes.
#line 1 "ENTRY_103a81d0"

void __fastcall FUN_103a81d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154a780);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlarmMusicDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0x21] = (uint)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0x22] = (uint)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0x23] = (uint)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0x24] = (uint)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0x25] = (uint)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0x94] = (uint)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0x95] = (uint)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0x96] = (uint)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0xa0] = (uint)&ghidra_vftable_SCAlarmMusicDataSource;
  if ((int *)param_1[0xa4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xa4] + 100))(param_1[0xa1],uVar2);
  }
  piVar1 = (int *)((int *)param_1[0xa5]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0xa4] = 0;
    param_1[0xa5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0xa0] = (uint)&ghidra_vftable_SCBrowseStackManagerEventSink;
  piVar1 = (int *)((int *)param_1[0xa2]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[0xa1] = 0;
    param_1[0xa2] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_102037c0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103a8350; body size 536 bytes.
#line 1 "ENTRY_103a8350"

void __fastcall FUN_103a8350(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154a7b0);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseStackManager);
  param_1[2] = (uint)&ghidra_vftable_SCBrowseStackManager;
  param_1[3] = (uint)&ghidra_vftable_SCBrowseStackManager;
  param_1[4] = (uint)&ghidra_vftable_SCBrowseStackManager;
  param_1[0xc] = (uint)&ghidra_vftable_SCBrowseStackManager;
  param_1[0xd] = (uint)&ghidra_vftable_SCBrowseStackManager;
  param_1[0x10] = (uint)&ghidra_vftable_SCBrowseStackManager;
  thunk_FUN_104dec20(uVar3);
  if ((undefined4 *)param_1[0x31] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x31])(1);
  }
  thunk_FUN_104ddf90();
  if ((undefined4 *)param_1[0x32] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x32])(1);
  }
  thunk_FUN_103a4d50(param_1 + 0x36,*(undefined4 *)(param_1[0x36] + 4));
  thunk_FUN_1148a50e(param_1[0x36],0x1c);
  param_1[0x33] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  iVar1 = (int)(param_1[0x2d]);
  if (iVar1 != 0) {
    uVar3 = (uint)((param_1[0x2f] - iVar1 >> 2) * 4);
    iVar4 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar4 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar3);
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
  }
  thunk_FUN_101a2bf0();
  thunk_FUN_101a2bf0();
  thunk_FUN_103a7c30();
  thunk_FUN_103a7d90();
  thunk_FUN_103a7d90();
  piVar2 = (int *)((int *)param_1[0x15]);
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0x10] = (uint)&ghidra_vftable_SCFeatureManagerEventSink;
  piVar2 = (int *)((int *)param_1[0x12]);
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xd] = (uint)&ghidra_vftable_SCShareManagerEventSink;
  piVar2 = (int *)((int *)param_1[0xf]);
  local_8 = (undefined4)(2);
  if (piVar2 != (int *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xc] = (uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[3] = (uint)&ghidra_vftable_SCSwfObjBCListener;
  param_1[2] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103a8600; body size 90 bytes.
#line 1 "ENTRY_103a8600"

void __fastcall FUN_103a8600(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154a7e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseStackManagerEventSink);
  piVar1 = (int *)((int *)param_1[2]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103a8a50; body size 81 bytes.
#line 1 "ENTRY_103a8a50"

int * __thiscall Recovered_Bulk::FUN_103a8a50(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 103a9120; body size 100 bytes.
#line 1 "ENTRY_103a9120"

void __thiscall Recovered_Bulk::FUN_103a9120(int *param_2,uint param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(param_1[1]);
  iVar2 = (int)(-param_3);
  if ((iVar2 < 0) && (uVar1 < param_3)) {
    *param_2 = (int)(*param_1 - ((~(uVar1 + iVar2) >> 5) * 4 + 4));
    param_2[1] = uVar1 + iVar2 & 0x1f;
    return;
  }
  *param_2 = (int)(*param_1 + (uVar1 + iVar2 >> 5) * 4);
  param_2[1] = uVar1 + iVar2 & 0x1f;
  return;
}


// Reference entry 103a91a0; body size 100 bytes.
#line 1 "ENTRY_103a91a0"

void __thiscall Recovered_Bulk::FUN_103a91a0(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[1]);
  if ((param_3 < 0) && (uVar1 < (uint)-param_3)) {
    *param_2 = (int)(*param_1 - ((~(uVar1 + param_3) >> 5) * 4 + 4));
    param_2[1] = uVar1 + param_3 & 0x1f;
    return;
  }
  *param_2 = (int)(*param_1 + (uVar1 + param_3 >> 5) * 4);
  param_2[1] = uVar1 + param_3 & 0x1f;
  return;
}


// Reference entry 103a9240; body size 88 bytes.
#line 1 "ENTRY_103a9240"

int * __thiscall Recovered_Bulk::FUN_103a9240(int param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  if ((param_2 < 0) && ((uint)param_1[1] < (uint)-param_2)) {
    uVar1 = (uint)(param_1[1] + param_2);
    param_1[1] = uVar1;
    *param_1 = (int)(*param_1 + (~uVar1 >> 5) * -4 + -4);
    param_1[1] = uVar1 & 0x1f;
    return (int *)(param_1);
  }
  uVar1 = (uint)(param_1[1] + param_2);
  param_1[1] = uVar1;
  *param_1 = (int)(*param_1 + (uVar1 >> 5) * 4);
  param_1[1] = uVar1 & 0x1f;
  return (int *)(param_1);
}


// Reference entry 103a9740; body size 106 bytes.
#line 1 "ENTRY_103a9740"

undefined4 * __thiscall Recovered_Bulk::FUN_103a9740(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154a8b0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103a9880; body size 335 bytes.
#line 1 "ENTRY_103a9880"

undefined4 * __thiscall Recovered_Bulk::FUN_103a9880(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154a910);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlarmContentDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x21] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x22] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x23] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x24] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x25] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x94] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x95] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0x96] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0xa0] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  param_1[0xa6] = (uint)&ghidra_vftable_SCAlarmContentDataSource;
  piVar1 = (int *)((int *)param_1[0xb4]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0xb3] = 0;
    param_1[0xb4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0xb2]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[0xb1] = 0;
    param_1[0xb2] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10120220();
  param_1[0xa6] = (uint)&ghidra_vftable_SCIObjImpl;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xa6] = (uint)&ghidra_vftable_SCIObj;
  thunk_FUN_103a81d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2d8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103a9a90; body size 113 bytes.
#line 1 "ENTRY_103a9a90"

undefined4 * __thiscall Recovered_Bulk::FUN_103a9a90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154a940);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseStackManagerEventSink);
  piVar1 = (int *)((int *)param_1[2]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103a9b70; body size 135 bytes.
#line 1 "ENTRY_103a9b70"

undefined4 * __thiscall Recovered_Bulk::FUN_103a9b70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x21] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x22] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x23] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x24] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x25] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x94] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x96] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  thunk_FUN_10d09230();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2e0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a9c90; body size 145 bytes.
#line 1 "ENTRY_103a9c90"

undefined4 * __thiscall Recovered_Bulk::FUN_103a9c90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIndexedShareDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[0x21] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[0x22] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[0x23] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[0x24] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[0x25] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[0x94] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[0x95] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[0x96] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  thunk_FUN_102037c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x280);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a9d50; body size 145 bytes.
#line 1 "ENTRY_103a9d50"

undefined4 * __thiscall Recovered_Bulk::FUN_103a9d50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x21] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x22] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x23] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x24] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x25] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x94] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x95] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x96] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  thunk_FUN_102037c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x280);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103aa810; body size 407 bytes.
#line 1 "ENTRY_103aa810"

void __thiscall Recovered_Bulk::FUN_103aa810(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  void *pvVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  size_t _Size;
  
  uVar5 = (uint)(*(uint *)(param_1 + 8));
  uVar1 = (uint)(1);
  if (uVar5 != 0) {
    uVar1 = (uint)(uVar5);
  }
  for (; (uVar4 = (uint)(uVar1 - uVar5, uVar4 < param_2 || (uVar1 < 8))); uVar1 = uVar1 * 2) {
    if (0xfffffff - uVar1 < uVar1) {
      thunk_FUN_103aba20();
LAB_103aa9a2:
                    
      thunk_FUN_1012a2a0();
    }
  }
  uVar5 = (uint)(*(uint *)(param_1 + 0xc) >> 1);
  if (0x3fffffff < uVar1) goto LAB_103aa9a2;
  uVar1 = (uint)(uVar1 * 4);
  if (uVar1 < 0x1000) {
    if (uVar1 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar1));
    }
  }
  else {
    if (uVar1 + 0x23 <= uVar1) goto LAB_103aa9a2;
    pvVar2 = (void *)(operator_new(uVar1 + 0x23));
    if (pvVar2 == (void *)0x0) goto LAB_103aa995;
    _Dst = (void *)((void *)((int)pvVar2 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar2;
  }
  iVar6 = (int)(uVar5 * 4);
  pvVar2 = (void *)((void *)(*(int *)(param_1 + 4) + iVar6));
  sVar7 = (size_t)((*(int *)(param_1 + 8) * 4 - (int)pvVar2) + *(int *)(param_1 + 4));
  memmove((void *)(iVar6 + (int)_Dst),pvVar2,sVar7);
  pvVar2 = (void *)((void *)(sVar7 + iVar6 + (int)_Dst));
  if (uVar4 < uVar5) {
    sVar7 = (size_t)(uVar4 * 4);
    memmove(pvVar2,*(void **)(param_1 + 4),sVar7);
    pvVar2 = (void *)((void *)(sVar7 + *(int *)(param_1 + 4)));
    _Size = (size_t)((*(int *)(param_1 + 4) - (int)pvVar2) + iVar6);
    memmove(_Dst,pvVar2,_Size);
    memset((void *)((int)_Dst + _Size),0,sVar7);
  }
  else {
    sVar7 = (size_t)(uVar5 * 4);
    memmove(pvVar2,*(void **)(param_1 + 4),sVar7);
    memset((void *)((int)pvVar2 + sVar7),0,(uVar4 - uVar5) * 4);
    memset(_Dst,0,sVar7);
  }
  iVar6 = (int)(*(int *)(param_1 + 4));
  if (iVar6 != 0) {
    uVar5 = (uint)(*(int *)(param_1 + 8) * 4);
    iVar3 = (int)(iVar6);
    if (0xfff < uVar5) {
      iVar3 = (int)(*(int *)(iVar6 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar6 - iVar3) - 4U) {
LAB_103aa995:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar5);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar4;
  *(void **)(param_1 + 4) = _Dst;
  return;
}


// Reference entry 103aaa10; body size 408 bytes.
#line 1 "ENTRY_103aaa10"

void __thiscall Recovered_Bulk::FUN_103aaa10(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  void *pvVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  size_t _Size;
  
  uVar5 = (uint)(*(uint *)(param_1 + 8));
  uVar1 = (uint)(1);
  if (uVar5 != 0) {
    uVar1 = (uint)(uVar5);
  }
  for (; (uVar4 = (uint)(uVar1 - uVar5, uVar4 < param_2 || (uVar1 < 8))); uVar1 = uVar1 * 2) {
    if (0xfffffff - uVar1 < uVar1) {
      thunk_FUN_103aba30();
LAB_103aaba3:
                    
      thunk_FUN_1012a2a0();
    }
  }
  uVar5 = (uint)(*(uint *)(param_1 + 0xc) >> 2);
  if (0x3fffffff < uVar1) goto LAB_103aaba3;
  uVar1 = (uint)(uVar1 * 4);
  if (uVar1 < 0x1000) {
    if (uVar1 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar1));
    }
  }
  else {
    if (uVar1 + 0x23 <= uVar1) goto LAB_103aaba3;
    pvVar2 = (void *)(operator_new(uVar1 + 0x23));
    if (pvVar2 == (void *)0x0) goto LAB_103aab96;
    _Dst = (void *)((void *)((int)pvVar2 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar2;
  }
  iVar6 = (int)(uVar5 * 4);
  pvVar2 = (void *)((void *)(*(int *)(param_1 + 4) + iVar6));
  sVar7 = (size_t)((*(int *)(param_1 + 8) * 4 - (int)pvVar2) + *(int *)(param_1 + 4));
  memmove((void *)(iVar6 + (int)_Dst),pvVar2,sVar7);
  pvVar2 = (void *)((void *)(sVar7 + iVar6 + (int)_Dst));
  if (uVar4 < uVar5) {
    sVar7 = (size_t)(uVar4 * 4);
    memmove(pvVar2,*(void **)(param_1 + 4),sVar7);
    pvVar2 = (void *)((void *)(sVar7 + *(int *)(param_1 + 4)));
    _Size = (size_t)((*(int *)(param_1 + 4) - (int)pvVar2) + iVar6);
    memmove(_Dst,pvVar2,_Size);
    memset((void *)((int)_Dst + _Size),0,sVar7);
  }
  else {
    sVar7 = (size_t)(uVar5 * 4);
    memmove(pvVar2,*(void **)(param_1 + 4),sVar7);
    memset((void *)((int)pvVar2 + sVar7),0,(uVar4 - uVar5) * 4);
    memset(_Dst,0,sVar7);
  }
  iVar6 = (int)(*(int *)(param_1 + 4));
  if (iVar6 != 0) {
    uVar5 = (uint)(*(int *)(param_1 + 8) * 4);
    iVar3 = (int)(iVar6);
    if (0xfff < uVar5) {
      iVar3 = (int)(*(int *)(iVar6 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar6 - iVar3) - 4U) {
LAB_103aab96:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar5);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar4;
  *(void **)(param_1 + 4) = _Dst;
  return;
}


// Reference entry 103ab380; body size 79 bytes.
#line 1 "ENTRY_103ab380"

void __thiscall Recovered_Bulk::FUN_103ab380(int param_2)
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


// Reference entry 103ab5c0; body size 83 bytes.
#line 1 "ENTRY_103ab5c0"

void __thiscall Recovered_Bulk::FUN_103ab5c0(int *param_2)
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


// Reference entry 103ab630; body size 256 bytes.
#line 1 "ENTRY_103ab630"

void __fastcall FUN_103ab630(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154ac70);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar6 = (int)(*(int *)(param_1 + 0x10));
  if (iVar6 != 0) {
    do {
      uVar4 = (uint)(*(int *)(param_1 + 0xc) + -1 + iVar6);
      uVar5 = (uint)(uVar4 & 1);
      iVar3 = (int)(*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) - 1U & uVar4 >> 1) * 4));
      piVar1 = (int *)(*(int **)(iVar3 + 4 + uVar5 * 8));
      local_8 = (undefined4)(0);
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(iVar3 + uVar5 * 8) = 0;
        *(undefined4 *)(iVar3 + 4 + uVar5 * 8) = 0;
        (**(code **)(*piVar1 + 8))(uVar2);
        iVar6 = (int)(*(int *)(param_1 + 0x10));
      }
      iVar6 = (int)(iVar6 + -1);
      *(int *)(param_1 + 0x10) = iVar6;
    } while (iVar6 != 0);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  local_8 = (undefined4)(0xffffffff);
  iVar6 = (int)(*(int *)(param_1 + 8));
  while (iVar6 != 0) {
    iVar6 = (int)(iVar6 + -1);
    iVar3 = (int)(*(int *)(*(int *)(param_1 + 4) + iVar6 * 4));
    if (iVar3 != 0) {
      thunk_FUN_1148a50e(iVar3,0x10);
    }
  }
  iVar6 = (int)(*(int *)(param_1 + 4));
  if (iVar6 != 0) {
    uVar2 = (uint)(*(int *)(param_1 + 8) * 4);
    iVar3 = (int)(iVar6);
    if (0xfff < uVar2) {
      iVar3 = (int)(*(int *)(iVar6 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar6 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103ab950; body size 83 bytes.
#line 1 "ENTRY_103ab950"

int * FUN_103ab950(int *param_1,int param_2,int *param_3)

{
  if (*param_3 == 0) {
    memset(param_1,0,param_2 * 4);
    return (int *)(param_1 + param_2);
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (int)(*param_3);
    param_1 = (int *)(param_1 + 1);
  }
  return (int *)(param_1);
}


// Reference entry 103ac060; body size 107 bytes.
#line 1 "ENTRY_103ac060"

void __thiscall Recovered_Bulk::FUN_103ac060(int *param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (int)(*param_1);
  uVar4 = (uint)(param_1[3]);
  if (((int)uVar4 < 0) && (uVar4 != 0)) {
    iVar2 = (int)(-((~uVar4 >> 5) * 4 + 4));
  }
  else {
    iVar2 = (int)((uVar4 >> 5) * 4);
  }
  uVar1 = (uint)((uVar4 & 0x1f) - 1);
  if ((uVar4 & 0x1f) == 0) {
    param_2[1] = 0x1f;
    *param_2 = (int)(iVar3 + iVar2 + -4);
    return;
  }
  param_2[1] = uVar1 & 0x1f;
  *param_2 = (int)(iVar3 + iVar2 + (uVar1 >> 5) * 4);
  return;
}


// Reference entry 103b6b10; body size 69 bytes.
#line 1 "ENTRY_103b6b10"

void __thiscall Recovered_Bulk::FUN_103b6b10(int *param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[3]);
  if (((int)uVar1 < 0) && (uVar1 != 0)) {
    *param_2 = (int)(*param_1 - ((~uVar1 >> 5) * 4 + 4));
    param_2[1] = uVar1 & 0x1f;
    return;
  }
  *param_2 = (int)(*param_1 + (uVar1 >> 5) * 4);
  param_2[1] = uVar1 & 0x1f;
  return;
}


// Reference entry 103b7120; body size 100 bytes.
#line 1 "ENTRY_103b7120"

undefined4 * __thiscall Recovered_Bulk::FUN_103b7120(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154b8c0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x164))(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);
  local_8 = (undefined4)(0);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 103b71b0; body size 114 bytes.
#line 1 "ENTRY_103b71b0"

void __stdcall FUN_103b71b0(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154b904);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x14));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be5e0(uVar1));
  }
  local_8 = (undefined4)(0xffffffff);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  *param_1 = (undefined4)(piVar3);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103b7770; body size 136 bytes.
#line 1 "ENTRY_103b7770"

undefined4 * __thiscall Recovered_Bulk::FUN_103b7770(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  undefined1 local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154ba9e);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  uVar2 = (uint)((*(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x6c)) - 1);
  local_8 = (undefined4)(0);
  local_14 = (undefined4)(1);
  thunk_FUN_103b7ae0(*(int *)(*(int *)(param_1 + 100) +
                             (uVar2 >> 2 & *(int *)(param_1 + 0x68) - 1U) * 4) + (uVar2 & 3) * 4,
                     param_2,local_18,uVar1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 103b99d0; body size 93 bytes.
#line 1 "ENTRY_103b99d0"

void __thiscall Recovered_Bulk::FUN_103b99d0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if (((param_1[0x2b] - param_1[0x2a] >> 2 == 0) || (*(char **)(param_1[0x2b] + -4) == (char *)0x0))
     || (**(char **)(param_1[0x2b] + -4) == '\0')) {
    param_2 = (int)(0);
  }
  else {
    iVar1 = (int)(param_2);
    if (0 < param_2) {
      do {
        (**(code **)(*param_1 + 0x20))();
        iVar1 = (int)(iVar1 + -1);
      } while (iVar1 != 0);
      thunk_FUN_103b8760(param_2);
      return;
    }
  }
  thunk_FUN_103b8760(param_2);
  return;
}


// Reference entry 103b9e20; body size 118 bytes.
#line 1 "ENTRY_103b9e20"

void __stdcall FUN_103b9e20(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154c020);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if ((param_1 != 0) && (*(int *)(param_1 + -0x10) < 0xffff)) {
    iVar1 = (int)(thunk_FUN_1123fcd0((void *)(param_1 + -0x10),DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + -8) = 0;
      *(undefined4 *)(param_1 + -0xc) = 0;
      thunk_FUN_113cfb70(param_1,*(undefined4 *)(param_1 + -4));
      free((void *)(param_1 + -0x10));
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103bc4b0; body size 136 bytes.
#line 1 "ENTRY_103bc4b0"

void __fastcall FUN_103bc4b0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154c4a0);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar4 = (int)(*(int *)(param_1 + 0x10));
  uVar5 = (uint)(*(int *)(param_1 + 0xc) + -1 + iVar4);
  uVar6 = (uint)(uVar5 & 1);
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) - 1U & uVar5 >> 1) * 4));
  piVar2 = (int *)(*(int **)(iVar1 + 4 + uVar6 * 8));
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    *(undefined4 *)(iVar1 + uVar6 * 8) = 0;
    *(undefined4 *)(iVar1 + 4 + uVar6 * 8) = 0;
    (**(code **)(*piVar2 + 8))(uVar3);
    iVar4 = (int)(*(int *)(param_1 + 0x10));
  }
  *(int *)(param_1 + 0x10) = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103bc670; body size 106 bytes.
#line 1 "ENTRY_103bc670"

void __fastcall FUN_103bc670(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_8 [8];
  
  uVar4 = (uint)(param_1[3]);
  if (((int)uVar4 < 0) && (uVar4 != 0)) {
    iVar2 = (int)(-((~uVar4 >> 5) * 4 + 4));
  }
  else {
    iVar2 = (int)((uVar4 >> 5) * 4);
  }
  uVar1 = (uint)((uVar4 & 0x1f) - 1);
  if ((uVar4 & 0x1f) == 0) {
    iVar3 = (int)(-4);
  }
  else {
    iVar3 = (int)((uVar1 >> 5) * 4);
  }
  thunk_FUN_103b6e20(local_8,*param_1 + iVar2 + iVar3,uVar1 & 0x1f);
  return;
}


// Reference entry 103bd680; body size 85 bytes.
#line 1 "ENTRY_103bd680"

void __thiscall Recovered_Bulk::FUN_103bd680(uint param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(*param_1);
  uVar2 = (uint)(param_1[1] - iVar1 >> 2);
  if (param_2 < uVar2) {
    param_1[1] = iVar1 + param_2 * 4;
    return;
  }
  if (uVar2 < param_2) {
    if ((uint)(param_1[2] - iVar1 >> 2) < param_2) {
      thunk_FUN_103a5300(param_2,param_3);
      return;
    }
    iVar1 = (int)(thunk_FUN_103ab950(param_1[1],param_2 - uVar2,param_3));
    param_1[1] = iVar1;
  }
  return;
}


// Reference entry 103bddb0; body size 399 bytes.
#line 1 "ENTRY_103bddb0"

void __stdcall FUN_103bddb0(int *param_1)

{
  uint uVar1;
  SCLibrary *pSVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154c795);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (param_1 != (int *)0x0) {
    thunk_FUN_103d61d0(param_1,0);
  }
  puVar5 = (undefined4 *)(&param_1);
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar3 = (int *)((int *)((SCLibrary *)(pSVar2))->getSCHousehold());
  piVar6 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(0);
  *piVar3 = (int)(0);
  if (piVar6 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(puVar5,uVar1));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar6 != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piVar6 + 0x1e0))(&local_18));
    piVar6 = (int *)((int *)*piVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    *piVar4 = (int)(0);
    if (piVar6 == (int *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (piVar6 != (int *)0x0) {
      *(int **)(local_14 + 0x58) = piVar6;
      (**(code **)(*piVar6 + 0x14))(*(undefined4 *)(local_14 + 0x38));
    }
    pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    puVar5 = (undefined4 *)((undefined4 *)(**(code **)(*(int *)pSVar2 + 0x88))(&local_20));
    param_1 = (int *)((int *)*puVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    *puVar5 = (undefined4)(0);
    local_1c = (int *)(param_1);
    if (param_1 == (int *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      piVar6 = (int *)((int *)(**(code **)(*param_1 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    local_18 = (int *)(piVar6);
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    if (param_1 != (int *)0x0) {
      *(int **)(local_14 + 0x5c) = param_1;
      (**(code **)(*(int *)(local_14 + 0x40) + 4))(param_1);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
  }
  local_8 = (undefined4)(0xe);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103be270; body size 93 bytes.
#line 1 "ENTRY_103be270"

void __thiscall Recovered_Bulk::FUN_103be270(int param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
  }
  if (param_1[6] == 0) {
    do {
      cVar1 = (char)((**(code **)(*param_1 + 0x20))());
    } while (cVar1 != '\0');
  }
  if ((int *)param_1[0x16] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x16] + 0x18))(param_1[0xe]);
    param_1[0x16] = 0;
  }
  if ((int *)param_1[0x17] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x17] + 0x2c))(param_1[0x11]);
    param_1[0x17] = 0;
  }
  return;
}


// Reference entry 103be350; body size 322 bytes.
#line 1 "ENTRY_103be350"

undefined4 * __thiscall Recovered_Bulk::FUN_103be350(undefined4 *param_2,int *param_3,int *param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154c85d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 4));
  if (piVar1 == *(int **)(param_1 + 8)) {
    uVar5 = (undefined4)(thunk_FUN_102a3810(param_3,param_4));
    *param_2 = (undefined4)(uVar5);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  iVar2 = (int)(*param_4);
  if ((int *)(param_3) != piVar1) {
    piVar3 = (int *)((int *)param_4[1]);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    }
    *piVar1 = (int)(piVar1[-2]);
    piVar4 = (int *)((int *)piVar1[-1]);
    local_8 = (undefined4)(0);
    piVar1[1] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    thunk_FUN_102e78c0(param_3,piVar1 + -2,piVar1);
    if (iVar2 != *param_3) {
      piVar1 = (int *)((int *)param_3[1]);
      if (piVar1 != (int *)0x0) {
        *param_3 = (int)(0);
        param_3[1] = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *param_3 = (int)(iVar2);
      param_3[1] = (int)piVar3;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }
    }
    local_8 = (undefined4)(1);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    *param_2 = (undefined4)(param_3);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  *piVar1 = (int)(iVar2);
  piVar3 = (int *)((int *)param_4[1]);
  piVar1[1] = (int)piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  *param_2 = (undefined4)(param_3);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 103be770; body size 84 bytes.
#line 1 "ENTRY_103be770"

void __fastcall FUN_103be770(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154c920);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103be7e0; body size 110 bytes.
#line 1 "ENTRY_103be7e0"

void __fastcall FUN_103be7e0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154c950);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEnumerator);
  piVar1 = (int *)((int *)param_1[4]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103be8f0; body size 131 bytes.
#line 1 "ENTRY_103be8f0"

undefined4 * __thiscall Recovered_Bulk::FUN_103be8f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154c980);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEnumerator);
  piVar1 = (int *)((int *)param_1[4]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103beae0; body size 203 bytes.
#line 1 "ENTRY_103beae0"

undefined4 __thiscall Recovered_Bulk::FUN_103beae0(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154ca2d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_18 = (int *)((int *)0x0);
  local_8 = (undefined4)(0);
  piVar1 = (int *)((int *)*param_2);
  local_1c = (int *)(piVar1);
  local_14 = (int)(param_1);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  }
  *param_2 = (int)(0);
  iVar2 = (int)(*(int *)(local_14 + 0xc));
  local_18 = (int *)(piVar4);
  if (param_3 < 0) {
    piVar3 = (int *)(*(int **)(iVar2 + 0xc));
    if (piVar3 == *(int **)(iVar2 + 0x10)) {
      thunk_FUN_102a3810(piVar3,&local_1c);
    }
    else {
      *piVar3 = (int)((int)piVar1);
      piVar3[1] = (int)piVar4;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
      }
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 8;
    }
  }
  else {
    thunk_FUN_103bf020(param_3,&local_1c);
  }
  local_8 = (undefined4)(1);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(1);
}


// Reference entry 103bec30; body size 259 bytes.
#line 1 "ENTRY_103bec30"

undefined4 * __thiscall Recovered_Bulk::FUN_103bec30(undefined4 *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154ca85);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(**(code **)(*param_1 + 0x24))(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar2 = (int *)((int *)*piVar1);
  local_8 = (undefined4)(0);
  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  piVar4 = (int *)((int *)0x0);
  piVar3 = (int *)((int *)0x0);
  local_14 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)*piVar2)(&param_3,param_3));
    piVar4 = (int *)((int *)*piVar2);
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    *piVar2 = (int)(0);
    if (piVar4 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    local_14 = (int *)(piVar3);
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 8))();
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *param_2 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  local_8 = (undefined4)(8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 103bed80; body size 182 bytes.
#line 1 "ENTRY_103bed80"

int * __thiscall Recovered_Bulk::FUN_103bed80(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154cacd);
  local_10 = (void *)(ExceptionList);
  iVar1 = (int)(*(int *)(param_1 + 8));
  if ((-1 < iVar1) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 8),
     iVar1 < *(int *)(*(int *)(param_1 + 0xc) + 0xc) - iVar2 >> 3)) {
    piVar3 = (int *)(*(int **)(iVar2 + iVar1 * 8));
    piVar4 = (int *)(*(int **)(iVar2 + 4 + iVar1 * 8));
    ExceptionList = (void *)(&local_10);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    }
    local_8 = (undefined4)(0);
    *param_2 = (int)((int)piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    local_8 = (undefined4)(1);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
  *param_2 = (int)(0);
  return (int *)(param_2);
}


// Reference entry 103bee80; body size 322 bytes.
#line 1 "ENTRY_103bee80"

undefined4 * __thiscall Recovered_Bulk::FUN_103bee80(undefined4 *param_2,int *param_3,int *param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154cb0d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 4));
  if (piVar1 == *(int **)(param_1 + 8)) {
    uVar5 = (undefined4)(thunk_FUN_102a3810(param_3,param_4));
    *param_2 = (undefined4)(uVar5);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  iVar2 = (int)(*param_4);
  if ((int *)(param_3) != piVar1) {
    piVar3 = (int *)((int *)param_4[1]);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    }
    *piVar1 = (int)(piVar1[-2]);
    piVar4 = (int *)((int *)piVar1[-1]);
    local_8 = (undefined4)(0);
    piVar1[1] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    thunk_FUN_102e78c0(param_3,piVar1 + -2,piVar1);
    if (iVar2 != *param_3) {
      piVar1 = (int *)((int *)param_3[1]);
      if (piVar1 != (int *)0x0) {
        *param_3 = (int)(0);
        param_3[1] = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *param_3 = (int)(iVar2);
      param_3[1] = (int)piVar3;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }
    }
    local_8 = (undefined4)(1);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    *param_2 = (undefined4)(param_3);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  *piVar1 = (int)(iVar2);
  piVar3 = (int *)((int *)param_4[1]);
  piVar1[1] = (int)piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  *param_2 = (undefined4)(param_3);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 103bf020; body size 394 bytes.
#line 1 "ENTRY_103bf020"

void __thiscall Recovered_Bulk::FUN_103bf020(uint param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154cb4d);
  local_10 = (void *)(ExceptionList);
  uVar5 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0xc));
  if (param_2 < (uint)((int)piVar1 - *(int *)(param_1 + 8) >> 3)) {
    piVar6 = (int *)((int *)(*(int *)(param_1 + 8) + param_2 * 8));
    if (piVar1 != *(int **)(param_1 + 0x10)) {
      iVar2 = (int)(*param_3);
      if ((int *)(piVar6) == piVar1) {
        *piVar1 = (int)(iVar2);
        piVar6 = (int *)((int *)param_3[1]);
        piVar1[1] = (int)piVar6;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))();
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
        ExceptionList = (void *)(local_10);
        return;
      }
      piVar3 = (int *)((int *)param_3[1]);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }
      *piVar1 = (int)(piVar1[-2]);
      piVar4 = (int *)((int *)piVar1[-1]);
      local_8 = (undefined4)(0);
      piVar1[1] = (int)piVar4;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
      }
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
      thunk_FUN_102e78c0(piVar6,piVar1 + -2,piVar1);
      if (iVar2 != *piVar6) {
        piVar1 = (int *)((int *)piVar6[1]);
        if (piVar1 != (int *)0x0) {
          *piVar6 = (int)(0);
          piVar6[1] = 0;
          (**(code **)(*piVar1 + 8))();
        }
        *piVar6 = (int)(iVar2);
        piVar6[1] = (int)piVar3;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 4))();
        }
      }
      local_8 = (undefined4)(1);
      if (piVar3 == (int *)0x0) {
        ExceptionList = (void *)(local_10);
        return;
      }
      (**(code **)(*piVar3 + 8))();
      ExceptionList = (void *)(local_10);
      return;
    }
  }
  else {
    piVar6 = (int *)(piVar1);
    if (piVar1 != *(int **)(param_1 + 0x10)) {
      *piVar1 = (int)(*param_3);
      piVar6 = (int *)((int *)param_3[1]);
      piVar1[1] = (int)piVar6;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))(uVar5);
      }
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
      ExceptionList = (void *)(local_10);
      return;
    }
  }
  thunk_FUN_102a3810(piVar6,param_3);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103c0250; body size 114 bytes.
#line 1 "ENTRY_103c0250"

undefined4 * __thiscall Recovered_Bulk::FUN_103c0250(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154cd0d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103c02e0; body size 114 bytes.
#line 1 "ENTRY_103c02e0"

undefined4 * __thiscall Recovered_Bulk::FUN_103c02e0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154cd4d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103c0420; body size 278 bytes.
#line 1 "ENTRY_103c0420"

undefined4 * __thiscall Recovered_Bulk::FUN_103c0420(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154cdab);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103c0580; body size 278 bytes.
#line 1 "ENTRY_103c0580"

undefined4 * __thiscall Recovered_Bulk::FUN_103c0580(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154ce0b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103c0a80; body size 93 bytes.
#line 1 "ENTRY_103c0a80"

int __thiscall Recovered_Bulk::FUN_103c0a80(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154ce8d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 103c0b10; body size 93 bytes.
#line 1 "ENTRY_103c0b10"

int __thiscall Recovered_Bulk::FUN_103c0b10(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154cecd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 103c0e80; body size 257 bytes.
#line 1 "ENTRY_103c0e80"

undefined4 * __fastcall FUN_103c0e80(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154d005);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_1124a200("application/x-www-form-urlencoded",0);
  param_1[0x1883] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[0x1884] = 0;
  param_1[0x1885] = 0;
  param_1[0x1886] = 0;
  *(undefined2 *)(param_1 + 0x1887) = 1;
  *(undefined1 *)((int)param_1 + 0x621e) = 0;
  param_1[0x1888] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RRefreshTokenRequest);
  param_1[0x1883] = (uint)&ghidra_vftable_RRefreshTokenRequest;
  param_1[0x198a] = 0;
  param_1[0x198b] = 0;
  param_1[0x198c] = 0;
  param_1[0x198d] = 0;
  local_8 = (undefined4)(4);
  param_1[0x198e] = 0;
  cVar1 = (char)(thunk_FUN_101dce50(uVar2));
  pcVar3 = (char *)("/oauth/v4/okta-widget/token");
  if (cVar1 == '\0') {
    pcVar3 = (char *)("/auth/oauth/v2/token");
  }
  thunk_FUN_11261330(param_1 + 0x1889,0x401,pcVar3,0xf);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103c1540; body size 347 bytes.
#line 1 "ENTRY_103c1540"

undefined4 * __thiscall Recovered_Bulk::FUN_103c1540(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154d1ed);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar3 = (void *)(operator_new(0x90));
  local_8 = (undefined4)(0);
  if (pvVar3 == (void *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(thunk_FUN_103c0be0(param_2,param_3,param_4,param_5,param_6));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);
  local_8 = (undefined4)(1);
  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  param_1[6] = iVar4;
  if (iVar4 != 0) {
    thunk_FUN_1123fce0(iVar4 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpFetchToken);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpFetchToken);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103c20e0; body size 177 bytes.
#line 1 "ENTRY_103c20e0"

void __fastcall FUN_103c20e0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154d4a0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  piVar1 = (int *)((int *)param_1[0x19]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 0x10,uVar2);
    param_1[0x19] = 0;
  }
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101d3630();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103c21d0; body size 177 bytes.
#line 1 "ENTRY_103c21d0"

void __fastcall FUN_103c21d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154d4d0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  piVar1 = (int *)((int *)param_1[0x19]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 0x10,uVar2);
    param_1[0x19] = 0;
  }
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101d3630();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103c22c0; body size 76 bytes.
#line 1 "ENTRY_103c22c0"

void __fastcall FUN_103c22c0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154d500);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103c2330; body size 76 bytes.
#line 1 "ENTRY_103c2330"

void __fastcall FUN_103c2330(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154d530);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103c23a0; body size 76 bytes.
#line 1 "ENTRY_103c23a0"

void __fastcall FUN_103c23a0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154d560);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103c2410; body size 76 bytes.
#line 1 "ENTRY_103c2410"

void __fastcall FUN_103c2410(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154d590);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103c2480; body size 76 bytes.
#line 1 "ENTRY_103c2480"

void __fastcall FUN_103c2480(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154d5c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103c2d10; body size 90 bytes.
#line 1 "ENTRY_103c2d10"

void __fastcall FUN_103c2d10(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154d710);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSinkDelegate);
  piVar1 = (int *)((int *)param_1[2]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103c31d0; body size 81 bytes.
#line 1 "ENTRY_103c31d0"

int * __thiscall Recovered_Bulk::FUN_103c31d0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 103c3240; body size 81 bytes.
#line 1 "ENTRY_103c3240"

int * __thiscall Recovered_Bulk::FUN_103c3240(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 103c32b0; body size 81 bytes.
#line 1 "ENTRY_103c32b0"

int * __thiscall Recovered_Bulk::FUN_103c32b0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 103c3320; body size 81 bytes.
#line 1 "ENTRY_103c3320"

int * __thiscall Recovered_Bulk::FUN_103c3320(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 103c3390; body size 81 bytes.
#line 1 "ENTRY_103c3390"

int * __thiscall Recovered_Bulk::FUN_103c3390(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 103c3c80; body size 83 bytes.
#line 1 "ENTRY_103c3c80"

undefined4 * __thiscall Recovered_Bulk::FUN_103c3c80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  thunk_FUN_105a85f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103c3f70; body size 113 bytes.
#line 1 "ENTRY_103c3f70"

undefined4 * __thiscall Recovered_Bulk::FUN_103c3f70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154d970);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSinkDelegate);
  piVar1 = (int *)((int *)param_1[2]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103c4b80; body size 79 bytes.
#line 1 "ENTRY_103c4b80"

void __thiscall Recovered_Bulk::FUN_103c4b80(int param_2)
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


// Reference entry 103c4ca0; body size 83 bytes.
#line 1 "ENTRY_103c4ca0"

void __thiscall Recovered_Bulk::FUN_103c4ca0(int *param_2)
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


// Reference entry 103c4e00; body size 76 bytes.
#line 1 "ENTRY_103c4e00"

void __fastcall FUN_103c4e00(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103c4e60; body size 76 bytes.
#line 1 "ENTRY_103c4e60"

void __fastcall FUN_103c4e60(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103c4ec0; body size 83 bytes.
#line 1 "ENTRY_103c4ec0"

void __fastcall FUN_103c4ec0(int param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_101dce50());
  if (cVar2 == '\0') {
    piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x34) + 0x100));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x18))(*(undefined4 *)(param_1 + 0x2c));
    }
  }
  else if (*(int *)(param_1 + 0x4c) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x50));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    return;
  }
  return;
}


// Reference entry 103c5d70; body size 149 bytes.
#line 1 "ENTRY_103c5d70"

void __thiscall Recovered_Bulk::FUN_103c5d70(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103c5e50; body size 149 bytes.
#line 1 "ENTRY_103c5e50"

void __thiscall Recovered_Bulk::FUN_103c5e50(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103c64f0; body size 73 bytes.
#line 1 "ENTRY_103c64f0"

int __thiscall Recovered_Bulk::FUN_103c64f0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 4))();
  piVar1 = (int *)((int *)param_1[2]);
  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[1] = (int)param_2;
  if (param_2 != (int *)0x0) {
    iVar2 = (int)((**(code **)(*param_2 + 0xc))());
    param_1[2] = iVar2;
    return (int)(param_1[1]);
  }
  param_1[2] = 0;
  return (int)(0);
}


// Reference entry 103c6b20; body size 83 bytes.
#line 1 "ENTRY_103c6b20"

void __fastcall FUN_103c6b20(int param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_101dce50());
  if (cVar2 == '\0') {
    piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x34) + 0x100));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x18))(*(undefined4 *)(param_1 + 0x2c));
    }
  }
  else if (*(int *)(param_1 + 0x4c) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x50));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    return;
  }
  return;
}


// Reference entry 103c6bb0; body size 116 bytes.
#line 1 "ENTRY_103c6bb0"

void __fastcall FUN_103c6bb0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x5c) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x58) + 4))();
      (**(code **)(*(int *)(param_1 + 0x58) + 4))();
      thunk_FUN_112af4e0("tokenmanager",2,"RTMFetchClientTokenRequest cancelled");
    }
  }
  if (*(int **)(param_1 + 0xe4) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xe4) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0xe0) + 4))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0xe0) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 103c6d60; body size 84 bytes.
#line 1 "ENTRY_103c6d60"

void __stdcall FUN_103c6d60(undefined4 param_1,int *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154e210);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    param_1 = (undefined4)(0);
    (**(code **)(*param_2 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103c6dd0; body size 84 bytes.
#line 1 "ENTRY_103c6dd0"

void __stdcall FUN_103c6dd0(undefined4 param_1,int *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1154e240);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    param_1 = (undefined4)(0);
    (**(code **)(*param_2 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103c9230; body size 135 bytes.
#line 1 "ENTRY_103c9230"

void __fastcall FUN_103c9230(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x3c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = (int *)(*(int **)(param_1 + 100));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (char)((**(code **)(**(int **)(param_1 + 4) + 0x1c))());
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 103c92e0; body size 135 bytes.
#line 1 "ENTRY_103c92e0"

void __fastcall FUN_103c92e0(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x3c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = (int *)(*(int **)(param_1 + 100));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (char)((**(code **)(**(int **)(param_1 + 4) + 0x1c))());
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 103c9570; body size 128 bytes.
#line 1 "ENTRY_103c9570"

void __fastcall FUN_103c9570(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154e79d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103c9610; body size 128 bytes.
#line 1 "ENTRY_103c9610"

void __fastcall FUN_103c9610(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154e7dd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103ca3b0; body size 232 bytes.
#line 1 "ENTRY_103ca3b0"

void __thiscall Recovered_Bulk::FUN_103ca3b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154ea5d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103ca4e0; body size 232 bytes.
#line 1 "ENTRY_103ca4e0"

void __thiscall Recovered_Bulk::FUN_103ca4e0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154ea9d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103ca610; body size 746 bytes.
#line 1 "ENTRY_103ca610"

undefined4 __thiscall Recovered_Bulk::FUN_103ca610(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 local_30;
  int *local_2c;
  int *local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154eb3c);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_112af4e0("SCOpRefreshToken",4,"SCFetchTokenOpActionWrapper::perform",
                     DAT_12126b84 ^ (uint)&stack0xfffffffc);
  piVar2 = (int *)((int *)createPropertyBag());
  piVar4 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  local_1c = (int *)(piVar4);
  if (piVar4 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_2 + 0x20))(&local_14));
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*(int *)*puVar3 + 0x88))(piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  piVar4 = (int *)(operator_new(0x48));
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  local_28 = (int *)(piVar4);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    local_14 = (int *)((int *)((uint)(*(unsigned short *)((char *)&local_14 + 1)) << 8 | (uint)(*(undefined1 *)(param_1 + 0x2c))));
    local_20 = (undefined4)(*(undefined4 *)(param_1 + 0x28));
    local_24 = (undefined4)(*(undefined4 *)(param_1 + 0x24));
    local_2c = (int *)(operator_new(0x90));
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_2c == (void *)0x0) {
      local_14 = (int *)((int *)0x0);
    }
    else {
      local_14 = (int *)((int *)thunk_FUN_103c0be0(local_24,local_20,local_14,1,local_1c));
    }
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar4[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    local_2c = (int *)(piVar4 + 2);
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    thunk_FUN_11240650();
    piVar4[2] = (int)(uint)&ghidra_vftable_RControlAIOOpCB;
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCOpImpl);
    piVar4[2] = (int)(uint)&ghidra_vftable_SCOpImpl;
    piVar4[3] = 0;
    piVar4[4] = 0;
    local_2c = (int *)(piVar4 + 6);
    piVar4[5] = (int)(uint)&ghidra_vftable_RControlAIOOpRefBase;
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    *local_2c = (int)((int)local_14);
    if (local_14 != (int *)0x0) {
      thunk_FUN_1123fce0(local_14 + 1);
    }
    piVar4[7] = 0;
    piVar4[5] = (int)(uint)&ghidra_vftable_RControlAIOOpRef;
    piVar4[8] = 0;
    *(undefined2 *)(piVar4 + 9) = 1000;
    piVar4[10] = 0;
    piVar4[0xb] = 0;
    piVar4[0xc] = (int)(uint)&ghidra_vftable_SCIObjImpl;
    piVar4[0xd] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar4[0xc] = (int)(uint)&ghidra_vftable_SCElapsedTimeMeasurement;
    piVar4[0xe] = 0;
    piVar4[0xf] = 0;
    piVar4[0xf] = 0;
    piVar4[0x10] = 0;
    piVar4[0x11] = 0;
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCOpFetchToken);
    piVar4[2] = (int)(uint)&ghidra_vftable_SCOpFetchToken;
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar4 != *(int **)(param_1 + 0x1c)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x20));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x1c) = piVar4;
    if (piVar4 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    else {
      if (*(code **)(*piVar4 + 0xc) != thunk_FUN_101bb8a0) {
        piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      }
      *(int **)(param_1 + 0x20) = piVar4;
      (**(code **)(*piVar4 + 4))();
    }
  }
  piVar4 = (int *)(*(int **)(param_1 + 0x1c));
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_101da240(&local_30));
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  (**(code **)(*piVar4 + 0x14))(*puVar3);
  piVar4 = (int *)(local_2c);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  if (local_2c != (int *)0x0) {
    local_30 = (undefined4)(0);
    local_2c = (int *)((int *)0x0);
    (**(code **)(*piVar4 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (param_2 != *(int **)(param_1 + 0x14)) {
    piVar4 = (int *)(*(int **)(param_1 + 0x18));
    if (piVar4 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      (**(code **)(*piVar4 + 8))();
    }
    *(int **)(param_1 + 0x14) = param_2;
    piVar4 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    *(int **)(param_1 + 0x18) = piVar4;
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = (undefined4)(0xe);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(1);
}


// Reference entry 103cbe30; body size 99 bytes.
#line 1 "ENTRY_103cbe30"

int __thiscall Recovered_Bulk::FUN_103cbe30(int param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    if (*(int *)(param_1 + 8) != 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    }
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(int *)(param_1 + 4) = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return (int)(param_2);
}


// Reference entry 103cbfc0; body size 432 bytes.
#line 1 "ENTRY_103cbfc0"

void __fastcall FUN_103cbfc0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154eea7);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)(operator_new(0xdc));
  local_8 = (undefined4)(0);
  local_14 = (int *)(piVar2);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10708df0(uVar1));
    uVar4 = (undefined4)((**(code **)(*piVar3 + 0xc))(0,0,0));
    thunk_FUN_105a7950(uVar4);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCNewWizControllerFor);
    piVar2[2] = (int)(uint)&ghidra_vftable_SCNewWizControllerFor;
    piVar2[6] = (int)(uint)&ghidra_vftable_SCNewWizControllerFor;
    piVar2[7] = (int)(uint)&ghidra_vftable_SCNewWizControllerFor;
    piVar2[0xe] = (int)(uint)&ghidra_vftable_SCNewWizControllerFor;
    piVar2[0x11] = (int)(uint)&ghidra_vftable_SCNewWizControllerFor;
    piVar2[0x14] = (int)(uint)&ghidra_vftable_SCNewWizControllerFor;
  }
  local_8 = (undefined4)(0xffffffff);
  if (piVar2 != *(int **)(param_1 + 0x44)) {
    piVar3 = (int *)(*(int **)(param_1 + 0x48));
    if (piVar3 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      (**(code **)(*piVar3 + 8))();
    }
    *(int **)(param_1 + 0x44) = piVar2;
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    else {
      if (*(code **)(*piVar2 + 0xc) != thunk_FUN_1023a9b0) {
        piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
      }
      *(int **)(param_1 + 0x48) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  piVar3 = (int *)((int *)thunk_FUN_105aca80(&local_14,8,0xd,0));
  piVar2 = (int *)((int *)*piVar3);
  *piVar3 = (int)(0);
  piVar3 = (int *)(*(int **)(param_1 + 0x40));
  local_8 = (undefined4)(1);
  if (piVar3 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    (**(code **)(*piVar3 + 8))();
  }
  *(int **)(param_1 + 0x3c) = piVar2;
  if (piVar2 == (int *)0x0) {
    uVar4 = (undefined4)(0);
  }
  else {
    uVar4 = (undefined4)((**(code **)(*piVar2 + 0xc))());
  }
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  local_8 = (undefined4)(2);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  piVar2 = (int *)(*(int **)(param_1 + 0x3c));
  local_8 = (undefined4)(0xffffffff);
  puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_101d95e0(&local_1c));
  local_8 = (undefined4)(3);
  (**(code **)(*piVar2 + 0x1c))(*puVar5);
  piVar2 = (int *)(local_18);
  local_8 = (undefined4)(4);
  if (local_18 != (int *)0x0) {
    local_1c = (undefined4)(0);
    local_18 = (int *)((int *)0x0);
    (**(code **)(*piVar2 + 8))();
  }
  local_8 = (undefined4)(0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x14))();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103ccf00; body size 125 bytes.
#line 1 "ENTRY_103ccf00"

undefined4 * __thiscall Recovered_Bulk::FUN_103ccf00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154f07d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  local_8 = (undefined4)(0);
  thunk_FUN_103cd850(param_2,param_2);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103ccfc0; body size 220 bytes.
#line 1 "ENTRY_103ccfc0"

int * __thiscall Recovered_Bulk::FUN_103ccfc0(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 uVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154f0bd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x28));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);
  local_8 = (undefined4)(0);
  uVar8 = (undefined4)(thunk_FUN_103cdb40(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
  *(undefined4 *)(*param_1 + 4) = uVar8;
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = param_2[1];
  piVar3 = (int *)((int *)piVar2[1]);
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    cVar1 = (char)(*(char *)(*piVar3 + 0xd));
    piVar6 = (int *)((int *)*piVar3);
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*piVar6 + 0xd));
      piVar3 = (int *)(piVar6);
      piVar6 = (int *)((int *)*piVar6);
    }
    *piVar2 = (int)((int)piVar3);
    iVar4 = (int)(*(int *)(*param_1 + 4));
    iVar5 = (int)(*(int *)(iVar4 + 8));
    cVar1 = (char)(*(char *)(iVar5 + 0xd));
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
      iVar4 = (int)(iVar5);
      iVar5 = (int)(*(int *)(iVar5 + 8));
    }
    *(int *)(*param_1 + 8) = iVar4;
  }
  else {
    *piVar2 = (int)((int)piVar2);
    *(int *)(*param_1 + 8) = *param_1;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 103cd0e0; body size 220 bytes.
#line 1 "ENTRY_103cd0e0"

int * __thiscall Recovered_Bulk::FUN_103cd0e0(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 uVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154f0fd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x18));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);
  local_8 = (undefined4)(0);
  uVar8 = (undefined4)(thunk_FUN_103cdcc0(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
  *(undefined4 *)(*param_1 + 4) = uVar8;
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = param_2[1];
  piVar3 = (int *)((int *)piVar2[1]);
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    cVar1 = (char)(*(char *)(*piVar3 + 0xd));
    piVar6 = (int *)((int *)*piVar3);
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*piVar6 + 0xd));
      piVar3 = (int *)(piVar6);
      piVar6 = (int *)((int *)*piVar6);
    }
    *piVar2 = (int)((int)piVar3);
    iVar4 = (int)(*(int *)(*param_1 + 4));
    iVar5 = (int)(*(int *)(iVar4 + 8));
    cVar1 = (char)(*(char *)(iVar5 + 0xd));
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
      iVar4 = (int)(iVar5);
      iVar5 = (int)(*(int *)(iVar5 + 8));
    }
    *(int *)(*param_1 + 8) = iVar4;
  }
  else {
    *piVar2 = (int)((int)piVar2);
    *(int *)(*param_1 + 8) = *param_1;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 103cd850; body size 113 bytes.
#line 1 "ENTRY_103cd850"

void __thiscall Recovered_Bulk::FUN_103cd850(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_103cda00(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
  *(undefined4 *)(*param_1 + 4) = uVar7;
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = param_2[1];
  piVar3 = (int *)((int *)piVar2[1]);
  if (*(char *)((int)piVar3 + 0xd) != '\0') {
    *piVar2 = (int)((int)piVar2);
    *(int *)(*param_1 + 8) = *param_1;
    return;
  }
  cVar1 = (char)(*(char *)(*piVar3 + 0xd));
  piVar6 = (int *)((int *)*piVar3);
  while (cVar1 == '\0') {
    cVar1 = (char)(*(char *)(*piVar6 + 0xd));
    piVar3 = (int *)(piVar6);
    piVar6 = (int *)((int *)*piVar6);
  }
  *piVar2 = (int)((int)piVar3);
  iVar4 = (int)(*(int *)(*param_1 + 4));
  iVar5 = (int)(*(int *)(iVar4 + 8));
  cVar1 = (char)(*(char *)(iVar5 + 0xd));
  while (cVar1 == '\0') {
    cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
    iVar4 = (int)(iVar5);
    iVar5 = (int)(*(int *)(iVar5 + 8));
  }
  *(int *)(*param_1 + 8) = iVar4;
  return;
}


// Reference entry 103ceef0; body size 70 bytes.
#line 1 "ENTRY_103ceef0"

undefined4 * __thiscall Recovered_Bulk::FUN_103ceef0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar2 = (void *)(operator_new(0x18));
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
  return (undefined4 *)(param_1);
}


// Reference entry 103cef90; body size 70 bytes.
#line 1 "ENTRY_103cef90"

undefined4 * __thiscall Recovered_Bulk::FUN_103cef90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar2 = (void *)(operator_new(0x18));
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
  return (undefined4 *)(param_1);
}


// Reference entry 103cf280; body size 128 bytes.
#line 1 "ENTRY_103cf280"

undefined4 * __thiscall Recovered_Bulk::FUN_103cf280(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154f71d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  local_8 = (undefined4)(0);
  thunk_FUN_103cd850(param_2,param_2);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103cf370; body size 220 bytes.
#line 1 "ENTRY_103cf370"

int * __thiscall Recovered_Bulk::FUN_103cf370(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 uVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154f75d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x28));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);
  local_8 = (undefined4)(0);
  uVar8 = (undefined4)(thunk_FUN_103cdb40(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
  *(undefined4 *)(*param_1 + 4) = uVar8;
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = param_2[1];
  piVar3 = (int *)((int *)piVar2[1]);
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    cVar1 = (char)(*(char *)(*piVar3 + 0xd));
    piVar6 = (int *)((int *)*piVar3);
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*piVar6 + 0xd));
      piVar3 = (int *)(piVar6);
      piVar6 = (int *)((int *)*piVar6);
    }
    *piVar2 = (int)((int)piVar3);
    iVar4 = (int)(*(int *)(*param_1 + 4));
    iVar5 = (int)(*(int *)(iVar4 + 8));
    cVar1 = (char)(*(char *)(iVar5 + 0xd));
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
      iVar4 = (int)(iVar5);
      iVar5 = (int)(*(int *)(iVar5 + 8));
    }
    *(int *)(*param_1 + 8) = iVar4;
  }
  else {
    *piVar2 = (int)((int)piVar2);
    *(int *)(*param_1 + 8) = *param_1;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 103cf4f0; body size 220 bytes.
#line 1 "ENTRY_103cf4f0"

int * __thiscall Recovered_Bulk::FUN_103cf4f0(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 uVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154f79d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x18));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);
  local_8 = (undefined4)(0);
  uVar8 = (undefined4)(thunk_FUN_103cdcc0(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
  *(undefined4 *)(*param_1 + 4) = uVar8;
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = param_2[1];
  piVar3 = (int *)((int *)piVar2[1]);
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    cVar1 = (char)(*(char *)(*piVar3 + 0xd));
    piVar6 = (int *)((int *)*piVar3);
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*piVar6 + 0xd));
      piVar3 = (int *)(piVar6);
      piVar6 = (int *)((int *)*piVar6);
    }
    *piVar2 = (int)((int)piVar3);
    iVar4 = (int)(*(int *)(*param_1 + 4));
    iVar5 = (int)(*(int *)(iVar4 + 8));
    cVar1 = (char)(*(char *)(iVar5 + 0xd));
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
      iVar4 = (int)(iVar5);
      iVar5 = (int)(*(int *)(iVar5 + 8));
    }
    *(int *)(*param_1 + 8) = iVar4;
  }
  else {
    *piVar2 = (int)((int)piVar2);
    *(int *)(*param_1 + 8) = *param_1;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 103d0670; body size 92 bytes.
#line 1 "ENTRY_103d0670"

void __fastcall FUN_103d0670(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1154fc00);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (param_1[1] != 0) {
    thunk_FUN_10246720(*param_1,param_1[1] + 0x10,DAT_12126b84 ^ (uint)&stack0xfffffffc);
    if (param_1[1] != 0) {
      thunk_FUN_1148a50e(param_1[1],0x28);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103d12c0; body size 116 bytes.
#line 1 "ENTRY_103d12c0"

int * __fastcall FUN_103d12c0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)((int *)*param_1);
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    *param_1 = (int)(piVar2[2]);
    return (int *)(param_1);
  }
  iVar3 = (int)(*piVar2);
  if (*(char *)(iVar3 + 0xd) == '\0') {
    cVar1 = (char)(*(char *)(*(int *)(iVar3 + 8) + 0xd));
    iVar4 = (int)(*(int *)(iVar3 + 8));
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*(int *)(iVar4 + 8) + 0xd));
      iVar3 = (int)(iVar4);
      iVar4 = (int)(*(int *)(iVar4 + 8));
    }
    *param_1 = (int)(iVar3);
  }
  else {
    cVar1 = (char)(*(char *)(piVar2[1] + 0xd));
    piVar5 = (int *)((int *)piVar2[1]);
    while ((cVar1 == '\0' && (piVar2 == (int *)*piVar5))) {
      *param_1 = (int)((int)piVar5);
      cVar1 = (char)(*(char *)(piVar5[1] + 0xd));
      piVar2 = (int *)(piVar5);
      piVar5 = (int *)((int *)piVar5[1]);
    }
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      *param_1 = (int)((int)piVar5);
      return (int *)(param_1);
    }
  }
  return (int *)(param_1);
}


// Reference entry 103d1360; body size 116 bytes.
#line 1 "ENTRY_103d1360"

int * __fastcall FUN_103d1360(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)((int *)*param_1);
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    *param_1 = (int)(piVar2[2]);
    return (int *)(param_1);
  }
  iVar3 = (int)(*piVar2);
  if (*(char *)(iVar3 + 0xd) == '\0') {
    cVar1 = (char)(*(char *)(*(int *)(iVar3 + 8) + 0xd));
    iVar4 = (int)(*(int *)(iVar3 + 8));
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*(int *)(iVar4 + 8) + 0xd));
      iVar3 = (int)(iVar4);
      iVar4 = (int)(*(int *)(iVar4 + 8));
    }
    *param_1 = (int)(iVar3);
  }
  else {
    cVar1 = (char)(*(char *)(piVar2[1] + 0xd));
    piVar5 = (int *)((int *)piVar2[1]);
    while ((cVar1 == '\0' && (piVar2 == (int *)*piVar5))) {
      *param_1 = (int)((int)piVar5);
      cVar1 = (char)(*(char *)(piVar5[1] + 0xd));
      piVar2 = (int *)(piVar5);
      piVar5 = (int *)((int *)piVar5[1]);
    }
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      *param_1 = (int)((int)piVar5);
      return (int *)(param_1);
    }
  }
  return (int *)(param_1);
}


// Reference entry 103d21d0; body size 79 bytes.
#line 1 "ENTRY_103d21d0"

void __thiscall Recovered_Bulk::FUN_103d21d0(int param_2)
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


// Reference entry 103d2430; body size 83 bytes.
#line 1 "ENTRY_103d2430"

void __thiscall Recovered_Bulk::FUN_103d2430(int *param_2)
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


// Reference entry 103d4210; body size 131 bytes.
#line 1 "ENTRY_103d4210"

undefined4 * __thiscall Recovered_Bulk::FUN_103d4210(undefined4 *param_2)
{
  int param_1 = (int )this;
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115504ed);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  param_2[1] = 0;
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_2 = (undefined4)(pvVar1);
  local_8 = (undefined4)(0);
  thunk_FUN_103cd850(param_1 + 0x68,param_2);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 103d4880; body size 77 bytes.
#line 1 "ENTRY_103d4880"

void __fastcall FUN_103d4880(int param_1)

{
  int iVar1;
  SCLibrary *pSVar2;
  ulong uVar3;
  ulong uVar4;
  
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  uVar3 = (ulong)(((SCLibrary *)(pSVar2))->getCurrentThreadID());
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  uVar4 = (ulong)(((SCLibrary *)(pSVar2))->getMainThreadID());
  if (uVar3 != uVar4) {
    iVar1 = (int)(param_1 + 0x2c);
    thunk_FUN_112a7f50(iVar1);
    if (*(char *)(param_1 + 0x5c) != '\0') {
      thunk_FUN_112a7da0(param_1 + 0x34,iVar1);
    }
    thunk_FUN_112a8010(iVar1);
  }
  return;
}


// Reference entry 103d4e00; body size 68 bytes.
#line 1 "ENTRY_103d4e00"

undefined4 __thiscall Recovered_Bulk::FUN_103d4e00(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 4) + 4))(param_2));
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x10) = uVar2;
  }
  iVar1 = (int)(*(int *)(param_1 + 4));
  *(undefined1 *)(iVar1 + 0x5c) = 0;
  thunk_FUN_112a7f50(iVar1 + 0x2c);
  thunk_FUN_112a7c70(iVar1 + 0x34);
  thunk_FUN_112a8010(iVar1 + 0x2c);
  return (undefined4)(0);
}


// Reference entry 103d51f0; body size 150 bytes.
#line 1 "ENTRY_103d51f0"

int __thiscall Recovered_Bulk::FUN_103d51f0(int param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115508ad);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + 0x20));
  local_8 = (undefined4)(0);
  if (piVar1 != &param_2) {
    iVar2 = (int)(*piVar1);
    thunk_FUN_102460b0(piVar1,*(undefined4 *)(iVar2 + 4));
    *(int *)(iVar2 + 4) = iVar2;
    *(int *)iVar2 = (int)(iVar2);
    *(int *)(iVar2 + 8) = iVar2;
    *(undefined4 *)(param_1 + 0x24) = 0;
    thunk_FUN_103cd850(&param_2,param_3);
  }
  thunk_FUN_102460b0(&param_2,*(undefined4 *)(param_2 + 4));
  thunk_FUN_1148a50e(param_2,0x18,uVar3);
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 103d53c0; body size 110 bytes.
#line 1 "ENTRY_103d53c0"

undefined4 __thiscall Recovered_Bulk::FUN_103d53c0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155093e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  thunk_FUN_103cfae0(param_1,param_3,0xfffffffe);
  local_8 = (undefined4)(0);
  thunk_FUN_103d52b0(param_4);
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_2);
}


// Reference entry 103d5870; body size 110 bytes.
#line 1 "ENTRY_103d5870"

void __fastcall FUN_103d5870(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11550a80);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIArrayImpl);
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103d5970; body size 131 bytes.
#line 1 "ENTRY_103d5970"

undefined4 * __thiscall Recovered_Bulk::FUN_103d5970(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11550ab0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIArrayImpl);
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d5b30; body size 283 bytes.
#line 1 "ENTRY_103d5b30"

void __thiscall Recovered_Bulk::FUN_103d5b30(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11550b35);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (param_2 != (int *)0x0) {
    uVar6 = (uint)(0);
    local_14 = (uint)(0);
    local_1c = (int)(param_1);
    iVar3 = (int)((**(code **)(*param_2 + 0x14))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (iVar3 != 0) {
      do {
        piVar4 = (int *)((int *)(**(code **)(*param_2 + 0x18))(&local_18,uVar6));
        piVar1 = (int *)((int *)*piVar4);
        local_8 = (undefined4)(0);
        *piVar4 = (int)(0);
        local_24 = (int *)(piVar1);
        if (piVar1 == (int *)0x0) {
          piVar4 = (int *)((int *)0x0);
        }
        else {
          piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
        }
        iVar3 = (int)(*(int *)(param_1 + 8));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
        piVar2 = (int *)(*(int **)(iVar3 + 0xc));
        local_20 = (int *)(piVar4);
        if (piVar2 == *(int **)(iVar3 + 0x10)) {
          thunk_FUN_102a3810(piVar2,&local_24);
        }
        else {
          *piVar2 = (int)((int)piVar1);
          piVar2[1] = (int)piVar4;
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 4))();
          }
          *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 8;
        }
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        if (piVar4 != (int *)0x0) {
          local_24 = (int *)((int *)0x0);
          local_20 = (int *)((int *)0x0);
          (**(code **)(*piVar4 + 8))();
        }
        local_8 = (undefined4)(3);
        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 8))();
        }
        uVar6 = (uint)(local_14 + 1);
        local_8 = (undefined4)(0xffffffff);
        local_14 = (uint)(uVar6);
        uVar5 = (uint)((**(code **)(*param_2 + 0x14))());
        param_1 = (int)(local_1c);
      } while (uVar6 < uVar5);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103d5ca0; body size 136 bytes.
#line 1 "ENTRY_103d5ca0"

int * __thiscall Recovered_Bulk::FUN_103d5ca0(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11550b6d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 8) + 8));
  piVar2 = (int *)(*(int **)(iVar1 + 4 + param_3 * 8));
  piVar3 = (int *)(*(int **)(iVar1 + param_3 * 8));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  local_8 = (undefined4)(0);
  *param_2 = (int)((int)piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 103d6030; body size 84 bytes.
#line 1 "ENTRY_103d6030"

void __fastcall FUN_103d6030(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11550c20);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103d60a0; body size 107 bytes.
#line 1 "ENTRY_103d60a0"

void __fastcall FUN_103d60a0(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11550c50);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)param_1[2]);
  iVar3 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSource);
  if (piVar2 != (int *)0x0) {
    do {
      piVar2 = (int *)((int *)*piVar2);
      iVar3 = (int)(iVar3 + 1);
    } while (piVar2 != (int *)0x0);
    if (0 < iVar3) {
      thunk_FUN_112af4e0("SCEventSource",0,"%d listeners failed to unsubscribe from event source %p"
                         ,iVar3,param_1,uVar1);
    }
  }
  thunk_FUN_103d6860();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103d6140; body size 107 bytes.
#line 1 "ENTRY_103d6140"

int __thiscall Recovered_Bulk::FUN_103d6140(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11550c80);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 103d6740; body size 219 bytes.
#line 1 "ENTRY_103d6740"

undefined4 * __thiscall Recovered_Bulk::FUN_103d6740(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11550de4);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar3 = (void *)(operator_new(0x14));
  local_8 = (undefined4)(0);
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)thunk_FUN_103be5e0(uVar2));
  }
  local_8 = (undefined4)(0xffffffff);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = (undefined4)(1);
  if (piVar4 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
  }
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 8));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    thunk_FUN_103be9e0(puVar1[1],0xffffffff);
  }
  *param_2 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = (undefined4)(5);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 103d6860; body size 126 bytes.
#line 1 "ENTRY_103d6860"

void __fastcall FUN_103d6860(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = (void *)(ExceptionList);
  puStack_c = (undefined1 *)(LAB_11550e20);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    piVar3 = (int *)((int *)puVar1[2]);
    local_8 = (undefined4)(0);
    if (piVar3 != (int *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      (**(code **)(*piVar3 + 8))(uVar4);
    }
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_1148a50e(puVar1,0x10);
    puVar1 = (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103d6930; body size 176 bytes.
#line 1 "ENTRY_103d6930"

undefined4 __thiscall Recovered_Bulk::FUN_103d6930(int param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11550e50);
  local_10 = (void *)(ExceptionList);
  uVar5 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 8));
    puVar4 = (undefined4 *)((undefined4 *)0x0);
    while (puVar3 = puVar4, puVar4 = puVar1, puVar4 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)((undefined4 *)*puVar4);
      if (puVar4[1] == param_2) {
        ExceptionList = (void *)(&local_10);
        if (puVar3 == (undefined4 *)0x0) {
          *(undefined4 **)(param_1 + 8) = puVar1;
        }
        else {
          *puVar3 = (undefined4)(puVar1);
        }
        if (puVar4 == *(undefined4 **)(param_1 + 0xc)) {
          *(undefined4 *)(param_1 + 0xc) = **(undefined4 **)(param_1 + 0xc);
        }
        piVar2 = (int *)((int *)puVar4[2]);
        local_8 = (undefined4)(0);
        if (piVar2 != (int *)0x0) {
          puVar4[1] = 0;
          puVar4[2] = 0;
          (**(code **)(*piVar2 + 8))(uVar5);
        }
        thunk_FUN_1148a50e(puVar4,0x10);
        ExceptionList = (void *)(local_10);
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 103d6e00; body size 81 bytes.
#line 1 "ENTRY_103d6e00"

void __fastcall FUN_103d6e00(longlong *param_1)

{
  int local_8;
  int local_4;
  
  thunk_FUN_1145c930(&local_8,0);
  if ((char)param_1[2] == '\0') {
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = (longlong)((longlong)local_8 * 1000 + (longlong)(local_4 / 1000));
  }
  return;
}


// Reference entry 103d7050; body size 114 bytes.
#line 1 "ENTRY_103d7050"

undefined4 * __thiscall Recovered_Bulk::FUN_103d7050(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11550e8d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d70e0; body size 114 bytes.
#line 1 "ENTRY_103d70e0"

undefined4 * __thiscall Recovered_Bulk::FUN_103d70e0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11550ecd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d7170; body size 114 bytes.
#line 1 "ENTRY_103d7170"

undefined4 * __thiscall Recovered_Bulk::FUN_103d7170(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11550f0d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d7200; body size 114 bytes.
#line 1 "ENTRY_103d7200"

undefined4 * __thiscall Recovered_Bulk::FUN_103d7200(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11550f4d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d7290; body size 114 bytes.
#line 1 "ENTRY_103d7290"

undefined4 * __thiscall Recovered_Bulk::FUN_103d7290(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11550f8d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d7320; body size 114 bytes.
#line 1 "ENTRY_103d7320"

undefined4 * __thiscall Recovered_Bulk::FUN_103d7320(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11550fcd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d73b0; body size 114 bytes.
#line 1 "ENTRY_103d73b0"

undefined4 * __thiscall Recovered_Bulk::FUN_103d73b0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155100d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d7440; body size 114 bytes.
#line 1 "ENTRY_103d7440"

undefined4 * __thiscall Recovered_Bulk::FUN_103d7440(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155104d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d74d0; body size 114 bytes.
#line 1 "ENTRY_103d74d0"

undefined4 * __thiscall Recovered_Bulk::FUN_103d74d0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155108d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d7560; body size 114 bytes.
#line 1 "ENTRY_103d7560"

undefined4 * __thiscall Recovered_Bulk::FUN_103d7560(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115510cd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d75f0; body size 114 bytes.
#line 1 "ENTRY_103d75f0"

undefined4 * __thiscall Recovered_Bulk::FUN_103d75f0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155110d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d7680; body size 114 bytes.
#line 1 "ENTRY_103d7680"

undefined4 * __thiscall Recovered_Bulk::FUN_103d7680(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155114d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d7710; body size 114 bytes.
#line 1 "ENTRY_103d7710"

undefined4 * __thiscall Recovered_Bulk::FUN_103d7710(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155118d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d77a0; body size 114 bytes.
#line 1 "ENTRY_103d77a0"

undefined4 * __thiscall Recovered_Bulk::FUN_103d77a0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115511cd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d7830; body size 114 bytes.
#line 1 "ENTRY_103d7830"

undefined4 * __thiscall Recovered_Bulk::FUN_103d7830(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155120d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d78c0; body size 114 bytes.
#line 1 "ENTRY_103d78c0"

undefined4 * __thiscall Recovered_Bulk::FUN_103d78c0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155124d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d7950; body size 114 bytes.
#line 1 "ENTRY_103d7950"

undefined4 * __thiscall Recovered_Bulk::FUN_103d7950(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155128d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d7a10; body size 278 bytes.
#line 1 "ENTRY_103d7a10"

undefined4 * __thiscall Recovered_Bulk::FUN_103d7a10(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115512eb);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d7b70; body size 278 bytes.
#line 1 "ENTRY_103d7b70"

undefined4 * __thiscall Recovered_Bulk::FUN_103d7b70(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155134b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d7cd0; body size 278 bytes.
#line 1 "ENTRY_103d7cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_103d7cd0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115513ab);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d7e30; body size 278 bytes.
#line 1 "ENTRY_103d7e30"

undefined4 * __thiscall Recovered_Bulk::FUN_103d7e30(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155140b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d7f90; body size 278 bytes.
#line 1 "ENTRY_103d7f90"

undefined4 * __thiscall Recovered_Bulk::FUN_103d7f90(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155146b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d80f0; body size 278 bytes.
#line 1 "ENTRY_103d80f0"

undefined4 * __thiscall Recovered_Bulk::FUN_103d80f0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115514cb);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d8250; body size 278 bytes.
#line 1 "ENTRY_103d8250"

undefined4 * __thiscall Recovered_Bulk::FUN_103d8250(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155152b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d83b0; body size 278 bytes.
#line 1 "ENTRY_103d83b0"

undefined4 * __thiscall Recovered_Bulk::FUN_103d83b0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155158b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d8510; body size 278 bytes.
#line 1 "ENTRY_103d8510"

undefined4 * __thiscall Recovered_Bulk::FUN_103d8510(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115515eb);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d8670; body size 278 bytes.
#line 1 "ENTRY_103d8670"

undefined4 * __thiscall Recovered_Bulk::FUN_103d8670(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155164b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d87d0; body size 278 bytes.
#line 1 "ENTRY_103d87d0"

undefined4 * __thiscall Recovered_Bulk::FUN_103d87d0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115516ab);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d8930; body size 278 bytes.
#line 1 "ENTRY_103d8930"

undefined4 * __thiscall Recovered_Bulk::FUN_103d8930(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155170b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d8a90; body size 278 bytes.
#line 1 "ENTRY_103d8a90"

undefined4 * __thiscall Recovered_Bulk::FUN_103d8a90(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155176b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d8bf0; body size 278 bytes.
#line 1 "ENTRY_103d8bf0"

undefined4 * __thiscall Recovered_Bulk::FUN_103d8bf0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115517cb);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d8d50; body size 278 bytes.
#line 1 "ENTRY_103d8d50"

undefined4 * __thiscall Recovered_Bulk::FUN_103d8d50(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155182b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d8eb0; body size 278 bytes.
#line 1 "ENTRY_103d8eb0"

undefined4 * __thiscall Recovered_Bulk::FUN_103d8eb0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155188b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d9010; body size 278 bytes.
#line 1 "ENTRY_103d9010"

undefined4 * __thiscall Recovered_Bulk::FUN_103d9010(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115518eb);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d9640; body size 298 bytes.
#line 1 "ENTRY_103d9640"

undefined4 * __thiscall Recovered_Bulk::FUN_103d9640(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11551aa1);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_103d9b50(0);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegAccountTransferAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RSecRegAccountTransferAIOOp;
  param_1[7] = (uint)&ghidra_vftable_RSecRegAccountTransferAIOOp;
  thunk_FUN_1124a200("application/json",0);
  param_1[0x1892] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[0x1893] = 0;
  param_1[0x1894] = 0;
  param_1[0x1895] = 0;
  *(undefined2 *)(param_1 + 0x1896) = 1;
  *(undefined1 *)((int)param_1 + 0x625a) = 0;
  param_1[0x1897] = 0;
  param_1[0xf] = (uint)&ghidra_vftable_RSecRegAccountTransferRequest;
  param_1[0x1892] = (uint)&ghidra_vftable_RSecRegAccountTransferRequest;
  param_1[0x1999] = 0;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  thunk_FUN_103e9550(param_2,param_3,param_4);
  thunk_FUN_11261330(param_1 + 0x1898,0x401,"/account/v1/transfer",0,uVar1);
  param_1[0x199b] = 0;
  param_1[0x199c] = 0;
  param_1[0x199a] = (uint)&ghidra_vftable_RControlAIOOpRef;
  param_1[0x199d] = 0xfffffffe;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d97c0; body size 219 bytes.
#line 1 "ENTRY_103d97c0"

undefined4 * __thiscall Recovered_Bulk::FUN_103d97c0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11551b09);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_1124a200("application/json",0);
  param_1[0x1883] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[0x1884] = 0;
  param_1[0x1885] = 0;
  param_1[0x1886] = 0;
  *(undefined2 *)(param_1 + 0x1887) = 1;
  *(undefined1 *)((int)param_1 + 0x621e) = 0;
  param_1[0x1888] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegAccountTransferRequest);
  param_1[0x1883] = (uint)&ghidra_vftable_RSecRegAccountTransferRequest;
  param_1[0x198a] = 0;
  local_8 = (undefined4)(2);
  thunk_FUN_103e9550(param_2,param_3,param_4);
  thunk_FUN_11261330(param_1 + 0x1889,0x401,"/account/v1/transfer",0,uVar1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d98e0; body size 321 bytes.
#line 1 "ENTRY_103d98e0"

undefined4 * __thiscall Recovered_Bulk::FUN_103d98e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11551b66);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_11261e50(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegBeginSecureTransferAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RSecRegBeginSecureTransferAIOOp;
  thunk_FUN_1124a200("application/json",0);
  param_1[0x188a] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[0x188b] = 0;
  param_1[0x188c] = 0;
  param_1[0x188d] = 0;
  *(undefined2 *)(param_1 + 0x188e) = 1;
  *(undefined1 *)((int)param_1 + 0x623a) = 0;
  param_1[0x188f] = 0;
  param_1[7] = (uint)&ghidra_vftable_RSecRegBeginSecureTransferRequest;
  param_1[0x188a] = (uint)&ghidra_vftable_RSecRegBeginSecureTransferRequest;
  param_1[0x1890] = 0;
  param_1[0x1891] = 0;
  param_1[0x1892] = 0;
  param_1[0x1893] = 0;
  param_1[0x1894] = 0;
  param_1[0x1896] = 0;
  param_1[0x1897] = 0;
  param_1[0x1895] = (uint)&ghidra_vftable_RControlAIOOpRef;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  param_1[0x1898] = 0;
  param_1[0x1899] = 0xfffffffe;
  thunk_FUN_103ece00(param_2,param_3,param_4,param_5,param_6,param_7);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103d9f60; body size 226 bytes.
#line 1 "ENTRY_103d9f60"

undefined4 * __thiscall Recovered_Bulk::FUN_103d9f60(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11551d87);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_1124a200("application/json",0);
  param_1[0x1883] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[0x1884] = 0;
  param_1[0x1885] = 0;
  param_1[0x1886] = 0;
  *(undefined2 *)(param_1 + 0x1887) = 1;
  *(undefined1 *)((int)param_1 + 0x621e) = 0;
  param_1[0x1888] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegCreateIdentityRequest);
  param_1[0x1883] = (uint)&ghidra_vftable_RSecRegCreateIdentityRequest;
  param_1[0x1889] = 0;
  param_1[0x188a] = 0;
  local_8 = (undefined4)(3);
  thunk_FUN_103e9800(param_2,param_3);
  thunk_FUN_11261330(param_1 + 0x188b,0x401,"/account/v1/users",0,uVar1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103da330; body size 132 bytes.
#line 1 "ENTRY_103da330"

undefined4 * __fastcall FUN_103da330(undefined4 *param_1)

{
  thunk_FUN_1124a160(0);
  param_1[0x1843] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[0x1844] = 0;
  param_1[0x1845] = 0;
  param_1[0x1846] = 0;
  *(undefined2 *)(param_1 + 0x1847) = 1;
  *(undefined1 *)((int)param_1 + 0x611e) = 0;
  param_1[0x1848] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegGetRegistrationResult);
  param_1[0x1843] = (uint)&ghidra_vftable_RSecRegGetRegistrationResult;
  param_1[0x1849] = 0;
  param_1[0x184a] = 0;
  param_1[0x184b] = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 103da3e0; body size 199 bytes.
#line 1 "ENTRY_103da3e0"

undefined4 * __fastcall FUN_103da3e0(undefined4 *param_1)

{
  thunk_FUN_1124a160(0);
  param_1[0x1843] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[0x1844] = 0;
  param_1[0x1845] = 0;
  param_1[0x1846] = 0;
  *(undefined2 *)(param_1 + 0x1847) = 1;
  *(undefined1 *)((int)param_1 + 0x611e) = 0;
  param_1[0x1848] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegGetUserAccountRequest);
  param_1[0x1843] = (uint)&ghidra_vftable_RSecRegGetUserAccountRequest;
  param_1[0x1849] = 0;
  param_1[0x184a] = 0;
  param_1[0x184b] = 0;
  param_1[0x184c] = 0;
  param_1[0x184d] = 0;
  param_1[0x184e] = 0;
  param_1[0x184f] = 0;
  param_1[0x1850] = 0;
  param_1[0x1851] = 0;
  *(undefined1 *)(param_1 + 0x1852) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 103daa90; body size 216 bytes.
#line 1 "ENTRY_103daa90"

undefined4 * __thiscall Recovered_Bulk::FUN_103daa90(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11552079);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_1124a200("application/json",0);
  param_1[0x1883] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[0x1884] = 0;
  param_1[0x1885] = 0;
  param_1[0x1886] = 0;
  *(undefined2 *)(param_1 + 0x1887) = 1;
  *(undefined1 *)((int)param_1 + 0x621e) = 0;
  param_1[0x1888] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegPasswordSetRequest);
  param_1[0x1883] = (uint)&ghidra_vftable_RSecRegPasswordSetRequest;
  param_1[0x198a] = 0;
  local_8 = (undefined4)(2);
  thunk_FUN_103e9cb0(param_2,param_3);
  thunk_FUN_11261330(param_1 + 0x1889,0x401,"/account/v1/resetPassword",0,uVar1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103dbde0; body size 243 bytes.
#line 1 "ENTRY_103dbde0"

undefined4 * __fastcall FUN_103dbde0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11552581);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_1124a160(0);
  param_1[0x1843] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[0x1844] = 0;
  param_1[0x1845] = 0;
  param_1[0x1846] = 0;
  *(undefined2 *)(param_1 + 0x1847) = 1;
  *(undefined1 *)((int)param_1 + 0x611e) = 0;
  param_1[0x1848] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegUserGetRequest);
  param_1[0x1843] = (uint)&ghidra_vftable_RSecRegUserGetRequest;
  param_1[0x1849] = 0;
  param_1[0x184a] = 0;
  param_1[0x184b] = 0;
  *(undefined1 *)((int)param_1 + 0x6531) = 0;
  param_1[0x194d] = 0;
  param_1[0x194e] = 0;
  local_8 = (undefined4)(6);
  thunk_FUN_11261330(param_1 + 0x184c,0x401,"/account/v1/me",0,uVar1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103dd590; body size 341 bytes.
#line 1 "ENTRY_103dd590"

undefined4 * __thiscall Recovered_Bulk::FUN_103dd590(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11552d0d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar3 = (void *)(operator_new(0x12e50));
  local_8 = (undefined4)(0);
  if (pvVar3 == (void *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(thunk_FUN_103d9ca0(param_2,param_3,param_4));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);
  local_8 = (undefined4)(1);
  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  param_1[6] = iVar4;
  if (iVar4 != 0) {
    thunk_FUN_1123fce0(iVar4 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegCreateIdentity);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegCreateIdentity);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103dde60; body size 338 bytes.
#line 1 "ENTRY_103dde60"

undefined4 * __thiscall Recovered_Bulk::FUN_103dde60(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11552f8d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar3 = (void *)(operator_new(0x6678));
  local_8 = (undefined4)(0);
  if (pvVar3 == (void *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(thunk_FUN_103da840(param_2,param_3));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);
  local_8 = (undefined4)(1);
  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  param_1[6] = iVar4;
  if (iVar4 != 0) {
    thunk_FUN_1123fce0(iVar4 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegPasswordSet);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegPasswordSet);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103de320; body size 369 bytes.
#line 1 "ENTRY_103de320"

undefined4 * __thiscall Recovered_Bulk::FUN_103de320(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115530bd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar3 = (void *)(operator_new(0xc4c8));
  local_8 = (undefined4)(0);
  if (pvVar3 == (void *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(thunk_FUN_103daf00(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                               param_10,param_11,param_12,param_13));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);
  local_8 = (undefined4)(1);
  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  param_1[6] = iVar4;
  if (iVar4 != 0) {
    thunk_FUN_1123fce0(iVar4 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegRegisterPlayer);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegRegisterPlayer);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103de830; body size 341 bytes.
#line 1 "ENTRY_103de830"

undefined4 * __thiscall Recovered_Bulk::FUN_103de830(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115531fd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar3 = (void *)(operator_new(0x625c));
  local_8 = (undefined4)(0);
  if (pvVar3 == (void *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(thunk_FUN_103db630(param_2,param_3,param_4));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);
  local_8 = (undefined4)(1);
  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  param_1[6] = iVar4;
  if (iVar4 != 0) {
    thunk_FUN_1123fce0(iVar4 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegUpdateUser);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegUpdateUser);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103de9e0; body size 338 bytes.
#line 1 "ENTRY_103de9e0"

undefined4 * __thiscall Recovered_Bulk::FUN_103de9e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155326d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar3 = (void *)(operator_new(0x6584));
  local_8 = (undefined4)(0);
  if (pvVar3 == (void *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(thunk_FUN_103db9c0(param_2,param_3));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);
  local_8 = (undefined4)(1);
  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  param_1[6] = iVar4;
  if (iVar4 != 0) {
    thunk_FUN_1123fce0(iVar4 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegUserEmail);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegUserEmail);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103e0d50; body size 76 bytes.
#line 1 "ENTRY_103e0d50"

void __fastcall FUN_103e0d50(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11553890);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103e1250; body size 110 bytes.
#line 1 "ENTRY_103e1250"

void __fastcall FUN_103e1250(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11553950);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegAccountTransferAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RSecRegAccountTransferAIOOp;
  param_1[7] = (uint)&ghidra_vftable_RSecRegAccountTransferAIOOp;
  thunk_FUN_103e6760(uVar1);
  param_1[0x199a] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_103e12e0();
  thunk_FUN_103e15a0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103e13b0; body size 103 bytes.
#line 1 "ENTRY_103e13b0"

void __fastcall FUN_103e13b0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115539b0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegBeginSecureTransferAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RSecRegBeginSecureTransferAIOOp;
  thunk_FUN_103e67d0(uVar1);
  param_1[0x1895] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_103e1440();
  thunk_FUN_11261f10();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103e15a0; body size 139 bytes.
#line 1 "ENTRY_103e15a0"

void __fastcall FUN_103e15a0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11553a10);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegClientTokenAIOOPBase);
  param_1[2] = (uint)&ghidra_vftable_RSecRegClientTokenAIOOPBase;
  param_1[7] = (uint)&ghidra_vftable_RSecRegClientTokenAIOOPBase;
  thunk_FUN_103e6840(uVar2);
  param_1[0xc] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[7] = (uint)&ghidra_vftable_SCEventSinkDelegate;
  piVar1 = (int *)((int *)param_1[9]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_11261f10();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103e21d0; body size 167 bytes.
#line 1 "ENTRY_103e21d0"

void __fastcall FUN_103e21d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11553bf0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegPasswordSetAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RSecRegPasswordSetAIOOp;
  param_1[7] = (uint)&ghidra_vftable_RSecRegPasswordSetAIOOp;
  thunk_FUN_103e6b60(uVar2);
  param_1[0x1999] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[0x1996] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_103e22b0();
  param_1[7] = (uint)&ghidra_vftable_SCEventSinkDelegate;
  piVar1 = (int *)((int *)param_1[9]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_11261f10();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103e2810; body size 110 bytes.
#line 1 "ENTRY_103e2810"

void __fastcall FUN_103e2810(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11553d10);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegResetPasswordAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RSecRegResetPasswordAIOOp;
  param_1[7] = (uint)&ghidra_vftable_RSecRegResetPasswordAIOOp;
  thunk_FUN_103e6e90(uVar1);
  param_1[0x189a] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_103e28a0();
  thunk_FUN_103e15a0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103e29a0; body size 103 bytes.
#line 1 "ENTRY_103e29a0"

void __fastcall FUN_103e29a0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11553d70);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegUpdateUserAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RSecRegUpdateUserAIOOp;
  thunk_FUN_103e6f00(uVar1);
  param_1[0x1892] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_103e2a30();
  thunk_FUN_11261f10();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103e2e20; body size 110 bytes.
#line 1 "ENTRY_103e2e20"

void __fastcall FUN_103e2e20(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11553e30);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegValidateEmailAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RSecRegValidateEmailAIOOp;
  param_1[7] = (uint)&ghidra_vftable_RSecRegValidateEmailAIOOp;
  thunk_FUN_103e6f80(uVar1);
  param_1[0x185d] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_103e2eb0();
  thunk_FUN_103e15a0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103e31c0; body size 110 bytes.
#line 1 "ENTRY_103e31c0"

void __fastcall FUN_103e31c0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11553ef0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegVerifyEmailSubmitAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RSecRegVerifyEmailSubmitAIOOp;
  param_1[7] = (uint)&ghidra_vftable_RSecRegVerifyEmailSubmitAIOOp;
  thunk_FUN_103e70e0(uVar1);
  param_1[0x189a] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_103e3250();
  thunk_FUN_103e15a0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103e4480; body size 141 bytes.
#line 1 "ENTRY_103e4480"

undefined4 * __thiscall Recovered_Bulk::FUN_103e4480(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11553fe0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegAccountTransferAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RSecRegAccountTransferAIOOp;
  param_1[7] = (uint)&ghidra_vftable_RSecRegAccountTransferAIOOp;
  thunk_FUN_103e6760(uVar1);
  param_1[0x199a] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_103e12e0();
  thunk_FUN_103e15a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6678);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103e4570; body size 134 bytes.
#line 1 "ENTRY_103e4570"

undefined4 * __thiscall Recovered_Bulk::FUN_103e4570(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11554010);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegBeginSecureTransferAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RSecRegBeginSecureTransferAIOOp;
  thunk_FUN_103e67d0(uVar1);
  param_1[0x1895] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_103e1440();
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6268);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103e4df0; body size 195 bytes.
#line 1 "ENTRY_103e4df0"

undefined4 * __thiscall Recovered_Bulk::FUN_103e4df0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11554130);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegPasswordSetAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RSecRegPasswordSetAIOOp;
  param_1[7] = (uint)&ghidra_vftable_RSecRegPasswordSetAIOOp;
  thunk_FUN_103e6b60(uVar2);
  param_1[0x1999] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[0x1996] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_103e22b0();
  param_1[7] = (uint)&ghidra_vftable_SCEventSinkDelegate;
  piVar1 = (int *)((int *)param_1[9]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6678);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103e5190; body size 141 bytes.
#line 1 "ENTRY_103e5190"

undefined4 * __thiscall Recovered_Bulk::FUN_103e5190(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115541c0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegResetPasswordAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RSecRegResetPasswordAIOOp;
  param_1[7] = (uint)&ghidra_vftable_RSecRegResetPasswordAIOOp;
  thunk_FUN_103e6e90(uVar1);
  param_1[0x189a] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_103e28a0();
  thunk_FUN_103e15a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6278);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103e5280; body size 134 bytes.
#line 1 "ENTRY_103e5280"

undefined4 * __thiscall Recovered_Bulk::FUN_103e5280(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115541f0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegUpdateUserAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RSecRegUpdateUserAIOOp;
  thunk_FUN_103e6f00(uVar1);
  param_1[0x1892] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_103e2a30();
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x625c);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103e5360; body size 82 bytes.
#line 1 "ENTRY_103e5360"

undefined4 * __thiscall Recovered_Bulk::FUN_103e5360(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegUserEmailAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RSecRegUserEmailAIOOp;
  param_1[7] = (uint)&ghidra_vftable_RSecRegUserEmailAIOOp;
  param_1[0x195d] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_103e2b80();
  thunk_FUN_103e15a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6584);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e5430; body size 141 bytes.
#line 1 "ENTRY_103e5430"

undefined4 * __thiscall Recovered_Bulk::FUN_103e5430(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11554220);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegValidateEmailAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RSecRegValidateEmailAIOOp;
  param_1[7] = (uint)&ghidra_vftable_RSecRegValidateEmailAIOOp;
  thunk_FUN_103e6f80(uVar1);
  param_1[0x185d] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_103e2eb0();
  thunk_FUN_103e15a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6188);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103e5640; body size 141 bytes.
#line 1 "ENTRY_103e5640"

undefined4 * __thiscall Recovered_Bulk::FUN_103e5640(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11554280);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegVerifyEmailSubmitAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RSecRegVerifyEmailSubmitAIOOp;
  param_1[7] = (uint)&ghidra_vftable_RSecRegVerifyEmailSubmitAIOOp;
  thunk_FUN_103e70e0(uVar1);
  param_1[0x189a] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_103e3250();
  thunk_FUN_103e15a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6278);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103e5fc0; body size 76 bytes.
#line 1 "ENTRY_103e5fc0"

void __fastcall FUN_103e5fc0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103e6020; body size 76 bytes.
#line 1 "ENTRY_103e6020"

void __fastcall FUN_103e6020(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103e6080; body size 76 bytes.
#line 1 "ENTRY_103e6080"

void __fastcall FUN_103e6080(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103e60e0; body size 76 bytes.
#line 1 "ENTRY_103e60e0"

void __fastcall FUN_103e60e0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103e6140; body size 76 bytes.
#line 1 "ENTRY_103e6140"

void __fastcall FUN_103e6140(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103e61a0; body size 76 bytes.
#line 1 "ENTRY_103e61a0"

void __fastcall FUN_103e61a0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103e6200; body size 76 bytes.
#line 1 "ENTRY_103e6200"

void __fastcall FUN_103e6200(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103e6260; body size 76 bytes.
#line 1 "ENTRY_103e6260"

void __fastcall FUN_103e6260(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103e62c0; body size 76 bytes.
#line 1 "ENTRY_103e62c0"

void __fastcall FUN_103e62c0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103e6320; body size 76 bytes.
#line 1 "ENTRY_103e6320"

void __fastcall FUN_103e6320(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103e6380; body size 76 bytes.
#line 1 "ENTRY_103e6380"

void __fastcall FUN_103e6380(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103e63e0; body size 76 bytes.
#line 1 "ENTRY_103e63e0"

void __fastcall FUN_103e63e0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103e6440; body size 76 bytes.
#line 1 "ENTRY_103e6440"

void __fastcall FUN_103e6440(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103e64a0; body size 76 bytes.
#line 1 "ENTRY_103e64a0"

void __fastcall FUN_103e64a0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103e6500; body size 76 bytes.
#line 1 "ENTRY_103e6500"

void __fastcall FUN_103e6500(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103e6560; body size 76 bytes.
#line 1 "ENTRY_103e6560"

void __fastcall FUN_103e6560(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103e65c0; body size 76 bytes.
#line 1 "ENTRY_103e65c0"

void __fastcall FUN_103e65c0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103e6620; body size 85 bytes.
#line 1 "ENTRY_103e6620"

void __fastcall FUN_103e6620(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6160) != 0) && (*(int **)(param_1 + 0x615c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x615c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x615c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x615c) = 0;
    *(undefined4 *)(param_1 + 0x6160) = 0;
  }
  return;
}


// Reference entry 103e6690; body size 163 bytes.
#line 1 "ENTRY_103e6690"

void __fastcall FUN_103e6690(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x12ce8) != 0) && (*(int **)(param_1 + 0x12ce4) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x12ce4) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x12ce4));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x12ce4) = 0;
    *(undefined4 *)(param_1 + 0x12ce8) = 0;
  }
  if ((*(int *)(param_1 + 0x12cf4) != 0) && (*(int **)(param_1 + 0x12cf0) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x12cf0) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x12cf0));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x12cf0) = 0;
    *(undefined4 *)(param_1 + 0x12cf4) = 0;
  }
  return;
}


// Reference entry 103e6760; body size 85 bytes.
#line 1 "ENTRY_103e6760"

void __fastcall FUN_103e6760(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6670) != 0) && (*(int **)(param_1 + 0x666c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x666c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x666c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x666c) = 0;
    *(undefined4 *)(param_1 + 0x6670) = 0;
  }
  return;
}


// Reference entry 103e67d0; body size 85 bytes.
#line 1 "ENTRY_103e67d0"

void __fastcall FUN_103e67d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x625c) != 0) && (*(int **)(param_1 + 0x6258) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x6258) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x6258));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x6258) = 0;
    *(undefined4 *)(param_1 + 0x625c) = 0;
  }
  return;
}


// Reference entry 103e6840; body size 198 bytes.
#line 1 "ENTRY_103e6840"

void __fastcall FUN_103e6840(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115545ed);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if ((*(int *)(param_1 + 0x38) != 0) && (*(int **)(param_1 + 0x34) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x10))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x34));
    if (puVar1 != (undefined4 *)0x0) {
      iVar3 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  thunk_FUN_101da860(&local_18);
  local_8 = (undefined4)(0);
  if ((local_18 != 0) && (*(int **)(local_18 + 0x100) != (int *)0x0)) {
    (**(code **)(**(int **)(local_18 + 0x100) + 0x18))(*(undefined4 *)(param_1 + 0x20));
  }
  piVar2 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int)(0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103e6940; body size 163 bytes.
#line 1 "ENTRY_103e6940"

void __fastcall FUN_103e6940(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6674) != 0) && (*(int **)(param_1 + 0x6670) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x6670) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x6670));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x6670) = 0;
    *(undefined4 *)(param_1 + 0x6674) = 0;
  }
  if ((*(int *)(param_1 + 0xccc0) != 0) && (*(int **)(param_1 + 0xccbc) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0xccbc) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xccbc));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0xccbc) = 0;
    *(undefined4 *)(param_1 + 0xccc0) = 0;
  }
  return;
}


// Reference entry 103e6a10; body size 85 bytes.
#line 1 "ENTRY_103e6a10"

void __fastcall FUN_103e6a10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6190) != 0) && (*(int **)(param_1 + 0x618c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x618c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x618c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x618c) = 0;
    *(undefined4 *)(param_1 + 0x6190) = 0;
  }
  return;
}


// Reference entry 103e6a80; body size 90 bytes.
#line 1 "ENTRY_103e6a80"

void __fastcall FUN_103e6a80(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (*(int **)(param_1 + 0x24) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x24));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 103e6af0; body size 85 bytes.
#line 1 "ENTRY_103e6af0"

void __fastcall FUN_103e6af0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6170) != 0) && (*(int **)(param_1 + 0x616c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x616c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x616c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x616c) = 0;
    *(undefined4 *)(param_1 + 0x6170) = 0;
  }
  return;
}


// Reference entry 103e6b60; body size 286 bytes.
#line 1 "ENTRY_103e6b60"

void __fastcall FUN_103e6b60(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155462d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if ((*(int *)(param_1 + 0x6660) != 0) && (*(int **)(param_1 + 0x665c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x665c) + 0x10))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x665c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x665c) = 0;
    *(undefined4 *)(param_1 + 0x6660) = 0;
  }
  if ((*(int *)(param_1 + 0x666c) != 0) && (*(int **)(param_1 + 0x6668) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x6668) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x6668));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x6668) = 0;
    *(undefined4 *)(param_1 + 0x666c) = 0;
  }
  piVar3 = (int *)((int *)thunk_FUN_101da860(&local_18));
  local_8 = (undefined4)(0);
  if (*(int **)(*piVar3 + 0x100) != (int *)0x0) {
    (**(code **)(**(int **)(*piVar3 + 0x100) + 0x18))(*(undefined4 *)(param_1 + 0x20));
  }
  piVar3 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (undefined4)(0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103e6cd0; body size 85 bytes.
#line 1 "ENTRY_103e6cd0"

void __fastcall FUN_103e6cd0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6264) != 0) && (*(int **)(param_1 + 0x6260) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x6260) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x6260));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x6260) = 0;
    *(undefined4 *)(param_1 + 0x6264) = 0;
  }
  return;
}


// Reference entry 103e6d40; body size 267 bytes.
#line 1 "ENTRY_103e6d40"

void __fastcall FUN_103e6d40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xc4a0) != 0) && (*(int **)(param_1 + 0xc49c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0xc49c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc49c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0xc49c) = 0;
    *(undefined4 *)(param_1 + 0xc4a0) = 0;
  }
  if ((*(int *)(param_1 + 0xc4ac) != 0) && (*(int **)(param_1 + 0xc4a8) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0xc4a8) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc4a8));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0xc4a8) = 0;
    *(undefined4 *)(param_1 + 0xc4ac) = 0;
  }
  if ((*(int *)(param_1 + 0xc4b8) != 0) && (*(int **)(param_1 + 0xc4b4) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0xc4b4) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc4b4));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0xc4b4) = 0;
    *(undefined4 *)(param_1 + 0xc4b8) = 0;
  }
  if (*(undefined4 **)(param_1 + 0xc494) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xc494))(1);
    *(undefined4 *)(param_1 + 0xc494) = 0;
  }
  return;
}


// Reference entry 103e6e90; body size 85 bytes.
#line 1 "ENTRY_103e6e90"

void __fastcall FUN_103e6e90(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6270) != 0) && (*(int **)(param_1 + 0x626c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x626c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x626c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x626c) = 0;
    *(undefined4 *)(param_1 + 0x6270) = 0;
  }
  return;
}


// Reference entry 103e6f00; body size 85 bytes.
#line 1 "ENTRY_103e6f00"

void __fastcall FUN_103e6f00(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6250) != 0) && (*(int **)(param_1 + 0x624c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x624c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x624c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x624c) = 0;
    *(undefined4 *)(param_1 + 0x6250) = 0;
  }
  return;
}


// Reference entry 103e6f80; body size 85 bytes.
#line 1 "ENTRY_103e6f80"

void __fastcall FUN_103e6f80(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x617c) != 0) && (*(int **)(param_1 + 0x6178) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x6178) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x6178));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x6178) = 0;
    *(undefined4 *)(param_1 + 0x617c) = 0;
  }
  return;
}


// Reference entry 103e6ff0; body size 189 bytes.
#line 1 "ENTRY_103e6ff0"

void __fastcall FUN_103e6ff0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6270) != 0) && (*(int **)(param_1 + 0x626c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x626c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x626c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x626c) = 0;
    *(undefined4 *)(param_1 + 0x6270) = 0;
  }
  if ((*(int *)(param_1 + 0x6280) != 0) && (*(int **)(param_1 + 0x627c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x627c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x627c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x627c) = 0;
    *(undefined4 *)(param_1 + 0x6280) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x6274) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x6274))(1);
    *(undefined4 *)(param_1 + 0x6274) = 0;
  }
  return;
}


// Reference entry 103e70e0; body size 85 bytes.
#line 1 "ENTRY_103e70e0"

void __fastcall FUN_103e70e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6270) != 0) && (*(int **)(param_1 + 0x626c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x626c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x626c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x626c) = 0;
    *(undefined4 *)(param_1 + 0x6270) = 0;
  }
  return;
}


// Reference entry 103e7150; body size 149 bytes.
#line 1 "ENTRY_103e7150"

void __thiscall Recovered_Bulk::FUN_103e7150(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7230; body size 149 bytes.
#line 1 "ENTRY_103e7230"

void __thiscall Recovered_Bulk::FUN_103e7230(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7310; body size 149 bytes.
#line 1 "ENTRY_103e7310"

void __thiscall Recovered_Bulk::FUN_103e7310(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e73f0; body size 149 bytes.
#line 1 "ENTRY_103e73f0"

void __thiscall Recovered_Bulk::FUN_103e73f0(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e74d0; body size 149 bytes.
#line 1 "ENTRY_103e74d0"

void __thiscall Recovered_Bulk::FUN_103e74d0(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e75b0; body size 149 bytes.
#line 1 "ENTRY_103e75b0"

void __thiscall Recovered_Bulk::FUN_103e75b0(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7690; body size 149 bytes.
#line 1 "ENTRY_103e7690"

void __thiscall Recovered_Bulk::FUN_103e7690(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7770; body size 149 bytes.
#line 1 "ENTRY_103e7770"

void __thiscall Recovered_Bulk::FUN_103e7770(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7850; body size 149 bytes.
#line 1 "ENTRY_103e7850"

void __thiscall Recovered_Bulk::FUN_103e7850(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7930; body size 149 bytes.
#line 1 "ENTRY_103e7930"

void __thiscall Recovered_Bulk::FUN_103e7930(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7a10; body size 149 bytes.
#line 1 "ENTRY_103e7a10"

void __thiscall Recovered_Bulk::FUN_103e7a10(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7af0; body size 149 bytes.
#line 1 "ENTRY_103e7af0"

void __thiscall Recovered_Bulk::FUN_103e7af0(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7bd0; body size 149 bytes.
#line 1 "ENTRY_103e7bd0"

void __thiscall Recovered_Bulk::FUN_103e7bd0(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7cb0; body size 149 bytes.
#line 1 "ENTRY_103e7cb0"

void __thiscall Recovered_Bulk::FUN_103e7cb0(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7d90; body size 149 bytes.
#line 1 "ENTRY_103e7d90"

void __thiscall Recovered_Bulk::FUN_103e7d90(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7e70; body size 149 bytes.
#line 1 "ENTRY_103e7e70"

void __thiscall Recovered_Bulk::FUN_103e7e70(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7f50; body size 149 bytes.
#line 1 "ENTRY_103e7f50"

void __thiscall Recovered_Bulk::FUN_103e7f50(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e8170; body size 154 bytes.
#line 1 "ENTRY_103e8170"

void __thiscall Recovered_Bulk::FUN_103e8170(int param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155466d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if ((param_2 != 0) && (param_2 != *(int *)(param_1 + 0x28))) {
    piVar1 = (int *)(*(int **)(param_1 + 0x2c));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    *(int *)(param_1 + 0x28) = param_2;
    *(int **)(param_1 + 0x2c) = param_3;
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
  }
  local_8 = (undefined4)(1);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103ee850; body size 66 bytes.
#line 1 "ENTRY_103ee850"

undefined4 __thiscall Recovered_Bulk::FUN_103ee850(int param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((int *)param_1[0xd] != (int *)0x0) {
    cVar1 = (char)((**(code **)(*(int *)param_1[0xd] + 0xc))());
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(*(int *)param_1[0xd] + 8))());
      goto LAB_103ee872;
    }
  }
  iVar2 = (int)(param_1[0xe]);
LAB_103ee872:
  if (iVar2 == param_2) {
    return (undefined4)(1);
  }
  uVar3 = (undefined4)((**(code **)(*param_1 + 0x2c))(param_2,param_3));
  return (undefined4)(uVar3);
}


// Reference entry 103f00a0; body size 128 bytes.
#line 1 "ENTRY_103f00a0"

void __fastcall FUN_103f00a0(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155569d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f0140; body size 128 bytes.
#line 1 "ENTRY_103f0140"

void __fastcall FUN_103f0140(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115556dd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f01e0; body size 128 bytes.
#line 1 "ENTRY_103f01e0"

void __fastcall FUN_103f01e0(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155571d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f0280; body size 128 bytes.
#line 1 "ENTRY_103f0280"

void __fastcall FUN_103f0280(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155575d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f0320; body size 128 bytes.
#line 1 "ENTRY_103f0320"

void __fastcall FUN_103f0320(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155579d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f03c0; body size 128 bytes.
#line 1 "ENTRY_103f03c0"

void __fastcall FUN_103f03c0(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115557dd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f0460; body size 128 bytes.
#line 1 "ENTRY_103f0460"

void __fastcall FUN_103f0460(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155581d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f0500; body size 128 bytes.
#line 1 "ENTRY_103f0500"

void __fastcall FUN_103f0500(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155585d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f05a0; body size 128 bytes.
#line 1 "ENTRY_103f05a0"

void __fastcall FUN_103f05a0(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155589d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f0640; body size 128 bytes.
#line 1 "ENTRY_103f0640"

void __fastcall FUN_103f0640(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115558dd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f06e0; body size 128 bytes.
#line 1 "ENTRY_103f06e0"

void __fastcall FUN_103f06e0(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155591d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f0780; body size 128 bytes.
#line 1 "ENTRY_103f0780"

void __fastcall FUN_103f0780(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155595d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f0820; body size 128 bytes.
#line 1 "ENTRY_103f0820"

void __fastcall FUN_103f0820(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155599d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f08c0; body size 128 bytes.
#line 1 "ENTRY_103f08c0"

void __fastcall FUN_103f08c0(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115559dd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f0960; body size 128 bytes.
#line 1 "ENTRY_103f0960"

void __fastcall FUN_103f0960(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555a1d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f0a00; body size 128 bytes.
#line 1 "ENTRY_103f0a00"

void __fastcall FUN_103f0a00(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555a5d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f0aa0; body size 128 bytes.
#line 1 "ENTRY_103f0aa0"

void __fastcall FUN_103f0aa0(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555a9d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f0b40; body size 232 bytes.
#line 1 "ENTRY_103f0b40"

void __thiscall Recovered_Bulk::FUN_103f0b40(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555add);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f0c70; body size 232 bytes.
#line 1 "ENTRY_103f0c70"

void __thiscall Recovered_Bulk::FUN_103f0c70(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555b1d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f0da0; body size 232 bytes.
#line 1 "ENTRY_103f0da0"

void __thiscall Recovered_Bulk::FUN_103f0da0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555b5d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f0ed0; body size 232 bytes.
#line 1 "ENTRY_103f0ed0"

void __thiscall Recovered_Bulk::FUN_103f0ed0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555b9d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f1000; body size 232 bytes.
#line 1 "ENTRY_103f1000"

void __thiscall Recovered_Bulk::FUN_103f1000(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555bdd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f1130; body size 232 bytes.
#line 1 "ENTRY_103f1130"

void __thiscall Recovered_Bulk::FUN_103f1130(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555c1d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f1260; body size 232 bytes.
#line 1 "ENTRY_103f1260"

void __thiscall Recovered_Bulk::FUN_103f1260(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555c5d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f1390; body size 232 bytes.
#line 1 "ENTRY_103f1390"

void __thiscall Recovered_Bulk::FUN_103f1390(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555c9d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f14c0; body size 232 bytes.
#line 1 "ENTRY_103f14c0"

void __thiscall Recovered_Bulk::FUN_103f14c0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555cdd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f15f0; body size 232 bytes.
#line 1 "ENTRY_103f15f0"

void __thiscall Recovered_Bulk::FUN_103f15f0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555d1d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f1720; body size 232 bytes.
#line 1 "ENTRY_103f1720"

void __thiscall Recovered_Bulk::FUN_103f1720(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555d5d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f1850; body size 232 bytes.
#line 1 "ENTRY_103f1850"

void __thiscall Recovered_Bulk::FUN_103f1850(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555d9d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f1980; body size 232 bytes.
#line 1 "ENTRY_103f1980"

void __thiscall Recovered_Bulk::FUN_103f1980(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555ddd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f1ab0; body size 232 bytes.
#line 1 "ENTRY_103f1ab0"

void __thiscall Recovered_Bulk::FUN_103f1ab0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555e1d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f1be0; body size 232 bytes.
#line 1 "ENTRY_103f1be0"

void __thiscall Recovered_Bulk::FUN_103f1be0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555e5d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f1d10; body size 232 bytes.
#line 1 "ENTRY_103f1d10"

void __thiscall Recovered_Bulk::FUN_103f1d10(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555e9d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f1e40; body size 232 bytes.
#line 1 "ENTRY_103f1e40"

void __thiscall Recovered_Bulk::FUN_103f1e40(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11555edd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x38))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f4ff0; body size 184 bytes.
#line 1 "ENTRY_103f4ff0"

void __thiscall Recovered_Bulk::FUN_103f4ff0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11556877);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x12d04) = param_2;
  puVar1 = (undefined4 *)(operator_new(0x4490));
  local_8 = (undefined4)(0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    thunk_FUN_111c05a0(-(uint)(param_1 + 0x1c != 0) & param_1 + 0x6228U,param_1 + 0x1c,
                       param_1 + 0x6250,10000,10000,0,0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
    puVar1[0x18] = (uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp;
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_102207b0(puVar1,param_1 + 8,0);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f50e0; body size 196 bytes.
#line 1 "ENTRY_103f50e0"

void __thiscall Recovered_Bulk::FUN_103f50e0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115568c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x6260) = param_2;
  puVar1 = (undefined4 *)(operator_new(0x4490));
  local_8 = (undefined4)(0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x6248) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6248));
    }
    thunk_FUN_111c05a0(-(uint)(param_1 + 0x1c != 0) & param_1 + 0x6228U,param_1 + 0x1c,puVar2,20000,
                       20000,0,0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
    puVar1[0x18] = (uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp;
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_102207b0(puVar1,param_1 + 8,0);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f5770; body size 303 bytes.
#line 1 "ENTRY_103f5770"

void __thiscall Recovered_Bulk::FUN_103f5770(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11556a57);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x6268) = param_2;
  puVar2 = (undefined4 *)(operator_new(0x4490));
  local_8 = (undefined4)(0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x6254) != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6254));
    }
    thunk_FUN_111c05a0(-(uint)(param_1 + 0x28 != 0) & param_1 + 0x6234U,param_1 + 0x28,puVar5,10000,
                       10000,0,0);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
    puVar2[0x18] = (uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp;
  }
  piVar6 = (int *)(*(int **)(param_1 + 0x6260));
  local_8 = (undefined4)(0xffffffff);
  if (piVar6 != (int *)0x0) {
    if (*(int *)(param_1 + 0x6264) != 0) {
      (**(code **)(*piVar6 + 0x10))(uVar1);
      piVar6 = (int *)(*(int **)(param_1 + 0x6260));
    }
    if (piVar6 != (int *)0x0) {
      iVar3 = (int)(thunk_FUN_1123fcd0(piVar6 + 1));
      if (iVar3 == 0) {
        (**(code **)*piVar6)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x6264) = 0;
  }
  *(undefined4 **)(param_1 + 0x6260) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    thunk_FUN_1123fce0(puVar2 + 1);
    if (*(int **)(param_1 + 0x6260) != (int *)0x0) {
      uVar4 = (undefined4)((**(code **)(**(int **)(param_1 + 0x6260) + 4))
                        (param_1 + 8,*(undefined4 *)(param_1 + 0x6268)));
      *(undefined4 *)(param_1 + 0x6264) = uVar4;
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f58f0; body size 206 bytes.
#line 1 "ENTRY_103f58f0"

void __thiscall Recovered_Bulk::FUN_103f58f0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11556aa7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0xc4bc) = param_2;
  *(undefined4 *)(param_1 + 0xc4c4) = 0;
  puVar1 = (undefined4 *)(operator_new(0x4490));
  local_8 = (undefined4)(0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x6254) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6254));
    }
    thunk_FUN_111c05a0(-(uint)(param_1 + 0x1c != 0) & param_1 + 0x6228U,param_1 + 0x1c,puVar2,20000,
                       20000,0,0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
    puVar1[0x18] = (uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp;
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_102207b0(puVar1,param_1 + 8,0);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f5a00; body size 196 bytes.
#line 1 "ENTRY_103f5a00"

void __thiscall Recovered_Bulk::FUN_103f5a00(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11556af7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x6254) = param_2;
  puVar1 = (undefined4 *)(operator_new(0x4490));
  local_8 = (undefined4)(0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x6244) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6244));
    }
    thunk_FUN_111c05a0(-(uint)(param_1 + 0x1c != 0) & param_1 + 0x6228U,param_1 + 0x1c,puVar2,10000,
                       10000,0,0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
    puVar1[0x18] = (uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp;
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_102207b0(puVar1,param_1 + 8,0);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103f5dc0; body size 107 bytes.
#line 1 "ENTRY_103f5dc0"

undefined4 * __thiscall Recovered_Bulk::FUN_103f5dc0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11556bbd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103f5ee0; body size 220 bytes.
#line 1 "ENTRY_103f5ee0"

int * __thiscall Recovered_Bulk::FUN_103f5ee0(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 uVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11556bfd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x18));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);
  local_8 = (undefined4)(0);
  uVar8 = (undefined4)(thunk_FUN_103f6500(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
  *(undefined4 *)(*param_1 + 4) = uVar8;
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = param_2[1];
  piVar3 = (int *)((int *)piVar2[1]);
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    cVar1 = (char)(*(char *)(*piVar3 + 0xd));
    piVar6 = (int *)((int *)*piVar3);
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*piVar6 + 0xd));
      piVar3 = (int *)(piVar6);
      piVar6 = (int *)((int *)*piVar6);
    }
    *piVar2 = (int)((int)piVar3);
    iVar4 = (int)(*(int *)(*param_1 + 4));
    iVar5 = (int)(*(int *)(iVar4 + 8));
    cVar1 = (char)(*(char *)(iVar5 + 0xd));
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
      iVar4 = (int)(iVar5);
      iVar5 = (int)(*(int *)(iVar5 + 8));
    }
    *(int *)(*param_1 + 8) = iVar4;
  }
  else {
    *piVar2 = (int)((int)piVar2);
    *(int *)(*param_1 + 8) = *param_1;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 103f6e10; body size 73 bytes.
#line 1 "ENTRY_103f6e10"

int * __thiscall Recovered_Bulk::FUN_103f6e10(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = (int)(*param_1);
  puVar3 = (undefined4 *)(*(undefined4 **)(iVar1 + 4));
  *param_2 = (int)((int)puVar3);
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    iVar1 = (int)(*param_3);
    do {
      *param_2 = (int)((int)puVar3);
      iVar2 = (int)(puVar3[4]);
      if (iVar1 <= iVar2) {
        param_2[2] = (int)puVar3;
        puVar3 = (undefined4 *)((undefined4 *)*puVar3);
      }
      else {
        puVar3 = (undefined4 *)((undefined4 *)puVar3[2]);
      }
      param_2[1] = (uint)(iVar1 <= iVar2);
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  return (int *)(param_2);
}


// Reference entry 103f6fe0; body size 121 bytes.
#line 1 "ENTRY_103f6fe0"

undefined4 * FUN_103f6fe0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11556eb5);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;
  local_8 = (undefined4)(1);
  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(puVar2);
}


// Reference entry 103f7710; body size 130 bytes.
#line 1 "ENTRY_103f7710"

int __thiscall Recovered_Bulk::FUN_103f7710(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  param_2[1] = 0;
  (**(code **)(*param_1 + 4))();
  piVar2 = (int *)((int *)param_1[2]);
  if (piVar2 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  param_1[1] = (int)piVar1;
  if (piVar1 == (int *)0x0) {
    param_1[2] = 0;
  }
  else {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[2] = iVar3;
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 0x14))(param_3);
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 103f8420; body size 70 bytes.
#line 1 "ENTRY_103f8420"

undefined4 * __thiscall Recovered_Bulk::FUN_103f8420(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar2 = (void *)(operator_new(0x18));
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
  return (undefined4 *)(param_1);
}


// Reference entry 103f8710; body size 93 bytes.
#line 1 "ENTRY_103f8710"

int __thiscall Recovered_Bulk::FUN_103f8710(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155711d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 103f8790; body size 87 bytes.
#line 1 "ENTRY_103f8790"

int __thiscall Recovered_Bulk::FUN_103f8790(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)((int *)param_2[9]);
  if (piVar1 != (int *)0x0) {
    if (piVar1 == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1));
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)((int *)param_2[9]);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_2));
        param_2[9] = 0;
        return (int)(param_1);
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return (int)(param_1);
}


// Reference entry 103f8800; body size 93 bytes.
#line 1 "ENTRY_103f8800"

int __thiscall Recovered_Bulk::FUN_103f8800(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155715d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 103f8890; body size 93 bytes.
#line 1 "ENTRY_103f8890"

int __thiscall Recovered_Bulk::FUN_103f8890(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155719d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 103f8920; body size 93 bytes.
#line 1 "ENTRY_103f8920"

int __thiscall Recovered_Bulk::FUN_103f8920(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115571dd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 103f89b0; body size 93 bytes.
#line 1 "ENTRY_103f89b0"

int __thiscall Recovered_Bulk::FUN_103f89b0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155721d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 103f8a40; body size 93 bytes.
#line 1 "ENTRY_103f8a40"

int __thiscall Recovered_Bulk::FUN_103f8a40(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155725d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 103f8b40; body size 220 bytes.
#line 1 "ENTRY_103f8b40"

int * __thiscall Recovered_Bulk::FUN_103f8b40(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 uVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155729d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x18));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);
  local_8 = (undefined4)(0);
  uVar8 = (undefined4)(thunk_FUN_103f6500(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
  *(undefined4 *)(*param_1 + 4) = uVar8;
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = param_2[1];
  piVar3 = (int *)((int *)piVar2[1]);
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    cVar1 = (char)(*(char *)(*piVar3 + 0xd));
    piVar6 = (int *)((int *)*piVar3);
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*piVar6 + 0xd));
      piVar3 = (int *)(piVar6);
      piVar6 = (int *)((int *)*piVar6);
    }
    *piVar2 = (int)((int)piVar3);
    iVar4 = (int)(*(int *)(*param_1 + 4));
    iVar5 = (int)(*(int *)(iVar4 + 8));
    cVar1 = (char)(*(char *)(iVar5 + 0xd));
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
      iVar4 = (int)(iVar5);
      iVar5 = (int)(*(int *)(iVar5 + 8));
    }
    *(int *)(*param_1 + 8) = iVar4;
  }
  else {
    *piVar2 = (int)((int)piVar2);
    *(int *)(*param_1 + 8) = *param_1;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 103fa290; body size 236 bytes.
#line 1 "ENTRY_103fa290"

int __fastcall FUN_103fa290(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11557700);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl);
  iVar5 = (int)(thunk_FUN_101dcfc0(&local_18));
  if (local_18 != 0) {
    iVar5 = (int)(thunk_FUN_103d6930(param_1[2]));
  }
  if (local_14 != (int *)0x0) {
    LOCK();
    piVar3 = (int *)(local_14 + 1);
    iVar2 = (int)(*piVar3);
    iVar5 = (int)(*piVar3);
    *piVar3 = (int)(iVar2 + -1);
    UNLOCK();
    if (iVar2 + -1 == 0) {
      (**(code **)*local_14)(uVar4);
      LOCK();
      piVar3 = (int *)(local_14 + 2);
      iVar2 = (int)(*piVar3);
      iVar5 = (int)(*piVar3);
      *piVar3 = (int)(iVar2 + -1);
      UNLOCK();
      if (iVar2 + -1 == 0) {
        iVar5 = (int)((**(code **)(*local_14 + 4))());
      }
    }
  }
  piVar3 = (int *)((int *)param_1[0xf]);
  if (piVar3 != (int *)0x0) {
    iVar5 = (int)((**(code **)(*piVar3 + 0x10))(piVar3 != (int *)(param_1) + 6));
    param_1[0xf] = 0;
  }
  piVar3 = (int *)((int *)param_1[5]);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar3 + 2);
    iVar2 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (iVar2 == 1) {
      iVar5 = (int)((**(code **)(*piVar3 + 4))());
    }
  }
  piVar3 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar3 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    iVar5 = (int)((**(code **)(*piVar3 + 8))());
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return (int)(iVar5);
}


// Reference entry 103fa3e0; body size 177 bytes.
#line 1 "ENTRY_103fa3e0"

void __fastcall FUN_103fa3e0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11557730);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  piVar1 = (int *)((int *)param_1[0x19]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 0x10,uVar2);
    param_1[0x19] = 0;
  }
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101d3630();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103fa4d0; body size 177 bytes.
#line 1 "ENTRY_103fa4d0"

void __fastcall FUN_103fa4d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11557760);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  piVar1 = (int *)((int *)param_1[0x19]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 0x10,uVar2);
    param_1[0x19] = 0;
  }
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101d3630();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103fa5c0; body size 177 bytes.
#line 1 "ENTRY_103fa5c0"

void __fastcall FUN_103fa5c0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11557790);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  piVar1 = (int *)((int *)param_1[0x19]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 0x10,uVar2);
    param_1[0x19] = 0;
  }
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101d3630();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103fa6b0; body size 177 bytes.
#line 1 "ENTRY_103fa6b0"

void __fastcall FUN_103fa6b0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115577c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  piVar1 = (int *)((int *)param_1[0x19]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 0x10,uVar2);
    param_1[0x19] = 0;
  }
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101d3630();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103fa7a0; body size 76 bytes.
#line 1 "ENTRY_103fa7a0"

void __fastcall FUN_103fa7a0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115577f0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103fa810; body size 76 bytes.
#line 1 "ENTRY_103fa810"

void __fastcall FUN_103fa810(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11557820);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103fa880; body size 76 bytes.
#line 1 "ENTRY_103fa880"

void __fastcall FUN_103fa880(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11557850);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103fa8f0; body size 76 bytes.
#line 1 "ENTRY_103fa8f0"

void __fastcall FUN_103fa8f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11557880);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103fa960; body size 76 bytes.
#line 1 "ENTRY_103fa960"

void __fastcall FUN_103fa960(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115578b0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103fa9d0; body size 76 bytes.
#line 1 "ENTRY_103fa9d0"

void __fastcall FUN_103fa9d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115578e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103fb050; body size 90 bytes.
#line 1 "ENTRY_103fb050"

void __fastcall FUN_103fb050(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11557a00);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTokenManagerEventSink);
  piVar1 = (int *)((int *)param_1[2]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 103fb4b0; body size 81 bytes.
#line 1 "ENTRY_103fb4b0"

int * __thiscall Recovered_Bulk::FUN_103fb4b0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 103fbb60; body size 116 bytes.
#line 1 "ENTRY_103fbb60"

int * __fastcall FUN_103fbb60(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)((int *)*param_1);
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    *param_1 = (int)(piVar2[2]);
    return (int *)(param_1);
  }
  iVar3 = (int)(*piVar2);
  if (*(char *)(iVar3 + 0xd) == '\0') {
    cVar1 = (char)(*(char *)(*(int *)(iVar3 + 8) + 0xd));
    iVar4 = (int)(*(int *)(iVar3 + 8));
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*(int *)(iVar4 + 8) + 0xd));
      iVar3 = (int)(iVar4);
      iVar4 = (int)(*(int *)(iVar4 + 8));
    }
    *param_1 = (int)(iVar3);
  }
  else {
    cVar1 = (char)(*(char *)(piVar2[1] + 0xd));
    piVar5 = (int *)((int *)piVar2[1]);
    while ((cVar1 == '\0' && (piVar2 == (int *)*piVar5))) {
      *param_1 = (int)((int)piVar5);
      cVar1 = (char)(*(char *)(piVar5[1] + 0xd));
      piVar2 = (int *)(piVar5);
      piVar5 = (int *)((int *)piVar5[1]);
    }
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      *param_1 = (int)((int)piVar5);
      return (int *)(param_1);
    }
  }
  return (int *)(param_1);
}


// Reference entry 103fbc00; body size 88 bytes.
#line 1 "ENTRY_103fbc00"

bool __fastcall FUN_103fbc00(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  bool bVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11557aad);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq((SCStr *)&stack0x00000008));
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)&stack0x00000008))->int_release();
  ExceptionList = (void *)(local_10);
  return (bool)(bVar1);
}


// Reference entry 103fbfb0; body size 261 bytes.
#line 1 "ENTRY_103fbfb0"

undefined4 * __thiscall Recovered_Bulk::FUN_103fbfb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11557be0);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl);
  thunk_FUN_101dcfc0(&local_18);
  if (local_18 != 0) {
    thunk_FUN_103d6930(param_1[2]);
  }
  if (local_14 != (int *)0x0) {
    LOCK();
    iVar3 = (int)(local_14[1] + -1);
    local_14[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*local_14)(uVar4);
      LOCK();
      iVar3 = (int)(local_14[2] + -1);
      local_14[2] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)(*local_14 + 4))();
      }
    }
  }
  piVar2 = (int *)((int *)param_1[0xf]);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  piVar2 = (int *)((int *)param_1[5]);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar2 + 2);
    iVar3 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  piVar2 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (piVar2 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103fc3c0; body size 113 bytes.
#line 1 "ENTRY_103fc3c0"

undefined4 * __thiscall Recovered_Bulk::FUN_103fc3c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11557c70);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTokenManagerEventSink);
  piVar1 = (int *)((int *)param_1[2]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 103fc5b0; body size 124 bytes.
#line 1 "ENTRY_103fc5b0"

undefined4 * __fastcall FUN_103fc5b0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11557ff5);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;
  local_8 = (undefined4)(1);
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(puVar2);
}


// Reference entry 103fe890; body size 213 bytes.
#line 1 "ENTRY_103fe890"

void __fastcall FUN_103fe890(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x98) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x98) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x94) + 4))();
      (**(code **)(*(int *)(param_1 + 0x94) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x170) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x170) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x16c) + 4))();
      (**(code **)(*(int *)(param_1 + 0x16c) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x1d8) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1d8) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x1d4) + 4))();
      (**(code **)(*(int *)(param_1 + 0x1d4) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x108) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x108) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x104) + 4))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x104) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 103ff350; body size 69 bytes.
#line 1 "ENTRY_103ff350"

void __thiscall Recovered_Bulk::FUN_103ff350(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_103f6e10(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 10400090; body size 184 bytes.
#line 1 "ENTRY_10400090"

void __fastcall FUN_10400090(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11558735);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_10292c70(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x9c) != 0)) {
    (**(code **)(*piVar1 + 0x3c))(*(int *)(param_1 + 0x9c),0,1);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  local_8 = (undefined4)(4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 104002d0; body size 135 bytes.
#line 1 "ENTRY_104002d0"

void __fastcall FUN_104002d0(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x3c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = (int *)(*(int **)(param_1 + 100));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (char)((**(code **)(**(int **)(param_1 + 4) + 0x1c))());
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 10400380; body size 135 bytes.
#line 1 "ENTRY_10400380"

void __fastcall FUN_10400380(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x3c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = (int *)(*(int **)(param_1 + 100));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (char)((**(code **)(**(int **)(param_1 + 4) + 0x1c))());
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 10400430; body size 135 bytes.
#line 1 "ENTRY_10400430"

void __fastcall FUN_10400430(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x3c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = (int *)(*(int **)(param_1 + 100));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (char)((**(code **)(**(int **)(param_1 + 4) + 0x1c))());
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 104004e0; body size 135 bytes.
#line 1 "ENTRY_104004e0"

void __fastcall FUN_104004e0(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x3c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = (int *)(*(int **)(param_1 + 100));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (char)((**(code **)(**(int **)(param_1 + 4) + 0x1c))());
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 10401930; body size 291 bytes.
#line 1 "ENTRY_10401930"

int * FUN_10401930(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11558b5d);
  local_10 = (void *)(ExceptionList);
  uVar5 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar6 = (int *)((int *)((SCPropertyBag *)((SCIObj *)&local_14))->createSCObject());
  piVar2 = (int *)((int *)*piVar6);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar6 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
  }
  else {
    piVar6 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(uVar5));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  piVar7 = (int *)((int *)*param_2);
  cVar1 = (char)(*(char *)((int)piVar7 + 0xd));
  while (cVar1 == '\0') {
    (**(code **)(*piVar2 + 0x28))(piVar7 + 4,piVar7[5]);
    piVar3 = (int *)((int *)piVar7[2]);
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      cVar1 = (char)(*(char *)(*piVar3 + 0xd));
      piVar7 = (int *)(piVar3);
      piVar3 = (int *)((int *)*piVar3);
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*piVar3 + 0xd));
        piVar7 = (int *)(piVar3);
        piVar3 = (int *)((int *)*piVar3);
      }
    }
    else {
      cVar1 = (char)(*(char *)(piVar7[1] + 0xd));
      piVar4 = (int *)((int *)piVar7[1]);
      piVar3 = (int *)(piVar7);
      while ((piVar7 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar7[2]))) {
        cVar1 = (char)(*(char *)(piVar7[1] + 0xd));
        piVar4 = (int *)((int *)piVar7[1]);
        piVar3 = (int *)(piVar7);
      }
    }
    cVar1 = (char)(*(char *)((int)piVar7 + 0xd));
  }
  *param_1 = (int)((int)piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  thunk_FUN_103f6890(&param_2,param_2[1]);
  thunk_FUN_1148a50e(param_2,0x18);
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 10403de0; body size 76 bytes.
#line 1 "ENTRY_10403de0"

void __fastcall FUN_10403de0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11559120);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10404180; body size 161 bytes.
#line 1 "ENTRY_10404180"

undefined4 __stdcall FUN_10404180(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11559245);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)thunk_FUN_10404470(&local_14));
  piVar1 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(0);
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  (**(code **)(*piVar1 + 0x18))(param_1,param_2);
  local_8 = (undefined4)(4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10404be0; body size 189 bytes.
#line 1 "ENTRY_10404be0"

undefined1 __stdcall FUN_10404be0(undefined4 param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115593b5);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)thunk_FUN_10404470(&local_14));
  piVar4 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(0);
  *piVar3 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  (**(code **)(*piVar4 + 0x78))(param_1);
  piVar5 = (int *)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(piVar4,piVar3);
  }
  uVar1 = (undefined1)(thunk_FUN_10404dc0(piVar4,piVar5));
  local_8 = (undefined4)(4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 10404cd0; body size 192 bytes.
#line 1 "ENTRY_10404cd0"

undefined1 __stdcall FUN_10404cd0(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115593f5);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)thunk_FUN_10404470(&local_14));
  piVar4 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(0);
  *piVar3 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  (**(code **)(*piVar4 + 0x1c))(param_1,param_2);
  piVar5 = (int *)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(piVar4,piVar3);
  }
  uVar1 = (undefined1)(thunk_FUN_10404dc0(piVar4,piVar5));
  local_8 = (undefined4)(4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 10405240; body size 99 bytes.
#line 1 "ENTRY_10405240"

int __thiscall Recovered_Bulk::FUN_10405240(undefined4 param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155948d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10118c40(param_2);
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x18) = *param_3;
  piVar1 = (int *)((int *)param_3[1]);
  *(int **)(param_1 + 0x1c) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10405900; body size 91 bytes.
#line 1 "ENTRY_10405900"

int * __thiscall Recovered_Bulk::FUN_10405900(int *param_2)
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
    return (int *)(param_1);
  }
  param_1[1] = 0;
  return (int *)(param_1);
}


// Reference entry 10405f90; body size 111 bytes.
#line 1 "ENTRY_10405f90"

void FUN_10405f90(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11559770);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (undefined4 *)(param_2)); param_1 = param_1 + 2) {
    piVar1 = (int *)((int *)param_1[1]);
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      *param_1 = (undefined4)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }
    ppvVar2 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10406570; body size 134 bytes.
#line 1 "ENTRY_10406570"

undefined4 __thiscall Recovered_Bulk::FUN_10406570(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
  char cVar1;
  int *piVar2;
  void **ppvVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11559820);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar3 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  while (ExceptionList = ppvVar3, cVar1 == '\0') {
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_10406570(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    local_8 = (undefined4)(0);
    thunk_FUN_10406d40(param_2,param_3 + 4,uVar4);
    thunk_FUN_1148a50e(param_3,0x30);
    ppvVar3 = (void **)(ExceptionList);
    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10406620; body size 88 bytes.
#line 1 "ENTRY_10406620"

int __thiscall Recovered_Bulk::FUN_10406620(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10406690(local_c,param_2);
  if (*(char *)(local_4 + 0xd) == '\0') {
    iVar1 = (int)(local_4 + 0x10);
    if (0xf < *(uint *)(local_4 + 0x24)) {
      iVar1 = (int)(*(int *)(local_4 + 0x10));
    }
    puVar2 = (undefined4 *)(param_2);
    if (0xf < (uint)param_2[5]) {
      puVar2 = (undefined4 *)((undefined4 *)*param_2);
    }
    iVar1 = (int)(thunk_FUN_102bce30(puVar2,param_2[4],iVar1,*(undefined4 *)(local_4 + 0x20)));
    if (-1 < iVar1) {
      return (int)(local_4);
    }
  }
  return (int)(*param_1);
}


// Reference entry 10406690; body size 127 bytes.
#line 1 "ENTRY_10406690"

int * __thiscall Recovered_Bulk::FUN_10406690(int *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar4 = (int)(*param_1);
  puVar7 = (undefined4 *)(*(undefined4 **)(iVar4 + 4));
  *param_2 = (int)((int)puVar7);
  cVar1 = (char)(*(char *)((int)puVar7 + 0xd));
  param_2[1] = 0;
  param_2[2] = iVar4;
  if (cVar1 == '\0') {
    uVar2 = (undefined4)(param_3[4]);
    uVar3 = (uint)(param_3[5]);
    do {
      *param_2 = (int)((int)puVar7);
      puVar6 = (undefined4 *)(param_3);
      if (0xf < uVar3) {
        puVar6 = (undefined4 *)((undefined4 *)*param_3);
      }
      puVar5 = (undefined4 *)(puVar7 + 4);
      if (0xf < (uint)puVar7[9]) {
        puVar5 = (undefined4 *)((undefined4 *)puVar7[4]);
      }
      iVar4 = (int)(thunk_FUN_102bce30(puVar5,puVar7[8],puVar6,uVar2));
      if (-1 < iVar4) {
        param_2[2] = (int)puVar7;
        puVar7 = (undefined4 *)((undefined4 *)*puVar7);
      }
      else {
        puVar7 = (undefined4 *)((undefined4 *)puVar7[2]);
      }
      param_2[1] = (uint)(-1 < iVar4);
    } while (*(char *)((int)puVar7 + 0xd) == '\0');
  }
  return (int *)(param_2);
}


// Reference entry 10406750; body size 77 bytes.
#line 1 "ENTRY_10406750"

void FUN_10406750(undefined4 param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11559850);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10406d40(param_1,param_2 + 0x10,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  thunk_FUN_1148a50e(param_2,0x30);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10406e10; body size 84 bytes.
#line 1 "ENTRY_10406e10"

void FUN_10406e10(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11559970);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10407300; body size 96 bytes.
#line 1 "ENTRY_10407300"

int FUN_10407300(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11559a4d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10118c40(param_2);
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x18) = *param_3;
  piVar1 = (int *)((int *)param_3[1]);
  *(int **)(param_1 + 0x1c) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10407750; body size 110 bytes.
#line 1 "ENTRY_10407750"

undefined4 * __fastcall FUN_10407750(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11559ac0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar1 = (undefined4 *)(operator_new(8));
  puVar1[1] = 0;
  *param_1 = (undefined4)(puVar1);
  *puVar1 = (undefined4)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10407800; body size 324 bytes.
#line 1 "ENTRY_10407800"

void * __fastcall FUN_10407800(void *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11559b12);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  memset(param_1,0,0x4a0);
  pvVar3 = (void *)(operator_new(0x48));
  local_8 = (undefined4)(0);
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)thunk_FUN_10407ce0(uVar2));
  }
  local_8 = (undefined4)(0xffffffff);
  *(int **)((int)param_1 + 0x4a0) = piVar4;
  *(undefined4 *)((int)param_1 + 0x4a4) = 0;
  if (piVar4 != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
    *(int **)((int)param_1 + 0x4a4) = piVar4;
    (**(code **)(*piVar4 + 4))();
  }
  *(undefined4 *)((int)param_1 + 0x4a8) = *(undefined4 *)((int)param_1 + 0x4a0);
  piVar4 = (int *)(*(int **)((int)param_1 + 0x4a4));
  local_8 = (undefined4)(1);
  *(int **)((int)param_1 + 0x4ac) = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  puVar1 = (undefined4 *)((undefined4 *)((int)param_1 + 0x4b0));
  *puVar1 = (undefined4)(0);
  *(undefined4 *)((int)param_1 + 0x4b4) = 0;
  *(undefined4 *)((int)param_1 + 0x4b8) = 0;
  *(undefined4 *)((int)param_1 + 0x4bc) = 0;
  *(undefined4 *)((int)param_1 + 0x4c0) = 0;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *puVar1 = (undefined4)(0);
  *(undefined4 *)((int)param_1 + 0x4b4) = 0;
  *(undefined4 *)((int)param_1 + 0x4b8) = 0;
  *(undefined4 *)((int)param_1 + 0x4bc) = 0;
  *(undefined4 *)((int)param_1 + 0x4c0) = 0;
  puVar5 = (undefined4 *)(operator_new(8));
  puVar5[1] = 0;
  *puVar1 = (undefined4)(puVar5);
  *puVar5 = (undefined4)(puVar1);
  *(undefined4 *)((int)param_1 + 0x4d4) = 0;
  *(undefined4 *)((int)param_1 + 0x4d8) = 0xf;
  *(undefined1 *)((int)param_1 + 0x4c4) = 0;
  thunk_FUN_112c3710(param_1,0x10,param_1);
  *(undefined1 **)((int)param_1 + 0x440) = LAB_10092587;
  ExceptionList = (void *)(local_10);
  return (void *)(param_1);
}


// Reference entry 10407b30; body size 219 bytes.
#line 1 "ENTRY_10407b30"

undefined4 * __thiscall Recovered_Bulk::FUN_10407b30(int param_2,undefined1 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11559bc0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_11243350(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJsonHelper);
  param_1[10] = 0;
  local_8 = (undefined4)(1);
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = param_3;
  thunk_FUN_11243910();
  uVar3 = (uint)(0);
  iVar2 = (int)(*(int *)(param_2 + 8));
  if (*(int *)(param_2 + 0xc) - iVar2 >> 3 != 0) {
    do {
      piVar1 = (int *)(*(int **)(iVar2 + uVar3 * 8));
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      if (piVar1 != (int *)0x0) {
        thunk_FUN_11244810();
        thunk_FUN_1040ed00(piVar1);
      }
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
      uVar3 = (uint)(uVar3 + 1);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      iVar2 = (int)(*(int *)(param_2 + 8));
    } while (uVar3 < (uint)(*(int *)(param_2 + 0xc) - iVar2 >> 3));
  }
  thunk_FUN_11243770();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10407c50; body size 113 bytes.
#line 1 "ENTRY_10407c50"

undefined4 * __thiscall Recovered_Bulk::FUN_10407c50(undefined4 param_2,undefined1 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11559c08);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_11243350(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJsonHelper);
  param_1[10] = 0;
  local_8 = (undefined4)(1);
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = param_3;
  thunk_FUN_1040ed00(param_2);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10407de0; body size 76 bytes.
#line 1 "ENTRY_10407de0"

void __fastcall FUN_10407de0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11559c90);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10407e50; body size 68 bytes.
#line 1 "ENTRY_10407e50"

void __fastcall FUN_10407e50(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11559cc0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10407f60; body size 92 bytes.
#line 1 "ENTRY_10407f60"

void __fastcall FUN_10407f60(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11559d20);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (param_1[1] != 0) {
    thunk_FUN_10406d40(*param_1,param_1[1] + 0x10,DAT_12126b84 ^ (uint)&stack0xfffffffc);
    if (param_1[1] != 0) {
      thunk_FUN_1148a50e(param_1[1],0x30);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10408020; body size 275 bytes.
#line 1 "ENTRY_10408020"

void __fastcall FUN_10408020(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11559d50);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar7 = (int)(param_1[4]);
  if (iVar7 != 0) {
    do {
      uVar5 = (uint)(param_1[3] + -1 + iVar7);
      uVar6 = (uint)(uVar5 & 1);
      iVar4 = (int)(*(int *)(param_1[1] + (param_1[2] - 1 & uVar5 >> 1) * 4));
      piVar1 = (int *)(*(int **)(iVar4 + 4 + uVar6 * 8));
      local_8 = (undefined4)(0);
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(iVar4 + uVar6 * 8) = 0;
        *(undefined4 *)(iVar4 + 4 + uVar6 * 8) = 0;
        (**(code **)(*piVar1 + 8))(uVar3);
        iVar7 = (int)(param_1[4]);
      }
      iVar7 = (int)(iVar7 + -1);
      param_1[4] = iVar7;
    } while (iVar7 != 0);
    param_1[3] = 0;
  }
  local_8 = (undefined4)(0xffffffff);
  iVar7 = (int)(param_1[2]);
  while (iVar7 != 0) {
    iVar7 = (int)(iVar7 + -1);
    iVar4 = (int)(*(int *)(param_1[1] + iVar7 * 4));
    if (iVar4 != 0) {
      thunk_FUN_1148a50e(iVar4,0x10);
    }
  }
  iVar7 = (int)(param_1[1]);
  if (iVar7 != 0) {
    uVar3 = (uint)(param_1[2] * 4);
    iVar4 = (int)(iVar7);
    if (0xfff < uVar3) {
      iVar4 = (int)(*(int *)(iVar7 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar7 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar3);
  }
  uVar2 = (undefined4)(*param_1);
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = (undefined4)(0);
  thunk_FUN_1148a50e(uVar2,8);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10408360; body size 96 bytes.
#line 1 "ENTRY_10408360"

void __fastcall FUN_10408360(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10405f90(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar3 = (uint)(param_1[2] - iVar1 & 0xfffffff8);
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 104083e0; body size 239 bytes.
#line 1 "ENTRY_104083e0"

void __fastcall FUN_104083e0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11559de0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar1 = (uint)(*(uint *)(param_1 + 0x4d8));
  if (0xf < uVar1) {
    iVar2 = (int)(*(int *)(param_1 + 0x4c4));
    uVar5 = (uint)(uVar1 + 1);
    iVar4 = (int)(iVar2);
    if (0xfff < uVar5) {
      iVar4 = (int)(*(int *)(iVar2 + -4));
      uVar5 = (uint)(uVar1 + 0x24);
      if (0x1f < (iVar2 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar5,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 0xf;
  *(undefined1 *)(param_1 + 0x4c4) = 0;
  thunk_FUN_10408020();
  piVar3 = (int *)(*(int **)(param_1 + 0x4ac));
  local_8 = (undefined4)(0);
  if (piVar3 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    *(undefined4 *)(param_1 + 0x4ac) = 0;
    (**(code **)(*piVar3 + 8))();
  }
  piVar3 = (int *)(*(int **)(param_1 + 0x4a4));
  local_8 = (undefined4)(1);
  if (piVar3 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    *(undefined4 *)(param_1 + 0x4a4) = 0;
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10408520; body size 194 bytes.
#line 1 "ENTRY_10408520"

void __fastcall FUN_10408520(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJsonValue);
  thunk_FUN_10405f90(*puVar1,param_1[3],puVar1);
  piVar2 = (int *)(param_1 + 5);
  param_1[3] = *puVar1;
  iVar3 = (int)(*piVar2);
  thunk_FUN_10406570(piVar2,*(undefined4 *)(iVar3 + 4));
  *(int *)(iVar3 + 4) = iVar3;
  *(int *)iVar3 = (int)(iVar3);
  *(int *)(iVar3 + 8) = iVar3;
  param_1[6] = 0;
  uVar4 = (uint)(param_1[0xc]);
  if (0xf < uVar4) {
    iVar3 = (int)(param_1[7]);
    uVar6 = (uint)(uVar4 + 1);
    iVar5 = (int)(iVar3);
    if (0xfff < uVar6) {
      iVar5 = (int)(*(int *)(iVar3 + -4));
      uVar6 = (uint)(uVar4 + 0x24);
      if (0x1f < (iVar3 - iVar5) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar6);
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0xf;
  *(undefined1 *)(param_1 + 7) = 0;
  thunk_FUN_10406570(piVar2,*(undefined4 *)(*piVar2 + 4));
  thunk_FUN_1148a50e(*piVar2,0x30);
  thunk_FUN_10408360();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10408680; body size 81 bytes.
#line 1 "ENTRY_10408680"

int * __thiscall Recovered_Bulk::FUN_10408680(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10408ab0; body size 106 bytes.
#line 1 "ENTRY_10408ab0"

undefined4 * __thiscall Recovered_Bulk::FUN_10408ab0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11559e10);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10408e60; body size 104 bytes.
#line 1 "ENTRY_10408e60"

void __thiscall Recovered_Bulk::FUN_10408e60(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10405f90(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar3 = (uint)(param_1[2] - iVar1 & 0xfffffff8);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
  }
  *param_1 = (int)(param_2);
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}


// Reference entry 104091a0; body size 407 bytes.
#line 1 "ENTRY_104091a0"

void __thiscall Recovered_Bulk::FUN_104091a0(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  void *pvVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  size_t _Size;
  
  uVar5 = (uint)(*(uint *)(param_1 + 8));
  uVar1 = (uint)(1);
  if (uVar5 != 0) {
    uVar1 = (uint)(uVar5);
  }
  for (; (uVar4 = (uint)(uVar1 - uVar5, uVar4 < param_2 || (uVar1 < 8))); uVar1 = uVar1 * 2) {
    if (0xfffffff - uVar1 < uVar1) {
      thunk_FUN_10409b40();
LAB_10409332:
                    
      thunk_FUN_1012a2a0();
    }
  }
  uVar5 = (uint)(*(uint *)(param_1 + 0xc) >> 1);
  if (0x3fffffff < uVar1) goto LAB_10409332;
  uVar1 = (uint)(uVar1 * 4);
  if (uVar1 < 0x1000) {
    if (uVar1 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar1));
    }
  }
  else {
    if (uVar1 + 0x23 <= uVar1) goto LAB_10409332;
    pvVar2 = (void *)(operator_new(uVar1 + 0x23));
    if (pvVar2 == (void *)0x0) goto LAB_10409325;
    _Dst = (void *)((void *)((int)pvVar2 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar2;
  }
  iVar6 = (int)(uVar5 * 4);
  pvVar2 = (void *)((void *)(*(int *)(param_1 + 4) + iVar6));
  sVar7 = (size_t)((*(int *)(param_1 + 8) * 4 - (int)pvVar2) + *(int *)(param_1 + 4));
  memmove((void *)(iVar6 + (int)_Dst),pvVar2,sVar7);
  pvVar2 = (void *)((void *)(sVar7 + iVar6 + (int)_Dst));
  if (uVar4 < uVar5) {
    sVar7 = (size_t)(uVar4 * 4);
    memmove(pvVar2,*(void **)(param_1 + 4),sVar7);
    pvVar2 = (void *)((void *)(sVar7 + *(int *)(param_1 + 4)));
    _Size = (size_t)((*(int *)(param_1 + 4) - (int)pvVar2) + iVar6);
    memmove(_Dst,pvVar2,_Size);
    memset((void *)((int)_Dst + _Size),0,sVar7);
  }
  else {
    sVar7 = (size_t)(uVar5 * 4);
    memmove(pvVar2,*(void **)(param_1 + 4),sVar7);
    memset((void *)((int)pvVar2 + sVar7),0,(uVar4 - uVar5) * 4);
    memset(_Dst,0,sVar7);
  }
  iVar6 = (int)(*(int *)(param_1 + 4));
  if (iVar6 != 0) {
    uVar5 = (uint)(*(int *)(param_1 + 8) * 4);
    iVar3 = (int)(iVar6);
    if (0xfff < uVar5) {
      iVar3 = (int)(*(int *)(iVar6 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar6 - iVar3) - 4U) {
LAB_10409325:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar5);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar4;
  *(void **)(param_1 + 4) = _Dst;
  return;
}


// Reference entry 10409870; body size 256 bytes.
#line 1 "ENTRY_10409870"

void __fastcall FUN_10409870(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11559ed0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar6 = (int)(*(int *)(param_1 + 0x10));
  if (iVar6 != 0) {
    do {
      uVar4 = (uint)(*(int *)(param_1 + 0xc) + -1 + iVar6);
      uVar5 = (uint)(uVar4 & 1);
      iVar3 = (int)(*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) - 1U & uVar4 >> 1) * 4));
      piVar1 = (int *)(*(int **)(iVar3 + 4 + uVar5 * 8));
      local_8 = (undefined4)(0);
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(iVar3 + uVar5 * 8) = 0;
        *(undefined4 *)(iVar3 + 4 + uVar5 * 8) = 0;
        (**(code **)(*piVar1 + 8))(uVar2);
        iVar6 = (int)(*(int *)(param_1 + 0x10));
      }
      iVar6 = (int)(iVar6 + -1);
      *(int *)(param_1 + 0x10) = iVar6;
    } while (iVar6 != 0);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  local_8 = (undefined4)(0xffffffff);
  iVar6 = (int)(*(int *)(param_1 + 8));
  while (iVar6 != 0) {
    iVar6 = (int)(iVar6 + -1);
    iVar3 = (int)(*(int *)(*(int *)(param_1 + 4) + iVar6 * 4));
    if (iVar3 != 0) {
      thunk_FUN_1148a50e(iVar3,0x10);
    }
  }
  iVar6 = (int)(*(int *)(param_1 + 4));
  if (iVar6 != 0) {
    uVar2 = (uint)(*(int *)(param_1 + 8) * 4);
    iVar3 = (int)(iVar6);
    if (0xfff < uVar2) {
      iVar3 = (int)(*(int *)(iVar6 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar6 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 104099c0; body size 96 bytes.
#line 1 "ENTRY_104099c0"

void __fastcall FUN_104099c0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10405f90(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar3 = (uint)(param_1[2] - iVar1 & 0xfffffff8);
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 10409cd0; body size 87 bytes.
#line 1 "ENTRY_10409cd0"

void * FUN_10409cd0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x20000000) {
    param_1 = (uint)(param_1 * 8);
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
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10409d60; body size 203 bytes.
#line 1 "ENTRY_10409d60"

undefined4 FUN_10409d60(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11559f40);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  if (*(int *)(param_1 + 0x44) != 5) {
    return (undefined4)(0);
  }
  piVar4 = (int *)(*(int **)(param_1 + 8));
  ExceptionList = (void *)(&local_10);
  if (piVar4 != *(int **)(param_1 + 0xc)) {
    while( true ) {
      local_8 = (undefined4)(0xffffffff);
      piVar1 = (int *)((int *)piVar4[1]);
      iVar2 = (int)(*piVar4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar3);
      }
      if (*(int *)(iVar2 + 0x44) != 0) break;
      local_8 = (undefined4)(1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
      piVar4 = (int *)(piVar4 + 2);
      if (piVar4 == *(int **)(param_1 + 0xc)) {
        ExceptionList = (void *)(local_10);
        return (undefined4)(1);
      }
    }
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 1040a540; body size 107 bytes.
#line 1 "ENTRY_1040a540"

void __thiscall Recovered_Bulk::FUN_1040a540(int *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10406690(local_c,param_3);
  if (*(char *)(local_4 + 0xd) == '\0') {
    iVar1 = (int)(local_4 + 0x10);
    if (0xf < *(uint *)(local_4 + 0x24)) {
      iVar1 = (int)(*(int *)(local_4 + 0x10));
    }
    puVar2 = (undefined4 *)(param_3);
    if (0xf < (uint)param_3[5]) {
      puVar2 = (undefined4 *)((undefined4 *)*param_3);
    }
    iVar1 = (int)(thunk_FUN_102bce30(puVar2,param_3[4],iVar1,*(undefined4 *)(local_4 + 0x20)));
    if (-1 < iVar1) {
      *param_2 = (int)(local_4);
      return;
    }
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 1040a620; body size 76 bytes.
#line 1 "ENTRY_1040a620"

void __thiscall Recovered_Bulk::FUN_1040a620(undefined4 param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11559fc4);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  switch(param_2) {
  case 0:
    thunk_FUN_1040c790();
    piVar1 = (int *)(*(int **)(param_1 + 0x4a8));
    piVar3 = (int *)(piVar1 + 2);
    piVar1[0x11] = 5;
    thunk_FUN_10405f90(*piVar3,piVar1[3],piVar3);
    piVar1[3] = *piVar3;
    (**(code **)(*piVar1 + 4))();
    uStack_8 = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
    ExceptionList = (void *)(local_10);
    return;
  case 1:
    thunk_FUN_1040c3a0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    ExceptionList = (void *)(local_10);
    return;
  case 2:
  case 3:
    pvVar2 = (void *)(operator_new(0x48));
    uStack_8 = (undefined4)(1);
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)thunk_FUN_10407ce0());
    }
    uStack_8 = (undefined4)(0xffffffff);
    if (piVar3 != *(int **)(param_1 + 0x4a8)) {
      piVar1 = (int *)(*(int **)(param_1 + 0x4ac));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x4a8) = 0;
        *(undefined4 *)(param_1 + 0x4ac) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(int **)(param_1 + 0x4a8) = piVar3;
      if (piVar3 != (int *)0x0) {
        piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
        *(int **)(param_1 + 0x4ac) = piVar3;
        (**(code **)(*piVar3 + 4))();
        ExceptionList = (void *)(local_10);
        return;
      }
      *(undefined4 *)(param_1 + 0x4ac) = 0;
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1040a7d0; body size 371 bytes.
#line 1 "ENTRY_1040a7d0"

void __thiscall Recovered_Bulk::FUN_1040a7d0(int param_2,undefined1 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155a004);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (param_2 == 0) {
    thunk_FUN_1040c790(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  else {
    if (param_2 == 1) {
      iVar4 = (int)(*(int *)(param_1 + 0x4a8));
      *(undefined4 *)(iVar4 + 0x44) = 2;
      *(undefined1 *)(iVar4 + 0x40) = param_3;
      thunk_FUN_1040c3a0();
      ExceptionList = (void *)(local_10);
      return;
    }
    if (param_2 == 3) {
      pvVar2 = (void *)(operator_new(0x48));
      local_8 = (undefined4)(0);
      if (pvVar2 == (void *)0x0) {
        piVar3 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)thunk_FUN_10407ce0());
      }
      local_8 = (undefined4)(0xffffffff);
      if (piVar3 != *(int **)(param_1 + 0x4a0)) {
        piVar1 = (int *)(*(int **)(param_1 + 0x4a4));
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x4a0) = 0;
          *(undefined4 *)(param_1 + 0x4a4) = 0;
          (**(code **)(*piVar1 + 8))();
        }
        *(int **)(param_1 + 0x4a0) = piVar3;
        if (piVar3 == (int *)0x0) {
          *(undefined4 *)(param_1 + 0x4a4) = 0;
        }
        else {
          piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
          *(int **)(param_1 + 0x4a4) = piVar3;
          (**(code **)(*piVar3 + 4))();
        }
      }
      iVar4 = (int)(*(int *)(param_1 + 0x4a0));
      if (iVar4 != *(int *)(param_1 + 0x4a8)) {
        piVar3 = (int *)(*(int **)(param_1 + 0x4ac));
        if (piVar3 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x4a8) = 0;
          *(undefined4 *)(param_1 + 0x4ac) = 0;
          (**(code **)(*piVar3 + 8))();
          iVar4 = (int)(*(int *)(param_1 + 0x4a0));
        }
        *(int *)(param_1 + 0x4a8) = iVar4;
        piVar3 = (int *)(*(int **)(param_1 + 0x4a4));
        *(int **)(param_1 + 0x4ac) = piVar3;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 4))();
          ExceptionList = (void *)(local_10);
          return;
        }
      }
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1040acc0; body size 509 bytes.
#line 1 "ENTRY_1040acc0"

void __thiscall Recovered_Bulk::FUN_1040acc0(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155a0b3);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (param_2 == 0) {
    thunk_FUN_1040c790(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  else {
    if (param_2 == 1) {
      pvVar2 = (void *)(operator_new(0x48));
      local_8 = (undefined4)(0);
      if (pvVar2 == (void *)0x0) {
        piVar3 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)thunk_FUN_10407ce0());
      }
      local_8 = (undefined4)(0xffffffff);
      if (piVar3 != *(int **)(param_1 + 0x4a8)) {
        piVar1 = (int *)(*(int **)(param_1 + 0x4ac));
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x4a8) = 0;
          *(undefined4 *)(param_1 + 0x4ac) = 0;
          (**(code **)(*piVar1 + 8))();
        }
        *(int **)(param_1 + 0x4a8) = piVar3;
        if (piVar3 != (int *)0x0) {
          piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
          *(int **)(param_1 + 0x4ac) = piVar3;
          (**(code **)(*piVar3 + 4))();
          thunk_FUN_1040c3a0();
          ExceptionList = (void *)(local_10);
          return;
        }
        *(undefined4 *)(param_1 + 0x4ac) = 0;
      }
      thunk_FUN_1040c3a0();
      ExceptionList = (void *)(local_10);
      return;
    }
    if (param_2 == 3) {
      pvVar2 = (void *)(operator_new(0x48));
      local_8 = (undefined4)(1);
      if (pvVar2 == (void *)0x0) {
        piVar3 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)thunk_FUN_10407ce0());
      }
      local_8 = (undefined4)(0xffffffff);
      if (piVar3 != *(int **)(param_1 + 0x4a0)) {
        piVar1 = (int *)(*(int **)(param_1 + 0x4a4));
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x4a0) = 0;
          *(undefined4 *)(param_1 + 0x4a4) = 0;
          (**(code **)(*piVar1 + 8))();
        }
        *(int **)(param_1 + 0x4a0) = piVar3;
        if (piVar3 == (int *)0x0) {
          *(undefined4 *)(param_1 + 0x4a4) = 0;
        }
        else {
          piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
          *(int **)(param_1 + 0x4a4) = piVar3;
          (**(code **)(*piVar3 + 4))();
        }
      }
      iVar4 = (int)(*(int *)(param_1 + 0x4a0));
      if (iVar4 != *(int *)(param_1 + 0x4a8)) {
        piVar3 = (int *)(*(int **)(param_1 + 0x4ac));
        if (piVar3 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x4a8) = 0;
          *(undefined4 *)(param_1 + 0x4ac) = 0;
          (**(code **)(*piVar3 + 8))();
          iVar4 = (int)(*(int *)(param_1 + 0x4a0));
        }
        *(int *)(param_1 + 0x4a8) = iVar4;
        piVar3 = (int *)(*(int **)(param_1 + 0x4a4));
        *(int **)(param_1 + 0x4ac) = piVar3;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 4))();
          ExceptionList = (void *)(local_10);
          return;
        }
      }
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1040af40; body size 376 bytes.
#line 1 "ENTRY_1040af40"

void __thiscall Recovered_Bulk::FUN_1040af40(int param_2)
{
  int param_1 = (int )this;
  undefined8 uVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155a0f4);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (param_2 == 0) {
    thunk_FUN_1040c790(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  else {
    if (param_2 == 1) {
      iVar5 = (int)(*(int *)(param_1 + 0x4a8));
      uVar1 = (undefined8)(*(undefined8 *)(param_1 + 0x438));
      *(undefined4 *)(iVar5 + 0x44) = 1;
      *(undefined8 *)(iVar5 + 0x38) = uVar1;
      thunk_FUN_1040c3a0();
      ExceptionList = (void *)(local_10);
      return;
    }
    if (param_2 == 3) {
      pvVar3 = (void *)(operator_new(0x48));
      local_8 = (undefined4)(0);
      if (pvVar3 == (void *)0x0) {
        piVar4 = (int *)((int *)0x0);
      }
      else {
        piVar4 = (int *)((int *)thunk_FUN_10407ce0());
      }
      local_8 = (undefined4)(0xffffffff);
      if (piVar4 != *(int **)(param_1 + 0x4a0)) {
        piVar2 = (int *)(*(int **)(param_1 + 0x4a4));
        if (piVar2 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x4a0) = 0;
          *(undefined4 *)(param_1 + 0x4a4) = 0;
          (**(code **)(*piVar2 + 8))();
        }
        *(int **)(param_1 + 0x4a0) = piVar4;
        if (piVar4 == (int *)0x0) {
          *(undefined4 *)(param_1 + 0x4a4) = 0;
        }
        else {
          piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
          *(int **)(param_1 + 0x4a4) = piVar4;
          (**(code **)(*piVar4 + 4))();
        }
      }
      iVar5 = (int)(*(int *)(param_1 + 0x4a0));
      if (iVar5 != *(int *)(param_1 + 0x4a8)) {
        piVar4 = (int *)(*(int **)(param_1 + 0x4ac));
        if (piVar4 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x4a8) = 0;
          *(undefined4 *)(param_1 + 0x4ac) = 0;
          (**(code **)(*piVar4 + 8))();
          iVar5 = (int)(*(int *)(param_1 + 0x4a0));
        }
        *(int *)(param_1 + 0x4a8) = iVar5;
        piVar4 = (int *)(*(int **)(param_1 + 0x4a4));
        *(int **)(param_1 + 0x4ac) = piVar4;
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))();
          ExceptionList = (void *)(local_10);
          return;
        }
      }
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1040b120; body size 78 bytes.
#line 1 "ENTRY_1040b120"

void __thiscall Recovered_Bulk::FUN_1040b120(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155a134);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  switch(param_2) {
  case 0:
    thunk_FUN_1040c790();
    piVar4 = (int *)(*(int **)(param_1 + 0x4a8));
    piVar4[0x11] = 4;
    iVar1 = (int)(piVar4[5]);
    thunk_FUN_10406570(piVar4 + 5,*(undefined4 *)(iVar1 + 4));
    *(int *)(iVar1 + 4) = iVar1;
    *(int *)iVar1 = (int)(iVar1);
    *(int *)(iVar1 + 8) = iVar1;
    piVar4[6] = 0;
    (**(code **)(*piVar4 + 4))();
    uStack_8 = (undefined4)(0);
    (**(code **)(*piVar4 + 8))();
    ExceptionList = (void *)(local_10);
    return;
  case 1:
    thunk_FUN_1040c3a0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    ExceptionList = (void *)(local_10);
    return;
  case 2:
  case 3:
    pvVar3 = (void *)(operator_new(0x48));
    uStack_8 = (undefined4)(1);
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_10407ce0());
    }
    uStack_8 = (undefined4)(0xffffffff);
    if (piVar4 != *(int **)(param_1 + 0x4a8)) {
      piVar2 = (int *)(*(int **)(param_1 + 0x4ac));
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x4a8) = 0;
        *(undefined4 *)(param_1 + 0x4ac) = 0;
        (**(code **)(*piVar2 + 8))();
      }
      *(int **)(param_1 + 0x4a8) = piVar4;
      if (piVar4 != (int *)0x0) {
        piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
        *(int **)(param_1 + 0x4ac) = piVar4;
        (**(code **)(*piVar4 + 4))();
        ExceptionList = (void *)(local_10);
        return;
      }
      *(undefined4 *)(param_1 + 0x4ac) = 0;
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1040b6e0; body size 64 bytes.
#line 1 "ENTRY_1040b6e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1040b6e0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  param_1[0x11] = 4;
  iVar1 = (int)(param_1[5]);
  thunk_FUN_10406570(param_1 + 5,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = (int)(iVar1);
  *(int *)(iVar1 + 8) = iVar1;
  param_1[6] = 0;
  *param_2 = (undefined4)(param_1);
  (**(code **)(*param_1 + 4))();
  return (undefined4 *)(param_2);
}


// Reference entry 1040be20; body size 306 bytes.
#line 1 "ENTRY_1040be20"

int * __thiscall Recovered_Bulk::FUN_1040be20(int *param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155a314);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar3 = (void *)(operator_new(0x48));
  local_8 = (undefined4)(0);
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)thunk_FUN_10407ce0(uVar2));
  }
  local_8 = (undefined4)(0xffffffff);
  if (piVar4 != *(int **)(param_1 + 0x4a0)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x4a4));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x4a0) = 0;
      *(undefined4 *)(param_1 + 0x4a4) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x4a0) = piVar4;
    if (piVar4 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x4a4) = 0;
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      *(int **)(param_1 + 0x4a4) = piVar4;
      (**(code **)(*piVar4 + 4))();
    }
  }
  iVar5 = (int)(*(int *)(param_1 + 0x4a0));
  if (iVar5 != *(int *)(param_1 + 0x4a8)) {
    piVar4 = (int *)(*(int **)(param_1 + 0x4ac));
    if (piVar4 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x4a8) = 0;
      *(undefined4 *)(param_1 + 0x4ac) = 0;
      (**(code **)(*piVar4 + 8))();
      iVar5 = (int)(*(int *)(param_1 + 0x4a0));
    }
    *(int *)(param_1 + 0x4a8) = iVar5;
    piVar4 = (int *)(*(int **)(param_1 + 0x4a4));
    *(int **)(param_1 + 0x4ac) = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
  }
  thunk_FUN_112c35f0(param_1,param_3,param_4);
  piVar4 = (int *)(*(int **)(param_1 + 0x4a0));
  *param_2 = (int)((int)piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 1040bfe0; body size 364 bytes.
#line 1 "ENTRY_1040bfe0"

void FUN_1040bfe0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *local_504;
  int *local_500;
  int *local_4fc;
  int *local_4f8;
  void *local_4f4;
  undefined1 *puStack_4f0;
  undefined4 local_4ec;
  undefined1 local_4e8 [1248];
  uint local_8;
  
  local_4ec = (undefined4)(0xffffffff);
  puStack_4f0 = (undefined1 *)(LAB_1155a36d);
  local_4f4 = (void *)(ExceptionList);
  local_8 = (uint)(DAT_12126b84 ^ (uint)local_4e8);
  ExceptionList = (void *)(&local_4f4);
  local_4f8 = (int *)((int *)((uint)((int3)((uint)param_1 >> 8)) << 8 | (uint)(param_4)));
  thunk_FUN_10407800(local_8);
  local_4ec = (undefined4)(0);
  piVar2 = (int *)((int *)thunk_FUN_1040be20(&local_504,param_2,param_3));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_4ec + 0) = 1;
  *piVar2 = (int)(0);
  piVar2 = (int *)(piVar1);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_4ec + 0) = 4;
  piVar5 = (int *)(piVar3);
  if (local_504 != (int *)0x0) {
    (**(code **)(*local_504 + 8))();
  }
  local_4ec = (undefined4)(((uint)(*(unsigned short *)((char *)&local_4ec + 1)) << 8 | (uint)(5)));
  thunk_FUN_104083e0();
  if (piVar1[0x11] == 4) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar1,piVar3,local_4f8);
    }
    uVar4 = (undefined4)(thunk_FUN_1040d410(&local_500));
    *(unsigned char *)((char *)&local_4ec + 0) = 6;
    thunk_FUN_101aa9f0(uVar4);
    *(unsigned char *)((char *)&local_4ec + 0) = 9;
    if (local_500 != (int *)0x0) {
      (**(code **)(*local_500 + 8))();
    }
    *(unsigned char *)((char *)&local_4ec + 0) = 8;
    *param_1 = (undefined4)(local_4fc);
    if (local_4fc != (int *)0x0) {
      (**(code **)(*local_4fc + 4))();
    }
    local_4ec = (undefined4)(((uint)(*(unsigned short *)((char *)&local_4ec + 1)) << 8 | (uint)(10)));
    if (local_4f8 != (int *)0x0) {
      (**(code **)(*local_4f8 + 8))();
    }
    local_4ec = (undefined4)(0xb);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
  }
  else {
    *param_1 = (undefined4)(0);
    local_4ec = (undefined4)(0xc);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
  }
  ExceptionList = (void *)(local_4f4);
  thunk_FUN_1148ac28(piVar2,piVar5);
  return;
}


// Reference entry 1040c1b0; body size 352 bytes.
#line 1 "ENTRY_1040c1b0"

void FUN_1040c1b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *local_500;
  int *local_4fc;
  int *local_4f8;
  void *local_4f4;
  undefined1 *puStack_4f0;
  undefined4 local_4ec;
  undefined1 local_4e8 [1248];
  uint local_8;
  
  local_4ec = (undefined4)(0xffffffff);
  puStack_4f0 = (undefined1 *)(LAB_1155a3dd);
  local_4f4 = (void *)(ExceptionList);
  local_8 = (uint)(DAT_12126b84 ^ (uint)local_4e8);
  ExceptionList = (void *)(&local_4f4);
  local_4f8 = (int *)(param_1);
  thunk_FUN_10407800(local_8);
  local_4ec = (undefined4)(0);
  piVar2 = (int *)((int *)thunk_FUN_1040be20(&local_4f8,param_2,param_3));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_4ec + 0) = 1;
  *piVar2 = (int)(0);
  piVar2 = (int *)(piVar1);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_4ec + 0) = 4;
  piVar5 = (int *)(piVar3);
  if (local_4f8 != (int *)0x0) {
    (**(code **)(*local_4f8 + 8))();
  }
  local_4ec = (undefined4)(((uint)(*(unsigned short *)((char *)&local_4ec + 1)) << 8 | (uint)(5)));
  thunk_FUN_104083e0();
  if (piVar1[0x11] == 5) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar1,piVar3);
    }
    uVar4 = (undefined4)(thunk_FUN_1040cd70(&local_500));
    *(unsigned char *)((char *)&local_4ec + 0) = 6;
    thunk_FUN_101ccb50(uVar4);
    *(unsigned char *)((char *)&local_4ec + 0) = 9;
    if (local_500 != (int *)0x0) {
      (**(code **)(*local_500 + 8))();
    }
    *(unsigned char *)((char *)&local_4ec + 0) = 8;
    *param_1 = (int)((int)local_4fc);
    if (local_4fc != (int *)0x0) {
      (**(code **)(*local_4fc + 4))();
    }
    local_4ec = (undefined4)(((uint)(*(unsigned short *)((char *)&local_4ec + 1)) << 8 | (uint)(10)));
    if (local_4f8 != (int *)0x0) {
      (**(code **)(*local_4f8 + 8))();
    }
    local_4ec = (undefined4)(0xb);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
  }
  else {
    *param_1 = (int)(0);
    local_4ec = (undefined4)(0xc);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
  }
  ExceptionList = (void *)(local_4f4);
  thunk_FUN_1148ac28(piVar2,piVar5);
  return;
}


// Reference entry 1040c3a0; body size 259 bytes.
#line 1 "ENTRY_1040c3a0"

void __fastcall FUN_1040c3a0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155a42d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x4c0) != 0) {
    uVar1 = (uint)((*(int *)(param_1 + 0x4c0) + *(int *)(param_1 + 0x4bc)) - 1);
    uVar5 = (uint)(uVar1 & 1);
    iVar2 = (int)(*(int *)(*(int *)(param_1 + 0x4b4) + (*(int *)(param_1 + 0x4b8) - 1U & uVar1 >> 1) * 4));
    piVar3 = (int *)(*(int **)(iVar2 + 4 + uVar5 * 8));
    iVar2 = (int)(*(int *)(iVar2 + uVar5 * 8));
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    }
    local_8 = (undefined4)(0);
    if ((iVar2 != 0) && ((*(int *)(iVar2 + 0x44) == 5 || (*(int *)(iVar2 + 0x44) == 4)))) {
      if (iVar2 != *(int *)(param_1 + 0x4a8)) {
        piVar4 = (int *)(*(int **)(param_1 + 0x4ac));
        if (piVar4 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x4a8) = 0;
          *(undefined4 *)(param_1 + 0x4ac) = 0;
          (**(code **)(*piVar4 + 8))();
        }
        *(int *)(param_1 + 0x4a8) = iVar2;
        *(int **)(param_1 + 0x4ac) = piVar3;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 4))();
        }
      }
      thunk_FUN_1040c4f0();
    }
    local_8 = (undefined4)(1);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1040c4f0; body size 136 bytes.
#line 1 "ENTRY_1040c4f0"

void __fastcall FUN_1040c4f0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155a460);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar4 = (int)(*(int *)(param_1 + 0x10));
  uVar5 = (uint)(*(int *)(param_1 + 0xc) + -1 + iVar4);
  uVar6 = (uint)(uVar5 & 1);
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) - 1U & uVar5 >> 1) * 4));
  piVar2 = (int *)(*(int **)(iVar1 + 4 + uVar6 * 8));
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    *(undefined4 *)(iVar1 + uVar6 * 8) = 0;
    *(undefined4 *)(iVar1 + 4 + uVar6 * 8) = 0;
    (**(code **)(*piVar2 + 8))(uVar3);
    iVar4 = (int)(*(int *)(param_1 + 0x10));
  }
  *(int *)(param_1 + 0x10) = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1040f7e0; body size 91 bytes.
#line 1 "ENTRY_1040f7e0"

int * __thiscall Recovered_Bulk::FUN_1040f7e0(int *param_2)
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
    return (int *)(param_1);
  }
  param_1[1] = 0;
  return (int *)(param_1);
}


// Reference entry 10410930; body size 95 bytes.
#line 1 "ENTRY_10410930"

void FUN_10410930(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10411310; body size 87 bytes.
#line 1 "ENTRY_10411310"

int __thiscall Recovered_Bulk::FUN_10411310(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)((int *)param_2[9]);
  if (piVar1 != (int *)0x0) {
    if (piVar1 == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1));
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)((int *)param_2[9]);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_2));
        param_2[9] = 0;
        return (int)(param_1);
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return (int)(param_1);
}


// Reference entry 10411380; body size 93 bytes.
#line 1 "ENTRY_10411380"

int __thiscall Recovered_Bulk::FUN_10411380(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155af2d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10411400; body size 93 bytes.
#line 1 "ENTRY_10411400"

int __thiscall Recovered_Bulk::FUN_10411400(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155af6d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10411810; body size 236 bytes.
#line 1 "ENTRY_10411810"

int __fastcall FUN_10411810(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155b0b0);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl);
  iVar5 = (int)(thunk_FUN_101dcfc0(&local_18));
  if (local_18 != 0) {
    iVar5 = (int)(thunk_FUN_103d6930(param_1[2]));
  }
  if (local_14 != (int *)0x0) {
    LOCK();
    piVar3 = (int *)(local_14 + 1);
    iVar2 = (int)(*piVar3);
    iVar5 = (int)(*piVar3);
    *piVar3 = (int)(iVar2 + -1);
    UNLOCK();
    if (iVar2 + -1 == 0) {
      (**(code **)*local_14)(uVar4);
      LOCK();
      piVar3 = (int *)(local_14 + 2);
      iVar2 = (int)(*piVar3);
      iVar5 = (int)(*piVar3);
      *piVar3 = (int)(iVar2 + -1);
      UNLOCK();
      if (iVar2 + -1 == 0) {
        iVar5 = (int)((**(code **)(*local_14 + 4))());
      }
    }
  }
  piVar3 = (int *)((int *)param_1[0xf]);
  if (piVar3 != (int *)0x0) {
    iVar5 = (int)((**(code **)(*piVar3 + 0x10))(piVar3 != (int *)(param_1) + 6));
    param_1[0xf] = 0;
  }
  piVar3 = (int *)((int *)param_1[5]);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar3 + 2);
    iVar2 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (iVar2 == 1) {
      iVar5 = (int)((**(code **)(*piVar3 + 4))());
    }
  }
  piVar3 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar3 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    iVar5 = (int)((**(code **)(*piVar3 + 8))());
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return (int)(iVar5);
}


// Reference entry 10411960; body size 76 bytes.
#line 1 "ENTRY_10411960"

void __fastcall FUN_10411960(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155b0e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10411ab0; body size 99 bytes.
#line 1 "ENTRY_10411ab0"

void __fastcall FUN_10411ab0(int param_1)

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
  thunk_FUN_1040fe70(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x14);
  return;
}


// Reference entry 10411b30; body size 77 bytes.
#line 1 "ENTRY_10411b30"

void __fastcall FUN_10411b30(int *param_1)

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
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// Reference entry 10411dc0; body size 184 bytes.
#line 1 "ENTRY_10411dc0"

void __fastcall FUN_10411dc0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155b1a0);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFeatureManager);
  param_1[2] = (uint)&ghidra_vftable_SCFeatureManager;
  thunk_FUN_10411ab0(uVar4);
  piVar2 = (int *)((int *)param_1[0xb]);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar3 = (int)(piVar2[1] + -1);
    piVar2[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = (int *)(piVar2 + 2);
      iVar3 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  thunk_FUN_1022de20();
  piVar2 = (int *)((int *)param_1[6]);
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCSwfObjSysListener;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10411ed0; body size 72 bytes.
#line 1 "ENTRY_10411ed0"

void __fastcall FUN_10411ed0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 4));
    local_4 = (int *)(param_1);
    thunk_FUN_1040fe70(piVar1,*(undefined4 *)(iVar2 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    local_4 = (int *)((int *)*piVar1);
    thunk_FUN_10410930(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),&local_4);
  }
  return;
}


// Reference entry 10412190; body size 261 bytes.
#line 1 "ENTRY_10412190"

undefined4 * __thiscall Recovered_Bulk::FUN_10412190(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155b1d0);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl);
  thunk_FUN_101dcfc0(&local_18);
  if (local_18 != 0) {
    thunk_FUN_103d6930(param_1[2]);
  }
  if (local_14 != (int *)0x0) {
    LOCK();
    iVar3 = (int)(local_14[1] + -1);
    local_14[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*local_14)(uVar4);
      LOCK();
      iVar3 = (int)(local_14[2] + -1);
      local_14[2] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)(*local_14 + 4))();
      }
    }
  }
  piVar2 = (int *)((int *)param_1[0xf]);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  piVar2 = (int *)((int *)param_1[5]);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar2 + 2);
    iVar3 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  piVar2 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (piVar2 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 104124d0; body size 205 bytes.
#line 1 "ENTRY_104124d0"

undefined4 * __thiscall Recovered_Bulk::FUN_104124d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155b260);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFeatureManager);
  param_1[2] = (uint)&ghidra_vftable_SCFeatureManager;
  thunk_FUN_10411ab0(uVar4);
  piVar2 = (int *)((int *)param_1[0xb]);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar3 = (int)(piVar2[1] + -1);
    piVar2[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = (int *)(piVar2 + 2);
      iVar3 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  thunk_FUN_1022de20();
  piVar2 = (int *)((int *)param_1[6]);
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCSwfObjSysListener;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 104127f0; body size 104 bytes.
#line 1 "ENTRY_104127f0"

void __thiscall Recovered_Bulk::FUN_104127f0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10225d70(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar3 = (uint)(param_1[2] - iVar1 & 0xfffffff8);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
  }
  *param_1 = (int)(param_2);
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}


// Reference entry 10412aa0; body size 136 bytes.
#line 1 "ENTRY_10412aa0"

float __thiscall Recovered_Bulk::FUN_10412aa0(int param_2)
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


// Reference entry 10412f60; body size 87 bytes.
#line 1 "ENTRY_10412f60"

void __thiscall Recovered_Bulk::FUN_10412f60(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 10413020; body size 133 bytes.
#line 1 "ENTRY_10413020"

void __fastcall FUN_10413020(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10412bd0();
  return;
}


// Reference entry 10413200; body size 77 bytes.
#line 1 "ENTRY_10413200"

void __fastcall FUN_10413200(int *param_1)

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
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// Reference entry 10413900; body size 209 bytes.
#line 1 "ENTRY_10413900"

undefined4 * FUN_10413900(undefined4 *param_1)

{
  uint uVar1;
  SCLibrary *pSVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155b676);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar5 = (int *)((int *)0x0);
  if (pSVar2 != (SCLibrary *)0x0) {
    piVar5 = (int *)((int *)(**(code **)(*(int *)pSVar2 + 0xc))(uVar1));
    (**(code **)(*piVar5 + 4))();
  }
  local_8 = (undefined4)(0);
  if (pSVar2 == (SCLibrary *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*(int *)pSVar2 + 0x88))(&local_18));
    piVar4 = (int *)((int *)*puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    local_14 = (undefined4)(1);
  }
  *param_1 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  if (pSVar2 != (SCLibrary *)0x0) {
    local_8 = (undefined4)(2);
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  local_8 = (undefined4)(3);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10413a80; body size 120 bytes.
#line 1 "ENTRY_10413a80"

void FUN_10413a80(undefined4 *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  char local_24 [32];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_24);
  local_24[0] = '\0';
  local_24[1] = '\0';
  local_24[2] = '\0';
  local_24[3] = '\0';
  local_24[4] = '\0';
  local_24[5] = '\0';
  local_24[6] = '\0';
  local_24[7] = '\0';
  local_24[8] = '\0';
  local_24[9] = '\0';
  local_24[10] = '\0';
  local_24[0xb] = '\0';
  local_24[0xc] = '\0';
  local_24[0xd] = '\0';
  local_24[0xe] = '\0';
  local_24[0xf] = '\0';
  local_24[0x10] = '\0';
  local_24[0x11] = '\0';
  local_24[0x12] = '\0';
  local_24[0x13] = '\0';
  local_24[0x14] = '\0';
  local_24[0x15] = '\0';
  local_24[0x16] = '\0';
  local_24[0x17] = '\0';
  local_24[0x18] = '\0';
  local_24[0x19] = '\0';
  local_24[0x1a] = '\0';
  local_24[0x1b] = '\0';
  local_24[0x1c] = '\0';
  local_24[0x1d] = '\0';
  local_24[0x1e] = '\0';
  local_24[0x1f] = '\0';
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_1);
  }
  cVar1 = (char)(thunk_FUN_1109f0a0(puVar2,local_24,0x20));
  if ((cVar1 != '\0') && (local_24[0] != '\0')) {
    atoi(local_24);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 104152b0; body size 100 bytes.
#line 1 "ENTRY_104152b0"

void __fastcall FUN_104152b0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x18));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  puVar2 = (undefined4 *)((undefined4 *)(param_1 + 0x1c));
  thunk_FUN_10225d70(*puVar2,*(undefined4 *)(param_1 + 0x20),puVar2);
  *(undefined4 *)(param_1 + 0x20) = *puVar2;
  puVar2 = (undefined4 *)((undefined4 *)0x0);
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_10d87f10();
    puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x10));
  }
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  return;
}


// Reference entry 10415f70; body size 91 bytes.
#line 1 "ENTRY_10415f70"

int * __thiscall Recovered_Bulk::FUN_10415f70(int *param_2)
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
    return (int *)(param_1);
  }
  param_1[1] = 0;
  return (int *)(param_1);
}


// Reference entry 104167f0; body size 76 bytes.
#line 1 "ENTRY_104167f0"

void __fastcall FUN_104167f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155bf10);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10416860; body size 76 bytes.
#line 1 "ENTRY_10416860"

void __fastcall FUN_10416860(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155bf40);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 104168d0; body size 76 bytes.
#line 1 "ENTRY_104168d0"

void __fastcall FUN_104168d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155bf70);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10416f00; body size 81 bytes.
#line 1 "ENTRY_10416f00"

int * __thiscall Recovered_Bulk::FUN_10416f00(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10416f70; body size 81 bytes.
#line 1 "ENTRY_10416f70"

int * __thiscall Recovered_Bulk::FUN_10416f70(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10417040; body size 81 bytes.
#line 1 "ENTRY_10417040"

int * __thiscall Recovered_Bulk::FUN_10417040(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 104170b0; body size 81 bytes.
#line 1 "ENTRY_104170b0"

int * __thiscall Recovered_Bulk::FUN_104170b0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 104175e0; body size 291 bytes.
#line 1 "ENTRY_104175e0"

undefined4 *
FUN_104175e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,uint param_6)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155c37f);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uVar5 = (uint)(param_6 | 4);
  if (param_5 == (int *)0x0) {
    uVar5 = (uint)(param_6);
  }
  pvVar2 = (void *)(operator_new(0x128));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10416370(param_2,param_3,param_4,0xd,uVar5));
  }
  piVar6 = (int *)((int *)0x0);
  local_8 = (undefined4)(0xffffffff);
  if (piVar3 != (int *)0x0) {
    piVar6 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
    (**(code **)(*piVar6 + 4))();
  }
  local_8 = (undefined4)(1);
  if (param_5 != (int *)piVar3[0x32]) {
    piVar4 = (int *)((int *)piVar3[0x33]);
    if (piVar4 != (int *)0x0) {
      piVar3[0x32] = 0;
      piVar3[0x33] = 0;
      (**(code **)(*piVar4 + 8))();
    }
    piVar3[0x32] = (int)param_5;
    if (param_5 == (int *)0x0) {
      piVar3[0x33] = 0;
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*param_5 + 0xc))());
      piVar3[0x33] = (int)piVar4;
      (**(code **)(*piVar4 + 4))();
    }
  }
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(2);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10417750; body size 128 bytes.
#line 1 "ENTRY_10417750"

undefined4 *
FUN_10417750(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155c3c7);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x128));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10416370(param_2,param_3,param_4,0,0));
  }
  local_8 = (undefined4)(0xffffffff);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10417de0; body size 264 bytes.
#line 1 "ENTRY_10417de0"

undefined4 *
FUN_10417de0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,uint param_6)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155c59f);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x128));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10416370(param_2,param_3,param_4,4,param_6 | 4));
  }
  piVar5 = (int *)((int *)0x0);
  local_8 = (undefined4)(0xffffffff);
  if (piVar3 != (int *)0x0) {
    piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
    (**(code **)(*piVar5 + 4))();
  }
  local_8 = (undefined4)(1);
  if (param_5 != (int *)piVar3[0x15]) {
    piVar4 = (int *)((int *)piVar3[0x16]);
    if (piVar4 != (int *)0x0) {
      piVar3[0x15] = 0;
      piVar3[0x16] = 0;
      (**(code **)(*piVar4 + 8))();
    }
    piVar3[0x15] = (int)param_5;
    if (param_5 == (int *)0x0) {
      piVar3[0x16] = 0;
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*param_5 + 0xc))());
      piVar3[0x16] = (int)piVar4;
      (**(code **)(*piVar4 + 4))();
    }
  }
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(2);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10417f30; body size 199 bytes.
#line 1 "ENTRY_10417f30"

undefined4 *
FUN_10417f30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,uint param_6)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155c5ef);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x128));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10416370(param_2,param_3,param_4,2,param_6 | 4));
  }
  piVar4 = (int *)((int *)0x0);
  local_8 = (undefined4)(0xffffffff);
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
    (**(code **)(*piVar4 + 4))();
  }
  *(undefined1 *)(piVar3 + 0x17) = param_5;
  local_8 = (undefined4)(1);
  *param_1 = (undefined4)(piVar3);
  (**(code **)(*piVar3 + 4))();
  local_8 = (undefined4)(2);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10418030; body size 192 bytes.
#line 1 "ENTRY_10418030"

undefined4 *
FUN_10418030(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155c63f);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x128));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10416370(param_2,param_3,param_4,0xb,0));
  }
  piVar4 = (int *)((int *)0x0);
  local_8 = (undefined4)(0xffffffff);
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = (undefined4)(1);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(2);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10418120; body size 199 bytes.
#line 1 "ENTRY_10418120"

undefined4 *
FUN_10418120(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,uint param_6)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155c68f);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x128));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10416370(param_2,param_3,param_4,1,param_6 | 4));
  }
  piVar4 = (int *)((int *)0x0);
  local_8 = (undefined4)(0xffffffff);
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
    (**(code **)(*piVar4 + 4))();
  }
  *(undefined1 *)(piVar3 + 0x17) = param_5;
  local_8 = (undefined4)(1);
  *param_1 = (undefined4)(piVar3);
  (**(code **)(*piVar3 + 4))();
  local_8 = (undefined4)(2);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10418650; body size 264 bytes.
#line 1 "ENTRY_10418650"

undefined4 *
FUN_10418650(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,uint param_6)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155c7df);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x128));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10416370(param_2,param_3,param_4,3,param_6 | 4));
  }
  piVar5 = (int *)((int *)0x0);
  local_8 = (undefined4)(0xffffffff);
  if (piVar3 != (int *)0x0) {
    piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
    (**(code **)(*piVar5 + 4))();
  }
  local_8 = (undefined4)(1);
  if (param_5 != (int *)piVar3[0x15]) {
    piVar4 = (int *)((int *)piVar3[0x16]);
    if (piVar4 != (int *)0x0) {
      piVar3[0x15] = 0;
      piVar3[0x16] = 0;
      (**(code **)(*piVar4 + 8))();
    }
    piVar3[0x15] = (int)param_5;
    if (param_5 == (int *)0x0) {
      piVar3[0x16] = 0;
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*param_5 + 0xc))());
      piVar3[0x16] = (int)piVar4;
      (**(code **)(*piVar4 + 4))();
    }
  }
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(2);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10418ec0; body size 291 bytes.
#line 1 "ENTRY_10418ec0"

undefined4 *
FUN_10418ec0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,uint param_6)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155c98f);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uVar5 = (uint)(param_6 | 4);
  if (param_5 == (int *)0x0) {
    uVar5 = (uint)(param_6);
  }
  pvVar2 = (void *)(operator_new(0x128));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10416370(param_2,param_3,param_4,0,uVar5));
  }
  piVar6 = (int *)((int *)0x0);
  local_8 = (undefined4)(0xffffffff);
  if (piVar3 != (int *)0x0) {
    piVar6 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
    (**(code **)(*piVar6 + 4))();
  }
  local_8 = (undefined4)(1);
  if (param_5 != (int *)piVar3[0x32]) {
    piVar4 = (int *)((int *)piVar3[0x33]);
    if (piVar4 != (int *)0x0) {
      piVar3[0x32] = 0;
      piVar3[0x33] = 0;
      (**(code **)(*piVar4 + 8))();
    }
    piVar3[0x32] = (int)param_5;
    if (param_5 == (int *)0x0) {
      piVar3[0x33] = 0;
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*param_5 + 0xc))());
      piVar3[0x33] = (int)piVar4;
      (**(code **)(*piVar4 + 4))();
    }
  }
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(2);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 104193f0; body size 285 bytes.
#line 1 "ENTRY_104193f0"

undefined4 *
FUN_104193f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,uint param_6)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155cacf);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x128));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10416370(param_2,param_3,param_4,0,param_6 | 4));
  }
  piVar5 = (int *)((int *)0x0);
  local_8 = (undefined4)(0xffffffff);
  if (piVar3 != (int *)0x0) {
    piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
    (**(code **)(*piVar5 + 4))();
  }
  local_8 = (undefined4)(1);
  if (param_5 != (int *)piVar3[0x38]) {
    piVar4 = (int *)((int *)piVar3[0x39]);
    if (piVar4 != (int *)0x0) {
      piVar3[0x38] = 0;
      piVar3[0x39] = 0;
      (**(code **)(*piVar4 + 8))();
    }
    piVar3[0x38] = (int)param_5;
    if (param_5 == (int *)0x0) {
      piVar3[0x39] = 0;
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*param_5 + 0xc))());
      piVar3[0x39] = (int)piVar4;
      (**(code **)(*piVar4 + 4))();
    }
  }
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(2);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10419560; body size 204 bytes.
#line 1 "ENTRY_10419560"

undefined4 *
FUN_10419560(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155cb1f);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x128));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10416370(param_2,param_3,param_4,0,param_6));
  }
  piVar4 = (int *)((int *)0x0);
  local_8 = (undefined4)(0xffffffff);
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = (undefined4)(1);
  thunk_FUN_10124b40(param_5);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(2);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10419660; body size 260 bytes.
#line 1 "ENTRY_10419660"

undefined4 *
FUN_10419660(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,undefined4 param_6)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155cb6f);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x128));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10416370(param_2,param_3,param_4,0,param_6));
  }
  piVar5 = (int *)((int *)0x0);
  local_8 = (undefined4)(0xffffffff);
  if (piVar3 != (int *)0x0) {
    piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
    (**(code **)(*piVar5 + 4))();
  }
  local_8 = (undefined4)(1);
  if (param_5 != (int *)piVar3[0x18]) {
    piVar4 = (int *)((int *)piVar3[0x19]);
    if (piVar4 != (int *)0x0) {
      piVar3[0x18] = 0;
      piVar3[0x19] = 0;
      (**(code **)(*piVar4 + 8))();
    }
    piVar3[0x18] = (int)param_5;
    if (param_5 == (int *)0x0) {
      piVar3[0x19] = 0;
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*param_5 + 0xc))());
      piVar3[0x19] = (int)piVar4;
      (**(code **)(*piVar4 + 4))();
    }
  }
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(2);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1041c840; body size 303 bytes.
#line 1 "ENTRY_1041c840"

undefined4 * __thiscall Recovered_Bulk::FUN_1041c840(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155d725);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)thunk_FUN_10292cf0(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(0);
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    if (*(int *)(param_1 + 0x118) != -1) {
      (**(code **)(*piVar1 + 0x1c))(param_2,*(int *)(param_1 + 0x118));
      local_8 = (undefined4)(4);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))();
      }
      ExceptionList = (void *)(local_10);
      return (undefined4 *)(param_2);
    }
    if (*(int *)(param_1 + 0x100) != 0) {
      puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_102909a0(&local_18,param_1 + 0xf8));
      *param_2 = (undefined4)(0);
      uVar2 = (undefined4)(*puVar4);
      *puVar4 = (undefined4)(0);
      *param_2 = (undefined4)(uVar2);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 8))();
      }
      local_8 = (undefined4)(6);
      goto LAB_1041c94e;
    }
  }
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(7);
LAB_1041c94e:
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 1041cb80; body size 99 bytes.
#line 1 "ENTRY_1041cb80"

undefined1 __fastcall FUN_1041cb80(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(thunk_FUN_101f08d0());
  if (((((((uVar1 & 8) == 0) || ((*(byte *)(param_1 + 0x3c) & 8) == 0)) &&
        (((uVar1 & 0x10) == 0 || ((*(byte *)(param_1 + 0x3c) & 0x10) == 0)))) &&
       (((uVar1 & 4) == 0 || ((*(byte *)(param_1 + 0x3c) & 4) == 0)))) &&
      (((uVar1 & 0x40) == 0 || ((*(byte *)(param_1 + 0x3c) & 0x40) == 0)))) &&
     ((((-1 < (char)uVar1 || ((*(byte *)(param_1 + 0x3c) & 0x80) == 0)) &&
       (((uVar1 & 0x100) == 0 || ((*(uint *)(param_1 + 0x3c) & 0x100) == 0)))) &&
      (((uVar1 & 0x200) == 0 || ((*(uint *)(param_1 + 0x3c) & 0x200) == 0)))))) {
    return (undefined1)(*(undefined1 *)(param_1 + 0x50));
  }
  return (undefined1)(0);
}


// Reference entry 1041cfb0; body size 101 bytes.
#line 1 "ENTRY_1041cfb0"

void __thiscall Recovered_Bulk::FUN_1041cfb0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0xd8)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xdc));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xdc) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0xd8) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0xdc) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  return;
}


// Reference entry 1041d230; body size 101 bytes.
#line 1 "ENTRY_1041d230"

void __thiscall Recovered_Bulk::FUN_1041d230(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0xd0)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xd4));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xd0) = 0;
      *(undefined4 *)(param_1 + 0xd4) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0xd0) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0xd4) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  return;
}


// Reference entry 1041d2c0; body size 101 bytes.
#line 1 "ENTRY_1041d2c0"

void __thiscall Recovered_Bulk::FUN_1041d2c0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0xe8)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xec));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(undefined4 *)(param_1 + 0xec) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0xe8) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0xec) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  return;
}


// Reference entry 1041d3a0; body size 181 bytes.
#line 1 "ENTRY_1041d3a0"

void __thiscall Recovered_Bulk::FUN_1041d3a0(int param_2,int param_3,undefined1 param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(operator_new(0x14));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = param_2;
    piVar2[3] = param_3;
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCRequireTokenActionDescriptor);
    *(undefined1 *)(piVar2 + 4) = param_4;
  }
  if (piVar2 != *(int **)(param_1 + 0xc0)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xc4));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0xc4) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0xc0) = piVar2;
    if (piVar2 != (int *)0x0) {
      if (*(code **)(*piVar2 + 0xc) != thunk_FUN_101da390) {
        piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
      }
      *(int **)(param_1 + 0xc4) = piVar2;
      (**(code **)(*piVar2 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  return;
}


// Reference entry 1041d490; body size 101 bytes.
#line 1 "ENTRY_1041d490"

void __thiscall Recovered_Bulk::FUN_1041d490(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 200)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xcc));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xcc) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 200) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0xcc) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  return;
}


// Reference entry 1041d5a0; body size 112 bytes.
#line 1 "ENTRY_1041d5a0"

void __thiscall Recovered_Bulk::FUN_1041d5a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155d89d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if ((undefined4 *)(param_1 + 0xf8) != param_2) {
    *(undefined4 *)(param_1 + 0xf8) = *param_2;
    local_8 = (undefined4)(0);
    thunk_FUN_10272300(*(undefined4 *)param_2[1],(undefined4 *)param_2[1]);
    uVar1 = (undefined4)(thunk_FUN_10129a20(*(undefined4 *)(param_1 + 0x100)));
    thunk_FUN_10129af0(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1041e050; body size 92 bytes.
#line 1 "ENTRY_1041e050"

int * FUN_1041e050(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (int *)(param_2)) {
    return (int *)(param_3);
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
  return (int *)(param_3);
}


// Reference entry 1041eff0; body size 93 bytes.
#line 1 "ENTRY_1041eff0"

int __thiscall Recovered_Bulk::FUN_1041eff0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155dc3d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 1041f070; body size 93 bytes.
#line 1 "ENTRY_1041f070"

int __thiscall Recovered_Bulk::FUN_1041f070(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155dc7d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 1041f0f0; body size 93 bytes.
#line 1 "ENTRY_1041f0f0"

int __thiscall Recovered_Bulk::FUN_1041f0f0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155dcbd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 1041f170; body size 93 bytes.
#line 1 "ENTRY_1041f170"

int __thiscall Recovered_Bulk::FUN_1041f170(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155dcfd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 1041f210; body size 108 bytes.
#line 1 "ENTRY_1041f210"

undefined4 * __thiscall Recovered_Bulk::FUN_1041f210(undefined1 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = param_2;
  *(undefined2 *)(param_1 + 4) = 0x100;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCChangeEmailWizardActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 1041f950; body size 76 bytes.
#line 1 "ENTRY_1041f950"

void __fastcall FUN_1041f950(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155df00);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1041f9c0; body size 76 bytes.
#line 1 "ENTRY_1041f9c0"

void __fastcall FUN_1041f9c0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155df30);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1041fa30; body size 76 bytes.
#line 1 "ENTRY_1041fa30"

void __fastcall FUN_1041fa30(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155df60);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1041faa0; body size 76 bytes.
#line 1 "ENTRY_1041faa0"

void __fastcall FUN_1041faa0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155df90);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1041fc90; body size 110 bytes.
#line 1 "ENTRY_1041fc90"

void __fastcall FUN_1041fc90(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155dfc0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardActionDescriptorBase);
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1041fd40; body size 235 bytes.
#line 1 "ENTRY_1041fd40"

void __fastcall FUN_1041fd40(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155dff0);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuAccount);
  param_1[2] = (uint)&ghidra_vftable_SCSettingsMenuAccount;
  param_1[10] = (uint)&ghidra_vftable_SCSettingsMenuAccount;
  iVar1 = (int)(param_1[0x29]);
  if (iVar1 != 0) {
    uVar5 = (uint)((param_1[0x2b] - iVar1 >> 2) * 4);
    iVar4 = (int)(iVar1);
    if (0xfff < uVar5) {
      iVar4 = (int)(*(int *)(iVar1 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar1 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar5,uVar3);
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
  }
  piVar2 = (int *)((int *)param_1[0x28]);
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_1022de20();
  thunk_FUN_101eb2b0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10421ea0; body size 83 bytes.
#line 1 "ENTRY_10421ea0"

undefined4 * __thiscall Recovered_Bulk::FUN_10421ea0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  thunk_FUN_105a85f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10421f10; body size 83 bytes.
#line 1 "ENTRY_10421f10"

undefined4 * __thiscall Recovered_Bulk::FUN_10421f10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  thunk_FUN_105a85f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10421f80; body size 83 bytes.
#line 1 "ENTRY_10421f80"

undefined4 * __thiscall Recovered_Bulk::FUN_10421f80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  thunk_FUN_105a85f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10421ff0; body size 83 bytes.
#line 1 "ENTRY_10421ff0"

undefined4 * __thiscall Recovered_Bulk::FUN_10421ff0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  thunk_FUN_105a85f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10422060; body size 131 bytes.
#line 1 "ENTRY_10422060"

undefined4 * __thiscall Recovered_Bulk::FUN_10422060(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155e5d0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardActionDescriptorBase);
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10422150; body size 263 bytes.
#line 1 "ENTRY_10422150"

undefined4 * __thiscall Recovered_Bulk::FUN_10422150(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155e600);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuAccount);
  param_1[2] = (uint)&ghidra_vftable_SCSettingsMenuAccount;
  param_1[10] = (uint)&ghidra_vftable_SCSettingsMenuAccount;
  iVar1 = (int)(param_1[0x29]);
  if (iVar1 != 0) {
    uVar5 = (uint)((param_1[0x2b] - iVar1 >> 2) * 4);
    iVar4 = (int)(iVar1);
    if (0xfff < uVar5) {
      iVar4 = (int)(*(int *)(iVar1 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar1 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar5,uVar3);
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
  }
  piVar2 = (int *)((int *)param_1[0x28]);
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_1022de20();
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xb0,uVar3);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10422780; body size 74 bytes.
#line 1 "ENTRY_10422780"

void __thiscall Recovered_Bulk::FUN_10422780(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  undefined **local_2c;
  undefined4 local_28;
  undefined4 uStack_10;
  char *pcStack_c;
  undefined1 *local_8;
  
  local_8 = (undefined1 *)((undefined1 *)param_3);
  pcStack_c = (char *)("SCIUserAccount:onEmailChanged");
  uStack_10 = (undefined4)(0x10422791);
  cVar1 = (char)(thunk_FUN_101a2c70());
  if (cVar1 == '\0') {
    local_8 = (undefined1 *)((undefined1 *)param_3);
    pcStack_c = (char *)("SCIUserAccount:onUserRefreshCompleted");
    uStack_10 = (undefined4)(0x104227a6);
    cVar1 = (char)(thunk_FUN_101a2c70());
    if (cVar1 == '\0') {
      return;
    }
  }
  local_28 = (undefined4)(*(undefined4 *)(param_1 + 4));
  local_8 = (undefined1 *)((undefined1 *)&local_2c);
  local_2c = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  thunk_FUN_101f1fa0();
  return;
}


// Reference entry 10422de0; body size 187 bytes.
#line 1 "ENTRY_10422de0"

void __fastcall FUN_10422de0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void **ppvVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155e6cd);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  puVar6 = (undefined4 *)(*(undefined4 **)(param_1 + 0xa4));
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xa8));
  ppvVar3 = (void **)(&local_10);
  if ((undefined4 *)(puVar6) != puVar1) {
    do {
      ExceptionList = (void *)(ppvVar3);
      local_8 = (undefined4)(0xffffffff);
      uVar2 = (undefined4)(*puVar6);
      puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_10292cf0(&local_14,uVar4));
      local_8 = (undefined4)(0);
      (**(code **)(*(int *)*puVar5 + 0x3c))(uVar2,0,0);
      local_8 = (undefined4)(1);
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }
      puVar6 = (undefined4 *)(puVar6 + 1);
      ppvVar3 = (void **)(ExceptionList);
    } while ((undefined4 *)(puVar6) != puVar1);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0xa4);
    ExceptionList = (void *)(local_10);
    return;
  }
  *(undefined4 **)(param_1 + 0xa8) = puVar6;
  return;
}


// Reference entry 10423730; body size 275 bytes.
#line 1 "ENTRY_10423730"

void __fastcall FUN_10423730(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155e8ad);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar5 = (undefined4 *)((undefined4 *)(param_1 + 0x90));
  thunk_FUN_10225d70(*puVar5,*(undefined4 *)(param_1 + 0x94),puVar5,
                     DAT_12126b84 ^ (uint)&stack0xfffffffc);
  *(undefined4 *)(param_1 + 0x94) = *puVar5;
  if (*(int *)(param_1 + 0x9c) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0xa0));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  puVar5 = (undefined4 *)(*(undefined4 **)(param_1 + 0xa4));
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0xa8));
  if ((undefined4 *)(puVar5) == puVar2) {
    *(undefined4 **)(param_1 + 0xa8) = puVar5;
    ExceptionList = (void *)(local_10);
    return;
  }
  do {
    uVar3 = (undefined4)(*puVar5);
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_10292cf0(&local_14));
    local_8 = (undefined4)(0);
    (**(code **)(*(int *)*puVar4 + 0x3c))(uVar3,0,0);
    local_8 = (undefined4)(1);
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    puVar5 = (undefined4 *)(puVar5 + 1);
    local_8 = (undefined4)(0xffffffff);
  } while ((undefined4 *)(puVar5) != puVar2);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0xa4);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10423b10; body size 354 bytes.
#line 1 "ENTRY_10423b10"

void __fastcall FUN_10423b10(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined **ppuStack_64;
  int iStack_60;
  undefined1 *puStack_40;
  int **ppiStack_3c;
  uint uStack_38;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155e905);
  local_10 = (void *)(ExceptionList);
  uStack_38 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ppiStack_3c = (int **)(&local_18);
  puStack_40 = (undefined1 *)((undefined1 *)0x10423b43);
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_101da4a0());
  ppiStack_3c = (int **)(&local_14);
  local_8 = (undefined4)(0);
  puStack_40 = (undefined1 *)((undefined1 *)0x10423b58);
  piVar4 = (int *)((int *)(**(code **)(*(int *)*puVar3 + 0x3c))());
  piVar1 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    puStack_40 = (undefined1 *)((undefined1 *)0x10423b72);
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_14 != (int *)0x0) {
    puStack_40 = (undefined1 *)((undefined1 *)0x10423b8b);
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (local_18 != (int *)0x0) {
    puStack_40 = (undefined1 *)((undefined1 *)0x10423b9b);
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (piVar1 == (int *)0x0) {
    puStack_40 = (undefined1 *)((undefined1 *)0x10423baa);
    thunk_FUN_101f1c60();
  }
  else {
    puStack_40 = (undefined1 *)((undefined1 *)&ppuStack_64);
    ppuStack_64 = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
    iStack_60 = (int)(param_1);
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_10403900(&local_20));
    local_1c = (int *)((int *)*puVar3);
    *puVar3 = (undefined4)(0);
    piVar2 = (int *)(*(int **)(param_1 + 0xa0));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      puStack_40 = (undefined1 *)((undefined1 *)0x10423bff);
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0x9c) = local_1c;
    if (local_1c == (int *)0x0) {
      uVar5 = (undefined4)(0);
    }
    else {
      puStack_40 = (undefined1 *)((undefined1 *)0x10423c11);
      uVar5 = (undefined4)((**(code **)(*local_1c + 0xc))());
    }
    *(undefined4 *)(param_1 + 0xa0) = uVar5;
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    if (local_20 != (int *)0x0) {
      puStack_40 = (undefined1 *)((undefined1 *)0x10423c2b);
      (**(code **)(*local_20 + 8))();
    }
    puStack_40 = (undefined1 *)((undefined1 *)&ppuStack_64);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    ppuStack_64 = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
    iStack_60 = (int)(param_1);
    thunk_FUN_101f1fa0();
    puStack_40 = (undefined1 *)((undefined1 *)0x10423c4e);
    (**(code **)(*piVar1 + 0x28))();
  }
  local_8 = (undefined4)(10);
  if (piVar4 != (int *)0x0) {
    puStack_40 = (undefined1 *)((undefined1 *)0x10423c60);
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 104247d0; body size 152 bytes.
#line 1 "ENTRY_104247d0"

void __fastcall FUN_104247d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155eb50);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuAirPlay);
  param_1[2] = (uint)&ghidra_vftable_SCSettingsMenuAirPlay;
  param_1[10] = (uint)&ghidra_vftable_SCSettingsMenuAirPlay;
  param_1[0x24] = (uint)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)((int *)param_1[0x26]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[2] = (uint)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (uint)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 104248b0; body size 176 bytes.
#line 1 "ENTRY_104248b0"

undefined4 * __thiscall Recovered_Bulk::FUN_104248b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155eb80);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuAirPlay);
  param_1[2] = (uint)&ghidra_vftable_SCSettingsMenuAirPlay;
  param_1[10] = (uint)&ghidra_vftable_SCSettingsMenuAirPlay;
  param_1[0x24] = (uint)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)((int *)param_1[0x26]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[2] = (uint)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (uint)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10424a60; body size 176 bytes.
#line 1 "ENTRY_10424a60"

bool FUN_10424a60(void)

{
  int *piVar1;
  uint uVar2;
  SCLibrary *this_;
  int *piVar3;
  int iVar4;
  bool bVar5;
  int **ppiVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155ee45);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ppiVar6 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar3 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(0);
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar6,uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 == (int *)0x0) {
    bVar5 = (bool)(false);
  }
  else {
    iVar4 = (int)((**(code **)(piVar1[3] + 0x14))(7));
    bVar5 = (bool)(iVar4 != 0);
  }
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (bool)(bVar5);
}


// Reference entry 10424d10; body size 172 bytes.
#line 1 "ENTRY_10424d10"

void __fastcall FUN_10424d10(int param_1)

{
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155eee5);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x18))(&local_14,uVar2));
  piVar1 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(0);
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc4))(*(undefined4 *)(param_1 + 0x94));
  }
  local_8 = (undefined4)(4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10424df0; body size 172 bytes.
#line 1 "ENTRY_10424df0"

void __fastcall FUN_10424df0(int param_1)

{
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155ef25);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x18))(&local_14,uVar2));
  piVar1 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(0);
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xcc))(*(undefined4 *)(param_1 + 0x94));
  }
  local_8 = (undefined4)(4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10425010; body size 236 bytes.
#line 1 "ENTRY_10425010"

undefined4 FUN_10425010(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  SCLibrary *this_;
  int *piVar4;
  int iVar5;
  int **ppiVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155efa5);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ppiVar6 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(0);
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar6,uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 == (int *)0x0) {
    local_8 = (undefined4)(5);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
  }
  else {
    iVar5 = (int)((**(code **)(piVar1[3] + 0x14))(7));
    local_8 = (undefined4)(4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
    local_8 = (undefined4)(0xffffffff);
    if (iVar5 != 0) {
      cVar2 = (char)(thunk_FUN_10424b40());
      if (cVar2 == '\0') {
        ExceptionList = (void *)(local_10);
        return (undefined4)(1);
      }
    }
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 104259a0; body size 91 bytes.
#line 1 "ENTRY_104259a0"

int * __thiscall Recovered_Bulk::FUN_104259a0(int *param_2)
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
    return (int *)(param_1);
  }
  param_1[1] = 0;
  return (int *)(param_1);
}


// Reference entry 10425b60; body size 91 bytes.
#line 1 "ENTRY_10425b60"

int * __thiscall Recovered_Bulk::FUN_10425b60(int *param_2)
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
    return (int *)(param_1);
  }
  param_1[1] = 0;
  return (int *)(param_1);
}


// Reference entry 1042a580; body size 76 bytes.
#line 1 "ENTRY_1042a580"

void __fastcall FUN_1042a580(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155fe50);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1042a5f0; body size 76 bytes.
#line 1 "ENTRY_1042a5f0"

void __fastcall FUN_1042a5f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155fe80);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1042a660; body size 76 bytes.
#line 1 "ENTRY_1042a660"

void __fastcall FUN_1042a660(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155feb0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1042a6d0; body size 68 bytes.
#line 1 "ENTRY_1042a6d0"

void __fastcall FUN_1042a6d0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1155fee0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1042a860; body size 143 bytes.
#line 1 "ENTRY_1042a860"

void __fastcall FUN_1042a860(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155ff70);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlarmDeleteActionDescriptor);
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1042a920; body size 110 bytes.
#line 1 "ENTRY_1042a920"

void __fastcall FUN_1042a920(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155ffa0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOfflineTroubleshootActionDescriptor);
  piVar1 = (int *)((int *)param_1[4]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1042a9f0; body size 436 bytes.
#line 1 "ENTRY_1042a9f0"

void __fastcall FUN_1042a9f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1155ffd0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuAlarm);
  param_1[2] = (uint)&ghidra_vftable_SCSettingsMenuAlarm;
  param_1[10] = (uint)&ghidra_vftable_SCSettingsMenuAlarm;
  param_1[0x24] = (uint)&ghidra_vftable_SCSettingsMenuAlarm;
  piVar1 = (int *)((int *)param_1[0x35]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x33]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x31]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x2f]);
  local_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x2d]);
  local_8 = (undefined4)(4);
  if (piVar1 != (int *)0x0) {
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x2b]);
  local_8 = (undefined4)(5);
  if (piVar1 != (int *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x29]);
  local_8 = (undefined4)(6);
  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x27]);
  local_8 = (undefined4)(7);
  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x24] = (uint)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1042ac20; body size 142 bytes.
#line 1 "ENTRY_1042ac20"

void __fastcall FUN_1042ac20(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11560000);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuAlarmDuration);
  param_1[2] = (uint)&ghidra_vftable_SCSettingsMenuAlarmDuration;
  param_1[10] = (uint)&ghidra_vftable_SCSettingsMenuAlarmDuration;
  param_1[0x24] = (uint)&ghidra_vftable_SCSettingsMenuAlarmDuration;
  piVar1 = (int *)((int *)param_1[0x26]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  param_1[0x24] = (uint)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1042ace0; body size 142 bytes.
#line 1 "ENTRY_1042ace0"

void __fastcall FUN_1042ace0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11560030);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuAlarmRepeat);
  param_1[2] = (uint)&ghidra_vftable_SCSettingsMenuAlarmRepeat;
  param_1[10] = (uint)&ghidra_vftable_SCSettingsMenuAlarmRepeat;
  param_1[0x24] = (uint)&ghidra_vftable_SCSettingsMenuAlarmRepeat;
  piVar1 = (int *)((int *)param_1[0x26]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  param_1[0x24] = (uint)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1042ada0; body size 184 bytes.
#line 1 "ENTRY_1042ada0"

void __fastcall FUN_1042ada0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11560060);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuAlarmRoom);
  param_1[2] = (uint)&ghidra_vftable_SCSettingsMenuAlarmRoom;
  param_1[10] = (uint)&ghidra_vftable_SCSettingsMenuAlarmRoom;
  param_1[0x24] = (uint)&ghidra_vftable_SCSettingsMenuAlarmRoom;
  piVar1 = (int *)((int *)param_1[0x28]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x26]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x24] = (uint)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1042ae90; body size 142 bytes.
#line 1 "ENTRY_1042ae90"

void __fastcall FUN_1042ae90(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11560090);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuAlarmSnoozeDuration);
  param_1[2] = (uint)&ghidra_vftable_SCSettingsMenuAlarmSnoozeDuration;
  param_1[10] = (uint)&ghidra_vftable_SCSettingsMenuAlarmSnoozeDuration;
  param_1[0x24] = (uint)&ghidra_vftable_SCSettingsMenuAlarmSnoozeDuration;
  piVar1 = (int *)((int *)param_1[0x26]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  param_1[0x24] = (uint)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1042af50; body size 290 bytes.
#line 1 "ENTRY_1042af50"

void __fastcall FUN_1042af50(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115600c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuAlarms);
  param_1[2] = (uint)&ghidra_vftable_SCSettingsMenuAlarms;
  param_1[10] = (uint)&ghidra_vftable_SCSettingsMenuAlarms;
  piVar1 = (int *)((int *)param_1[0x2e]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x2c]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x2a]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x28]);
  local_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x25]);
  local_8 = (undefined4)(4);
  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101eb2b0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1042b2d0; body size 164 bytes.
#line 1 "ENTRY_1042b2d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1042b2d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115600f0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlarmDeleteActionDescriptor);
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1042b3b0; body size 131 bytes.
#line 1 "ENTRY_1042b3b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1042b3b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11560120);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOfflineTroubleshootActionDescriptor);
  piVar1 = (int *)((int *)param_1[4]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1042b510; body size 166 bytes.
#line 1 "ENTRY_1042b510"

undefined4 * __thiscall Recovered_Bulk::FUN_1042b510(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11560150);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuAlarmDuration);
  param_1[2] = (uint)&ghidra_vftable_SCSettingsMenuAlarmDuration;
  param_1[10] = (uint)&ghidra_vftable_SCSettingsMenuAlarmDuration;
  param_1[0x24] = (uint)&ghidra_vftable_SCSettingsMenuAlarmDuration;
  piVar1 = (int *)((int *)param_1[0x26]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  param_1[0x24] = (uint)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa0);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1042b5f0; body size 166 bytes.
#line 1 "ENTRY_1042b5f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1042b5f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11560180);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuAlarmRepeat);
  param_1[2] = (uint)&ghidra_vftable_SCSettingsMenuAlarmRepeat;
  param_1[10] = (uint)&ghidra_vftable_SCSettingsMenuAlarmRepeat;
  param_1[0x24] = (uint)&ghidra_vftable_SCSettingsMenuAlarmRepeat;
  piVar1 = (int *)((int *)param_1[0x26]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  param_1[0x24] = (uint)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa0);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1042b6d0; body size 208 bytes.
#line 1 "ENTRY_1042b6d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1042b6d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115601b0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuAlarmRoom);
  param_1[2] = (uint)&ghidra_vftable_SCSettingsMenuAlarmRoom;
  param_1[10] = (uint)&ghidra_vftable_SCSettingsMenuAlarmRoom;
  param_1[0x24] = (uint)&ghidra_vftable_SCSettingsMenuAlarmRoom;
  piVar1 = (int *)((int *)param_1[0x28]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x26]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x24] = (uint)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


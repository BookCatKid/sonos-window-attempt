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
extern int FUN_100541fb(...);
extern int FUN_1005a7b3(...);
extern int FUN_10091f7e(...);
extern int __alldiv(...);
extern int __allmul(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int append(...);
extern __declspec(dllimport) int atoi(...);
extern __declspec(dllimport) int ceil(...);
extern int createActionContextForAction(...);
extern int createPropertyBag(...);
extern int createSCStringArray(...);
extern int getSCHousehold(...);
extern int getSingleton(...);
extern int info(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int int_resumeNetworking(...);
extern int int_start(...);
extern int int_suspendNetworking(...);
extern int length(...);
extern __declspec(dllimport) int memmove(...);
extern int op_eq(...);
extern int operator_new(...);
extern int required(...);
extern int setServiceAppInteropManager(...);
extern int stringWithFormat(...);
extern int thunk_FUN_1011a340(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a2b90(...);
extern int thunk_FUN_101a2c70(...);
extern int thunk_FUN_101a2e90(...);
extern int thunk_FUN_101a3180(...);
extern int thunk_FUN_101a31e0(...);
extern int thunk_FUN_101a9be0(...);
extern int thunk_FUN_101ab650(...);
extern int thunk_FUN_101b1ce0(...);
extern int thunk_FUN_101b8150(...);
extern int thunk_FUN_101b8f90(...);
extern int thunk_FUN_101b8fc0(...);
extern int thunk_FUN_101b9160(...);
extern int thunk_FUN_101b94f0(...);
extern int thunk_FUN_101b9a40(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_101bf370(...);
extern int thunk_FUN_101d3630(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_101da390(...);
extern int thunk_FUN_101da4a0(...);
extern int thunk_FUN_101dccc0(...);
extern int thunk_FUN_101dcfc0(...);
extern int thunk_FUN_101f3af0(...);
extern int thunk_FUN_101f4060(...);
extern int thunk_FUN_101f4930(...);
extern int thunk_FUN_101f53d0(...);
extern int thunk_FUN_101f6530(...);
extern int thunk_FUN_101fa250(...);
extern int thunk_FUN_10211630(...);
extern int thunk_FUN_102116d0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_10224630(...);
extern int thunk_FUN_102473e0(...);
extern int thunk_FUN_102518f0(...);
extern int thunk_FUN_10280c00(...);
extern int thunk_FUN_10282f10(...);
extern int thunk_FUN_10283040(...);
extern int thunk_FUN_102833f0(...);
extern int thunk_FUN_102a88c0(...);
extern int thunk_FUN_102aab80(...);
extern int thunk_FUN_102cc420(...);
extern int thunk_FUN_102dd9b0(...);
extern int thunk_FUN_102e71d0(...);
extern int thunk_FUN_102e74f0(...);
extern int thunk_FUN_102e7950(...);
extern int thunk_FUN_102e8580(...);
extern int thunk_FUN_102e88e0(...);
extern int thunk_FUN_102e8bc0(...);
extern int thunk_FUN_102e9900(...);
extern int thunk_FUN_102ec600(...);
extern int thunk_FUN_102f8950(...);
extern int thunk_FUN_102f8960(...);
extern int thunk_FUN_102f8970(...);
extern int thunk_FUN_103021f0(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_10302330(...);
extern int thunk_FUN_103039a0(...);
extern int thunk_FUN_10304120(...);
extern int thunk_FUN_10304a70(...);
extern int thunk_FUN_103056e0(...);
extern int thunk_FUN_103058f0(...);
extern int thunk_FUN_10306f60(...);
extern int thunk_FUN_10307620(...);
extern int thunk_FUN_10308670(...);
extern int thunk_FUN_10308c20(...);
extern int thunk_FUN_10309500(...);
extern int thunk_FUN_103095b0(...);
extern int thunk_FUN_10309870(...);
extern int thunk_FUN_10309b60(...);
extern int thunk_FUN_1030a0d0(...);
extern int thunk_FUN_1030b1f0(...);
extern int thunk_FUN_1030b340(...);
extern int thunk_FUN_1030be20(...);
extern int thunk_FUN_1030c220(...);
extern int thunk_FUN_1030d470(...);
extern int thunk_FUN_1030d4f0(...);
extern int thunk_FUN_1030d570(...);
extern int thunk_FUN_1030d760(...);
extern int thunk_FUN_1030da10(...);
extern int thunk_FUN_1030e0d0(...);
extern int thunk_FUN_1030e350(...);
extern int thunk_FUN_1030e5d0(...);
extern int thunk_FUN_1030e860(...);
extern int thunk_FUN_1030f760(...);
extern int thunk_FUN_1030f810(...);
extern int thunk_FUN_10310680(...);
extern int thunk_FUN_10310df0(...);
extern int thunk_FUN_10310fb0(...);
extern int thunk_FUN_10311170(...);
extern int thunk_FUN_10312640(...);
extern int thunk_FUN_10314f90(...);
extern int thunk_FUN_10316a40(...);
extern int thunk_FUN_10319d30(...);
extern int thunk_FUN_10319e10(...);
extern int thunk_FUN_10319ff0(...);
extern int thunk_FUN_1031b010(...);
extern int thunk_FUN_1031e830(...);
extern int thunk_FUN_1031eeb0(...);
extern int thunk_FUN_1031f140(...);
extern int thunk_FUN_10320510(...);
extern int thunk_FUN_10320760(...);
extern int thunk_FUN_10320db0(...);
extern int thunk_FUN_10322b70(...);
extern int thunk_FUN_103230a0(...);
extern int thunk_FUN_103238a0(...);
extern int thunk_FUN_10323ac0(...);
extern int thunk_FUN_10323e90(...);
extern int thunk_FUN_10325970(...);
extern int thunk_FUN_10325a60(...);
extern int thunk_FUN_10325b50(...);
extern int thunk_FUN_10325d10(...);
extern int thunk_FUN_10325e10(...);
extern int thunk_FUN_10325f00(...);
extern int thunk_FUN_10326280(...);
extern int thunk_FUN_10326510(...);
extern int thunk_FUN_103273e0(...);
extern int thunk_FUN_103277d0(...);
extern int thunk_FUN_10327820(...);
extern int thunk_FUN_10328710(...);
extern int thunk_FUN_10328890(...);
extern int thunk_FUN_1032d1f0(...);
extern int thunk_FUN_1032e8b0(...);
extern int thunk_FUN_1032ee10(...);
extern int thunk_FUN_1032f250(...);
extern int thunk_FUN_1032f330(...);
extern int thunk_FUN_1032f400(...);
extern int thunk_FUN_1032f4d0(...);
extern int thunk_FUN_1032f560(...);
extern int thunk_FUN_1032f7a0(...);
extern int thunk_FUN_1032fa50(...);
extern int thunk_FUN_1032fab0(...);
extern int thunk_FUN_103307f0(...);
extern int thunk_FUN_10331820(...);
extern int thunk_FUN_10331cb0(...);
extern int thunk_FUN_103367d0(...);
extern int thunk_FUN_10338890(...);
extern int thunk_FUN_1033a470(...);
extern int thunk_FUN_1033a700(...);
extern int thunk_FUN_1033b630(...);
extern int thunk_FUN_1033b650(...);
extern int thunk_FUN_1033bef0(...);
extern int thunk_FUN_1033c870(...);
extern int thunk_FUN_1033cd00(...);
extern int thunk_FUN_1033d2d0(...);
extern int thunk_FUN_1033ea60(...);
extern int thunk_FUN_1033f090(...);
extern int thunk_FUN_1033f120(...);
extern int thunk_FUN_10340690(...);
extern int thunk_FUN_103431e0(...);
extern int thunk_FUN_103432b0(...);
extern int thunk_FUN_103443d0(...);
extern int thunk_FUN_103447b0(...);
extern int thunk_FUN_103448e0(...);
extern int thunk_FUN_10344960(...);
extern int thunk_FUN_10344a10(...);
extern int thunk_FUN_10347240(...);
extern int thunk_FUN_10347a90(...);
extern int thunk_FUN_10347dd0(...);
extern int thunk_FUN_103486b0(...);
extern int thunk_FUN_1034a4c0(...);
extern int thunk_FUN_1034cf80(...);
extern int thunk_FUN_1034cfa0(...);
extern int thunk_FUN_1034d590(...);
extern int thunk_FUN_1034de20(...);
extern int thunk_FUN_1034e3d0(...);
extern int thunk_FUN_10351370(...);
extern int thunk_FUN_10352a90(...);
extern int thunk_FUN_10352b30(...);
extern int thunk_FUN_103532a0(...);
extern int thunk_FUN_103535f0(...);
extern int thunk_FUN_103539c0(...);
extern int thunk_FUN_10353a20(...);
extern int thunk_FUN_10353c70(...);
extern int thunk_FUN_10353e20(...);
extern int thunk_FUN_10354880(...);
extern int thunk_FUN_10355130(...);
extern int thunk_FUN_103554a0(...);
extern int thunk_FUN_10355870(...);
extern int thunk_FUN_10355a80(...);
extern int thunk_FUN_103566d0(...);
extern int thunk_FUN_10356a30(...);
extern int thunk_FUN_103570f0(...);
extern int thunk_FUN_10359040(...);
extern int thunk_FUN_10359810(...);
extern int thunk_FUN_1035ccc0(...);
extern int thunk_FUN_1035dac0(...);
extern int thunk_FUN_10363080(...);
extern int thunk_FUN_103633e0(...);
extern int thunk_FUN_10363490(...);
extern int thunk_FUN_10365150(...);
extern int thunk_FUN_103659a0(...);
extern int thunk_FUN_1036c7f0(...);
extern int thunk_FUN_1036e480(...);
extern int thunk_FUN_1036ec30(...);
extern int thunk_FUN_10379c90(...);
extern int thunk_FUN_1037a2b0(...);
extern int thunk_FUN_1037a3e0(...);
extern int thunk_FUN_1037b8c0(...);
extern int thunk_FUN_1037ba90(...);
extern int thunk_FUN_1037bed0(...);
extern int thunk_FUN_1037ddd0(...);
extern int thunk_FUN_1037f130(...);
extern int thunk_FUN_10380bb0(...);
extern int thunk_FUN_10381240(...);
extern int thunk_FUN_10382dd0(...);
extern int thunk_FUN_10384800(...);
extern int thunk_FUN_10384890(...);
extern int thunk_FUN_103869d0(...);
extern int thunk_FUN_10387340(...);
extern int thunk_FUN_10387aa0(...);
extern int thunk_FUN_1038d3c0(...);
extern int thunk_FUN_103929e0(...);
extern int thunk_FUN_10397340(...);
extern int thunk_FUN_10398a70(...);
extern int thunk_FUN_103a69b0(...);
extern int thunk_FUN_103be530(...);
extern int thunk_FUN_103be5e0(...);
extern int thunk_FUN_103be9e0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d0880(...);
extern int thunk_FUN_103d2920(...);
extern int thunk_FUN_103d3580(...);
extern int thunk_FUN_103d4080(...);
extern int thunk_FUN_103d4550(...);
extern int thunk_FUN_103d4f80(...);
extern int thunk_FUN_103d53c0(...);
extern int thunk_FUN_103d56e0(...);
extern int thunk_FUN_103d6740(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_10436ab0(...);
extern int thunk_FUN_10436cd0(...);
extern int thunk_FUN_10437a90(...);
extern int thunk_FUN_104ed740(...);
extern int thunk_FUN_104ee4f0(...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d5a0(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059dd40(...);
extern int thunk_FUN_105a85f0(...);
extern int thunk_FUN_105c0190(...);
extern int thunk_FUN_105ee270(...);
extern int thunk_FUN_105ee3e0(...);
extern int thunk_FUN_105ef430(...);
extern int thunk_FUN_105f2130(...);
extern int thunk_FUN_107cc370(...);
extern int thunk_FUN_107cc5b0(...);
extern int thunk_FUN_10b6d210(...);
extern int thunk_FUN_10ba6170(...);
extern int thunk_FUN_10bac260(...);
extern int thunk_FUN_10bbbf60(...);
extern int thunk_FUN_10bbbfe0(...);
extern int thunk_FUN_10bd4aa0(...);
extern int thunk_FUN_10be03d0(...);
extern int thunk_FUN_10be4f80(...);
extern int thunk_FUN_10be6ad0(...);
extern int thunk_FUN_10be6d30(...);
extern int thunk_FUN_10be72f0(...);
extern int thunk_FUN_10be8520(...);
extern int thunk_FUN_10be9ed0(...);
extern int thunk_FUN_10bed390(...);
extern int thunk_FUN_10bf25e0(...);
extern int thunk_FUN_10bff580(...);
extern int thunk_FUN_10c01fe0(...);
extern int thunk_FUN_10c16270(...);
extern int thunk_FUN_10c4ea80(...);
extern int thunk_FUN_10c54e60(...);
extern int thunk_FUN_10c594a0(...);
extern int thunk_FUN_10c5b100(...);
extern int thunk_FUN_10c5f430(...);
extern int thunk_FUN_10c61e30(...);
extern int thunk_FUN_10c61ec0(...);
extern int thunk_FUN_10c62180(...);
extern int thunk_FUN_10c647f0(...);
extern int thunk_FUN_10c667b0(...);
extern int thunk_FUN_10c674d0(...);
extern int thunk_FUN_10c70440(...);
extern int thunk_FUN_10c70450(...);
extern int thunk_FUN_10c88d60(...);
extern int thunk_FUN_10c944f0(...);
extern int thunk_FUN_10c94750(...);
extern int thunk_FUN_10c97560(...);
extern int thunk_FUN_10cb8420(...);
extern int thunk_FUN_10cdb650(...);
extern int thunk_FUN_10ce2330(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_1107fc60(...);
extern int thunk_FUN_1107fd10(...);
extern int thunk_FUN_11081a60(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_11093230(...);
extern int thunk_FUN_11096620(...);
extern int thunk_FUN_11097b00(...);
extern int thunk_FUN_1109f0a0(...);
extern int thunk_FUN_1109f750(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a0140(...);
extern int thunk_FUN_110a0210(...);
extern int thunk_FUN_110a0fd0(...);
extern int thunk_FUN_110a2740(...);
extern int thunk_FUN_110a2e60(...);
extern int thunk_FUN_110c2c60(...);
extern int thunk_FUN_110c5670(...);
extern int thunk_FUN_110c9a60(...);
extern int thunk_FUN_110cbb30(...);
extern int thunk_FUN_110cc080(...);
extern int thunk_FUN_110cc280(...);
extern int thunk_FUN_110ce190(...);
extern int thunk_FUN_110d2d80(...);
extern int thunk_FUN_110d3720(...);
extern int thunk_FUN_110d4590(...);
extern int thunk_FUN_110d50b0(...);
extern int thunk_FUN_110d5a80(...);
extern int thunk_FUN_110d6f80(...);
extern int thunk_FUN_110d88e0(...);
extern int thunk_FUN_110f2980(...);
extern int thunk_FUN_110f4420(...);
extern int thunk_FUN_110f62c0(...);
extern int thunk_FUN_11124760(...);
extern int thunk_FUN_1112be50(...);
extern int thunk_FUN_1112c310(...);
extern int thunk_FUN_11131cc0(...);
extern int thunk_FUN_11132140(...);
extern int thunk_FUN_11132ba0(...);
extern int thunk_FUN_11132bd0(...);
extern int thunk_FUN_11132c10(...);
extern int thunk_FUN_11135bc0(...);
extern int thunk_FUN_111c06e0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_111c0af0(...);
extern int thunk_FUN_111c1340(...);
extern int thunk_FUN_111fbeb0(...);
extern int thunk_FUN_111fc270(...);
extern int thunk_FUN_112023b0(...);
extern int thunk_FUN_11202440(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11249060(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_11249230(...);
extern int thunk_FUN_1124a3e0(...);
extern int thunk_FUN_1124dc60(...);
extern int thunk_FUN_1124f3c0(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_112616c0(...);
extern int thunk_FUN_1126df20(...);
extern int thunk_FUN_1126f0b0(...);
extern int thunk_FUN_1126fcc0(...);
extern int thunk_FUN_112702b0(...);
extern int thunk_FUN_11274040(...);
extern int thunk_FUN_112755a0(...);
extern int thunk_FUN_112755e0(...);
extern int thunk_FUN_11275f20(...);
extern int thunk_FUN_11276420(...);
extern int thunk_FUN_112765b0(...);
extern int thunk_FUN_11277fc0(...);
extern int thunk_FUN_11278290(...);
extern int thunk_FUN_112782b0(...);
extern int thunk_FUN_11278390(...);
extern int thunk_FUN_112783b0(...);
extern int thunk_FUN_11278650(...);
extern int thunk_FUN_11278a80(...);
extern int thunk_FUN_11278a90(...);
extern int thunk_FUN_11278b20(...);
extern int thunk_FUN_11278b60(...);
extern int thunk_FUN_112792b0(...);
extern int thunk_FUN_1127a020(...);
extern int thunk_FUN_1127a080(...);
extern int thunk_FUN_1127a2b0(...);
extern int thunk_FUN_1127c4d0(...);
extern int thunk_FUN_1127caf0(...);
extern int thunk_FUN_112a7b20(...);
extern int thunk_FUN_112a7b70(...);
extern int thunk_FUN_112a7c30(...);
extern int thunk_FUN_112a7c70(...);
extern int thunk_FUN_112a7da0(...);
extern int thunk_FUN_112a7ea0(...);
extern int thunk_FUN_112a7f20(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112a9cf0(...);
extern int thunk_FUN_112aa310(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_112b0270(...);
extern int thunk_FUN_113c3010(...);
extern int thunk_FUN_113c4010(...);
extern int thunk_FUN_113c41f0(...);
extern int thunk_FUN_113c5d40(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_114568e0(...);
extern int thunk_FUN_11457320(...);
extern int thunk_FUN_114577b0(...);
extern int thunk_FUN_11457d40(...);
extern int thunk_FUN_1145a8d0(...);
extern int thunk_FUN_1145c380(...);
extern int thunk_FUN_1145c930(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148ac80(...);
extern int thunk_FUN_1148b586(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11883704;
extern int DAT_11893b8c;
extern int DAT_118947c0;
extern int DAT_118947c4;
extern int DAT_11894d6c;
extern int DAT_12126b84;
extern int DAT_121a0e70;
extern int DAT_121a0fd4;
extern int DAT_121a0fd8;
extern int DAT_121a100c;
extern int DAT_121a1010;
extern int DAT_121a10c8;
extern int DAT_121a12a8;
extern int DAT_121a12b8;
extern int g_lSCObjCount;
extern int ghidra_vftable_ApplicationControllerAIOHelper;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RCustRegQueryCountryAIOOp;
extern int ghidra_vftable_RCustRegRegisterSoftwareAIOOp;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RRegisterSoftwareAndSaveRegDataAIOOp;
extern int ghidra_vftable_RReportUploaderClient;
extern int ghidra_vftable_RUpnpCMGetProtocolInfoAIOOp;
extern int ghidra_vftable_RUpnpDPGetLEDStateAIOOp;
extern int ghidra_vftable_RUpnpDPRemoveBondedZonesAIOOp;
extern int ghidra_vftable_RUpnpDPSetLEDStateAIOOp;
extern int ghidra_vftable_SCAddCustomRadioActionFactory;
extern int ghidra_vftable_SCBrowseListPresentationMapProxy;
extern int ghidra_vftable_SCBrowseManager;
extern int ghidra_vftable_SCCompoundAction;
extern int ghidra_vftable_SCConfigLoadAsyncIOOperation;
extern int ghidra_vftable_SCControllerEventSink;
extern int ghidra_vftable_SCCountryList;
extern int ghidra_vftable_SCCreateAndSummonNewWizActionDescriptorFor;
extern int ghidra_vftable_SCDefaultBrowseListPresentationMap;
extern int ghidra_vftable_SCDirectControlAppManager;
extern int ghidra_vftable_SCDisplaySubmitDiagnosticsMessageAction;
extern int ghidra_vftable_SCDisplaySubmitDiagnosticsMessageDescriptor;
extern int ghidra_vftable_SCDisplayWizardActionDescriptorBase;
extern int ghidra_vftable_SCElapsedTimeMeasurement;
extern int ghidra_vftable_SCEventSubscriptionImpl;
extern int ghidra_vftable_SCFactoryResetActionDescriptor;
extern int ghidra_vftable_SCFeatureManagerEventSink;
extern int ghidra_vftable_SCFoundProductManager;
extern int ghidra_vftable_SCHouseholdAdapterEventSink;
extern int ghidra_vftable_SCIActionDelegate;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCLegacyJoinExistingWizardActionDescriptor;
extern int ghidra_vftable_SCLegacyMusicLibrarySetupWizardActionDescriptor;
extern int ghidra_vftable_SCLegacySubmitDiagsWizardActionDescriptor;
extern int ghidra_vftable_SCLibOptionsSettingsFileCB;
extern int ghidra_vftable_SCLifecycleManagerEventSink;
extern int ghidra_vftable_SCLocalMusicBrowsePresentationMap;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCMultipleDeferredEvtHelper;
extern int ghidra_vftable_SCMusicServiceWizardActionDescriptor;
extern int ghidra_vftable_SCNewWizControllerFor;
extern int ghidra_vftable_SCNowPlayingEventSink;
extern int ghidra_vftable_SCOfflineTroubleshootAction;
extern int ghidra_vftable_SCOnlineUpdateWizardActionDescriptor;
extern int ghidra_vftable_SCOpConnectionManagerGetProtocolInfo;
extern int ghidra_vftable_SCOpDevicePropertiesGetButtonLockState;
extern int ghidra_vftable_SCOpDevicePropertiesGetLEDState;
extern int ghidra_vftable_SCOpDevicePropertiesSetButtonLockState;
extern int ghidra_vftable_SCOpDevicePropertiesSetLEDState;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpZoneGroupTopologyGetZoneGroupState;
extern int ghidra_vftable_SCReportManager;
extern int ghidra_vftable_SCReportUploaderAIOClient;
extern int ghidra_vftable_SCSonosBrowseListPresentationMap;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCUrbanAirshipTagger;
extern int ghidra_vftable_SCUsageRequest;
extern int ghidra_vftable_SCUserTriggeredOnlineUpdateWizardActionDescriptor;
extern int ghidra_vftable_SCVersion;
extern int ghidra_vftable_SCVersionRange;
extern int ghidra_vftable_SwfWrappedHelper;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_stack_0000001c;
extern int in_stack_00000020;
extern int in_stack_00000024;
extern int in_stack_0000002c;
extern undefined1 LAB_1001a01e[];
extern undefined1 LAB_103090a2[];
extern undefined1 LAB_10309f85[];
extern undefined1 LAB_1030a1e0[];
extern undefined1 LAB_1030bb94[];
extern undefined1 LAB_1030c3db[];
extern undefined1 LAB_10313657[];
extern undefined1 LAB_10313a42[];
extern undefined1 LAB_10313a59[];
extern undefined1 LAB_1031e583[];
extern undefined1 LAB_10326f68[];
extern undefined1 LAB_1032711a[];
extern undefined1 LAB_1032727a[];
extern undefined1 LAB_10328cff[];
extern undefined1 LAB_10328e3f[];
extern undefined1 LAB_1032e209[];
extern undefined1 LAB_1032e2c9[];
extern undefined1 LAB_1033188c[];
extern undefined1 LAB_103331c5[];
extern undefined1 LAB_10344746[];
extern undefined1 LAB_1034474c[];
extern undefined1 LAB_10353586[];
extern undefined1 LAB_1035358c[];
extern undefined1 LAB_10370c58[];
extern undefined1 LAB_1037110e[];
extern undefined1 LAB_10371734[];
extern undefined1 LAB_1037dbc8[];
extern undefined1 LAB_1037ec6b[];
extern undefined1 LAB_1152b650[];
extern undefined1 LAB_1152b680[];
extern undefined1 LAB_1152b72d[];
extern undefined1 LAB_1152b775[];
extern undefined1 LAB_1152b7bd[];
extern undefined1 LAB_1152b8bd[];
extern undefined1 LAB_1152b8fd[];
extern undefined1 LAB_1152b93d[];
extern undefined1 LAB_1152b97d[];
extern undefined1 LAB_1152b9bd[];
extern undefined1 LAB_1152bb10[];
extern undefined1 LAB_1152bb4d[];
extern undefined1 LAB_1152bb8d[];
extern undefined1 LAB_1152bbdb[];
extern undefined1 LAB_1152bc7b[];
extern undefined1 LAB_1152bd5b[];
extern undefined1 LAB_1152c210[];
extern undefined1 LAB_1152c240[];
extern undefined1 LAB_1152c270[];
extern undefined1 LAB_1152c2a0[];
extern undefined1 LAB_1152c2d0[];
extern undefined1 LAB_1152c300[];
extern undefined1 LAB_1152c330[];
extern undefined1 LAB_1152c360[];
extern undefined1 LAB_1152c390[];
extern undefined1 LAB_1152c3c0[];
extern undefined1 LAB_1152c3f0[];
extern undefined1 LAB_1152c630[];
extern undefined1 LAB_1152c6c0[];
extern undefined1 LAB_1152c6f0[];
extern undefined1 LAB_1152c720[];
extern undefined1 LAB_1152c780[];
extern undefined1 LAB_1152c810[];
extern undefined1 LAB_1152c840[];
extern undefined1 LAB_1152c990[];
extern undefined1 LAB_1152c9c0[];
extern undefined1 LAB_1152c9f0[];
extern undefined1 LAB_1152ca50[];
extern undefined1 LAB_1152cab0[];
extern undefined1 LAB_1152cae0[];
extern undefined1 LAB_1152d0d0[];
extern undefined1 LAB_1152d22c[];
extern undefined1 LAB_1152d865[];
extern undefined1 LAB_1152db4c[];
extern undefined1 LAB_1152db9e[];
extern undefined1 LAB_1152ddf4[];
extern undefined1 LAB_1152de34[];
extern undefined1 LAB_1152de74[];
extern undefined1 LAB_1152deb4[];
extern undefined1 LAB_1152dee0[];
extern undefined1 LAB_1152df80[];
extern undefined1 LAB_1152dfc4[];
extern undefined1 LAB_1152e004[];
extern undefined1 LAB_1152e062[];
extern undefined1 LAB_1152e0a0[];
extern undefined1 LAB_1152e540[];
extern undefined1 LAB_1152e865[];
extern undefined1 LAB_1152e890[];
extern undefined1 LAB_1152e8c0[];
extern undefined1 LAB_1152e904[];
extern undefined1 LAB_1152e944[];
extern undefined1 LAB_1152e97d[];
extern undefined1 LAB_1152eedd[];
extern undefined1 LAB_1152ef1d[];
extern undefined1 LAB_1152ef5d[];
extern undefined1 LAB_1152f1e5[];
extern undefined1 LAB_1152f225[];
extern undefined1 LAB_1152f790[];
extern undefined1 LAB_1152f955[];
extern undefined1 LAB_1152fae5[];
extern undefined1 LAB_1152fd30[];
extern undefined1 LAB_1152fda4[];
extern undefined1 LAB_1152ff2d[];
extern undefined1 LAB_1153021b[];
extern undefined1 LAB_1153026b[];
extern undefined1 LAB_115302ad[];
extern undefined1 LAB_115302ed[];
extern undefined1 LAB_1153033b[];
extern undefined1 LAB_1153037d[];
extern undefined1 LAB_11530425[];
extern undefined1 LAB_11530a49[];
extern undefined1 LAB_11530a97[];
extern undefined1 LAB_11530add[];
extern undefined1 LAB_11530b27[];
extern undefined1 LAB_11530b75[];
extern undefined1 LAB_11530bb7[];
extern undefined1 LAB_11530c0f[];
extern undefined1 LAB_11530cf5[];
extern undefined1 LAB_11530d57[];
extern undefined1 LAB_11530db5[];
extern undefined1 LAB_11530fb7[];
extern undefined1 LAB_11531004[];
extern undefined1 LAB_115310c7[];
extern undefined1 LAB_11531134[];
extern undefined1 LAB_11531187[];
extern undefined1 LAB_11531247[];
extern undefined1 LAB_115312f7[];
extern undefined1 LAB_11531347[];
extern undefined1 LAB_1153198b[];
extern undefined1 LAB_11531a9d[];
extern undefined1 LAB_11531add[];
extern undefined1 LAB_11531b1d[];
extern undefined1 LAB_11531ddd[];
extern undefined1 LAB_11531e1d[];
extern undefined1 LAB_11531e5d[];
extern undefined1 LAB_11531e9d[];
extern undefined1 LAB_11531edd[];
extern undefined1 LAB_11531f3b[];
extern undefined1 LAB_11531f9b[];
extern undefined1 LAB_11531ffb[];
extern undefined1 LAB_1153205b[];
extern undefined1 LAB_115320bb[];
extern undefined1 LAB_1153227b[];
extern undefined1 LAB_115322db[];
extern undefined1 LAB_1153233b[];
extern undefined1 LAB_1153239b[];
extern undefined1 LAB_115323fb[];
extern undefined1 LAB_11532453[];
extern undefined1 LAB_11532570[];
extern undefined1 LAB_115325a0[];
extern undefined1 LAB_115325d0[];
extern undefined1 LAB_11532600[];
extern undefined1 LAB_11532630[];
extern undefined1 LAB_11532660[];
extern undefined1 LAB_11532690[];
extern undefined1 LAB_115326c0[];
extern undefined1 LAB_115326f0[];
extern undefined1 LAB_11532720[];
extern undefined1 LAB_11532750[];
extern undefined1 LAB_11532780[];
extern undefined1 LAB_115329c0[];
extern undefined1 LAB_115329f0[];
extern undefined1 LAB_11532f4d[];
extern undefined1 LAB_1153322c[];
extern undefined1 LAB_115332bc[];
extern undefined1 LAB_115335b4[];
extern undefined1 LAB_115335f4[];
extern undefined1 LAB_11533634[];
extern undefined1 LAB_11533674[];
extern undefined1 LAB_1153386c[];
extern undefined1 LAB_11533abc[];
extern undefined1 LAB_11533c24[];
extern undefined1 LAB_11533f40[];
extern undefined1 LAB_11534380[];
extern undefined1 LAB_11534547[];
extern undefined1 LAB_11534614[];
extern undefined1 LAB_11534aac[];
extern undefined1 LAB_11534e84[];
extern undefined1 LAB_115354b0[];
extern undefined1 LAB_1153562d[];
extern undefined1 LAB_11535660[];
extern undefined1 LAB_115357ec[];
extern undefined1 LAB_1153583c[];
extern undefined1 LAB_1153588c[];
extern undefined1 LAB_115358dc[];
extern undefined1 LAB_11535920[];
extern undefined1 LAB_11535970[];
extern undefined1 LAB_115359c0[];
extern undefined1 LAB_11535a85[];
extern undefined1 LAB_11535ac5[];
extern undefined1 LAB_11535af0[];
extern undefined1 LAB_11535c4d[];
extern undefined1 LAB_11535c8d[];
extern undefined1 LAB_11535ccd[];
extern undefined1 LAB_11535d0d[];
extern undefined1 LAB_11535d4d[];
extern undefined1 LAB_11535d9d[];
extern undefined1 LAB_11535ded[];
extern undefined1 LAB_11535e2d[];
extern undefined1 LAB_11535e6d[];
extern undefined1 LAB_11535ead[];
extern undefined1 LAB_11535eed[];
extern undefined1 LAB_11535f2d[];
extern undefined1 LAB_1153621e[];
extern undefined1 LAB_115365ed[];
extern undefined1 LAB_115367ad[];
extern undefined1 LAB_115367ed[];
extern undefined1 LAB_1153682d[];
extern undefined1 LAB_1153686d[];
extern undefined1 LAB_115368ad[];
extern undefined1 LAB_11536ddd[];
extern undefined1 LAB_11536e9d[];
extern undefined1 LAB_11536f00[];
extern undefined1 LAB_11536f30[];
extern undefined1 LAB_11536f90[];
extern undefined1 LAB_11536fc0[];
extern undefined1 LAB_11537005[];
extern undefined1 LAB_11537045[];
extern undefined1 LAB_11537085[];
extern undefined1 LAB_115370c5[];
extern undefined1 LAB_11537105[];
extern undefined1 LAB_1153740d[];
extern undefined1 LAB_1153754d[];
extern undefined1 LAB_11537630[];
extern undefined1 LAB_11537660[];
extern undefined1 LAB_1153769d[];
extern undefined1 LAB_115376dd[];
extern undefined1 LAB_115377a5[];
extern undefined1 LAB_11537a1d[];
extern undefined1 LAB_11537a5d[];
extern undefined1 LAB_11537c3d[];
extern undefined1 LAB_11537d1d[];
extern undefined1 LAB_11537dad[];
extern undefined1 LAB_11538000[];
extern undefined1 LAB_1153803d[];
extern undefined1 LAB_1153819d[];
extern undefined1 LAB_11538260[];
extern undefined1 LAB_11538290[];
extern undefined1 LAB_115382c0[];
extern undefined1 LAB_115383e0[];
extern undefined1 LAB_11538410[];
extern undefined1 LAB_11538470[];
extern undefined1 LAB_115384a0[];
extern undefined1 LAB_115384d0[];
extern undefined1 LAB_11538515[];
extern undefined1 LAB_11538555[];
extern undefined1 LAB_115385cd[];
extern undefined1 LAB_11538600[];
extern undefined1 LAB_11538630[];
extern undefined1 LAB_11538660[];
extern undefined1 LAB_115386c0[];
extern undefined1 LAB_115386f0[];
extern undefined1 LAB_11538720[];
extern undefined1 LAB_11538a85[];
extern undefined1 LAB_11538ac5[];
extern undefined1 LAB_11538b05[];
extern undefined1 LAB_11538b45[];
extern undefined1 LAB_11538b85[];
extern undefined1 LAB_11538c70[];
extern undefined1 LAB_11538ca0[];
extern undefined1 LAB_11538cd0[];
extern undefined1 LAB_11538e36[];
extern undefined1 LAB_11538eb6[];
extern undefined1 LAB_11539035[];
extern undefined1 LAB_115396fd[];
extern undefined1 LAB_1153973d[];
extern undefined1 LAB_1153977d[];
extern undefined1 LAB_115398d5[];
extern undefined1 LAB_11539a7d[];
extern undefined1 LAB_11539acd[];
extern undefined1 LAB_11539b5d[];
extern undefined1 LAB_11539bd5[];
extern undefined1 LAB_11539d3d[];
extern undefined1 LAB_11539db5[];
extern undefined1 LAB_1153a0ed[];
extern undefined1 LAB_1153a12d[];
extern undefined1 LAB_1153a16d[];
extern undefined1 LAB_1153a225[];
extern undefined1 LAB_1153a265[];
extern undefined1 LAB_1153a38d[];
extern undefined1 LAB_1153a3cd[];
extern undefined1 LAB_1153a40d[];
extern undefined1 LAB_1153a44d[];
extern undefined1 LAB_1153a48d[];
extern undefined1 LAB_1153a4c0[];
extern undefined1 LAB_1153a4f0[];
extern undefined1 LAB_1153a52d[];
extern undefined1 LAB_1153a560[];
extern undefined1 LAB_1153a72d[];
extern undefined1 LAB_1153a950[];
extern undefined1 LAB_1153a9b0[];
extern undefined1 LAB_1153a9e0[];
extern undefined1 LAB_1153aa1d[];
extern undefined1 LAB_1153aa50[];
extern undefined1 LAB_1153ae80[];
extern undefined1 LAB_1153b9bd[];
extern undefined1 LAB_1153ba17[];
extern undefined1 LAB_1153bb70[];
extern undefined1 LAB_1153bbfd[];
extern undefined1 LAB_1153be5d[];
extern undefined1 LAB_1153c025[];
extern undefined1 LAB_1153c065[];
extern undefined1 LAB_1153c0a5[];
extern undefined1 LAB_1153c0ed[];
extern undefined1 LAB_1153c13d[];
extern undefined1 LAB_1153c4cd[];
extern undefined1 LAB_1153c50d[];
extern undefined1 LAB_1153c570[];
extern undefined1 LAB_1153c5a0[];
extern undefined1 LAB_1153c7d0[];
extern undefined1 LAB_1153c800[];
extern undefined1 LAB_1153caa5[];
extern undefined1 LAB_1153cad0[];
extern undefined1 LAB_1153cb4d[];
extern undefined1 LAB_1153cb95[];
extern undefined1 LAB_1153cbdd[];
extern undefined1 LAB_1153ccdd[];
extern undefined1 LAB_1153cd1d[];
extern undefined1 LAB_1153cd5d[];
extern undefined1 LAB_1153ce9d[];
extern undefined1 LAB_1153cedd[];
extern undefined1 LAB_1153d2a0[];
extern undefined1 LAB_1153d360[];
extern undefined1 LAB_1153d390[];
extern undefined1 LAB_1153d410[];
extern undefined1 LAB_1153d44d[];
extern undefined1 LAB_1153d48d[];
extern undefined1 LAB_1153d4cd[];
extern undefined1 LAB_1153d50d[];
extern undefined1 LAB_1153d5f5[];
extern undefined1 LAB_1153d81b[];
extern undefined1 LAB_1153d92d[];
extern undefined1 LAB_1153d96d[];
extern undefined1 LAB_1153d9ad[];
extern undefined1 LAB_1153d9ed[];
extern undefined1 LAB_1153da2d[];
extern undefined1 LAB_1153da6d[];
extern undefined1 LAB_1153daad[];
extern undefined1 LAB_1153daed[];
extern undefined1 LAB_1153db2d[];
extern undefined1 LAB_1153db6d[];
extern undefined1 LAB_1153dbfd[];
extern undefined1 LAB_1153dc3d[];
extern undefined1 LAB_1153e63b[];
extern undefined1 LAB_1153e7e0[];
extern undefined1 LAB_1153e810[];
extern undefined1 LAB_1153e840[];
extern undefined1 LAB_1153e870[];
extern undefined1 LAB_1153e9c0[];
extern undefined1 LAB_1153ea20[];
extern undefined1 LAB_1153ea50[];
extern undefined1 LAB_1153ea80[];
extern undefined1 LAB_1153eab0[];
extern undefined1 LAB_1153eae0[];
extern undefined1 LAB_1153eb10[];
extern undefined1 LAB_1153eb40[];
extern undefined1 LAB_1153eb70[];
extern undefined1 LAB_1153eba0[];
extern undefined1 LAB_1153ebd0[];
extern undefined1 LAB_1153ec00[];
extern undefined1 LAB_1153ec30[];
extern undefined1 LAB_1153ec60[];
extern undefined1 LAB_1153ec90[];
extern undefined1 LAB_1153ecc0[];
extern undefined1 LAB_1153ecf0[];
extern undefined1 LAB_1153ed20[];
extern undefined1 LAB_1153ed50[];
extern undefined1 LAB_1153ed80[];
extern undefined1 LAB_1153edb0[];
extern undefined1 LAB_1153ede0[];
extern undefined1 LAB_1153ee10[];
extern undefined1 LAB_1153ee40[];
extern undefined1 LAB_1153ee70[];
extern undefined1 LAB_1153eea0[];
extern undefined1 LAB_1153eed0[];
extern undefined1 LAB_1153ef00[];
extern undefined1 LAB_1153ef30[];
extern undefined1 LAB_1153ef60[];
extern undefined1 LAB_1153ef90[];
extern undefined1 LAB_1153efc0[];
extern undefined1 LAB_1153eff0[];
extern undefined1 LAB_1153f020[];
extern undefined1 LAB_1153f050[];
extern undefined1 LAB_1153f080[];
extern undefined1 LAB_1153f0b0[];
extern undefined1 LAB_1153f0e0[];
extern undefined1 LAB_1153f110[];
extern undefined1 LAB_1153f140[];
extern undefined1 LAB_1153f170[];
extern undefined1 LAB_1153f1a0[];
extern undefined1 LAB_1153f1d0[];
extern undefined1 LAB_1153f200[];
extern undefined1 LAB_1153f230[];
extern undefined1 LAB_1153f260[];
extern undefined1 LAB_1153f290[];
extern undefined1 LAB_1153f2c0[];
extern undefined1 LAB_1153f2f0[];
extern undefined1 LAB_1153f470[];
extern undefined1 LAB_1153f4a0[];
extern undefined1 LAB_1153f4d0[];
extern undefined1 LAB_1153f500[];
extern undefined1 LAB_1153f530[];
extern undefined1 LAB_1153f560[];
extern undefined1 LAB_1153f590[];
extern undefined1 LAB_1153f5c0[];
extern undefined1 LAB_1153f5f0[];
extern undefined1 LAB_1153f620[];
extern undefined1 LAB_1153f680[];
extern undefined1 LAB_1153f770[];
extern undefined1 LAB_1153f7d0[];
extern undefined1 LAB_1153f800[];
extern undefined1 LAB_1153f830[];
extern undefined1 LAB_1153f860[];
extern undefined1 LAB_1153f8c0[];
extern undefined1 LAB_1153f8f0[];
extern undefined1 LAB_1153f920[];
extern undefined1 LAB_1153f950[];
extern undefined1 LAB_1153f980[];
extern undefined1 LAB_1153f9b0[];
extern undefined1 LAB_1153fa10[];
extern undefined1 LAB_1153fa40[];
extern undefined1 LAB_1153faa0[];
extern undefined1 LAB_1153fad0[];
extern undefined1 LAB_1153fd80[];
extern undefined1 LAB_1153fdb0[];
extern undefined1 LAB_1153fde0[];
extern undefined1 LAB_1153fe10[];
extern undefined1 LAB_1153fe40[];
extern undefined1 LAB_1153fe70[];
extern undefined1 LAB_1153fea0[];
extern undefined1 LAB_1153fed0[];
extern undefined1 LAB_1153ff00[];
extern undefined1 LAB_1153ff30[];
extern undefined1 LAB_1153ff60[];
extern undefined1 LAB_1153ff90[];
extern undefined1 LAB_1153ffc0[];
extern undefined1 LAB_11540080[];
extern undefined1 LAB_115400b0[];
extern undefined1 LAB_115400e0[];
extern undefined1 LAB_11540110[];
extern undefined1 LAB_11540140[];
extern undefined1 LAB_11540170[];
extern undefined1 LAB_115401a0[];
extern undefined1 LAB_115401d0[];
extern undefined1 LAB_11540200[];
extern undefined1 LAB_11540230[];
extern undefined1 LAB_11540290[];
extern undefined1 LAB_115402c0[];
extern undefined1 LAB_11540920[];
extern undefined1 LAB_11540a65[];
extern undefined1 LAB_11540a90[];
extern undefined1 LAB_11540ac0[];
extern undefined1 LAB_11540af0[];
extern undefined1 LAB_11540b20[];
extern undefined1 LAB_11540b8d[];
extern undefined1 LAB_11540e20[];
extern undefined1 LAB_11540e80[];
extern undefined1 LAB_115410fd[];
extern undefined1 LAB_1154113d[];
extern undefined1 LAB_11541185[];
extern undefined1 LAB_115411c5[];
extern undefined1 LAB_11541245[];
extern undefined1 LAB_1154145a[];
extern undefined1 LAB_11541547[];
extern undefined1 LAB_1154175d[];
extern undefined1 LAB_1154183b[];
extern undefined1 LAB_11541a0f[];
extern undefined1 LAB_11541b0f[];
extern undefined1 LAB_11541b6f[];
extern undefined1 LAB_11541bcf[];
extern undefined1 LAB_11541e6f[];
extern undefined1 LAB_11541f10[];
extern undefined1 LAB_11541f6f[];
extern undefined1 LAB_11541fcf[];
extern undefined1 LAB_1154201c[];
extern undefined1 LAB_11542180[];
extern undefined1 LAB_1154230c[];
extern undefined1 LAB_11542564[];
extern undefined1 LAB_115426b0[];
extern undefined1 LAB_11542726[];
extern undefined1 LAB_11542777[];
extern undefined1 LAB_11542970[];
extern undefined1 LAB_115429a0[];
extern undefined1 LAB_115429ed[];
extern undefined1 LAB_11542a2d[];
extern undefined1 LAB_11542b00[];
extern undefined1 LAB_11542b62[];
extern undefined1 LAB_11542bbd[];
extern undefined1 LAB_11542c16[];
extern undefined1 LAB_11542cf0[];
extern undefined1 LAB_11542d3d[];
extern undefined1 LAB_11542d70[];
extern undefined1 LAB_11542dad[];
extern undefined1 LAB_11542de0[];
extern undefined1 LAB_11542e25[];
extern undefined1 LAB_11542e5d[];
extern undefined1 LAB_11542ece[];
extern undefined1 LAB_11542f4e[];
extern undefined1 LAB_11542fe8[];
extern undefined1 LAB_1154329d[];
extern undefined1 LAB_115432ed[];
extern undefined1 LAB_1154332d[];
extern undefined1 LAB_1154337d[];
extern undefined1 LAB_115433bd[];
extern undefined1 LAB_115433fd[];
extern undefined1 LAB_11543497[];
extern undefined1 LAB_115435ed[];
extern undefined1 LAB_11543635[];
extern undefined1 LAB_11543675[];
extern undefined1 LAB_115436ad[];
extern undefined1 LAB_115437c4[];
extern undefined1 LAB_115439a5[];
extern undefined1 LAB_11543a5d[];
extern undefined1 LAB_11543a9d[];
extern undefined1 LAB_11543add[];
extern undefined1 LAB_11543b1d[];
extern undefined1 LAB_11543b65[];
extern undefined1 LAB_11543df4[];
extern undefined1 LAB_11543e37[];
extern undefined1 LAB_11543e87[];
extern undefined1 LAB_11543ed7[];
extern undefined1 LAB_11543f24[];
extern undefined1 LAB_11543f65[];
extern undefined1 LAB_1154403d[];
extern undefined1 LAB_11544070[];
extern undefined1 LAB_115440a0[];
extern undefined1 LAB_115440dd[];
extern undefined1 LAB_1154416d[];
extern undefined1 LAB_1154425d[];
extern undefined1 LAB_115442ad[];
extern undefined1 LAB_115442ed[];
extern undefined1 LAB_115443a6[];
extern undefined1 LAB_115443ed[];
extern undefined1 LAB_1154442d[];
extern int *PTR_s_CachedNumRooms_12119578;
extern int *PTR_s_IsLocalRadioPrepulated_1211957c;
extern int *PTR_s_IsRadioFavoritesPrepulated_12119580;
extern int *stack0x00000004;
extern int *stack0x00000008;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std {}
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int RebindNetworkSockets(A...); template<class... A> int RefreshNetworking(A...); template<class... A> int ResumeNetworking(A...); template<class... A> int SuspendNetworking(A...); template<class... A> int createActionContextForAction(A...); template<class... A> int getSCHousehold(A...); template<class... A> int getSingleton(A...); template<class... A> int int_resumeNetworking(A...); template<class... A> int int_suspendNetworking(A...); template<class... A> int setServiceAppInteropManager(A...); };
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int int_start(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int append(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int length(A...); template<class... A> int op_eq(A...); template<class... A> int stringWithFormat(A...); };
namespace std { template<class...> struct _Parallelism_allocator { char _pad; _Parallelism_allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct allocator { char _pad; allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct greater { char _pad; greater(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct priority_queue { char _pad; priority_queue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct vector { char _pad; vector(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
typedef void *CHN;
typedef void *ERROR;
typedef void *INIT;
typedef void *LOCK;
typedef void *REBINDING;
typedef void *RINCON_;
typedef void *UNLOCK;
typedef void *WARNING;
struct Adding { char _pad; Adding(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Attempt { char _pad; Attempt(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Base { char _pad; Base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Cannot { char _pad; Cannot(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ChannelMapSet { char _pad; ChannelMapSet(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ConnectionManager { char _pad; ConnectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentLEDState { char _pad; CurrentLEDState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DesiredConfiguration { char _pad; DesiredConfiguration(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DesiredIcon { char _pad; DesiredIcon(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DesiredLEDState { char _pad; DesiredLEDState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DesiredTargetRoomName { char _pad; DesiredTargetRoomName(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DesiredZoneName { char _pad; DesiredZoneName(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Device { char _pad; Device(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DeviceProperties { char _pad; DeviceProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Different { char _pad; Different(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FID_conflict__Tidy { char _pad; FID_conflict__Tidy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetLEDState { char _pad; GetLEDState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetProtocolInfo { char _pad; GetProtocolInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetRDM { char _pad; GetRDM(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct HostDeviceID { char _pad; HostDeviceID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct HostMACAddress { char _pad; HostMACAddress(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Initializing { char _pad; Initializing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct KeepGrouped { char _pad; KeepGrouped(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Kicking { char _pad; Kicking(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Library { char _pad; Library(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Matches { char _pad; Matches(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Multiple { char _pad; Multiple(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Names { char _pad; Names(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Not { char _pad; Not(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct OSVersion { char _pad; OSVersion(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Product { char _pad; Product(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Products { char _pad; Products(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RCustRegQueryCountryAIOOp { char _pad; RCustRegQueryCountryAIOOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RebindNetworkSockets { char _pad; RebindNetworkSockets(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RefreshNetworking { char _pad; RefreshNetworking(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Release { char _pad; Release(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RemoveBondedZones { char _pad; RemoveBondedZones(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ResumeNetworking { char _pad; ResumeNetworking(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCDevice { char _pad; SCDevice(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCHousehold { char _pad; SCHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAction { char _pad; SCIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINetworkManagement { char _pad; SCINetworkManagement(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlayingTransport { char _pad; SCINowPlayingTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIPortableDevice { char _pad; SCIPortableDevice(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIPropertyBag { char _pad; SCIPropertyBag(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCISearchable { char _pad; SCISearchable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIServiceAppInteropManager { char _pad; SCIServiceAppInteropManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCITimeZone { char _pad; SCITimeZone(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIZoneGroupMgr { char _pad; SCIZoneGroupMgr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLibInit { char _pad; SCLibInit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCReportManager { char _pad; SCReportManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCServiceDescriptorManager { char _pad; SCServiceDescriptorManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCUsageRequest { char _pad; SCUsageRequest(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWeakRefMgr { char _pad; SCWeakRefMgr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SPClient { char _pad; SPClient(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Scans { char _pad; Scans(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Screen { char _pad; Screen(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetLEDState { char _pad; SetLEDState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Source { char _pad; Source(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Studio { char _pad; Studio(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SuspendNetworking { char _pad; SuspendNetworking(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SwfObjMusicServiceDiscovery { char _pad; SwfObjMusicServiceDiscovery(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Visual { char _pad; Visual(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct We { char _pad; We(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct With { char _pad; With(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; int * __thiscall FUN_102e6700(int *param_2); undefined8 * __thiscall FUN_102ea4e0(undefined8 *param_2); int * __thiscall FUN_102ed720(int *param_2); int * __thiscall FUN_102ed790(int *param_2); int * __thiscall FUN_102ed800(int *param_2); int * __thiscall FUN_102ed870(int *param_2); int * __thiscall FUN_102ed8e0(int *param_2); int * __thiscall FUN_102ed950(int *param_2); int * __thiscall FUN_102ed9c0(int *param_2); int * __thiscall FUN_102eda30(int *param_2); int * __thiscall FUN_102edaa0(int *param_2); int * __thiscall FUN_102edb10(int *param_2); int * __thiscall FUN_102edb80(int *param_2); int * __thiscall FUN_102edbf0(int *param_2); int * __thiscall FUN_102edc60(int *param_2); int * __thiscall FUN_102edcd0(int *param_2); int * __thiscall FUN_102edd40(int *param_2); int * __thiscall FUN_102eddb0(int *param_2); int * __thiscall FUN_102ede20(int *param_2); int * __thiscall FUN_102ee850(byte param_2); undefined4 * __thiscall FUN_102ee930(byte param_2); undefined4 * __thiscall FUN_102eea40(byte param_2); undefined4 * __thiscall FUN_102eec40(byte param_2); undefined4 * __thiscall FUN_102eefe0(byte param_2); undefined4 * __thiscall FUN_102ef090(byte param_2); void __thiscall FUN_102efdc0(bool param_2); void __thiscall FUN_102f3270(int *param_2); void __thiscall FUN_102f3e60(undefined4 param_2); int * __thiscall FUN_102f4e90(int *param_2); void __thiscall FUN_102f4ff0(undefined4 *param_2); int * __thiscall FUN_102f50c0(int *param_2); void __thiscall FUN_102f51c0(undefined4 *param_2); void __thiscall FUN_102f5260(undefined4 *param_2); undefined4 * __thiscall FUN_102f5340(undefined4 *param_2,int *param_3); void __thiscall FUN_102f5620(undefined4 *param_2); void __thiscall FUN_102f56c0(undefined4 *param_2); int * __thiscall FUN_102f5860(int *param_2); undefined4 * __thiscall FUN_102f7150(undefined4 *param_2); int * __thiscall FUN_102f9110(int *param_2); undefined4 * __thiscall FUN_102f9320(undefined4 *param_2); void __thiscall FUN_102f93b0(int *param_2); void __thiscall FUN_102f9430(undefined4 *param_2); void __thiscall FUN_102f94d0(undefined4 *param_2); int * __thiscall FUN_102fcc20(int *param_2,undefined4 param_3); int * __thiscall FUN_102fcce0(int *param_2); int * __thiscall FUN_102fcdd0(int *param_2); int * __thiscall FUN_102fcec0(int *param_2); void __thiscall FUN_102fde70(undefined4 param_2); void __thiscall FUN_102fe1e0(int *param_2); void __thiscall FUN_10300800(undefined1 param_2); void __thiscall FUN_10301170(undefined4 param_2); void __thiscall FUN_10302970(undefined4 *param_2); uint * __thiscall FUN_10303490(int *param_2); void __thiscall FUN_10304000(int *param_2,undefined4 param_3,uint param_4); undefined8 * __thiscall FUN_10304e70(undefined8 *param_2); undefined4 * __thiscall FUN_10305050(undefined4 param_2); uint * __thiscall FUN_103051d0(int *param_2); undefined4 * __thiscall FUN_10305630(undefined4 param_2,int param_3); int * __thiscall FUN_103067a0(int *param_2); undefined4 * __thiscall FUN_10306b10(byte param_2); undefined4 * __thiscall FUN_10306da0(byte param_2); undefined4 * __thiscall FUN_10306e20(byte param_2); uint __thiscall FUN_10307160(int param_2); void __thiscall FUN_10307210(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10307c40(int param_2); void __thiscall FUN_10307d00(int param_2); void __thiscall FUN_10307ea0(int *param_2); void __thiscall FUN_10309870(int param_2); void __thiscall FUN_10309ae0(undefined4 param_2,undefined2 param_3); undefined4 __thiscall FUN_1030b090(void *param_2,uint param_3,size_t *param_4); void __thiscall FUN_1030b1f0(int param_2); void __thiscall FUN_1030b340(uint param_2); undefined4 * __thiscall FUN_1030e5d0(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_1030e860(int *param_2,byte *param_3); void __thiscall FUN_1030e8e0(int *param_2,byte *param_3); int __thiscall FUN_103102d0(byte param_2); float __thiscall FUN_103109e0(int param_2); float __thiscall FUN_10310a90(int param_2); float __thiscall FUN_10310b40(int param_2); void __thiscall FUN_10311740(int param_2); void __thiscall FUN_103117b0(int param_2); void __thiscall FUN_10311820(int param_2); int __thiscall FUN_10312640(int *param_2); undefined4 __thiscall FUN_10313200(byte *param_2); undefined4 __thiscall FUN_10313310(byte *param_2); undefined4 __thiscall FUN_10313400(byte *param_2); undefined4 * __thiscall FUN_10313500(undefined4 *param_2,uint param_3,int *param_4); void __thiscall FUN_10313720(undefined4 param_2,undefined1 *param_3); void __thiscall FUN_103138c0(uint param_2); undefined1 __thiscall FUN_103139d0(undefined4 param_2,undefined4 param_3,int param_4); void __thiscall FUN_10313b00(uint param_2,char *param_3); void __thiscall FUN_10313c90(uint param_2,uint param_3); longlong __thiscall FUN_10313e80(undefined4 param_2,undefined4 param_3); int * __thiscall FUN_10314330(int *param_2); undefined4 * __thiscall FUN_10315360(int param_2); undefined4 * __thiscall FUN_103153f0(int param_2); undefined4 * __thiscall FUN_10315480(int param_2); undefined4 * __thiscall FUN_10315510(int param_2); undefined4 * __thiscall FUN_103155a0(int param_2); undefined4 * __thiscall FUN_10315780(int param_2); undefined4 * __thiscall FUN_103158e0(int param_2); undefined4 * __thiscall FUN_10315a40(int param_2); undefined4 * __thiscall FUN_10315ba0(int param_2); undefined4 * __thiscall FUN_10315d00(int param_2); undefined4 * __thiscall FUN_103167c0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); undefined4 * __thiscall FUN_10317010(int param_2); undefined4 * __thiscall FUN_10317180(int param_2); undefined4 * __thiscall FUN_103172f0(int param_2); undefined4 * __thiscall FUN_10317460(int param_2); undefined4 * __thiscall FUN_103175d0(int param_2); undefined4 * __thiscall FUN_10317740(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10319c10(byte param_2); void __thiscall FUN_10319d30(int param_2,int param_3,int param_4); void __thiscall FUN_1031a1e0(int *param_2,undefined4 param_3); void __thiscall FUN_1031a2c0(int *param_2,undefined4 param_3); void __thiscall FUN_1031a3a0(int *param_2,undefined4 param_3); void __thiscall FUN_1031a480(int *param_2,undefined4 param_3); void __thiscall FUN_1031a560(int *param_2,undefined4 param_3); void __thiscall FUN_1031a6d0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
            undefined4 *param_9,undefined4 param_10,undefined4 *param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14); undefined4 * __thiscall FUN_1031bb20(undefined4 *param_2); undefined4 * __thiscall FUN_1031be20(undefined4 *param_2); undefined4 * __thiscall FUN_1031d730(undefined4 *param_2,char param_3); void __thiscall FUN_1031e610(undefined4 *param_2); undefined4 * __thiscall FUN_1031f9a0(undefined4 *param_2); undefined4 __thiscall FUN_10321b70(undefined4 param_2); undefined4 * __thiscall FUN_103230a0(undefined4 *param_2); undefined4 * __thiscall FUN_10323ce0(undefined4 *param_2); int * __thiscall FUN_10326940(int *param_2); int * __thiscall FUN_10326a80(int *param_2); int * __thiscall FUN_10326b90(int *param_2); int * __thiscall FUN_10326ca0(int *param_2); void __thiscall FUN_10329000(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10329130(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10329260(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10329390(undefined4 param_2,undefined4 param_3); void __thiscall FUN_103294c0(undefined4 param_2,undefined4 param_3); undefined1 __thiscall FUN_1032aa20(undefined4 *param_2); undefined4 __thiscall FUN_1032ad10(undefined4 param_2); undefined4 __thiscall FUN_1032add0(undefined4 param_2); undefined4 * __thiscall FUN_1032c060(undefined4 *param_2,int param_3); undefined4 * __thiscall FUN_1032c4f0(int param_2); undefined4 * __thiscall FUN_1032c580(int param_2); undefined4 * __thiscall FUN_1032c610(int param_2); undefined4 * __thiscall FUN_1032c6a0(int param_2); undefined4 * __thiscall FUN_1032c730(int param_2); void __thiscall FUN_1032ea90(undefined4 *param_2); undefined4 * __thiscall FUN_1032ee10(int param_2,undefined4 *param_3); int __thiscall FUN_1032eff0(int param_2,undefined4 param_3); undefined4 __thiscall FUN_1032f330(undefined4 param_2,int *param_3); undefined4 __thiscall FUN_1032f400(undefined4 param_2,int *param_3); int * __thiscall FUN_1032fa50(int *param_2,int *param_3); int * __thiscall FUN_1032fab0(int *param_2,int *param_3); int * __thiscall FUN_103313c0(int *param_2,int *param_3); void __thiscall FUN_10332040(undefined4 *param_2); int __thiscall FUN_10333e30(int *param_2); int __thiscall FUN_10333ea0(int param_2); undefined4 * __thiscall FUN_10334170(undefined4 *param_2); int __thiscall FUN_10334790(int *param_2); int __thiscall FUN_10334800(int param_2); int __thiscall FUN_10334b20(int *param_2); int __thiscall FUN_10334b90(int param_2); int __thiscall FUN_10334d60(int *param_2); int __thiscall FUN_10334dd0(int param_2); undefined4 * __thiscall FUN_10335530(undefined4 param_2); int __thiscall FUN_103355b0(int *param_2); int __thiscall FUN_10335620(int param_2); int __thiscall FUN_10335af0(int *param_2); int __thiscall FUN_10335b60(int param_2); int * __thiscall FUN_10336d40(int *param_2); int * __thiscall FUN_10336db0(int *param_2); int * __thiscall FUN_10336eb0(int *param_2,int *param_3); int * __thiscall FUN_10337030(int *param_2,int *param_3); int __thiscall FUN_103374d0(int *param_2); int __thiscall FUN_10337f50(byte param_2); int __thiscall FUN_10337ff0(byte param_2); int __thiscall FUN_10338090(byte param_2); int __thiscall FUN_103381c0(byte param_2); int __thiscall FUN_10338250(byte param_2); undefined4 * __thiscall FUN_10338450(byte param_2); void __thiscall FUN_10338790(uint param_2); void __thiscall FUN_10338890(int param_2,int param_3,int param_4); void __thiscall FUN_10339200(char param_2); void __thiscall FUN_103393e0(char param_2); void __thiscall FUN_103394a0(char param_2); void __thiscall FUN_1033ab00(int param_2); void __thiscall FUN_1033b120(int *param_2); uint __thiscall FUN_1033c180(undefined4 param_2,uint param_3); uint __thiscall FUN_1033c720(uint param_2); void __thiscall FUN_1033ca80(int *param_2,int param_3); void __thiscall FUN_1033caf0(int *param_2,int *param_3); int * __thiscall FUN_1033cd00(int *param_2,int param_3); undefined4 __thiscall FUN_1033d2d0(undefined4 param_2); uint __thiscall FUN_1033f4f0(uint param_2); void __thiscall FUN_1033f940(undefined4 param_2); void __thiscall FUN_1033fa20(undefined4 param_2); void __thiscall FUN_1033fb00(undefined4 param_2,undefined4 param_3,undefined4 param_4); void __thiscall FUN_10340020(undefined4 param_2); void __thiscall FUN_103409a0(undefined4 param_2); void __thiscall FUN_10342b80(undefined4 *param_2); void __thiscall FUN_10342f80(int param_2,undefined4 param_3); undefined4 * __thiscall FUN_10343420(undefined4 *param_2,int param_3,undefined4 param_4); int * __thiscall FUN_10343fa0(int *param_2); void __thiscall FUN_103441a0(undefined4 *param_2); int * __thiscall FUN_103443d0(undefined4 *param_2,int param_3,undefined4 param_4); void __thiscall FUN_10344500(undefined4 *param_2); undefined4 * __thiscall FUN_10344600(void *param_2,undefined4 *param_3); void __thiscall FUN_103447b0(undefined4 param_2); int * __thiscall FUN_10344960(int *param_2,int *param_3); int * __thiscall FUN_10344c20(int *param_2,int *param_3); void __thiscall FUN_103452c0(int *param_2,byte *param_3); int * __thiscall FUN_10345e10(int *param_2); int __thiscall FUN_10347240(int *param_2); int __thiscall FUN_10347520(byte param_2); void __thiscall FUN_10347850(int param_2,int param_3,int param_4); float __thiscall FUN_10347970(int param_2); void __thiscall FUN_10348090(int param_2); void __thiscall FUN_1034cf20(int *param_2,int *param_3); undefined4 __thiscall FUN_1034d250(undefined4 param_2); undefined8 __thiscall FUN_1034d590(uint param_2); uint __thiscall FUN_1034d6c0(uint param_2); undefined4 __thiscall FUN_1034dcf0(undefined4 param_2); undefined4 * __thiscall FUN_1034de40(undefined4 *param_2); bool __thiscall FUN_1034e4a0(int *param_2); void __thiscall FUN_1034e8c0(undefined4 param_2,undefined4 param_3,undefined1 *param_4); undefined4 * __thiscall FUN_1034ebe0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1034fbd0(int param_2); int * __thiscall FUN_10350870(int *param_2); int * __thiscall FUN_10350910(int *param_2); int * __thiscall FUN_103509f0(undefined4 *param_2); int * __thiscall FUN_10350b70(int *param_2); int * __thiscall FUN_10350bf0(int *param_2); int * __thiscall FUN_10350cd0(int *param_2); int * __thiscall FUN_10350e30(int *param_2); int * __thiscall FUN_10351370(int *param_2); int * __thiscall FUN_103522f0(int *param_2); undefined4 * __thiscall FUN_10353440(void *param_2,undefined4 *param_3); void __thiscall FUN_10354880(int param_2,int param_3,int param_4); int __thiscall FUN_103582e0(int *param_2,undefined4 param_3); void __thiscall FUN_10358da0(int *param_2,int *param_3); void __thiscall FUN_103590c0(int *param_2,byte *param_3); undefined4 * __thiscall FUN_10359ee0(int param_2); undefined4 * __thiscall FUN_1035a110(undefined4 param_2,undefined4 param_3,int param_4); undefined4 * __thiscall FUN_1035aaf0(int param_2); int __thiscall FUN_1035c2f0(int param_2); int __thiscall FUN_1035c370(int param_2); int __thiscall FUN_1035c3f0(int param_2); int __thiscall FUN_1035c470(int param_2); int __thiscall FUN_1035c4f0(int param_2); int __thiscall FUN_1035c570(int param_2); int __thiscall FUN_1035c5f0(int param_2); int __thiscall FUN_1035c670(int param_2); int __thiscall FUN_1035c6f0(int *param_2); int __thiscall FUN_1035c760(int param_2); int __thiscall FUN_1035c7f0(int param_2); int * __thiscall FUN_1035cac0(int *param_2); int * __thiscall FUN_1035ccc0(int *param_2); undefined4 * __thiscall FUN_1035cdc0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); undefined4 * __thiscall FUN_1035f500(undefined4 param_2); undefined4 * __thiscall FUN_1035fa80(int param_2); int * __thiscall FUN_10365a60(int *param_2); int * __thiscall FUN_10365ad0(int *param_2); int * __thiscall FUN_10365b40(int *param_2); int * __thiscall FUN_10365bb0(int *param_2); int * __thiscall FUN_10365c20(int *param_2); int * __thiscall FUN_10365c90(int *param_2); int * __thiscall FUN_10365d00(int *param_2); int * __thiscall FUN_10365d70(int *param_2); int * __thiscall FUN_10365de0(int *param_2); int * __thiscall FUN_10365e50(int *param_2); int * __thiscall FUN_10365f20(int *param_2); int * __thiscall FUN_10365f90(int *param_2); int * __thiscall FUN_10366000(int *param_2); int * __thiscall FUN_10366070(int *param_2); int * __thiscall FUN_103660e0(int *param_2); int * __thiscall FUN_10366150(int *param_2); int * __thiscall FUN_103661c0(int *param_2); int * __thiscall FUN_10366290(int *param_2); int * __thiscall FUN_103663c0(int *param_2); int * __thiscall FUN_10366430(int *param_2); int * __thiscall FUN_10366500(int *param_2); int * __thiscall FUN_10367510(int *param_2); undefined4 * __thiscall FUN_10368300(byte param_2); undefined4 * __thiscall FUN_103684d0(byte param_2); undefined4 * __thiscall FUN_10368540(byte param_2); undefined4 * __thiscall FUN_103685b0(byte param_2); undefined4 * __thiscall FUN_10368620(byte param_2); undefined4 * __thiscall FUN_10368690(byte param_2); undefined4 * __thiscall FUN_10368700(byte param_2); undefined4 * __thiscall FUN_103687d0(byte param_2); undefined4 * __thiscall FUN_10368860(byte param_2); undefined4 * __thiscall FUN_103688f0(byte param_2); undefined4 * __thiscall FUN_10368990(byte param_2); undefined4 * __thiscall FUN_10368a30(byte param_2); undefined4 * __thiscall FUN_10368ad0(byte param_2); undefined4 * __thiscall FUN_10368b70(byte param_2); int __thiscall FUN_10368c10(byte param_2); int __thiscall FUN_10368ca0(byte param_2); int __thiscall FUN_10368d30(byte param_2); int __thiscall FUN_10368dc0(byte param_2); int __thiscall FUN_10368ea0(byte param_2); undefined4 * __thiscall FUN_103696b0(byte param_2); undefined4 * __thiscall FUN_103697e0(byte param_2); undefined4 * __thiscall FUN_103698e0(byte param_2); undefined4 * __thiscall FUN_10369a00(byte param_2); undefined4 * __thiscall FUN_10369b10(byte param_2); undefined4 * __thiscall FUN_10369c50(byte param_2); undefined4 * __thiscall FUN_10369d00(byte param_2); undefined4 * __thiscall FUN_10369df0(byte param_2); undefined4 * __thiscall FUN_10369ed0(byte param_2); undefined4 * __thiscall FUN_10369f30(byte param_2); undefined4 * __thiscall FUN_10369fe0(byte param_2); undefined4 * __thiscall FUN_1036a2f0(byte param_2); undefined4 * __thiscall FUN_1036a390(byte param_2); void __thiscall FUN_1036a9f0(int param_2,int param_3,int param_4); void __thiscall FUN_1036aab0(int param_2,int param_3,int param_4); void __thiscall FUN_1036ab40(int param_2,int param_3,int param_4); void __thiscall FUN_1036b0e0(char param_2); void __thiscall FUN_1036b190(char param_2); void __thiscall FUN_1036b2a0(char param_2); void __thiscall FUN_1036b330(char param_2); float __thiscall FUN_1036b450(int param_2); void __thiscall FUN_1036b6a0(int *param_2); void __thiscall FUN_1036d400(int param_2); void __thiscall FUN_1036d470(int param_2); void __thiscall FUN_1036d670(int param_2); void __thiscall FUN_1036dc30(int *param_2); void __thiscall FUN_1036dca0(int *param_2); int __thiscall FUN_1036eb10(int *param_2); int __thiscall FUN_1036eec0(int *param_2); void __thiscall FUN_103701d0(int *param_2,undefined4 param_3); undefined4 * __thiscall FUN_10372b70(undefined4 *param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_103735c0(undefined4 *param_2); undefined4 * __thiscall FUN_103754a0(undefined4 *param_2); undefined4 * __thiscall FUN_103760d0(undefined4 *param_2); undefined4 __thiscall FUN_103786d0(undefined4 param_2); undefined4 * __thiscall FUN_10378a20(undefined4 *param_2); undefined4 * __thiscall FUN_10378d00(undefined4 *param_2); undefined4 * __thiscall FUN_10379660(undefined4 *param_2); void __thiscall FUN_10379750(int *param_2); undefined4 * __thiscall FUN_103797c0(undefined4 *param_2); int * __thiscall FUN_10379c90(int *param_2); undefined4 * __thiscall FUN_1037a030(undefined4 *param_2); undefined4 * __thiscall FUN_1037a700(undefined4 *param_2); undefined4 * __thiscall FUN_1037a790(undefined4 *param_2); undefined4 * __thiscall FUN_1037a8f0(undefined4 *param_2); undefined4 * __thiscall FUN_1037aa20(undefined4 *param_2); undefined1 * __thiscall FUN_1037c500(undefined1 *param_2); int * __thiscall FUN_1037c8f0(int *param_2); undefined4 * __thiscall FUN_1037d5c0(undefined4 *param_2); int __thiscall FUN_1037ed00(undefined4 param_2); int * __thiscall FUN_1037edf0(int *param_2,int param_3,undefined4 param_4); undefined4 * __thiscall FUN_1037f020(undefined4 *param_2); int __thiscall FUN_10380570(undefined4 param_2); int __thiscall FUN_10380660(undefined4 param_2); int __thiscall FUN_10380760(undefined4 param_2); int __thiscall FUN_10380860(undefined4 param_2); int __thiscall FUN_10380960(undefined4 param_2); undefined4 * __thiscall FUN_10380ef0(undefined4 *param_2); undefined4 * __thiscall FUN_10380f80(undefined4 *param_2); };
using namespace std;
void FUN_102e6d60(undefined4 param_1,undefined4 *param_2);
void FUN_102e6ed0(undefined4 param_1,int param_2);
int * FUN_102e71d0(int *param_1,int *param_2,code *param_3);
void FUN_102e74f0(int param_1,int param_2,code *param_3);
void FUN_102e7730(int param_1,undefined4 *param_2,undefined4 *param_3,code *param_4);
int * FUN_102e78c0(int *param_1,int *param_2,int *param_3);
void FUN_102e8580(int param_1,int param_2,uint param_3,undefined4 param_4,code *param_5);
void FUN_102e87c0(int *param_1,int param_2,undefined4 param_3);
void FUN_102e88e0(int param_1,int param_2,int param_3,int *param_4,code *param_5);
void FUN_102e8a60(int *param_1,int param_2,undefined4 param_3);
void FUN_102e8bc0(int *param_1,int param_2,int param_3,undefined4 param_4);
void FUN_102e95f0(undefined4 param_1,int *param_2);
void FUN_102e9720(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_102e9900(int *param_1,int *param_2);
void FUN_102e9a40(int *param_1,int *param_2);
ulonglong * __fastcall FUN_102e9b80(ulonglong *param_1);
ulonglong * __fastcall FUN_102eaab0(ulonglong *param_1);
void __fastcall FUN_102ebb30(undefined4 *param_1);
void __fastcall FUN_102ebba0(undefined4 *param_1);
void __fastcall FUN_102ebc10(undefined4 *param_1);
void __fastcall FUN_102ebc80(undefined4 *param_1);
void __fastcall FUN_102ebcf0(undefined4 *param_1);
void __fastcall FUN_102ebd60(undefined4 *param_1);
void __fastcall FUN_102ebdd0(undefined4 *param_1);
void __fastcall FUN_102ebe40(int *param_1);
void __fastcall FUN_102ebea0(int *param_1);
void __fastcall FUN_102ebf00(int *param_1);
void __fastcall FUN_102ebf60(int *param_1);
void __fastcall FUN_102ec3d0(int param_1);
void __fastcall FUN_102ec440(int *param_1);
void __fastcall FUN_102ec600(int *param_1);
void __fastcall FUN_102ec850(int *param_1);
void __fastcall FUN_102ec930(undefined4 *param_1);
void __fastcall FUN_102ec9c0(undefined4 *param_1);
void __fastcall FUN_102ecb70(undefined4 *param_1);
void __fastcall FUN_102ed5a0(undefined4 *param_1);
void __fastcall FUN_102ed630(undefined4 *param_1);
void __fastcall FUN_102ef200(int param_1);
void __fastcall FUN_102ef300(int param_1);
void __fastcall FUN_102ef450(SCLibrary *param_1);
void __fastcall FUN_102f05b0(int *param_1);
void __fastcall FUN_102f0620(int *param_1);
uint FUN_102f0ff0(int param_1);
void FUN_102f1270(undefined4 *param_1,undefined1 *param_2);
undefined4 * FUN_102f1660(undefined4 *param_1,int param_2);
undefined4 * FUN_102f28f0(undefined4 *param_1);
undefined4 * FUN_102f3f40(undefined4 *param_1);
undefined1 __fastcall FUN_102f5550(int *param_1);
undefined4 * __stdcall FUN_102f5ad0(undefined4 *param_1);
undefined4 FUN_102f71e0(undefined4 param_1);
undefined4 FUN_102f8250(undefined4 param_1);
int __fastcall FUN_102f9570(int param_1);
void FUN_102fc4b0(int param_1);
void __fastcall FUN_102fc510(int param_1);
void __fastcall FUN_102fe390(int param_1);
void __fastcall FUN_10301df0(int param_1);
undefined4 * __fastcall FUN_103025c0(undefined4 *param_1);
void __fastcall FUN_103026f0(undefined4 *param_1);
void FUN_10304a70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
ulonglong * __fastcall FUN_10304d20(ulonglong *param_1);
uint * __fastcall FUN_10304f90(uint *param_1);
ulonglong * __fastcall FUN_103053f0(ulonglong *param_1);
undefined4 * __fastcall FUN_103056e0(undefined4 *param_1);
void __fastcall FUN_10305f70(int param_1);
void __fastcall FUN_10305ff0(int *param_1);
void __fastcall FUN_10306530(undefined4 *param_1);
void __fastcall FUN_10306740(int *param_1);
void __fastcall FUN_10307db0(int param_1);
void __fastcall FUN_10307f60(int *param_1);
undefined4 __fastcall FUN_10308b80(int param_1);
void __fastcall FUN_10308c20(int param_1);
undefined1
FUN_10308e00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void FUN_10308fd0(undefined4 param_1);
undefined4 __fastcall FUN_10309240(int param_1);
uint * FUN_10309390(uint *param_1);
void FUN_10309500(void);
undefined1 FUN_103095b0(void);
undefined4 FUN_10309690(void);
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void FUN_10309e90(undefined4 param_1,undefined4 param_2,int param_3);
void FUN_10309ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void FUN_1030a0d0(undefined4 param_1,undefined4 param_2,int param_3,int param_4);
void FUN_1030b100(void);
void FUN_1030b680(void);
void __fastcall FUN_1030b7d0(int param_1);
void FUN_1030bb20(void);
void __fastcall FUN_1030be20(void *param_1);
void FUN_1030c120(int param_1,int param_2);
void __fastcall FUN_1030c220(int param_1);
void FUN_1030c310(undefined4 param_1,undefined4 *param_2);
void FUN_1030d760(undefined4 param_1,undefined4 *param_2);
void FUN_1030e6e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_1030e760(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_1030e7e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
int __fastcall FUN_1030f390(int param_1);
void __fastcall FUN_1030f6e0(int param_1);
void __fastcall FUN_1030f760(int param_1);
void __fastcall FUN_1030f810(int param_1);
void __fastcall FUN_1030f8c0(int *param_1);
void __fastcall FUN_1030f930(int *param_1);
void __fastcall FUN_1030f9a0(int *param_1);
void __fastcall FUN_1030fa50(int param_1);
void __fastcall FUN_103107a0(int *param_1);
void __fastcall FUN_103118f0(float *param_1);
void __fastcall FUN_103119a0(float *param_1);
void __fastcall FUN_10311a50(float *param_1);
void __fastcall FUN_10311b60(int *param_1);
void __fastcall FUN_10311bd0(int *param_1);
void __fastcall FUN_10311c40(int *param_1);
longlong __fastcall FUN_103140d0(int param_1);
void __fastcall FUN_10317fb0(undefined4 *param_1);
void __fastcall FUN_10318020(undefined4 *param_1);
void __fastcall FUN_10318090(undefined4 *param_1);
void __fastcall FUN_10318100(undefined4 *param_1);
void __fastcall FUN_10318170(undefined4 *param_1);
void __fastcall FUN_103181e0(undefined4 *param_1);
void __fastcall FUN_10318250(undefined4 *param_1);
void __fastcall FUN_103182c0(undefined4 *param_1);
void __fastcall FUN_10318330(undefined4 *param_1);
void __fastcall FUN_103183a0(undefined4 *param_1);
void __fastcall FUN_10318410(undefined4 *param_1);
void __fastcall FUN_10318480(undefined4 *param_1);
void __fastcall FUN_10318ef0(undefined4 *param_1);
void __fastcall FUN_1031a000(int param_1);
void __fastcall FUN_1031a060(int param_1);
void __fastcall FUN_1031a0c0(int param_1);
void __fastcall FUN_1031a120(int param_1);
void __fastcall FUN_1031a180(int param_1);
void * FUN_1031b010(uint param_1);
void __fastcall FUN_1031b2c0(int param_1);
undefined4 * FUN_1031cd00(undefined4 *param_1,undefined4 param_2);
undefined4 * FUN_1031cd90(undefined4 *param_1,undefined4 param_2);
undefined4 * FUN_1031ce20(undefined4 *param_1,undefined4 param_2);
undefined4 * FUN_1031ceb0(undefined4 *param_1,undefined4 param_2);
undefined4 * __stdcall FUN_1031e470(undefined4 *param_1);
undefined4 * __stdcall FUN_1031ead0(undefined4 *param_1);
undefined4 FUN_1031f610(undefined4 param_1);
uint * __stdcall FUN_10320d20(uint *param_1);
undefined1 * __fastcall FUN_10321510(int param_1);
bool FUN_10325c50(void);
bool __fastcall FUN_10326130(int param_1);
bool FUN_10326200(void);
void __fastcall FUN_10326e50(int *param_1);
void __fastcall FUN_10327020(int *param_1);
void __fastcall FUN_10327180(int *param_1);
undefined4 __fastcall FUN_10327820(int param_1);
bool __fastcall FUN_103278c0(int *param_1);
undefined1 * __fastcall FUN_10327a90(int param_1);
undefined1 * __fastcall FUN_10327c40(int param_1);
undefined4 __fastcall FUN_10327e20(int *param_1);
undefined4 __fastcall FUN_10327ff0(int *param_1);
void __fastcall FUN_10328900(int param_1);
void __fastcall FUN_103289a0(int param_1);
void __fastcall FUN_10328a40(int param_1);
void __fastcall FUN_10328ae0(int param_1);
void __fastcall FUN_10328b80(int param_1);
undefined4 * __stdcall FUN_10328c20(undefined4 *param_1,undefined4 *param_2);
undefined4 * __stdcall FUN_10328d60(undefined4 *param_1,undefined4 *param_2);
int __fastcall FUN_1032ac40(int param_1);
undefined4 __fastcall FUN_1032b3e0(int *param_1);
void __stdcall FUN_1032e1b0(int *param_1);
void __stdcall FUN_1032e270(int *param_1);
void FUN_1032fc30(undefined4 param_1,int param_2);
void FUN_1032fcb0(undefined4 param_1,int param_2);
undefined4 * FUN_1032fde0(int param_1);
undefined4 * FUN_1032ff00(int param_1);
undefined4 * FUN_10330020(int param_1);
undefined4 * FUN_10330140(int param_1);
undefined4 * FUN_10330260(int param_1);
undefined4 * FUN_10331820(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_10331c30(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_10331ea0(undefined4 param_1,int param_2);
void FUN_10331f10(undefined4 param_1,int param_2);
int * FUN_10332270(int *param_1,int *param_2);
void FUN_10333050(undefined4 *param_1,int *param_2,int *param_3);
void __fastcall FUN_10335d40(undefined4 *param_1);
void __fastcall FUN_10335db0(undefined4 *param_1);
void __fastcall FUN_10335e20(undefined4 *param_1);
void __fastcall FUN_10336360(int param_1);
void __fastcall FUN_10336400(int param_1);
void __fastcall FUN_103366c0(int param_1);
void __fastcall FUN_10336730(int param_1);
void __fastcall FUN_103367d0(int *param_1);
void __fastcall FUN_10336930(undefined4 *param_1);
int * __fastcall FUN_10337960(int *param_1);
int * __fastcall FUN_10337a00(int *param_1);
undefined4 * __fastcall FUN_103389b0(int param_1);
undefined4 * __fastcall FUN_10338a50(int param_1);
undefined4 * __fastcall FUN_10338af0(int param_1);
undefined4 * __fastcall FUN_10338b90(int param_1);
undefined4 * __fastcall FUN_10338c30(int param_1);
void __fastcall FUN_1033b4f0(int *param_1);
void * FUN_1033bef0(uint param_1);
void * FUN_1033bf70(uint param_1);
void __fastcall FUN_1033c100(int *param_1);
void FUN_1033cb50(int *param_1);
void FUN_103407f0(void);
void FUN_10340d10(void);
undefined4 __stdcall FUN_10340e50(undefined4 param_1);
undefined4 __stdcall FUN_10341540(undefined4 param_1);
undefined4 __stdcall FUN_10341660(undefined4 param_1);
undefined4 __stdcall FUN_10342840(undefined4 param_1);
undefined4 __stdcall FUN_10342a00(int *param_1);
void FUN_10342fe0(void);
void FUN_103431e0(void);
void FUN_10344230(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void FUN_10344a10(undefined4 param_1,undefined4 *param_2);
void FUN_10344ae0(undefined4 param_1,int param_2);
void FUN_10344ec0(undefined4 param_1,int param_2);
void FUN_10345240(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_103469a0(int param_1);
void __fastcall FUN_10346a50(int param_1);
void __fastcall FUN_10346ad0(int *param_1);
void __fastcall FUN_10346c80(int param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10346d00(int *param_1);
void __fastcall FUN_10346d70(undefined4 *param_1);
void __fastcall FUN_10347780(int *param_1);
void __fastcall FUN_10348120(float *param_1);
void __fastcall FUN_10348210(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_103482a0(int *param_1);
void FUN_103486c0(void);
longlong __fastcall FUN_10348740(int param_1);
void __fastcall FUN_10349090(int param_1);
longlong FUN_1034d9a0(undefined4 param_1);
void __fastcall FUN_1034e2f0(int param_1);
void __fastcall FUN_103524c0(int *param_1);
void FUN_103526c0(undefined4 *param_1,int *param_2);
void FUN_10352a90(undefined4 *param_1,undefined4 *param_2);
void FUN_10352b30(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_103539c0(undefined4 param_1,int *param_2);
void FUN_10353e20(undefined4 param_1,undefined4 *param_2);
void FUN_10353f60(undefined4 param_1,int param_2);
undefined4 * FUN_10354650(int param_1);
int * FUN_10355130(int *param_1,int *param_2,code *param_3);
void FUN_103554a0(int param_1,int param_2,code *param_3);
void FUN_103556e0(int param_1,undefined4 *param_2,undefined4 *param_3,code *param_4);
int * FUN_10355870(int *param_1,int *param_2,int *param_3);
int * FUN_10355970(int *param_1,int *param_2,int *param_3);
int * FUN_103559f0(int *param_1,int *param_2,int *param_3);
void FUN_103566d0(int param_1,int param_2,uint param_3,undefined4 param_4,code *param_5);
void FUN_10356910(int *param_1,int param_2,undefined4 param_3);
void FUN_10356a30(int param_1,int param_2,int param_3,int *param_4,code *param_5);
void FUN_10356f90(int *param_1,int param_2,undefined4 param_3);
void FUN_103570f0(int *param_1,int param_2,int param_3,undefined4 param_4);
void FUN_103587b0(undefined4 param_1,int param_2);
void FUN_10358a10(undefined4 param_1,undefined4 *param_2);
void FUN_10358a80(undefined4 param_1,undefined4 *param_2);
void FUN_10359040(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_10359620(undefined4 *param_1,int *param_2);
void FUN_10359810(int *param_1,int *param_2);
void FUN_10359a90(int *param_1,int *param_2);
undefined4 * __fastcall FUN_1035cf30(undefined4 *param_1);
undefined4 * __fastcall FUN_1035f590(undefined4 *param_1);
undefined4 * __fastcall FUN_1035fda0(undefined4 *param_1);
void __fastcall FUN_10360120(undefined4 *param_1);
void __fastcall FUN_10360190(undefined4 *param_1);
void __fastcall FUN_10360200(undefined4 *param_1);
void __fastcall FUN_10360270(undefined4 *param_1);
int __fastcall FUN_10360740(undefined4 *param_1);
void __fastcall FUN_10360be0(undefined4 *param_1);
void __fastcall FUN_10360cd0(undefined4 *param_1);
void __fastcall FUN_10360d40(undefined4 *param_1);
void __fastcall FUN_10360db0(undefined4 *param_1);
void __fastcall FUN_10360e20(undefined4 *param_1);
void __fastcall FUN_10360e90(undefined4 *param_1);
void __fastcall FUN_10360f00(undefined4 *param_1);
void __fastcall FUN_10360f70(undefined4 *param_1);
void __fastcall FUN_10360fe0(undefined4 *param_1);
void __fastcall FUN_10361050(undefined4 *param_1);
void __fastcall FUN_103610c0(undefined4 *param_1);
void __fastcall FUN_10361130(undefined4 *param_1);
void __fastcall FUN_103611a0(undefined4 *param_1);
void __fastcall FUN_10361210(undefined4 *param_1);
void __fastcall FUN_10361280(undefined4 *param_1);
void __fastcall FUN_103612f0(undefined4 *param_1);
void __fastcall FUN_10361360(undefined4 *param_1);
void __fastcall FUN_103613d0(undefined4 *param_1);
void __fastcall FUN_10361440(undefined4 *param_1);
void __fastcall FUN_103614b0(undefined4 *param_1);
void __fastcall FUN_10361520(undefined4 *param_1);
void __fastcall FUN_10361590(undefined4 *param_1);
void __fastcall FUN_10361600(undefined4 *param_1);
void __fastcall FUN_10361670(undefined4 *param_1);
void __fastcall FUN_103616e0(undefined4 *param_1);
void __fastcall FUN_10361750(undefined4 *param_1);
void __fastcall FUN_103617c0(undefined4 *param_1);
void __fastcall FUN_10361830(undefined4 *param_1);
void __fastcall FUN_103618a0(undefined4 *param_1);
void __fastcall FUN_10361910(undefined4 *param_1);
void __fastcall FUN_10361980(undefined4 *param_1);
void __fastcall FUN_103619f0(undefined4 *param_1);
void __fastcall FUN_10361a60(undefined4 *param_1);
void __fastcall FUN_10361ad0(undefined4 *param_1);
void __fastcall FUN_10361b40(undefined4 *param_1);
void __fastcall FUN_10361bb0(undefined4 *param_1);
void __fastcall FUN_10361c20(undefined4 *param_1);
void __fastcall FUN_10361c90(undefined4 *param_1);
void __fastcall FUN_10361d00(undefined4 *param_1);
void __fastcall FUN_10361d70(undefined4 *param_1);
void __fastcall FUN_10361de0(undefined4 *param_1);
void __fastcall FUN_10361e50(undefined4 *param_1);
void __fastcall FUN_10361ec0(undefined4 *param_1);
void __fastcall FUN_10361f30(undefined4 *param_1);
void __fastcall FUN_10361fa0(int *param_1);
void __fastcall FUN_10362000(int *param_1);
void __fastcall FUN_10362060(int *param_1);
void __fastcall FUN_103620c0(int *param_1);
void __fastcall FUN_103623c0(undefined4 *param_1);
void __fastcall FUN_10362440(undefined4 *param_1);
void __fastcall FUN_103624c0(undefined4 *param_1);
void __fastcall FUN_10362540(undefined4 *param_1);
void __fastcall FUN_103625c0(undefined4 *param_1);
void __fastcall FUN_10362820(int param_1);
void __fastcall FUN_10362890(int param_1);
void __fastcall FUN_10362900(int param_1);
void __fastcall FUN_10362970(int param_1);
void __fastcall FUN_10362a10(int param_1);
void __fastcall FUN_10362a90(int *param_1);
void __fastcall FUN_10362b00(int param_1);
void __fastcall FUN_10363010(int param_1);
void __fastcall FUN_103633e0(int *param_1);
void __fastcall FUN_10363490(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10363510(int *param_1);
void __fastcall FUN_10363640(undefined4 *param_1);
void __fastcall FUN_10363a40(undefined4 *param_1);
void __fastcall FUN_10363b50(undefined4 *param_1);
void __fastcall FUN_10363c30(undefined4 *param_1);
void __fastcall FUN_10363cf0(undefined4 *param_1);
void __fastcall FUN_10364ab0(undefined4 *param_1);
void __fastcall FUN_10364b70(undefined4 *param_1);
void __fastcall FUN_10364c00(undefined4 *param_1);
void __fastcall FUN_10364cb0(undefined4 *param_1);
void __fastcall FUN_10364d90(undefined4 *param_1);
void __fastcall FUN_10364e20(undefined4 *param_1);
void __fastcall FUN_10365040(undefined4 *param_1);
void __fastcall FUN_103650c0(undefined4 *param_1);
void __fastcall FUN_103653b0(undefined4 *param_1);
void __fastcall FUN_10365450(int *param_1);
void __fastcall FUN_1036a850(int *param_1);
undefined4 * __fastcall FUN_1036b000(int param_1);
void __fastcall FUN_1036d910(float *param_1);
void __fastcall FUN_1036e1e0(int *param_1);
void __fastcall FUN_1036e3e0(int *param_1);
void __fastcall FUN_1036e480(int *param_1);
void __fastcall FUN_1036e500(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_1036e580(int *param_1);
void __fastcall FUN_1036f000(int param_1);
undefined1 __fastcall FUN_10370be0(int *param_1);
void * FUN_10370f20(uint param_1);
undefined4 FUN_10371070(void);
undefined1 __fastcall FUN_103711b0(int *param_1);
undefined1 FUN_10371350(void);
undefined1 __fastcall FUN_10371680(int param_1);
undefined4 __fastcall FUN_10371f30(int *param_1);
undefined4 __fastcall FUN_10371f90(int param_1);
void __fastcall FUN_10371ff0(int param_1);
void __fastcall FUN_10372110(int param_1);
void __fastcall FUN_10372420(int param_1);
void __fastcall FUN_10372530(int param_1);
int * __stdcall FUN_10372670(int *param_1);
int * __stdcall FUN_10373280(int *param_1);
undefined4 * FUN_10373fc0(undefined4 *param_1,undefined4 param_2);
undefined4 __stdcall FUN_103742e0(undefined4 param_1);
undefined4 __stdcall FUN_10374400(undefined4 param_1);
undefined4 __stdcall FUN_10374510(undefined4 param_1);
undefined4 __stdcall FUN_10374e20(undefined4 param_1,int *param_2);
undefined4 * FUN_103751d0(undefined4 *param_1);
undefined4 __stdcall FUN_10375260(undefined4 param_1);
undefined4 __stdcall FUN_10375380(undefined4 param_1);
undefined4 * __stdcall FUN_10375ab0(undefined4 *param_1);
void __stdcall FUN_103768e0(int param_1,int param_2);
void __fastcall FUN_10376ce0(int param_1);
void __fastcall FUN_10376d80(int param_1);
void __fastcall FUN_103781d0(undefined4 param_1);
undefined4 * __stdcall FUN_10378ab0(undefined4 *param_1,undefined4 param_2);
int __fastcall FUN_10379900(int *param_1);
undefined1 * __stdcall FUN_103799c0(undefined1 *param_1);
undefined4 * __stdcall FUN_10379c10(undefined4 *param_1);
void FUN_10379f40(void);
undefined4 * FUN_1037a2b0(undefined4 *param_1);
uint __stdcall FUN_1037aad0(ushort param_1);
undefined4 __stdcall FUN_1037abe0(undefined4 param_1,undefined4 param_2);
undefined4 * __stdcall FUN_1037ac60(undefined4 *param_1);
undefined4 * __stdcall FUN_1037ae80(undefined4 *param_1);
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __stdcall FUN_1037b130(int *param_1);
undefined4 __stdcall FUN_1037c140(undefined4 param_1,undefined4 param_2);
undefined4 __stdcall FUN_1037c1d0(undefined4 param_1);
undefined4 __stdcall FUN_1037c2c0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_1037c390(undefined4 param_1,char *param_2);
undefined4 __stdcall FUN_1037c5f0(undefined4 param_1);
void FUN_1037ca10(void);
void FUN_1037caa0(void);
undefined4 __fastcall FUN_1037d060(int param_1);
int __fastcall FUN_1037d1a0(int *param_1);
int __fastcall FUN_1037d340(int *param_1);
int FUN_1037d4d0(undefined4 param_1);
undefined4 __stdcall FUN_1037d540(undefined4 param_1,undefined4 param_2);
int * FUN_1037e850(int *param_1,undefined4 param_2,char *param_3);
uint FUN_1037eaf0(int param_1);
undefined1 * __stdcall FUN_1037ee90(undefined1 *param_1);
int * FUN_10380a50(int *param_1);
undefined4 __fastcall FUN_10380e00(int param_1);
undefined4 __stdcall FUN_10381060(undefined4 param_1,undefined4 param_2);
undefined4 __stdcall FUN_10381240(undefined4 param_1,undefined4 param_2);
undefined4 __stdcall FUN_10381620(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_103816f0(undefined4 param_1,char *param_2);
undefined4 __stdcall FUN_10381810(undefined4 param_1,undefined4 param_2,undefined4 param_3);
int * FUN_10381a40(int *param_1,int param_2,char *param_3);
undefined4 __stdcall FUN_10381bc0(undefined4 param_1,undefined4 param_2);
undefined4 __stdcall FUN_10381c50(undefined4 param_1,undefined4 param_2,undefined4 param_3);
// Reference entry 102e6700; body size 78 bytes.
#line 1 "ENTRY_102e6700"

int * __thiscall Recovered_Bulk::FUN_102e6700(int *param_2)
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
    return (int *)(param_1);
  }
  param_1[1] = 0;
  return (int *)(param_1);
}


// Reference entry 102e6d60; body size 210 bytes.
#line 1 "ENTRY_102e6d60"

void FUN_102e6d60(undefined4 param_1,undefined4 *param_2)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(DAT_12126b84);

  *(undefined4 *)param_2[1] = 0;
  puVar4 = (undefined4 *)((undefined4 *)*param_2);
  while (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar4);
    piVar2 = (int *)((int *)puVar4[4]);

    if (piVar2 != (int *)0x0) {
      puVar4[3] = 0;
      puVar4[4] = 0;
      (**(code **)(*piVar2 + 8))(uVar5);
    }
    iVar3 = (int)(puVar4[2]);

    if (((iVar3 != 0) && (*(int *)(iVar3 + -0x10) < 0xffff)) &&
       (iVar6 = thunk_FUN_1123fcd0((void *)(iVar3 + -0x10)), iVar6 == 0)) {
      *(undefined4 *)(iVar3 + -8) = 0;
      *(undefined4 *)(iVar3 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar3,*(undefined4 *)(iVar3 + -4));
      free((void *)(iVar3 + -0x10));
    }

    thunk_FUN_1148a50e(puVar4,0x14);
    puVar4 = (undefined4 *)(puVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 102e6ed0; body size 165 bytes.
#line 1 "ENTRY_102e6ed0"

void FUN_102e6ed0(undefined4 param_1,int param_2)

{
 try {
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_2 + 0x10));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    (**(code **)(*piVar1 + 8))(uVar3);
  }
  iVar2 = (int)(*(int *)(param_2 + 8));

  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    iVar4 = (int)(thunk_FUN_1123fcd0((void *)(iVar2 + -0x10)));
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + -8) = 0;
      *(undefined4 *)(iVar2 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
      free((void *)(iVar2 + -0x10));
    }
  }
  thunk_FUN_1148a50e(param_2,0x14);

  return;

 } catch (...) { }
}


// Reference entry 102e71d0; body size 580 bytes.
#line 1 "ENTRY_102e71d0"

int * FUN_102e71d0(int *param_1,int *param_2,code *param_3)

{
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  void **ppvVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  ppvVar6 = (void **)(&local_10);
  piVar10 = (int *)(param_1);
  if (param_1 != (int *)(param_2)) {
    while (ExceptionList = ppvVar6, piVar5 = piVar10 + 2, piVar5 != (int *)(param_2)) {

      piVar1 = (int *)((int *)piVar10[3]);
      iVar2 = (int)(*piVar5);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }

      if ((int *)param_1[1] != (int *)0x0) {
        (**(code **)(*(int *)param_1[1] + 4))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(iVar2,piVar1);
      }
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      cVar7 = (char)((*param_3)());
      piVar9 = (int *)(piVar5);
      if (cVar7 == '\0') {
        while( true ) {
          piVar10 = (int *)(piVar9);
          piVar9 = (int *)(piVar10 + -2);
          if ((int *)piVar10[-1] != (int *)0x0) {
            (**(code **)(*(int *)piVar10[-1] + 4))();
          }
          *(unsigned char *)((char *)&local_8 + 0) = 2;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))(iVar2,piVar1);
          }
          local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
          cVar7 = (char)((*param_3)());
          if (cVar7 == '\0') break;
          iVar8 = (int)(*piVar9);
          if (iVar8 != *piVar10) {
            piVar4 = (int *)((int *)piVar10[1]);
            if (piVar4 != (int *)0x0) {
              *piVar10 = (int)(0);
              piVar10[1] = 0;
              (**(code **)(*piVar4 + 8))();
              iVar8 = (int)(*piVar9);
            }
            *piVar10 = (int)(iVar8);
            piVar4 = (int *)((int *)piVar10[-1]);
            piVar10[1] = (int)piVar4;
            if (piVar4 != (int *)0x0) {
              (**(code **)(*piVar4 + 4))();
            }
          }
        }
        if (iVar2 != *piVar10) {
          piVar9 = (int *)((int *)piVar10[1]);
          if (piVar9 != (int *)0x0) {
            *piVar10 = (int)(0);
            piVar10[1] = 0;
            (**(code **)(*piVar9 + 8))();
          }
          *piVar10 = (int)(iVar2);
          piVar10[1] = (int)piVar1;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))();
          }
        }
      }
      else {
        piVar10 = (int *)(piVar10 + 4);
        while (piVar4 = piVar10, piVar9 != (int *)(param_1)) {
          piVar10 = (int *)(piVar4 + -2);
          iVar8 = (int)(piVar4[-4]);
          piVar9 = (int *)(piVar4 + -4);
          if (iVar8 != *piVar10) {
            piVar3 = (int *)((int *)piVar4[-1]);
            if (piVar3 != (int *)0x0) {
              *piVar10 = (int)(0);
              piVar4[-1] = 0;
              (**(code **)(*piVar3 + 8))();
              iVar8 = (int)(*piVar9);
            }
            *piVar10 = (int)(iVar8);
            piVar3 = (int *)((int *)piVar4[-3]);
            piVar4[-1] = (int)piVar3;
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 4))();
            }
          }
        }
        if (iVar2 != *param_1) {
          piVar10 = (int *)((int *)param_1[1]);
          if (piVar10 != (int *)0x0) {
            *param_1 = (int)(0);
            param_1[1] = 0;
            (**(code **)(*piVar10 + 8))();
          }
          *param_1 = (int)(iVar2);
          param_1[1] = (int)piVar1;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))();
          }
        }
      }


      piVar10 = (int *)(piVar5);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();

      }
    }
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 102e74f0; body size 452 bytes.
#line 1 "ENTRY_102e74f0"

void FUN_102e74f0(int param_1,int param_2,code *param_3)

{
 try {
  int *piVar1;
  int iVar2;
  undefined4 **ppuVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puStack_40;
  code *pcStack_3c;
  uint uStack_38;
  undefined4 local_28;
  int *local_24;
  undefined1 *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  uStack_38 = (uint)(DAT_12126b84);

  uVar5 = (uint)(param_2 - param_1 >> 3);
  iVar8 = (int)(param_2 - param_1 >> 4);
  if (0 < iVar8) {
    local_18 = (int)(uVar5 - 1);
    iVar6 = (int)(local_18 >> 1);
    do {

      local_24 = (int *)(*(int **)(param_1 + -4 + iVar8 * 8));
      iVar8 = (int)(iVar8 + -1);
      local_28 = (undefined4)(*(undefined4 *)(param_1 + iVar8 * 8));
      local_14 = (int)(iVar8);
      if (local_24 != (int *)0x0) {
        pcStack_3c = (code *)((code *)0x102e755a);
        (**(code **)(*local_24 + 4))();
      }

      iVar9 = (int)(local_14);
      while (iVar2 = iVar8, iVar9 < iVar6) {
        local_1c = (undefined1 *)((undefined1 *)&puStack_40);
        iVar9 = (int)(iVar2 * 2 + 2);
        puStack_40 = (undefined4 *)(*(undefined4 **)(param_1 + -8 + iVar9 * 8));
        pcStack_3c = (code *)(*(code **)(param_1 + -4 + iVar9 * 8));
        ppuVar3 = (undefined4 **)(&puStack_40);
        if (pcStack_3c != (code *)0x0) {
          (**(code **)(*(int *)pcStack_3c + 4))();
          ppuVar3 = (undefined4 **)((undefined4 **)local_1c);
        }
        local_1c = (undefined1 *)((undefined1 *)ppuVar3);
        *(unsigned char *)((char *)&local_8 + 0) = 1;
        piVar1 = (int *)(*(int **)(param_1 + 4 + iVar9 * 8));
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))(*(undefined4 *)(param_1 + iVar9 * 8),piVar1);
        }
        local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
        cVar4 = (char)((*param_3)());
        if (cVar4 != '\0') {
          iVar9 = (int)(iVar2 * 2 + 1);
        }
        iVar7 = (int)(*(int *)(param_1 + iVar9 * 8));
        iVar8 = (int)(iVar9);
        if (iVar7 != *(int *)(param_1 + iVar2 * 8)) {
          piVar1 = (int *)(*(int **)(param_1 + 4 + iVar2 * 8));
          if (piVar1 != (int *)0x0) {
            *(undefined4 *)(param_1 + iVar2 * 8) = 0;
            *(undefined4 *)(param_1 + 4 + iVar2 * 8) = 0;
            pcStack_3c = (code *)((code *)0x102e75e6);
            (**(code **)(*piVar1 + 8))();
            iVar7 = (int)(*(int *)(param_1 + iVar9 * 8));
          }
          *(int *)(param_1 + iVar2 * 8) = iVar7;
          piVar1 = (int *)(*(int **)(param_1 + 4 + iVar9 * 8));
          *(int **)(param_1 + 4 + iVar2 * 8) = piVar1;
          if (piVar1 != (int *)0x0) {
            pcStack_3c = (code *)((code *)0x102e75fd);
            (**(code **)(*piVar1 + 4))();
          }
        }
      }
      iVar9 = (int)(iVar2);
      if (((iVar2 == iVar6) && ((uVar5 & 1) == 0)) &&
         (iVar8 = *(int *)(param_1 + -8 + uVar5 * 8), iVar9 = local_18,
         iVar8 != *(int *)(param_1 + iVar2 * 8))) {
        piVar1 = (int *)(*(int **)(param_1 + 4 + iVar2 * 8));
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(param_1 + iVar2 * 8) = 0;
          *(undefined4 *)(param_1 + 4 + iVar2 * 8) = 0;
          pcStack_3c = (code *)((code *)0x102e763a);
          (**(code **)(*piVar1 + 8))();
          iVar8 = (int)(*(int *)(param_1 + -8 + uVar5 * 8));
        }
        *(int *)(param_1 + iVar2 * 8) = iVar8;
        piVar1 = (int *)(*(int **)(param_1 + -4 + uVar5 * 8));
        *(int **)(param_1 + 4 + iVar2 * 8) = piVar1;
        iVar9 = (int)(local_18);
        if (piVar1 != (int *)0x0) {
          pcStack_3c = (code *)((code *)0x102e765a);
          (**(code **)(*piVar1 + 4))();
          iVar9 = (int)(local_18);
        }
      }
      iVar8 = (int)(local_14);
      pcStack_3c = (code *)(param_3);
      puStack_40 = (undefined4 *)(&local_28);
      thunk_FUN_102e88e0(param_1,iVar9,local_14);

      if (local_24 != (int *)0x0) {
        iVar9 = (int)(*local_24);

        local_24 = (int *)((int *)0x0);
        pcStack_3c = (code *)((code *)0x102e7693);
        (**(code **)(iVar9 + 8))();
      }
    } while (0 < iVar8);
  }

  return;

 } catch (...) { }
}


// Reference entry 102e7730; body size 316 bytes.
#line 1 "ENTRY_102e7730"

void FUN_102e7730(int param_1,undefined4 *param_2,undefined4 *param_3,code *param_4)

{
 try {
  int *piVar1;
  char cVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
  }

  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(*param_2,piVar1);
  }

  cVar2 = (char)((*param_4)());
  if (cVar2 != '\0') {
    thunk_FUN_102e9900();
  }
  if ((int *)param_2[1] != (int *)0x0) {
    (**(code **)(*(int *)param_2[1] + 4))();
  }

  piVar1 = (int *)((int *)param_3[1]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(*param_3,piVar1);
  }

  cVar2 = (char)((*param_4)());
  if (cVar2 != '\0') {
    thunk_FUN_102e9900();
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 4))();
    }

    piVar1 = (int *)((int *)param_2[1]);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(*param_2,piVar1);
    }

    cVar2 = (char)((*param_4)());
    if (cVar2 != '\0') {
      thunk_FUN_102e9900();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 102e78c0; body size 93 bytes.
#line 1 "ENTRY_102e78c0"

int * FUN_102e78c0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((int *)(param_2) == param_1) {
    return (int *)(param_3);
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
  return (int *)(piVar3);
}


// Reference entry 102e8580; body size 356 bytes.
#line 1 "ENTRY_102e8580"

void FUN_102e8580(int param_1,int param_2,uint param_3,undefined4 param_4,code *param_5)

{
 try {
  int iVar1;
  int *piVar2;
  int iVar3;
  void **ppvVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)(param_3 - 1);
  ppvVar4 = (void **)(&local_10);

  iVar7 = (int)(param_2);
  while (iVar3 = iVar7, ExceptionList = ppvVar4, iVar3 < iVar1 >> 1) {
    iVar7 = (int)(iVar3 * 2 + 2);
    piVar2 = (int *)(*(int **)(param_1 + -4 + iVar7 * 8));
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }

    piVar2 = (int *)(*(int **)(param_1 + 4 + iVar7 * 8));
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(*(undefined4 *)(param_1 + iVar7 * 8),piVar2);
    }

    cVar5 = (char)((*param_5)());
    if (cVar5 != '\0') {
      iVar7 = (int)(iVar3 * 2 + 1);
    }
    iVar6 = (int)(*(int *)(param_1 + iVar7 * 8));

    if (iVar6 != *(int *)(param_1 + iVar3 * 8)) {
      piVar2 = (int *)(*(int **)(param_1 + 4 + iVar3 * 8));
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(param_1 + iVar3 * 8) = 0;
        *(undefined4 *)(param_1 + 4 + iVar3 * 8) = 0;
        (**(code **)(*piVar2 + 8))();
        iVar6 = (int)(*(int *)(param_1 + iVar7 * 8));
      }
      *(int *)(param_1 + iVar3 * 8) = iVar6;
      piVar2 = (int *)(*(int **)(param_1 + 4 + iVar7 * 8));
      *(int **)(param_1 + 4 + iVar3 * 8) = piVar2;

      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();

      }
    }
  }
  iVar7 = (int)(iVar3);
  if (((iVar3 == iVar1 >> 1) && ((param_3 & 1) == 0)) &&
     (iVar6 = *(int *)(param_1 + -8 + param_3 * 8), iVar7 = iVar1,
     iVar6 != *(int *)(param_1 + iVar3 * 8))) {
    piVar2 = (int *)(*(int **)(param_1 + 4 + iVar3 * 8));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + iVar3 * 8) = 0;
      *(undefined4 *)(param_1 + 4 + iVar3 * 8) = 0;
      (**(code **)(*piVar2 + 8))();
      iVar6 = (int)(*(int *)(param_1 + -8 + param_3 * 8));
    }
    *(int *)(param_1 + iVar3 * 8) = iVar6;
    piVar2 = (int *)(*(int **)(param_1 + -4 + param_3 * 8));
    *(int **)(param_1 + 4 + iVar3 * 8) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  thunk_FUN_102e88e0(param_1,iVar7,param_2);

  return;

 } catch (...) { }
}


// Reference entry 102e87c0; body size 208 bytes.
#line 1 "ENTRY_102e87c0"

void FUN_102e87c0(int *param_1,int param_2,undefined4 param_3)

{
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (0xf < (int)(param_2 - (int)param_1 & 0xfffffff8U)) {
    piVar1 = (int *)(*(int **)(param_2 + -4));
    piVar5 = (int *)((int *)(param_2 + -8));
    iVar3 = (int)(*piVar5);
    local_18 = (int)(iVar3);
    local_14 = (int *)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(DAT_12126b84 );
      iVar3 = (int)(*piVar5);
    }
    iVar4 = (int)(*param_1);

    if (iVar4 != iVar3) {
      piVar2 = (int *)(*(int **)(param_2 + -4));
      if (piVar2 != (int *)0x0) {
        *piVar5 = (int)(0);
        *(undefined4 *)(param_2 + -4) = 0;
        (**(code **)(*piVar2 + 8))();
        iVar4 = (int)(*param_1);
      }
      *piVar5 = (int)(iVar4);
      piVar2 = (int *)((int *)param_1[1]);
      *(int **)(param_2 + -4) = piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    thunk_FUN_102e8580(param_1,0,(int)piVar5 - (int)param_1 >> 3,&local_18,param_3);

    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 102e88e0; body size 290 bytes.
#line 1 "ENTRY_102e88e0"

void FUN_102e88e0(int param_1,int param_2,int param_3,int *param_4,code *param_5)

{
 try {
  int *piVar1;
  int iVar2;
  void **ppvVar3;
  char cVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ppvVar3 = (void **)(&local_10);

  while (iVar2 = param_2, ExceptionList = ppvVar3, param_3 < iVar2) {
    param_2 = (int)(iVar2 + -1 >> 1);
    if ((int *)param_4[1] != (int *)0x0) {
      (**(code **)(*(int *)param_4[1] + 4))();
    }

    piVar1 = (int *)(*(int **)(param_1 + 4 + param_2 * 8));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(*(undefined4 *)(param_1 + param_2 * 8),piVar1);
    }

    cVar4 = (char)((*param_5)());
    if (cVar4 == '\0') break;
    iVar5 = (int)(*(int *)(param_1 + param_2 * 8));

    if (iVar5 != *(int *)(param_1 + iVar2 * 8)) {
      piVar1 = (int *)(*(int **)(param_1 + 4 + iVar2 * 8));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + iVar2 * 8) = 0;
        *(undefined4 *)(param_1 + 4 + iVar2 * 8) = 0;
        (**(code **)(*piVar1 + 8))();
        iVar5 = (int)(*(int *)(param_1 + param_2 * 8));
      }
      *(int *)(param_1 + iVar2 * 8) = iVar5;
      piVar1 = (int *)(*(int **)(param_1 + 4 + param_2 * 8));
      *(int **)(param_1 + 4 + iVar2 * 8) = piVar1;

      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();

      }
    }
  }
  iVar5 = (int)(*param_4);
  if (iVar5 != *(int *)(param_1 + iVar2 * 8)) {
    piVar1 = (int *)(*(int **)(param_1 + 4 + iVar2 * 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + iVar2 * 8) = 0;
      *(undefined4 *)(param_1 + 4 + iVar2 * 8) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar5 = (int)(*param_4);
    }
    *(int *)(param_1 + iVar2 * 8) = iVar5;
    piVar1 = (int *)((int *)param_4[1]);
    *(int **)(param_1 + 4 + iVar2 * 8) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 102e8a60; body size 270 bytes.
#line 1 "ENTRY_102e8a60"

void FUN_102e8a60(int *param_1,int param_2,undefined4 param_3)

{
 try {
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  if (0xf < (int)(param_2 - (int)param_1 & 0xfffffff8U)) {
    piVar6 = (int *)((int *)(param_2 + -4));
    do {

      piVar1 = (int *)((int *)*piVar6);
      iVar4 = (int)(piVar6[-1]);
      local_18 = (int)(iVar4);
      local_14 = (int *)(piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar3);
        iVar4 = (int)(piVar6[-1]);
      }
      iVar5 = (int)(*param_1);

      if (iVar5 != iVar4) {
        piVar2 = (int *)((int *)*piVar6);
        if (piVar2 != (int *)0x0) {
          piVar6[-1] = 0;
          *piVar6 = (int)(0);
          (**(code **)(*piVar2 + 8))();
          iVar5 = (int)(*param_1);
        }
        piVar6[-1] = iVar5;
        piVar2 = (int *)((int *)param_1[1]);
        *piVar6 = (int)((int)piVar2);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))();
        }
      }
      thunk_FUN_102e8580(param_1,0,(-4 - (int)param_1) + (int)piVar6 >> 3,&local_18,param_3);

      if (piVar1 != (int *)0x0) {

        local_14 = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
      piVar6 = (int *)(piVar6 + -2);
    } while (0xf < (int)((4 - (int)param_1) + (int)piVar6 & 0xfffffff8U));
  }

  return;

 } catch (...) { }
}


// Reference entry 102e8bc0; body size 425 bytes.
#line 1 "ENTRY_102e8bc0"

void FUN_102e8bc0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
 try {
  int *piVar1;
  int *piVar2;
  void **ppvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);
  uVar5 = (uint)(param_2 - (int)param_1);
  ppvVar3 = (void **)(&local_10);

  while( true ) {

    if ((int)(uVar5 & 0xfffffff8) < 0x101) {
      thunk_FUN_102e71d0(param_1,param_2,param_4);

      return;
    }
    if (param_3 < 1) break;
    thunk_FUN_102e7950(&local_18);
    param_3 = (int)((param_3 >> 1) + (param_3 >> 2));
    if ((int)(local_18 - (int)param_1 & 0xfffffff8U) < (int)(param_2 - (int)local_14 & 0xfffffff8U))
    {
      thunk_FUN_102e8bc0(param_1,local_18,param_3,param_4);
      param_1 = (int *)(local_14);
    }
    else {
      thunk_FUN_102e8bc0(local_14,param_2,param_3,param_4);
      param_2 = (int)(local_18);
    }
    uVar5 = (uint)(param_2 - (int)param_1);

  }
  thunk_FUN_102e74f0(param_1,param_2,param_4,uVar4);
  if ((int)(param_2 - (int)param_1 & 0xfffffff8U) < 0x10) {

    return;
  }
  piVar8 = (int *)((int *)(param_2 + -4));
  do {
    piVar1 = (int *)((int *)*piVar8);
    iVar6 = (int)(piVar8[-1]);
    local_18 = (int)(iVar6);
    local_14 = (int *)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      iVar6 = (int)(piVar8[-1]);
    }
    iVar7 = (int)(*param_1);

    if (iVar7 != iVar6) {
      piVar2 = (int *)((int *)*piVar8);
      if (piVar2 != (int *)0x0) {
        piVar8[-1] = 0;
        *piVar8 = (int)(0);
        (**(code **)(*piVar2 + 8))();
        iVar7 = (int)(*param_1);
      }
      piVar8[-1] = iVar7;
      piVar2 = (int *)((int *)param_1[1]);
      *piVar8 = (int)((int)piVar2);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    thunk_FUN_102e8580(param_1,0,(-4 - (int)param_1) + (int)piVar8 >> 3,&local_18,param_4);

    if (piVar1 != (int *)0x0) {

      local_14 = (int *)((int *)0x0);
      (**(code **)(*piVar1 + 8))();
    }
    piVar8 = (int *)(piVar8 + -2);

  } while (0xf < (int)((4 - (int)param_1) + (int)piVar8 & 0xfffffff8U));

  return;

 } catch (...) { }
}


// Reference entry 102e95f0; body size 151 bytes.
#line 1 "ENTRY_102e95f0"

void FUN_102e95f0(undefined4 param_1,int *param_2)

{
 try {
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_2[2]);

  if (piVar1 != (int *)0x0) {
    param_2[1] = 0;
    param_2[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar3);
  }
  iVar2 = (int)(*param_2);

  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    iVar4 = (int)(thunk_FUN_1123fcd0((void *)(iVar2 + -0x10)));
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + -8) = 0;
      *(undefined4 *)(iVar2 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
      free((void *)(iVar2 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 102e9720; body size 95 bytes.
#line 1 "ENTRY_102e9720"

void FUN_102e9720(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102e9900; body size 216 bytes.
#line 1 "ENTRY_102e9900"

void FUN_102e9900(int *param_1,int *param_2)

{
 try {
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)(*param_1);
  piVar2 = (int *)((int *)param_1[1]);
  iVar5 = (int)(iVar1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(DAT_12126b84 );
    iVar5 = (int)(*param_1);
  }

  iVar4 = (int)(*param_2);
  if (iVar4 != iVar5) {
    piVar3 = (int *)((int *)param_1[1]);
    if (piVar3 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar3 + 8))();
      iVar4 = (int)(*param_2);
    }
    *param_1 = (int)(iVar4);
    piVar3 = (int *)((int *)param_2[1]);
    param_1[1] = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
  }
  if (iVar1 != *param_2) {
    piVar3 = (int *)((int *)param_2[1]);
    if (piVar3 != (int *)0x0) {
      *param_2 = (int)(0);
      param_2[1] = 0;
      (**(code **)(*piVar3 + 8))();
    }
    *param_2 = (int)(iVar1);
    param_2[1] = (int)piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 102e9a40; body size 216 bytes.
#line 1 "ENTRY_102e9a40"

void FUN_102e9a40(int *param_1,int *param_2)

{
 try {
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)(*param_1);
  piVar2 = (int *)((int *)param_1[1]);
  iVar5 = (int)(iVar1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(DAT_12126b84 );
    iVar5 = (int)(*param_1);
  }

  iVar4 = (int)(*param_2);
  if (iVar4 != iVar5) {
    piVar3 = (int *)((int *)param_1[1]);
    if (piVar3 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar3 + 8))();
      iVar4 = (int)(*param_2);
    }
    *param_1 = (int)(iVar4);
    piVar3 = (int *)((int *)param_2[1]);
    param_1[1] = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
  }
  if (iVar1 != *param_2) {
    piVar3 = (int *)((int *)param_2[1]);
    if (piVar3 != (int *)0x0) {
      *param_2 = (int)(0);
      param_2[1] = 0;
      (**(code **)(*piVar3 + 8))();
    }
    *param_2 = (int)(iVar1);
    param_2[1] = (int)piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 102e9b80; body size 188 bytes.
#line 1 "ENTRY_102e9b80"

ulonglong * __fastcall FUN_102e9b80(ulonglong *param_1)

{
 try {
  void *pvVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (ulonglong)(((unsigned long long)(uStack_1c) << 32 | (unsigned long long)(local_20)) & 0xffffff00ffffff00);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)param_1 + 0xc) = pvVar1;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;

  *(undefined4 *)(param_1 + 4) = 7;
  *(undefined4 *)((int)param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  thunk_FUN_101b1ce0(0x10,*(undefined4 *)((int)param_1 + 0xc));

  return (ulonglong *)(param_1);

 } catch (...) { }
}


// Reference entry 102ea4e0; body size 175 bytes.
#line 1 "ENTRY_102ea4e0"

undefined8 * __thiscall Recovered_Bulk::FUN_102ea4e0(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined8)(*param_2);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)param_1 + 0xc) = pvVar1;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;

  *(undefined4 *)(param_1 + 4) = 7;
  *(undefined4 *)((int)param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  thunk_FUN_101b1ce0(0x10,*(undefined4 *)((int)param_1 + 0xc));

  return (undefined8 *)(param_1);

 } catch (...) { }
}


// Reference entry 102eaab0; body size 188 bytes.
#line 1 "ENTRY_102eaab0"

ulonglong * __fastcall FUN_102eaab0(ulonglong *param_1)

{
 try {
  void *pvVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (ulonglong)(((unsigned long long)(uStack_1c) << 32 | (unsigned long long)(local_20)) & 0xffffff00ffffff00);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)param_1 + 0xc) = pvVar1;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;

  *(undefined4 *)(param_1 + 4) = 7;
  *(undefined4 *)((int)param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  thunk_FUN_101b1ce0(0x10,*(undefined4 *)((int)param_1 + 0xc));

  return (ulonglong *)(param_1);

 } catch (...) { }
}


// Reference entry 102ebb30; body size 76 bytes.
#line 1 "ENTRY_102ebb30"

void __fastcall FUN_102ebb30(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 102ebba0; body size 76 bytes.
#line 1 "ENTRY_102ebba0"

void __fastcall FUN_102ebba0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 102ebc10; body size 76 bytes.
#line 1 "ENTRY_102ebc10"

void __fastcall FUN_102ebc10(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 102ebc80; body size 76 bytes.
#line 1 "ENTRY_102ebc80"

void __fastcall FUN_102ebc80(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 102ebcf0; body size 76 bytes.
#line 1 "ENTRY_102ebcf0"

void __fastcall FUN_102ebcf0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 102ebd60; body size 76 bytes.
#line 1 "ENTRY_102ebd60"

void __fastcall FUN_102ebd60(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 102ebdd0; body size 76 bytes.
#line 1 "ENTRY_102ebdd0"

void __fastcall FUN_102ebdd0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 102ebe40; body size 68 bytes.
#line 1 "ENTRY_102ebe40"

void __fastcall FUN_102ebe40(int *param_1)

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


// Reference entry 102ebea0; body size 68 bytes.
#line 1 "ENTRY_102ebea0"

void __fastcall FUN_102ebea0(int *param_1)

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


// Reference entry 102ebf00; body size 68 bytes.
#line 1 "ENTRY_102ebf00"

void __fastcall FUN_102ebf00(int *param_1)

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


// Reference entry 102ebf60; body size 68 bytes.
#line 1 "ENTRY_102ebf60"

void __fastcall FUN_102ebf60(int *param_1)

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


// Reference entry 102ec3d0; body size 86 bytes.
#line 1 "ENTRY_102ec3d0"

void __fastcall FUN_102ec3d0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
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
  thunk_FUN_102ec600();
  return;
}


// Reference entry 102ec440; body size 77 bytes.
#line 1 "ENTRY_102ec440"

void __fastcall FUN_102ec440(int *param_1)

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


// Reference entry 102ec600; body size 227 bytes.
#line 1 "ENTRY_102ec600"

void __fastcall FUN_102ec600(int *param_1)

{
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    piVar3 = (int *)((int *)puVar1[4]);

    if (piVar3 != (int *)0x0) {
      puVar1[3] = 0;
      puVar1[4] = 0;
      (**(code **)(*piVar3 + 8))(uVar5);
    }
    iVar4 = (int)(puVar1[2]);

    if (((iVar4 != 0) && (*(int *)(iVar4 + -0x10) < 0xffff)) &&
       (iVar6 = thunk_FUN_1123fcd0((void *)(iVar4 + -0x10)), iVar6 == 0)) {
      *(undefined4 *)(iVar4 + -8) = 0;
      *(undefined4 *)(iVar4 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar4,*(undefined4 *)(iVar4 + -4));
      free((void *)(iVar4 + -0x10));
    }

    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x14);

  return;

 } catch (...) { }
}


// Reference entry 102ec850; body size 150 bytes.
#line 1 "ENTRY_102ec850"

void __fastcall FUN_102ec850(int *param_1)

{
 try {
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar3);
  }
  iVar2 = (int)(*param_1);

  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    iVar4 = (int)(thunk_FUN_1123fcd0((void *)(iVar2 + -0x10)));
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + -8) = 0;
      *(undefined4 *)(iVar2 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
      free((void *)(iVar2 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 102ec930; body size 84 bytes.
#line 1 "ENTRY_102ec930"

void __fastcall FUN_102ec930(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  *param_1 = (undefined4)((uint)&ghidra_vftable_ApplicationControllerAIOHelper);
  thunk_FUN_110f62c0(param_1);
  DAT_121a0e70 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);

  return;

 } catch (...) { }
}


// Reference entry 102ec9c0; body size 111 bytes.
#line 1 "ENTRY_102ec9c0"

void __fastcall FUN_102ec9c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCIObj;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 102ecb70; body size 176 bytes.
#line 1 "ENTRY_102ecb70"

void __fastcall FUN_102ecb70(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplaySubmitDiagnosticsMessageAction);
  piVar1 = (int *)((int *)param_1[7]);

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 102ed5a0; body size 110 bytes.
#line 1 "ENTRY_102ed5a0"

void __fastcall FUN_102ed5a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLocalMusicBrowsePresentationMap);
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 102ed630; body size 157 bytes.
#line 1 "ENTRY_102ed630"

void __fastcall FUN_102ed630(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOfflineTroubleshootAction);
  param_1[2] = (uint)&ghidra_vftable_SCOfflineTroubleshootAction;
  piVar1 = (int *)((int *)param_1[8]);

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCIObj;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 102ed720; body size 81 bytes.
#line 1 "ENTRY_102ed720"

int * __thiscall Recovered_Bulk::FUN_102ed720(int *param_2)
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


// Reference entry 102ed790; body size 81 bytes.
#line 1 "ENTRY_102ed790"

int * __thiscall Recovered_Bulk::FUN_102ed790(int *param_2)
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


// Reference entry 102ed800; body size 81 bytes.
#line 1 "ENTRY_102ed800"

int * __thiscall Recovered_Bulk::FUN_102ed800(int *param_2)
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


// Reference entry 102ed870; body size 81 bytes.
#line 1 "ENTRY_102ed870"

int * __thiscall Recovered_Bulk::FUN_102ed870(int *param_2)
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


// Reference entry 102ed8e0; body size 81 bytes.
#line 1 "ENTRY_102ed8e0"

int * __thiscall Recovered_Bulk::FUN_102ed8e0(int *param_2)
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


// Reference entry 102ed950; body size 81 bytes.
#line 1 "ENTRY_102ed950"

int * __thiscall Recovered_Bulk::FUN_102ed950(int *param_2)
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


// Reference entry 102ed9c0; body size 81 bytes.
#line 1 "ENTRY_102ed9c0"

int * __thiscall Recovered_Bulk::FUN_102ed9c0(int *param_2)
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


// Reference entry 102eda30; body size 81 bytes.
#line 1 "ENTRY_102eda30"

int * __thiscall Recovered_Bulk::FUN_102eda30(int *param_2)
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


// Reference entry 102edaa0; body size 81 bytes.
#line 1 "ENTRY_102edaa0"

int * __thiscall Recovered_Bulk::FUN_102edaa0(int *param_2)
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


// Reference entry 102edb10; body size 81 bytes.
#line 1 "ENTRY_102edb10"

int * __thiscall Recovered_Bulk::FUN_102edb10(int *param_2)
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


// Reference entry 102edb80; body size 81 bytes.
#line 1 "ENTRY_102edb80"

int * __thiscall Recovered_Bulk::FUN_102edb80(int *param_2)
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


// Reference entry 102edbf0; body size 81 bytes.
#line 1 "ENTRY_102edbf0"

int * __thiscall Recovered_Bulk::FUN_102edbf0(int *param_2)
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


// Reference entry 102edc60; body size 81 bytes.
#line 1 "ENTRY_102edc60"

int * __thiscall Recovered_Bulk::FUN_102edc60(int *param_2)
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


// Reference entry 102edcd0; body size 81 bytes.
#line 1 "ENTRY_102edcd0"

int * __thiscall Recovered_Bulk::FUN_102edcd0(int *param_2)
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


// Reference entry 102edd40; body size 81 bytes.
#line 1 "ENTRY_102edd40"

int * __thiscall Recovered_Bulk::FUN_102edd40(int *param_2)
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


// Reference entry 102eddb0; body size 81 bytes.
#line 1 "ENTRY_102eddb0"

int * __thiscall Recovered_Bulk::FUN_102eddb0(int *param_2)
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


// Reference entry 102ede20; body size 81 bytes.
#line 1 "ENTRY_102ede20"

int * __thiscall Recovered_Bulk::FUN_102ede20(int *param_2)
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


// Reference entry 102ee850; body size 173 bytes.
#line 1 "ENTRY_102ee850"

int * __thiscall Recovered_Bulk::FUN_102ee850(byte param_2)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar3);
  }
  iVar2 = (int)(*param_1);

  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    iVar4 = (int)(thunk_FUN_1123fcd0((void *)(iVar2 + -0x10)));
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + -8) = 0;
      *(undefined4 *)(iVar2 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
      free((void *)(iVar2 + -0x10));
    }
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 102ee930; body size 112 bytes.
#line 1 "ENTRY_102ee930"

undefined4 * __thiscall Recovered_Bulk::FUN_102ee930(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_ApplicationControllerAIOHelper);
  thunk_FUN_110f62c0(param_1);
  DAT_121a0e70 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8,uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102eea40; body size 132 bytes.
#line 1 "ENTRY_102eea40"

undefined4 * __thiscall Recovered_Bulk::FUN_102eea40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCIObj;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102eec40; body size 197 bytes.
#line 1 "ENTRY_102eec40"

undefined4 * __thiscall Recovered_Bulk::FUN_102eec40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplaySubmitDiagnosticsMessageAction);
  piVar1 = (int *)((int *)param_1[7]);

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102eefe0; body size 131 bytes.
#line 1 "ENTRY_102eefe0"

undefined4 * __thiscall Recovered_Bulk::FUN_102eefe0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLocalMusicBrowsePresentationMap);
  piVar1 = (int *)((int *)param_1[3]);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102ef090; body size 178 bytes.
#line 1 "ENTRY_102ef090"

undefined4 * __thiscall Recovered_Bulk::FUN_102ef090(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOfflineTroubleshootAction);
  param_1[2] = (uint)&ghidra_vftable_SCOfflineTroubleshootAction;
  piVar1 = (int *)((int *)param_1[8]);

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCIObj;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102ef200; body size 173 bytes.
#line 1 "ENTRY_102ef200"

void __fastcall FUN_102ef200(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x154)) {
  case 0:
    thunk_FUN_112af4e0("SCLibrary",0,"((SCLibrary *)(0))->RebindNetworkSockets() called in INIT state");
    break;
  case 1:
    thunk_FUN_112af4e0("SCLibrary",0,"((SCLibrary *)(0))->RebindNetworkSockets() called in ERROR state");
    return;
  case 2:
  case 3:
    thunk_FUN_112af4e0("SCLibrary",0,
                       "((SCLibrary *)(0))->RebindNetworkSockets() - restarting anacapa sockets");
    *(uint *)(param_1 + 0x154) = (*(int *)(param_1 + 0x154) == 2) + 4;
    param_1 = (int)(param_1 + 0xc);
    thunk_FUN_10280c00(param_1);
    thunk_FUN_102833f0(param_1);
    thunk_FUN_10280c00();
    thunk_FUN_10282f10();
    thunk_FUN_1112be50();
    thunk_FUN_1112c310();
    return;
  case 4:
  case 5:
    thunk_FUN_112af4e0("SCLibrary",0,"((SCLibrary *)(0))->RebindNetworkSockets() called in REBINDING state");
    return;
  }
  return;
}


// Reference entry 102ef300; body size 173 bytes.
#line 1 "ENTRY_102ef300"

void __fastcall FUN_102ef300(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x154)) {
  case 0:
    thunk_FUN_112af4e0("SCLibrary",0,"((SCLibrary *)(0))->RefreshNetworking() called in INIT state");
    break;
  case 1:
    thunk_FUN_112af4e0("SCLibrary",0,"((SCLibrary *)(0))->RefreshNetworking() called in ERROR state");
    return;
  case 2:
  case 3:
    thunk_FUN_112af4e0("SCLibrary",0,"((SCLibrary *)(0))->RefreshNetworking()");
    *(uint *)(param_1 + 0x154) = (*(int *)(param_1 + 0x154) == 2) + 4;
    param_1 = (int)(param_1 + 0xc);
    thunk_FUN_10280c00(param_1);
    thunk_FUN_102833f0(param_1);
    thunk_FUN_10280c00();
    thunk_FUN_10283040();
    thunk_FUN_1112be50();
    thunk_FUN_1112c310();
    return;
  case 4:
  case 5:
    thunk_FUN_112af4e0("SCLibrary",0,"((SCLibrary *)(0))->RefreshNetworking() called in REBINDING state");
    return;
  }
  return;
}


// Reference entry 102ef450; body size 187 bytes.
#line 1 "ENTRY_102ef450"

void __fastcall FUN_102ef450(SCLibrary *param_1)

{
  switch(*(undefined4 *)(param_1 + 0x154)) {
  case 0:
    thunk_FUN_112af4e0("SCLibrary",2,"((SCLibrary *)(0))->ResumeNetworking()  - network running from INIT");
    *(undefined4 *)(param_1 + 0x154) = 2;
    if (*(int *)(param_1 + 0xdc) != 0) {
      thunk_FUN_11096620();
    }
    FUN_100541fb();
    return;
  case 1:
    thunk_FUN_112af4e0("SCLibrary",0,"((SCLibrary *)(0))->ResumeNetworking() called in ERROR state");
    break;
  case 2:
    thunk_FUN_112af4e0("SCLibrary",1,"((SCLibrary *)(0))->ResumeNetworking() - already running");
    return;
  case 3:
    thunk_FUN_112af4e0("SCLibrary",2,"((SCLibrary *)(0))->ResumeNetworking()  - resuming subscriptions");
    *(undefined4 *)(param_1 + 0x154) = 2;
    ((SCLibrary *)(param_1))->int_resumeNetworking();
    return;
  case 4:
  case 5:
    thunk_FUN_112af4e0("SCLibrary",1,"((SCLibrary *)(0))->ResumeNetworking() - already rebinding...");
    param_1[0x17b] = (SCLibrary)0x0;
    return;
  }
  return;
}


// Reference entry 102efdc0; body size 145 bytes.
#line 1 "ENTRY_102efdc0"

void __thiscall Recovered_Bulk::FUN_102efdc0(bool param_2)
{
  SCLibrary *param_1 = (SCLibrary *)this;
  switch(*(undefined4 *)(param_1 + 0x154)) {
  case 0:
  case 2:
    thunk_FUN_112af4e0("SCLibrary",2,"((SCLibrary *)(0))->SuspendNetworking()  - suspending subscriptions");
    *(undefined4 *)(param_1 + 0x154) = 3;
    ((SCLibrary *)(param_1))->int_suspendNetworking(param_2);
    return;
  case 1:
    thunk_FUN_112af4e0("SCLibrary",0,"((SCLibrary *)(0))->SuspendNetworking() called in ERROR state");
    break;
  case 3:
    thunk_FUN_112af4e0("SCLibrary",1,"((SCLibrary *)(0))->SuspendNetworking() - already suspended");
    return;
  case 4:
  case 5:
    thunk_FUN_112af4e0("SCLibrary",2,"((SCLibrary *)(0))->SuspendNetworking() - currently rebinding...");
    param_1[0x17b] = (SCLibrary)0x1;
    return;
  }
  return;
}


// Reference entry 102f05b0; body size 77 bytes.
#line 1 "ENTRY_102f05b0"

void __fastcall FUN_102f05b0(int *param_1)

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


// Reference entry 102f0620; body size 227 bytes.
#line 1 "ENTRY_102f0620"

void __fastcall FUN_102f0620(int *param_1)

{
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    piVar3 = (int *)((int *)puVar1[4]);

    if (piVar3 != (int *)0x0) {
      puVar1[3] = 0;
      puVar1[4] = 0;
      (**(code **)(*piVar3 + 8))(uVar5);
    }
    iVar4 = (int)(puVar1[2]);

    if (((iVar4 != 0) && (*(int *)(iVar4 + -0x10) < 0xffff)) &&
       (iVar6 = thunk_FUN_1123fcd0((void *)(iVar4 + -0x10)), iVar6 == 0)) {
      *(undefined4 *)(iVar4 + -8) = 0;
      *(undefined4 *)(iVar4 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar4,*(undefined4 *)(iVar4 + -4));
      free((void *)(iVar4 + -0x10));
    }

    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x14);

  return;

 } catch (...) { }
}


// Reference entry 102f0ff0; body size 120 bytes.
#line 1 "ENTRY_102f0ff0"

uint FUN_102f0ff0(int param_1)

{
  char *pcVar1;
  uint uVar2;
  
  if ((*(char **)(param_1 + 0x24) == (char *)0x0) || (**(char **)(param_1 + 0x24) == '\0')) {
    uVar2 = (uint)(thunk_FUN_112af4e0("SCLibInit",0,"OSVersion is required (cannot be empty string)"));
    return (uint)(uVar2 & 0xffffff00);
  }
  if ((*(char **)(param_1 + 0x30) != (char *)0x0) && (**(char **)(param_1 + 0x30) != '\0')) {
    pcVar1 = (char *)(*(char **)(param_1 + 0x34));
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      return (uint)(((uint)((int3)((uint)pcVar1 >> 8)) << 8 | (uint)(1)));
    }
    uVar2 = (uint)(thunk_FUN_112af4e0("SCLibInit",0,
                               "HostMACAddress is required (cannot be an empty string)"));
    return (uint)(uVar2 & 0xffffff00);
  }
  uVar2 = (uint)(thunk_FUN_112af4e0("SCLibInit",0,"HostDeviceID is required (cannot be an empty string)"));
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 102f1270; body size 293 bytes.
#line 1 "ENTRY_102f1270"

void FUN_102f1270(undefined4 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_1c);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_1);
  }
  iVar1 = (int)(thunk_FUN_101b9160(puVar2,"%02X-%02X-%02X-%02X-%02X-%02X",local_1c,local_18,local_14,
                             local_10,local_c,local_8));
  if (iVar1 != 6) {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)((undefined1 *)*param_1);
    }
    iVar1 = (int)(thunk_FUN_101b9160(puVar2,"%02X%02X%02X%02X%02X%02X",local_1c,local_18,local_14,local_10
                               ,local_c,local_8));
    if (iVar1 != 6) {
      puVar2 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
        puVar2 = (undefined1 *)((undefined1 *)*param_1);
      }
      iVar1 = (int)(thunk_FUN_101b9160(puVar2,"%02X:%02X:%02X:%02X:%02X:%02X",local_1c,local_18,local_14,
                                 local_10,local_c,local_8));
      if (iVar1 != 6) {
        thunk_FUN_1148ac28();
        return;
      }
    }
  }
  *param_2 = (undefined1)(local_1c[0]);
  param_2[1] = local_18[0];
  param_2[2] = local_14[0];
  param_2[3] = local_10[0];
  param_2[4] = local_c[0];
  param_2[5] = local_8[0];
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 102f1660; body size 226 bytes.
#line 1 "ENTRY_102f1660"

undefined4 * FUN_102f1660(undefined4 *param_1,int param_2)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);
  if (param_2 != 0) {

    pvVar2 = (void *)(operator_new(0x2c));

    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)thunk_FUN_104ed740(uVar1));
    }
    piVar4 = (int *)((int *)0x0);

    if (piVar3 != (int *)0x0) {
      piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
      (**(code **)(*piVar4 + 4))();
    }

    thunk_FUN_104ee4f0(param_2);
    *param_1 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }

    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }

    return (undefined4 *)(param_1);
  }
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102f28f0; body size 86 bytes.
#line 1 "ENTRY_102f28f0"

undefined4 * FUN_102f28f0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(operator_new(8));
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
  }
  else {
    piVar1[0] = 0;
    piVar1[1] = 0;
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCDisplaySubmitDiagnosticsMessageDescriptor);
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_1);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102f3270; body size 161 bytes.
#line 1 "ENTRY_102f3270"

void __thiscall Recovered_Bulk::FUN_102f3270(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_10bff580(&param_2,param_2,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar2);

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
  (**(code **)(*param_1 + 0x30))(piVar1);

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 102f3e60; body size 173 bytes.
#line 1 "ENTRY_102f3e60"

void __thiscall Recovered_Bulk::FUN_102f3e60(undefined4 param_2)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  uint uVar1;
  void *pvVar2;
  SCIServiceAppInteropManager *pSVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x1c));

  if (pvVar2 == (void *)0x0) {
    pSVar3 = (SCIServiceAppInteropManager *)((SCIServiceAppInteropManager *)0x0);
  }
  else {
    pSVar3 = (SCIServiceAppInteropManager *)((SCIServiceAppInteropManager *)thunk_FUN_10c01fe0(param_2));
  }
  piVar4 = (int *)((int *)0x0);

  if (pSVar3 != (SCIServiceAppInteropManager *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0xc))(uVar1));
    (**(code **)(*piVar4 + 4))();
  }

  ((SCLibrary *)(param_1))->setServiceAppInteropManager(pSVar3);

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 102f3f40; body size 222 bytes.
#line 1 "ENTRY_102f3f40"

undefined4 * FUN_102f3f40(undefined4 *param_1)

{
 try {
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);



  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102aab80(&local_18));
  *puVar2 = (undefined4)("spotify.connect.adapter");

  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102aab80(&local_18));
  *puVar2 = (undefined4)("spotify.connect.adapter");

  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102aab80(&local_18));
  *puVar2 = (undefined4)("com.audible.mobile.sonos");

  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102aab80(&local_18));
  *puVar2 = (undefined4)("com.pandora.dc");

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102f4e90; body size 273 bytes.
#line 1 "ENTRY_102f4e90"

int * __thiscall Recovered_Bulk::FUN_102f4e90(int *param_2)
{
  int param_1 = (int )this;
 try {
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);
  pcVar1 = (char *)(*(char **)(*(int *)(param_1 + 0x4c) + 0x20));
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {

    if (*(int *)(param_1 + 0xf0) == 0) {
      pvVar4 = (void *)(operator_new(0x30));

      if (pvVar4 == (void *)0x0) {
        piVar5 = (int *)((int *)0x0);
      }
      else {
        piVar5 = (int *)((int *)thunk_FUN_101fa250());
      }

      if (piVar5 != *(int **)(param_1 + 0xf0)) {
        piVar2 = (int *)(*(int **)(param_1 + 0xf4));
        if (piVar2 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0xf0) = 0;
          *(undefined4 *)(param_1 + 0xf4) = 0;
          (**(code **)(*piVar2 + 8))();
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
    piVar5 = (int *)(*(int **)(param_1 + 0xf0));
    *param_2 = (int)((int)piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(uVar3);
    }

    return (int *)(param_2);
  }
  *param_2 = (int)(0);
  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 102f4ff0; body size 121 bytes.
#line 1 "ENTRY_102f4ff0"

void __thiscall Recovered_Bulk::FUN_102f4ff0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0xbc));
  pvVar3 = (void *)(operator_new(0x14));

  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)thunk_FUN_103be530(uVar1));
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }
  *param_2 = (undefined4)(piVar4);

  return;

 } catch (...) { }
}


// Reference entry 102f50c0; body size 192 bytes.
#line 1 "ENTRY_102f50c0"

int * __thiscall Recovered_Bulk::FUN_102f50c0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x168) == 0) {
    piVar2 = (int *)(operator_new(8));
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)((int *)0x0);
    }
    else {
      *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar2[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar2 = (int)((int)(uint)&ghidra_vftable_SCBrowseManager);
    }
    if (piVar2 != *(int **)(param_1 + 0x168)) {
      piVar1 = (int *)(*(int **)(param_1 + 0x16c));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x168) = 0;
        *(undefined4 *)(param_1 + 0x16c) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(int **)(param_1 + 0x168) = piVar2;
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x16c) = 0;
      }
      else {
        if (*(code **)(*piVar2 + 0xc) != thunk_FUN_102f8960) {
          piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
        }
        *(int **)(param_1 + 0x16c) = piVar2;
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  piVar2 = (int *)(*(int **)(param_1 + 0x168));
  *param_2 = (int)((int)piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 102f51c0; body size 121 bytes.
#line 1 "ENTRY_102f51c0"

void __thiscall Recovered_Bulk::FUN_102f51c0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x9c));
  pvVar3 = (void *)(operator_new(0x14));

  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)thunk_FUN_103be530(uVar1));
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }
  *param_2 = (undefined4)(piVar4);

  return;

 } catch (...) { }
}


// Reference entry 102f5260; body size 121 bytes.
#line 1 "ENTRY_102f5260"

void __thiscall Recovered_Bulk::FUN_102f5260(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0xa4));
  pvVar3 = (void *)(operator_new(0x14));

  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)thunk_FUN_103be530(uVar1));
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }
  *param_2 = (undefined4)(piVar4);

  return;

 } catch (...) { }
}


// Reference entry 102f5340; body size 102 bytes.
#line 1 "ENTRY_102f5340"

undefined4 * __thiscall Recovered_Bulk::FUN_102f5340(undefined4 *param_2,int *param_3)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x128))(&param_3,param_3,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 102f5550; body size 93 bytes.
#line 1 "ENTRY_102f5550"

undefined1 __fastcall FUN_102f5550(int *param_1)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  int **ppiVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ppiVar4 = (int **)(&local_14);
  local_14 = (int *)(param_1);
  piVar3 = (int *)((int *)((SCLibrary *)((SCLibrary *)(param_1 + -2)))->getSCHousehold());
  uVar1 = (undefined1)(*(undefined1 *)(*piVar3 + 0x803));

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(ppiVar4,uVar2);
  }

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 102f5620; body size 121 bytes.
#line 1 "ENTRY_102f5620"

void __thiscall Recovered_Bulk::FUN_102f5620(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x8c));
  pvVar3 = (void *)(operator_new(0x14));

  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)thunk_FUN_103be530(uVar1));
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }
  *param_2 = (undefined4)(piVar4);

  return;

 } catch (...) { }
}


// Reference entry 102f56c0; body size 121 bytes.
#line 1 "ENTRY_102f56c0"

void __thiscall Recovered_Bulk::FUN_102f56c0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x94));
  pvVar3 = (void *)(operator_new(0x14));

  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)thunk_FUN_103be530(uVar1));
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }
  *param_2 = (undefined4)(piVar4);

  return;

 } catch (...) { }
}


// Reference entry 102f5860; body size 488 bytes.
#line 1 "ENTRY_102f5860"

int * __thiscall Recovered_Bulk::FUN_102f5860(int *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0xf8) == 0) {
    piVar5 = (int *)(operator_new(0x28));
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      *piVar5 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar5[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar5 = (int)((int)(uint)&ghidra_vftable_SCDirectControlAppManager);
      piVar5[2] = 0;
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      *(unsigned short *)((char *)&local_8 + 1) = 0;
      piVar5[3] = 0;
      piVar5[4] = 0;
      pvVar6 = (void *)(operator_new(0x14));
      *(void **)pvVar6 = (void *)(pvVar6);
      *(void **)((int)pvVar6 + 4) = pvVar6;
      piVar5[3] = (int)pvVar6;
      piVar5[5] = 0;
      piVar5[6] = 0;
      piVar5[7] = 0;
      piVar5[8] = 7;
      piVar5[9] = 8;
      piVar5[2] = 0x3f800000;
      uVar9 = (uint)(piVar5[6] >> 2);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
      if (uVar9 < 0x10) {
        puVar7 = (undefined4 *)(operator_new(0x40));
        if (uVar9 != 0) {
          iVar2 = (int)(piVar5[5]);
          uVar9 = (uint)(uVar9 * 4);
          iVar8 = (int)(iVar2);
          if (0xfff < uVar9) {
            iVar8 = (int)(*(int *)(iVar2 + -4));
            uVar9 = (uint)(uVar9 + 0x23);
            if (0x1f < (iVar2 - iVar8) - 4U) {
                    
              _invalid_parameter_noinfo_noreturn();
            }
          }
          thunk_FUN_1148a50e(iVar8,uVar9);
        }
        puVar1 = (undefined4 *)(puVar7 + 0x10);
        piVar5[5] = (int)puVar7;
        piVar5[6] = (int)puVar1;
        piVar5[7] = (int)puVar1;
        for (; (undefined4 *)(puVar7) != puVar1; puVar7 = puVar7 + 1) {
          *puVar7 = (undefined4)(pvVar6);
        }
      }
      else {
        uVar9 = (uint)(piVar5[6] + 3U >> 2);
        if (uVar9 != 0) {
          puVar7 = (undefined4 *)((undefined4 *)0x0);
          for (; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar7 = (undefined4)(pvVar6);
            puVar7 = (undefined4 *)(puVar7 + 1);
          }
        }
      }
    }

    if (piVar5 != *(int **)(param_1 + 0xf8)) {
      piVar3 = (int *)(*(int **)(param_1 + 0xfc));
      if (piVar3 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0xf8) = 0;
        *(undefined4 *)(param_1 + 0xfc) = 0;
        (**(code **)(*piVar3 + 8))();
      }
      *(int **)(param_1 + 0xf8) = piVar5;
      if (piVar5 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0xfc) = 0;
      }
      else {
        if (*(code **)(*piVar5 + 0xc) != thunk_FUN_102f8970) {
          piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
        }
        *(int **)(param_1 + 0xfc) = piVar5;
        (**(code **)(*piVar5 + 4))();
      }
    }
  }
  piVar5 = (int *)(*(int **)(param_1 + 0xf8));
  *param_2 = (int)((int)piVar5);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))(uVar4);
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 102f5ad0; body size 103 bytes.
#line 1 "ENTRY_102f5ad0"

undefined4 * __stdcall FUN_102f5ad0(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_103d6740(&local_14));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102f7150; body size 97 bytes.
#line 1 "ENTRY_102f7150"

undefined4 * __thiscall Recovered_Bulk::FUN_102f7150(undefined4 *param_2)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  SCLibrary **ppSVar4;
  SCLibrary *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ppSVar4 = (SCLibrary **)(&local_14);
  local_14 = (SCLibrary *)(param_1);
  puVar3 = (undefined4 *)((undefined4 *)((SCLibrary *)(param_1))->getSCHousehold());
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (local_14 != (SCLibrary *)0x0) {
    (**(code **)(*(int *)local_14 + 8))(ppSVar4,uVar2);
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 102f71e0; body size 243 bytes.
#line 1 "ENTRY_102f71e0"

undefined4 FUN_102f71e0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (undefined4)(0);
  case 1:
    return (undefined4)(1);
  case 2:
    return (undefined4)(2);
  case 3:
    return (undefined4)(3);
  case 4:
    return (undefined4)(4);
  case 5:
    return (undefined4)(5);
  case 6:
    return (undefined4)(6);
  case 7:
    return (undefined4)(7);
  case 8:
    return (undefined4)(8);
  case 9:
    return (undefined4)(9);
  case 10:
    return (undefined4)(10);
  case 0xb:
    return (undefined4)(0xb);
  case 0xc:
    return (undefined4)(0xc);
  case 0xd:
    return (undefined4)(0xd);
  case 0xe:
    return (undefined4)(0xe);
  case 0xf:
    return (undefined4)(0xf);
  case 0x10:
    return (undefined4)(0x10);
  case 0x11:
    return (undefined4)(0x17);
  case 0x12:
    return (undefined4)(0x18);
  case 0x13:
    return (undefined4)(0x19);
  case 0x14:
    return (undefined4)(0x1a);
  case 0x15:
    return (undefined4)(0x1b);
  case 0x16:
    return (undefined4)(0x1c);
  case 0x17:
    return (undefined4)(0x1d);
  case 0x18:
    return (undefined4)(0x1e);
  case 0x19:
    return (undefined4)(0x1f);
  case 0x1a:
    return (undefined4)(0x20);
  case 0x1b:
    return (undefined4)(0x21);
  case 0x1c:
    return (undefined4)(0x22);
  case 0x1d:
    return (undefined4)(0x23);
  case 0x1e:
    return (undefined4)(0x24);
  case 0x1f:
    return (undefined4)(0x25);
  case 0x20:
    return (undefined4)(0x26);
  case 0x21:
    return (undefined4)(0x27);
  case 0x22:
    return (undefined4)(0x28);
  case 0x23:
    return (undefined4)(0x29);
  case 0x24:
    return (undefined4)(0x2a);
  default:
    return (undefined4)(0xffffffff);
  }
}


// Reference entry 102f8250; body size 295 bytes.
#line 1 "ENTRY_102f8250"

undefined4 FUN_102f8250(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return (undefined4)(1);
  case 2:
    return (undefined4)(2);
  case 3:
    return (undefined4)(3);
  case 4:
    return (undefined4)(4);
  case 5:
    return (undefined4)(5);
  case 6:
    return (undefined4)(6);
  case 7:
    return (undefined4)(7);
  case 8:
    return (undefined4)(8);
  case 9:
    return (undefined4)(9);
  case 10:
    return (undefined4)(10);
  case 0xb:
    return (undefined4)(0xb);
  case 0xc:
    return (undefined4)(0xc);
  case 0xd:
    return (undefined4)(0xd);
  case 0xe:
    return (undefined4)(0xe);
  case 0xf:
    return (undefined4)(0xf);
  case 0x10:
    return (undefined4)(0x10);
  case 0x11:
    return (undefined4)(0x11);
  case 0x12:
    return (undefined4)(0x12);
  case 0x13:
    return (undefined4)(0x13);
  case 0x14:
    return (undefined4)(0x14);
  case 0x15:
    return (undefined4)(0x15);
  case 0x16:
    return (undefined4)(0x16);
  case 0x17:
    return (undefined4)(0x17);
  case 0x18:
    return (undefined4)(0x18);
  default:
    return (undefined4)(0xffffffff);
  case 0x1b:
    return (undefined4)(0x19);
  case 0x1c:
    return (undefined4)(0x1a);
  case 0x1d:
    return (undefined4)(0x1b);
  case 0x1e:
    return (undefined4)(0x1c);
  case 0x1f:
    return (undefined4)(0x1d);
  case 0x20:
    return (undefined4)(0x1e);
  case 0x21:
    return (undefined4)(0x1f);
  case 0x22:
    return (undefined4)(0x20);
  case 0x23:
    return (undefined4)(0x21);
  case 0x24:
    return (undefined4)(0x22);
  case 0x25:
    return (undefined4)(0x23);
  case 0x26:
    return (undefined4)(0x24);
  case 0x27:
    return (undefined4)(0x25);
  case 0x28:
    return (undefined4)(0x26);
  case 0x29:
    return (undefined4)(0x27);
  case 0x2a:
    return (undefined4)(0x28);
  case 0x2b:
    return (undefined4)(0x29);
  case 0x2c:
    return (undefined4)(0x2a);
  case 0x2d:
    return (undefined4)(0x2b);
  case 0x2e:
    return (undefined4)(0x2c);
  case 0x2f:
    return (undefined4)(0x2d);
  }
}


// Reference entry 102f9110; body size 190 bytes.
#line 1 "ENTRY_102f9110"

int * __thiscall Recovered_Bulk::FUN_102f9110(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  piVar2 = (int *)((int *)thunk_FUN_1037bed0(&local_14,*(undefined4 *)(param_1 + 0xdc),
                                     DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 102f9320; body size 100 bytes.
#line 1 "ENTRY_102f9320"

undefined4 * __thiscall Recovered_Bulk::FUN_102f9320(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x134))(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 102f93b0; body size 75 bytes.
#line 1 "ENTRY_102f93b0"

void __thiscall Recovered_Bulk::FUN_102f93b0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  piVar1 = (int *)(*(int **)(param_1 + 0x180));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 );
  }
  *param_2 = (int)((int)piVar1);

  return;

 } catch (...) { }
}


// Reference entry 102f9430; body size 121 bytes.
#line 1 "ENTRY_102f9430"

void __thiscall Recovered_Bulk::FUN_102f9430(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0xac));
  pvVar3 = (void *)(operator_new(0x14));

  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)thunk_FUN_103be530(uVar1));
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }
  *param_2 = (undefined4)(piVar4);

  return;

 } catch (...) { }
}


// Reference entry 102f94d0; body size 121 bytes.
#line 1 "ENTRY_102f94d0"

void __thiscall Recovered_Bulk::FUN_102f94d0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0xb4));
  pvVar3 = (void *)(operator_new(0x14));

  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)thunk_FUN_103be530(uVar1));
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }
  *param_2 = (undefined4)(piVar4);

  return;

 } catch (...) { }
}


// Reference entry 102f9570; body size 133 bytes.
#line 1 "ENTRY_102f9570"

int __fastcall FUN_102f9570(int param_1)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int **ppiVar4;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ppiVar4 = (int **)(&local_14);
  uVar2 = (undefined4)(((SCLibrary *)((SCLibrary *)(param_1 + -8)))->getSCHousehold());

  thunk_FUN_101f3af0(uVar2);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(ppiVar4,uVar1);
  }
  if (local_18 == (int *)0x0) {
    iVar3 = (int)(0);
  }
  else {
    iVar3 = (int)(local_18[0xf]);
  }

  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }

  return (int)(iVar3);

 } catch (...) { }
}


// Reference entry 102fc4b0; body size 74 bytes.
#line 1 "ENTRY_102fc4b0"

void FUN_102fc4b0(int param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_112af4e0("SCLibInit",4,"Screen density: %d",*(undefined4 *)(param_1 + 0x78));
  uVar1 = (undefined4)(2);
  if (*(int *)(param_1 + 0x78) == 1) {
    uVar1 = (undefined4)(1);
  }
  else if (*(int *)(param_1 + 0x78) == 2) {
    thunk_FUN_11124760(0);
    return;
  }
  thunk_FUN_11124760(uVar1);
  return;
}


// Reference entry 102fc510; body size 82 bytes.
#line 1 "ENTRY_102fc510"

void __fastcall FUN_102fc510(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(8));
  if (puVar2 == (undefined4 *)0x0) {
    thunk_FUN_110a2740(0);
  }
  else {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x4c));
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLibOptionsSettingsFileCB);
    puVar2[1] = uVar1;
    thunk_FUN_110a2740(puVar2);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
      return;
    }
  }
  return;
}


// Reference entry 102fcc20; body size 99 bytes.
#line 1 "ENTRY_102fcc20"

int * __thiscall Recovered_Bulk::FUN_102fcc20(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_8 [8];
  
  uVar2 = (undefined4)(thunk_FUN_101a3180(param_3));
  iVar3 = (int)(thunk_FUN_101ab650(local_8,param_3,uVar2));
  iVar3 = (int)(*(int *)(iVar3 + 4));
  if (iVar3 == 0) {
    iVar3 = (int)(*(int *)(param_1 + 0x70));
  }
  if (iVar3 == *(int *)(param_1 + 0x70)) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(iVar3 + 0xc));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 102fcce0; body size 184 bytes.
#line 1 "ENTRY_102fcce0"

int * __thiscall Recovered_Bulk::FUN_102fcce0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  if (param_1[0xf] == 0) {
    piVar2 = (int *)((int *)thunk_FUN_10bbbf60(&local_14,param_1,DAT_12126b84 ));
    piVar1 = (int *)((int *)*piVar2);
    *piVar2 = (int)(0);
    piVar2 = (int *)((int *)param_1[0x10]);

    if (piVar2 != (int *)0x0) {
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      (**(code **)(*piVar2 + 8))();
    }
    param_1[0xf] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar3 = (int)(0);
    }
    else {
      iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    }
    param_1[0x10] = iVar3;

    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
  }

  piVar1 = (int *)((int *)param_1[0xf]);
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 102fcdd0; body size 184 bytes.
#line 1 "ENTRY_102fcdd0"

int * __thiscall Recovered_Bulk::FUN_102fcdd0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  if (param_1[0xd] == 0) {
    piVar2 = (int *)((int *)thunk_FUN_10bf25e0(&local_14,param_1,DAT_12126b84 ));
    piVar1 = (int *)((int *)*piVar2);
    *piVar2 = (int)(0);
    piVar2 = (int *)((int *)param_1[0xe]);

    if (piVar2 != (int *)0x0) {
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      (**(code **)(*piVar2 + 8))();
    }
    param_1[0xd] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar3 = (int)(0);
    }
    else {
      iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    }
    param_1[0xe] = iVar3;

    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
  }

  piVar1 = (int *)((int *)param_1[0xd]);
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 102fcec0; body size 184 bytes.
#line 1 "ENTRY_102fcec0"

int * __thiscall Recovered_Bulk::FUN_102fcec0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  if (param_1[0xb] == 0) {
    piVar2 = (int *)((int *)thunk_FUN_102dd9b0(&local_14,param_1,DAT_12126b84 ));
    piVar1 = (int *)((int *)*piVar2);
    *piVar2 = (int)(0);
    piVar2 = (int *)((int *)param_1[0xc]);

    if (piVar2 != (int *)0x0) {
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      (**(code **)(*piVar2 + 8))();
    }
    param_1[0xb] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar3 = (int)(0);
    }
    else {
      iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    }
    param_1[0xc] = iVar3;

    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
  }

  piVar1 = (int *)((int *)param_1[0xb]);
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 102fde70; body size 217 bytes.
#line 1 "ENTRY_102fde70"

void __thiscall Recovered_Bulk::FUN_102fde70(undefined4 param_2)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int **ppiVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ppiVar4 = (int **)(&local_14);
  piVar3 = (int *)((int *)((SCLibrary *)(param_1))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar4,uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 != (int *)0x0) {
    thunk_FUN_103929e0();
  }
  if (*(int *)(param_1 + 0xdc) != 0) {
    thunk_FUN_11097b00(param_2);
  }
  if ((param_1[0x179] == (SCLibrary)0x0) && (param_1[0x17a] == (SCLibrary)0x0)) {
    thunk_FUN_103431e0();
  }
  param_1[0x17a] = (SCLibrary)0x1;
  thunk_FUN_1030be20();

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 102fe1e0; body size 283 bytes.
#line 1 "ENTRY_102fe1e0"

void __thiscall Recovered_Bulk::FUN_102fe1e0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)(**(code **)(*param_2 + 0x18))(&param_2,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar2);

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
  if ((piVar1 == (int *)0x0) || (piVar1 != *(int **)(param_1 + 0x15c))) {
    if (*(int **)(param_1 + 0x15c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x15c) + 0x38))(*(undefined4 *)(param_1 + 0x10));
      if (*(int **)(param_1 + 0x15c) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x15c) + 0x30))();
      }
    }
    piVar3 = (int *)(*(int **)(param_1 + 0x15c));
    if (piVar1 != *(int **)(param_1 + 0x15c)) {
      piVar3 = (int *)(*(int **)(param_1 + 0x160));
      if (piVar3 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x15c) = 0;
        *(undefined4 *)(param_1 + 0x160) = 0;
        (**(code **)(*piVar3 + 8))();
      }
      *(int **)(param_1 + 0x15c) = piVar1;
      *(int **)(param_1 + 0x160) = piVar2;
      piVar3 = (int *)(piVar1);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
        piVar3 = (int *)(*(int **)(param_1 + 0x15c));
      }
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x34))(*(undefined4 *)(param_1 + 0x10));
    }
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 102fe390; body size 120 bytes.
#line 1 "ENTRY_102fe390"

void __fastcall FUN_102fe390(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x16f) != '\0') {
    uVar2 = (undefined4)(0);
    *(undefined1 *)(param_1 + 0x16f) = 0;
    *(undefined4 *)(param_1 + 0x148) = 3;
    thunk_FUN_10280c00(0);
    thunk_FUN_102833f0(uVar2);
    return;
  }
  iVar1 = (int)(*(int *)(param_1 + 0x148));
  *(undefined4 *)(param_1 + 0x148) = 2;
  if (iVar1 == 4) {
    ((SCLibrary *)((SCLibrary *)(param_1 + -0xc)))->int_resumeNetworking();
    uVar2 = (undefined4)(0);
    thunk_FUN_10280c00(0);
    thunk_FUN_102833f0(uVar2);
    return;
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    thunk_FUN_110a0210();
  }
  uVar2 = (undefined4)(0);
  thunk_FUN_10280c00(0);
  thunk_FUN_102833f0(uVar2);
  return;
}


// Reference entry 10300800; body size 94 bytes.
#line 1 "ENTRY_10300800"

void __thiscall Recovered_Bulk::FUN_10300800(undefined1 param_2)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  int *piVar2;
  int **ppiVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ppiVar3 = (int **)(&local_14);
  local_14 = (int *)(param_1);
  piVar2 = (int *)((int *)((SCLibrary *)((SCLibrary *)(param_1 + -2)))->getSCHousehold());
  *(undefined1 *)(*piVar2 + 0x803) = param_2;

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(ppiVar3,uVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 10301170; body size 139 bytes.
#line 1 "ENTRY_10301170"

void __thiscall Recovered_Bulk::FUN_10301170(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  int **ppiVar3;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ppiVar3 = (int **)(&local_14);
  uVar2 = (undefined4)(((SCLibrary *)((SCLibrary *)(param_1 + -8)))->getSCHousehold());

  thunk_FUN_101f3af0(uVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(ppiVar3,uVar1);
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (local_18 != (int *)0x0) {
    thunk_FUN_10c16270(param_2);
  }

  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10301df0; body size 162 bytes.
#line 1 "ENTRY_10301df0"

void __fastcall FUN_10301df0(int param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_101da4a0(&local_14,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar2);

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
    (**(code **)(*piVar1 + 0x38))(*(undefined4 *)(param_1 + 4));
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 103025c0; body size 68 bytes.
#line 1 "ENTRY_103025c0"

undefined4 * __fastcall FUN_103025c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCountryList);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 103026f0; body size 129 bytes.
#line 1 "ENTRY_103026f0"

void __fastcall FUN_103026f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCountryList);
  free((void *)param_1[2]);
  free((void *)param_1[3]);
  piVar1 = (int *)((int *)param_1[6]);

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10302970; body size 118 bytes.
#line 1 "ENTRY_10302970"

void __thiscall Recovered_Bulk::FUN_10302970(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x14));
  pvVar3 = (void *)(operator_new(0x14));

  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)thunk_FUN_103be530(uVar1));
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }
  *param_2 = (undefined4)(piVar4);

  return;

 } catch (...) { }
}


// Reference entry 10303490; body size 242 bytes.
#line 1 "ENTRY_10303490"

uint * __thiscall Recovered_Bulk::FUN_10303490(int *param_2)
{
  uint *param_1 = (uint *)this;
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 uVar8;
  uint uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (uint)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x104f));
  if (pvVar7 == (void *)0x0) {
                    
    _invalid_parameter_noinfo_noreturn();
  }
  uVar9 = (uint)((int)pvVar7 + 0x23U & 0xffffffe0);
  *(void **)(uVar9 - 4) = pvVar7;
  *(uint *)uVar9 = (uint)(uVar9);
  *(uint *)(uVar9 + 4) = uVar9;
  *(uint *)(uVar9 + 8) = uVar9;
  *(undefined2 *)(uVar9 + 0xc) = 0x101;
  *param_1 = (uint)(uVar9);

  uVar8 = (undefined4)(thunk_FUN_103039a0(*(undefined4 *)(*param_2 + 4),uVar9,param_2));
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
    *(uint *)(*param_1 + 8) = *param_1;
  }

  return (uint *)(param_1);

 } catch (...) { }
}


// Reference entry 10304000; body size 132 bytes.
#line 1 "ENTRY_10304000"

void __thiscall Recovered_Bulk::FUN_10304000(int *param_2,undefined4 param_3,uint param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  
  param_4 = (uint)(*(uint *)(param_1 + 0x20) & param_4);
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x14) + 4 + param_4 * 8));
  if (piVar1 == *(int **)(param_1 + 0xc)) {
    *param_2 = (int)((int)*(int **)(param_1 + 0xc));
    param_2[1] = 0;
    return;
  }
  piVar2 = (int *)(*(int **)(*(int *)(param_1 + 0x14) + param_4 * 8));
  cVar4 = (char)(thunk_FUN_101a31e0(param_3,piVar1 + 2));
  while( true ) {
    if (cVar4 != '\0') {
      iVar3 = (int)(*piVar1);
      param_2[1] = (int)piVar1;
      *param_2 = (int)(iVar3);
      return;
    }
    if (piVar1 == (int *)(piVar2)) break;
    piVar1 = (int *)((int *)piVar1[1]);
    cVar4 = (char)(thunk_FUN_101a31e0(param_3,piVar1 + 2));
  }
  *param_2 = (int)((int)piVar1);
  param_2[1] = 0;
  return;
}


// Reference entry 10304a70; body size 95 bytes.
#line 1 "ENTRY_10304a70"

void FUN_10304a70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10304d20; body size 188 bytes.
#line 1 "ENTRY_10304d20"

ulonglong * __fastcall FUN_10304d20(ulonglong *param_1)

{
 try {
  void *pvVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (ulonglong)(((unsigned long long)(uStack_1c) << 32 | (unsigned long long)(local_20)) & 0xffffff00ffffff00);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  pvVar1 = (void *)(operator_new(0x10));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)param_1 + 0xc) = pvVar1;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;

  *(undefined4 *)(param_1 + 4) = 7;
  *(undefined4 *)((int)param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  thunk_FUN_10306f60(0x10,*(undefined4 *)((int)param_1 + 0xc));

  return (ulonglong *)(param_1);

 } catch (...) { }
}


// Reference entry 10304e70; body size 175 bytes.
#line 1 "ENTRY_10304e70"

undefined8 * __thiscall Recovered_Bulk::FUN_10304e70(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined8)(*param_2);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  pvVar1 = (void *)(operator_new(0x10));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)param_1 + 0xc) = pvVar1;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;

  *(undefined4 *)(param_1 + 4) = 7;
  *(undefined4 *)((int)param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  thunk_FUN_10306f60(0x10,*(undefined4 *)((int)param_1 + 0xc));

  return (undefined8 *)(param_1);

 } catch (...) { }
}


// Reference entry 10304f90; body size 70 bytes.
#line 1 "ENTRY_10304f90"

uint * __fastcall FUN_10304f90(uint *param_1)

{
  void *pvVar1;
  uint uVar2;
  
  *param_1 = (uint)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x104f));
  if (pvVar1 != (void *)0x0) {
    uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void **)(uVar2 - 4) = pvVar1;
    *(uint *)uVar2 = (uint)(uVar2);
    *(uint *)(uVar2 + 4) = uVar2;
    *(uint *)(uVar2 + 8) = uVar2;
    *(undefined2 *)(uVar2 + 0xc) = 0x101;
    *param_1 = (uint)(uVar2);
    return (uint *)(param_1);
  }
                    
  _invalid_parameter_noinfo_noreturn();
}


// Reference entry 10305050; body size 115 bytes.
#line 1 "ENTRY_10305050"

undefined4 * __thiscall Recovered_Bulk::FUN_10305050(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x104f));
  if (pvVar1 != (void *)0x0) {
    uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void **)(uVar2 - 4) = pvVar1;
    param_1[1] = uVar2;

    return (undefined4 *)(param_1);
  }
                    
  _invalid_parameter_noinfo_noreturn();

 } catch (...) { }
}


// Reference entry 103051d0; body size 243 bytes.
#line 1 "ENTRY_103051d0"

uint * __thiscall Recovered_Bulk::FUN_103051d0(int *param_2)
{
  uint *param_1 = (uint *)this;
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 uVar8;
  uint uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (uint)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x104f));
  if (pvVar7 == (void *)0x0) {
                    
    _invalid_parameter_noinfo_noreturn();
  }
  uVar9 = (uint)((int)pvVar7 + 0x23U & 0xffffffe0);
  *(void **)(uVar9 - 4) = pvVar7;
  *(uint *)uVar9 = (uint)(uVar9);
  *(uint *)(uVar9 + 4) = uVar9;
  *(uint *)(uVar9 + 8) = uVar9;
  *(undefined2 *)(uVar9 + 0xc) = 0x101;
  *param_1 = (uint)(uVar9);

  uVar8 = (undefined4)(thunk_FUN_103039a0(*(undefined4 *)(*param_2 + 4),uVar9,param_2));
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
    *(uint *)(*param_1 + 8) = *param_1;
  }

  return (uint *)(param_1);

 } catch (...) { }
}


// Reference entry 103053f0; body size 188 bytes.
#line 1 "ENTRY_103053f0"

ulonglong * __fastcall FUN_103053f0(ulonglong *param_1)

{
 try {
  void *pvVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (ulonglong)(((unsigned long long)(uStack_1c) << 32 | (unsigned long long)(local_20)) & 0xffffff00ffffff00);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  pvVar1 = (void *)(operator_new(0x10));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)param_1 + 0xc) = pvVar1;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;

  *(undefined4 *)(param_1 + 4) = 7;
  *(undefined4 *)((int)param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  thunk_FUN_10306f60(0x10,*(undefined4 *)((int)param_1 + 0xc));

  return (ulonglong *)(param_1);

 } catch (...) { }
}


// Reference entry 10305630; body size 137 bytes.
#line 1 "ENTRY_10305630"

undefined4 * __thiscall Recovered_Bulk::FUN_10305630(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_111fbeb0(param_2,20000,18000,0,4,param_3 * 1000,0);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConfigLoadAsyncIOOperation);
  param_1[2] = (uint)&ghidra_vftable_SCConfigLoadAsyncIOOperation;
  param_1[7] = (uint)&ghidra_vftable_SCConfigLoadAsyncIOOperation;
  uVar2 = (undefined4)(thunk_FUN_112782b0(uVar1));
  thunk_FUN_11276420(uVar2);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 103056e0; body size 419 bytes.
#line 1 "ENTRY_103056e0"

undefined4 * __fastcall FUN_103056e0(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_11240650(DAT_12126b84 );
  param_1[1] = (uint)&ghidra_vftable_RITQHandler;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCReportManager);
  param_1[1] = (uint)&ghidra_vftable_SCReportManager;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpRef;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  uVar1 = (undefined4)(thunk_FUN_112782b0());
  param_1[8] = uVar1;
  param_1[9] = 0;
  thunk_FUN_112792b0();
  param_1[0x27] = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  thunk_FUN_11240650();
  param_1[0x2b] = (uint)&ghidra_vftable_RReportUploaderClient;
  *(undefined2 *)((int)param_1 + 0xb2) = 0x3eb;
  param_1[0x2a] = (uint)&ghidra_vftable_SCReportUploaderAIOClient;
  param_1[0x2b] = (uint)&ghidra_vftable_SCReportUploaderAIOClient;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2d] = (uint)&ghidra_vftable_RControlAIOOpRef;
  param_1[0x3c] = 0;
  thunk_FUN_112a9cf0(param_1 + 0x30);
  thunk_FUN_112aa310(param_1 + 0x32);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  pvVar2 = (void *)(operator_new(0x1a0));
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  if (pvVar2 == (void *)0x0) {
    uVar1 = (undefined4)(0);
  }
  else {
    uVar1 = (undefined4)(thunk_FUN_103058f0(0,0x3c,0x80000,&DAT_1186d2ee,&DAT_1186d2ee,param_1 + 0x2b,0));
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
  param_1[9] = uVar1;
  thunk_FUN_11278a80(uVar1);
  thunk_FUN_11278a90(1);
  thunk_FUN_11278650(param_1 + 10);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10305f70; body size 99 bytes.
#line 1 "ENTRY_10305f70"

void __fastcall FUN_10305f70(int param_1)

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
  thunk_FUN_10304120(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x10);
  return;
}


// Reference entry 10305ff0; body size 77 bytes.
#line 1 "ENTRY_10305ff0"

void __fastcall FUN_10305ff0(int *param_1)

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


// Reference entry 10306530; body size 73 bytes.
#line 1 "ENTRY_10306530"

void __fastcall FUN_10306530(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCReportUploaderAIOClient);
  param_1[1] = (uint)&ghidra_vftable_SCReportUploaderAIOClient;
  thunk_FUN_112a7c30(param_1 + 8);
  thunk_FUN_112a7f20(param_1 + 6);
  param_1[3] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[1] = (uint)&ghidra_vftable_RReportUploaderClient;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  return;
}


// Reference entry 10306740; body size 72 bytes.
#line 1 "ENTRY_10306740"

void __fastcall FUN_10306740(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 0xc));
    local_4 = (int *)(param_1);
    thunk_FUN_10304120(piVar1,*(undefined4 *)(iVar2 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    local_4 = (int *)((int *)*piVar1);
    thunk_FUN_10304a70(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),&local_4);
  }
  return;
}


// Reference entry 103067a0; body size 81 bytes.
#line 1 "ENTRY_103067a0"

int * __thiscall Recovered_Bulk::FUN_103067a0(int *param_2)
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


// Reference entry 10306b10; body size 68 bytes.
#line 1 "ENTRY_10306b10"

undefined4 * __thiscall Recovered_Bulk::FUN_10306b10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConfigLoadAsyncIOOperation);
  param_1[2] = (uint)&ghidra_vftable_SCConfigLoadAsyncIOOperation;
  param_1[7] = (uint)&ghidra_vftable_SCConfigLoadAsyncIOOperation;
  thunk_FUN_112765b0();
  thunk_FUN_111fc270();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc734);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10306da0; body size 96 bytes.
#line 1 "ENTRY_10306da0"

undefined4 * __thiscall Recovered_Bulk::FUN_10306da0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCReportUploaderAIOClient);
  param_1[1] = (uint)&ghidra_vftable_SCReportUploaderAIOClient;
  thunk_FUN_112a7c30(param_1 + 8);
  thunk_FUN_112a7f20(param_1 + 6);
  param_1[3] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[1] = (uint)&ghidra_vftable_RReportUploaderClient;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10306e20; body size 82 bytes.
#line 1 "ENTRY_10306e20"

undefined4 * __thiscall Recovered_Bulk::FUN_10306e20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUsageRequest);
  param_1[0x1883] = (uint)&ghidra_vftable_SCUsageRequest;
  if ((void *)param_1[0x1888] != (void *)0x0) {
    free((void *)param_1[0x1888]);
    param_1[0x1888] = 0;
  }
  thunk_FUN_1124a3e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6228);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10307160; body size 137 bytes.
#line 1 "ENTRY_10307160"

uint __thiscall Recovered_Bulk::FUN_10307160(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x24));
  ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
               *(float *)(param_1 + 8)));
  uVar2 = (uint)(thunk_FUN_1148ac80());
  uVar3 = (uint)(8);
  if (8 < uVar2) {
    uVar3 = (uint)(uVar2);
  }
  if (uVar3 <= uVar1) {
    return (uint)(uVar1);
  }
  if ((0x1ff < uVar1) || (uVar2 = uVar1 * 8, uVar1 * 8 < uVar3)) {
    uVar2 = (uint)(uVar3);
  }
  return (uint)(uVar2);
}


// Reference entry 10307210; body size 83 bytes.
#line 1 "ENTRY_10307210"

void __thiscall Recovered_Bulk::FUN_10307210(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2c70("SCIHousehold:onSecureSettingsChanged",param_3));
  if ((cVar1 == '\0') &&
     (cVar1 = thunk_FUN_101a2c70("SCIHousehold:onFinishedConnectingToZPs",param_3), cVar1 == '\0'))
  {
    return;
  }
  cVar1 = (char)(thunk_FUN_103095b0());
  if (*(int *)(*(int *)(param_1 + 4) + 0xa0) != 2 - (uint)(cVar1 != '\0')) {
    thunk_FUN_1030c220();
  }
  return;
}


// Reference entry 10307c40; body size 79 bytes.
#line 1 "ENTRY_10307c40"

void __thiscall Recovered_Bulk::FUN_10307c40(int param_2)
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


// Reference entry 10307d00; body size 88 bytes.
#line 1 "ENTRY_10307d00"

void __thiscall Recovered_Bulk::FUN_10307d00(int param_2)
{
  int param_1 = (int )this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *(float *)(param_1 + 8))));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 10307db0; body size 134 bytes.
#line 1 "ENTRY_10307db0"

void __fastcall FUN_10307db0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  ceil((double)((float)((double)iVar1 + (double)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
               *(float *)(param_1 + 8)));
  thunk_FUN_1148ac80();
  thunk_FUN_10307620();
  return;
}


// Reference entry 10307ea0; body size 83 bytes.
#line 1 "ENTRY_10307ea0"

void __thiscall Recovered_Bulk::FUN_10307ea0(int *param_2)
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


// Reference entry 10307f60; body size 77 bytes.
#line 1 "ENTRY_10307f60"

void __fastcall FUN_10307f60(int *param_1)

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


// Reference entry 10308b80; body size 125 bytes.
#line 1 "ENTRY_10308b80"

undefined4 __fastcall FUN_10308b80(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int **)(param_1 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xc) + 0x10))();
      puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc));
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
        if (iVar2 == 0) {
          (**(code **)*puVar1)(1);
        }
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    thunk_FUN_112a7f50(param_1 + 0x14);
    if (*(char *)(param_1 + 4) == '\0') {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined2 *)(param_1 + 6) = 0x3ec;
    }
    thunk_FUN_112a7c70(param_1 + 0x1c);
    thunk_FUN_112a8010(param_1 + 0x14);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10308c20; body size 133 bytes.
#line 1 "ENTRY_10308c20"

void __fastcall FUN_10308c20(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int **)(param_1 + 0xc) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(int **)(param_1 + 0x18) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x18));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 10308e00; body size 348 bytes.
#line 1 "ENTRY_10308e00"

undefined1
FUN_10308e00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 uVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined8 local_c;
  undefined4 local_4;
  
  local_4 = (undefined4)(0);
  local_38 = (undefined8)(0);
  uVar4 = (undefined1)(0);
  local_30 = (undefined8)(0);
  local_28 = (undefined8)(0);
  local_20 = (undefined8)(0);
  local_c = (undefined8)(0);
  local_18 = (undefined4)(0);
  local_14 = (undefined4)(0);
  local_10 = (undefined4)(0);
  iVar1 = (int)(thunk_FUN_113c41f0(&local_38,0xffffffff,8,0x1f,8,0,"1.2.12",0x38));
  if (iVar1 != 0) {
    pcVar3 = (char *)("no more info");
    if ((char *)local_20 != (char *)0x0) {
      pcVar3 = (char *)((char *)local_20);
    }
    uVar2 = (undefined4)(thunk_FUN_113c5d40(iVar1,pcVar3));
    thunk_FUN_112af4e0("SCUsageRequest",1,"compressBuffer: deflateInit2 failed %s > %s",uVar2);
    return (undefined1)(0);
  }
  local_38 = (undefined8)(((unsigned long long)(param_2) << 32 | (unsigned long long)(param_1)));
  local_30 = (undefined8)(((unsigned long long)(param_3) << 32 | (unsigned long long)((undefined4)local_30)));
  *(uint *)((char *)&local_28 + 0) = *param_4;
  iVar1 = (int)(thunk_FUN_113c3010(&local_38,4));
  if (iVar1 == 1) {
    uVar4 = (undefined1)(1);
    *param_4 = (undefined4)(*(uint *)((char *)&local_28 + 4));
  }
  else {
    pcVar3 = (char *)("no more info");
    if ((char *)local_20 != (char *)0x0) {
      pcVar3 = (char *)((char *)local_20);
    }
    uVar2 = (undefined4)(thunk_FUN_113c5d40(iVar1,pcVar3));
    thunk_FUN_112af4e0("SCUsageRequest",1,"compressBuffer: deflate failed %s > %s",uVar2);
  }
  iVar1 = (int)(thunk_FUN_113c4010(&local_38));
  if (iVar1 != 0) {
    pcVar3 = (char *)("no more info");
    if ((char *)local_20 != (char *)0x0) {
      pcVar3 = (char *)((char *)local_20);
    }
    uVar2 = (undefined4)(thunk_FUN_113c5d40(iVar1,pcVar3));
    thunk_FUN_112af4e0("SCUsageRequest",1,"compressBuffer: deflateEnd failed %s > %s",uVar2);
    uVar4 = (undefined1)(0);
  }
  return (undefined1)(uVar4);
}


// Reference entry 10308fd0; body size 235 bytes.
#line 1 "ENTRY_10308fd0"

void FUN_10308fd0(undefined4 param_1)

{
 try {
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar1 = (int)(DAT_121a0fd4);


  uVar2 = (uint)(DAT_12126b84);

  if (DAT_121a0fd4 == 0) {
    if (DAT_121a0fd8 == '\0') {
      pvVar3 = (void *)(operator_new(0xfc));
      local_8 = (int)(iVar1);
      if (pvVar3 == (void *)0x0) {
        DAT_121a0fd4 = (int)(0);
      }
      else {
        DAT_121a0fd4 = (int)(thunk_FUN_103056e0());
      }
    }
    if (DAT_121a0fd4 == 0) {

      return;
    }
  }

  if (DAT_121a0fd8 != '\0') {

    return;
  }
  if (*(int *)(DAT_121a0fd4 + 0x24) == 0) {

    return;
  }
  thunk_FUN_10309b60(param_1);
  if (DAT_121a0fd4 == 0) {
    if (DAT_121a0fd8 == '\0') {
      pvVar3 = (void *)(operator_new(0xfc));

      if (pvVar3 == (void *)0x0) {
        DAT_121a0fd4 = (int)(0);
      }
      else {
        DAT_121a0fd4 = (int)(thunk_FUN_103056e0(uVar2));
      }

    }
    if (DAT_121a0fd4 == 0) goto LAB_103090a2;
  }
  thunk_FUN_10308c20();
LAB_103090a2:
  thunk_FUN_1030b1f0(0);

  return;

 } catch (...) { }
}


// Reference entry 10309240; body size 138 bytes.
#line 1 "ENTRY_10309240"

undefined4 __fastcall FUN_10309240(int param_1)

{
 try {
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(undefined4 **)(param_1 + 0x44) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x44))(1,DAT_12126b84 );
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  pvVar1 = (void *)(operator_new(0x1018));

  if (pvVar1 != (void *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_11274040(0));
    *(undefined4 *)(param_1 + 0x44) = uVar2;

    return (undefined4)(uVar2);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10309390; body size 273 bytes.
#line 1 "ENTRY_10309390"

uint * FUN_10309390(uint *param_1)

{
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  uint uVar8;
  undefined4 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (uint)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x104f));
  if (pvVar7 == (void *)0x0) {
                    
    _invalid_parameter_noinfo_noreturn();
  }
  uVar8 = (uint)((int)pvVar7 + 0x23U & 0xffffffe0);
  *(void **)(uVar8 - 4) = pvVar7;
  *(uint *)uVar8 = (uint)(uVar8);
  *(uint *)(uVar8 + 4) = uVar8;
  *(uint *)(uVar8 + 8) = uVar8;
  *(undefined2 *)(uVar8 + 0xc) = 0x101;
  *param_1 = (uint)(uVar8);

  uVar9 = (undefined4)(thunk_FUN_103039a0(*(undefined4 *)(DAT_121a100c + 4),uVar8,param_1));
  *(undefined4 *)(*param_1 + 4) = uVar9;
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = DAT_121a1010;
  piVar3 = (int *)((int *)piVar2[1]);
  if (*(char *)((int)piVar3 + 0xd) != '\0') {
    *piVar2 = (int)((int)piVar2);
    *(uint *)(*param_1 + 8) = *param_1;

    return (uint *)(param_1);
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

  return (uint *)(param_1);

 } catch (...) { }
}


// Reference entry 10309500; body size 128 bytes.
#line 1 "ENTRY_10309500"

void FUN_10309500(void)

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

    if (pvVar2 != (void *)0x0) {
      DAT_121a0fd4 = (int)(thunk_FUN_103056e0(uVar1,pvVar2));

      return;
    }
    DAT_121a0fd4 = (int)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 103095b0; body size 174 bytes.
#line 1 "ENTRY_103095b0"

undefined1 FUN_103095b0(void)

{
 try {
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  SCLibrary *this_;
  int *piVar4;
  int **ppiVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  ppiVar5 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar5,uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 == (int *)0x0) {
    uVar2 = (undefined1)(0);
  }
  else {
    uVar2 = (undefined1)((**(code **)(*piVar1 + 0xa8))());
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 10309690; body size 165 bytes.
#line 1 "ENTRY_10309690"

undefined4 FUN_10309690(void)

{
 try {
  int iVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar1 = (int)(DAT_121a0fd4);


  uVar3 = (uint)(DAT_12126b84);

  if (DAT_121a0fd4 == 0) {
    if (DAT_121a0fd8 == '\0') {
      pvVar4 = (void *)(operator_new(0xfc));
      local_8 = (int)(iVar1);
      if (pvVar4 == (void *)0x0) {
        DAT_121a0fd4 = (int)(0);
      }
      else {
        DAT_121a0fd4 = (int)(thunk_FUN_103056e0());
      }
    }
    if (DAT_121a0fd4 == 0) {

      return (undefined4)(0);
    }
  }
  iVar1 = (int)(DAT_121a0fd4);

  cVar2 = (char)(thunk_FUN_112783b0(uVar3));
  if ((cVar2 != '\0') && (*(int *)(iVar1 + 0xa0) != 2)) {

    return (undefined4)(1);
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10309870; body size 254 bytes.
#line 1 "ENTRY_10309870"

void __thiscall Recovered_Bulk::FUN_10309870(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  SCLibrary *pSVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  if (pSVar2 != (SCLibrary *)0x0) {
    iVar3 = (int)((**(code **)(*(int *)pSVar2 + 0x110))(uVar1));
    if (((iVar3 == 2) && (*(int *)(param_1 + 0x1c) == 0)) && (DAT_121a0fd8 == '\0')) {
      puVar4 = (undefined4 *)(operator_new(0xc734));

      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)((undefined4 *)0x0);
      }
      else {
        puVar6 = (undefined1 *)(&DAT_1186d2ee);
        if (*(undefined1 **)(param_1 + 0x9c) != (undefined1 *)0x0) {
          puVar6 = (undefined1 *)(*(undefined1 **)(param_1 + 0x9c));
        }
        thunk_FUN_111fbeb0(puVar6,20000,18000,0,4,param_2 * 1000,0);
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
        *puVar4 = (undefined4)((uint)&ghidra_vftable_SCConfigLoadAsyncIOOperation);
        puVar4[2] = (uint)&ghidra_vftable_SCConfigLoadAsyncIOOperation;
        puVar4[7] = (uint)&ghidra_vftable_SCConfigLoadAsyncIOOperation;
        uVar5 = (undefined4)(thunk_FUN_112782b0());
        thunk_FUN_11276420(uVar5);
      }

      thunk_FUN_102207b0(puVar4,param_1,0);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10309ae0; body size 65 bytes.
#line 1 "ENTRY_10309ae0"

void __thiscall Recovered_Bulk::FUN_10309ae0(undefined4 param_2,undefined2 param_3)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x14) = 0;
  thunk_FUN_112a7f50(param_1 + 0x18);
  if (*(char *)(param_1 + 8) == '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined2 *)(param_1 + 10) = param_3;
  }
  thunk_FUN_112a7c70(param_1 + 0x20);
  thunk_FUN_112a8010(param_1 + 0x18);
  return;
}


// Reference entry 10309e90; body size 273 bytes.
#line 1 "ENTRY_10309e90"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10309e90(undefined4 param_1,undefined4 param_2,int param_3)

{
 try {
  int iVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_102c [4120];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar1 = (int)(DAT_121a0fd4);


  uVar3 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar3);
  if (DAT_121a0fd4 == 0) {
    if (DAT_121a0fd8 == '\0') {
      pvVar4 = (void *)(operator_new(0xfc));
      local_8 = (int)(iVar1);
      if (pvVar4 == (void *)0x0) {
        DAT_121a0fd4 = (int)(0);
      }
      else {
        DAT_121a0fd4 = (int)(thunk_FUN_103056e0());
      }
    }

    if (DAT_121a0fd4 == 0) goto LAB_10309f85;
  }
  iVar1 = (int)(DAT_121a0fd4);

  cVar2 = (char)(thunk_FUN_112783b0(uVar3));
  if ((cVar2 != '\0') && (*(int *)(iVar1 + 0xa0) != 2)) {
    thunk_FUN_11249060();

    if (param_3 != 0) {
      puVar6 = (undefined4 *)(&param_3);
      iVar5 = (int)(param_3);
      do {
        if (puVar6[1] == 0) break;
        thunk_FUN_11249230(iVar5,puVar6[1]);
        iVar5 = (int)(puVar6[2]);
        puVar6 = (undefined4 *)(puVar6 + 2);
      } while (iVar5 != 0);
    }
    (**(code **)(*(int *)(*(int *)(iVar1 + 0x20) + 4) + 0xc))(local_102c,param_1,param_2,1,1);
    thunk_FUN_11249110();
  }
LAB_10309f85:

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10309ff0; body size 170 bytes.
#line 1 "ENTRY_10309ff0"

void FUN_10309ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  int iVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar1 = (int)(DAT_121a0fd4);


  uVar3 = (uint)(DAT_12126b84);

  if (DAT_121a0fd4 == 0) {
    if (DAT_121a0fd8 == '\0') {
      pvVar4 = (void *)(operator_new(0xfc));
      local_8 = (int)(iVar1);
      if (pvVar4 == (void *)0x0) {
        DAT_121a0fd4 = (int)(0);
      }
      else {
        DAT_121a0fd4 = (int)(thunk_FUN_103056e0());
      }
    }
    if (DAT_121a0fd4 == 0) {

      return;
    }
  }
  iVar1 = (int)(DAT_121a0fd4);

  cVar2 = (char)(thunk_FUN_112783b0(uVar3));
  if ((cVar2 != '\0') && (*(int *)(iVar1 + 0xa0) != 2)) {
    (**(code **)(*(int *)(*(int *)(iVar1 + 0x20) + 4) + 0xc))(param_3,param_1,param_2,1,1);
  }

  return;

 } catch (...) { }
}


// Reference entry 1030a0d0; body size 300 bytes.
#line 1 "ENTRY_1030a0d0"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1030a0d0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
 try {
  int iVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  undefined1 local_102c [4120];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar1 = (int)(DAT_121a0fd4);


  uVar3 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar3);
  if (DAT_121a0fd4 == 0) {
    if (DAT_121a0fd8 == '\0') {
      pvVar4 = (void *)(operator_new(0xfc));
      local_8 = (int)(iVar1);
      if (pvVar4 == (void *)0x0) {
        DAT_121a0fd4 = (int)(0);
      }
      else {
        DAT_121a0fd4 = (int)(thunk_FUN_103056e0());
      }
    }

    if (DAT_121a0fd4 == 0) goto LAB_1030a1e0;
  }
  iVar1 = (int)(DAT_121a0fd4);

  cVar2 = (char)(thunk_FUN_112783b0(uVar3));
  if ((cVar2 != '\0') && (*(int *)(iVar1 + 0xa0) != 2)) {
    thunk_FUN_11249060();

    if (param_3 != 0) {
      thunk_FUN_10308670(param_3,local_102c);
    }
    if (param_4 != 0) {
      thunk_FUN_1124dc60(local_102c);
    }
    (**(code **)(*(int *)(*(int *)(iVar1 + 0x20) + 4) + 0xc))(local_102c,param_1,param_2,1,1);
    thunk_FUN_11249110();
  }
LAB_1030a1e0:

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 1030b090; body size 88 bytes.
#line 1 "ENTRY_1030b090"

undefined4 __thiscall Recovered_Bulk::FUN_1030b090(void *param_2,uint param_3,size_t *param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  uint _Size;
  
  uVar1 = (uint)(*(uint *)(param_1 + 8));
  if (uVar1 != 0) {
    uVar2 = (uint)(*(uint *)(param_1 + 0xc));
    if (param_2 == (void *)0x0) {
      if (uVar2 == 0) {
        return (undefined4)(1);
      }
    }
    else if (uVar2 <= uVar1) {
      _Size = (uint)(uVar1 - uVar2);
      if (param_3 < uVar1 - uVar2) {
        _Size = (uint)(param_3);
      }
      memmove(param_2,(void *)(*(int *)(param_1 + 0x10) + uVar2),_Size);
      *param_4 = (size_t)(_Size);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + _Size;
      if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 8)) {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 1030b100; body size 142 bytes.
#line 1 "ENTRY_1030b100"

void FUN_1030b100(void)

{
 try {
  int iVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar1 = (int)(DAT_121a0fd4);


  if (DAT_121a0fd4 == 0) {
    if (DAT_121a0fd8 == '\0') {
      pvVar2 = (void *)(operator_new(0xfc));
      local_8 = (int)(iVar1);
      if (pvVar2 == (void *)0x0) {
        DAT_121a0fd4 = (int)(0);
      }
      else {
        DAT_121a0fd4 = (int)(thunk_FUN_103056e0());
      }
    }
    if (DAT_121a0fd4 == 0) {

      return;
    }
  }

  thunk_FUN_10309870(0);
  thunk_FUN_1030b1f0(0);

  return;

 } catch (...) { }
}


// Reference entry 1030b1f0; body size 157 bytes.
#line 1 "ENTRY_1030b1f0"

void __thiscall Recovered_Bulk::FUN_1030b1f0(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  SCLibrary *pSVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  if (pSVar2 != (SCLibrary *)0x0) {
    iVar3 = (int)((**(code **)(*(int *)pSVar2 + 0x110))(uVar1));
    if (((iVar3 == 2) && (*(int *)(param_1 + 0x10) == 0)) && (DAT_121a0fd8 == '\0')) {
      pvVar4 = (void *)(operator_new(0x6c));

      if (pvVar4 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(thunk_FUN_111c06e0(param_2 * 1000));
      }

      thunk_FUN_102207b0(uVar5,param_1,0);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1030b340; body size 81 bytes.
#line 1 "ENTRY_1030b340"

void __thiscall Recovered_Bulk::FUN_1030b340(uint param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  int iVar2;
  
  iVar2 = (int)((param_2 & 0xff ^ 1) + 1);
  if (*(int *)(param_1 + 0xa0) != iVar2) {
    pcVar1 = (char *)("true");
    if ((char)param_2 == '\0') {
      pcVar1 = (char *)("false");
    }
    thunk_FUN_112af4e0("SCReportManager",2,"setUserOptIn: %s",pcVar1);
    thunk_FUN_11278b60(param_2);
  }
  *(int *)(param_1 + 0xa0) = iVar2;
  return;
}


// Reference entry 1030b680; body size 183 bytes.
#line 1 "ENTRY_1030b680"

void FUN_1030b680(void)

{
 try {
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar2 = (int)(DAT_121a0fd4);


  uVar3 = (uint)(DAT_12126b84);

  if (DAT_121a0fd4 == 0) {
    if (DAT_121a0fd8 == '\0') {
      pvVar4 = (void *)(operator_new(0xfc));
      local_8 = (int)(iVar2);
      if (pvVar4 == (void *)0x0) {
        DAT_121a0fd4 = (int)(0);
      }
      else {
        DAT_121a0fd4 = (int)(thunk_FUN_103056e0());
      }
    }
    if (DAT_121a0fd4 == 0) {

      return;
    }
  }
  iVar2 = (int)(DAT_121a0fd4);

  DAT_121a0fd8 = (int)(1);
  thunk_FUN_10308c20(uVar3);
  thunk_FUN_11277fc0();
  thunk_FUN_1126fcc0();
  puVar1 = (undefined4 *)(*(undefined4 **)(iVar2 + 0xa4));
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  *(undefined4 *)(iVar2 + 0xa4) = 0;

  return;

 } catch (...) { }
}


// Reference entry 1030b7d0; body size 643 bytes.
#line 1 "ENTRY_1030b7d0"

void __fastcall FUN_1030b7d0(int param_1)

{
 try {
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined **ppuStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  char *pcStack_94;
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  char *pcStack_84;
  char *pcStack_80;
  char *pcStack_7c;
  int local_54;
  int local_50;
  int *local_34;
  int *local_2c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(undefined4 **)(param_1 + 0xa4) != (undefined4 *)0x0) {
    pcStack_7c = (char *)((char *)0x1030b80a);
    (**(code **)**(undefined4 **)(param_1 + 0xa4))();
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  if (*(int *)(param_1 + 0xa0) == 0) {
    thunk_FUN_1109f7f0();
    cVar2 = (char)(thunk_FUN_110a0fd0());
    if (cVar2 == '\0') {
      thunk_FUN_103095b0();
      pcStack_7c = (char *)("Initializing with setUserOptIn: %s");
      pcStack_80 = (char *)((char *)0x1);
      pcStack_84 = (char *)("SCReportManager");

      thunk_FUN_112af4e0();
      thunk_FUN_103095b0();
      pcStack_7c = (char *)((char *)0x1030b86a);
      thunk_FUN_1030b340();
    }
    else {
      pcStack_7c = (char *)((char *)0x1);
      pcStack_80 = (char *)("SCReportManager");
      pcStack_84 = (char *)((char *)0x1030b87d);
      thunk_FUN_112af4e0();
    }
  }
  pcStack_7c = (char *)((char *)0x1030b88f);
  thunk_FUN_1011a340();
  iVar1 = (int)(*(int *)(param_1 + 0x24));

  if ((local_54 != *(int *)(iVar1 + 0x16c)) || (local_50 != *(int *)(iVar1 + 0x170))) {
    *(int *)(iVar1 + 0x16c) = local_54;
    *(int *)(iVar1 + 0x170) = local_50;
  }
  pcStack_7c = (char *)((char *)0x1030b8c2);
  piVar3 = (int *)(operator_new(0x7c));
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (piVar3 == (int *)0x0) {
    uVar4 = (undefined4)(0);
  }
  else {
    pcStack_7c = (char *)((char *)0x1030b8dc);
    uVar4 = (undefined4)(thunk_FUN_1126df20());
  }
  pcStack_7c = (char *)((char *)0x1);
  pcStack_80 = (char *)((char *)0x5);
  pcStack_84 = (char *)((char *)0x0);



  pcStack_94 = (char *)("uploadEvents");
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = uVar4;

  thunk_FUN_1126f0b0();
  pcStack_7c = (char *)((char *)0x1030b91a);
  thunk_FUN_112702b0();

  pcStack_80 = (char *)(*(char **)(param_1 + 0xa4));
  pcStack_84 = (char *)((char *)0x1030b92f);
  thunk_FUN_11275f20();
  pcStack_7c = (char *)((undefined1 *)0x1030b938);
  piVar5 = (int *)((int *)thunk_FUN_1037a2b0());
  piVar6 = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *piVar5 = (int)(0);
  if (piVar6 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (piVar6 != (int *)0x0) {
    pcStack_7c = (char *)((char *)&ppuStack_a0);
    ppuStack_a0 = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
    iStack_9c = (int)(param_1);
    piVar6 = (int *)((int *)thunk_FUN_10398a70(&local_14));
    piVar3 = (int *)((int *)*piVar6);
    *piVar6 = (int)(0);
    piVar6 = (int *)(*(int **)(param_1 + 0xf8));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
    if (piVar6 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xf4) = 0;
      *(undefined4 *)(param_1 + 0xf8) = 0;
      (**(code **)(*piVar6 + 8))();
    }
    *(int **)(param_1 + 0xf4) = piVar3;
    if (piVar3 == (int *)0x0) {
      uVar4 = (undefined4)(0);
    }
    else {
      uVar4 = (undefined4)((**(code **)(*piVar3 + 0xc))());
    }
    *(undefined4 *)(param_1 + 0xf8) = uVar4;
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }

  if (local_34 != (int *)0x0) {
    (**(code **)(*local_34 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 1030bb20; body size 141 bytes.
#line 1 "ENTRY_1030bb20"

void FUN_1030bb20(void)

{
 try {
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  if (DAT_121a0fd4 == 0) {
    if (DAT_121a0fd8 == '\0') {
      pvVar2 = (void *)(operator_new(0xfc));

      if (pvVar2 == (void *)0x0) {
        DAT_121a0fd4 = (int)(0);
      }
      else {
        DAT_121a0fd4 = (int)(thunk_FUN_103056e0());
      }
    }

    if (DAT_121a0fd4 == 0) goto LAB_1030bb94;
  }

  thunk_FUN_10308c20(uVar1);
LAB_1030bb94:
  thunk_FUN_1030b1f0(0);

  return;

 } catch (...) { }
}


// Reference entry 1030be20; body size 128 bytes.
#line 1 "ENTRY_1030be20"

void __fastcall FUN_1030be20(void *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  if (DAT_121a0fd4 == 0) {
    if (DAT_121a0fd8 == '\0') {
      param_1 = (void *)(operator_new(0xfc));

      if (param_1 == (void *)0x0) {
        DAT_121a0fd4 = (int)(0);
      }
      else {
        DAT_121a0fd4 = (int)(thunk_FUN_103056e0(uVar1,param_1));
      }
    }
    if (DAT_121a0fd4 == 0) {

      return;
    }
  }

  thunk_FUN_10308c20(uVar1,param_1);

  return;

 } catch (...) { }
}


// Reference entry 1030c120; body size 164 bytes.
#line 1 "ENTRY_1030c120"

void FUN_1030c120(int param_1,int param_2)

{
 try {
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  if (DAT_121a0fd4 == 0) {
    if (DAT_121a0fd8 == '\0') {
      pvVar3 = (void *)(operator_new(0xfc));

      if (pvVar3 == (void *)0x0) {
        DAT_121a0fd4 = (int)(0);
      }
      else {
        DAT_121a0fd4 = (int)(thunk_FUN_103056e0(uVar2,pvVar3));
      }
    }
    if (DAT_121a0fd4 == 0) {

      return;
    }
  }
  if (((DAT_121a0fd8 == '\0') && (iVar1 = *(int *)(DAT_121a0fd4 + 0x24), iVar1 != 0)) &&
     ((param_1 != *(int *)(iVar1 + 0x16c) || (param_2 != *(int *)(iVar1 + 0x170))))) {
    *(int *)(iVar1 + 0x16c) = param_1;
    *(int *)(iVar1 + 0x170) = param_2;
  }

  return;

 } catch (...) { }
}


// Reference entry 1030c220; body size 190 bytes.
#line 1 "ENTRY_1030c220"

void __fastcall FUN_1030c220(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  thunk_FUN_1109f7f0();
  cVar1 = (char)(thunk_FUN_110a0fd0());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_103095b0());
    iVar4 = (int)((cVar1 == '\0') + 1);
    if (*(int *)(param_1 + 0xa0) != iVar4) {
      pcVar2 = (char *)("true");
      if (cVar1 == '\0') {
        pcVar2 = (char *)("false");
      }
      thunk_FUN_112af4e0("SCReportManager",2,"setUserOptIn: %s",pcVar2);
      thunk_FUN_11278b60(cVar1);
    }
    *(int *)(param_1 + 0xa0) = iVar4;
    if (iVar4 == 1) {
      thunk_FUN_112af4e0("SCReportManager",2,"Kicking off event upload");
      iVar4 = (int)(thunk_FUN_1109f7f0());
      if (iVar4 != 0) {
        uVar3 = (undefined4)(thunk_FUN_1109f750());
        thunk_FUN_11278b20(uVar3);
      }
      (**(code **)(**(int **)(param_1 + 0xa4) + 4))(LAB_1001a01e,0);
      return;
    }
  }
  else {
    thunk_FUN_1030b1f0(0x3c);
  }
  return;
}


// Reference entry 1030c310; body size 237 bytes.
#line 1 "ENTRY_1030c310"

void FUN_1030c310(undefined4 param_1,undefined4 *param_2)

{
 try {
  int iVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar1 = (int)(DAT_121a0fd4);


  uVar3 = (uint)(DAT_12126b84);

  if (DAT_121a0fd4 == 0) {
    if (DAT_121a0fd8 == '\0') {
      pvVar4 = (void *)(operator_new(0xfc));
      local_8 = (int)(iVar1);
      if (pvVar4 == (void *)0x0) {
        DAT_121a0fd4 = (int)(0);
      }
      else {
        DAT_121a0fd4 = (int)(thunk_FUN_103056e0());
      }
    }
    if (DAT_121a0fd4 == 0) goto LAB_1030c3db;
  }
  iVar1 = (int)(DAT_121a0fd4);

  iVar5 = (int)(thunk_FUN_11278290(uVar3));
  uVar7 = (undefined4)(0x3c);
  if (((iVar5 != 0) && (cVar2 = thunk_FUN_11278390(), cVar2 != '\0')) &&
     (*(int *)(iVar1 + 0xa0) == 1)) {
    thunk_FUN_112755e0(0);
    uVar7 = (undefined4)(thunk_FUN_112755a0());
  }
  puVar6 = (undefined4 *)(operator_new(4));
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    *puVar6 = (undefined4)(uVar7);
  }
  thunk_FUN_1106b190(iVar1 + 4,puVar6,0);
LAB_1030c3db:
  param_2[1] = 0;
  *param_2 = (undefined4)(0x7fffffff);

  return;

 } catch (...) { }
}


// Reference entry 1030d760; body size 83 bytes.
#line 1 "ENTRY_1030d760"

void FUN_1030d760(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  *(undefined4 *)param_2[1] = 0;
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    piVar3 = (int *)(*(int **)puVar2[0xc]);
    if (piVar3 != (int *)puVar2[0xc]) {
      do {
        *(undefined1 *)piVar3[2] = 0;
        piVar3 = (int *)((int *)*piVar3);
      } while (piVar3 != (int *)puVar2[0xc]);
    }
    thunk_FUN_1030f760();
    thunk_FUN_1030f810();
    thunk_FUN_1148a50e(puVar2,0x4c);
    puVar2 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 1030e5d0; body size 137 bytes.
#line 1 "ENTRY_1030e5d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1030e5d0(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = (uint)(*(uint *)(param_1 + 0x18) &
          ((((*(byte *)(param_3 + 2) ^ 0x811c9dc5) * 0x1000193 ^ (uint)*(byte *)((int)param_3 + 9))
            * 0x1000193 ^ (uint)*(byte *)((int)param_3 + 10)) * 0x1000193 ^
          (uint)*(byte *)((int)param_3 + 0xb)) * 0x1000193);
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + uVar4 * 8));
  if (*(undefined4 **)(iVar1 + 4 + uVar4 * 8) == param_3) {
    if (puVar2 == (undefined4 *)(param_3)) {
      uVar3 = (undefined4)(*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(iVar1 + uVar4 * 8) = uVar3;
      *(undefined4 *)(iVar1 + 4 + uVar4 * 8) = uVar3;
    }
    else {
      *(undefined4 *)(iVar1 + 4 + uVar4 * 8) = param_3[1];
    }
  }
  else if (puVar2 == (undefined4 *)(param_3)) {
    *(undefined4 *)(iVar1 + uVar4 * 8) = *param_3;
  }
  uVar3 = (undefined4)(thunk_FUN_10312640(param_3));
  *param_2 = (undefined4)(uVar3);
  return (undefined4 *)(param_2);
}


// Reference entry 1030e6e0; body size 95 bytes.
#line 1 "ENTRY_1030e6e0"

void FUN_1030e6e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 1030e760; body size 95 bytes.
#line 1 "ENTRY_1030e760"

void FUN_1030e760(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 1030e7e0; body size 95 bytes.
#line 1 "ENTRY_1030e7e0"

void FUN_1030e7e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 1030e860; body size 99 bytes.
#line 1 "ENTRY_1030e860"

void __thiscall Recovered_Bulk::FUN_1030e860(int *param_2,byte *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_1030d4f0(local_8,param_3,
                             ((((*param_3 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_3[1]) * 0x1000193
                              ^ (uint)param_3[2]) * 0x1000193 ^ (uint)param_3[3]) * 0x1000193));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar1);
  return;
}


// Reference entry 1030e8e0; body size 99 bytes.
#line 1 "ENTRY_1030e8e0"

void __thiscall Recovered_Bulk::FUN_1030e8e0(int *param_2,byte *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_1030d570(local_8,param_3,
                             ((((*param_3 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_3[1]) * 0x1000193
                              ^ (uint)param_3[2]) * 0x1000193 ^ (uint)param_3[3]) * 0x1000193));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar1);
  return;
}


// Reference entry 1030f390; body size 197 bytes.
#line 1 "ENTRY_1030f390"

int __fastcall FUN_1030f390(int param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  pvVar2 = (void *)(operator_new(0x4c));
  *(void **)pvVar2 = (void *)(pvVar2);
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)(param_1 + 0x34) = pvVar2;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;

  *(undefined4 *)(param_1 + 0x48) = 7;
  *(undefined4 *)(param_1 + 0x4c) = 8;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  thunk_FUN_10310680(0x10,*(undefined4 *)(param_1 + 0x34));
  thunk_FUN_112a7ea0(param_1,"SCWeakRefMgr",uVar1);
  thunk_FUN_112a7b70(param_1 + 8,"SCWeakRefMgr");

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1030f6e0; body size 99 bytes.
#line 1 "ENTRY_1030f6e0"

void __fastcall FUN_1030f6e0(int param_1)

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
  thunk_FUN_1030d760(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x4c);
  return;
}


// Reference entry 1030f760; body size 137 bytes.
#line 1 "ENTRY_1030f760"

void __fastcall FUN_1030f760(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  uVar5 = (uint)(*(int *)(param_1 + 0x10) - iVar1 & 0xfffffffc);
  iVar4 = (int)(iVar1);
  if (0xfff < uVar5) {
    iVar4 = (int)(*(int *)(iVar1 + -4));
    uVar5 = (uint)(uVar5 + 0x23);
    if (0x1f < (iVar1 - iVar4) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar4,uVar5);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *(undefined4 *)puVar2[1] = 0;
  puVar2 = (undefined4 *)((undefined4 *)*puVar2);
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_1148a50e(puVar2,0xc);
    puVar2 = (undefined4 *)(puVar3);
  }
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 4),0xc);
  return;
}


// Reference entry 1030f810; body size 137 bytes.
#line 1 "ENTRY_1030f810"

void __fastcall FUN_1030f810(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  uVar5 = (uint)(*(int *)(param_1 + 0x10) - iVar1 & 0xfffffffc);
  iVar4 = (int)(iVar1);
  if (0xfff < uVar5) {
    iVar4 = (int)(*(int *)(iVar1 + -4));
    uVar5 = (uint)(uVar5 + 0x23);
    if (0x1f < (iVar1 - iVar4) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar4,uVar5);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *(undefined4 *)puVar2[1] = 0;
  puVar2 = (undefined4 *)((undefined4 *)*puVar2);
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_1148a50e(puVar2,0xc);
    puVar2 = (undefined4 *)(puVar3);
  }
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 4),0xc);
  return;
}


// Reference entry 1030f8c0; body size 77 bytes.
#line 1 "ENTRY_1030f8c0"

void __fastcall FUN_1030f8c0(int *param_1)

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


// Reference entry 1030f930; body size 77 bytes.
#line 1 "ENTRY_1030f930"

void __fastcall FUN_1030f930(int *param_1)

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


// Reference entry 1030f9a0; body size 77 bytes.
#line 1 "ENTRY_1030f9a0"

void __fastcall FUN_1030f9a0(int *param_1)

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


// Reference entry 1030fa50; body size 70 bytes.
#line 1 "ENTRY_1030fa50"

void __fastcall FUN_1030fa50(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  if (iVar1 != 0) {
    piVar2 = (int *)((int *)**(int **)(iVar1 + 0x30));
    if (piVar2 != *(int **)(iVar1 + 0x30)) {
      do {
        *(undefined1 *)piVar2[2] = 0;
        piVar2 = (int *)((int *)*piVar2);
      } while (piVar2 != (int *)*(int *)(iVar1 + 0x30));
    }
    thunk_FUN_1030f760();
    thunk_FUN_1030f810();
  }
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x4c);
  }
  return;
}


// Reference entry 103102d0; body size 70 bytes.
#line 1 "ENTRY_103102d0"

int __thiscall Recovered_Bulk::FUN_103102d0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)**(int **)(param_1 + 0x28));
  if (piVar1 != *(int **)(param_1 + 0x28)) {
    do {
      *(undefined1 *)piVar1[2] = 0;
      piVar1 = (int *)((int *)*piVar1);
    } while (piVar1 != (int *)*(int *)(param_1 + 0x28));
  }
  thunk_FUN_1030f760();
  thunk_FUN_1030f810();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x44);
  }
  return (int)(param_1);
}


// Reference entry 103107a0; body size 71 bytes.
#line 1 "ENTRY_103107a0"

void __fastcall FUN_103107a0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int *)param_1[2]);
  param_1[2] = *piVar1;
  piVar2 = (int *)(*(int **)piVar1[0xc]);
  if (piVar2 != (int *)piVar1[0xc]) {
    do {
      *(undefined1 *)piVar2[2] = 0;
      piVar2 = (int *)((int *)*piVar2);
    } while (piVar2 != (int *)piVar1[0xc]);
  }
  thunk_FUN_1030f760();
  thunk_FUN_1030f810();
  thunk_FUN_1148a50e(piVar1,0x4c);
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
  return;
}


// Reference entry 103109e0; body size 136 bytes.
#line 1 "ENTRY_103109e0"

float __thiscall Recovered_Bulk::FUN_103109e0(int param_2)
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


// Reference entry 10310a90; body size 136 bytes.
#line 1 "ENTRY_10310a90"

float __thiscall Recovered_Bulk::FUN_10310a90(int param_2)
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


// Reference entry 10310b40; body size 136 bytes.
#line 1 "ENTRY_10310b40"

float __thiscall Recovered_Bulk::FUN_10310b40(int param_2)
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


// Reference entry 10311740; body size 87 bytes.
#line 1 "ENTRY_10311740"

void __thiscall Recovered_Bulk::FUN_10311740(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 103117b0; body size 87 bytes.
#line 1 "ENTRY_103117b0"

void __thiscall Recovered_Bulk::FUN_103117b0(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 10311820; body size 87 bytes.
#line 1 "ENTRY_10311820"

void __thiscall Recovered_Bulk::FUN_10311820(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 103118f0; body size 133 bytes.
#line 1 "ENTRY_103118f0"

void __fastcall FUN_103118f0(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10310df0();
  return;
}


// Reference entry 103119a0; body size 133 bytes.
#line 1 "ENTRY_103119a0"

void __fastcall FUN_103119a0(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10310fb0();
  return;
}


// Reference entry 10311a50; body size 133 bytes.
#line 1 "ENTRY_10311a50"

void __fastcall FUN_10311a50(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10311170();
  return;
}


// Reference entry 10311b60; body size 77 bytes.
#line 1 "ENTRY_10311b60"

void __fastcall FUN_10311b60(int *param_1)

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


// Reference entry 10311bd0; body size 77 bytes.
#line 1 "ENTRY_10311bd0"

void __fastcall FUN_10311bd0(int *param_1)

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


// Reference entry 10311c40; body size 77 bytes.
#line 1 "ENTRY_10311c40"

void __fastcall FUN_10311c40(int *param_1)

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


// Reference entry 10312640; body size 80 bytes.
#line 1 "ENTRY_10312640"

int __thiscall Recovered_Bulk::FUN_10312640(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  *(int *)param_2[1] = iVar1;
  *(int *)(iVar1 + 4) = param_2[1];
  piVar2 = (int *)(*(int **)param_2[0xc]);
  if (piVar2 != (int *)param_2[0xc]) {
    do {
      *(undefined1 *)piVar2[2] = 0;
      piVar2 = (int *)((int *)*piVar2);
    } while (piVar2 != (int *)param_2[0xc]);
  }
  thunk_FUN_1030f760();
  thunk_FUN_1030f810();
  thunk_FUN_1148a50e(param_2,0x4c);
  return (int)(iVar1);
}


// Reference entry 10313200; body size 207 bytes.
#line 1 "ENTRY_10313200"

undefined4 __thiscall Recovered_Bulk::FUN_10313200(byte *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_8 [8];
  
  uVar4 = (uint)(((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2])
           * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
  iVar3 = (int)(thunk_FUN_1030d4f0(local_8,param_2,uVar4));
  piVar2 = (int *)(*(int **)(iVar3 + 4));
  if (piVar2 == (int *)0x0) {
    return (undefined4)(0);
  }
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & uVar4) * 8));
  if ((int *)piVar1[1] == piVar2) {
    if ((int *)*piVar1 == (int *)(piVar2)) {
      iVar3 = (int)(*(int *)(param_1 + 4));
      *piVar1 = (int)(iVar3);
      piVar1[1] = iVar3;
      thunk_FUN_10312640(piVar2);
      return (undefined4)(1);
    }
    piVar1[1] = piVar2[1];
    thunk_FUN_10312640(piVar2);
    return (undefined4)(1);
  }
  if ((int *)*piVar1 == (int *)(piVar2)) {
    *piVar1 = (int)(*piVar2);
  }
  thunk_FUN_10312640(piVar2);
  return (undefined4)(1);
}


// Reference entry 10313310; body size 183 bytes.
#line 1 "ENTRY_10313310"

undefined4 __thiscall Recovered_Bulk::FUN_10313310(byte *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_8 [8];
  
  uVar4 = (uint)(((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2])
           * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
  iVar3 = (int)(thunk_FUN_1030d470(local_8,param_2,uVar4));
  piVar2 = (int *)(*(int **)(iVar3 + 4));
  if (piVar2 != (int *)0x0) {
    piVar1 = (int *)((int *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & uVar4) * 8));
    if ((int *)piVar1[1] == piVar2) {
      if ((int *)*piVar1 == (int *)(piVar2)) {
        iVar3 = (int)(*(int *)(param_1 + 4));
        *piVar1 = (int)(iVar3);
        piVar1[1] = iVar3;
      }
      else {
        piVar1[1] = piVar2[1];
      }
    }
    else if ((int *)*piVar1 == (int *)(piVar2)) {
      *piVar1 = (int)(*piVar2);
    }
    iVar3 = (int)(*piVar2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    *(int *)piVar2[1] = iVar3;
    *(int *)(iVar3 + 4) = piVar2[1];
    thunk_FUN_1148a50e(piVar2,0xc);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10313400; body size 183 bytes.
#line 1 "ENTRY_10313400"

undefined4 __thiscall Recovered_Bulk::FUN_10313400(byte *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_8 [8];
  
  uVar4 = (uint)(((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2])
           * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
  iVar3 = (int)(thunk_FUN_1030d570(local_8,param_2,uVar4));
  piVar2 = (int *)(*(int **)(iVar3 + 4));
  if (piVar2 != (int *)0x0) {
    piVar1 = (int *)((int *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & uVar4) * 8));
    if ((int *)piVar1[1] == piVar2) {
      if ((int *)*piVar1 == (int *)(piVar2)) {
        iVar3 = (int)(*(int *)(param_1 + 4));
        *piVar1 = (int)(iVar3);
        piVar1[1] = iVar3;
      }
      else {
        piVar1[1] = piVar2[1];
      }
    }
    else if ((int *)*piVar1 == (int *)(piVar2)) {
      *piVar1 = (int)(*piVar2);
    }
    iVar3 = (int)(*piVar2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    *(int *)piVar2[1] = iVar3;
    *(int *)(iVar3 + 4) = piVar2[1];
    thunk_FUN_1148a50e(piVar2,0xc);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10313500; body size 380 bytes.
#line 1 "ENTRY_10313500"

undefined4 * __thiscall Recovered_Bulk::FUN_10313500(undefined4 *param_2,uint param_3,int *param_4)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  int local_20;
  char local_1c;
  undefined1 local_18 [4];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_20 = (int)(param_1);
  local_1c = (char)(thunk_FUN_112a7f50(param_1,DAT_12126b84 ));

  local_14 = (int)((((((uint)param_4 & 0xff ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_4 >> 8 & 0xff) *
               0x1000193 ^ (uint)param_4 >> 0x10 & 0xff) * 0x1000193 ^ (uint)param_4 >> 0x18) *
             0x1000193);
  iVar3 = (int)(thunk_FUN_1030d4f0(local_28,&param_4,local_14));
  iVar1 = (int)(local_14);
  iVar3 = (int)(*(int *)(iVar3 + 4));
  if (iVar3 == 0) {
    iVar3 = (int)(*(int *)(param_1 + 0x34));
  }
  iVar4 = (int)(*(int *)(param_1 + 0x34));
  if (iVar3 != iVar4) {
    do {
      if (*(int *)(iVar3 + 0x34) == 0) break;
      thunk_FUN_112a7da0(param_1 + 8,param_1);
      iVar3 = (int)(thunk_FUN_1030d4f0(local_18,&param_4,iVar1));
      iVar3 = (int)(*(int *)(iVar3 + 4));
      if (iVar3 == 0) {
        iVar3 = (int)(*(int *)(param_1 + 0x34));
      }
      iVar4 = (int)(*(int *)(param_1 + 0x34));
    } while (iVar3 != iVar4);
    piVar2 = (int *)(param_4);
    if (iVar3 != iVar4) {
      iVar1 = (int)(*(int *)(iVar3 + 0x10));
      param_4 = (int *)((int *)(iVar3 + 0xc));
      iVar3 = (int)(thunk_FUN_1030d570(local_30,&param_3,
                                 ((((param_3 & 0xff ^ 0x811c9dc5) * 0x1000193 ^ param_3 >> 8 & 0xff)
                                   * 0x1000193 ^ param_3 >> 0x10 & 0xff) * 0x1000193 ^
                                 param_3 >> 0x18) * 0x1000193));
      iVar3 = (int)(*(int *)(iVar3 + 4));
      if (iVar3 == 0) {
        iVar3 = (int)(param_4[1]);
      }
      if (iVar3 != iVar1) {
        *param_2 = (undefined4)(piVar2);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))();
        }
        goto LAB_10313657;
      }
    }
  }
  *param_2 = (undefined4)(0);
LAB_10313657:
  if (local_1c != '\0') {
    thunk_FUN_112a8010(param_1);
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10313720; body size 137 bytes.
#line 1 "ENTRY_10313720"

void __thiscall Recovered_Bulk::FUN_10313720(undefined4 param_2,undefined1 *param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  char cVar1;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined4 local_18;
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_18 = (undefined4)(param_1);
  cVar1 = (char)(thunk_FUN_112a7f50(param_1,DAT_12126b84 ));

  local_14 = (char)(cVar1);
  thunk_FUN_1030da10(local_20,&param_2);
  thunk_FUN_1030e0d0(local_28,&param_3);
  *param_3 = (undefined1)(1);
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1);
  }

  return;

 } catch (...) { }
}


// Reference entry 103138c0; body size 197 bytes.
#line 1 "ENTRY_103138c0"

void __thiscall Recovered_Bulk::FUN_103138c0(uint param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_8 [8];
  
  cVar3 = (char)(thunk_FUN_112a7f50(param_1));
  uVar5 = (uint)(((((param_2 & 0xff ^ 0x811c9dc5) * 0x1000193 ^ param_2 >> 8 & 0xff) * 0x1000193 ^
           param_2 >> 0x10 & 0xff) * 0x1000193 ^ param_2 >> 0x18) * 0x1000193);
  iVar4 = (int)(thunk_FUN_1030d4f0(local_8,&param_2,uVar5));
  piVar2 = (int *)(*(int **)(iVar4 + 4));
  if (piVar2 != (int *)0x0) {
    piVar1 = (int *)((int *)(*(int *)(param_1 + 0x3c) + (*(uint *)(param_1 + 0x48) & uVar5) * 8));
    if ((int *)piVar1[1] == piVar2) {
      if ((int *)*piVar1 == (int *)(piVar2)) {
        iVar4 = (int)(*(int *)(param_1 + 0x34));
        *piVar1 = (int)(iVar4);
        piVar1[1] = iVar4;
      }
      else {
        piVar1[1] = piVar2[1];
      }
    }
    else if ((int *)*piVar1 == (int *)(piVar2)) {
      *piVar1 = (int)(*piVar2);
    }
    thunk_FUN_10312640(piVar2);
  }
  thunk_FUN_112a7b20(param_1 + 8);
  if (cVar3 != '\0') {
    thunk_FUN_112a8010(param_1);
  }
  return;
}


// Reference entry 103139d0; body size 171 bytes.
#line 1 "ENTRY_103139d0"

undefined1 __thiscall Recovered_Bulk::FUN_103139d0(undefined4 param_2,undefined4 param_3,int param_4)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  byte bVar2;
  int *piVar3;
  short sVar4;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  int local_18;
  byte local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_18 = (int)(param_1);
  bVar2 = (byte)(thunk_FUN_112a7f50(param_1,DAT_12126b84 ));

  local_14 = (byte)(bVar2);
  if ((char)param_4 == '\0') {
    thunk_FUN_1030e860(&param_4,&param_3);
    iVar1 = (int)(param_4);
    if (param_4 != *(int *)(param_1 + 0x34)) goto LAB_10313a42;
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_1030da10(local_20,&param_3));
    iVar1 = (int)(*piVar3);
LAB_10313a42:
    if (iVar1 != -0xc) {
      thunk_FUN_1030e350(local_28,&param_2);
      sVar4 = (short)((short)((uint)((uint3)bVar2) << 8 | (uint)(1)));
      goto LAB_10313a59;
    }
  }
  sVar4 = (short)((ushort)bVar2 << 8);
LAB_10313a59:
  if ((char)((ushort)sVar4 >> 8) != '\0') {
    thunk_FUN_112a8010(param_1);
  }

  return (undefined1)((char)sVar4);

 } catch (...) { }
}


// Reference entry 10313b00; body size 300 bytes.
#line 1 "ENTRY_10313b00"

void __thiscall Recovered_Bulk::FUN_10313b00(uint param_2,char *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int local_8 [2];
  
  cVar4 = (char)(thunk_FUN_112a7f50(param_1));
  pcVar3 = (char *)(param_3);
  if (*param_3 != '\0') {
    thunk_FUN_1030e860(local_8,&param_2);
    if (local_8[0] != *(int *)(param_1 + 0x34)) {
      param_2 = (uint)((((((uint)pcVar3 & 0xff ^ 0x811c9dc5) * 0x1000193 ^ (uint)pcVar3 >> 8 & 0xff) *
                  0x1000193 ^ (uint)param_3 >> 0x10 & 0xff) * 0x1000193 ^ (uint)param_3 >> 0x18) *
                0x1000193);
      iVar5 = (int)(thunk_FUN_1030d470(local_8,&param_3,param_2));
      piVar2 = (int *)(*(int **)(iVar5 + 4));
      if (piVar2 != (int *)0x0) {
        piVar1 = (int *)((int *)(*(int *)(local_8[0] + 0x38) + (*(uint *)(local_8[0] + 0x44) & param_2) * 8));
        if ((int *)piVar1[1] == piVar2) {
          if ((int *)*piVar1 == (int *)(piVar2)) {
            iVar5 = (int)(*(int *)(local_8[0] + 0x30));
            *piVar1 = (int)(iVar5);
            piVar1[1] = iVar5;
          }
          else {
            piVar1[1] = piVar2[1];
          }
        }
        else if ((int *)*piVar1 == (int *)(piVar2)) {
          *piVar1 = (int)(*piVar2);
        }
        iVar5 = (int)(*piVar2);
        *(int *)(local_8[0] + 0x34) = *(int *)(local_8[0] + 0x34) + -1;
        *(int *)piVar2[1] = iVar5;
        *(int *)(iVar5 + 4) = piVar2[1];
        thunk_FUN_1148a50e(piVar2,0xc);
      }
      if (*(int *)(local_8[0] + 0x34) == 0) {
        if (*(int *)(local_8[0] + 0x14) == 0) {
          thunk_FUN_1030e5d0(&param_3,local_8[0]);
        }
        else {
          thunk_FUN_112a7b20(param_1 + 8);
        }
      }
    }
    *pcVar3 = (char)('\0');
  }
  if (cVar4 != '\0') {
    thunk_FUN_112a8010(param_1);
  }
  return;
}


// Reference entry 10313c90; body size 330 bytes.
#line 1 "ENTRY_10313c90"

void __thiscall Recovered_Bulk::FUN_10313c90(uint param_2,uint param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  cVar3 = (char)(thunk_FUN_112a7f50(param_1));
  iVar4 = (int)(thunk_FUN_1030d4f0(local_10,&param_3,
                             ((((param_3 & 0xff ^ 0x811c9dc5) * 0x1000193 ^ param_3 >> 8 & 0xff) *
                               0x1000193 ^ param_3 >> 0x10 & 0xff) * 0x1000193 ^ param_3 >> 0x18) *
                             0x1000193));
  iVar4 = (int)(*(int *)(iVar4 + 4));
  if (iVar4 == 0) {
    iVar4 = (int)(*(int *)(param_1 + 0x34));
  }
  if (iVar4 != *(int *)(param_1 + 0x34)) {
    param_3 = (uint)(((((param_2 & 0xff ^ 0x811c9dc5) * 0x1000193 ^ param_2 >> 8 & 0xff) * 0x1000193 ^
               param_2 >> 0x10 & 0xff) * 0x1000193 ^ param_2 >> 0x18) * 0x1000193);
    iVar5 = (int)(thunk_FUN_1030d570(local_8,&param_2,param_3));
    piVar2 = (int *)(*(int **)(iVar5 + 4));
    if (piVar2 != (int *)0x0) {
      piVar1 = (int *)((int *)(*(int *)(iVar4 + 0x18) + (*(uint *)(iVar4 + 0x24) & param_3) * 8));
      if ((int *)piVar1[1] == piVar2) {
        if ((int *)*piVar1 == (int *)(piVar2)) {
          iVar5 = (int)(*(int *)(iVar4 + 0x10));
          *piVar1 = (int)(iVar5);
          piVar1[1] = iVar5;
        }
        else {
          piVar1[1] = piVar2[1];
        }
      }
      else if ((int *)*piVar1 == (int *)(piVar2)) {
        *piVar1 = (int)(*piVar2);
      }
      iVar5 = (int)(*piVar2);
      *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + -1;
      *(int *)piVar2[1] = iVar5;
      *(int *)(iVar5 + 4) = piVar2[1];
      thunk_FUN_1148a50e(piVar2,0xc);
    }
    if ((*(int *)(iVar4 + 0x14) == 0) && (*(int *)(iVar4 + 0x34) == 0)) {
      thunk_FUN_1030e5d0(&param_3,iVar4);
    }
  }
  if (cVar3 != '\0') {
    thunk_FUN_112a8010(param_1);
  }
  return;
}


// Reference entry 10313e80; body size 85 bytes.
#line 1 "ENTRY_10313e80"

longlong __thiscall Recovered_Bulk::FUN_10313e80(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (int)(__alldiv(1000000000,0,param_2,param_3));
  iVar1 = (int)(param_1[3]);
  iVar2 = (int)(param_1[1]);
  lVar4 = (longlong)(__allmul(param_1[2] - *param_1,param_1[2] - *param_1 >> 0x1f,param_2,param_3));
  return (longlong)(lVar4 + (iVar3 / 2 + (iVar1 - iVar2) * 1000) / iVar3);
}


// Reference entry 103140d0; body size 64 bytes.
#line 1 "ENTRY_103140d0"

longlong __fastcall FUN_103140d0(int param_1)

{
  return (longlong)((longlong)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)) * 1000000 +
         (longlong)(((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc)) * 1000 + 500) / 1000));
}


// Reference entry 10314330; body size 91 bytes.
#line 1 "ENTRY_10314330"

int * __thiscall Recovered_Bulk::FUN_10314330(int *param_2)
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


// Reference entry 10315360; body size 114 bytes.
#line 1 "ENTRY_10315360"

undefined4 * __thiscall Recovered_Bulk::FUN_10315360(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 103153f0; body size 114 bytes.
#line 1 "ENTRY_103153f0"

undefined4 * __thiscall Recovered_Bulk::FUN_103153f0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10315480; body size 114 bytes.
#line 1 "ENTRY_10315480"

undefined4 * __thiscall Recovered_Bulk::FUN_10315480(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10315510; body size 114 bytes.
#line 1 "ENTRY_10315510"

undefined4 * __thiscall Recovered_Bulk::FUN_10315510(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 103155a0; body size 114 bytes.
#line 1 "ENTRY_103155a0"

undefined4 * __thiscall Recovered_Bulk::FUN_103155a0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10315780; body size 278 bytes.
#line 1 "ENTRY_10315780"

undefined4 * __thiscall Recovered_Bulk::FUN_10315780(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 103158e0; body size 278 bytes.
#line 1 "ENTRY_103158e0"

undefined4 * __thiscall Recovered_Bulk::FUN_103158e0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10315a40; body size 278 bytes.
#line 1 "ENTRY_10315a40"

undefined4 * __thiscall Recovered_Bulk::FUN_10315a40(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10315ba0; body size 278 bytes.
#line 1 "ENTRY_10315ba0"

undefined4 * __thiscall Recovered_Bulk::FUN_10315ba0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10315d00; body size 278 bytes.
#line 1 "ENTRY_10315d00"

undefined4 * __thiscall Recovered_Bulk::FUN_10315d00(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 103167c0; body size 127 bytes.
#line 1 "ENTRY_103167c0"

undefined4 * __thiscall Recovered_Bulk::FUN_103167c0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:DeviceProperties:1","RemoveBondedZones",
                     uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPRemoveBondedZonesAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpDPRemoveBondedZonesAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpDPRemoveBondedZonesAIOOp;
  return (undefined4 *)(param_1);
}


// Reference entry 10317010; body size 292 bytes.
#line 1 "ENTRY_10317010"

undefined4 * __thiscall Recovered_Bulk::FUN_10317010(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpConnectionManagerGetProtocolInfo);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpConnectionManagerGetProtocolInfo);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10317180; body size 292 bytes.
#line 1 "ENTRY_10317180"

undefined4 * __thiscall Recovered_Bulk::FUN_10317180(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetButtonLockState);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetButtonLockState);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 103172f0; body size 292 bytes.
#line 1 "ENTRY_103172f0"

undefined4 * __thiscall Recovered_Bulk::FUN_103172f0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetLEDState);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetLEDState);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10317460; body size 292 bytes.
#line 1 "ENTRY_10317460"

undefined4 * __thiscall Recovered_Bulk::FUN_10317460(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesSetButtonLockState);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesSetButtonLockState);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 103175d0; body size 292 bytes.
#line 1 "ENTRY_103175d0"

undefined4 * __thiscall Recovered_Bulk::FUN_103175d0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesSetLEDState);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesSetLEDState);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10317740; body size 136 bytes.
#line 1 "ENTRY_10317740"

undefined4 * __thiscall Recovered_Bulk::FUN_10317740(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVersionRange);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;

  thunk_FUN_101b8fc0(param_2,param_3);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10317fb0; body size 76 bytes.
#line 1 "ENTRY_10317fb0"

void __fastcall FUN_10317fb0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10318020; body size 76 bytes.
#line 1 "ENTRY_10318020"

void __fastcall FUN_10318020(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10318090; body size 76 bytes.
#line 1 "ENTRY_10318090"

void __fastcall FUN_10318090(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10318100; body size 76 bytes.
#line 1 "ENTRY_10318100"

void __fastcall FUN_10318100(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10318170; body size 76 bytes.
#line 1 "ENTRY_10318170"

void __fastcall FUN_10318170(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 103181e0; body size 76 bytes.
#line 1 "ENTRY_103181e0"

void __fastcall FUN_103181e0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10318250; body size 76 bytes.
#line 1 "ENTRY_10318250"

void __fastcall FUN_10318250(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 103182c0; body size 76 bytes.
#line 1 "ENTRY_103182c0"

void __fastcall FUN_103182c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10318330; body size 76 bytes.
#line 1 "ENTRY_10318330"

void __fastcall FUN_10318330(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 103183a0; body size 76 bytes.
#line 1 "ENTRY_103183a0"

void __fastcall FUN_103183a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10318410; body size 76 bytes.
#line 1 "ENTRY_10318410"

void __fastcall FUN_10318410(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10318480; body size 76 bytes.
#line 1 "ENTRY_10318480"

void __fastcall FUN_10318480(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10318ef0; body size 137 bytes.
#line 1 "ENTRY_10318ef0"

void __fastcall FUN_10318ef0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10319c10; body size 158 bytes.
#line 1 "ENTRY_10319c10"

undefined4 * __thiscall Recovered_Bulk::FUN_10319c10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[3]);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10319d30; body size 104 bytes.
#line 1 "ENTRY_10319d30"

void __thiscall Recovered_Bulk::FUN_10319d30(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_101f4060(*param_1,param_1[1],param_1);
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


// Reference entry 1031a000; body size 76 bytes.
#line 1 "ENTRY_1031a000"

void __fastcall FUN_1031a000(int param_1)

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


// Reference entry 1031a060; body size 76 bytes.
#line 1 "ENTRY_1031a060"

void __fastcall FUN_1031a060(int param_1)

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


// Reference entry 1031a0c0; body size 76 bytes.
#line 1 "ENTRY_1031a0c0"

void __fastcall FUN_1031a0c0(int param_1)

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


// Reference entry 1031a120; body size 76 bytes.
#line 1 "ENTRY_1031a120"

void __fastcall FUN_1031a120(int param_1)

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


// Reference entry 1031a180; body size 76 bytes.
#line 1 "ENTRY_1031a180"

void __fastcall FUN_1031a180(int param_1)

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


// Reference entry 1031a1e0; body size 149 bytes.
#line 1 "ENTRY_1031a1e0"

void __thiscall Recovered_Bulk::FUN_1031a1e0(int *param_2,undefined4 param_3)
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


// Reference entry 1031a2c0; body size 149 bytes.
#line 1 "ENTRY_1031a2c0"

void __thiscall Recovered_Bulk::FUN_1031a2c0(int *param_2,undefined4 param_3)
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


// Reference entry 1031a3a0; body size 149 bytes.
#line 1 "ENTRY_1031a3a0"

void __thiscall Recovered_Bulk::FUN_1031a3a0(int *param_2,undefined4 param_3)
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


// Reference entry 1031a480; body size 149 bytes.
#line 1 "ENTRY_1031a480"

void __thiscall Recovered_Bulk::FUN_1031a480(int *param_2,undefined4 param_3)
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


// Reference entry 1031a560; body size 149 bytes.
#line 1 "ENTRY_1031a560"

void __thiscall Recovered_Bulk::FUN_1031a560(int *param_2,undefined4 param_3)
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


// Reference entry 1031a6d0; body size 1572 bytes.
#line 1 "ENTRY_1031a6d0"

void __thiscall Recovered_Bulk::FUN_1031a6d0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
            undefined4 *param_9,undefined4 param_10,undefined4 *param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  size_t sVar8;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 8) != 0) {
    pcVar3 = (char *)((char *)*param_11);
    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
      local_30 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar7 = (char *)(pcVar3);
      do {
        cVar2 = (char)(*pcVar7);
        pcVar7 = (char *)(pcVar7 + 1);
      } while (cVar2 != '\0');
      sVar8 = (size_t)((int)pcVar7 - (int)(pcVar3 + 1));
      puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar8 + 0x11,uVar4));
      puVar1 = (undefined4 *)(puVar5 + 4);
      *puVar5 = (undefined4)(1);
      puVar5[3] = sVar8;
      puVar5[2] = 0;
      puVar5[1] = 0;
      memcpy(puVar1,pcVar3,sVar8);
      *(undefined1 *)((int)puVar1 + sVar8) = 0;
      local_30 = (undefined4 *)(puVar1);
    }

    pcVar3 = (char *)((char *)*param_9);
    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
      local_2c = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar7 = (char *)(pcVar3);
      do {
        cVar2 = (char)(*pcVar7);
        pcVar7 = (char *)(pcVar7 + 1);
      } while (cVar2 != '\0');
      sVar8 = (size_t)((int)pcVar7 - (int)(pcVar3 + 1));
      puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar8 + 0x11,uVar4));
      puVar1 = (undefined4 *)(puVar5 + 4);
      *puVar5 = (undefined4)(1);
      puVar5[3] = sVar8;
      puVar5[2] = 0;
      puVar5[1] = 0;
      memcpy(puVar1,pcVar3,sVar8);
      *(undefined1 *)((int)puVar1 + sVar8) = 0;
      local_2c = (undefined4 *)(puVar1);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    pcVar3 = (char *)((char *)*param_8);
    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
      local_28 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar7 = (char *)(pcVar3);
      do {
        cVar2 = (char)(*pcVar7);
        pcVar7 = (char *)(pcVar7 + 1);
      } while (cVar2 != '\0');
      sVar8 = (size_t)((int)pcVar7 - (int)(pcVar3 + 1));
      puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar8 + 0x11,uVar4));
      puVar1 = (undefined4 *)(puVar5 + 4);
      *puVar5 = (undefined4)(1);
      puVar5[3] = sVar8;
      puVar5[2] = 0;
      puVar5[1] = 0;
      memcpy(puVar1,pcVar3,sVar8);
      *(undefined1 *)((int)puVar1 + sVar8) = 0;
      local_28 = (undefined4 *)(puVar1);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    pcVar3 = (char *)((char *)*param_7);
    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
      local_24 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar7 = (char *)(pcVar3);
      do {
        cVar2 = (char)(*pcVar7);
        pcVar7 = (char *)(pcVar7 + 1);
      } while (cVar2 != '\0');
      sVar8 = (size_t)((int)pcVar7 - (int)(pcVar3 + 1));
      puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar8 + 0x11,uVar4));
      puVar1 = (undefined4 *)(puVar5 + 4);
      *puVar5 = (undefined4)(1);
      puVar5[3] = sVar8;
      puVar5[2] = 0;
      puVar5[1] = 0;
      memcpy(puVar1,pcVar3,sVar8);
      *(undefined1 *)((int)puVar1 + sVar8) = 0;
      local_24 = (undefined4 *)(puVar1);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    pcVar3 = (char *)((char *)*param_6);
    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
      local_20 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar7 = (char *)(pcVar3);
      do {
        cVar2 = (char)(*pcVar7);
        pcVar7 = (char *)(pcVar7 + 1);
      } while (cVar2 != '\0');
      sVar8 = (size_t)((int)pcVar7 - (int)(pcVar3 + 1));
      puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar8 + 0x11,uVar4));
      puVar1 = (undefined4 *)(puVar5 + 4);
      *puVar5 = (undefined4)(1);
      puVar5[3] = sVar8;
      puVar5[2] = 0;
      puVar5[1] = 0;
      memcpy(puVar1,pcVar3,sVar8);
      *(undefined1 *)((int)puVar1 + sVar8) = 0;
      local_20 = (undefined4 *)(puVar1);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    pcVar3 = (char *)((char *)*param_5);
    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
      local_1c = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar7 = (char *)(pcVar3);
      do {
        cVar2 = (char)(*pcVar7);
        pcVar7 = (char *)(pcVar7 + 1);
      } while (cVar2 != '\0');
      sVar8 = (size_t)((int)pcVar7 - (int)(pcVar3 + 1));
      puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar8 + 0x11));
      puVar1 = (undefined4 *)(puVar5 + 4);
      *puVar5 = (undefined4)(1);
      puVar5[3] = sVar8;
      puVar5[2] = 0;
      puVar5[1] = 0;
      memcpy(puVar1,pcVar3,sVar8);
      *(undefined1 *)((int)puVar1 + sVar8) = 0;
      local_1c = (undefined4 *)(puVar1);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    pcVar3 = (char *)((char *)*param_4);
    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
      local_18 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar7 = (char *)(pcVar3);
      do {
        cVar2 = (char)(*pcVar7);
        pcVar7 = (char *)(pcVar7 + 1);
      } while (cVar2 != '\0');
      sVar8 = (size_t)((int)pcVar7 - (int)(pcVar3 + 1));
      puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar8 + 0x11));
      puVar1 = (undefined4 *)(puVar5 + 4);
      *puVar5 = (undefined4)(1);
      puVar5[3] = sVar8;
      puVar5[2] = 0;
      puVar5[1] = 0;
      memcpy(puVar1,pcVar3,sVar8);
      *(undefined1 *)((int)puVar1 + sVar8) = 0;
      local_18 = (undefined4 *)(puVar1);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    pcVar3 = (char *)((char *)*param_3);
    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
      local_14 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar7 = (char *)(pcVar3);
      do {
        cVar2 = (char)(*pcVar7);
        pcVar7 = (char *)(pcVar7 + 1);
      } while (cVar2 != '\0');
      sVar8 = (size_t)((int)pcVar7 - (int)(pcVar3 + 1));
      puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar8 + 0x11));
      puVar1 = (undefined4 *)(puVar5 + 4);
      *puVar5 = (undefined4)(1);
      puVar5[3] = sVar8;
      puVar5[2] = 0;
      puVar5[1] = 0;
      memcpy(puVar1,pcVar3,sVar8);
      *(undefined1 *)((int)puVar1 + sVar8) = 0;
      local_14 = (undefined4 *)(puVar1);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    pcVar3 = (char *)((char *)*param_2);
    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
      param_11 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar7 = (char *)(pcVar3);
      do {
        cVar2 = (char)(*pcVar7);
        pcVar7 = (char *)(pcVar7 + 1);
      } while (cVar2 != '\0');
      sVar8 = (size_t)((int)pcVar7 - (int)(pcVar3 + 1));
      puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar8 + 0x11));
      puVar1 = (undefined4 *)(puVar5 + 4);
      *puVar5 = (undefined4)(1);
      puVar5[3] = sVar8;
      puVar5[2] = 0;
      puVar5[1] = 0;
      memcpy(puVar1,pcVar3,sVar8);
      *(undefined1 *)((int)puVar1 + sVar8) = 0;
      param_11 = (undefined4 *)(puVar1);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    thunk_FUN_110c9a60(&param_11,&local_14,&local_18,&local_1c,&local_20,&local_24,&local_28,
                       &local_2c,param_10,&local_30,param_12,param_13,param_14);
    puVar1 = (undefined4 *)(param_11);
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    if ((param_11 != (undefined4 *)0x0) && (puVar5 = param_11 + -4, (int)param_11[-4] < 0xffff)) {
      iVar6 = (int)(thunk_FUN_1123fcd0(puVar5));
      if (iVar6 == 0) {
        puVar1[-2] = 0;
        puVar1[-3] = 0;
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar5);
      }
    }
    puVar1 = (undefined4 *)(local_14);
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    if ((local_14 != (undefined4 *)0x0) && (puVar5 = local_14 + -4, (int)local_14[-4] < 0xffff)) {
      iVar6 = (int)(thunk_FUN_1123fcd0(puVar5));
      if (iVar6 == 0) {
        puVar1[-2] = 0;
        puVar1[-3] = 0;
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar5);
      }
    }
    puVar1 = (undefined4 *)(local_18);
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    if ((local_18 != (undefined4 *)0x0) && (puVar5 = local_18 + -4, (int)local_18[-4] < 0xffff)) {
      iVar6 = (int)(thunk_FUN_1123fcd0(puVar5));
      if (iVar6 == 0) {
        puVar1[-2] = 0;
        puVar1[-3] = 0;
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar5);
      }
    }
    puVar1 = (undefined4 *)(local_1c);
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    if ((local_1c != (undefined4 *)0x0) && (puVar5 = local_1c + -4, (int)local_1c[-4] < 0xffff)) {
      iVar6 = (int)(thunk_FUN_1123fcd0(puVar5));
      if (iVar6 == 0) {
        puVar1[-2] = 0;
        puVar1[-3] = 0;
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar5);
      }
    }
    puVar1 = (undefined4 *)(local_20);
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    if ((local_20 != (undefined4 *)0x0) && (puVar5 = local_20 + -4, (int)local_20[-4] < 0xffff)) {
      iVar6 = (int)(thunk_FUN_1123fcd0(puVar5));
      if (iVar6 == 0) {
        puVar1[-2] = 0;
        puVar1[-3] = 0;
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar5);
      }
    }
    puVar1 = (undefined4 *)(local_24);
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    if ((local_24 != (undefined4 *)0x0) && (puVar5 = local_24 + -4, (int)local_24[-4] < 0xffff)) {
      iVar6 = (int)(thunk_FUN_1123fcd0(puVar5));
      if (iVar6 == 0) {
        puVar1[-2] = 0;
        puVar1[-3] = 0;
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar5);
      }
    }
    puVar1 = (undefined4 *)(local_28);
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    if ((local_28 != (undefined4 *)0x0) && (puVar5 = local_28 + -4, (int)local_28[-4] < 0xffff)) {
      iVar6 = (int)(thunk_FUN_1123fcd0(puVar5));
      if (iVar6 == 0) {
        puVar1[-2] = 0;
        puVar1[-3] = 0;
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar5);
      }
    }
    puVar1 = (undefined4 *)(local_2c);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x10)));
    if ((local_2c != (undefined4 *)0x0) && (puVar5 = local_2c + -4, (int)local_2c[-4] < 0xffff)) {
      iVar6 = (int)(thunk_FUN_1123fcd0(puVar5));
      if (iVar6 == 0) {
        puVar1[-2] = 0;
        puVar1[-3] = 0;
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar5);
      }
    }
    puVar1 = (undefined4 *)(local_30);

    if ((local_30 != (undefined4 *)0x0) && (puVar5 = local_30 + -4, (int)local_30[-4] < 0xffff)) {
      iVar6 = (int)(thunk_FUN_1123fcd0(puVar5));
      if (iVar6 == 0) {
        puVar1[-2] = 0;
        puVar1[-3] = 0;
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar5);
      }
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1031b010; body size 87 bytes.
#line 1 "ENTRY_1031b010"

void * FUN_1031b010(uint param_1)

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


// Reference entry 1031b2c0; body size 66 bytes.
#line 1 "ENTRY_1031b2c0"

void __fastcall FUN_1031b2c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  if (iVar1 == 0) {
    return;
  }
  iVar2 = (int)(*(int *)(iVar1 + 0x540));
  thunk_FUN_110c5670(iVar1 + 0x540,*(undefined4 *)(iVar2 + 4));
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = (int)(iVar2);
  *(int *)(iVar2 + 8) = iVar2;
  *(undefined4 *)(iVar1 + 0x544) = 0;
  *(undefined1 *)(iVar1 + 0x548) = 0;
  return;
}


// Reference entry 1031bb20; body size 613 bytes.
#line 1 "ENTRY_1031bb20"

undefined4 * __thiscall Recovered_Bulk::FUN_1031bb20(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = (int)(thunk_FUN_110cbb30(DAT_12126b84 ));
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)(operator_new(0xdfd0));

      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)((undefined4 *)0x0);
      }
      else {
        iVar2 = (int)(*(int *)(iVar2 + 0x2c));
        uVar4 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x48))());
        uVar11 = (undefined4)(0);
        uVar9 = (undefined4)(0);
        uVar8 = (undefined4)(2000);
        uVar7 = (undefined4)(2000);
        uVar5 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x50))
                          (2000,2000,0,0));
        thunk_FUN_111c0760(uVar4,"urn:schemas-upnp-org:service:ConnectionManager:1",
                           "GetProtocolInfo",uVar5,uVar7,uVar8,uVar9,uVar11);
        *puVar3 = (undefined4)((uint)&ghidra_vftable_RUpnpCMGetProtocolInfoAIOOp);
        puVar3[0x18] = (uint)&ghidra_vftable_RUpnpCMGetProtocolInfoAIOOp;
        puVar3[0x11b] = (uint)&ghidra_vftable_RUpnpCMGetProtocolInfoAIOOp;
        *(undefined1 *)(puVar3 + 0x35f4) = 0;
        *(undefined1 *)(puVar3 + 0x36f4) = 0;
      }
      uVar4 = (undefined4)(0x400);
      puVar10 = (undefined4 *)(puVar3 + 0x35f4);

      thunk_FUN_1124ff50("Source");
      thunk_FUN_112503c0(puVar10,uVar4);
      uVar4 = (undefined4)(0x400);
      puVar10 = (undefined4 *)(puVar3 + 0x36f4);
      thunk_FUN_1124ff50(&DAT_11893b8c);
      thunk_FUN_112503c0(puVar10,uVar4);
      piVar6 = (int *)(operator_new(0x48));
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)((int *)0x0);
      }
      else {
        *piVar6 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
        piVar6[1] = 0;
        g_lSCObjCount = (int)(g_lSCObjCount + 1);
        piVar1 = (int *)(piVar6 + 2);
        *(unsigned char *)((char *)&local_8 + 0) = 2;
        *(unsigned short *)((char *)&local_8 + 1) = 0;
        thunk_FUN_11240650();
        *piVar1 = (int)((int)(uint)&ghidra_vftable_RControlAIOOpCB);
        *piVar6 = (int)((int)(uint)&ghidra_vftable_SCOpImpl);
        *piVar1 = (int)((int)(uint)&ghidra_vftable_SCOpImpl);
        piVar6[3] = 0;
        piVar6[4] = 0;
        piVar6[5] = (int)(uint)&ghidra_vftable_RControlAIOOpRefBase;
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
        piVar6[6] = (int)puVar3;
        if (puVar3 != (undefined4 *)0x0) {
          thunk_FUN_1123fce0(puVar3 + 1);
        }
        piVar6[7] = 0;
        piVar6[5] = (int)(uint)&ghidra_vftable_RControlAIOOpRef;
        piVar6[8] = 0;
        *(undefined2 *)(piVar6 + 9) = 1000;
        piVar6[10] = 0;
        piVar6[0xb] = 0;
        piVar6[0xc] = (int)(uint)&ghidra_vftable_SCIObjImpl;
        piVar6[0xd] = 0;
        g_lSCObjCount = (int)(g_lSCObjCount + 1);
        piVar6[0xc] = (int)(uint)&ghidra_vftable_SCElapsedTimeMeasurement;
        piVar6[0xe] = 0;
        piVar6[0xf] = 0;
        piVar6[0xf] = 0;
        piVar6[0x10] = 0;
        piVar6[0x11] = 0;
        *piVar6 = (int)((int)(uint)&ghidra_vftable_SCOpConnectionManagerGetProtocolInfo);
        *piVar1 = (int)((int)(uint)&ghidra_vftable_SCOpConnectionManagerGetProtocolInfo);
      }

      *param_2 = (undefined4)(piVar6);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))();
      }

      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(0);

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1031be20; body size 560 bytes.
#line 1 "ENTRY_1031be20"

undefined4 * __thiscall Recovered_Bulk::FUN_1031be20(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int *)(param_1 + 8) != 0) {

    iVar2 = (int)(thunk_FUN_110cc080(DAT_12126b84 ));
    puVar3 = (undefined4 *)(operator_new(0xd7d8));

    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      iVar2 = (int)(*(int *)(iVar2 + 0x2c));
      uVar4 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x48))());
      uVar11 = (undefined4)(0);
      uVar9 = (undefined4)(0);
      uVar8 = (undefined4)(2000);
      uVar7 = (undefined4)(2000);
      uVar5 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x50))
                        (2000,2000,0,0));
      thunk_FUN_111c0760(uVar4,"urn:schemas-upnp-org:service:DeviceProperties:1","GetLEDState",uVar5
                         ,uVar7,uVar8,uVar9,uVar11);
      *puVar3 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetLEDStateAIOOp);
      puVar3[0x18] = (uint)&ghidra_vftable_RUpnpDPGetLEDStateAIOOp;
      puVar3[0x11b] = (uint)&ghidra_vftable_RUpnpDPGetLEDStateAIOOp;
      *(undefined1 *)(puVar3 + 0x35f4) = 0;
    }
    uVar4 = (undefined4)(4);
    puVar10 = (undefined4 *)(puVar3 + 0x35f4);

    thunk_FUN_1124ff50("CurrentLEDState");
    thunk_FUN_112503c0(puVar10,uVar4);
    piVar6 = (int *)(operator_new(0x48));
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      *piVar6 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar6[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      piVar1 = (int *)(piVar6 + 2);
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      *(unsigned short *)((char *)&local_8 + 1) = 0;
      thunk_FUN_11240650();
      *piVar1 = (int)((int)(uint)&ghidra_vftable_RControlAIOOpCB);
      *piVar6 = (int)((int)(uint)&ghidra_vftable_SCOpImpl);
      *piVar1 = (int)((int)(uint)&ghidra_vftable_SCOpImpl);
      piVar6[3] = 0;
      piVar6[4] = 0;
      piVar6[5] = (int)(uint)&ghidra_vftable_RControlAIOOpRefBase;
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
      piVar6[6] = (int)puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        thunk_FUN_1123fce0(puVar3 + 1);
      }
      piVar6[7] = 0;
      piVar6[5] = (int)(uint)&ghidra_vftable_RControlAIOOpRef;
      piVar6[8] = 0;
      *(undefined2 *)(piVar6 + 9) = 1000;
      piVar6[10] = 0;
      piVar6[0xb] = 0;
      piVar6[0xc] = (int)(uint)&ghidra_vftable_SCIObjImpl;
      piVar6[0xd] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      piVar6[0xc] = (int)(uint)&ghidra_vftable_SCElapsedTimeMeasurement;
      piVar6[0xe] = 0;
      piVar6[0xf] = 0;
      piVar6[0xf] = 0;
      piVar6[0x10] = 0;
      piVar6[0x11] = 0;
      *piVar6 = (int)((int)(uint)&ghidra_vftable_SCOpDevicePropertiesGetLEDState);
      *piVar1 = (int)((int)(uint)&ghidra_vftable_SCOpDevicePropertiesGetLEDState);
    }

    *param_2 = (undefined4)(piVar6);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1031cd00; body size 115 bytes.
#line 1 "ENTRY_1031cd00"

undefined4 * FUN_1031cd00(undefined4 *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x10));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10c4ea80(param_2));
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1031cd90; body size 115 bytes.
#line 1 "ENTRY_1031cd90"

undefined4 * FUN_1031cd90(undefined4 *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x14));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10c54e60(param_2));
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1031ce20; body size 115 bytes.
#line 1 "ENTRY_1031ce20"

undefined4 * FUN_1031ce20(undefined4 *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0xc));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10c594a0(param_2));
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1031ceb0; body size 115 bytes.
#line 1 "ENTRY_1031ceb0"

undefined4 * FUN_1031ceb0(undefined4 *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x78));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10c5b100(param_2));
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1031d730; body size 562 bytes.
#line 1 "ENTRY_1031d730"

undefined4 * __thiscall Recovered_Bulk::FUN_1031d730(undefined4 *param_2,char param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int *)(param_1 + 8) != 0) {

    iVar2 = (int)(thunk_FUN_110cc080(DAT_12126b84 ));
    puVar3 = (undefined4 *)(operator_new(0xd7d0));

    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      iVar2 = (int)(*(int *)(iVar2 + 0x2c));
      uVar4 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x48))());
      uVar11 = (undefined4)(0);
      uVar10 = (undefined4)(0);
      uVar9 = (undefined4)(2000);
      uVar8 = (undefined4)(2000);
      uVar5 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x50))
                        (2000,2000,0,0));
      thunk_FUN_111c0760(uVar4,"urn:schemas-upnp-org:service:DeviceProperties:1","SetLEDState",uVar5
                         ,uVar8,uVar9,uVar10,uVar11);
      *puVar3 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetLEDStateAIOOp);
      puVar3[0x18] = (uint)&ghidra_vftable_RUpnpDPSetLEDStateAIOOp;
      puVar3[0x11b] = (uint)&ghidra_vftable_RUpnpDPSetLEDStateAIOOp;
    }

    piVar6 = (int *)((int *)thunk_FUN_1124ffa0("DesiredLEDState",0));
    puVar7 = (undefined1 *)(&DAT_118947c0);
    if (param_3 == '\0') {
      puVar7 = (undefined1 *)(&DAT_118947c4);
    }
    (**(code **)(*piVar6 + 0xc))(puVar7);
    piVar6 = (int *)(operator_new(0x48));
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      *piVar6 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar6[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      piVar1 = (int *)(piVar6 + 2);
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      *(unsigned short *)((char *)&local_8 + 1) = 0;
      thunk_FUN_11240650();
      *piVar1 = (int)((int)(uint)&ghidra_vftable_RControlAIOOpCB);
      *piVar6 = (int)((int)(uint)&ghidra_vftable_SCOpImpl);
      *piVar1 = (int)((int)(uint)&ghidra_vftable_SCOpImpl);
      piVar6[3] = 0;
      piVar6[4] = 0;
      piVar6[5] = (int)(uint)&ghidra_vftable_RControlAIOOpRefBase;
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
      piVar6[6] = (int)puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        thunk_FUN_1123fce0(puVar3 + 1);
      }
      piVar6[7] = 0;
      piVar6[5] = (int)(uint)&ghidra_vftable_RControlAIOOpRef;
      piVar6[8] = 0;
      *(undefined2 *)(piVar6 + 9) = 1000;
      piVar6[10] = 0;
      piVar6[0xb] = 0;
      piVar6[0xc] = (int)(uint)&ghidra_vftable_SCIObjImpl;
      piVar6[0xd] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      piVar6[0xc] = (int)(uint)&ghidra_vftable_SCElapsedTimeMeasurement;
      piVar6[0xe] = 0;
      piVar6[0xf] = 0;
      piVar6[0xf] = 0;
      piVar6[0x10] = 0;
      piVar6[0x11] = 0;
      *piVar6 = (int)((int)(uint)&ghidra_vftable_SCOpDevicePropertiesSetLEDState);
      *piVar1 = (int)((int)(uint)&ghidra_vftable_SCOpDevicePropertiesSetLEDState);
    }

    *param_2 = (undefined4)(piVar6);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1031e470; body size 326 bytes.
#line 1 "ENTRY_1031e470"

undefined4 * __stdcall FUN_1031e470(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_30;
  int *local_2c;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_14 = (int *)(operator_new(0x10));

  if (local_14 == (void *)0x0) {
    local_14 = (int *)((int *)0x0);
  }
  else {
    local_14 = (int *)((int *)thunk_FUN_103d56e0(uVar2));
  }
  piVar3 = (int *)(local_14);

  local_20 = (int *)((int *)0x0);
  local_24 = (int *)(local_14);
  if (local_14 != (int *)0x0) {
    local_20 = (int *)((int *)(**(code **)(*local_14 + 0xc))());
    (**(code **)(*local_20 + 4))();
  }

  thunk_FUN_1031eeb0(&local_30);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  piVar4 = (int *)(local_30);
  if (local_30 == (int *)(local_2c)) {
    *param_1 = (undefined4)(piVar3);
    if (piVar3 == (int *)0x0) goto LAB_1031e583;
  }
  else {
    do {
      piVar1 = (int *)((int *)*piVar4);
      piVar5 = (int *)((int *)0x0);
      local_18 = (int *)((int *)0x0);
      local_1c = (int *)(piVar1);
      if (piVar1 != (int *)0x0) {
        piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
        local_18 = (int *)(piVar5);
        (**(code **)(*piVar5 + 4))();
      }
      piVar3 = (int *)(local_14);
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      (**(code **)(*local_14 + 0x20))(piVar1);
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      if (piVar5 != (int *)0x0) {
        local_1c = (int *)((int *)0x0);
        local_18 = (int *)((int *)0x0);
        (**(code **)(*piVar5 + 8))();
      }
      piVar4 = (int *)(piVar4 + 2);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    } while (piVar4 != (int *)(local_2c));
    *param_1 = (undefined4)(piVar3);
  }
  (**(code **)(*piVar3 + 4))();
LAB_1031e583:
  thunk_FUN_101f4930();

  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1031e610; body size 127 bytes.
#line 1 "ENTRY_1031e610"

void __thiscall Recovered_Bulk::FUN_1031e610(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *local_514;
  undefined4 local_510 [323];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_514);
  local_514 = (undefined4 *)(param_2);
  thunk_FUN_1127a020();
  param_2[0x142] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = (undefined4 *)((undefined4 *)(*(int *)(param_1 + 8) + 0x564));
    puVar3 = (undefined4 *)(local_510);
    for (iVar1 = (int)(0x143); iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = (undefined4)(*puVar2);
      puVar2 = (undefined4 *)(puVar2 + 1);
      puVar3 = (undefined4 *)(puVar3 + 1);
    }
    puVar2 = (undefined4 *)(local_510);
    for (iVar1 = (int)(0x143); iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = (undefined4)(*puVar2);
      puVar2 = (undefined4 *)(puVar2 + 1);
      param_2 = (undefined4 *)(param_2 + 1);
    }
    thunk_FUN_1127a080();
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1031ead0; body size 343 bytes.
#line 1 "ENTRY_1031ead0"

undefined4 * __stdcall FUN_1031ead0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_30;
  int *local_2c;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_14 = (int *)(operator_new(0x14));

  if (local_14 == (void *)0x0) {
    local_14 = (int *)((int *)0x0);
  }
  else {
    local_14 = (int *)((int *)thunk_FUN_103be5e0(uVar2));
  }
  piVar3 = (int *)(local_14);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 4))();
  }

  local_18 = (int *)((int *)0x0);
  local_24 = (int *)(piVar3);
  if (piVar3 == (int *)0x0) {
    local_20 = (int *)((int *)0x0);
  }
  else {
    local_20 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  thunk_FUN_1031f140(&local_30);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  piVar4 = (int *)(local_30);
  if (local_30 != (int *)(local_2c)) {
    do {
      piVar1 = (int *)((int *)*piVar4);
      piVar5 = (int *)((int *)0x0);
      local_18 = (int *)((int *)0x0);
      local_1c = (int *)(piVar1);
      if (piVar1 != (int *)0x0) {
        piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
        local_18 = (int *)(piVar5);
        (**(code **)(*piVar5 + 4))();
      }
      piVar3 = (int *)(local_14);
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      if (piVar1 != (int *)0x0) {
        thunk_FUN_103be9e0(piVar1,0xffffffff);
      }
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      if (piVar5 != (int *)0x0) {
        local_1c = (int *)((int *)0x0);
        local_18 = (int *)((int *)0x0);
        (**(code **)(*piVar5 + 8))();
      }
      piVar4 = (int *)(piVar4 + 2);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    } while (piVar4 != (int *)(local_2c));
  }
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  thunk_FUN_101f4930();

  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1031f610; body size 80 bytes.
#line 1 "ENTRY_1031f610"

undefined4 FUN_1031f610(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (undefined4)(0);
  case 1:
    return (undefined4)(1);
  case 2:
    return (undefined4)(2);
  case 3:
    return (undefined4)(3);
  case 4:
    return (undefined4)(4);
  case 5:
    return (undefined4)(5);
  case 6:
    return (undefined4)(6);
  case 7:
    return (undefined4)(7);
  default:
    return (undefined4)(10);
  case 0x12:
    return (undefined4)(8);
  }
}


// Reference entry 1031f9a0; body size 455 bytes.
#line 1 "ENTRY_1031f9a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1031f9a0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  void *pvVar7;
  int *piVar8;
  int *piVar9;
  int *piStack_20;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar6 = (uint)(DAT_12126b84);
  iVar1 = (int)(*(int *)(param_1 + 8));
  if (iVar1 != 0) {
    uVar2 = (uint)(*(uint *)(iVar1 + 0xa8));
    uVar3 = (undefined4)(*(undefined4 *)(iVar1 + 0xac));
    uVar4 = (uint)(*(uint *)(iVar1 + 0xb0));
    uVar5 = (undefined4)(*(undefined4 *)(iVar1 + 0xb4));

    pvVar7 = (void *)(operator_new(0x1c));

    if (pvVar7 == (void *)0x0) {
      local_18 = (int *)((int *)0x0);
    }
    else {
      local_18 = (int *)((int *)thunk_FUN_101b8150(uVar2 >> 8 & 0xff,uVar2 >> 0x10 & 0xff,uVar3));
    }
    piVar9 = (int *)((int *)0x0);

    if (local_18 != (int *)0x0) {
      piVar9 = (int *)((int *)(**(code **)(*local_18 + 0xc))(uVar6));
      (**(code **)(*piVar9 + 4))();
    }

    pvVar7 = (void *)(operator_new(0x1c));
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (pvVar7 == (void *)0x0) {
      local_14 = (int *)((int *)0x0);
    }
    else {
      local_14 = (int *)((int *)thunk_FUN_101b8150(uVar4 >> 8 & 0xff,uVar4 >> 0x10 & 0xff,uVar5));
    }
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    piStack_20 = (int *)((int *)0x0);
    if (local_14 != (int *)0x0) {
      piStack_20 = (int *)((int *)(**(code **)(*local_14 + 0xc))());
      (**(code **)(*piStack_20 + 4))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    piVar8 = (int *)(operator_new(0x18));
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)((int *)0x0);
    }
    else {
      *piVar8 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar8[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar8 = (int)((int)(uint)&ghidra_vftable_SCVersionRange);
      piVar8[2] = 0;
      piVar8[3] = 0;
      piVar8[4] = 0;
      piVar8[5] = 0;
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      thunk_FUN_101b8fc0(local_18,local_14);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    *param_2 = (undefined4)(piVar8);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    if (piStack_20 != (int *)0x0) {
      (**(code **)(*piStack_20 + 8))();
    }

    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))();
    }

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10320d20; body size 106 bytes.
#line 1 "ENTRY_10320d20"

uint * __stdcall FUN_10320d20(uint *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)thunk_FUN_10320db0(&local_14));
  iVar1 = (int)(*piVar3);
  *piVar3 = (int)(0);
  *param_1 = (uint)(-(uint)(iVar1 != 0) & iVar1 + 0xcU);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(uVar2);
  }

  return (uint *)(param_1);

 } catch (...) { }
}


// Reference entry 10321510; body size 326 bytes.
#line 1 "ENTRY_10321510"

undefined1 * __fastcall FUN_10321510(int param_1)

{
 try {
  char *pcVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  pcVar1 = (char *)(*(char **)(param_1 + 100));
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    if ((*(int *)(param_1 + 0x1c) == 0) || (*(char *)(param_1 + 0xa71) != '\0')) {
      uVar4 = (undefined4)(thunk_FUN_110d2d80(&local_18));

      uVar7 = (uint)(2);
    }
    else {
      uVar4 = (undefined4)(thunk_FUN_101b9a40(*(int *)(param_1 + 0x1c) + 0x4ca));

      uVar7 = (uint)(1);
    }
    local_14 = (uint)(uVar7);
    thunk_FUN_101ba530(uVar4);
    if ((uVar7 & 2) != 0) {
      uVar7 = (uint)(uVar7 & 0xfffffffd);

      local_14 = (uint)(uVar7);
      if ((local_18 != 0) && (*(int *)(local_18 + -0x10) < 0xffff)) {
        iVar5 = (int)(thunk_FUN_1123fcd0((void *)(local_18 + -0x10),uVar3));
        if (iVar5 == 0) {
          *(undefined4 *)(local_18 + -8) = 0;
          *(undefined4 *)(local_18 + -0xc) = 0;
          thunk_FUN_113cfb70(local_18,*(undefined4 *)(local_18 + -4));
          free((void *)(local_18 + -0x10));
        }
      }
    }
    if ((uVar7 & 1) != 0) {

      if ((local_1c != 0) && (*(int *)(local_1c + -0x10) < 0xffff)) {
        iVar5 = (int)(thunk_FUN_1123fcd0((void *)(local_1c + -0x10),uVar3));
        if (iVar5 == 0) {
          *(undefined4 *)(local_1c + -8) = 0;
          *(undefined4 *)(local_1c + -0xc) = 0;
          thunk_FUN_113cfb70(local_1c,*(undefined4 *)(local_1c + -4));
          free((void *)(local_1c + -0x10));
        }
      }
    }
  }
  puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 100));
  puVar6 = (undefined1 *)(&DAT_1186d2ee);
  if (puVar2 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)(puVar2);
  }

  return (undefined1 *)(puVar6);

 } catch (...) { }
}


// Reference entry 10321b70; body size 139 bytes.
#line 1 "ENTRY_10321b70"

undefined4 __thiscall Recovered_Bulk::FUN_10321b70(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = (int)(thunk_FUN_110cc280(uVar1));
    if (iVar2 != 0) {
      pvVar3 = (void *)(operator_new(0x30));

      if (pvVar3 != (void *)0x0) {
        uVar4 = (undefined4)(thunk_FUN_110cc280(uVar1));
        uVar4 = (undefined4)(thunk_FUN_10c647f0(param_2,uVar4));

        return (undefined4)(uVar4);
      }
    }
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 103230a0; body size 279 bytes.
#line 1 "ENTRY_103230a0"

undefined4 * __thiscall Recovered_Bulk::FUN_103230a0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_14 = (int *)(operator_new(0x14));

  if (local_14 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be5e0(uVar2));
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  local_14 = (int *)((int *)0x0);
  if (piVar3 == (int *)0x0) {
    local_1c = (int *)((int *)0x0);
  }
  else {
    local_1c = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  piVar5 = (int *)((int *)*param_1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  if (piVar5 != (int *)param_1[1]) {
    do {
      piVar1 = (int *)((int *)*piVar5);
      if (piVar1 != (int *)0x0) {
        piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
        (**(code **)(*piVar4 + 4))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      local_14 = (int *)(piVar1);
      thunk_FUN_103beae0(&local_14,0xffffffff);
      piVar5 = (int *)(piVar5 + 2);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    } while (piVar5 != (int *)param_1[1]);
  }
  *param_2 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10323ce0; body size 197 bytes.
#line 1 "ENTRY_10323ce0"

undefined4 * __thiscall Recovered_Bulk::FUN_10323ce0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);
  iVar1 = (int)(*(int *)(param_1 + 8));
  if (iVar1 != 0) {
    uVar2 = (uint)(*(uint *)(iVar1 + 0xa0));
    uVar3 = (undefined4)(*(undefined4 *)(iVar1 + 0xa4));

    pvVar5 = (void *)(operator_new(0x1c));

    if (pvVar5 == (void *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      piVar6 = (int *)((int *)thunk_FUN_101b8150(uVar2 >> 8 & 0xff,uVar2 >> 0x10 & 0xff,uVar3));
    }

    *param_2 = (undefined4)(piVar6);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(uVar4);
    }

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10325c50; body size 88 bytes.
#line 1 "ENTRY_10325c50"

bool FUN_10325c50(void)

{
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)thunk_FUN_10322b70(&local_14));
  iVar1 = (int)(*piVar3);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(uVar2);
  }

  return (bool)(iVar1 != 0);

 } catch (...) { }
}


// Reference entry 10326130; body size 165 bytes.
#line 1 "ENTRY_10326130"

bool __fastcall FUN_10326130(int param_1)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar2 = (int)(*(int *)(param_1 + 8));
  iVar1 = (int)(thunk_FUN_110828b0(DAT_12126b84 ));
  if ((iVar2 != 0) && (iVar1 != 0)) {
    thunk_FUN_11131cc0(iVar1,2,0);

    iVar2 = (int)(thunk_FUN_11132bd0());
    thunk_FUN_11132140();

    return (bool)(iVar2 != 0);
  }

  return (bool)(false);

 } catch (...) { }
}


// Reference entry 10326200; body size 88 bytes.
#line 1 "ENTRY_10326200"

bool FUN_10326200(void)

{
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)thunk_FUN_10323e90(&local_14));
  iVar1 = (int)(*piVar3);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(uVar2);
  }

  return (bool)(iVar1 != 0);

 } catch (...) { }
}


// Reference entry 10326940; body size 248 bytes.
#line 1 "ENTRY_10326940"

int * __thiscall Recovered_Bulk::FUN_10326940(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar2 = (int)((**(code **)(*param_1 + 0x90))(DAT_12126b84 ));
  if (iVar2 != 1) {
    *param_2 = (int)(0);

    return (int *)(param_2);
  }
  if (param_1[4] == 0) {
    pvVar3 = (void *)(operator_new(0x10));

    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_10c4ea80(param_1));
    }

    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    piVar1 = (int *)((int *)param_1[5]);

    if (piVar1 != (int *)0x0) {
      param_1[4] = 0;
      param_1[5] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    param_1[4] = (int)piVar4;
    if (piVar4 == (int *)0x0) {
      iVar2 = (int)(0);
    }
    else {
      iVar2 = (int)((**(code **)(*piVar4 + 0xc))());
    }
    param_1[5] = iVar2;

  }
  piVar4 = (int *)((int *)param_1[4]);
  *param_2 = (int)((int)piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10326a80; body size 207 bytes.
#line 1 "ENTRY_10326a80"

int * __thiscall Recovered_Bulk::FUN_10326a80(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0x18) == 0) {
    pvVar3 = (void *)(operator_new(0x14));

    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_10c54e60(param_1));
    }

    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 0x1c));

    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x18) = piVar4;
    if (piVar4 == (int *)0x0) {
      uVar5 = (undefined4)(0);
    }
    else {
      uVar5 = (undefined4)((**(code **)(*piVar4 + 0xc))());
    }
    *(undefined4 *)(param_1 + 0x1c) = uVar5;
  }

  piVar4 = (int *)(*(int **)(param_1 + 0x18));
  *param_2 = (int)((int)piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10326b90; body size 207 bytes.
#line 1 "ENTRY_10326b90"

int * __thiscall Recovered_Bulk::FUN_10326b90(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0x20) == 0) {
    pvVar3 = (void *)(operator_new(0xc));

    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_10c594a0(param_1));
    }

    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 0x24));

    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x20) = piVar4;
    if (piVar4 == (int *)0x0) {
      uVar5 = (undefined4)(0);
    }
    else {
      uVar5 = (undefined4)((**(code **)(*piVar4 + 0xc))());
    }
    *(undefined4 *)(param_1 + 0x24) = uVar5;
  }

  piVar4 = (int *)(*(int **)(param_1 + 0x20));
  *param_2 = (int)((int)piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10326ca0; body size 272 bytes.
#line 1 "ENTRY_10326ca0"

int * __thiscall Recovered_Bulk::FUN_10326ca0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar3 = (int)((**(code **)(*param_1 + 0x90))(DAT_12126b84 ));
  if (iVar3 == 1) {
    cVar2 = (char)((**(code **)(*param_1 + 0x98))());
    if (cVar2 != '\0') {
      if (param_1[10] == 0) {
        pvVar4 = (void *)(operator_new(0x78));

        if (pvVar4 == (void *)0x0) {
          piVar5 = (int *)((int *)0x0);
        }
        else {
          piVar5 = (int *)((int *)thunk_FUN_10c5b100(param_1));
        }

        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 4))();
        }
        piVar1 = (int *)((int *)param_1[0xb]);

        if (piVar1 != (int *)0x0) {
          param_1[10] = 0;
          param_1[0xb] = 0;
          (**(code **)(*piVar1 + 8))();
        }
        param_1[10] = (int)piVar5;
        if (piVar5 == (int *)0x0) {
          iVar3 = (int)(0);
        }
        else {
          iVar3 = (int)((**(code **)(*piVar5 + 0xc))());
        }
        param_1[0xb] = iVar3;

      }
      piVar5 = (int *)((int *)param_1[10]);
      *param_2 = (int)((int)piVar5);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))();
      }

      return (int *)(param_2);
    }
  }
  *param_2 = (int)(0);

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10326e50; body size 308 bytes.
#line 1 "ENTRY_10326e50"

void __fastcall FUN_10326e50(int *param_1)

{
 try {
  undefined1 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 local_f38 [323];
  undefined1 local_a2c [1292];
  undefined4 local_520 [322];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (uint)(DAT_12126b84);

  cVar2 = (char)((**(code **)(*param_1 + 0x1c))(local_14));
  if (cVar2 != '\0') {
    thunk_FUN_1127a020();

    if (param_1[2] != 0) {
      puVar3 = (undefined4 *)((undefined4 *)(param_1[2] + 0x564));
      puVar6 = (undefined4 *)(local_f38);
      for (iVar4 = (int)(0x143); iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = (undefined4)(*puVar3);
        puVar3 = (undefined4 *)(puVar3 + 1);
        puVar6 = (undefined4 *)(puVar6 + 1);
      }
      puVar3 = (undefined4 *)(local_f38);
      puVar6 = (undefined4 *)(local_520);
      for (iVar4 = (int)(0x143); iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = (undefined4)(*puVar3);
        puVar3 = (undefined4 *)(puVar3 + 1);
        puVar6 = (undefined4 *)(puVar6 + 1);
      }
      thunk_FUN_1127a080();
    }

    cVar2 = (char)(thunk_FUN_1127caf0());
    if (cVar2 == '\0') {
      puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_1031e830(local_a2c));
      puVar6 = (undefined4 *)(local_520);
      for (iVar4 = (int)(0x143); iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = (undefined4)(*puVar3);
        puVar3 = (undefined4 *)(puVar3 + 1);
        puVar6 = (undefined4 *)(puVar6 + 1);
      }
      thunk_FUN_1127a080();
    }
    cVar2 = (char)(thunk_FUN_1127caf0());
    if (cVar2 != '\0') {
      puVar5 = (undefined1 *)(&DAT_1186d2ee);
      if ((param_1[2] != 0) &&
         (puVar1 = *(undefined1 **)(param_1[2] + 0x5c), puVar1 != (undefined1 *)0x0)) {
        puVar5 = (undefined1 *)(puVar1);
      }
      cVar2 = (char)(thunk_FUN_1127a2b0(puVar5,0));
      if (cVar2 != '\0') {
        thunk_FUN_1127a080();
        goto LAB_10326f68;
      }
    }
    thunk_FUN_1127a080();
  }
LAB_10326f68:

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10327020; body size 278 bytes.
#line 1 "ENTRY_10327020"

void __fastcall FUN_10327020(int *param_1)

{
 try {
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 local_a2c [323];
  undefined4 local_520 [322];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (uint)(DAT_12126b84);

  cVar1 = (char)((**(code **)(*param_1 + 0x1c))(local_14));
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(*param_1 + 0x58))());
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 100))();
    }
  }
  else {
    thunk_FUN_1127a020();

    if (param_1[2] != 0) {
      puVar4 = (undefined4 *)((undefined4 *)(param_1[2] + 0x564));
      puVar6 = (undefined4 *)(local_a2c);
      for (iVar3 = (int)(0x143); iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = (undefined4)(*puVar4);
        puVar4 = (undefined4 *)(puVar4 + 1);
        puVar6 = (undefined4 *)(puVar6 + 1);
      }
      puVar4 = (undefined4 *)(local_a2c);
      puVar6 = (undefined4 *)(local_520);
      for (iVar3 = (int)(0x143); iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = (undefined4)(*puVar4);
        puVar4 = (undefined4 *)(puVar4 + 1);
        puVar6 = (undefined4 *)(puVar6 + 1);
      }
      thunk_FUN_1127a080();
    }

    cVar1 = (char)(thunk_FUN_1127caf0());
    if (cVar1 != '\0') {
      puVar5 = (undefined1 *)(&DAT_1186d2ee);
      if ((param_1[2] != 0) &&
         (puVar2 = *(undefined1 **)(param_1[2] + 0x5c), puVar2 != (undefined1 *)0x0)) {
        puVar5 = (undefined1 *)(puVar2);
      }
      puVar2 = (undefined1 *)((undefined1 *)thunk_FUN_1127c4d0());
      if (puVar2 == (undefined1 *)(puVar5)) {
        thunk_FUN_1127a080();
        goto LAB_1032711a;
      }
    }
    thunk_FUN_1127a080();
  }
LAB_1032711a:

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10327180; body size 278 bytes.
#line 1 "ENTRY_10327180"

void __fastcall FUN_10327180(int *param_1)

{
 try {
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 local_a2c [323];
  undefined4 local_520 [322];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (uint)(DAT_12126b84);

  cVar1 = (char)((**(code **)(*param_1 + 0x1c))(local_14));
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(*param_1 + 0x58))());
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 100))();
    }
  }
  else {
    thunk_FUN_1127a020();

    if (param_1[2] != 0) {
      puVar4 = (undefined4 *)((undefined4 *)(param_1[2] + 0x564));
      puVar6 = (undefined4 *)(local_a2c);
      for (iVar3 = (int)(0x143); iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = (undefined4)(*puVar4);
        puVar4 = (undefined4 *)(puVar4 + 1);
        puVar6 = (undefined4 *)(puVar6 + 1);
      }
      puVar4 = (undefined4 *)(local_a2c);
      puVar6 = (undefined4 *)(local_520);
      for (iVar3 = (int)(0x143); iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = (undefined4)(*puVar4);
        puVar4 = (undefined4 *)(puVar4 + 1);
        puVar6 = (undefined4 *)(puVar6 + 1);
      }
      thunk_FUN_1127a080();
    }

    cVar1 = (char)(thunk_FUN_1127caf0());
    if (cVar1 != '\0') {
      puVar5 = (undefined1 *)(&DAT_1186d2ee);
      if ((param_1[2] != 0) &&
         (puVar2 = *(undefined1 **)(param_1[2] + 0x5c), puVar2 != (undefined1 *)0x0)) {
        puVar5 = (undefined1 *)(puVar2);
      }
      puVar2 = (undefined1 *)((undefined1 *)thunk_FUN_1127c4d0());
      if (puVar2 != (undefined1 *)(puVar5)) {
        thunk_FUN_1127a080();
        goto LAB_1032727a;
      }
    }
    thunk_FUN_1127a080();
  }
LAB_1032727a:

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10327820; body size 74 bytes.
#line 1 "ENTRY_10327820"

undefined4 __fastcall FUN_10327820(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    cVar1 = (char)(thunk_FUN_110d88e0());
    if (((cVar1 != '\0') && (*(int *)(param_1 + 8) != 0)) &&
       (*(int *)(*(int *)(param_1 + 8) + 0x1c) != 0)) {
      cVar1 = (char)(FUN_10091f7e());
      if ((cVar1 != '\0') && (*(int *)(param_1 + 8) != 0)) {
        cVar1 = (char)(thunk_FUN_110d5a80(0x1c));
        if (cVar1 != '\0') {
          return (undefined4)(1);
        }
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 103278c0; body size 83 bytes.
#line 1 "ENTRY_103278c0"

bool __fastcall FUN_103278c0(int *param_1)

{
  char cVar1;
  int iStack_c;
  int iStack_8;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x1c))());
  if (cVar1 == '\0') {
    return (bool)(false);
  }
  cVar1 = (char)((**(code **)(*param_1 + 0x58))());
  if (cVar1 != '\0') {
    thunk_FUN_1031eeb0(&iStack_c);
    thunk_FUN_101f4930();
    return (bool)(iStack_c == iStack_8);
  }
  return (bool)(true);
}


// Reference entry 10327a90; body size 338 bytes.
#line 1 "ENTRY_10327a90"

undefined1 * __fastcall FUN_10327a90(int param_1)

{
 try {
  int *piVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  undefined1 auStack_100 [172];
  undefined4 uStack_54;
  char *pcStack_50;
  undefined4 uStack_4c;
  int **ppiStack_48;
  uint uStack_44;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_44 = (uint)(DAT_12126b84);
  if (*(int *)(param_1 + 8) == 0) {
    return (undefined1 *)(auStack_100);
  }
  bVar6 = (byte)(false);
  iVar5 = (int)(*(int *)(*(int *)(param_1 + 8) + 0x1c));
  if (iVar5 == 0) {
    ppiStack_48 = (int **)((int **)&DAT_1186d2ee);
  }
  else {
    ppiStack_48 = (int **)((int **)(iVar5 + 0x56c));
  }


  cVar2 = (char)(thunk_FUN_1145a8d0());
  if (cVar2 == '\0') {
    ppiStack_48 = (int **)((int **)0x118949e4);

    pcStack_50 = (char *)("SCDevice");

    thunk_FUN_112af4e0();
    ppiStack_48 = (int **)((int **)0x10327bcc);
    bVar6 = (byte)(thunk_FUN_110d4590());
  }
  else {
    ppiStack_48 = (int **)(&local_14);

    piVar3 = (int *)((int *)thunk_FUN_10436cd0());
    piVar1 = (int *)((int *)*piVar3);

    *piVar3 = (int)(0);
    if (piVar1 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      ppiStack_48 = (int **)((int **)0x10327b4c);
      piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      ppiStack_48 = (int **)((int **)0x10327b65);
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (piVar1 != (int *)0x0) {
      ppiStack_48 = (int **)((int **)0x10327b74);
      uVar4 = (uint)(thunk_FUN_10436ab0());
      ppiStack_48 = (int **)((int **)(uVar4 & 0xffff));

      pcStack_50 = (char *)((char *)0x0);

      iVar5 = (int)(thunk_FUN_10437a90());
      bVar6 = (byte)(iVar5 == 1);
    }

    if (piVar3 != (int *)0x0) {
      ppiStack_48 = (int **)((int **)0x10327b9d);
      (**(code **)(*piVar3 + 8))();

      return (undefined1 *)((undefined1 *)(uint)bVar6);
    }
  }

  return (undefined1 *)((undefined1 *)(uint)bVar6);

 } catch (...) { }
}


// Reference entry 10327c40; body size 338 bytes.
#line 1 "ENTRY_10327c40"

undefined1 * __fastcall FUN_10327c40(int param_1)

{
 try {
  int *piVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  undefined1 auStack_100 [172];
  undefined4 uStack_54;
  char *pcStack_50;
  undefined4 uStack_4c;
  int **ppiStack_48;
  uint uStack_44;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_44 = (uint)(DAT_12126b84);
  if (*(int *)(param_1 + 8) == 0) {
    return (undefined1 *)(auStack_100);
  }
  bVar6 = (byte)(false);
  iVar5 = (int)(*(int *)(*(int *)(param_1 + 8) + 0x1c));
  if (iVar5 == 0) {
    ppiStack_48 = (int **)((int **)&DAT_1186d2ee);
  }
  else {
    ppiStack_48 = (int **)((int **)(iVar5 + 0x56c));
  }


  cVar2 = (char)(thunk_FUN_1145a8d0());
  if (cVar2 == '\0') {
    ppiStack_48 = (int **)((int **)0x118949e4);

    pcStack_50 = (char *)("SCDevice");

    thunk_FUN_112af4e0();
    ppiStack_48 = (int **)((int **)0x10327d7c);
    bVar6 = (byte)(thunk_FUN_110d4590());
  }
  else {
    ppiStack_48 = (int **)(&local_14);

    piVar3 = (int *)((int *)thunk_FUN_10436cd0());
    piVar1 = (int *)((int *)*piVar3);

    *piVar3 = (int)(0);
    if (piVar1 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      ppiStack_48 = (int **)((int **)0x10327cfc);
      piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      ppiStack_48 = (int **)((int **)0x10327d15);
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (piVar1 != (int *)0x0) {
      ppiStack_48 = (int **)((int **)0x10327d24);
      uVar4 = (uint)(thunk_FUN_10436ab0());
      ppiStack_48 = (int **)((int **)(uVar4 & 0xffff));

      pcStack_50 = (char *)((char *)0x0);

      iVar5 = (int)(thunk_FUN_10437a90());
      bVar6 = (byte)(iVar5 == 1);
    }

    if (piVar3 != (int *)0x0) {
      ppiStack_48 = (int **)((int **)0x10327d4d);
      (**(code **)(*piVar3 + 8))();

      return (undefined1 *)((undefined1 *)(uint)bVar6);
    }
  }

  return (undefined1 *)((undefined1 *)(uint)bVar6);

 } catch (...) { }
}


// Reference entry 10327e20; body size 126 bytes.
#line 1 "ENTRY_10327e20"

undefined4 __fastcall FUN_10327e20(int *param_1)

{
 try {
  int iVar1;
  char cVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (param_1[2] != 0) {
    local_14 = (int *)(param_1);
    cVar2 = (char)(FUN_1005a7b3(DAT_12126b84 ));
    if (cVar2 != '\0') {
      piVar3 = (int *)((int *)thunk_FUN_10322b70(&local_14));
      iVar1 = (int)(*piVar3);

      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }
      if (iVar1 == 0) {

        return (undefined4)(1);
      }
    }
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10327ff0; body size 102 bytes.
#line 1 "ENTRY_10327ff0"

undefined4 __fastcall FUN_10327ff0(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x1c))());
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_1 + 100))(), cVar1 != '\0')) {
    cVar1 = (char)((**(code **)(*param_1 + 0x5c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
    if ((param_1[2] != 0) && (cVar1 = thunk_FUN_110d50b0(), cVar1 != '\0')) {
      return (undefined4)(1);
    }
    if ((param_1[2] != 0) && (cVar1 = thunk_FUN_110d3720(), cVar1 != '\0')) {
      cVar1 = (char)(thunk_FUN_10325a60());
      if ((cVar1 != '\0') && (cVar1 = thunk_FUN_10325e10(), cVar1 != '\0')) {
        return (undefined4)(0);
      }
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10328900; body size 128 bytes.
#line 1 "ENTRY_10328900"

void __fastcall FUN_10328900(int param_1)

{
 try {
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_101f6530(&local_18,DAT_12126b84 );

  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);

  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 103289a0; body size 128 bytes.
#line 1 "ENTRY_103289a0"

void __fastcall FUN_103289a0(int param_1)

{
 try {
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_101f6530(&local_18,DAT_12126b84 );

  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);

  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10328a40; body size 128 bytes.
#line 1 "ENTRY_10328a40"

void __fastcall FUN_10328a40(int param_1)

{
 try {
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_101f6530(&local_18,DAT_12126b84 );

  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);

  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10328ae0; body size 128 bytes.
#line 1 "ENTRY_10328ae0"

void __fastcall FUN_10328ae0(int param_1)

{
 try {
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_101f6530(&local_18,DAT_12126b84 );

  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);

  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10328b80; body size 128 bytes.
#line 1 "ENTRY_10328b80"

void __fastcall FUN_10328b80(int param_1)

{
 try {
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_101f6530(&local_18,DAT_12126b84 );

  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);

  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10328c20; body size 255 bytes.
#line 1 "ENTRY_10328c20"

undefined4 * __stdcall FUN_10328c20(undefined4 *param_1,undefined4 *param_2)

{
 try {
  uint uVar1;
  SCLibrary *this_;
  undefined4 uVar2;
  int *piVar3;
  int **ppiVar4;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar3 = (int *)((int *)0x0);
  if (this_ != (SCLibrary *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*(int *)this_ + 0xc))(uVar1));
    (**(code **)(*piVar3 + 4))();
  }

  if (this_ != (SCLibrary *)0x0) {
    ppiVar4 = (int **)(&local_14);
    uVar2 = (undefined4)(((SCLibrary *)(this_))->getSCHousehold());
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    thunk_FUN_101bf370(uVar2);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))(ppiVar4);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_1c != (int *)0x0) {
      if (((char *)*param_2 != (char *)0x0) && (*(char *)*param_2 != '\0')) {
        (**(code **)(*local_1c + 0x1c0))(param_1,param_2);
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 8))();
        }

        goto LAB_10328cff;
      }
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  *param_1 = (undefined4)(0);

LAB_10328cff:
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10328d60; body size 255 bytes.
#line 1 "ENTRY_10328d60"

undefined4 * __stdcall FUN_10328d60(undefined4 *param_1,undefined4 *param_2)

{
 try {
  uint uVar1;
  SCLibrary *this_;
  undefined4 uVar2;
  int *piVar3;
  int **ppiVar4;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar3 = (int *)((int *)0x0);
  if (this_ != (SCLibrary *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*(int *)this_ + 0xc))(uVar1));
    (**(code **)(*piVar3 + 4))();
  }

  if (this_ != (SCLibrary *)0x0) {
    ppiVar4 = (int **)(&local_14);
    uVar2 = (undefined4)(((SCLibrary *)(this_))->getSCHousehold());
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    thunk_FUN_101bf370(uVar2);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))(ppiVar4);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_1c != (int *)0x0) {
      if (((char *)*param_2 != (char *)0x0) && (*(char *)*param_2 != '\0')) {
        (**(code **)(*local_1c + 0x1b8))(param_1,param_2);
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 8))();
        }

        goto LAB_10328e3f;
      }
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  *param_1 = (undefined4)(0);

LAB_10328e3f:
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10329000; body size 232 bytes.
#line 1 "ENTRY_10329000"

void __thiscall Recovered_Bulk::FUN_10329000(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;

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

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10329130; body size 232 bytes.
#line 1 "ENTRY_10329130"

void __thiscall Recovered_Bulk::FUN_10329130(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;

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

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10329260; body size 232 bytes.
#line 1 "ENTRY_10329260"

void __thiscall Recovered_Bulk::FUN_10329260(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;

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

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10329390; body size 232 bytes.
#line 1 "ENTRY_10329390"

void __thiscall Recovered_Bulk::FUN_10329390(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;

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

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 103294c0; body size 232 bytes.
#line 1 "ENTRY_103294c0"

void __thiscall Recovered_Bulk::FUN_103294c0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;

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

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 1032aa20; body size 290 bytes.
#line 1 "ENTRY_1032aa20"

undefined1 __thiscall Recovered_Bulk::FUN_1032aa20(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  char cVar2;
  char *_Src;
  undefined1 uVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  size_t _Size;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  bVar4 = (bool)(false);
  if (*(int *)(param_1 + 8) == 0) {
    uVar3 = (undefined1)(0);
  }
  else {
    _Src = (char *)((char *)*param_2);
    if ((_Src == (char *)0x0) || (*_Src == '\0')) {
      param_2 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar7 = (char *)(_Src);
      do {
        cVar2 = (char)(*pcVar7);
        pcVar7 = (char *)(pcVar7 + 1);
      } while (cVar2 != '\0');
      _Size = (size_t)((int)pcVar7 - (int)(_Src + 1));
      puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11,DAT_12126b84 ));
      puVar1 = (undefined4 *)(puVar5 + 4);
      *puVar5 = (undefined4)(1);
      puVar5[3] = _Size;
      puVar5[2] = 0;
      puVar5[1] = 0;
      memcpy(puVar1,_Src,_Size);
      *(undefined1 *)((int)puVar1 + _Size) = 0;
      param_2 = (undefined4 *)(puVar1);
    }

    uVar3 = (undefined1)(thunk_FUN_110d6f80(&param_2));
    bVar4 = (bool)(true);
  }
  puVar1 = (undefined4 *)(param_2);
  if (bVar4) {

    if ((param_2 != (undefined4 *)0x0) && (puVar5 = param_2 + -4, (int)param_2[-4] < 0xffff)) {
      iVar6 = (int)(thunk_FUN_1123fcd0(puVar5));
      if (iVar6 == 0) {
        puVar1[-2] = 0;
        puVar1[-3] = 0;
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar5);
      }
    }
  }

  return (undefined1)(uVar3);

 } catch (...) { }
}


// Reference entry 1032ac40; body size 79 bytes.
#line 1 "ENTRY_1032ac40"

int __fastcall FUN_1032ac40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0x400);
  iVar1 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("Source");
  thunk_FUN_112503c0(iVar1,uVar2);
  uVar2 = (undefined4)(0x400);
  iVar1 = (int)(param_1 + 0xdbd0);
  thunk_FUN_1124ff50(&DAT_11893b8c);
  thunk_FUN_112503c0(iVar1,uVar2);
  return (int)(param_1);
}


// Reference entry 1032ad10; body size 69 bytes.
#line 1 "ENTRY_1032ad10"

undefined4 __thiscall Recovered_Bulk::FUN_1032ad10(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("ChannelMapSet",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  thunk_FUN_1124ffa0("KeepGrouped",0);
  thunk_FUN_1124f3c0(param_2);
  return (undefined4)(param_1);
}


// Reference entry 1032add0; body size 127 bytes.
#line 1 "ENTRY_1032add0"

undefined4 __thiscall Recovered_Bulk::FUN_1032add0(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("DesiredZoneName",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("DesiredIcon",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("DesiredConfiguration",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("DesiredTargetRoomName",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 1032b3e0; body size 105 bytes.
#line 1 "ENTRY_1032b3e0"

undefined4 __fastcall FUN_1032b3e0(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x60))());
  if (cVar1 != '\0') {
    return (undefined4)(0);
  }
  cVar1 = (char)(thunk_FUN_10325d10());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10325b50());
    if (cVar1 == '\0') {
      cVar1 = (char)(thunk_FUN_10326280());
      if (cVar1 == '\0') {
        cVar1 = (char)(thunk_FUN_10325f00());
        if (cVar1 == '\0') {
          cVar1 = (char)(thunk_FUN_10325970());
          if (cVar1 == '\0') {
            cVar1 = (char)(thunk_FUN_10326510());
            if (cVar1 == '\0') {
              return (undefined4)(3);
            }
          }
        }
        return (undefined4)(2);
      }
    }
  }
  return (undefined4)(1);
}


// Reference entry 1032c060; body size 108 bytes.
#line 1 "ENTRY_1032c060"

undefined4 * __thiscall Recovered_Bulk::FUN_1032c060(undefined4 *param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(*param_2);
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_3 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_3 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1032c4f0; body size 110 bytes.
#line 1 "ENTRY_1032c4f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1032c4f0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1032c580; body size 110 bytes.
#line 1 "ENTRY_1032c580"

undefined4 * __thiscall Recovered_Bulk::FUN_1032c580(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1032c610; body size 110 bytes.
#line 1 "ENTRY_1032c610"

undefined4 * __thiscall Recovered_Bulk::FUN_1032c610(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1032c6a0; body size 110 bytes.
#line 1 "ENTRY_1032c6a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1032c6a0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1032c730; body size 110 bytes.
#line 1 "ENTRY_1032c730"

undefined4 * __thiscall Recovered_Bulk::FUN_1032c730(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1032e1b0; body size 153 bytes.
#line 1 "ENTRY_1032e1b0"

void __stdcall FUN_1032e1b0(int *param_1)

{
  int *piVar1;
  undefined1 auStack_68 [36];
  int *local_44;
  uint uStack_40;
  undefined1 auStack_30 [4];
  int local_2c [9];
  int *piStack_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)auStack_30);
  local_44 = (int *)((int *)0x0);
  piVar1 = (int *)((int *)param_1[9]);
  if (piVar1 != (int *)0x0) {
    if (piVar1 == (int *)(param_1)) {
      local_44 = (int *)((int *)(**(code **)(*piVar1 + 4))(auStack_68));
      piVar1 = (int *)((int *)param_1[9]);
      if (piVar1 == (int *)0x0) goto LAB_1032e209;
      (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1));
      piVar1 = (int *)(local_44);
    }
    local_44 = (int *)(piVar1);
    param_1[9] = 0;
  }
LAB_1032e209:
  thunk_FUN_10224630();
  local_44 = (int *)((int *)0x1032e219);
  thunk_FUN_103432b0();
  if (piStack_8 != (int *)0x0) {
    uStack_40 = (uint)((uint)(piStack_8 != (int *)(local_2c)));
    local_44 = (int *)((int *)0x1032e233);
    (**(code **)(*piStack_8 + 0x10))();
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1032e270; body size 153 bytes.
#line 1 "ENTRY_1032e270"

void __stdcall FUN_1032e270(int *param_1)

{
  int *piVar1;
  undefined1 auStack_68 [36];
  int *local_44;
  uint uStack_40;
  undefined1 auStack_30 [4];
  int local_2c [9];
  int *piStack_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)auStack_30);
  local_44 = (int *)((int *)0x0);
  piVar1 = (int *)((int *)param_1[9]);
  if (piVar1 != (int *)0x0) {
    if (piVar1 == (int *)(param_1)) {
      local_44 = (int *)((int *)(**(code **)(*piVar1 + 4))(auStack_68));
      piVar1 = (int *)((int *)param_1[9]);
      if (piVar1 == (int *)0x0) goto LAB_1032e2c9;
      (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1));
      piVar1 = (int *)(local_44);
    }
    local_44 = (int *)(piVar1);
    param_1[9] = 0;
  }
LAB_1032e2c9:
  thunk_FUN_1032d1f0();
  local_44 = (int *)((int *)0x1032e2d9);
  thunk_FUN_103432b0();
  if (piStack_8 != (int *)0x0) {
    uStack_40 = (uint)((uint)(piStack_8 != (int *)(local_2c)));
    local_44 = (int *)((int *)0x1032e2f3);
    (**(code **)(*piStack_8 + 0x10))();
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1032ea90; body size 108 bytes.
#line 1 "ENTRY_1032ea90"

void __thiscall Recovered_Bulk::FUN_1032ea90(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)(*param_2);
  puVar1[0xb] = 0;

  if ((undefined4 *)param_2[0xb] != (undefined4 *)0x0) {
    uVar3 = (undefined4)((*(code *)**(undefined4 **)param_2[0xb])(puVar1 + 2,uVar2));
    puVar1[0xb] = uVar3;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x30;

  return;

 } catch (...) { }
}


// Reference entry 1032ee10; body size 344 bytes.
#line 1 "ENTRY_1032ee10"

undefined4 * __thiscall Recovered_Bulk::FUN_1032ee10(int param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar5 = (int)(*param_1);
  iVar1 = (int)((param_1[1] - iVar5) / 0x30);
  if (iVar1 == 0x5555555) {
                    
    thunk_FUN_1033b630();
  }
  uVar8 = (uint)((param_1[2] - iVar5) / 0x30);
  if (0x5555555 - (uVar8 >> 1) < uVar8) {
    uVar8 = (uint)(0x5555555);
  }
  else {
    uVar8 = (uint)((uVar8 >> 1) + uVar8);
    if (uVar8 < iVar1 + 1U) {
      uVar8 = (uint)(iVar1 + 1U);
    }
  }
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1033bef0(uVar8));
  puVar6 = (undefined4 *)(puVar2 + ((param_2 - iVar5) / 0x30) * 0xc);
  *puVar6 = (undefined4)(*param_3);
  puVar6[0xb] = 0;

  if ((undefined4 *)param_3[0xb] != (undefined4 *)0x0) {
    uVar3 = (undefined4)((*(code *)**(undefined4 **)param_3[0xb])(puVar6 + 2));
    puVar6[0xb] = uVar3;
  }
  iVar4 = (int)(param_1[1]);
  iVar5 = (int)(*param_1);
  puVar7 = (undefined4 *)(puVar2);
  if (param_2 != iVar4) {
    thunk_FUN_10331820(iVar5,param_2,puVar2,param_1);
    iVar4 = (int)(param_1[1]);
    iVar5 = (int)(param_2);
    puVar7 = (undefined4 *)(puVar6 + 0xc);
  }
  thunk_FUN_10331820(iVar5,iVar4,puVar7,param_1);
  thunk_FUN_10338890(puVar2,iVar1 + 1,uVar8);

  return (undefined4 *)(puVar6);

 } catch (...) { }
}


// Reference entry 1032eff0; body size 238 bytes.
#line 1 "ENTRY_1032eff0"

int __thiscall Recovered_Bulk::FUN_1032eff0(int param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar3 = (int)(*param_1);
  iVar1 = (int)((param_1[1] - iVar3) / 0x30);
  if (iVar1 == 0x5555555) {
                    
    thunk_FUN_1033b630();
  }
  uVar7 = (uint)((param_1[2] - iVar3) / 0x30);
  if (0x5555555 - (uVar7 >> 1) < uVar7) {
    uVar7 = (uint)(0x5555555);
  }
  else {
    uVar7 = (uint)((uVar7 >> 1) + uVar7);
    if (uVar7 < iVar1 + 1U) {
      uVar7 = (uint)(iVar1 + 1U);
    }
  }
  iVar2 = (int)(thunk_FUN_1033bef0(uVar7));
  iVar6 = (int)(((param_2 - iVar3) / 0x30) * 0x30 + iVar2);
  thunk_FUN_10331cb0(param_1,iVar6,param_3);
  iVar4 = (int)(param_1[1]);
  iVar3 = (int)(*param_1);
  iVar5 = (int)(iVar2);
  if (param_2 != iVar4) {
    thunk_FUN_10331820(iVar3,param_2,iVar2,param_1);
    iVar4 = (int)(param_1[1]);
    iVar3 = (int)(param_2);
    iVar5 = (int)(iVar6 + 0x30);
  }
  thunk_FUN_10331820(iVar3,iVar4,iVar5,param_1);
  thunk_FUN_10338890(iVar2,iVar1 + 1,uVar7);
  return (int)(iVar6);
}


// Reference entry 1032f330; body size 150 bytes.
#line 1 "ENTRY_1032f330"

undefined4 __thiscall Recovered_Bulk::FUN_1032f330(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(DAT_12126b84);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar4 = (void **)(&local_10);

  while (ExceptionList = ppvVar4, cVar1 == '\0') {
    thunk_FUN_1032f330(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    piVar3 = (int *)((int *)param_3[6]);

    if (piVar3 != (int *)0x0) {
      param_3[5] = 0;
      param_3[6] = 0;
      (**(code **)(*piVar3 + 8))(uVar5);
    }

    thunk_FUN_1148a50e(param_3,0x1c);

    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1032f400; body size 150 bytes.
#line 1 "ENTRY_1032f400"

undefined4 __thiscall Recovered_Bulk::FUN_1032f400(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(DAT_12126b84);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar4 = (void **)(&local_10);

  while (ExceptionList = ppvVar4, cVar1 == '\0') {
    thunk_FUN_1032f400(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    piVar3 = (int *)((int *)param_3[6]);

    if (piVar3 != (int *)0x0) {
      param_3[5] = 0;
      param_3[6] = 0;
      (**(code **)(*piVar3 + 8))(uVar5);
    }

    thunk_FUN_1148a50e(param_3,0x1c);

    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1032fa50; body size 73 bytes.
#line 1 "ENTRY_1032fa50"

int * __thiscall Recovered_Bulk::FUN_1032fa50(int *param_2,int *param_3)
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


// Reference entry 1032fab0; body size 73 bytes.
#line 1 "ENTRY_1032fab0"

int * __thiscall Recovered_Bulk::FUN_1032fab0(int *param_2,int *param_3)
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


// Reference entry 1032fc30; body size 98 bytes.
#line 1 "ENTRY_1032fc30"

void FUN_1032fc30(undefined4 param_1,int param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_2 + 0x18));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_1148a50e(param_2,0x1c);

  return;

 } catch (...) { }
}


// Reference entry 1032fcb0; body size 98 bytes.
#line 1 "ENTRY_1032fcb0"

void FUN_1032fcb0(undefined4 param_1,int param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_2 + 0x18));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_1148a50e(param_2,0x1c);

  return;

 } catch (...) { }
}


// Reference entry 1032fde0; body size 124 bytes.
#line 1 "ENTRY_1032fde0"

undefined4 * FUN_1032fde0(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 1032ff00; body size 124 bytes.
#line 1 "ENTRY_1032ff00"

undefined4 * FUN_1032ff00(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 10330020; body size 124 bytes.
#line 1 "ENTRY_10330020"

undefined4 * FUN_10330020(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 10330140; body size 124 bytes.
#line 1 "ENTRY_10330140"

undefined4 * FUN_10330140(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 10330260; body size 124 bytes.
#line 1 "ENTRY_10330260"

undefined4 * FUN_10330260(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 103313c0; body size 221 bytes.
#line 1 "ENTRY_103313c0"

int * __thiscall Recovered_Bulk::FUN_103313c0(int *param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_1032fab0(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;

    return (int *)(param_2);
  }
  if (param_1[1] != 0x9249249) {
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = *param_3;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_1033a700(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 10331820; body size 128 bytes.
#line 1 "ENTRY_10331820"

undefined4 * FUN_10331820(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_1 != (undefined4 *)(param_2)) {
    iVar4 = (int)((int)param_3 - (int)param_1);
    puVar5 = (undefined4 *)(param_1 + 0xb);
    do {
      *param_3 = (undefined4)(puVar5[-0xb]);
      *(undefined4 *)(iVar4 + (int)puVar5) = 0;
      piVar2 = (int *)((int *)*puVar5);
      if (piVar2 != (int *)0x0) {
        if (piVar2 == (int *)(puVar5) + -9) {
          uVar3 = (undefined4)((**(code **)(*piVar2 + 4))(param_3 + 2));
          *(undefined4 *)(iVar4 + (int)puVar5) = uVar3;
          piVar2 = (int *)((int *)*puVar5);
          if (piVar2 == (int *)0x0) goto LAB_1033188c;
          (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)(puVar5) + -9);
        }
        else {
          *(int **)(iVar4 + (int)puVar5) = piVar2;
        }
        *puVar5 = (undefined4)(0);
      }
LAB_1033188c:
      param_3 = (undefined4 *)(param_3 + 0xc);
      puVar1 = (undefined4 *)(puVar5 + 1);
      puVar5 = (undefined4 *)(puVar5 + 0xc);
    } while (puVar1 != (undefined4 *)(param_2));
  }
  return (undefined4 *)(param_3);
}


// Reference entry 10331c30; body size 96 bytes.
#line 1 "ENTRY_10331c30"

void FUN_10331c30(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(*param_3);
  param_2[0xb] = 0;

  if ((undefined4 *)param_3[0xb] != (undefined4 *)0x0) {
    uVar2 = (undefined4)((*(code *)**(undefined4 **)param_3[0xb])(param_2 + 2,uVar1));
    param_2[0xb] = uVar2;
  }

  return;

 } catch (...) { }
}


// Reference entry 10331ea0; body size 85 bytes.
#line 1 "ENTRY_10331ea0"

void FUN_10331ea0(undefined4 param_1,int param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_2 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10331f10; body size 85 bytes.
#line 1 "ENTRY_10331f10"

void FUN_10331f10(undefined4 param_1,int param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_2 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10332040; body size 139 bytes.
#line 1 "ENTRY_10332040"

void __thiscall Recovered_Bulk::FUN_10332040(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    puVar1[0xb] = 0;

    if ((undefined4 *)param_2[0xb] != (undefined4 *)0x0) {
      uVar3 = (undefined4)((*(code *)**(undefined4 **)param_2[0xb])(puVar1 + 2,uVar2));
      puVar1[0xb] = uVar3;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x30;

    return;
  }
  thunk_FUN_1032ee10(puVar1,param_2);

  return;

 } catch (...) { }
}


// Reference entry 10332270; body size 158 bytes.
#line 1 "ENTRY_10332270"

int * FUN_10332270(int *param_1,int *param_2)

{
 try {
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  int local_38 [9];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);
  ppvVar2 = (void **)(&local_10);

  while( true ) {

    if (param_1 == (int *)(param_2)) {

      return (int *)(param_1);
    }
    iVar1 = (int)(*param_1);
    local_14 = (int *)((int *)0x0);

    if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
      local_14 = (int *)((int *)(*(code *)**(undefined4 **)param_1[0xb])(local_38,uVar3));
    }

    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 0x10))(local_14 != (int *)(local_38));
    }
    if (iVar1 == 0) break;
    param_1 = (int *)(param_1 + 0xc);

  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10333050; body size 423 bytes.
#line 1 "ENTRY_10333050"

void FUN_10333050(undefined4 *param_1,int *param_2,int *param_3)

{
 try {
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_48 [9];
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  local_1c = (int *)(param_3);
  if (param_2 != (int *)(param_3)) {
    do {
      iVar3 = (int)(*param_2);
      local_18 = (int *)(local_48);
      local_24 = (int *)((int *)0x0);

      if ((undefined4 *)param_2[0xb] != (undefined4 *)0x0) {
        local_24 = (int *)((int *)(*(code *)**(undefined4 **)param_2[0xb])(local_48,uVar2));
      }

      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 0x10))(local_24 != (int *)(local_48));
      }
    } while ((iVar3 != 0) && (param_2 = (int *)(param_2 + 0xc, param_2 != (int *)(param_3))));
    if (param_2 != (int *)(param_3)) {
      local_18 = (int *)(param_2 + 0xc);
      if (local_18 != (int *)(param_3)) {
        piVar5 = (int *)(param_2 + 0x17);
        piVar4 = (int *)(param_2 + 0xb);
        do {
          iVar3 = (int)(*local_18);
          local_20 = (int *)(local_48);
          local_24 = (int *)((int *)0x0);

          if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
            local_24 = (int *)((int *)(*(code *)**(undefined4 **)*piVar5)(local_48));
          }
          local_11 = (char)(iVar3 == 0);

          if (local_24 != (int *)0x0) {
            (**(code **)(*local_24 + 0x10))(local_24 != (int *)(local_48));
          }
          if (local_11 == '\0') {
            *param_2 = (int)(*local_18);
            if (piVar4 + -9 != piVar5 + -9) {
              piVar1 = (int *)((int *)*piVar4);
              if (piVar1 != (int *)0x0) {
                (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(piVar4) + -9);
                *piVar4 = (int)(0);
              }
              piVar1 = (int *)((int *)*piVar5);
              if (piVar1 != (int *)0x0) {
                if (piVar1 == (int *)(piVar5) + -9) {
                  iVar3 = (int)((**(code **)(*piVar1 + 4))(piVar4 + -9));
                  *piVar4 = (int)(iVar3);
                  piVar1 = (int *)((int *)*piVar5);
                  if (piVar1 == (int *)0x0) goto LAB_103331c5;
                  (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(piVar5) + -9);
                }
                else {
                  *piVar4 = (int)((int)piVar1);
                }
                *piVar5 = (int)(0);
              }
            }
LAB_103331c5:
            param_2 = (int *)(param_2 + 0xc);
            piVar4 = (int *)(piVar4 + 0xc);
          }
          piVar5 = (int *)(piVar5 + 0xc);
          local_18 = (int *)(local_18 + 0xc);
        } while ((int *)(local_18) != local_1c);
      }
    }
  }
  *param_1 = (undefined4)(param_2);

  return;

 } catch (...) { }
}


// Reference entry 10333e30; body size 87 bytes.
#line 1 "ENTRY_10333e30"

int __thiscall Recovered_Bulk::FUN_10333e30(int *param_2)
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


// Reference entry 10333ea0; body size 93 bytes.
#line 1 "ENTRY_10333ea0"

int __thiscall Recovered_Bulk::FUN_10333ea0(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10334170; body size 105 bytes.
#line 1 "ENTRY_10334170"

undefined4 * __thiscall Recovered_Bulk::FUN_10334170(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(*param_2);
  param_1[0xb] = 0;

  if ((undefined4 *)param_2[0xb] != (undefined4 *)0x0) {
    uVar2 = (undefined4)((*(code *)**(undefined4 **)param_2[0xb])(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10334790; body size 87 bytes.
#line 1 "ENTRY_10334790"

int __thiscall Recovered_Bulk::FUN_10334790(int *param_2)
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


// Reference entry 10334800; body size 96 bytes.
#line 1 "ENTRY_10334800"

int __thiscall Recovered_Bulk::FUN_10334800(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10334b20; body size 87 bytes.
#line 1 "ENTRY_10334b20"

int __thiscall Recovered_Bulk::FUN_10334b20(int *param_2)
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


// Reference entry 10334b90; body size 96 bytes.
#line 1 "ENTRY_10334b90"

int __thiscall Recovered_Bulk::FUN_10334b90(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10334d60; body size 87 bytes.
#line 1 "ENTRY_10334d60"

int __thiscall Recovered_Bulk::FUN_10334d60(int *param_2)
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


// Reference entry 10334dd0; body size 96 bytes.
#line 1 "ENTRY_10334dd0"

int __thiscall Recovered_Bulk::FUN_10334dd0(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10335530; body size 103 bytes.
#line 1 "ENTRY_10335530"

undefined4 * __thiscall Recovered_Bulk::FUN_10335530(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xd] = 0;

  thunk_FUN_105ef430(param_2);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 103355b0; body size 87 bytes.
#line 1 "ENTRY_103355b0"

int __thiscall Recovered_Bulk::FUN_103355b0(int *param_2)
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


// Reference entry 10335620; body size 96 bytes.
#line 1 "ENTRY_10335620"

int __thiscall Recovered_Bulk::FUN_10335620(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10335af0; body size 87 bytes.
#line 1 "ENTRY_10335af0"

int __thiscall Recovered_Bulk::FUN_10335af0(int *param_2)
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


// Reference entry 10335b60; body size 96 bytes.
#line 1 "ENTRY_10335b60"

int __thiscall Recovered_Bulk::FUN_10335b60(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10335d40; body size 76 bytes.
#line 1 "ENTRY_10335d40"

void __fastcall FUN_10335d40(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10335db0; body size 76 bytes.
#line 1 "ENTRY_10335db0"

void __fastcall FUN_10335db0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10335e20; body size 76 bytes.
#line 1 "ENTRY_10335e20"

void __fastcall FUN_10335e20(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10336360; body size 111 bytes.
#line 1 "ENTRY_10336360"

void __fastcall FUN_10336360(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  iVar3 = (int)(*(int *)(param_1 + 4));
  if (iVar3 != 0) {
    piVar1 = (int *)(*(int **)(iVar3 + 0x18));

    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
      iVar3 = (int)(*(int *)(param_1 + 4));
    }
    if (iVar3 != 0) {
      thunk_FUN_1148a50e(iVar3,0x1c);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10336400; body size 111 bytes.
#line 1 "ENTRY_10336400"

void __fastcall FUN_10336400(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  iVar3 = (int)(*(int *)(param_1 + 4));
  if (iVar3 != 0) {
    piVar1 = (int *)(*(int **)(iVar3 + 0x18));

    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
      iVar3 = (int)(*(int *)(param_1 + 4));
    }
    if (iVar3 != 0) {
      thunk_FUN_1148a50e(iVar3,0x1c);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 103366c0; body size 84 bytes.
#line 1 "ENTRY_103366c0"

void __fastcall FUN_103366c0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10336730; body size 84 bytes.
#line 1 "ENTRY_10336730"

void __fastcall FUN_10336730(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 103367d0; body size 118 bytes.
#line 1 "ENTRY_103367d0"

void __fastcall FUN_103367d0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_1032e8b0(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0x30) * 0x30);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar2) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar2);
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 10336930; body size 297 bytes.
#line 1 "ENTRY_10336930"

void __fastcall FUN_10336930(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFoundProductManager);
  param_1[0x1c] = (uint)&ghidra_vftable_SCFoundProductManager;
  param_1[0x1d] = (uint)&ghidra_vftable_SCFoundProductManager;
  param_1[0x1e] = (uint)&ghidra_vftable_SCFoundProductManager;
  thunk_FUN_112a7f20(param_1 + 0x2b,uVar1);
  thunk_FUN_112a7f20(param_1 + 0x30);
  DAT_121a10c8 = (int)(0);
  thunk_FUN_103367d0();
  thunk_FUN_103367d0();
  thunk_FUN_1032f250(param_1 + 0x29,*(undefined4 *)(param_1[0x29] + 4));
  thunk_FUN_1148a50e(param_1[0x29],0x1c);
  thunk_FUN_1032f330(param_1 + 0x27,*(undefined4 *)(param_1[0x27] + 4));
  thunk_FUN_1148a50e(param_1[0x27],0x1c);
  thunk_FUN_1032f400(param_1 + 0x25,*(undefined4 *)(param_1[0x25] + 4));
  thunk_FUN_1148a50e(param_1[0x25],0x1c);

  param_1[0x1e] = (uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[0x1d] = (uint)&ghidra_vftable_SCLoggingHelper;
  param_1[0x1c] = (uint)&ghidra_vftable_RITQHandler;
  thunk_FUN_103d0880();

  return;

 } catch (...) { }
}


// Reference entry 10336d40; body size 81 bytes.
#line 1 "ENTRY_10336d40"

int * __thiscall Recovered_Bulk::FUN_10336d40(int *param_2)
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


// Reference entry 10336db0; body size 81 bytes.
#line 1 "ENTRY_10336db0"

int * __thiscall Recovered_Bulk::FUN_10336db0(int *param_2)
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


// Reference entry 10336eb0; body size 303 bytes.
#line 1 "ENTRY_10336eb0"

int * __thiscall Recovered_Bulk::FUN_10336eb0(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined1 local_3c [12];
  undefined8 local_30;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  iVar1 = (int)(*param_1);
  local_14 = (int *)(param_3);
  thunk_FUN_1032f330(param_1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = (int)(iVar1);
  *(int *)(iVar1 + 8) = iVar1;
  local_1c = (int)(*param_1);
  param_1[1] = 0;
  if ((int *)(param_2) != local_14) {
    do {
      puVar4 = (undefined8 *)((undefined8 *)thunk_FUN_1032f560(local_3c,local_1c,param_2));
      local_30 = (undefined8)(*puVar4);
      local_28 = (undefined4)(*(undefined4 *)(puVar4 + 1));
      if ((char)local_28 == '\0') {
        if (param_1[1] == 0x9249249) {
                    
          thunk_FUN_101d7220(uVar3);
        }
        local_18 = (int)(*param_1);

        local_20 = (int *)((int *)0x0);
        local_24 = (int *)(param_1);
        piVar5 = (int *)(operator_new(0x1c));
        piVar5[4] = *param_2;
        piVar5[5] = param_2[1];
        piVar2 = (int *)((int *)param_2[2]);

        piVar5[6] = (int)piVar2;
        if (piVar2 != (int *)0x0) {
          local_20 = (int *)(piVar5);
          (**(code **)(*piVar2 + 4))();
        }
        *piVar5 = (int)(local_18);
        piVar5[1] = local_18;
        piVar5[2] = local_18;
        *(undefined2 *)(piVar5 + 3) = 0;

        local_20 = (int *)((int *)0x0);
        thunk_FUN_1033a470((undefined4)local_30,*(uint *)((char *)&local_30 + 4),piVar5);
      }
      param_2 = (int *)(param_2 + 3);
    } while ((int *)(param_2) != local_14);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10337030; body size 303 bytes.
#line 1 "ENTRY_10337030"

int * __thiscall Recovered_Bulk::FUN_10337030(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined1 local_3c [12];
  undefined8 local_30;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  iVar1 = (int)(*param_1);
  local_14 = (int *)(param_3);
  thunk_FUN_1032f400(param_1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = (int)(iVar1);
  *(int *)(iVar1 + 8) = iVar1;
  local_1c = (int)(*param_1);
  param_1[1] = 0;
  if ((int *)(param_2) != local_14) {
    do {
      puVar4 = (undefined8 *)((undefined8 *)thunk_FUN_1032f7a0(local_3c,local_1c,param_2));
      local_30 = (undefined8)(*puVar4);
      local_28 = (undefined4)(*(undefined4 *)(puVar4 + 1));
      if ((char)local_28 == '\0') {
        if (param_1[1] == 0x9249249) {
                    
          thunk_FUN_101d7220(uVar3);
        }
        local_18 = (int)(*param_1);

        local_20 = (int *)((int *)0x0);
        local_24 = (int *)(param_1);
        piVar5 = (int *)(operator_new(0x1c));
        piVar5[4] = *param_2;
        piVar5[5] = param_2[1];
        piVar2 = (int *)((int *)param_2[2]);

        piVar5[6] = (int)piVar2;
        if (piVar2 != (int *)0x0) {
          local_20 = (int *)(piVar5);
          (**(code **)(*piVar2 + 4))();
        }
        *piVar5 = (int)(local_18);
        piVar5[1] = local_18;
        piVar5[2] = local_18;
        *(undefined2 *)(piVar5 + 3) = 0;

        local_20 = (int *)((int *)0x0);
        thunk_FUN_1033a700((undefined4)local_30,*(uint *)((char *)&local_30 + 4),piVar5);
      }
      param_2 = (int *)(param_2 + 3);
    } while ((int *)(param_2) != local_14);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 103374d0; body size 188 bytes.
#line 1 "ENTRY_103374d0"

int __thiscall Recovered_Bulk::FUN_103374d0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_1032fab0(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
    if (param_1[1] == 0x9249249) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = *param_2;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_1033a700(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


// Reference entry 10337960; body size 116 bytes.
#line 1 "ENTRY_10337960"

int * __fastcall FUN_10337960(int *param_1)

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


// Reference entry 10337a00; body size 116 bytes.
#line 1 "ENTRY_10337a00"

int * __fastcall FUN_10337a00(int *param_1)

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


// Reference entry 10337f50; body size 122 bytes.
#line 1 "ENTRY_10337f50"

int __thiscall Recovered_Bulk::FUN_10337f50(byte param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10,uVar1);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10337ff0; body size 122 bytes.
#line 1 "ENTRY_10337ff0"

int __thiscall Recovered_Bulk::FUN_10337ff0(byte param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc,uVar1);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10338090; body size 98 bytes.
#line 1 "ENTRY_10338090"

int __thiscall Recovered_Bulk::FUN_10338090(byte param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc,uVar1);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 103381c0; body size 107 bytes.
#line 1 "ENTRY_103381c0"

int __thiscall Recovered_Bulk::FUN_103381c0(byte param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10338250; body size 107 bytes.
#line 1 "ENTRY_10338250"

int __thiscall Recovered_Bulk::FUN_10338250(byte param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10338450; body size 321 bytes.
#line 1 "ENTRY_10338450"

undefined4 * __thiscall Recovered_Bulk::FUN_10338450(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFoundProductManager);
  param_1[0x1c] = (uint)&ghidra_vftable_SCFoundProductManager;
  param_1[0x1d] = (uint)&ghidra_vftable_SCFoundProductManager;
  param_1[0x1e] = (uint)&ghidra_vftable_SCFoundProductManager;
  thunk_FUN_112a7f20(param_1 + 0x2b,uVar1);
  thunk_FUN_112a7f20(param_1 + 0x30);
  DAT_121a10c8 = (int)(0);
  thunk_FUN_103367d0();
  thunk_FUN_103367d0();
  thunk_FUN_1032f250(param_1 + 0x29,*(undefined4 *)(param_1[0x29] + 4));
  thunk_FUN_1148a50e(param_1[0x29],0x1c);
  thunk_FUN_1032f330(param_1 + 0x27,*(undefined4 *)(param_1[0x27] + 4));
  thunk_FUN_1148a50e(param_1[0x27],0x1c);
  thunk_FUN_1032f400(param_1 + 0x25,*(undefined4 *)(param_1[0x25] + 4));
  thunk_FUN_1148a50e(param_1[0x25],0x1c);

  param_1[0x1e] = (uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[0x1d] = (uint)&ghidra_vftable_SCLoggingHelper;
  param_1[0x1c] = (uint)&ghidra_vftable_RITQHandler;
  thunk_FUN_103d0880();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd8);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10338790; body size 129 bytes.
#line 1 "ENTRY_10338790"

void __thiscall Recovered_Bulk::FUN_10338790(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x20000000) {
    param_2 = (uint)(param_2 * 8);
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


// Reference entry 10338890; body size 136 bytes.
#line 1 "ENTRY_10338890"

void __thiscall Recovered_Bulk::FUN_10338890(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_1032e8b0(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0x30) * 0x30);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar2) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar2);
  }
  *param_1 = (int)(param_2);
  param_1[1] = param_3 * 0x30 + param_2;
  param_1[2] = param_4 * 0x30 + param_2;
  return;
}


// Reference entry 103389b0; body size 127 bytes.
#line 1 "ENTRY_103389b0"

undefined4 * __fastcall FUN_103389b0(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 10338a50; body size 127 bytes.
#line 1 "ENTRY_10338a50"

undefined4 * __fastcall FUN_10338a50(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 10338af0; body size 127 bytes.
#line 1 "ENTRY_10338af0"

undefined4 * __fastcall FUN_10338af0(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 10338b90; body size 127 bytes.
#line 1 "ENTRY_10338b90"

undefined4 * __fastcall FUN_10338b90(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 10338c30; body size 127 bytes.
#line 1 "ENTRY_10338c30"

undefined4 * __fastcall FUN_10338c30(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 10339200; body size 120 bytes.
#line 1 "ENTRY_10339200"

void __thiscall Recovered_Bulk::FUN_10339200(char param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x10,uVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 103393e0; body size 120 bytes.
#line 1 "ENTRY_103393e0"

void __thiscall Recovered_Bulk::FUN_103393e0(char param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0xc,uVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 103394a0; body size 96 bytes.
#line 1 "ENTRY_103394a0"

void __thiscall Recovered_Bulk::FUN_103394a0(char param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0xc,uVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 1033ab00; body size 79 bytes.
#line 1 "ENTRY_1033ab00"

void __thiscall Recovered_Bulk::FUN_1033ab00(int param_2)
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


// Reference entry 1033b120; body size 83 bytes.
#line 1 "ENTRY_1033b120"

void __thiscall Recovered_Bulk::FUN_1033b120(int *param_2)
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


// Reference entry 1033b4f0; body size 118 bytes.
#line 1 "ENTRY_1033b4f0"

void __fastcall FUN_1033b4f0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_1032e8b0(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0x30) * 0x30);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar2) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar2);
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 1033bef0; body size 90 bytes.
#line 1 "ENTRY_1033bef0"

void * FUN_1033bef0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x5555556) {
    param_1 = (uint)(param_1 * 0x30);
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


// Reference entry 1033bf70; body size 87 bytes.
#line 1 "ENTRY_1033bf70"

void * FUN_1033bf70(uint param_1)

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


// Reference entry 1033c100; body size 67 bytes.
#line 1 "ENTRY_1033c100"

void __fastcall FUN_1033c100(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = (int)(*param_1);
  cVar1 = (char)(*(char *)((int)*(int **)(iVar2 + 4) + 0xd));
  piVar4 = (int *)(*(int **)(iVar2 + 4));
  while (cVar1 == '\0') {
    thunk_FUN_1032f4d0(param_1,piVar4[2]);
    piVar3 = (int *)((int *)*piVar4);
    thunk_FUN_1148a50e(piVar4,0x20);
    piVar4 = (int *)(piVar3);
    cVar1 = (char)(*(char *)((int)piVar3 + 0xd));
  }
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = (int)(iVar2);
  *(int *)(iVar2 + 8) = iVar2;
  param_1[1] = 0;
  return;
}


// Reference entry 1033c180; body size 78 bytes.
#line 1 "ENTRY_1033c180"

uint __thiscall Recovered_Bulk::FUN_1033c180(undefined4 param_2,uint param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined1 local_c [8];
  int local_4;
  
  uVar1 = (uint)(thunk_FUN_1032fa50(local_c,&param_3));
  if (((*(char *)(local_4 + 0xd) == '\0') &&
      (uVar1 = param_3, *(int *)(local_4 + 0x10) <= (int)param_3)) &&
     (local_4 != *(int *)(param_1 + 0x9c))) {
    uVar1 = (uint)(thunk_FUN_10c674d0(param_2));
    return (uint)(uVar1);
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 1033c230; body size 450 bytes.
#line 1 "ENTRY_1033c230"

void FUN_1033c230(SCStr *param_1)

{
 try {
  int *piVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  SCStr *this_;
  uint uVar4;
  char *pcVar5;
  int *in_stack_0000002c;
  undefined1 auStack_9c [24];
  undefined4 uStack_84;
  undefined1 **ppuStack_80;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 *local_50;
  undefined1 local_4c [4];
  int local_48;
  int local_44;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  ((SCStr *)(param_1))->int_allocRep("Products:");
  local_50 = (undefined1 *)(auStack_9c);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  puVar2 = (undefined1 *)(auStack_9c);
  if (in_stack_0000002c != (int *)0x0) {
    (**(code **)*in_stack_0000002c)(auStack_9c);
    puVar2 = (undefined1 *)(local_50);
  }
  local_50 = (undefined1 *)(puVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  thunk_FUN_1033d2d0(local_4c);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  uVar3 = (undefined1)((undefined1)local_8);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_48 != local_44) {
    do {
      ((SCStr *)((SCStr *)&local_58))->int_allocRep("<hr>");
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      piVar1 = (int *)(*(int **)(local_48 + 0x14));
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      thunk_FUN_1034a4c0();
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      ppuStack_80 = (undefined1 **)(&local_50);

      this_ = (SCStr *)((SCStr *)thunk_FUN_101a2e90());
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      pcVar5 = (char *)("");
      if (*(char **)this_ != (char *)0x0) {
        pcVar5 = (char *)(*(char **)this_);
      }
      uVar4 = (uint)(((SCStr *)(this_))->length());
      ppuStack_80 = (undefined1 **)((undefined1 **)0x1033c33f);
      ((SCStr *)(param_1))->append(pcVar5,uVar4);
      *(unsigned char *)((char *)&local_8 + 0) = 8;
      ((SCStr *)((SCStr *)&local_50))->int_release();
      local_50 = (undefined1 *)((undefined1 *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      ((SCStr *)((SCStr *)&local_54))->int_release();

      *(unsigned char *)((char *)&local_8 + 0) = 10;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0xb;
      ((SCStr *)((SCStr *)&local_58))->int_release();

      *(unsigned char *)((char *)&local_8 + 0) = 3;
      thunk_FUN_105f2130();
      uVar3 = (undefined1)((undefined1)local_8);
    } while (local_48 != local_44);
  }
  *(unsigned char *)((char *)&local_8 + 0) = uVar3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 0x10))();
  }
  if (in_stack_0000002c != (int *)0x0) {
    (**(code **)(*in_stack_0000002c + 0x10))();
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 1033c720; body size 76 bytes.
#line 1 "ENTRY_1033c720"

uint __thiscall Recovered_Bulk::FUN_1033c720(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined1 local_c [8];
  int local_4;
  
  uVar1 = (uint)(thunk_FUN_1032fa50(local_c,&param_2));
  if (((*(char *)(local_4 + 0xd) == '\0') &&
      (uVar1 = param_2, *(int *)(local_4 + 0x10) <= (int)param_2)) &&
     (local_4 != *(int *)(param_1 + 0x9c))) {
    uVar1 = (uint)((**(code **)(**(int **)(local_4 + 0x14) + 0x14))());
    return (uint)(uVar1);
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 1033ca80; body size 80 bytes.
#line 1 "ENTRY_1033ca80"

void __thiscall Recovered_Bulk::FUN_1033ca80(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  thunk_FUN_103307f0(param_3 + 0x30,*(undefined4 *)(param_1 + 4),param_3);
  iVar2 = (int)(*(int *)(param_1 + 4));
  piVar1 = (int *)(*(int **)(iVar2 + -4));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(iVar2 + -0x28));
    *(undefined4 *)(iVar2 + -4) = 0;
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *(int *)(param_1 + 4) = iVar2 + -0x30;
  *param_2 = (int)(param_3);
  return;
}


// Reference entry 1033caf0; body size 69 bytes.
#line 1 "ENTRY_1033caf0"

void __thiscall Recovered_Bulk::FUN_1033caf0(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1032fa50(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 1033cb50; body size 319 bytes.
#line 1 "ENTRY_1033cb50"

void FUN_1033cb50(int *param_1)

{
 try {
  bool bVar1;
  bool bVar2;
  int **ppiVar3;
  int *piVar4;
  int *in_stack_0000002c;
  int local_90 [8];
  undefined4 uStack_70;
  uint local_6c;
  uint uStack_68;
  int *local_54;
  int *local_50;
  undefined1 local_4c [4];
  int local_48;
  int local_44;
  int local_3c [9];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uStack_68 = (uint)(DAT_12126b84);

  local_50 = (int *)(local_90);

  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  piVar4 = (int *)(local_90);
  local_14 = (uint)(uStack_68);
  if (in_stack_0000002c != (int *)0x0) {
    local_6c = (uint)((**(code **)*in_stack_0000002c)(local_90));
    piVar4 = (int *)(local_50);
  }
  local_50 = (int *)(piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  thunk_FUN_1033d2d0(local_4c);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (local_48 == local_44) {
    ppiVar3 = (int **)(&local_50);
    bVar2 = (bool)(false);
    bVar1 = (bool)(true);
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)(*(int **)(local_48 + 0x14));
    local_54 = (int *)(piVar4);
    if (piVar4 != (int *)0x0) {

      (**(code **)(*piVar4 + 4))();
    }
    ppiVar3 = (int **)(&local_54);
    bVar2 = (bool)(true);
    bVar1 = (bool)(false);
  }
  *ppiVar3 = (int *)((int *)0x0);
  *param_1 = (int)((int)piVar4);
  if (bVar1) {

    if (local_50 != (int *)0x0) {

      (**(code **)(*local_50 + 8))();
    }
  }

  if (bVar2) {

    if (local_54 != (int *)0x0) {

      (**(code **)(*local_54 + 8))();
    }
  }
  if (local_18 != (int *)0x0) {
    local_6c = (uint)((uint)(local_18 != (int *)(local_3c)));

    (**(code **)(*local_18 + 0x10))();
    local_18 = (int *)((int *)0x0);
  }
  if (in_stack_0000002c != (int *)0x0) {
    local_6c = (uint)((uint)(in_stack_0000002c != (int *)&stack0x00000008));

    (**(code **)(*in_stack_0000002c + 0x10))();
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 1033cd00; body size 97 bytes.
#line 1 "ENTRY_1033cd00"

int * __thiscall Recovered_Bulk::FUN_1033cd00(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1032fa50(local_c,&param_3);
  if (((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= param_3)) &&
     (local_4 != *(int *)(param_1 + 0x9c))) {
    piVar1 = (int *)(*(int **)(*(int *)(local_4 + 0x14) + 0x34));
    *param_2 = (int)((int)piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    return (int *)(param_2);
  }
  *param_2 = (int)(0);
  return (int *)(param_2);
}


// Reference entry 1033d2d0; body size 151 bytes.
#line 1 "ENTRY_1033d2d0"

undefined4 __thiscall Recovered_Bulk::FUN_1033d2d0(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int *in_stack_0000002c;
  undefined1 auStack_4c [32];
  undefined4 uStack_2c;
  uint local_28;
  uint uStack_24;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  uStack_24 = (uint)(DAT_12126b84);

  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  if (in_stack_0000002c != (int *)0x0) {
    local_28 = (uint)((**(code **)*in_stack_0000002c)(auStack_4c));
  }
  local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
  thunk_FUN_105ee270(param_1 + 0xa4);
  if (in_stack_0000002c != (int *)0x0) {
    local_28 = (uint)((uint)(in_stack_0000002c != (int *)&stack0x00000008));

    (**(code **)(*in_stack_0000002c + 0x10))();
  }

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 1033f4f0; body size 76 bytes.
#line 1 "ENTRY_1033f4f0"

uint __thiscall Recovered_Bulk::FUN_1033f4f0(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined1 local_c [8];
  int local_4;
  
  uVar1 = (uint)(thunk_FUN_1032fa50(local_c,&param_2));
  if (((*(char *)(local_4 + 0xd) == '\0') &&
      (uVar1 = param_2, *(int *)(local_4 + 0x10) <= (int)param_2)) &&
     (local_4 != *(int *)(param_1 + 0x9c))) {
    uVar1 = (uint)((**(code **)(**(int **)(local_4 + 0x14) + 0x18))());
    return (uint)(uVar1);
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 1033f940; body size 174 bytes.
#line 1 "ENTRY_1033f940"

void __thiscall Recovered_Bulk::FUN_1033f940(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined **local_4c;
  undefined4 local_48;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  undefined1 *puStack_2c;
  int *local_28;
  uint uStack_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_24 = (uint)(DAT_12126b84);

  local_28 = (int *)(&local_14);
  puStack_2c = (undefined1 *)((undefined1 *)0x1033f976);
  local_14 = (int)(param_1);
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1034de20());

  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*puVar1);
  }
  local_28 = (int *)((int *)0x1033f990);
  local_28 = (int *)((int *)thunk_FUN_1034cf80());
  pcStack_30 = (char *)("Product \"%s\" battery charge level changed to %i%%");
  iStack_38 = (int)(param_1 + 0x74);


  puStack_2c = (undefined1 *)(puVar2);
  thunk_FUN_103021f0();

  local_28 = (int *)((int *)0x1033f9b4);
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_28 = (int *)((int *)&local_4c);


  local_4c = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  local_48 = (undefined4)(param_2);
  thunk_FUN_10340690();

  return;

 } catch (...) { }
}


// Reference entry 1033fa20; body size 174 bytes.
#line 1 "ENTRY_1033fa20"

void __thiscall Recovered_Bulk::FUN_1033fa20(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined **local_4c;
  undefined4 local_48;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  undefined1 *puStack_2c;
  int *local_28;
  uint uStack_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_24 = (uint)(DAT_12126b84);

  local_28 = (int *)(&local_14);
  puStack_2c = (undefined1 *)((undefined1 *)0x1033fa56);
  local_14 = (int)(param_1);
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1034de20());

  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*puVar1);
  }
  local_28 = (int *)((int *)0x1033fa70);
  local_28 = (int *)((int *)thunk_FUN_1034cfa0());
  pcStack_30 = (char *)("Product \"%s\" battery charge state changed to %i%%");
  iStack_38 = (int)(param_1 + 0x74);


  puStack_2c = (undefined1 *)(puVar2);
  thunk_FUN_103021f0();

  local_28 = (int *)((int *)0x1033fa94);
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_28 = (int *)((int *)&local_4c);


  local_4c = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  local_48 = (undefined4)(param_2);
  thunk_FUN_10340690();

  return;

 } catch (...) { }
}


// Reference entry 1033fb00; body size 175 bytes.
#line 1 "ENTRY_1033fb00"

void __thiscall Recovered_Bulk::FUN_1033fb00(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined **local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  int *local_28;
  uint uStack_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_24 = (uint)(DAT_12126b84);

  local_28 = (int *)(&local_14);

  local_14 = (int)(param_1);
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1034de20());
  local_28 = (int *)((int *)param_4);
  uStack_2c = (undefined4)(param_3);
  puStack_30 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
    puStack_30 = (undefined1 *)((undefined1 *)*puVar1);
  }

  pcStack_34 = (char *)("Product \"%s\" responded with config info (%d, %d)");
  iStack_3c = (int)(param_1 + 0x74);


  thunk_FUN_103021f0();

  local_28 = (int *)((int *)0x1033fb72);
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_28 = (int *)((int *)&local_4c);


  local_4c = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  local_48 = (undefined4)(param_3);
  local_44 = (undefined4)(param_4);
  thunk_FUN_10340690();

  return;

 } catch (...) { }
}


// Reference entry 10340020; body size 224 bytes.
#line 1 "ENTRY_10340020"

void __thiscall Recovered_Bulk::FUN_10340020(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined **local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 *puStack_30;
  undefined4 *local_2c;
  uint uStack_28;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_28 = (uint)(DAT_12126b84);

  puStack_30 = (undefined4 *)(&local_18);
  local_2c = (undefined4 *)((undefined4 *)0x1);
  pcStack_34 = (char *)((char *)0x10340055);
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10c667b0());
  local_2c = (undefined4 *)(&local_14);

  puStack_30 = (undefined4 *)((undefined4 *)0x1034006f);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1034de20());
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  local_2c = (undefined4 *)((undefined4 *)&DAT_1186d2ee);
  if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
    local_2c = (undefined4 *)((undefined4 *)*puVar1);
  }
  puStack_30 = (undefined4 *)((undefined4 *)&DAT_1186d2ee);
  if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
    puStack_30 = (undefined4 *)((undefined4 *)*puVar2);
  }
  iStack_3c = (int)(param_1 + 0x74);
  pcStack_34 = (char *)("Product button press detected from \"%s\" over %s");


  thunk_FUN_103021f0();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  local_2c = (undefined4 *)((undefined4 *)0x103400a9);
  ((SCStr *)((SCStr *)&local_14))->int_release();


  local_2c = (undefined4 *)((undefined4 *)0x103400bf);
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_2c = (undefined4 *)(&local_50);


  local_50 = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  local_4c = (undefined4)(param_2);

  thunk_FUN_10340690();

  return;

 } catch (...) { }
}


// Reference entry 103407f0; body size 335 bytes.
#line 1 "ENTRY_103407f0"

void FUN_103407f0(void)

{
 try {
  int *piVar1;
  undefined1 *puVar2;
  undefined1 auStack_b0 [32];
  undefined4 uStack_90;
  undefined1 **local_8c;
  uint uStack_88;
  undefined4 local_7c;
  undefined1 *local_78;
  int local_74 [9];
  int *local_50;
  undefined1 local_4c [4];
  int local_48;
  int local_44;
  int local_3c [9];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_88 = (uint)(DAT_12126b84);

  local_14 = (uint)(uStack_88);
  thunk_FUN_105ee3e0(0x14,0x7fffffff);
  thunk_FUN_10224630();
  local_78 = (undefined1 *)(auStack_b0);
  local_8c = (undefined1 **)((undefined1 **)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  puVar2 = (undefined1 *)(auStack_b0);
  if (local_50 != (int *)0x0) {
    local_8c = (undefined1 **)((undefined1 **)(**(code **)*local_50)(auStack_b0));
    puVar2 = (undefined1 *)(local_78);
  }
  local_78 = (undefined1 *)(puVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  thunk_FUN_1033d2d0(local_4c);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (local_48 != local_44) {

    local_78 = (undefined1 *)((undefined1 *)0x10);
    do {
      piVar1 = (int *)(*(int **)(local_48 + 0x14));
      if (piVar1 != (int *)0x0) {
        local_8c = (undefined1 **)((undefined1 **)0x10340895);
        (**(code **)(*piVar1 + 4))();
      }
      local_8c = (undefined1 **)((undefined1 **)&local_7c);

      thunk_FUN_1033c870();
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      if (piVar1 != (int *)0x0) {
        local_8c = (undefined1 **)((undefined1 **)0x103408b0);
        (**(code **)(*piVar1 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      piVar1 = (int *)(*(int **)(local_48 + 0x14));
      if (piVar1 != (int *)0x0) {
        local_8c = (undefined1 **)((undefined1 **)0x103408c5);
        (**(code **)(*piVar1 + 4))();
      }
      local_8c = (undefined1 **)(&local_78);

      thunk_FUN_1033c870();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      if (piVar1 != (int *)0x0) {
        local_8c = (undefined1 **)((undefined1 **)0x103408e0);
        (**(code **)(*piVar1 + 8))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
      local_8c = (undefined1 **)((undefined1 **)0x103408ec);
      thunk_FUN_105f2130();
    } while (local_48 != local_44);
  }
  if (local_18 != (int *)0x0) {
    local_8c = (undefined1 **)((undefined1 **)(uint)(local_18 != (int *)(local_3c)));

    (**(code **)(*local_18 + 0x10))();
  }
  if (local_50 != (int *)0x0) {
    local_8c = (undefined1 **)((undefined1 **)(uint)(local_50 != (int *)(local_74)));

    (**(code **)(*local_50 + 0x10))();
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 103409a0; body size 189 bytes.
#line 1 "ENTRY_103409a0"

void __thiscall Recovered_Bulk::FUN_103409a0(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined **local_4c;
  undefined4 local_48;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  undefined1 *puStack_2c;
  int *local_28;
  uint uStack_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_24 = (uint)(DAT_12126b84);

  local_28 = (int *)(&local_14);
  puStack_2c = (undefined1 *)((undefined1 *)0x103409d6);
  local_14 = (int)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1034de20());

  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)((undefined1 *)*puVar2);
  }
  local_28 = (int *)((int *)0x103409f0);
  cVar1 = (char)(thunk_FUN_1034e3d0());
  local_28 = (int *)((int *)&DAT_11894d6c);
  iStack_38 = (int)(param_1 + 0x74);
  if (cVar1 == '\0') {
    local_28 = (int *)((int *)&DAT_11883704);
  }
  pcStack_30 = (char *)("Product \"%s\" network connection state changed to %s connection");


  puStack_2c = (undefined1 *)(puVar3);
  thunk_FUN_103021f0();

  local_28 = (int *)((int *)0x10340a23);
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_28 = (int *)((int *)&local_4c);


  local_4c = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  local_48 = (undefined4)(param_2);
  thunk_FUN_10340690();

  return;

 } catch (...) { }
}


// Reference entry 10340d10; body size 212 bytes.
#line 1 "ENTRY_10340d10"

void FUN_10340d10(void)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  uVar2 = (undefined4)(thunk_FUN_1033f120(&local_1c,0));

  uVar3 = (undefined4)(thunk_FUN_1033f120(&local_18,1));
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  uVar2 = (undefined4)(thunk_FUN_101a2e90(&local_14,uVar3,uVar2,uVar1));
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_10302330(4,uVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)((SCStr *)&local_18))->int_release();


  ((SCStr *)((SCStr *)&local_1c))->int_release();


  thunk_FUN_1059d5a0(60000);

  return;

 } catch (...) { }
}


// Reference entry 10340e50; body size 413 bytes.
#line 1 "ENTRY_10340e50"

undefined4 __stdcall FUN_10340e50(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 local_64 [64];
  int *local_24;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  piVar4 = (int *)((int *)thunk_FUN_103d4550(&local_1c,param_1,&DAT_121a12a8));
  piVar1 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  local_24 = (int *)(piVar1);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  local_20 = (int *)(piVar4);
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  uVar2 = (undefined1)((undefined1)local_8);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 == (int *)0x0) {
    *(unsigned char *)((char *)&local_8 + 0) = uVar2;
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("");
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("Cannot add a NULL product to the manager");
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    uVar5 = (undefined4)(thunk_FUN_103d3580(local_64,param_1,&local_14,&local_18));
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    uVar5 = (undefined4)(thunk_FUN_103d4f80(uVar5));
    thunk_FUN_102473e0();
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    ((SCStr *)((SCStr *)&local_14))->int_release();

    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xe)));
    ((SCStr *)((SCStr *)&local_18))->int_release();

  }
  else {
    thunk_FUN_1033b650(piVar1);
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("getProductData");
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("Product added successfully");
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    thunk_FUN_103d53c0(local_64,param_1,&local_14);
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    uVar5 = (undefined4)(thunk_FUN_103d2920(&local_18));
    uVar5 = (undefined4)(thunk_FUN_103d4f80(uVar5));
    thunk_FUN_102473e0();
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    ((SCStr *)((SCStr *)&local_14))->int_release();

    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    ((SCStr *)((SCStr *)&local_18))->int_release();
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4)(uVar5);

 } catch (...) { }
}


// Reference entry 10341540; body size 226 bytes.
#line 1 "ENTRY_10341540"

undefined4 __stdcall FUN_10341540(undefined4 param_1)

{
 try {
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_58 [64];
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = (int)(DAT_121a10c8);


  iVar1 = (int)(*(int *)(DAT_121a10c8 + 0xa4));
  thunk_FUN_1032f250((int *)(DAT_121a10c8 + 0xa4),*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = (int)(iVar1);
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined4 *)(iVar2 + 0xa8) = 0;
  ((SCStr *)(local_18))->int_allocRep("addToAllowlists");

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("Device data cleared");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  thunk_FUN_103d53c0(local_58,param_1,&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  uVar3 = (undefined4)(thunk_FUN_103d2920(local_18));
  uVar3 = (undefined4)(thunk_FUN_103d4f80(uVar3));
  thunk_FUN_102473e0();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)(local_18))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10341660; body size 384 bytes.
#line 1 "ENTRY_10341660"

undefined4 __stdcall FUN_10341660(undefined4 param_1)

{
 try {
  undefined4 uVar1;
  undefined4 uVar2;
  SCStr *pSVar3;
  undefined1 local_6c [64];
  SCStr local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)(local_2c))->int_allocRep("stop");

  ((SCStr *)((SCStr *)&local_18))->int_allocRep("start");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("\n\n");
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  uVar1 = (undefined4)(thunk_FUN_1033f120(&local_28,0));
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  uVar2 = (undefined4)(thunk_FUN_1033f120(&local_24,1));
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  uVar2 = (undefined4)(thunk_FUN_101a2e90(&local_20,uVar2,&local_14));
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  uVar1 = (undefined4)(thunk_FUN_101a2e90(&local_1c,uVar2,uVar1));
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  thunk_FUN_103d53c0(local_6c,param_1,uVar1);
  pSVar3 = (SCStr *)(local_2c);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  thunk_FUN_103d2920(&local_18);
  uVar1 = (undefined4)(thunk_FUN_103d2920(pSVar3));
  uVar1 = (undefined4)(thunk_FUN_103d4f80(uVar1));
  thunk_FUN_102473e0();
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_20))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((SCStr *)((SCStr *)&local_24))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)((SCStr *)&local_28))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
  ((SCStr *)((SCStr *)&local_18))->int_release();


  ((SCStr *)(local_2c))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10342840; body size 301 bytes.
#line 1 "ENTRY_10342840"

undefined4 __stdcall FUN_10342840(undefined4 param_1)

{
 try {
  char cVar1;
  undefined4 uVar2;
  undefined1 local_64 [64];
  undefined4 local_24;
  SCStr local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  cVar1 = (char)(thunk_FUN_103d4080(param_1,&DAT_121a12b8,1));
  local_24 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_24 + 1)) << 8 | (uint)(cVar1)));
  if (cVar1 == '\0') {
    uVar2 = (undefined4)(3);
  }
  else {
    uVar2 = (undefined4)(2);
  }
  thunk_FUN_1033ea60(0x1f,uVar2);
  ((SCStr *)(local_20))->int_allocRep("start");

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("Scans stopped. \n");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  uVar2 = (undefined4)(thunk_FUN_1033f120(&local_1c,local_24));
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  uVar2 = (undefined4)(thunk_FUN_101a2e90(&local_18,&local_14,uVar2));
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  thunk_FUN_103d53c0(local_64,param_1,uVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  uVar2 = (undefined4)(thunk_FUN_103d2920(local_20));
  uVar2 = (undefined4)(thunk_FUN_103d4f80(uVar2));
  thunk_FUN_102473e0();
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)((SCStr *)&local_18))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)(local_20))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 10342a00; body size 123 bytes.
#line 1 "ENTRY_10342a00"

undefined4 __stdcall FUN_10342a00(int *param_1)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (param_1 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar1 + 4))();

    thunk_FUN_1033b650(param_1);

    (**(code **)(*piVar1 + 8))();
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10342b80; body size 139 bytes.
#line 1 "ENTRY_10342b80"

void __thiscall Recovered_Bulk::FUN_10342b80(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    puVar1[0xb] = 0;

    if ((undefined4 *)param_2[0xb] != (undefined4 *)0x0) {
      uVar3 = (undefined4)((*(code *)**(undefined4 **)param_2[0xb])(puVar1 + 2,uVar2));
      puVar1[0xb] = uVar3;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x30;

    return;
  }
  thunk_FUN_1032ee10(puVar1,param_2);

  return;

 } catch (...) { }
}


// Reference entry 10342f80; body size 69 bytes.
#line 1 "ENTRY_10342f80"

void __thiscall Recovered_Bulk::FUN_10342f80(int param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1032fa50(local_c,&param_2);
  if (((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= param_2)) &&
     (local_4 != *(int *)(param_1 + 0x9c))) {
    (**(code **)(**(int **)(local_4 + 0x14) + 0x2c))(param_3);
  }
  return;
}


// Reference entry 10342fe0; body size 156 bytes.
#line 1 "ENTRY_10342fe0"

void FUN_10342fe0(void)

{
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)((int *)thunk_FUN_1033f090(&local_14,4));
  piVar2 = (int *)((int *)*piVar2);
  piVar3 = (int *)((int *)0x0);

  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(uVar1));
    (**(code **)(*piVar3 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar2 != (int *)0x0) {
    thunk_FUN_10c70440();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 103431e0; body size 156 bytes.
#line 1 "ENTRY_103431e0"

void FUN_103431e0(void)

{
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)((int *)thunk_FUN_1033f090(&local_14,4));
  piVar2 = (int *)((int *)*piVar2);
  piVar3 = (int *)((int *)0x0);

  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(uVar1));
    (**(code **)(*piVar3 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar2 != (int *)0x0) {
    thunk_FUN_10c70450();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10343420; body size 93 bytes.
#line 1 "ENTRY_10343420"

undefined4 * __thiscall Recovered_Bulk::FUN_10343420(undefined4 *param_2,int param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1032fa50(local_c,&param_3);
  if (((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= param_3)) &&
     (local_4 != *(int *)(param_1 + 0x9c))) {
    (**(code **)(**(int **)(local_4 + 0x14) + 0x30))(param_2,param_4);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 10343fa0; body size 220 bytes.
#line 1 "ENTRY_10343fa0"

int * __thiscall Recovered_Bulk::FUN_10343fa0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
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


  *param_1 = (int)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x20));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_103443d0(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
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

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 103441a0; body size 109 bytes.
#line 1 "ENTRY_103441a0"

void __thiscall Recovered_Bulk::FUN_103441a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (undefined4)(*param_1);

  puVar5 = (undefined4 *)(operator_new(0x20));
  uVar2 = (undefined4)(param_2[1]);
  uVar3 = (undefined4)(param_2[2]);
  uVar4 = (undefined4)(param_2[3]);
  puVar5[4] = *param_2;
  puVar5[5] = uVar2;
  puVar5[6] = uVar3;
  puVar5[7] = uVar4;
  *puVar5 = (undefined4)(uVar1);
  puVar5[1] = uVar1;
  puVar5[2] = uVar1;
  *(undefined2 *)(puVar5 + 3) = 0;

  return;

 } catch (...) { }
}


// Reference entry 10344230; body size 109 bytes.
#line 1 "ENTRY_10344230"

void FUN_10344230(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
 try {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  puVar4 = (undefined4 *)(operator_new(0x20));
  uVar1 = (undefined4)(param_3[1]);
  uVar2 = (undefined4)(param_3[2]);
  uVar3 = (undefined4)(param_3[3]);
  puVar4[4] = *param_3;
  puVar4[5] = uVar1;
  puVar4[6] = uVar2;
  puVar4[7] = uVar3;
  *puVar4 = (undefined4)(param_2);
  puVar4[1] = param_2;
  puVar4[2] = param_2;
  *(undefined2 *)(puVar4 + 3) = 0;

  return;

 } catch (...) { }
}


// Reference entry 103443d0; body size 206 bytes.
#line 1 "ENTRY_103443d0"

int * __thiscall Recovered_Bulk::FUN_103443d0(undefined4 *param_2,int param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  piVar5 = (int *)((int *)*param_1);
  if (*(char *)((int)param_2 + 0xd) == '\0') {

    piVar3 = (int *)(operator_new(0x20));

    iVar4 = (int)(param_2[5]);
    iVar1 = (int)(param_2[6]);
    iVar2 = (int)(param_2[7]);
    piVar3[4] = param_2[4];
    piVar3[5] = iVar4;
    piVar3[6] = iVar1;
    piVar3[7] = iVar2;
    *piVar3 = (int)((int)piVar5);
    piVar3[2] = (int)piVar5;
    *(undefined2 *)(piVar3 + 3) = 0;
    piVar3[1] = param_3;
    *(undefined1 *)(piVar3 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((int)piVar5 + 0xd) != '\0') {
      piVar5 = (int *)(piVar3);
    }
    iVar4 = (int)(thunk_FUN_103443d0(*param_2,piVar3,param_4));
    *piVar3 = (int)(iVar4);
    iVar4 = (int)(thunk_FUN_103443d0(param_2[2],piVar3,param_4));
    piVar3[2] = iVar4;
  }

  return (int *)(piVar5);

 } catch (...) { }
}


// Reference entry 10344500; body size 109 bytes.
#line 1 "ENTRY_10344500"

void __thiscall Recovered_Bulk::FUN_10344500(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (undefined4)(*param_1);

  puVar5 = (undefined4 *)(operator_new(0x20));
  uVar2 = (undefined4)(param_2[1]);
  uVar3 = (undefined4)(param_2[2]);
  uVar4 = (undefined4)(param_2[3]);
  puVar5[4] = *param_2;
  puVar5[5] = uVar2;
  puVar5[6] = uVar3;
  puVar5[7] = uVar4;
  *puVar5 = (undefined4)(uVar1);
  puVar5[1] = uVar1;
  puVar5[2] = uVar1;
  *(undefined2 *)(puVar5 + 3) = 0;

  return;

 } catch (...) { }
}


// Reference entry 10344600; body size 342 bytes.
#line 1 "ENTRY_10344600"

undefined4 * __thiscall Recovered_Bulk::FUN_10344600(void *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  
  iVar3 = (int)(*param_1);
  iVar4 = (int)(param_1[1] - iVar3 >> 2);
  if (iVar4 == 0x3fffffff) {
                    
    thunk_FUN_103486b0();
  }
  uVar6 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar6 >> 1) < uVar6) {
LAB_1034474c:
                    
    thunk_FUN_1012a2a0();
  }
  uVar6 = (uint)((uVar6 >> 1) + uVar6);
  uVar7 = (uint)(uVar1);
  if (uVar1 <= uVar6) {
    uVar7 = (uint)(uVar6);
  }
  if (0x3fffffff < uVar7) goto LAB_1034474c;
  uVar7 = (uint)(uVar7 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_1034474c;
    pvVar5 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar5 == (void *)0x0) goto LAB_10344746;
    _Dst = (void *)((void *)((int)pvVar5 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar5;
  }
  puVar2 = (undefined4 *)((undefined4 *)((int)_Dst + ((int)param_2 - iVar3 >> 2) * 4));
  *puVar2 = (undefined4)(*param_3);
  pvVar5 = (void *)((void *)*param_1);
  if (param_2 == (void *)param_1[1]) {
    memmove(_Dst,pvVar5,param_1[1] - (int)pvVar5);
  }
  else {
    memmove(_Dst,pvVar5,(int)param_2 - (int)pvVar5);
    memmove(puVar2 + 1,param_2,param_1[1] - (int)param_2);
  }
  iVar3 = (int)(*param_1);
  if (iVar3 != 0) {
    uVar6 = (uint)(param_1[2] - iVar3 & 0xfffffffc);
    iVar4 = (int)(iVar3);
    if (0xfff < uVar6) {
      iVar4 = (int)(*(int *)(iVar3 + -4));
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (iVar3 - iVar4) - 4U) {
LAB_10344746:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)_Dst + uVar1 * 4);
  param_1[2] = (int)(uVar7 + (int)_Dst);
  return (undefined4 *)(puVar2);
}


// Reference entry 103447b0; body size 71 bytes.
#line 1 "ENTRY_103447b0"

void __thiscall Recovered_Bulk::FUN_103447b0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4));
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      thunk_FUN_1032f4d0(param_2,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x20);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x20);
  return;
}


// Reference entry 10344960; body size 73 bytes.
#line 1 "ENTRY_10344960"

int * __thiscall Recovered_Bulk::FUN_10344960(int *param_2,int *param_3)
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


// Reference entry 10344a10; body size 130 bytes.
#line 1 "ENTRY_10344a10"

void FUN_10344a10(undefined4 param_1,undefined4 *param_2)

{
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  *(undefined4 *)param_2[1] = 0;
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);

    ((SCStr *)((SCStr *)(puVar2 + 3)))->int_release();
    puVar2[3] = 0;

    thunk_FUN_1148a50e(puVar2,0x10,uVar3);
    puVar2 = (undefined4 *)(puVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 10344ae0; body size 89 bytes.
#line 1 "ENTRY_10344ae0"

void FUN_10344ae0(undefined4 param_1,int param_2)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_2 + 0xc)))->int_release();
  *(undefined4 *)(param_2 + 0xc) = 0;
  thunk_FUN_1148a50e(param_2,0x10,uVar1);

  return;

 } catch (...) { }
}


// Reference entry 10344c20; body size 221 bytes.
#line 1 "ENTRY_10344c20"

int * __thiscall Recovered_Bulk::FUN_10344c20(int *param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_10344960(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;

    return (int *)(param_2);
  }
  if (param_1[1] != 0x7ffffff) {
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x20));
    puVar3[4] = *param_3;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_10347dd0(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 10344ec0; body size 76 bytes.
#line 1 "ENTRY_10344ec0"

void FUN_10344ec0(undefined4 param_1,int param_2)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ((SCStr *)((SCStr *)(param_2 + 4)))->int_release();
  *(undefined4 *)(param_2 + 4) = 0;

  return;

 } catch (...) { }
}


// Reference entry 10345240; body size 95 bytes.
#line 1 "ENTRY_10345240"

void FUN_10345240(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 103452c0; body size 99 bytes.
#line 1 "ENTRY_103452c0"

void __thiscall Recovered_Bulk::FUN_103452c0(int *param_2,byte *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_103448e0(local_8,param_3,
                             ((((*param_3 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_3[1]) * 0x1000193
                              ^ (uint)param_3[2]) * 0x1000193 ^ (uint)param_3[3]) * 0x1000193));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar1);
  return;
}


// Reference entry 10345e10; body size 220 bytes.
#line 1 "ENTRY_10345e10"

int * __thiscall Recovered_Bulk::FUN_10345e10(int *param_2)
{
  int *param_1 = (int *)this;
 try {
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


  *param_1 = (int)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x20));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_103443d0(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
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

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 103469a0; body size 74 bytes.
#line 1 "ENTRY_103469a0"

void __fastcall FUN_103469a0(int param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;

  return;

 } catch (...) { }
}


// Reference entry 10346a50; body size 99 bytes.
#line 1 "ENTRY_10346a50"

void __fastcall FUN_10346a50(int param_1)

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
  thunk_FUN_10344a10(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x10);
  return;
}


// Reference entry 10346ad0; body size 77 bytes.
#line 1 "ENTRY_10346ad0"

void __fastcall FUN_10346ad0(int *param_1)

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


// Reference entry 10346c80; body size 74 bytes.
#line 1 "ENTRY_10346c80"

void __fastcall FUN_10346c80(int param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;

  return;

 } catch (...) { }
}


// Reference entry 10346d00; body size 81 bytes.
#line 1 "ENTRY_10346d00"

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

void __fastcall FID_conflict__Tidy_10346d00(int *param_1)

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


// Reference entry 10346d70; body size 265 bytes.
#line 1 "ENTRY_10346d70"

void __fastcall FUN_10346d70(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ((SCStr *)((SCStr *)(param_1 + 0x16)))->int_release();
  param_1[0x16] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x14)))->int_release();
  param_1[0x14] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x12)))->int_release();
  param_1[0x12] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x10)))->int_release();
  param_1[0x10] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0xe)))->int_release();
  param_1[0xe] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  param_1[0xc] = 0;

  ((SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = 0;
  thunk_FUN_103447b0(param_1 + 6);

  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCLoggingHelper;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10347240; body size 188 bytes.
#line 1 "ENTRY_10347240"

int __thiscall Recovered_Bulk::FUN_10347240(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_10344960(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
    if (param_1[1] == 0x7ffffff) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x20));
    puVar3[4] = *param_2;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_10347dd0(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x18);

 } catch (...) { }
}


// Reference entry 10347520; body size 98 bytes.
#line 1 "ENTRY_10347520"

int __thiscall Recovered_Bulk::FUN_10347520(byte param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8,uVar1);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10347780; body size 103 bytes.
#line 1 "ENTRY_10347780"

void __fastcall FUN_10347780(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[2]);
  param_1[2] = *piVar1;

  ((SCStr *)((SCStr *)(piVar1 + 3)))->int_release();
  piVar1[3] = 0;
  thunk_FUN_1148a50e(piVar1,0x10,uVar2);
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;

  return;

 } catch (...) { }
}


// Reference entry 10347850; body size 89 bytes.
#line 1 "ENTRY_10347850"

void __thiscall Recovered_Bulk::FUN_10347850(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
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
  }
  *param_1 = (int)(param_2);
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}


// Reference entry 10347970; body size 136 bytes.
#line 1 "ENTRY_10347970"

float __thiscall Recovered_Bulk::FUN_10347970(int param_2)
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


// Reference entry 10348090; body size 87 bytes.
#line 1 "ENTRY_10348090"

void __thiscall Recovered_Bulk::FUN_10348090(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 10348120; body size 133 bytes.
#line 1 "ENTRY_10348120"

void __fastcall FUN_10348120(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10347a90();
  return;
}


// Reference entry 10348210; body size 77 bytes.
#line 1 "ENTRY_10348210"

void __fastcall FUN_10348210(int *param_1)

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


// Reference entry 103482a0; body size 81 bytes.
#line 1 "ENTRY_103482a0"

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

void __fastcall FID_conflict__Tidy_103482a0(int *param_1)

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


// Reference entry 103486c0; body size 95 bytes.
#line 1 "ENTRY_103486c0"

void FUN_103486c0(void)

{
 try {
  longlong *plVar1;
  int local_8;
  int local_4;
  
  thunk_FUN_1145c930(&local_8,0);
  plVar1 = (longlong *)((longlong *)thunk_FUN_10347240(&stack0x00000004));
  *plVar1 = (longlong)((longlong)local_8 * 1000 + (longlong)(local_4 / 1000));
  return;

 } catch (...) { }
}


// Reference entry 10348740; body size 73 bytes.
#line 1 "ENTRY_10348740"

longlong __fastcall FUN_10348740(int param_1)

{
  uint uVar1;
  int local_8;
  int local_4;
  
  thunk_FUN_1145c930(&local_8,0);
  uVar1 = (uint)(local_4 / 1000);
  return (longlong)((longlong)local_8 * 1000 +
         ((unsigned long long)((((int)uVar1 >> 0x1f) - *(int *)(param_1 + 0x14)) -
                  (uint)(uVar1 < *(uint *)(param_1 + 0x10))) << 32 | (unsigned long long)(uVar1 - *(uint *)(param_1 + 0x10))));
}


// Reference entry 10349090; body size 79 bytes.
#line 1 "ENTRY_10349090"

void __fastcall FUN_10349090(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x78) != '\0') {
    thunk_FUN_105c0190(*(undefined4 *)(param_1 + 0x7c));
    return;
  }
  if ((*(char *)(param_1 + 0x80) != '\0') && (*(char *)(param_1 + 0x88) != '\0')) {
    uVar1 = (undefined4)(thunk_FUN_114568e0(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x8c)));
    thunk_FUN_105c0190(uVar1);
    return;
  }
  thunk_FUN_105c0190(0);
  return;
}


// Reference entry 1034cf20; body size 69 bytes.
#line 1 "ENTRY_1034cf20"

void __thiscall Recovered_Bulk::FUN_1034cf20(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10344960(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 1034d250; body size 91 bytes.
#line 1 "ENTRY_1034d250"

undefined4 __thiscall Recovered_Bulk::FUN_1034d250(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  undefined1 local_8 [8];
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    if ((*(char *)(param_1 + 0x80) == '\0') || (*(char *)(param_1 + 0x88) == '\0')) {
      uVar1 = (undefined4)(0);
    }
    else {
      uVar1 = (undefined4)(thunk_FUN_114568e0(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x8c)));
    }
  }
  else {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x7c));
  }
  thunk_FUN_10c5f430(uVar1,0);
  thunk_FUN_10c62180(param_2,local_8);
  return (undefined4)(param_2);
}


// Reference entry 1034d590; body size 235 bytes.
#line 1 "ENTRY_1034d590"

undefined8 __thiscall Recovered_Bulk::FUN_1034d590(uint param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 local_c;
  int *local_4;
  
  uVar8 = (uint)(0);
  piVar2 = (int *)(*(int **)(param_1 + 0x18));
  local_c = (undefined8)(0);
  piVar6 = (int *)((int *)*piVar2);
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    *(uint *)((char *)&local_c + 4) = 0;
    *(uint *)((char *)&local_c + 0) = 0;
    iVar7 = (int)(*(uint *)((char *)&local_c + 4));
    uVar9 = (uint)((uint)local_c);
    do {
      if ((param_2 & piVar6[4]) != 0) {
        iVar3 = (int)(piVar6[7]);
        if ((iVar7 <= iVar3) && ((iVar7 < iVar3 || (uVar9 < (uint)piVar6[6])))) {
          iVar7 = (int)(iVar3);
          uVar8 = (uint)(piVar6[4]);
          uVar9 = (uint)(piVar6[6]);
        }
      }
      piVar4 = (int *)((int *)piVar6[2]);
      if (*(char *)((int)piVar4 + 0xd) == '\0') {
        cVar1 = (char)(*(char *)(*piVar4 + 0xd));
        piVar6 = (int *)(piVar4);
        piVar4 = (int *)((int *)*piVar4);
        while (cVar1 == '\0') {
          cVar1 = (char)(*(char *)(*piVar4 + 0xd));
          piVar6 = (int *)(piVar4);
          piVar4 = (int *)((int *)*piVar4);
        }
      }
      else {
        cVar1 = (char)(*(char *)(piVar6[1] + 0xd));
        piVar5 = (int *)((int *)piVar6[1]);
        piVar4 = (int *)(piVar6);
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar4 == (int *)piVar6[2]))) {
          cVar1 = (char)(*(char *)(piVar6[1] + 0xd));
          piVar5 = (int *)((int *)piVar6[1]);
          piVar4 = (int *)(piVar6);
        }
      }
    } while (*(char *)((int)piVar6 + 0xd) == '\0');
  }
  param_2 = (uint)(uVar8);
  thunk_FUN_10344960(&local_c,&param_2);
  if ((*(char *)((int)local_4 + 0xd) != '\0') || ((int)uVar8 < local_4[4])) {
    local_4 = (int *)(*(int **)(param_1 + 0x18));
  }
  if ((int *)(local_4) != piVar2) {
    return (undefined8)(*(undefined8 *)(local_4 + 6));
  }
  return (undefined8)(0);
}


// Reference entry 1034d6c0; body size 145 bytes.
#line 1 "ENTRY_1034d6c0"

uint __thiscall Recovered_Bulk::FUN_1034d6c0(uint param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint local_8;
  int iStack_4;
  
  uVar6 = (uint)(0);
  piVar5 = (int *)((int *)**(int **)(param_1 + 0x18));
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    iStack_4 = (int)(0);
    local_8 = (uint)(0);
    do {
      if ((param_2 & piVar5[4]) != 0) {
        iVar2 = (int)(piVar5[7]);
        if ((iStack_4 <= iVar2) && ((iStack_4 < iVar2 || (local_8 < (uint)piVar5[6])))) {
          uVar6 = (uint)(piVar5[4]);
          iStack_4 = (int)(iVar2);
          local_8 = (uint)(piVar5[6]);
        }
      }
      piVar3 = (int *)((int *)piVar5[2]);
      if (*(char *)((int)piVar3 + 0xd) == '\0') {
        cVar1 = (char)(*(char *)(*piVar3 + 0xd));
        piVar5 = (int *)(piVar3);
        piVar3 = (int *)((int *)*piVar3);
        while (cVar1 == '\0') {
          cVar1 = (char)(*(char *)(*piVar3 + 0xd));
          piVar5 = (int *)(piVar3);
          piVar3 = (int *)((int *)*piVar3);
        }
      }
      else {
        cVar1 = (char)(*(char *)(piVar5[1] + 0xd));
        piVar4 = (int *)((int *)piVar5[1]);
        piVar3 = (int *)(piVar5);
        while ((piVar5 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
          cVar1 = (char)(*(char *)(piVar5[1] + 0xd));
          piVar4 = (int *)((int *)piVar5[1]);
          piVar3 = (int *)(piVar5);
        }
      }
    } while (*(char *)((int)piVar5 + 0xd) == '\0');
  }
  return (uint)(uVar6);
}


// Reference entry 1034d9a0; body size 108 bytes.
#line 1 "ENTRY_1034d9a0"

longlong FUN_1034d9a0(undefined4 param_1)

{
  longlong lVar1;
  int local_8;
  int local_4;
  
  lVar1 = (longlong)(thunk_FUN_1034d590(param_1));
  if (lVar1 == 0) {
    return (longlong)(0x7fffffffffffffff);
  }
  thunk_FUN_1145c930(&local_8,0);
  return (longlong)(((longlong)local_8 * 1000 + (longlong)(local_4 / 1000)) - lVar1);
}


// Reference entry 1034dcf0; body size 238 bytes.
#line 1 "ENTRY_1034dcf0"

undefined4 __thiscall Recovered_Bulk::FUN_1034dcf0(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar3 = (int *)((int *)thunk_FUN_1037a2b0(&local_18,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  pcVar2 = (char *)(*(char **)(param_1 + 0xc));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("");
  }
  else {
    ((SCStr *)((char *)&local_14))->stringWithFormat("RINCON_%s01400",pcVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x1b8))(param_2,&local_14);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 1034de40; body size 258 bytes.
#line 1 "ENTRY_1034de40"

undefined4 * __thiscall Recovered_Bulk::FUN_1034de40(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);
  if (((*(char *)(param_1 + 0xe0) != '\0') && (*(char *)(param_1 + 0xe8) != '\0')) &&
     (*(char *)(param_1 + 0xf0) != '\0')) {

    piVar5 = (int *)(operator_new(0x1c));
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0xf4));
      uVar2 = (undefined4)(*(undefined4 *)(param_1 + 0xec));
      uVar3 = (undefined4)(*(undefined4 *)(param_1 + 0xe4));
      *piVar5 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar5[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      *(unsigned short *)((char *)&local_8 + 1) = 0;
      *piVar5 = (int)((int)(uint)&ghidra_vftable_SCVersion);
      ((SCStr *)((SCStr *)(piVar5 + 6)))->int_allocRep("");
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
      thunk_FUN_101b8f90(uVar3,uVar2,uVar1);
    }

    *param_2 = (undefined4)(piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(uVar4);
    }

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1034e2f0; body size 79 bytes.
#line 1 "ENTRY_1034e2f0"

void __fastcall FUN_1034e2f0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x78) != '\0') {
    thunk_FUN_11457d40(*(undefined4 *)(param_1 + 0x7c));
    return;
  }
  if ((*(char *)(param_1 + 0x80) != '\0') && (*(char *)(param_1 + 0x88) != '\0')) {
    uVar1 = (undefined4)(thunk_FUN_114568e0(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x8c)));
    thunk_FUN_11457d40(uVar1);
    return;
  }
  thunk_FUN_11457d40(0);
  return;
}


// Reference entry 1034e4a0; body size 101 bytes.
#line 1 "ENTRY_1034e4a0"

bool __thiscall Recovered_Bulk::FUN_1034e4a0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)thunk_FUN_1033cd00(&param_2,param_2));
  iVar1 = (int)(*piVar3);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(uVar2);
  }

  return (bool)(iVar1 == param_1);

 } catch (...) { }
}


// Reference entry 1034e8c0; body size 315 bytes.
#line 1 "ENTRY_1034e8c0"

void __thiscall Recovered_Bulk::FUN_1034e8c0(undefined4 param_2,undefined4 param_3,undefined1 *param_4)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 local_20 [8];
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if (*(char *)(param_1 + 0x78) == '\0') {
    if ((*(char *)(param_1 + 0x80) == '\0') || (*(char *)(param_1 + 0x88) == '\0')) {
      uVar1 = (undefined4)(0);
    }
    else {
      uVar1 = (undefined4)(thunk_FUN_114568e0(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x8c),
                                 DAT_12126b84 ));
    }
  }
  else {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x7c));
  }
  thunk_FUN_10c5f430(uVar1,0);
  thunk_FUN_10c62180(&local_18,local_20);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (*(char *)(param_1 + 0x90) == '\0') {
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("No color provided");
  }
  else {
    thunk_FUN_10c61e30(&local_14,*(undefined4 *)(param_1 + 0x94));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0xc) != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(*(undefined1 **)(param_1 + 0xc));
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if (local_18 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(local_18);
  }
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(local_14);
  }
  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if (param_4 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)(param_4);
  }
  thunk_FUN_10302280(param_1 + 8,"%s changed \'%d\' -> \'%d\'. (%s %s : %s)",puVar5,param_2,param_3,
                     puVar2,puVar3,puVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined1 *)((undefined1 *)0x0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)((SCStr *)&local_18))->int_release();

  ((SCStr *)((SCStr *)&param_4))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1034ebe0; body size 103 bytes.
#line 1 "ENTRY_1034ebe0"

undefined4 * __thiscall Recovered_Bulk::FUN_1034ebe0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1034fbd0; body size 107 bytes.
#line 1 "ENTRY_1034fbd0"

undefined4 * __thiscall Recovered_Bulk::FUN_1034fbd0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10350870; body size 91 bytes.
#line 1 "ENTRY_10350870"

int * __thiscall Recovered_Bulk::FUN_10350870(int *param_2)
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


// Reference entry 10350910; body size 171 bytes.
#line 1 "ENTRY_10350910"

int * __thiscall Recovered_Bulk::FUN_10350910(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  puVar1 = (undefined4 *)((undefined4 *)*param_2);
  if (puVar1 != (undefined4 *)0x0) {
    local_14 = (int *)(param_1);
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIPortableDevice");

    piVar4 = (int *)((int *)(**(code **)*puVar1)(&local_14,&param_2,uVar3));
    iVar2 = (int)(*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)((int *)*param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(iVar2);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 103509f0; body size 169 bytes.
#line 1 "ENTRY_103509f0"

int * __thiscall Recovered_Bulk::FUN_103509f0(undefined4 *param_2)
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


// Reference entry 10350b70; body size 91 bytes.
#line 1 "ENTRY_10350b70"

int * __thiscall Recovered_Bulk::FUN_10350b70(int *param_2)
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


// Reference entry 10350bf0; body size 171 bytes.
#line 1 "ENTRY_10350bf0"

int * __thiscall Recovered_Bulk::FUN_10350bf0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  puVar1 = (undefined4 *)((undefined4 *)*param_2);
  if (puVar1 != (undefined4 *)0x0) {
    local_14 = (int *)(param_1);
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCINowPlayingTransport");

    piVar4 = (int *)((int *)(**(code **)*puVar1)(&local_14,&param_2,uVar3));
    iVar2 = (int)(*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)((int *)*param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(iVar2);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10350cd0; body size 248 bytes.
#line 1 "ENTRY_10350cd0"

int * __thiscall Recovered_Bulk::FUN_10350cd0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  piVar4 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2));
  }

  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)*param_1);
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(0);
  }
  else {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCISearchable");
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    piVar4 = (int *)((int *)(**(code **)*piVar4)(&local_14,&param_2));
    iVar1 = (int)(*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)((int *)*param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(iVar1);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10350e30; body size 248 bytes.
#line 1 "ENTRY_10350e30"

int * __thiscall Recovered_Bulk::FUN_10350e30(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  piVar4 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2));
  }

  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)*param_1);
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(0);
  }
  else {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCITimeZone");
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    piVar4 = (int *)((int *)(**(code **)*piVar4)(&local_14,&param_2));
    iVar1 = (int)(*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)((int *)*param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(iVar1);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10351370; body size 91 bytes.
#line 1 "ENTRY_10351370"

int * __thiscall Recovered_Bulk::FUN_10351370(int *param_2)
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


// Reference entry 103522f0; body size 78 bytes.
#line 1 "ENTRY_103522f0"

int * __thiscall Recovered_Bulk::FUN_103522f0(int *param_2)
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
    return (int *)(param_1);
  }
  param_1[1] = 0;
  return (int *)(param_1);
}


// Reference entry 103524c0; body size 119 bytes.
#line 1 "ENTRY_103524c0"

void __fastcall FUN_103524c0(int *param_1)

{
 try {
  undefined4 *puVar1;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar1 = (undefined4 *)((undefined4 *)
           thunk_FUN_10c944f0(&local_14,*param_1,DAT_12126b84 ));

  thunk_FUN_107cc5b0(*puVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  thunk_FUN_107cc370(7);

  return;

 } catch (...) { }
}


// Reference entry 103526c0; body size 124 bytes.
#line 1 "ENTRY_103526c0"

void FUN_103526c0(undefined4 *param_1,int *param_2)

{
 try {
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10c944f0(&param_2,*param_1,DAT_12126b84 ));

  thunk_FUN_107cc5b0(*puVar1);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }

  thunk_FUN_107cc370(7);

  return;

 } catch (...) { }
}


// Reference entry 10352a90; body size 111 bytes.
#line 1 "ENTRY_10352a90"

void FUN_10352a90(undefined4 *param_1,undefined4 *param_2)

{
 try {
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);
  ppvVar2 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar2, param_1 != (undefined4 *)(param_2)); param_1 = param_1 + 2) {
    piVar1 = (int *)((int *)param_1[1]);

    if (piVar1 != (int *)0x0) {
      *param_1 = (undefined4)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }

  }

  return;

 } catch (...) { }
}


// Reference entry 10352b30; body size 111 bytes.
#line 1 "ENTRY_10352b30"

void FUN_10352b30(undefined4 *param_1,undefined4 *param_2)

{
 try {
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);
  ppvVar2 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar2, param_1 != (undefined4 *)(param_2)); param_1 = param_1 + 2) {
    piVar1 = (int *)((int *)param_1[1]);

    if (piVar1 != (int *)0x0) {
      *param_1 = (undefined4)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }

  }

  return;

 } catch (...) { }
}


// Reference entry 10353440; body size 342 bytes.
#line 1 "ENTRY_10353440"

undefined4 * __thiscall Recovered_Bulk::FUN_10353440(void *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  
  iVar3 = (int)(*param_1);
  iVar4 = (int)(param_1[1] - iVar3 >> 2);
  if (iVar4 == 0x3fffffff) {
                    
    thunk_FUN_101a9be0();
  }
  uVar6 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar6 >> 1) < uVar6) {
LAB_1035358c:
                    
    thunk_FUN_1012a2a0();
  }
  uVar6 = (uint)((uVar6 >> 1) + uVar6);
  uVar7 = (uint)(uVar1);
  if (uVar1 <= uVar6) {
    uVar7 = (uint)(uVar6);
  }
  if (0x3fffffff < uVar7) goto LAB_1035358c;
  uVar7 = (uint)(uVar7 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_1035358c;
    pvVar5 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar5 == (void *)0x0) goto LAB_10353586;
    _Dst = (void *)((void *)((int)pvVar5 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar5;
  }
  puVar2 = (undefined4 *)((undefined4 *)((int)_Dst + ((int)param_2 - iVar3 >> 2) * 4));
  *puVar2 = (undefined4)(*param_3);
  pvVar5 = (void *)((void *)*param_1);
  if (param_2 == (void *)param_1[1]) {
    memmove(_Dst,pvVar5,param_1[1] - (int)pvVar5);
  }
  else {
    memmove(_Dst,pvVar5,(int)param_2 - (int)pvVar5);
    memmove(puVar2 + 1,param_2,param_1[1] - (int)param_2);
  }
  iVar3 = (int)(*param_1);
  if (iVar3 != 0) {
    uVar6 = (uint)(param_1[2] - iVar3 & 0xfffffffc);
    iVar4 = (int)(iVar3);
    if (0xfff < uVar6) {
      iVar4 = (int)(*(int *)(iVar3 + -4));
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (iVar3 - iVar4) - 4U) {
LAB_10353586:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)_Dst + uVar1 * 4);
  param_1[2] = (int)(uVar7 + (int)_Dst);
  return (undefined4 *)(puVar2);
}


// Reference entry 103539c0; body size 67 bytes.
#line 1 "ENTRY_103539c0"

void __stdcall FUN_103539c0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_103539c0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_10363080();
    thunk_FUN_1148a50e(param_2,0x24);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 10353e20; body size 140 bytes.
#line 1 "ENTRY_10353e20"

void FUN_10353e20(undefined4 param_1,undefined4 *param_2)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  *(undefined4 *)param_2[1] = 0;
  puVar3 = (undefined4 *)((undefined4 *)*param_2);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar3);
    piVar2 = (int *)((int *)puVar3[4]);

    if (piVar2 != (int *)0x0) {
      puVar3[3] = 0;
      puVar3[4] = 0;
      (**(code **)(*piVar2 + 8))(uVar4);
    }

    thunk_FUN_1148a50e(puVar3,0x14);
    puVar3 = (undefined4 *)(puVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 10353f60; body size 98 bytes.
#line 1 "ENTRY_10353f60"

void FUN_10353f60(undefined4 param_1,int param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_2 + 0x10));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_1148a50e(param_2,0x14);

  return;

 } catch (...) { }
}


// Reference entry 10354650; body size 121 bytes.
#line 1 "ENTRY_10354650"

undefined4 * FUN_10354650(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 10354880; body size 536 bytes.
#line 1 "ENTRY_10354880"

void __thiscall Recovered_Bulk::FUN_10354880(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)(param_1[1]);
  iVar3 = (int)(*param_1);
  uVar4 = (uint)(param_4 - param_3 >> 3);
  if (uVar4 != 0) {
    if (uVar4 <= (uint)(param_1[2] - iVar1 >> 3)) {
      if (uVar4 < (uint)(iVar1 - param_2 >> 3)) {
        iVar5 = (int)(iVar1 + uVar4 * -8);
        iVar3 = (int)(thunk_FUN_10319e10(iVar5,iVar1,iVar1));
        param_1[1] = iVar3;
        thunk_FUN_10355870(param_2,iVar5,iVar1);
        thunk_FUN_101f4060(param_2,uVar4 * 8 + param_2,param_1);

        thunk_FUN_10314f90(param_3,param_4,param_2,param_1);

        return;
      }
      iVar3 = (int)(thunk_FUN_10319e10(param_2,iVar1,uVar4 * 8 + param_2));
      param_1[1] = iVar3;
      thunk_FUN_101f4060(param_2,iVar1,param_1);

      thunk_FUN_10314f90(param_3,param_4,param_2,param_1);

      return;
    }
    iVar5 = (int)(iVar1 - iVar3 >> 3);
    if (0x1fffffffU - iVar5 < uVar4) {
                    
      thunk_FUN_10319ff0();
    }
    uVar6 = (uint)(iVar5 + uVar4);
    uVar2 = (uint)(param_1[2] - iVar3 >> 3);
    if (0x1fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = (uint)(0x1fffffff);
    }
    else {
      uVar2 = (uint)(uVar2 + (uVar2 >> 1));
      if (uVar2 < uVar6) {
        uVar2 = (uint)(uVar6);
      }
    }
    iVar5 = (int)(thunk_FUN_1031b010(uVar2));
    iVar7 = (int)(param_2 - iVar3 >> 3);

    thunk_FUN_10314f90(param_3,param_4,iVar5 + iVar7 * 8,param_1);
    if ((uVar4 == 1) && (param_2 == iVar1)) {
      thunk_FUN_10314f90(iVar3,iVar1,iVar5,param_1);
    }
    else {
      thunk_FUN_10319e10(iVar3,param_2,iVar5);
      thunk_FUN_10319e10(param_2,iVar1,iVar5 + (uVar4 + iVar7) * 8);
    }
    thunk_FUN_10319d30(iVar5,uVar6,uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10355130; body size 580 bytes.
#line 1 "ENTRY_10355130"

int * FUN_10355130(int *param_1,int *param_2,code *param_3)

{
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  void **ppvVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  ppvVar6 = (void **)(&local_10);
  piVar10 = (int *)(param_1);
  if (param_1 != (int *)(param_2)) {
    while (ExceptionList = ppvVar6, piVar5 = piVar10 + 2, piVar5 != (int *)(param_2)) {

      piVar1 = (int *)((int *)piVar10[3]);
      iVar2 = (int)(*piVar5);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }

      if ((int *)param_1[1] != (int *)0x0) {
        (**(code **)(*(int *)param_1[1] + 4))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(iVar2,piVar1);
      }
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      cVar7 = (char)((*param_3)());
      piVar9 = (int *)(piVar5);
      if (cVar7 == '\0') {
        while( true ) {
          piVar10 = (int *)(piVar9);
          piVar9 = (int *)(piVar10 + -2);
          if ((int *)piVar10[-1] != (int *)0x0) {
            (**(code **)(*(int *)piVar10[-1] + 4))();
          }
          *(unsigned char *)((char *)&local_8 + 0) = 2;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))(iVar2,piVar1);
          }
          local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
          cVar7 = (char)((*param_3)());
          if (cVar7 == '\0') break;
          iVar8 = (int)(*piVar9);
          if (iVar8 != *piVar10) {
            piVar4 = (int *)((int *)piVar10[1]);
            if (piVar4 != (int *)0x0) {
              *piVar10 = (int)(0);
              piVar10[1] = 0;
              (**(code **)(*piVar4 + 8))();
              iVar8 = (int)(*piVar9);
            }
            *piVar10 = (int)(iVar8);
            piVar4 = (int *)((int *)piVar10[-1]);
            piVar10[1] = (int)piVar4;
            if (piVar4 != (int *)0x0) {
              (**(code **)(*piVar4 + 4))();
            }
          }
        }
        if (iVar2 != *piVar10) {
          piVar9 = (int *)((int *)piVar10[1]);
          if (piVar9 != (int *)0x0) {
            *piVar10 = (int)(0);
            piVar10[1] = 0;
            (**(code **)(*piVar9 + 8))();
          }
          *piVar10 = (int)(iVar2);
          piVar10[1] = (int)piVar1;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))();
          }
        }
      }
      else {
        piVar10 = (int *)(piVar10 + 4);
        while (piVar4 = piVar10, piVar9 != (int *)(param_1)) {
          piVar10 = (int *)(piVar4 + -2);
          iVar8 = (int)(piVar4[-4]);
          piVar9 = (int *)(piVar4 + -4);
          if (iVar8 != *piVar10) {
            piVar3 = (int *)((int *)piVar4[-1]);
            if (piVar3 != (int *)0x0) {
              *piVar10 = (int)(0);
              piVar4[-1] = 0;
              (**(code **)(*piVar3 + 8))();
              iVar8 = (int)(*piVar9);
            }
            *piVar10 = (int)(iVar8);
            piVar3 = (int *)((int *)piVar4[-3]);
            piVar4[-1] = (int)piVar3;
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 4))();
            }
          }
        }
        if (iVar2 != *param_1) {
          piVar10 = (int *)((int *)param_1[1]);
          if (piVar10 != (int *)0x0) {
            *param_1 = (int)(0);
            param_1[1] = 0;
            (**(code **)(*piVar10 + 8))();
          }
          *param_1 = (int)(iVar2);
          param_1[1] = (int)piVar1;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))();
          }
        }
      }


      piVar10 = (int *)(piVar5);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();

      }
    }
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 103554a0; body size 452 bytes.
#line 1 "ENTRY_103554a0"

void FUN_103554a0(int param_1,int param_2,code *param_3)

{
 try {
  int *piVar1;
  int iVar2;
  undefined4 **ppuVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puStack_40;
  code *pcStack_3c;
  uint uStack_38;
  undefined4 local_28;
  int *local_24;
  undefined1 *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  uStack_38 = (uint)(DAT_12126b84);

  uVar5 = (uint)(param_2 - param_1 >> 3);
  iVar8 = (int)(param_2 - param_1 >> 4);
  if (0 < iVar8) {
    local_18 = (int)(uVar5 - 1);
    iVar6 = (int)(local_18 >> 1);
    do {

      local_24 = (int *)(*(int **)(param_1 + -4 + iVar8 * 8));
      iVar8 = (int)(iVar8 + -1);
      local_28 = (undefined4)(*(undefined4 *)(param_1 + iVar8 * 8));
      local_14 = (int)(iVar8);
      if (local_24 != (int *)0x0) {
        pcStack_3c = (code *)((code *)0x1035550a);
        (**(code **)(*local_24 + 4))();
      }

      iVar9 = (int)(local_14);
      while (iVar2 = iVar8, iVar9 < iVar6) {
        local_1c = (undefined1 *)((undefined1 *)&puStack_40);
        iVar9 = (int)(iVar2 * 2 + 2);
        puStack_40 = (undefined4 *)(*(undefined4 **)(param_1 + -8 + iVar9 * 8));
        pcStack_3c = (code *)(*(code **)(param_1 + -4 + iVar9 * 8));
        ppuVar3 = (undefined4 **)(&puStack_40);
        if (pcStack_3c != (code *)0x0) {
          (**(code **)(*(int *)pcStack_3c + 4))();
          ppuVar3 = (undefined4 **)((undefined4 **)local_1c);
        }
        local_1c = (undefined1 *)((undefined1 *)ppuVar3);
        *(unsigned char *)((char *)&local_8 + 0) = 1;
        piVar1 = (int *)(*(int **)(param_1 + 4 + iVar9 * 8));
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))(*(undefined4 *)(param_1 + iVar9 * 8),piVar1);
        }
        local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
        cVar4 = (char)((*param_3)());
        if (cVar4 != '\0') {
          iVar9 = (int)(iVar2 * 2 + 1);
        }
        iVar7 = (int)(*(int *)(param_1 + iVar9 * 8));
        iVar8 = (int)(iVar9);
        if (iVar7 != *(int *)(param_1 + iVar2 * 8)) {
          piVar1 = (int *)(*(int **)(param_1 + 4 + iVar2 * 8));
          if (piVar1 != (int *)0x0) {
            *(undefined4 *)(param_1 + iVar2 * 8) = 0;
            *(undefined4 *)(param_1 + 4 + iVar2 * 8) = 0;
            pcStack_3c = (code *)((code *)0x10355596);
            (**(code **)(*piVar1 + 8))();
            iVar7 = (int)(*(int *)(param_1 + iVar9 * 8));
          }
          *(int *)(param_1 + iVar2 * 8) = iVar7;
          piVar1 = (int *)(*(int **)(param_1 + 4 + iVar9 * 8));
          *(int **)(param_1 + 4 + iVar2 * 8) = piVar1;
          if (piVar1 != (int *)0x0) {
            pcStack_3c = (code *)((code *)0x103555ad);
            (**(code **)(*piVar1 + 4))();
          }
        }
      }
      iVar9 = (int)(iVar2);
      if (((iVar2 == iVar6) && ((uVar5 & 1) == 0)) &&
         (iVar8 = *(int *)(param_1 + -8 + uVar5 * 8), iVar9 = local_18,
         iVar8 != *(int *)(param_1 + iVar2 * 8))) {
        piVar1 = (int *)(*(int **)(param_1 + 4 + iVar2 * 8));
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(param_1 + iVar2 * 8) = 0;
          *(undefined4 *)(param_1 + 4 + iVar2 * 8) = 0;
          pcStack_3c = (code *)((code *)0x103555ea);
          (**(code **)(*piVar1 + 8))();
          iVar8 = (int)(*(int *)(param_1 + -8 + uVar5 * 8));
        }
        *(int *)(param_1 + iVar2 * 8) = iVar8;
        piVar1 = (int *)(*(int **)(param_1 + -4 + uVar5 * 8));
        *(int **)(param_1 + 4 + iVar2 * 8) = piVar1;
        iVar9 = (int)(local_18);
        if (piVar1 != (int *)0x0) {
          pcStack_3c = (code *)((code *)0x1035560a);
          (**(code **)(*piVar1 + 4))();
          iVar9 = (int)(local_18);
        }
      }
      iVar8 = (int)(local_14);
      pcStack_3c = (code *)(param_3);
      puStack_40 = (undefined4 *)(&local_28);
      thunk_FUN_10356a30(param_1,iVar9,local_14);

      if (local_24 != (int *)0x0) {
        iVar9 = (int)(*local_24);

        local_24 = (int *)((int *)0x0);
        pcStack_3c = (code *)((code *)0x10355643);
        (**(code **)(iVar9 + 8))();
      }
    } while (0 < iVar8);
  }

  return;

 } catch (...) { }
}


// Reference entry 103556e0; body size 316 bytes.
#line 1 "ENTRY_103556e0"

void FUN_103556e0(int param_1,undefined4 *param_2,undefined4 *param_3,code *param_4)

{
 try {
  int *piVar1;
  char cVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
  }

  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(*param_2,piVar1);
  }

  cVar2 = (char)((*param_4)());
  if (cVar2 != '\0') {
    thunk_FUN_10359810();
  }
  if ((int *)param_2[1] != (int *)0x0) {
    (**(code **)(*(int *)param_2[1] + 4))();
  }

  piVar1 = (int *)((int *)param_3[1]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(*param_3,piVar1);
  }

  cVar2 = (char)((*param_4)());
  if (cVar2 != '\0') {
    thunk_FUN_10359810();
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 4))();
    }

    piVar1 = (int *)((int *)param_2[1]);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(*param_2,piVar1);
    }

    cVar2 = (char)((*param_4)());
    if (cVar2 != '\0') {
      thunk_FUN_10359810();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10355870; body size 93 bytes.
#line 1 "ENTRY_10355870"

int * FUN_10355870(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((int *)(param_2) == param_1) {
    return (int *)(param_3);
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
  return (int *)(piVar3);
}


// Reference entry 10355970; body size 92 bytes.
#line 1 "ENTRY_10355970"

int * FUN_10355970(int *param_1,int *param_2,int *param_3)

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


// Reference entry 103559f0; body size 92 bytes.
#line 1 "ENTRY_103559f0"

int * FUN_103559f0(int *param_1,int *param_2,int *param_3)

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


// Reference entry 103566d0; body size 356 bytes.
#line 1 "ENTRY_103566d0"

void FUN_103566d0(int param_1,int param_2,uint param_3,undefined4 param_4,code *param_5)

{
 try {
  int iVar1;
  int *piVar2;
  int iVar3;
  void **ppvVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)(param_3 - 1);
  ppvVar4 = (void **)(&local_10);

  iVar7 = (int)(param_2);
  while (iVar3 = iVar7, ExceptionList = ppvVar4, iVar3 < iVar1 >> 1) {
    iVar7 = (int)(iVar3 * 2 + 2);
    piVar2 = (int *)(*(int **)(param_1 + -4 + iVar7 * 8));
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }

    piVar2 = (int *)(*(int **)(param_1 + 4 + iVar7 * 8));
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(*(undefined4 *)(param_1 + iVar7 * 8),piVar2);
    }

    cVar5 = (char)((*param_5)());
    if (cVar5 != '\0') {
      iVar7 = (int)(iVar3 * 2 + 1);
    }
    iVar6 = (int)(*(int *)(param_1 + iVar7 * 8));

    if (iVar6 != *(int *)(param_1 + iVar3 * 8)) {
      piVar2 = (int *)(*(int **)(param_1 + 4 + iVar3 * 8));
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(param_1 + iVar3 * 8) = 0;
        *(undefined4 *)(param_1 + 4 + iVar3 * 8) = 0;
        (**(code **)(*piVar2 + 8))();
        iVar6 = (int)(*(int *)(param_1 + iVar7 * 8));
      }
      *(int *)(param_1 + iVar3 * 8) = iVar6;
      piVar2 = (int *)(*(int **)(param_1 + 4 + iVar7 * 8));
      *(int **)(param_1 + 4 + iVar3 * 8) = piVar2;

      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();

      }
    }
  }
  iVar7 = (int)(iVar3);
  if (((iVar3 == iVar1 >> 1) && ((param_3 & 1) == 0)) &&
     (iVar6 = *(int *)(param_1 + -8 + param_3 * 8), iVar7 = iVar1,
     iVar6 != *(int *)(param_1 + iVar3 * 8))) {
    piVar2 = (int *)(*(int **)(param_1 + 4 + iVar3 * 8));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + iVar3 * 8) = 0;
      *(undefined4 *)(param_1 + 4 + iVar3 * 8) = 0;
      (**(code **)(*piVar2 + 8))();
      iVar6 = (int)(*(int *)(param_1 + -8 + param_3 * 8));
    }
    *(int *)(param_1 + iVar3 * 8) = iVar6;
    piVar2 = (int *)(*(int **)(param_1 + -4 + param_3 * 8));
    *(int **)(param_1 + 4 + iVar3 * 8) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  thunk_FUN_10356a30(param_1,iVar7,param_2);

  return;

 } catch (...) { }
}


// Reference entry 10356910; body size 208 bytes.
#line 1 "ENTRY_10356910"

void FUN_10356910(int *param_1,int param_2,undefined4 param_3)

{
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (0xf < (int)(param_2 - (int)param_1 & 0xfffffff8U)) {
    piVar1 = (int *)(*(int **)(param_2 + -4));
    piVar5 = (int *)((int *)(param_2 + -8));
    iVar3 = (int)(*piVar5);
    local_18 = (int)(iVar3);
    local_14 = (int *)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(DAT_12126b84 );
      iVar3 = (int)(*piVar5);
    }
    iVar4 = (int)(*param_1);

    if (iVar4 != iVar3) {
      piVar2 = (int *)(*(int **)(param_2 + -4));
      if (piVar2 != (int *)0x0) {
        *piVar5 = (int)(0);
        *(undefined4 *)(param_2 + -4) = 0;
        (**(code **)(*piVar2 + 8))();
        iVar4 = (int)(*param_1);
      }
      *piVar5 = (int)(iVar4);
      piVar2 = (int *)((int *)param_1[1]);
      *(int **)(param_2 + -4) = piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    thunk_FUN_103566d0(param_1,0,(int)piVar5 - (int)param_1 >> 3,&local_18,param_3);

    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10356a30; body size 290 bytes.
#line 1 "ENTRY_10356a30"

void FUN_10356a30(int param_1,int param_2,int param_3,int *param_4,code *param_5)

{
 try {
  int *piVar1;
  int iVar2;
  void **ppvVar3;
  char cVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ppvVar3 = (void **)(&local_10);

  while (iVar2 = param_2, ExceptionList = ppvVar3, param_3 < iVar2) {
    param_2 = (int)(iVar2 + -1 >> 1);
    if ((int *)param_4[1] != (int *)0x0) {
      (**(code **)(*(int *)param_4[1] + 4))();
    }

    piVar1 = (int *)(*(int **)(param_1 + 4 + param_2 * 8));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(*(undefined4 *)(param_1 + param_2 * 8),piVar1);
    }

    cVar4 = (char)((*param_5)());
    if (cVar4 == '\0') break;
    iVar5 = (int)(*(int *)(param_1 + param_2 * 8));

    if (iVar5 != *(int *)(param_1 + iVar2 * 8)) {
      piVar1 = (int *)(*(int **)(param_1 + 4 + iVar2 * 8));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + iVar2 * 8) = 0;
        *(undefined4 *)(param_1 + 4 + iVar2 * 8) = 0;
        (**(code **)(*piVar1 + 8))();
        iVar5 = (int)(*(int *)(param_1 + param_2 * 8));
      }
      *(int *)(param_1 + iVar2 * 8) = iVar5;
      piVar1 = (int *)(*(int **)(param_1 + 4 + param_2 * 8));
      *(int **)(param_1 + 4 + iVar2 * 8) = piVar1;

      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();

      }
    }
  }
  iVar5 = (int)(*param_4);
  if (iVar5 != *(int *)(param_1 + iVar2 * 8)) {
    piVar1 = (int *)(*(int **)(param_1 + 4 + iVar2 * 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + iVar2 * 8) = 0;
      *(undefined4 *)(param_1 + 4 + iVar2 * 8) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar5 = (int)(*param_4);
    }
    *(int *)(param_1 + iVar2 * 8) = iVar5;
    piVar1 = (int *)((int *)param_4[1]);
    *(int **)(param_1 + 4 + iVar2 * 8) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10356f90; body size 270 bytes.
#line 1 "ENTRY_10356f90"

void FUN_10356f90(int *param_1,int param_2,undefined4 param_3)

{
 try {
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  if (0xf < (int)(param_2 - (int)param_1 & 0xfffffff8U)) {
    piVar6 = (int *)((int *)(param_2 + -4));
    do {

      piVar1 = (int *)((int *)*piVar6);
      iVar4 = (int)(piVar6[-1]);
      local_18 = (int)(iVar4);
      local_14 = (int *)(piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar3);
        iVar4 = (int)(piVar6[-1]);
      }
      iVar5 = (int)(*param_1);

      if (iVar5 != iVar4) {
        piVar2 = (int *)((int *)*piVar6);
        if (piVar2 != (int *)0x0) {
          piVar6[-1] = 0;
          *piVar6 = (int)(0);
          (**(code **)(*piVar2 + 8))();
          iVar5 = (int)(*param_1);
        }
        piVar6[-1] = iVar5;
        piVar2 = (int *)((int *)param_1[1]);
        *piVar6 = (int)((int)piVar2);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))();
        }
      }
      thunk_FUN_103566d0(param_1,0,(-4 - (int)param_1) + (int)piVar6 >> 3,&local_18,param_3);

      if (piVar1 != (int *)0x0) {

        local_14 = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
      piVar6 = (int *)(piVar6 + -2);
    } while (0xf < (int)((4 - (int)param_1) + (int)piVar6 & 0xfffffff8U));
  }

  return;

 } catch (...) { }
}


// Reference entry 103570f0; body size 425 bytes.
#line 1 "ENTRY_103570f0"

void FUN_103570f0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
 try {
  int *piVar1;
  int *piVar2;
  void **ppvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);
  uVar5 = (uint)(param_2 - (int)param_1);
  ppvVar3 = (void **)(&local_10);

  while( true ) {

    if ((int)(uVar5 & 0xfffffff8) < 0x101) {
      thunk_FUN_10355130(param_1,param_2,param_4);

      return;
    }
    if (param_3 < 1) break;
    thunk_FUN_10355a80(&local_18);
    param_3 = (int)((param_3 >> 1) + (param_3 >> 2));
    if ((int)(local_18 - (int)param_1 & 0xfffffff8U) < (int)(param_2 - (int)local_14 & 0xfffffff8U))
    {
      thunk_FUN_103570f0(param_1,local_18,param_3,param_4);
      param_1 = (int *)(local_14);
    }
    else {
      thunk_FUN_103570f0(local_14,param_2,param_3,param_4);
      param_2 = (int)(local_18);
    }
    uVar5 = (uint)(param_2 - (int)param_1);

  }
  thunk_FUN_103554a0(param_1,param_2,param_4,uVar4);
  if ((int)(param_2 - (int)param_1 & 0xfffffff8U) < 0x10) {

    return;
  }
  piVar8 = (int *)((int *)(param_2 + -4));
  do {
    piVar1 = (int *)((int *)*piVar8);
    iVar6 = (int)(piVar8[-1]);
    local_18 = (int)(iVar6);
    local_14 = (int *)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      iVar6 = (int)(piVar8[-1]);
    }
    iVar7 = (int)(*param_1);

    if (iVar7 != iVar6) {
      piVar2 = (int *)((int *)*piVar8);
      if (piVar2 != (int *)0x0) {
        piVar8[-1] = 0;
        *piVar8 = (int)(0);
        (**(code **)(*piVar2 + 8))();
        iVar7 = (int)(*param_1);
      }
      piVar8[-1] = iVar7;
      piVar2 = (int *)((int *)param_1[1]);
      *piVar8 = (int)((int)piVar2);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    thunk_FUN_103566d0(param_1,0,(-4 - (int)param_1) + (int)piVar8 >> 3,&local_18,param_4);

    if (piVar1 != (int *)0x0) {

      local_14 = (int *)((int *)0x0);
      (**(code **)(*piVar1 + 8))();
    }
    piVar8 = (int *)(piVar8 + -2);

  } while (0xf < (int)((4 - (int)param_1) + (int)piVar8 & 0xfffffff8U));

  return;

 } catch (...) { }
}


// Reference entry 103582e0; body size 130 bytes.
#line 1 "ENTRY_103582e0"

int __thiscall Recovered_Bulk::FUN_103582e0(int *param_2,undefined4 param_3)
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


// Reference entry 103587b0; body size 85 bytes.
#line 1 "ENTRY_103587b0"

void FUN_103587b0(undefined4 param_1,int param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_2 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10358a10; body size 84 bytes.
#line 1 "ENTRY_10358a10"

void FUN_10358a10(undefined4 param_1,undefined4 *param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10358a80; body size 84 bytes.
#line 1 "ENTRY_10358a80"

void FUN_10358a80(undefined4 param_1,undefined4 *param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10358da0; body size 240 bytes.
#line 1 "ENTRY_10358da0"

void __thiscall Recovered_Bulk::FUN_10358da0(int *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar4 = (uint)(DAT_12126b84);

  uVar5 = (uint)(*(uint *)(param_1 + 0x18) &
          ((((*(byte *)(param_3 + 2) ^ 0x811c9dc5) * 0x1000193 ^ (uint)*(byte *)((int)param_3 + 9))
            * 0x1000193 ^ (uint)*(byte *)((int)param_3 + 10)) * 0x1000193 ^
          (uint)*(byte *)((int)param_3 + 0xb)) * 0x1000193);
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  piVar2 = (int *)(*(int **)(iVar1 + uVar5 * 8));
  if (*(int **)(iVar1 + 4 + uVar5 * 8) == param_3) {
    if (piVar2 == (int *)(param_3)) {
      uVar3 = (undefined4)(*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(iVar1 + uVar5 * 8) = uVar3;
      *(undefined4 *)(iVar1 + 4 + uVar5 * 8) = uVar3;
    }
    else {
      *(int *)(iVar1 + 4 + uVar5 * 8) = param_3[1];
    }
  }
  else if (piVar2 == (int *)(param_3)) {
    *(int *)(iVar1 + uVar5 * 8) = *param_3;
  }
  iVar1 = (int)(*param_3);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  *(int *)param_3[1] = iVar1;
  *(int *)(iVar1 + 4) = param_3[1];
  piVar2 = (int *)((int *)param_3[4]);

  if (piVar2 != (int *)0x0) {
    param_3[3] = 0;
    param_3[4] = 0;
    (**(code **)(*piVar2 + 8))(uVar4);
  }
  thunk_FUN_1148a50e(param_3,0x14);
  *param_2 = (int)(iVar1);

  return;

 } catch (...) { }
}


// Reference entry 10359040; body size 95 bytes.
#line 1 "ENTRY_10359040"

void FUN_10359040(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 103590c0; body size 99 bytes.
#line 1 "ENTRY_103590c0"

void __thiscall Recovered_Bulk::FUN_103590c0(int *param_2,byte *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10353c70(local_8,param_3,
                             ((((*param_3 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_3[1]) * 0x1000193
                              ^ (uint)param_3[2]) * 0x1000193 ^ (uint)param_3[3]) * 0x1000193));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar1);
  return;
}


// Reference entry 10359620; body size 124 bytes.
#line 1 "ENTRY_10359620"

void FUN_10359620(undefined4 *param_1,int *param_2)

{
 try {
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10c944f0(&param_2,*param_1,DAT_12126b84 ));

  thunk_FUN_107cc5b0(*puVar1);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }

  thunk_FUN_107cc370(7);

  return;

 } catch (...) { }
}


// Reference entry 10359810; body size 216 bytes.
#line 1 "ENTRY_10359810"

void FUN_10359810(int *param_1,int *param_2)

{
 try {
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)(*param_1);
  piVar2 = (int *)((int *)param_1[1]);
  iVar5 = (int)(iVar1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(DAT_12126b84 );
    iVar5 = (int)(*param_1);
  }

  iVar4 = (int)(*param_2);
  if (iVar4 != iVar5) {
    piVar3 = (int *)((int *)param_1[1]);
    if (piVar3 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar3 + 8))();
      iVar4 = (int)(*param_2);
    }
    *param_1 = (int)(iVar4);
    piVar3 = (int *)((int *)param_2[1]);
    param_1[1] = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
  }
  if (iVar1 != *param_2) {
    piVar3 = (int *)((int *)param_2[1]);
    if (piVar3 != (int *)0x0) {
      *param_2 = (int)(0);
      param_2[1] = 0;
      (**(code **)(*piVar3 + 8))();
    }
    *param_2 = (int)(iVar1);
    param_2[1] = (int)piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10359a90; body size 216 bytes.
#line 1 "ENTRY_10359a90"

void FUN_10359a90(int *param_1,int *param_2)

{
 try {
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)(*param_1);
  piVar2 = (int *)((int *)param_1[1]);
  iVar5 = (int)(iVar1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(DAT_12126b84 );
    iVar5 = (int)(*param_1);
  }

  iVar4 = (int)(*param_2);
  if (iVar4 != iVar5) {
    piVar3 = (int *)((int *)param_1[1]);
    if (piVar3 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar3 + 8))();
      iVar4 = (int)(*param_2);
    }
    *param_1 = (int)(iVar4);
    piVar3 = (int *)((int *)param_2[1]);
    param_1[1] = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
  }
  if (iVar1 != *param_2) {
    piVar3 = (int *)((int *)param_2[1]);
    if (piVar3 != (int *)0x0) {
      *param_2 = (int)(0);
      param_2[1] = 0;
      (**(code **)(*piVar3 + 8))();
    }
    *param_2 = (int)(iVar1);
    param_2[1] = (int)piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10359ee0; body size 114 bytes.
#line 1 "ENTRY_10359ee0"

undefined4 * __thiscall Recovered_Bulk::FUN_10359ee0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1035a110; body size 126 bytes.
#line 1 "ENTRY_1035a110"

undefined4 * __thiscall Recovered_Bulk::FUN_1035a110(undefined4 param_2,undefined4 param_3,int param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_1059dd40(param_2,param_3,0xd,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCreateAndSummonNewWizActionDescriptorFor);
  param_1[0xf] = 0;

  if (*(undefined4 **)(param_4 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_4 + 0x24))(param_1 + 6,uVar1));
    param_1[0xf] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1035aaf0; body size 278 bytes.
#line 1 "ENTRY_1035aaf0"

undefined4 * __thiscall Recovered_Bulk::FUN_1035aaf0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1035c2f0; body size 93 bytes.
#line 1 "ENTRY_1035c2f0"

int __thiscall Recovered_Bulk::FUN_1035c2f0(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1035c370; body size 93 bytes.
#line 1 "ENTRY_1035c370"

int __thiscall Recovered_Bulk::FUN_1035c370(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1035c3f0; body size 93 bytes.
#line 1 "ENTRY_1035c3f0"

int __thiscall Recovered_Bulk::FUN_1035c3f0(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1035c470; body size 93 bytes.
#line 1 "ENTRY_1035c470"

int __thiscall Recovered_Bulk::FUN_1035c470(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1035c4f0; body size 93 bytes.
#line 1 "ENTRY_1035c4f0"

int __thiscall Recovered_Bulk::FUN_1035c4f0(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1035c570; body size 93 bytes.
#line 1 "ENTRY_1035c570"

int __thiscall Recovered_Bulk::FUN_1035c570(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1035c5f0; body size 93 bytes.
#line 1 "ENTRY_1035c5f0"

int __thiscall Recovered_Bulk::FUN_1035c5f0(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1035c670; body size 93 bytes.
#line 1 "ENTRY_1035c670"

int __thiscall Recovered_Bulk::FUN_1035c670(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1035c6f0; body size 87 bytes.
#line 1 "ENTRY_1035c6f0"

int __thiscall Recovered_Bulk::FUN_1035c6f0(int *param_2)
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


// Reference entry 1035c760; body size 93 bytes.
#line 1 "ENTRY_1035c760"

int __thiscall Recovered_Bulk::FUN_1035c760(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1035c7f0; body size 93 bytes.
#line 1 "ENTRY_1035c7f0"

int __thiscall Recovered_Bulk::FUN_1035c7f0(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1035cac0; body size 148 bytes.
#line 1 "ENTRY_1035cac0"

int * __thiscall Recovered_Bulk::FUN_1035cac0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 3);
    iVar3 = (int)(thunk_FUN_1031b010(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = iVar3;
    param_1[2] = iVar3 + iVar5 * 8;

    iVar4 = (int)(thunk_FUN_10314f90(iVar4,iVar1,iVar3,param_1,uVar2));
    param_1[1] = iVar4;
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 1035ccc0; body size 152 bytes.
#line 1 "ENTRY_1035ccc0"

int * __thiscall Recovered_Bulk::FUN_1035ccc0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 3);
    iVar3 = (int)(thunk_FUN_1031b010(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = iVar3;
    param_1[2] = iVar3 + iVar5 * 8;

    iVar4 = (int)(thunk_FUN_10314f90(iVar4,iVar1,*param_1,param_1,uVar2));
    param_1[1] = iVar4;
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 1035cdc0; body size 110 bytes.
#line 1 "ENTRY_1035cdc0"

undefined4 * __thiscall Recovered_Bulk::FUN_1035cdc0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)(0);
  pcVar3 = (char *)("country_query");
  pcVar2 = (char *)("http://cfc");
  uVar1 = (undefined4)(thunk_FUN_112616c0(param_1 + 0x35f4,0x401,"/cfc/trq.cfc?wsdl",6,"http://cfc",
                             "country_query",0,param_2,param_3,param_4,param_5));
  thunk_FUN_111c0760(uVar1,pcVar2,pcVar3,uVar4,param_2,param_3,param_4,param_5);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCustRegQueryCountryAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RCustRegQueryCountryAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RCustRegQueryCountryAIOOp;
  *(undefined2 *)((int)param_1 + 0xdbd1) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 1035cf30; body size 144 bytes.
#line 1 "ENTRY_1035cf30"

undefined4 * __fastcall FUN_1035cf30(undefined4 *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar8 = (undefined4)(0);
  uVar7 = (undefined4)(0);
  uVar6 = (undefined4)(30000);
  uVar5 = (undefined4)(30000);
  uVar4 = (undefined4)(0);
  pcVar3 = (char *)("software_download");
  pcVar2 = (char *)("http://sw.ws");
  uVar1 = (undefined4)(thunk_FUN_112616c0(param_1 + 0x35f4,0x401,"/ws/sw/?wsdl",7,"http://sw.ws",
                             "software_download",0,30000,30000,0,0));
  thunk_FUN_111c0760(uVar1,pcVar2,pcVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  *(undefined1 *)((int)param_1 + 0xdbd1) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RRegisterSoftwareAndSaveRegDataAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RRegisterSoftwareAndSaveRegDataAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RRegisterSoftwareAndSaveRegDataAIOOp;
  param_1[0x36fa] = 0;
  param_1[0x36fb] = 0;
  param_1[0x36fc] = 0;
  param_1[0x36fd] = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 1035f500; body size 108 bytes.
#line 1 "ENTRY_1035f500"

undefined4 * __thiscall Recovered_Bulk::FUN_1035f500(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = param_2;
  *(undefined2 *)(param_1 + 4) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 1035f590; body size 100 bytes.
#line 1 "ENTRY_1035f590"

undefined4 * __fastcall FUN_1035f590(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizardActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 1035fa80; body size 292 bytes.
#line 1 "ENTRY_1035fa80"

undefined4 * __thiscall Recovered_Bulk::FUN_1035fa80(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpZoneGroupTopologyGetZoneGroupState);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpZoneGroupTopologyGetZoneGroupState);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1035fda0; body size 107 bytes.
#line 1 "ENTRY_1035fda0"

undefined4 * __fastcall FUN_1035fda0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUserTriggeredOnlineUpdateWizardActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10360120; body size 83 bytes.
#line 1 "ENTRY_10360120"

void __fastcall FUN_10360120(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);

  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10360190; body size 83 bytes.
#line 1 "ENTRY_10360190"

void __fastcall FUN_10360190(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);

  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10360200; body size 83 bytes.
#line 1 "ENTRY_10360200"

void __fastcall FUN_10360200(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);

  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10360270; body size 83 bytes.
#line 1 "ENTRY_10360270"

void __fastcall FUN_10360270(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);

  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10360740; body size 236 bytes.
#line 1 "ENTRY_10360740"

int __fastcall FUN_10360740(undefined4 *param_1)

{
 try {
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


  uVar4 = (uint)(DAT_12126b84);

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

  if (piVar3 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    iVar5 = (int)((**(code **)(*piVar3 + 8))());
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return (int)(iVar5);

 } catch (...) { }
}


// Reference entry 10360be0; body size 177 bytes.
#line 1 "ENTRY_10360be0"

void __fastcall FUN_10360be0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

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

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101d3630();

  return;

 } catch (...) { }
}


// Reference entry 10360cd0; body size 76 bytes.
#line 1 "ENTRY_10360cd0"

void __fastcall FUN_10360cd0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10360d40; body size 76 bytes.
#line 1 "ENTRY_10360d40"

void __fastcall FUN_10360d40(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10360db0; body size 76 bytes.
#line 1 "ENTRY_10360db0"

void __fastcall FUN_10360db0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10360e20; body size 76 bytes.
#line 1 "ENTRY_10360e20"

void __fastcall FUN_10360e20(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10360e90; body size 76 bytes.
#line 1 "ENTRY_10360e90"

void __fastcall FUN_10360e90(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10360f00; body size 76 bytes.
#line 1 "ENTRY_10360f00"

void __fastcall FUN_10360f00(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10360f70; body size 76 bytes.
#line 1 "ENTRY_10360f70"

void __fastcall FUN_10360f70(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10360fe0; body size 76 bytes.
#line 1 "ENTRY_10360fe0"

void __fastcall FUN_10360fe0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361050; body size 76 bytes.
#line 1 "ENTRY_10361050"

void __fastcall FUN_10361050(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 103610c0; body size 76 bytes.
#line 1 "ENTRY_103610c0"

void __fastcall FUN_103610c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361130; body size 76 bytes.
#line 1 "ENTRY_10361130"

void __fastcall FUN_10361130(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 103611a0; body size 76 bytes.
#line 1 "ENTRY_103611a0"

void __fastcall FUN_103611a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361210; body size 76 bytes.
#line 1 "ENTRY_10361210"

void __fastcall FUN_10361210(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361280; body size 76 bytes.
#line 1 "ENTRY_10361280"

void __fastcall FUN_10361280(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 103612f0; body size 76 bytes.
#line 1 "ENTRY_103612f0"

void __fastcall FUN_103612f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361360; body size 76 bytes.
#line 1 "ENTRY_10361360"

void __fastcall FUN_10361360(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 103613d0; body size 76 bytes.
#line 1 "ENTRY_103613d0"

void __fastcall FUN_103613d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361440; body size 76 bytes.
#line 1 "ENTRY_10361440"

void __fastcall FUN_10361440(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 103614b0; body size 76 bytes.
#line 1 "ENTRY_103614b0"

void __fastcall FUN_103614b0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361520; body size 76 bytes.
#line 1 "ENTRY_10361520"

void __fastcall FUN_10361520(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361590; body size 76 bytes.
#line 1 "ENTRY_10361590"

void __fastcall FUN_10361590(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361600; body size 76 bytes.
#line 1 "ENTRY_10361600"

void __fastcall FUN_10361600(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361670; body size 76 bytes.
#line 1 "ENTRY_10361670"

void __fastcall FUN_10361670(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 103616e0; body size 76 bytes.
#line 1 "ENTRY_103616e0"

void __fastcall FUN_103616e0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361750; body size 76 bytes.
#line 1 "ENTRY_10361750"

void __fastcall FUN_10361750(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 103617c0; body size 76 bytes.
#line 1 "ENTRY_103617c0"

void __fastcall FUN_103617c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361830; body size 76 bytes.
#line 1 "ENTRY_10361830"

void __fastcall FUN_10361830(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 103618a0; body size 76 bytes.
#line 1 "ENTRY_103618a0"

void __fastcall FUN_103618a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361910; body size 76 bytes.
#line 1 "ENTRY_10361910"

void __fastcall FUN_10361910(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361980; body size 76 bytes.
#line 1 "ENTRY_10361980"

void __fastcall FUN_10361980(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 103619f0; body size 76 bytes.
#line 1 "ENTRY_103619f0"

void __fastcall FUN_103619f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361a60; body size 76 bytes.
#line 1 "ENTRY_10361a60"

void __fastcall FUN_10361a60(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361ad0; body size 76 bytes.
#line 1 "ENTRY_10361ad0"

void __fastcall FUN_10361ad0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361b40; body size 76 bytes.
#line 1 "ENTRY_10361b40"

void __fastcall FUN_10361b40(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361bb0; body size 76 bytes.
#line 1 "ENTRY_10361bb0"

void __fastcall FUN_10361bb0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361c20; body size 76 bytes.
#line 1 "ENTRY_10361c20"

void __fastcall FUN_10361c20(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361c90; body size 76 bytes.
#line 1 "ENTRY_10361c90"

void __fastcall FUN_10361c90(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361d00; body size 76 bytes.
#line 1 "ENTRY_10361d00"

void __fastcall FUN_10361d00(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361d70; body size 76 bytes.
#line 1 "ENTRY_10361d70"

void __fastcall FUN_10361d70(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361de0; body size 76 bytes.
#line 1 "ENTRY_10361de0"

void __fastcall FUN_10361de0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361e50; body size 76 bytes.
#line 1 "ENTRY_10361e50"

void __fastcall FUN_10361e50(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361ec0; body size 76 bytes.
#line 1 "ENTRY_10361ec0"

void __fastcall FUN_10361ec0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361f30; body size 76 bytes.
#line 1 "ENTRY_10361f30"

void __fastcall FUN_10361f30(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10361fa0; body size 68 bytes.
#line 1 "ENTRY_10361fa0"

void __fastcall FUN_10361fa0(int *param_1)

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


// Reference entry 10362000; body size 68 bytes.
#line 1 "ENTRY_10362000"

void __fastcall FUN_10362000(int *param_1)

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


// Reference entry 10362060; body size 68 bytes.
#line 1 "ENTRY_10362060"

void __fastcall FUN_10362060(int *param_1)

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


// Reference entry 103620c0; body size 68 bytes.
#line 1 "ENTRY_103620c0"

void __fastcall FUN_103620c0(int *param_1)

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


// Reference entry 103623c0; body size 92 bytes.
#line 1 "ENTRY_103623c0"

void __fastcall FUN_103623c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfWrappedHelper);

  return;

 } catch (...) { }
}


// Reference entry 10362440; body size 92 bytes.
#line 1 "ENTRY_10362440"

void __fastcall FUN_10362440(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfWrappedHelper);

  return;

 } catch (...) { }
}


// Reference entry 103624c0; body size 92 bytes.
#line 1 "ENTRY_103624c0"

void __fastcall FUN_103624c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfWrappedHelper);

  return;

 } catch (...) { }
}


// Reference entry 10362540; body size 92 bytes.
#line 1 "ENTRY_10362540"

void __fastcall FUN_10362540(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfWrappedHelper);

  return;

 } catch (...) { }
}


// Reference entry 103625c0; body size 92 bytes.
#line 1 "ENTRY_103625c0"

void __fastcall FUN_103625c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfWrappedHelper);

  return;

 } catch (...) { }
}


// Reference entry 10362820; body size 84 bytes.
#line 1 "ENTRY_10362820"

void __fastcall FUN_10362820(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10362890; body size 84 bytes.
#line 1 "ENTRY_10362890"

void __fastcall FUN_10362890(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10362900; body size 84 bytes.
#line 1 "ENTRY_10362900"

void __fastcall FUN_10362900(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10362970; body size 84 bytes.
#line 1 "ENTRY_10362970"

void __fastcall FUN_10362970(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10362a10; body size 99 bytes.
#line 1 "ENTRY_10362a10"

void __fastcall FUN_10362a10(int param_1)

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
  thunk_FUN_10353e20(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x14);
  return;
}


// Reference entry 10362a90; body size 77 bytes.
#line 1 "ENTRY_10362a90"

void __fastcall FUN_10362a90(int *param_1)

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


// Reference entry 10362b00; body size 111 bytes.
#line 1 "ENTRY_10362b00"

void __fastcall FUN_10362b00(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  iVar3 = (int)(*(int *)(param_1 + 4));
  if (iVar3 != 0) {
    piVar1 = (int *)(*(int **)(iVar3 + 0x10));

    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
      iVar3 = (int)(*(int *)(param_1 + 4));
    }
    if (iVar3 != 0) {
      thunk_FUN_1148a50e(iVar3,0x14);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10363010; body size 84 bytes.
#line 1 "ENTRY_10363010"

void __fastcall FUN_10363010(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 103633e0; body size 127 bytes.
#line 1 "ENTRY_103633e0"

void __fastcall FUN_103633e0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(*param_1);
  if (iVar2 != 0) {
    iVar3 = (int)(param_1[1]);
    if (iVar2 != iVar3) {
      do {
        thunk_FUN_103659a0();
        iVar2 = (int)(iVar2 + 0x18);
      } while (iVar2 != iVar3);
      iVar2 = (int)(*param_1);
    }
    uVar1 = (uint)(((param_1[2] - iVar2) / 0x18) * 0x18);
    iVar3 = (int)(iVar2);
    if (0xfff < uVar1) {
      iVar3 = (int)(*(int *)(iVar2 + -4));
      uVar1 = (uint)(uVar1 + 0x23);
      if (0x1f < (iVar2 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar1);
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 10363490; body size 96 bytes.
#line 1 "ENTRY_10363490"

void __fastcall FUN_10363490(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10352b30(*param_1,param_1[1],param_1);
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


// Reference entry 10363510; body size 81 bytes.
#line 1 "ENTRY_10363510"

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

void __fastcall FID_conflict__Tidy_10363510(int *param_1)

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


// Reference entry 10363640; body size 374 bytes.
#line 1 "ENTRY_10363640"

void __fastcall FUN_10363640(undefined4 *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RRegisterSoftwareAndSaveRegDataAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RRegisterSoftwareAndSaveRegDataAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RRegisterSoftwareAndSaveRegDataAIOOp;
  iVar1 = (int)(param_1[0x36fd]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[0x36fc]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[0x36fb]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[0x36fa]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCustRegRegisterSoftwareAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RCustRegRegisterSoftwareAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RCustRegRegisterSoftwareAIOOp;
  thunk_FUN_111c0af0();

  return;

 } catch (...) { }
}


// Reference entry 10363a40; body size 209 bytes.
#line 1 "ENTRY_10363a40"

void __fastcall FUN_10363a40(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddCustomRadioActionFactory);
  piVar1 = (int *)((int *)param_1[10]);

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[8]);

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[6]);

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10363b50; body size 173 bytes.
#line 1 "ENTRY_10363b50"

void __fastcall FUN_10363b50(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(param_1 + 6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseListPresentationMapProxy);
  thunk_FUN_10353a20(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x1c,uVar2);
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10363c30; body size 90 bytes.
#line 1 "ENTRY_10363c30"

void __fastcall FUN_10363c30(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCControllerEventSink);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10363cf0; body size 90 bytes.
#line 1 "ENTRY_10363cf0"

void __fastcall FUN_10363cf0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFeatureManagerEventSink);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10364ab0; body size 90 bytes.
#line 1 "ENTRY_10364ab0"

void __fastcall FUN_10364ab0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHouseholdAdapterEventSink);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10364b70; body size 110 bytes.
#line 1 "ENTRY_10364b70"

void __fastcall FUN_10364b70(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardActionDescriptorBase);
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10364c00; body size 110 bytes.
#line 1 "ENTRY_10364c00"

void __fastcall FUN_10364c00(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardActionDescriptorBase);
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10364cb0; body size 90 bytes.
#line 1 "ENTRY_10364cb0"

void __fastcall FUN_10364cb0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleManagerEventSink);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10364d90; body size 110 bytes.
#line 1 "ENTRY_10364d90"

void __fastcall FUN_10364d90(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardActionDescriptorBase);
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10364e20; body size 90 bytes.
#line 1 "ENTRY_10364e20"

void __fastcall FUN_10364e20(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingEventSink);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10365040; body size 90 bytes.
#line 1 "ENTRY_10365040"

void __fastcall FUN_10365040(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrbanAirshipTagger);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 103650c0; body size 110 bytes.
#line 1 "ENTRY_103650c0"

void __fastcall FUN_103650c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardActionDescriptorBase);
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 103653b0; body size 118 bytes.
#line 1 "ENTRY_103653b0"

void __fastcall FUN_103653b0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[1]);

  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10365450; body size 623 bytes.
#line 1 "ENTRY_10365450"

void __fastcall FUN_10365450(int *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  iVar1 = (int)(param_1[9]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[7]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[6]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[5]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[4]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[3]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[2]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[1]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(*param_1);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10365a60; body size 81 bytes.
#line 1 "ENTRY_10365a60"

int * __thiscall Recovered_Bulk::FUN_10365a60(int *param_2)
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


// Reference entry 10365ad0; body size 81 bytes.
#line 1 "ENTRY_10365ad0"

int * __thiscall Recovered_Bulk::FUN_10365ad0(int *param_2)
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


// Reference entry 10365b40; body size 81 bytes.
#line 1 "ENTRY_10365b40"

int * __thiscall Recovered_Bulk::FUN_10365b40(int *param_2)
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


// Reference entry 10365bb0; body size 81 bytes.
#line 1 "ENTRY_10365bb0"

int * __thiscall Recovered_Bulk::FUN_10365bb0(int *param_2)
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


// Reference entry 10365c20; body size 81 bytes.
#line 1 "ENTRY_10365c20"

int * __thiscall Recovered_Bulk::FUN_10365c20(int *param_2)
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


// Reference entry 10365c90; body size 81 bytes.
#line 1 "ENTRY_10365c90"

int * __thiscall Recovered_Bulk::FUN_10365c90(int *param_2)
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


// Reference entry 10365d00; body size 81 bytes.
#line 1 "ENTRY_10365d00"

int * __thiscall Recovered_Bulk::FUN_10365d00(int *param_2)
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


// Reference entry 10365d70; body size 81 bytes.
#line 1 "ENTRY_10365d70"

int * __thiscall Recovered_Bulk::FUN_10365d70(int *param_2)
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


// Reference entry 10365de0; body size 81 bytes.
#line 1 "ENTRY_10365de0"

int * __thiscall Recovered_Bulk::FUN_10365de0(int *param_2)
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


// Reference entry 10365e50; body size 81 bytes.
#line 1 "ENTRY_10365e50"

int * __thiscall Recovered_Bulk::FUN_10365e50(int *param_2)
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


// Reference entry 10365f20; body size 81 bytes.
#line 1 "ENTRY_10365f20"

int * __thiscall Recovered_Bulk::FUN_10365f20(int *param_2)
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


// Reference entry 10365f90; body size 81 bytes.
#line 1 "ENTRY_10365f90"

int * __thiscall Recovered_Bulk::FUN_10365f90(int *param_2)
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


// Reference entry 10366000; body size 81 bytes.
#line 1 "ENTRY_10366000"

int * __thiscall Recovered_Bulk::FUN_10366000(int *param_2)
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


// Reference entry 10366070; body size 81 bytes.
#line 1 "ENTRY_10366070"

int * __thiscall Recovered_Bulk::FUN_10366070(int *param_2)
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


// Reference entry 103660e0; body size 81 bytes.
#line 1 "ENTRY_103660e0"

int * __thiscall Recovered_Bulk::FUN_103660e0(int *param_2)
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


// Reference entry 10366150; body size 81 bytes.
#line 1 "ENTRY_10366150"

int * __thiscall Recovered_Bulk::FUN_10366150(int *param_2)
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


// Reference entry 103661c0; body size 81 bytes.
#line 1 "ENTRY_103661c0"

int * __thiscall Recovered_Bulk::FUN_103661c0(int *param_2)
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


// Reference entry 10366290; body size 81 bytes.
#line 1 "ENTRY_10366290"

int * __thiscall Recovered_Bulk::FUN_10366290(int *param_2)
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


// Reference entry 103663c0; body size 81 bytes.
#line 1 "ENTRY_103663c0"

int * __thiscall Recovered_Bulk::FUN_103663c0(int *param_2)
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


// Reference entry 10366430; body size 81 bytes.
#line 1 "ENTRY_10366430"

int * __thiscall Recovered_Bulk::FUN_10366430(int *param_2)
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


// Reference entry 10366500; body size 81 bytes.
#line 1 "ENTRY_10366500"

int * __thiscall Recovered_Bulk::FUN_10366500(int *param_2)
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


// Reference entry 10367510; body size 88 bytes.
#line 1 "ENTRY_10367510"

int * __thiscall Recovered_Bulk::FUN_10367510(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)((int *)*param_1);
  *param_2 = (int)((int)piVar3);
  piVar4 = (int *)((int *)piVar3[2]);
  if (*(char *)((int)piVar4 + 0xd) == '\0') {
    cVar1 = (char)(*(char *)(*piVar4 + 0xd));
    piVar3 = (int *)((int *)*piVar4);
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*piVar3 + 0xd));
      piVar4 = (int *)(piVar3);
      piVar3 = (int *)((int *)*piVar3);
    }
  }
  else {
    piVar4 = (int *)((int *)piVar3[1]);
    if (*(char *)((int)piVar4 + 0xd) == '\0') {
      while (piVar3 == (int *)piVar4[2]) {
        *param_1 = (int)((int)piVar4);
        piVar2 = (int *)((int *)piVar4[1]);
        piVar3 = (int *)(piVar4);
        piVar4 = (int *)(piVar2);
        if (*(char *)((int)piVar2 + 0xd) != '\0') {
          *param_1 = (int)((int)piVar2);
          return (int *)(param_2);
        }
      }
    }
  }
  *param_1 = (int)((int)piVar4);
  return (int *)(param_2);
}


// Reference entry 10368300; body size 261 bytes.
#line 1 "ENTRY_10368300"

undefined4 * __thiscall Recovered_Bulk::FUN_10368300(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar4 = (uint)(DAT_12126b84);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 103684d0; body size 83 bytes.
#line 1 "ENTRY_103684d0"

undefined4 * __thiscall Recovered_Bulk::FUN_103684d0(byte param_2)
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


// Reference entry 10368540; body size 83 bytes.
#line 1 "ENTRY_10368540"

undefined4 * __thiscall Recovered_Bulk::FUN_10368540(byte param_2)
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


// Reference entry 103685b0; body size 83 bytes.
#line 1 "ENTRY_103685b0"

undefined4 * __thiscall Recovered_Bulk::FUN_103685b0(byte param_2)
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


// Reference entry 10368620; body size 83 bytes.
#line 1 "ENTRY_10368620"

undefined4 * __thiscall Recovered_Bulk::FUN_10368620(byte param_2)
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


// Reference entry 10368690; body size 83 bytes.
#line 1 "ENTRY_10368690"

undefined4 * __thiscall Recovered_Bulk::FUN_10368690(byte param_2)
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


// Reference entry 10368700; body size 83 bytes.
#line 1 "ENTRY_10368700"

undefined4 * __thiscall Recovered_Bulk::FUN_10368700(byte param_2)
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


// Reference entry 103687d0; body size 106 bytes.
#line 1 "ENTRY_103687d0"

undefined4 * __thiscall Recovered_Bulk::FUN_103687d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);

  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10368860; body size 106 bytes.
#line 1 "ENTRY_10368860"

undefined4 * __thiscall Recovered_Bulk::FUN_10368860(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);

  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 103688f0; body size 113 bytes.
#line 1 "ENTRY_103688f0"

undefined4 * __thiscall Recovered_Bulk::FUN_103688f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfWrappedHelper);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10368990; body size 113 bytes.
#line 1 "ENTRY_10368990"

undefined4 * __thiscall Recovered_Bulk::FUN_10368990(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfWrappedHelper);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10368a30; body size 113 bytes.
#line 1 "ENTRY_10368a30"

undefined4 * __thiscall Recovered_Bulk::FUN_10368a30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfWrappedHelper);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10368ad0; body size 113 bytes.
#line 1 "ENTRY_10368ad0"

undefined4 * __thiscall Recovered_Bulk::FUN_10368ad0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfWrappedHelper);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10368b70; body size 113 bytes.
#line 1 "ENTRY_10368b70"

undefined4 * __thiscall Recovered_Bulk::FUN_10368b70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfWrappedHelper);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10368c10; body size 107 bytes.
#line 1 "ENTRY_10368c10"

int __thiscall Recovered_Bulk::FUN_10368c10(byte param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10368ca0; body size 107 bytes.
#line 1 "ENTRY_10368ca0"

int __thiscall Recovered_Bulk::FUN_10368ca0(byte param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10368d30; body size 107 bytes.
#line 1 "ENTRY_10368d30"

int __thiscall Recovered_Bulk::FUN_10368d30(byte param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10368dc0; body size 107 bytes.
#line 1 "ENTRY_10368dc0"

int __thiscall Recovered_Bulk::FUN_10368dc0(byte param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10368ea0; body size 107 bytes.
#line 1 "ENTRY_10368ea0"

int __thiscall Recovered_Bulk::FUN_10368ea0(byte param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 103696b0; body size 230 bytes.
#line 1 "ENTRY_103696b0"

undefined4 * __thiscall Recovered_Bulk::FUN_103696b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddCustomRadioActionFactory);
  piVar1 = (int *)((int *)param_1[10]);

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[8]);

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[6]);

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 103697e0; body size 194 bytes.
#line 1 "ENTRY_103697e0"

undefined4 * __thiscall Recovered_Bulk::FUN_103697e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(param_1 + 6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseListPresentationMapProxy);
  thunk_FUN_10353a20(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x1c,uVar2);
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20,uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 103698e0; body size 113 bytes.
#line 1 "ENTRY_103698e0"

undefined4 * __thiscall Recovered_Bulk::FUN_103698e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCControllerEventSink);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10369a00; body size 113 bytes.
#line 1 "ENTRY_10369a00"

undefined4 * __thiscall Recovered_Bulk::FUN_10369a00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFeatureManagerEventSink);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10369b10; body size 113 bytes.
#line 1 "ENTRY_10369b10"

undefined4 * __thiscall Recovered_Bulk::FUN_10369b10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHouseholdAdapterEventSink);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10369c50; body size 131 bytes.
#line 1 "ENTRY_10369c50"

undefined4 * __thiscall Recovered_Bulk::FUN_10369c50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardActionDescriptorBase);
  piVar1 = (int *)((int *)param_1[3]);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10369d00; body size 131 bytes.
#line 1 "ENTRY_10369d00"

undefined4 * __thiscall Recovered_Bulk::FUN_10369d00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardActionDescriptorBase);
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10369df0; body size 113 bytes.
#line 1 "ENTRY_10369df0"

undefined4 * __thiscall Recovered_Bulk::FUN_10369df0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleManagerEventSink);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10369ed0; body size 68 bytes.
#line 1 "ENTRY_10369ed0"

undefined4 * __thiscall Recovered_Bulk::FUN_10369ed0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMultipleDeferredEvtHelper);
  param_1[4] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_103633e0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10369f30; body size 131 bytes.
#line 1 "ENTRY_10369f30"

undefined4 * __thiscall Recovered_Bulk::FUN_10369f30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardActionDescriptorBase);
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10369fe0; body size 113 bytes.
#line 1 "ENTRY_10369fe0"

undefined4 * __thiscall Recovered_Bulk::FUN_10369fe0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingEventSink);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1036a2f0; body size 113 bytes.
#line 1 "ENTRY_1036a2f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1036a2f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrbanAirshipTagger);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1036a390; body size 131 bytes.
#line 1 "ENTRY_1036a390"

undefined4 * __thiscall Recovered_Bulk::FUN_1036a390(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardActionDescriptorBase);
  piVar1 = (int *)((int *)param_1[3]);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1036a850; body size 112 bytes.
#line 1 "ENTRY_1036a850"

void __fastcall FUN_1036a850(int *param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[2]);
  param_1[2] = *piVar1;
  piVar2 = (int *)((int *)piVar1[4]);

  if (piVar2 != (int *)0x0) {
    piVar1[3] = 0;
    piVar1[4] = 0;
    (**(code **)(*piVar2 + 8))(uVar3);
  }
  thunk_FUN_1148a50e(piVar1,0x14);
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;

  return;

 } catch (...) { }
}


// Reference entry 1036a9f0; body size 141 bytes.
#line 1 "ENTRY_1036a9f0"

void __thiscall Recovered_Bulk::FUN_1036a9f0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(*param_1);
  if (iVar2 != 0) {
    iVar3 = (int)(param_1[1]);
    if (iVar2 != iVar3) {
      do {
        thunk_FUN_103659a0();
        iVar2 = (int)(iVar2 + 0x18);
      } while (iVar2 != iVar3);
      iVar2 = (int)(*param_1);
    }
    uVar1 = (uint)(((param_1[2] - iVar2) / 0x18) * 0x18);
    iVar3 = (int)(iVar2);
    if (0xfff < uVar1) {
      iVar3 = (int)(*(int *)(iVar2 + -4));
      uVar1 = (uint)(uVar1 + 0x23);
      if (0x1f < (iVar2 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar1);
  }
  *param_1 = (int)(param_2);
  param_1[1] = param_2 + param_3 * 0x18;
  param_1[2] = param_2 + param_4 * 0x18;
  return;
}


// Reference entry 1036aab0; body size 104 bytes.
#line 1 "ENTRY_1036aab0"

void __thiscall Recovered_Bulk::FUN_1036aab0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10352a90(*param_1,param_1[1],param_1);
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


// Reference entry 1036ab40; body size 104 bytes.
#line 1 "ENTRY_1036ab40"

void __thiscall Recovered_Bulk::FUN_1036ab40(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10352b30(*param_1,param_1[1],param_1);
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


// Reference entry 1036b000; body size 124 bytes.
#line 1 "ENTRY_1036b000"

undefined4 * __fastcall FUN_1036b000(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 1036b0e0; body size 105 bytes.
#line 1 "ENTRY_1036b0e0"

void __thiscall Recovered_Bulk::FUN_1036b0e0(char param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return;

 } catch (...) { }
}


// Reference entry 1036b190; body size 105 bytes.
#line 1 "ENTRY_1036b190"

void __thiscall Recovered_Bulk::FUN_1036b190(char param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return;

 } catch (...) { }
}


// Reference entry 1036b2a0; body size 105 bytes.
#line 1 "ENTRY_1036b2a0"

void __thiscall Recovered_Bulk::FUN_1036b2a0(char param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return;

 } catch (...) { }
}


// Reference entry 1036b330; body size 105 bytes.
#line 1 "ENTRY_1036b330"

void __thiscall Recovered_Bulk::FUN_1036b330(char param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return;

 } catch (...) { }
}


// Reference entry 1036b450; body size 136 bytes.
#line 1 "ENTRY_1036b450"

float __thiscall Recovered_Bulk::FUN_1036b450(int param_2)
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


// Reference entry 1036b6a0; body size 124 bytes.
#line 1 "ENTRY_1036b6a0"

void __thiscall Recovered_Bulk::FUN_1036b6a0(int *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)((undefined4 *)
           thunk_FUN_10c944f0(&param_2,*(undefined4 *)(param_1 + 4),
                              DAT_12126b84 ));

  thunk_FUN_107cc5b0(*puVar1);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }

  thunk_FUN_107cc370(7);

  return;

 } catch (...) { }
}


// Reference entry 1036d400; body size 79 bytes.
#line 1 "ENTRY_1036d400"

void __thiscall Recovered_Bulk::FUN_1036d400(int param_2)
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


// Reference entry 1036d470; body size 79 bytes.
#line 1 "ENTRY_1036d470"

void __thiscall Recovered_Bulk::FUN_1036d470(int param_2)
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


// Reference entry 1036d670; body size 87 bytes.
#line 1 "ENTRY_1036d670"

void __thiscall Recovered_Bulk::FUN_1036d670(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 1036d910; body size 133 bytes.
#line 1 "ENTRY_1036d910"

void __fastcall FUN_1036d910(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_1036c7f0();
  return;
}


// Reference entry 1036dc30; body size 83 bytes.
#line 1 "ENTRY_1036dc30"

void __thiscall Recovered_Bulk::FUN_1036dc30(int *param_2)
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


// Reference entry 1036dca0; body size 83 bytes.
#line 1 "ENTRY_1036dca0"

void __thiscall Recovered_Bulk::FUN_1036dca0(int *param_2)
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


// Reference entry 1036e1e0; body size 77 bytes.
#line 1 "ENTRY_1036e1e0"

void __fastcall FUN_1036e1e0(int *param_1)

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


// Reference entry 1036e3e0; body size 127 bytes.
#line 1 "ENTRY_1036e3e0"

void __fastcall FUN_1036e3e0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(*param_1);
  if (iVar2 != 0) {
    iVar3 = (int)(param_1[1]);
    if (iVar2 != iVar3) {
      do {
        thunk_FUN_103659a0();
        iVar2 = (int)(iVar2 + 0x18);
      } while (iVar2 != iVar3);
      iVar2 = (int)(*param_1);
    }
    uVar1 = (uint)(((param_1[2] - iVar2) / 0x18) * 0x18);
    iVar3 = (int)(iVar2);
    if (0xfff < uVar1) {
      iVar3 = (int)(*(int *)(iVar2 + -4));
      uVar1 = (uint)(uVar1 + 0x23);
      if (0x1f < (iVar2 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar1);
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 1036e480; body size 96 bytes.
#line 1 "ENTRY_1036e480"

void __fastcall FUN_1036e480(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10352a90(*param_1,param_1[1],param_1);
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


// Reference entry 1036e500; body size 96 bytes.
#line 1 "ENTRY_1036e500"

void __fastcall FUN_1036e500(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10352b30(*param_1,param_1[1],param_1);
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


// Reference entry 1036e580; body size 81 bytes.
#line 1 "ENTRY_1036e580"

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

void __fastcall FID_conflict__Tidy_1036e580(int *param_1)

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


// Reference entry 1036eb10; body size 223 bytes.
#line 1 "ENTRY_1036eb10"

int __thiscall Recovered_Bulk::FUN_1036eb10(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)(*(int *)(param_1 + 0xc) +
                  (*(uint *)(param_1 + 0x18) &
                  ((((*(byte *)(param_2 + 2) ^ 0x811c9dc5) * 0x1000193 ^
                    (uint)*(byte *)((int)param_2 + 9)) * 0x1000193 ^
                   (uint)*(byte *)((int)param_2 + 10)) * 0x1000193 ^
                  (uint)*(byte *)((int)param_2 + 0xb)) * 0x1000193) * 8));
  if ((int *)piVar1[1] == param_2) {
    if ((int *)*piVar1 == (int *)(param_2)) {
      iVar2 = (int)(*(int *)(param_1 + 4));
      *piVar1 = (int)(iVar2);
      piVar1[1] = iVar2;
    }
    else {
      piVar1[1] = param_2[1];
    }
  }
  else if ((int *)*piVar1 == (int *)(param_2)) {
    *piVar1 = (int)(*param_2);
  }
  iVar2 = (int)(*param_2);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  *(int *)param_2[1] = iVar2;
  *(int *)(iVar2 + 4) = param_2[1];
  piVar1 = (int *)((int *)param_2[4]);

  if (piVar1 != (int *)0x0) {
    param_2[3] = 0;
    param_2[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar3);
  }
  thunk_FUN_1148a50e(param_2,0x14);

  return (int)(iVar2);

 } catch (...) { }
}


// Reference entry 1036eec0; body size 120 bytes.
#line 1 "ENTRY_1036eec0"

int __thiscall Recovered_Bulk::FUN_1036eec0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  iVar1 = (int)(*param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  *(int *)param_2[1] = iVar1;
  *(int *)(iVar1 + 4) = param_2[1];
  piVar2 = (int *)((int *)param_2[4]);

  if (piVar2 != (int *)0x0) {
    param_2[3] = 0;
    param_2[4] = 0;
    (**(code **)(*piVar2 + 8))(uVar3);
  }
  thunk_FUN_1148a50e(param_2,0x14);

  return (int)(iVar1);

 } catch (...) { }
}


// Reference entry 1036f000; body size 76 bytes.
#line 1 "ENTRY_1036f000"

void __fastcall FUN_1036f000(int param_1)

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


// Reference entry 103701d0; body size 149 bytes.
#line 1 "ENTRY_103701d0"

void __thiscall Recovered_Bulk::FUN_103701d0(int *param_2,undefined4 param_3)
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


// Reference entry 10370be0; body size 154 bytes.
#line 1 "ENTRY_10370be0"

undefined1 __fastcall FUN_10370be0(int *param_1)

{
 try {
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (undefined4)((**(code **)(*(int *)param_1[0x32] + 100))(DAT_12126b84 ));
  thunk_FUN_11131cc0(uVar2,2,0);

  iVar3 = (int)(thunk_FUN_11132ba0());
  if (iVar3 == 0) {
    cVar1 = (char)((**(code **)(*param_1 + 0x17c))());
    if (cVar1 == '\0') {
      uVar4 = (undefined1)(1);
      goto LAB_10370c58;
    }
  }
  uVar4 = (undefined1)(0);
LAB_10370c58:
  thunk_FUN_11132140();

  return (undefined1)(uVar4);

 } catch (...) { }
}


// Reference entry 10370f20; body size 87 bytes.
#line 1 "ENTRY_10370f20"

void * FUN_10370f20(uint param_1)

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


// Reference entry 10371070; body size 245 bytes.
#line 1 "ENTRY_10371070"

undefined4 FUN_10371070(void)

{
 try {
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  iVar7 = (int)(1);
  do {
    iVar4 = (int)(iVar7);
    thunk_FUN_10be4f80(iVar7,uVar2);
    cVar1 = (char)(thunk_FUN_10be9ed0(iVar4));
    if (cVar1 != '\0') {
      uVar3 = (undefined4)(thunk_FUN_110828b0());
      thunk_FUN_11131cc0(uVar3,2,0);

      uVar6 = (uint)(0);
      iVar4 = (int)(thunk_FUN_11132ba0());
      if (iVar4 == 0) {
LAB_1037110e:
        thunk_FUN_11132140();

        return (undefined4)(0);
      }
      while( true ) {
        uVar3 = (undefined4)(thunk_FUN_11132c10(uVar6));
        iVar4 = (int)(thunk_FUN_10382dd0(uVar3,iVar7,0));
        if ((iVar4 == 5) || (iVar4 == 4)) break;
        uVar6 = (uint)(uVar6 + 1);
        uVar5 = (uint)(thunk_FUN_11132ba0());
        if (uVar5 <= uVar6) goto LAB_1037110e;
      }

      thunk_FUN_11132140();
    }
    iVar7 = (int)(iVar7 + 1);
    if (3 < iVar7) {

      return (undefined4)(1);
    }
  } while( true );

 } catch (...) { }
}


// Reference entry 103711b0; body size 299 bytes.
#line 1 "ENTRY_103711b0"

undefined1 __fastcall FUN_103711b0(int *param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *local_28;
  undefined4 *local_24;
  int *local_1c;
  int *local_18;
  char local_12;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;


  iVar5 = (int)((**(code **)(*param_1 + 0x194))(DAT_12126b84 ));
  if (iVar5 == 0) {

    return (undefined1)(1);
  }
  thunk_FUN_1037ddd0(&local_28,0);


  puVar6 = (undefined4 *)(local_28);
  if (local_28 != (undefined4 *)(local_24)) {
    do {
      piVar1 = (int *)((int *)puVar6[1]);
      piVar2 = (int *)((int *)*puVar6);
      local_1c = (int *)(piVar2);
      local_18 = (int *)(piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      local_12 = (char)(thunk_FUN_10328890());
      cVar4 = (char)((**(code **)(*piVar2 + 0x98))());
      if (((cVar4 == '\0') && (cVar4 = (**(code **)(*piVar2 + 0x58))(), cVar4 == '\0')) &&
         (cVar4 = thunk_FUN_10328710(), cVar4 == '\0')) {
        bVar3 = (bool)(true);
      }
      else {
        bVar3 = (bool)(false);
      }
      if ((local_12 == '\0') && (!bVar3)) {

        local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))();
        }
        break;
      }
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      if (piVar1 != (int *)0x0) {
        local_1c = (int *)((int *)0x0);
        local_18 = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
      puVar6 = (undefined4 *)(puVar6 + 2);
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
    } while (puVar6 != (undefined4 *)(local_24));
  }
  thunk_FUN_101f53d0();

  return (undefined1)(local_11);

 } catch (...) { }
}


// Reference entry 10371350; body size 267 bytes.
#line 1 "ENTRY_10371350"

undefined1 FUN_10371350(void)

{
 try {
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  undefined4 *local_28;
  undefined4 *local_24;
  int *local_1c;
  int *local_18;
  undefined1 local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;


  uVar5 = (uint)(DAT_12126b84);

  thunk_FUN_1037f130(&local_28,9);

  uVar6 = (undefined1)(0);
  if (local_28 != (undefined4 *)(local_24)) {

    puVar7 = (undefined4 *)(local_28);
    do {
      piVar1 = (int *)((int *)puVar7[1]);
      piVar2 = (int *)((int *)*puVar7);
      local_1c = (int *)(piVar2);
      local_18 = (int *)(piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar5);
      }
      local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      local_11 = (char)(thunk_FUN_10328890());
      cVar4 = (char)((**(code **)(*piVar2 + 0x98))());
      if (((cVar4 == '\0') && (cVar4 = (**(code **)(*piVar2 + 0x58))(), cVar4 == '\0')) &&
         (cVar4 = thunk_FUN_10328710(), cVar4 == '\0')) {
        bVar3 = (bool)(true);
      }
      else {
        bVar3 = (bool)(false);
      }
      if ((local_11 == '\0') && (!bVar3)) {
        local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))();
        }
        uVar6 = (undefined1)(0);
        break;
      }
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      if (piVar1 != (int *)0x0) {
        local_1c = (int *)((int *)0x0);
        local_18 = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
      puVar7 = (undefined4 *)(puVar7 + 2);
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      uVar6 = (undefined1)(local_12);
    } while (puVar7 != (undefined4 *)(local_24));
  }
  thunk_FUN_101f53d0();

  return (undefined1)(uVar6);

 } catch (...) { }
}


// Reference entry 10371680; body size 227 bytes.
#line 1 "ENTRY_10371680"

undefined1 __fastcall FUN_10371680(int param_1)

{
 try {
  int *piVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  undefined1 uVar6;
  int *piVar7;
  int *local_28;
  int *local_24;
  int local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;


  uVar5 = (uint)(DAT_12126b84);

  local_14 = (uint)((uint)*(ushort *)(param_1 + 0x834));
  thunk_FUN_1037f130(&local_28,9);

  piVar7 = (int *)(local_28);
  if (local_28 != (int *)(local_24)) {
    do {
      piVar1 = (int *)((int *)piVar7[1]);
      iVar2 = (int)(*piVar7);
      local_1c = (int)(iVar2);
      local_18 = (int *)(piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar5);
      }
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (iVar2 != 0) {
        sVar4 = (short)(thunk_FUN_103238a0());
        if (sVar4 != (short)local_14) {
          cVar3 = (char)(thunk_FUN_103273e0(local_14));
          if (cVar3 != '\0') {
            local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 8))();
            }
            uVar6 = (undefined1)(1);
            goto LAB_10371734;
          }
        }
      }
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      if (piVar1 != (int *)0x0) {

        local_18 = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
      piVar7 = (int *)(piVar7 + 2);
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
    } while (piVar7 != (int *)(local_24));
  }
  uVar6 = (undefined1)(0);
LAB_10371734:
  thunk_FUN_101f53d0();

  return (undefined1)(uVar6);

 } catch (...) { }
}


// Reference entry 10371f30; body size 71 bytes.
#line 1 "ENTRY_10371f30"

undefined4 __fastcall FUN_10371f30(int *param_1)

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
          return (undefined4)(1);
        }
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10371f90; body size 69 bytes.
#line 1 "ENTRY_10371f90"

undefined4 __fastcall FUN_10371f90(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (uint)((**(code **)(*(int *)(param_1 + 0xc) + 0x14))(9));
  uVar3 = (uint)(0);
  if (uVar1 != 0) {
    do {
      iVar2 = (int)((**(code **)(*(int *)(param_1 + 0xc) + 0x18))(uVar3,9));
      if ((*(char *)(iVar2 + 0x530) != '\0') && (*(int *)(iVar2 + 0x528) == 0)) {
        return (undefined4)(1);
      }
      uVar3 = (uint)(uVar3 + 1);
    } while (uVar3 < uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10371ff0; body size 196 bytes.
#line 1 "ENTRY_10371ff0"

void __fastcall FUN_10371ff0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x30) != 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x2c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int **)(param_1 + 0x20) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if ((*(int *)(param_1 + 0x3c) != 0) && (*(int **)(param_1 + 0x38) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x38));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}


// Reference entry 10372110; body size 463 bytes.
#line 1 "ENTRY_10372110"

void __fastcall FUN_10372110(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x178) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x178) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x174) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x1e0) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1e0) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x1dc) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x248) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x248) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x244) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x2b0) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x2b0) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x2ac) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x318) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x318) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x314) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x380) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x380) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x37c) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x418) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x418) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x414) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x480) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x480) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x47c) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x4e8) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x4e8) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x4e4) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x620) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x620) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x61c) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x5b8) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x5b8) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x5b4) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x110) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x110) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x10c) + 4))();
    }
  }
  if (*(int *)(param_1 + 0x728) != 0) {
    thunk_FUN_10384800();
  }
  thunk_FUN_10384890();
  return;
}


// Reference entry 10372420; body size 94 bytes.
#line 1 "ENTRY_10372420"

void __fastcall FUN_10372420(int param_1)

{
  int *piVar1;
  int local_4;
  
  if (*(uint *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    local_4 = (int)(param_1);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x1c) >> 3) {
      thunk_FUN_1036ec30(*(undefined4 *)*piVar1,(undefined4 *)*piVar1);
      return;
    }
    thunk_FUN_10353e20(piVar1,*piVar1);
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(param_1 + 8) = 0;
    local_4 = (int)(*piVar1);
    thunk_FUN_10359040(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&local_4);
  }
  return;
}


// Reference entry 10372530; body size 70 bytes.
#line 1 "ENTRY_10372530"

void __fastcall FUN_10372530(int param_1)

{
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
  return;
}


// Reference entry 10372670; body size 483 bytes.
#line 1 "ENTRY_10372670"

int * __stdcall FUN_10372670(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  SCLibrary *this_;
  int *piVar5;
  SCIAction *pSVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)(operator_new(0x20));

  local_14 = (int *)(piVar3);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)(operator_new(0x2c));
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      *piVar4 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar4[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      piVar4[2] = 0;
      piVar4[3] = 0;
      *piVar4 = (int)((int)(uint)&ghidra_vftable_SCAddCustomRadioActionFactory);
      *(undefined1 *)(piVar4 + 4) = 0;
      piVar4[5] = 0;
      piVar4[6] = 0;
      piVar4[7] = 0;
      piVar4[8] = 0;
      piVar4[9] = 0;
      piVar4[10] = 0;
    }
    *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar3[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar3[2] = (int)(uint)&ghidra_vftable_SCIActionDelegate;
    *piVar3 = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar3[2] = (int)(uint)&ghidra_vftable_SCCompoundAction;
    piVar3[3] = 0;
    piVar3[4] = 0;
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    piVar3[5] = (int)piVar4;
    piVar3[6] = 0;
    if (piVar4 != (int *)0x0) {
      if (*(code **)(*piVar4 + 0xc) != thunk_FUN_10211630) {
        piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2));
      }
      piVar3[6] = (int)piVar4;
      (**(code **)(*piVar4 + 4))();
    }
    *(undefined1 *)(piVar3 + 7) = 0;
  }
  piVar4 = (int *)((int *)0x0);

  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)(piVar3);
    if (*(code **)(*piVar3 + 0xc) != thunk_FUN_102116d0) {
      piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    }
    (**(code **)(*piVar4 + 4))();
  }
  pSVar6 = (SCIAction *)((SCIAction *)&local_14);

  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar5 = (int *)((int *)((SCLibrary *)(this_))->createActionContextForAction(pSVar6));
  piVar1 = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  *piVar5 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(piVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10372b70; body size 126 bytes.
#line 1 "ENTRY_10372b70"

undefined4 * __thiscall Recovered_Bulk::FUN_10372b70(undefined4 *param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0xe0));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103a69b0(param_1,param_3,param_4));
  }

  *param_2 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10373280; body size 295 bytes.
#line 1 "ENTRY_10373280"

int * __stdcall FUN_10373280(int *param_1)

{
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(8));
  local_14 = (int *)(piVar2);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
    piVar3 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCFactoryResetActionDescriptor);
    piVar3 = (int *)((int *)0x0);
    if (piVar2 != (int *)0x0) {
      if (*(code **)(*piVar2 + 0xc) == thunk_FUN_101da390) {
        (**(code **)(*piVar2 + 4))();
        piVar3 = (int *)(piVar2);
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(uVar1));
        (**(code **)(*piVar3 + 4))();
      }
    }
  }

  piVar4 = (int *)((int *)(**(code **)(*piVar2 + 0x34))(&local_14));
  piVar2 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar4 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  *param_1 = (int)((int)piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 103735c0; body size 329 bytes.
#line 1 "ENTRY_103735c0"

undefined4 * __thiscall Recovered_Bulk::FUN_103735c0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)((**(code **)(**(int **)(param_1 + 200) + 100))(DAT_12126b84 ));
  if (iVar1 != 0) {
    iVar1 = (int)((*(code *)**(undefined4 **)(param_1 + 0xc))());
    if (iVar1 != 0) {
      iVar2 = (int)(thunk_FUN_110ce190());
      if (*(int *)(iVar2 + 0x2c) != 0) {
        pvVar3 = (void *)(operator_new(0x54));

        if (pvVar3 == (void *)0x0) {
          uVar4 = (undefined4)(0);
        }
        else {
          uVar4 = (undefined4)(thunk_FUN_11135bc0(iVar1));
        }

        pvVar3 = (void *)(operator_new(0x28));

        if (pvVar3 == (void *)0x0) {
          piVar5 = (int *)((int *)0x0);
        }
        else {
          piVar5 = (int *)((int *)thunk_FUN_10ce2330(uVar4));
        }
        piVar6 = (int *)((int *)0x0);

        if (piVar5 != (int *)0x0) {
          piVar6 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
          (**(code **)(*piVar6 + 4))();
        }

        *param_2 = (undefined4)(piVar5);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 4))();
        }

        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))();
        }

        return (undefined4 *)(param_2);
      }
    }
    thunk_FUN_112af4e0("SCHousehold",1,"SPClient NULL for GetRDM");
  }
  *param_2 = (undefined4)(0);

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10373fc0; body size 269 bytes.
#line 1 "ENTRY_10373fc0"

undefined4 * FUN_10373fc0(undefined4 *param_1,undefined4 param_2)

{
 try {
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)thunk_FUN_1037b8c0(&local_14,param_2,DAT_12126b84 ));
  piVar3 = (int *)((int *)*piVar1);

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
  pvVar2 = (void *)(operator_new(0x1140));
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_1035dac0(-(uint)(piVar3 != (int *)0x0) & (uint)(piVar3 + 3)));
  }
  piVar4 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    (**(code **)(*piVar4 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 103742e0; body size 224 bytes.
#line 1 "ENTRY_103742e0"

undefined4 __stdcall FUN_103742e0(undefined4 param_1)

{
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x18));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = 0;
    piVar2[3] = 0;
    *(undefined2 *)(piVar2 + 4) = 0;
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCLegacyJoinExistingWizardActionDescriptor);
    piVar2[5] = 1;
  }
  piVar3 = (int *)((int *)0x0);

  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)(piVar2);
    if (*(code **)(*piVar2 + 0xc) != thunk_FUN_101da390) {
      piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(uVar1));
    }
    (**(code **)(*piVar3 + 4))();
  }

  (**(code **)(*piVar2 + 0x34))(param_1);

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10374400; body size 217 bytes.
#line 1 "ENTRY_10374400"

undefined4 __stdcall FUN_10374400(undefined4 param_1)

{
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x14));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = 0;
    piVar2[3] = 0;
    *(undefined2 *)(piVar2 + 4) = 0;
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCLegacySubmitDiagsWizardActionDescriptor);
  }
  piVar3 = (int *)((int *)0x0);

  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)(piVar2);
    if (*(code **)(*piVar2 + 0xc) != thunk_FUN_101da390) {
      piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(uVar1));
    }
    (**(code **)(*piVar3 + 4))();
  }

  (**(code **)(*piVar2 + 0x34))(param_1);

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10374510; body size 217 bytes.
#line 1 "ENTRY_10374510"

undefined4 __stdcall FUN_10374510(undefined4 param_1)

{
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x14));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = 0;
    piVar2[3] = 0;
    *(undefined2 *)(piVar2 + 4) = 0;
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizardActionDescriptor);
  }
  piVar3 = (int *)((int *)0x0);

  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)(piVar2);
    if (*(code **)(*piVar2 + 0xc) != thunk_FUN_101da390) {
      piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(uVar1));
    }
    (**(code **)(*piVar3 + 4))();
  }

  (**(code **)(*piVar2 + 0x34))(param_1);

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10374e20; body size 291 bytes.
#line 1 "ENTRY_10374e20"

undefined4 __stdcall FUN_10374e20(undefined4 param_1,int *param_2)

{
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x14));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCDisplayWizardActionDescriptorBase);
    piVar2[2] = 0;
    piVar2[3] = 0;

    *(undefined2 *)(piVar2 + 4) = 0;
    if (param_2 != (int *)0x0) {
      piVar3 = (int *)((int *)piVar2[3]);
      if (piVar3 != (int *)0x0) {
        piVar2[2] = 0;
        piVar2[3] = 0;
        (**(code **)(*piVar3 + 8))(uVar1);
      }
      piVar2[2] = (int)param_2;
      piVar3 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      piVar2[3] = (int)piVar3;
      (**(code **)(*piVar3 + 4))();
    }
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCMusicServiceWizardActionDescriptor);
    *(undefined1 *)((int)piVar2 + 0x11) = 1;
  }
  piVar3 = (int *)((int *)0x0);

  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)(piVar2);
    if (*(code **)(*piVar2 + 0xc) != thunk_FUN_101da390) {
      piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    }
    (**(code **)(*piVar3 + 4))();
  }

  (**(code **)(*piVar2 + 0x34))(param_1);

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 103751d0; body size 104 bytes.
#line 1 "ENTRY_103751d0"

undefined4 * FUN_103751d0(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10cb8420(&local_14,0,0,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10375260; body size 224 bytes.
#line 1 "ENTRY_10375260"

undefined4 __stdcall FUN_10375260(undefined4 param_1)

{
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x18));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = 0;
    piVar2[3] = 0;
    *(undefined2 *)(piVar2 + 4) = 0;
    piVar2[5] = 0;
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCUserTriggeredOnlineUpdateWizardActionDescriptor);
  }
  piVar3 = (int *)((int *)0x0);

  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)(piVar2);
    if (*(code **)(*piVar2 + 0xc) != thunk_FUN_101da390) {
      piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(uVar1));
    }
    (**(code **)(*piVar3 + 4))();
  }

  (**(code **)(*piVar2 + 0x34))(param_1);

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10375380; body size 224 bytes.
#line 1 "ENTRY_10375380"

undefined4 __stdcall FUN_10375380(undefined4 param_1)

{
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x18));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = 0;
    piVar2[3] = 0;
    *(undefined2 *)(piVar2 + 4) = 0;
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCOnlineUpdateWizardActionDescriptor);
    piVar2[5] = 1;
  }
  piVar3 = (int *)((int *)0x0);

  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)(piVar2);
    if (*(code **)(*piVar2 + 0xc) != thunk_FUN_101da390) {
      piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(uVar1));
    }
    (**(code **)(*piVar3 + 4))();
  }

  (**(code **)(*piVar2 + 0x34))(param_1);

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 103754a0; body size 249 bytes.
#line 1 "ENTRY_103754a0"

undefined4 * __thiscall Recovered_Bulk::FUN_103754a0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)((**(code **)(**(int **)(param_1 + 200) + 100))(DAT_12126b84 ));
  if (iVar1 != 0) {
    pvVar2 = (void *)(operator_new(0x48));

    if (pvVar2 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      (**(code **)(**(int **)(param_1 + 200) + 100))();
      uVar3 = (undefined4)(thunk_FUN_1107fc60());
      piVar4 = (int *)((int *)thunk_FUN_101b94f0(uVar3));
    }
    piVar5 = (int *)((int *)0x0);

    if (piVar4 != (int *)0x0) {
      piVar5 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      (**(code **)(*piVar5 + 4))();
    }

    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }

    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();
    }

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10375ab0; body size 104 bytes.
#line 1 "ENTRY_10375ab0"

undefined4 * __stdcall FUN_10375ab0(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10cb8420(&local_14,1,0,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 103760d0; body size 249 bytes.
#line 1 "ENTRY_103760d0"

undefined4 * __thiscall Recovered_Bulk::FUN_103760d0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)((**(code **)(**(int **)(param_1 + 200) + 100))(DAT_12126b84 ));
  if (iVar1 != 0) {
    pvVar2 = (void *)(operator_new(0x48));

    if (pvVar2 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      (**(code **)(**(int **)(param_1 + 200) + 100))();
      uVar3 = (undefined4)(thunk_FUN_1107fd10());
      piVar4 = (int *)((int *)thunk_FUN_101b94f0(uVar3));
    }
    piVar5 = (int *)((int *)0x0);

    if (piVar4 != (int *)0x0) {
      piVar5 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      (**(code **)(*piVar5 + 4))();
    }

    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }

    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();
    }

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 103768e0; body size 65 bytes.
#line 1 "ENTRY_103768e0"

void __stdcall FUN_103768e0(int param_1,int param_2)

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


// Reference entry 10376ce0; body size 76 bytes.
#line 1 "ENTRY_10376ce0"

void __fastcall FUN_10376ce0(int param_1)

{
  char cVar1;
  
  if (*(short *)(param_1 + 0x5c) == 0) {
    cVar1 = (char)(thunk_FUN_112023b0(param_1 + 0xdbd2));
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0xdbd1) = 1;
      thunk_FUN_112b0270("acct_country",4,
                         "RCustRegQueryCountryAIOOp; lookup returned invalid country: (%s)",
                         param_1 + 0xdbd2);
      *(undefined2 *)(param_1 + 0x5c) = 1000;
    }
  }
  thunk_FUN_111c1340();
  return;
}


// Reference entry 10376d80; body size 134 bytes.
#line 1 "ENTRY_10376d80"

void __fastcall FUN_10376d80(int param_1)

{
  char cVar1;
  short sVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  sVar2 = (short)(*(short *)(param_1 + 0x5c));
  if (sVar2 == 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0xdbf4) != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0xdbf4));
    }
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0xdbf0) != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)(*(undefined1 **)(param_1 + 0xdbf0));
    }
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0xdbec) != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0xdbec));
    }
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0xdbe8) != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)(*(undefined1 **)(param_1 + 0xdbe8));
    }
    thunk_FUN_1109f7f0(puVar6,puVar3,puVar4,puVar5);
    thunk_FUN_110a2e60(puVar6,puVar3,puVar4,puVar5);
    sVar2 = (short)(*(short *)(param_1 + 0x5c));
  }
  if (sVar2 == 0) {
    cVar1 = (char)(thunk_FUN_11202440(param_1 + 0xdbd1));
    if (cVar1 == '\0') {
      *(undefined2 *)(param_1 + 0x5c) = 1000;
    }
  }
  thunk_FUN_111c1340();
  return;
}


// Reference entry 103781d0; body size 110 bytes.
#line 1 "ENTRY_103781d0"

void __fastcall FUN_103781d0(undefined4 param_1)

{
 try {
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  pvVar1 = (void *)(operator_new(0x6c));

  if (pvVar1 == (void *)0x0) {
    uVar2 = (undefined4)(0);
  }
  else {
    uVar2 = (undefined4)(thunk_FUN_111c06e0(0));
  }

  thunk_FUN_102207b0(uVar2,param_1,0);

  return;

 } catch (...) { }
}


// Reference entry 103786d0; body size 67 bytes.
#line 1 "ENTRY_103786d0"

undefined4 __thiscall Recovered_Bulk::FUN_103786d0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  thunk_FUN_10309500();
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x14) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x14));
  }
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x10) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x10));
  }
  thunk_FUN_1030a0d0(puVar2,puVar1,*(undefined4 *)(param_1 + 0x18),0);
  (**(code **)(**(int **)(param_1 + 8) + 0x34))(param_2);
  return (undefined4)(param_2);
}


// Reference entry 10378a20; body size 100 bytes.
#line 1 "ENTRY_10378a20"

undefined4 * __thiscall Recovered_Bulk::FUN_10378a20(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1d8))(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10378ab0; body size 472 bytes.
#line 1 "ENTRY_10378ab0"

undefined4 * __stdcall FUN_10378ab0(undefined4 *param_1,undefined4 param_2)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar4 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;


  thunk_FUN_1037f130(&local_38,9);

  puVar2 = (undefined4 *)(local_38);
  if ((char)param_2 != '\0') {
    thunk_FUN_1037ddd0(&local_2c,0);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    thunk_FUN_10354880(local_34,local_2c,local_28,param_2);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_101f53d0(uVar4);
    puVar2 = (undefined4 *)(local_38);
  }
  for (; puVar2 != (undefined4 *)(local_34); puVar2 = puVar2 + 2) {
    piVar6 = (int *)((int *)puVar2[1]);
    piVar5 = (int *)((int *)*puVar2);
    local_28 = (int *)(piVar5);
    local_24 = (int *)(piVar6);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    cVar3 = (char)((**(code **)(*piVar5 + 0x38))());
    if ((cVar3 != '\0') && (cVar3 = (**(code **)(*piVar5 + 0x3c))(), cVar3 != '\0')) {
      piVar5 = (int *)((int *)thunk_FUN_10c944f0(&local_18,piVar5));
      piVar6 = (int *)((int *)*piVar5);
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      *piVar5 = (int)(0);
      local_20 = (int *)(piVar6);
      if (piVar6 == (int *)0x0) {
        piVar5 = (int *)((int *)0x0);
      }
      else {
        piVar5 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
      }
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      local_1c = (int *)(piVar5);
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 8))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
      piVar1 = (int *)((int *)param_1[1]);
      if (piVar1 == (int *)param_1[2]) {
        thunk_FUN_103532a0(piVar1,&local_20);
      }
      else {
        *piVar1 = (int)((int)piVar6);
        piVar1[1] = (int)piVar5;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 4))();
        }
        param_1[1] = param_1[1] + 8;
      }
      *(unsigned char *)((char *)&local_8 + 0) = 8;
      piVar6 = (int *)(local_24);
      if (piVar5 != (int *)0x0) {
        local_20 = (int *)((int *)0x0);
        local_1c = (int *)((int *)0x0);
        (**(code **)(*piVar5 + 8))();
        piVar6 = (int *)(local_24);
      }
    }
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    if (piVar6 != (int *)0x0) {
      local_28 = (int *)((int *)0x0);
      local_24 = (int *)((int *)0x0);
      (**(code **)(*piVar6 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  }
  thunk_FUN_101f53d0(uVar4);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10378d00; body size 275 bytes.
#line 1 "ENTRY_10378d00"

undefined4 * __thiscall Recovered_Bulk::FUN_10378d00(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  void *pvVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0xf0) == 0) {
    pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    if ((*(int *)(pSVar3 + 0x4c) == 0) || (*(char *)(*(int *)(pSVar3 + 0x4c) + 0x52) != '\0')) {
      pvVar4 = (void *)(operator_new(0x94));

      if (pvVar4 == (void *)0x0) {
        piVar5 = (int *)((int *)0x0);
      }
      else {
        piVar5 = (int *)((int *)thunk_FUN_102a88c0(param_1));
      }

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
    (**(code **)(**(int **)(param_1 + 0xf0) + 0x14))(param_2,uVar2);

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10379660; body size 100 bytes.
#line 1 "ENTRY_10379660"

undefined4 * __thiscall Recovered_Bulk::FUN_10379660(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1e4))(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10379750; body size 75 bytes.
#line 1 "ENTRY_10379750"

void __thiscall Recovered_Bulk::FUN_10379750(int *param_2)
{
  int param_1 = (int )this;
 try {
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  local_14 = (int)(param_1);
  (**(code **)(**(int **)(param_1 + 200) + 0x40))(&local_14,DAT_12126b84 );
  *param_2 = (int)(local_14);

  return;

 } catch (...) { }
}


// Reference entry 103797c0; body size 224 bytes.
#line 1 "ENTRY_103797c0"

undefined4 * __thiscall Recovered_Bulk::FUN_103797c0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  (**(code **)(**(int **)(param_1 + 0xb8) + 0x40))(&local_14,DAT_12126b84 );
  piVar1 = (int *)(local_14);

  local_14 = (int *)((int *)0x0);
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
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 == (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10c944f0(&local_18,piVar1));
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_10351370(uVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }

  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10379900; body size 151 bytes.
#line 1 "ENTRY_10379900"

int __fastcall FUN_10379900(int *param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  piVar2 = (int *)((int *)(**(code **)(*(int *)param_1[0x2f] + 0x40))
                            (&local_14,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  if (piVar1 == (int *)0x0) {
    iVar3 = (int)(0);
  }
  else {
    iVar3 = (int)(piVar1[2]);
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (int)(iVar3);

 } catch (...) { }
}


// Reference entry 103799c0; body size 64 bytes.
#line 1 "ENTRY_103799c0"

undefined1 * __stdcall FUN_103799c0(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = (int)(thunk_FUN_110828b0());
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (undefined1)(0);
  pcVar3 = (char *)((char *)(iVar2 + 0xad1));
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130((char *)(iVar2 + 0xad1),(int)pcVar3 - (iVar2 + 0xad2));
  return (undefined1 *)(param_1);
}


// Reference entry 10379c10; body size 97 bytes.
#line 1 "ENTRY_10379c10"

undefined4 * __stdcall FUN_10379c10(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_10379c90(&local_14));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10379c90; body size 512 bytes.
#line 1 "ENTRY_10379c90"

int * __thiscall Recovered_Bulk::FUN_10379c90(int *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0xf8) == 0) {
    piVar2 = (int *)(operator_new(0x20));
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)((int *)0x0);
    }
    else {
      *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar2[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);

      *piVar2 = (int)((int)(uint)&ghidra_vftable_SCBrowseListPresentationMapProxy);
      piVar3 = (int *)(operator_new(8));
      if (piVar3 == (int *)0x0) {
        piVar2[2] = 0;
        piVar2[3] = 0;
      }
      else {
        *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
        piVar3[1] = 0;
        g_lSCObjCount = (int)(g_lSCObjCount + 1);
        *piVar3 = (int)((int)(uint)&ghidra_vftable_SCDefaultBrowseListPresentationMap);
        piVar2[2] = (int)piVar3;
        piVar2[3] = 0;
        if (piVar3 != (int *)0x0) {
          if (*(code **)(*piVar3 + 0xc) != thunk_FUN_102f8950) {
            piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
          }
          piVar2[3] = (int)piVar3;
          (**(code **)(*piVar3 + 4))();
        }
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
      piVar3 = (int *)(operator_new(8));
      if (piVar3 == (int *)0x0) {
        piVar2[4] = 0;
        piVar2[5] = 0;
      }
      else {
        *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
        piVar3[1] = 0;
        g_lSCObjCount = (int)(g_lSCObjCount + 1);
        *piVar3 = (int)((int)(uint)&ghidra_vftable_SCSonosBrowseListPresentationMap);
        piVar2[4] = (int)piVar3;
        piVar2[5] = 0;
        if (piVar3 != (int *)0x0) {
          if (*(code **)(*piVar3 + 0xc) != thunk_FUN_102f8950) {
            piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
          }
          piVar2[5] = (int)piVar3;
          (**(code **)(*piVar3 + 4))();
        }
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
      piVar2[6] = 0;
      piVar2[7] = 0;
      pvVar4 = (void *)(operator_new(0x1c));
      *(void **)pvVar4 = (void *)(pvVar4);
      *(void **)((int)pvVar4 + 4) = pvVar4;
      *(void **)((int)pvVar4 + 8) = pvVar4;
      *(undefined2 *)((int)pvVar4 + 0xc) = 0x101;
      piVar2[6] = (int)pvVar4;
    }

    if (piVar2 != *(int **)(param_1 + 0xf8)) {
      piVar3 = (int *)(*(int **)(param_1 + 0xfc));
      if (piVar3 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0xf8) = 0;
        *(undefined4 *)(param_1 + 0xfc) = 0;
        (**(code **)(*piVar3 + 8))();
      }
      *(int **)(param_1 + 0xf8) = piVar2;
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0xfc) = 0;
      }
      else {
        if (*(code **)(*piVar2 + 0xc) != thunk_FUN_102f8950) {
          piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
        }
        *(int **)(param_1 + 0xfc) = piVar2;
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  piVar2 = (int *)(*(int **)(param_1 + 0xf8));
  *param_2 = (int)((int)piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(uVar1);
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10379f40; body size 110 bytes.
#line 1 "ENTRY_10379f40"

void FUN_10379f40(void)

{
  char cVar1;
  int iVar2;
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
  iVar2 = (int)(thunk_FUN_1109f7f0());
  if (iVar2 != 0) {
    cVar1 = (char)(thunk_FUN_1109f0a0(PTR_s_CachedNumRooms_12119578,local_24,0x20));
    if ((cVar1 != '\0') && (local_24[0] != '\0')) {
      atoi(local_24);
      thunk_FUN_1148ac28();
      return;
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1037a030; body size 391 bytes.
#line 1 "ENTRY_1037a030"

undefined4 * __thiscall Recovered_Bulk::FUN_1037a030(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_100 [164];
  undefined4 uStack_5c;
  int **ppiStack_58;
  int **ppiStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  int *local_28;
  int *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  uStack_44 = (uint)(DAT_12126b84);

  piVar8 = (int *)((int *)0x0);
  piVar7 = (int *)((int *)0x0);
  local_1c = (undefined1 *)(auStack_100);



  local_20 = (int)(param_1);
  local_18 = (undefined1 *)(local_1c);
  uVar2 = (uint)((**(code **)(*(int *)(param_1 + 0xc) + 0x14))());
  uVar6 = (uint)(0);
  if (uVar2 != 0) {
    do {
      ppiStack_54 = (int **)(&local_24);

      ppiStack_58 = (int **)((int **)0x1037a09c);
      uStack_50 = (uint)(uVar6);
      piVar3 = (int *)((int *)(**(code **)(**(int **)(local_20 + 200) + 0x38))());
      piVar8 = (int *)((int *)*piVar3);
      local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      *piVar3 = (int)(0);
      if (piVar7 != (int *)0x0) {
        ppiStack_58 = (int **)((int **)0x1037a0c1);
        (**(code **)(*piVar7 + 8))();
      }
      if (piVar8 == (int *)0x0) {
        piVar7 = (int *)((int *)0x0);
      }
      else {
        ppiStack_58 = (int **)((int **)0x1037a0cf);
        piVar7 = (int *)((int *)(**(code **)(*piVar8 + 0xc))());
      }
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      if (local_24 != (int *)0x0) {
        ppiStack_58 = (int **)((int **)0x1037a0e8);
        (**(code **)(*local_24 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0;
      ppiStack_58 = (int **)((int **)0x1037a0f3);
      iVar4 = (int)(thunk_FUN_10323ac0());
      local_18 = (undefined1 *)((undefined1 *)((uint)local_18 & 0xff));
      if (iVar4 == 3) {
        local_18 = (undefined1 *)((undefined1 *)0x1);
      }
      ppiStack_58 = (int **)(&local_28);

      puVar5 = (undefined4 *)((undefined4 *)(**(code **)(*piVar8 + 0x94))());
      *(unsigned char *)((char *)&local_8 + 0) = 3;

      iVar4 = (int)((**(code **)(*(int *)*puVar5 + 0x14))());
      local_11 = (char)(0x33 < iVar4);
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      if (local_28 != (int *)0x0) {

        (**(code **)(*local_28 + 8))();
      }
      local_1c = (undefined1 *)((undefined1 *)((uint)local_1c & 0xff));
      if (local_11 != '\0') {
        local_1c = (undefined1 *)((undefined1 *)0x1);
      }
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);

      uStack_4c = (undefined4)((**(code **)(*piVar8 + 0xcc))());

      cVar1 = (char)(thunk_FUN_114577b0());
    } while (((((char)local_18 == '\0') || ((char)local_1c == '\0')) || (cVar1 != '\0')) &&
            (uVar6 = (uint)(uVar6 + 1, uVar6 < uVar2)));
  }
  *param_2 = (undefined4)(piVar8);
  if (piVar8 != (int *)0x0) {

    (**(code **)(*piVar8 + 4))();
  }

  if (piVar7 != (int *)0x0) {

    (**(code **)(*piVar7 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1037a2b0; body size 236 bytes.
#line 1 "ENTRY_1037a2b0"

undefined4 * FUN_1037a2b0(undefined4 *param_1)

{
 try {
  uint uVar1;
  SCLibrary *this_;
  int **ppiVar2;
  int *piVar3;
  int *piVar4;
  int *local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)0x0);
  if (this_ != (SCLibrary *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*(int *)this_ + 0xc))(uVar1));
    (**(code **)(*piVar4 + 4))();
  }

  if (this_ == (SCLibrary *)0x0) {
    ppiVar2 = (int **)(&local_18);
    uVar1 = (uint)(2);
    piVar3 = (int *)((int *)0x0);
  }
  else {
    ppiVar2 = (int **)((int **)((SCLibrary *)(this_))->getSCHousehold());
    piVar3 = (int *)(*ppiVar2);
    uVar1 = (uint)(1);
  }
  *ppiVar2 = (int *)((int *)0x0);
  *param_1 = (undefined4)(piVar3);
  if ((uVar1 & 2) != 0) {
    uVar1 = (uint)(uVar1 & 0xfffffffd | 4);

    local_14 = (uint)(uVar1);
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  if ((uVar1 & 1) != 0) {

    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1037a700; body size 103 bytes.
#line 1 "ENTRY_1037a700"

undefined4 * __thiscall Recovered_Bulk::FUN_1037a700(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*(int *)param_1[0x32] + 0x3c))
                     (&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1037a790; body size 270 bytes.
#line 1 "ENTRY_1037a790"

undefined4 * __thiscall Recovered_Bulk::FUN_1037a790(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 200) + 0x10))
                            (&local_14,DAT_12126b84 ));
  piVar3 = (int *)((int *)*piVar1);

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
  if (piVar3 == (int *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)(**(code **)(**(int **)(param_1 + 0xcc) + 0x10))(&local_18));
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
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_2 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1037a8f0; body size 100 bytes.
#line 1 "ENTRY_1037a8f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1037a8f0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1ac))(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1037a980; body size 128 bytes.
#line 1 "ENTRY_1037a980"

SCStr * __stdcall FUN_1037a980(SCStr *param_1)

{
 try {
  undefined4 *puVar1;
  char *pcVar2;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1037a3e0(local_14,DAT_12126b84 ));

  if (((char *)*puVar1 == (char *)0x0) || (*(char *)*puVar1 == '\0')) {
    pcVar2 = (char *)("");
  }
  else {
    thunk_FUN_1109f7f0();
    pcVar2 = (char *)((char *)thunk_FUN_1109f750());
  }
  ((SCStr *)(param_1))->int_allocRep(pcVar2);

  ((SCStr *)(local_14))->int_release();

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 1037aa20; body size 100 bytes.
#line 1 "ENTRY_1037aa20"

undefined4 * __thiscall Recovered_Bulk::FUN_1037aa20(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1dc))(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1037aad0; body size 207 bytes.
#line 1 "ENTRY_1037aad0"

uint __stdcall FUN_1037aad0(ushort param_1)

{
 try {
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;


  uVar3 = (uint)(DAT_12126b84);

  uVar4 = (uint)(0);

  thunk_FUN_1037f130(&local_28,9);

  puVar5 = (undefined4 *)(local_28);
  if (local_28 != (undefined4 *)(local_24)) {
    do {
      piVar1 = (int *)((int *)puVar5[1]);
      local_1c = (undefined4)(*puVar5);
      local_18 = (int *)(piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar3);
      }
      local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar2 = (ushort)(thunk_FUN_103238a0());
      if (uVar2 < param_1) {
        uVar4 = (uint)(4);
      }
      else {
        uVar2 = (ushort)(thunk_FUN_103238a0());
        uVar4 = (uint)((uVar2 == param_1) + 1);
      }
      uVar4 = (uint)(uVar4 | local_14);
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      if (piVar1 != (int *)0x0) {

        local_18 = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
      puVar5 = (undefined4 *)(puVar5 + 2);
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      local_14 = (uint)(uVar4);
    } while (puVar5 != (undefined4 *)(local_24));
  }
  thunk_FUN_101f53d0();

  return (uint)(uVar4);

 } catch (...) { }
}


// Reference entry 1037abe0; body size 94 bytes.
#line 1 "ENTRY_1037abe0"

undefined4 __stdcall FUN_1037abe0(undefined4 param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  undefined1 local_1c [12];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_1037f130(local_1c,param_2);

  thunk_FUN_103230a0(param_1);
  thunk_FUN_101f53d0(uVar1);

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1037ac60; body size 433 bytes.
#line 1 "ENTRY_1037ac60"

undefined4 * __stdcall FUN_1037ac60(undefined4 *param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *local_38;
  int *local_34;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar4 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;


  thunk_FUN_10381240(&local_38,0);

  piVar6 = (int *)(local_38);
  if (local_38 != (int *)(local_34)) {
    do {
      piVar1 = (int *)((int *)piVar6[1]);
      piVar5 = (int *)((int *)*piVar6);
      local_2c = (int *)(piVar5);
      local_28 = (int *)(piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar4);
      }
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      if ((((piVar5 == (int *)0x0) || (cVar3 = (**(code **)(*piVar5 + 0x3c))(), cVar3 == '\0')) ||
          (cVar3 = (**(code **)(*piVar5 + 0x1c))(), cVar3 != '\0')) ||
         (cVar3 = thunk_FUN_103277d0(), cVar3 == '\0')) {
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
      }
      else {
        piVar5 = (int *)((int *)thunk_FUN_10c944f0(&local_1c,piVar5));
        local_24 = (int *)((int *)*piVar5);
        *(unsigned char *)((char *)&local_8 + 0) = 4;
        *piVar5 = (int)(0);
        local_18 = (int *)(local_24);
        if (local_24 == (int *)0x0) {
          piVar5 = (int *)((int *)0x0);
        }
        else {
          piVar5 = (int *)((int *)(**(code **)(*local_24 + 0xc))());
        }
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
        piVar2 = (int *)((int *)param_1[1]);
        local_20 = (int *)(piVar5);
        if (piVar2 == (int *)param_1[2]) {
          thunk_FUN_103535f0(piVar2,&local_24);
        }
        else {
          *piVar2 = (int)((int)local_18);
          piVar2[1] = (int)piVar5;
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 4))();
          }
          param_1[1] = param_1[1] + 8;
        }
        *(unsigned char *)((char *)&local_8 + 0) = 6;
        if (piVar5 != (int *)0x0) {
          local_24 = (int *)((int *)0x0);
          local_20 = (int *)((int *)0x0);
          (**(code **)(*piVar5 + 8))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 7;
        if (local_1c != (int *)0x0) {
          (**(code **)(*local_1c + 8))();
        }
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
      }
      if (piVar1 != (int *)0x0) {
        local_28 = (int *)((int *)0x0);
        local_2c = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
      piVar6 = (int *)(piVar6 + 2);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    } while (piVar6 != (int *)(local_34));
  }
  thunk_FUN_101f53d0();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1037ae80; body size 433 bytes.
#line 1 "ENTRY_1037ae80"

undefined4 * __stdcall FUN_1037ae80(undefined4 *param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *local_38;
  int *local_34;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar4 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;


  thunk_FUN_10381240(&local_38,0);

  piVar6 = (int *)(local_38);
  if (local_38 != (int *)(local_34)) {
    do {
      piVar1 = (int *)((int *)piVar6[1]);
      piVar5 = (int *)((int *)*piVar6);
      local_2c = (int *)(piVar5);
      local_28 = (int *)(piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar4);
      }
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      if ((((piVar5 == (int *)0x0) || (cVar3 = (**(code **)(*piVar5 + 0x3c))(), cVar3 == '\0')) ||
          (cVar3 = (**(code **)(*piVar5 + 0x1c))(), cVar3 != '\0')) ||
         (cVar3 = thunk_FUN_10327820(), cVar3 == '\0')) {
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
      }
      else {
        piVar5 = (int *)((int *)thunk_FUN_10c944f0(&local_1c,piVar5));
        local_24 = (int *)((int *)*piVar5);
        *(unsigned char *)((char *)&local_8 + 0) = 4;
        *piVar5 = (int)(0);
        local_18 = (int *)(local_24);
        if (local_24 == (int *)0x0) {
          piVar5 = (int *)((int *)0x0);
        }
        else {
          piVar5 = (int *)((int *)(**(code **)(*local_24 + 0xc))());
        }
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
        piVar2 = (int *)((int *)param_1[1]);
        local_20 = (int *)(piVar5);
        if (piVar2 == (int *)param_1[2]) {
          thunk_FUN_103535f0(piVar2,&local_24);
        }
        else {
          *piVar2 = (int)((int)local_18);
          piVar2[1] = (int)piVar5;
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 4))();
          }
          param_1[1] = param_1[1] + 8;
        }
        *(unsigned char *)((char *)&local_8 + 0) = 6;
        if (piVar5 != (int *)0x0) {
          local_24 = (int *)((int *)0x0);
          local_20 = (int *)((int *)0x0);
          (**(code **)(*piVar5 + 8))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 7;
        if (local_1c != (int *)0x0) {
          (**(code **)(*local_1c + 8))();
        }
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
      }
      if (piVar1 != (int *)0x0) {
        local_28 = (int *)((int *)0x0);
        local_2c = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
      piVar6 = (int *)(piVar6 + 2);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    } while (piVar6 != (int *)(local_34));
  }
  thunk_FUN_101f53d0();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1037b130; body size 800 bytes.
#line 1 "ENTRY_1037b130"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __stdcall FUN_1037b130(int *param_1)

{
 try {
  void *_Memory;
  int *piVar1;
  uint uVar2;
  int *piVar3;
  SCLibrary *pSVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int *local_18b4;
  int *local_18ac;
  int *local_18a8;
  int local_18a4;
  int local_18a0;
  int local_189c;
  int *local_1898;
  undefined4 local_1894;
  int *local_1890;
  char *local_188c;
  void *local_1888;
  undefined1 *puStack_1884;
  undefined4 local_1880;
  undefined1 local_187c [66];
  char local_183a [6194];
  uint local_8;


  uVar2 = (uint)(DAT_12126b84 ^ (uint)local_187c);

  local_1898 = (int *)(param_1);
  local_1890 = (int *)(param_1);
  local_8 = (uint)(uVar2);
  piVar3 = (int *)((int *)createSCStringArray());
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    local_18b4 = (int *)((int *)0x0);
  }
  else {
    local_18b4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_1880 + 0) = 3;
  if (local_18ac != (int *)0x0) {
    (**(code **)(*local_18ac + 8))();
  }
  *(unsigned char *)((char *)&local_1880 + 0) = 2;
  pSVar4 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  local_18a8 = (int *)((int *)0x0);
  if (pSVar4 != (SCLibrary *)0x0) {
    ((SCStr *)((SCStr *)&local_188c))->int_allocRep("SCINetworkManagement");
    *(unsigned char *)((char *)&local_1880 + 0) = 4;
    puVar5 = (undefined4 *)((undefined4 *)(*(code *)**(undefined4 **)pSVar4)(&local_1890,&local_188c));
    local_18a8 = (int *)((int *)*puVar5);
    *puVar5 = (undefined4)(0);
    *(unsigned char *)((char *)&local_1880 + 0) = 6;
    if (local_1890 != (int *)0x0) {
      (**(code **)(*local_1890 + 8))();
    }
    *(unsigned char *)((char *)&local_1880 + 0) = 7;
    ((SCStr *)((SCStr *)&local_188c))->int_release();
    local_188c = (char *)((char *)0x0);
  }
  *(unsigned char *)((char *)&local_1880 + 0) = 8;
  thunk_FUN_10bbbfe0(&local_1894);


  *(unsigned char *)((char *)&local_1880 + 0) = 10;
  thunk_FUN_101a2b90(&local_1894);
  iVar7 = (int)(local_189c);
  local_1880 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_1880 + 1)) << 8 | (uint)(0xd)));
  if (((local_189c != 0) && (piVar3 = (int *)(local_189c + -0x10), *piVar3 < 0xffff)) &&
     (iVar6 = thunk_FUN_1123fcd0(piVar3), iVar6 == 0)) {
    *(undefined4 *)(iVar7 + -8) = 0;
    *(undefined4 *)(iVar7 + -0xc) = 0;
    thunk_FUN_113cfb70(iVar7,*(undefined4 *)(iVar7 + -4));
    free(piVar3);
  }
  local_189c = (int)(local_18a4);
  if ((local_18a4 != 0) && (*(int *)(local_18a4 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0(local_18a4 + -0x10);
  }
  *(unsigned char *)((char *)&local_1880 + 0) = 0xe;
  if (((local_18a4 != 0) && (*(int *)(local_18a4 + -0x10) < 0xffff)) &&
     (iVar7 = thunk_FUN_1123fcd0((void *)(local_18a4 + -0x10)), iVar7 == 0)) {
    *(undefined4 *)(local_18a4 + -8) = 0;
    *(undefined4 *)(local_18a4 + -0xc) = 0;
    thunk_FUN_113cfb70(local_18a4,*(undefined4 *)(local_18a4 + -4));
    free((void *)(local_18a4 + -0x10));
  }
  *(unsigned char *)((char *)&local_1880 + 0) = 10;
  iVar7 = (int)(thunk_FUN_110f2980());
  if ((iVar7 != 0) &&
     (piVar3 = (int *)thunk_FUN_110f4420(&local_18a0,2,local_187c,5), local_1890 = piVar3,
     piVar3 != (int *)0x0)) {
    pcVar8 = (char *)(local_183a);
    do {
      ((SCStr *)((SCStr *)&local_188c))->int_allocRep(pcVar8);
      *(unsigned char *)((char *)&local_1880 + 0) = 0xf;
      if ((local_188c != (char *)0x0) && (*local_188c != '\0')) {
        (**(code **)(*piVar1 + 0x24))(&local_188c);
      }
      *(unsigned char *)((char *)&local_1880 + 0) = 0x10;
      ((SCStr *)((SCStr *)&local_188c))->int_release();
      pcVar8 = (char *)(pcVar8 + 0x4e4);
      local_188c = (char *)((char *)0x0);
      *(unsigned char *)((char *)&local_1880 + 0) = 10;
      piVar3 = (int *)((int *)((int)piVar3 + -1));
    } while (piVar3 != (int *)0x0);
  }
  *local_1898 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  *(unsigned char *)((char *)&local_1880 + 0) = 0x11;
  if (((local_189c != 0) && (*(int *)(local_189c + -0x10) < 0xffff)) &&
     (iVar7 = thunk_FUN_1123fcd0((void *)(local_189c + -0x10)), iVar7 == 0)) {
    *(undefined4 *)(local_189c + -8) = 0;
    *(undefined4 *)(local_189c + -0xc) = 0;
    thunk_FUN_113cfb70(local_189c,*(undefined4 *)(local_189c + -4));
    free((void *)(local_189c + -0x10));
  }
  iVar7 = (int)(local_18a0);
  *(unsigned char *)((char *)&local_1880 + 0) = 0x12;
  if (((local_18a0 != 0) &&
      (_Memory = (void *)(local_18a0 + -0x10), *(int *)(local_18a0 + -0x10) < 0xffff)) &&
     (iVar6 = thunk_FUN_1123fcd0(_Memory), iVar6 == 0)) {
    *(undefined4 *)(iVar7 + -8) = 0;
    *(undefined4 *)(iVar7 + -0xc) = 0;
    thunk_FUN_113cfb70(iVar7,*(undefined4 *)(iVar7 + -4));
    free(_Memory);
  }
  *(unsigned char *)((char *)&local_1880 + 0) = 0x13;
  ((SCStr *)((SCStr *)&local_1894))->int_release();

  local_1880 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_1880 + 1)) << 8 | (uint)(0x14)));
  if (local_18a8 != (int *)0x0) {
    (**(code **)(*local_18a8 + 8))();
  }

  if (local_18b4 != (int *)0x0) {
    (**(code **)(*local_18b4 + 8))();
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 1037c140; body size 115 bytes.
#line 1 "ENTRY_1037c140"

undefined4 __stdcall FUN_1037c140(undefined4 param_1,undefined4 param_2)

{
 try {
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)(local_14))->int_allocRep("");

  thunk_FUN_103869d0(param_1,3,0,local_14,param_2);

  ((SCStr *)(local_14))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1037c1d0; body size 186 bytes.
#line 1 "ENTRY_1037c1d0"

undefined4 __stdcall FUN_1037c1d0(undefined4 param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;




  ((SCStr *)((SCStr *)&local_14))->int_allocRep("");
  puVar2 = (undefined4 *)(&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  uVar1 = (undefined4)(0);
  thunk_FUN_103869d0(local_30,3,0,puVar2,0);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  uVar3 = (undefined4)(0x1037c248);
  ((SCStr *)((SCStr *)&local_14))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  thunk_FUN_1035ccc0(local_30);
  thunk_FUN_10387aa0(param_1,uVar1,puVar2,uVar3);
  thunk_FUN_101f53d0();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1037c2c0; body size 116 bytes.
#line 1 "ENTRY_1037c2c0"

undefined4 __stdcall FUN_1037c2c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)(local_14))->int_allocRep("");

  thunk_FUN_103869d0(param_1,3,param_2,local_14,param_3);

  ((SCStr *)(local_14))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1037c390; body size 230 bytes.
#line 1 "ENTRY_1037c390"

undefined4 FUN_1037c390(undefined4 param_1,char *param_2)

{
 try {
  char *pcVar1;
  uint uVar2;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 local_24 [16];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (undefined4)(param_1);

  pcVar1 = (char *)((char *)&param_2);
  if (0xf < in_stack_0000001c) {
    pcVar1 = (char *)(param_2);
  }
  ((SCStr *)((SCStr *)&local_14))->int_allocRep(pcVar1);
  puVar4 = (undefined4 *)(&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  uVar3 = (undefined4)(0);
  thunk_FUN_103869d0(local_24,3,0,puVar4,in_stack_00000020);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  uVar5 = (undefined4)(0x1037c401);
  ((SCStr *)((SCStr *)&local_14))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  thunk_FUN_1035ccc0(local_24);
  thunk_FUN_10387aa0(param_1,uVar3,puVar4,uVar5);
  thunk_FUN_101f53d0();
  if (0xf < in_stack_0000001c) {
    uVar2 = (uint)(in_stack_0000001c + 1);
    pcVar1 = (char *)(param_2);
    if (0xfff < uVar2) {
      pcVar1 = (char *)(*(char **)(param_2 + -4));
      uVar2 = (uint)(in_stack_0000001c + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar1)) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(pcVar1,uVar2);
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1037c500; body size 150 bytes.
#line 1 "ENTRY_1037c500"

undefined1 * __thiscall Recovered_Bulk::FUN_1037c500(undefined1 *param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*(int *)(param_1 + -0x10) + 0x14))
                     (&local_14,DAT_12126b84 ));

  pcVar4 = (char *)("");
  if ((char *)*puVar2 != (char *)0x0) {
    pcVar4 = (char *)((char *)*puVar2);
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = (undefined1)(0);
  pcVar3 = (char *)(pcVar4);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130(pcVar4,(int)pcVar3 - (int)(pcVar4 + 1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1 *)(param_2);

 } catch (...) { }
}


// Reference entry 1037c5f0; body size 114 bytes.
#line 1 "ENTRY_1037c5f0"

undefined4 __stdcall FUN_1037c5f0(undefined4 param_1)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 local_20 [16];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  uVar4 = (undefined4)(0x11);
  puVar3 = (undefined1 *)(local_20);
  uVar2 = (undefined4)(0x1037c626);
  thunk_FUN_1037f130(puVar3,0x11);

  thunk_FUN_1035ccc0(local_20);
  thunk_FUN_10387aa0(param_1,uVar2,puVar3,uVar4);
  thunk_FUN_101f53d0(uVar1);

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1037c8f0; body size 225 bytes.
#line 1 "ENTRY_1037c8f0"

int * __thiscall Recovered_Bulk::FUN_1037c8f0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0xd8) == 0) {
    pvVar3 = (void *)(operator_new(0xc0));

    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_10cdb650());
    }

    if (piVar4 != *(int **)(param_1 + 0xd8)) {
      piVar1 = (int *)(*(int **)(param_1 + 0xdc));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xdc) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(int **)(param_1 + 0xd8) = piVar4;
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0xdc) = 0;
      }
      else {
        piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
        *(int **)(param_1 + 0xdc) = piVar4;
        (**(code **)(*piVar4 + 4))();
      }
    }
  }
  piVar4 = (int *)(*(int **)(param_1 + 0xd8));
  *param_2 = (int)((int)piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 1037ca10; body size 106 bytes.
#line 1 "ENTRY_1037ca10"

void FUN_1037ca10(void)

{
  char cVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_28);
  local_28 = (undefined4)(0);
  local_24 = (undefined4)(0);
  uStack_20 = (undefined4)(0);
  uStack_1c = (undefined4)(0);
  uStack_18 = (undefined4)(0);
  local_14 = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  uStack_c = (undefined4)(0);
  uStack_8 = (undefined4)(0);
  iVar2 = (int)(thunk_FUN_1109f7f0());
  if (iVar2 != 0) {
    cVar1 = (char)(thunk_FUN_1109f0a0(PTR_s_IsLocalRadioPrepulated_1211957c,&local_24,0x20));
    if (cVar1 != '\0') {
      thunk_FUN_1145c380(&local_24,&local_28);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1037caa0; body size 106 bytes.
#line 1 "ENTRY_1037caa0"

void FUN_1037caa0(void)

{
  char cVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_28);
  local_28 = (undefined4)(0);
  local_24 = (undefined4)(0);
  uStack_20 = (undefined4)(0);
  uStack_1c = (undefined4)(0);
  uStack_18 = (undefined4)(0);
  local_14 = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  uStack_c = (undefined4)(0);
  uStack_8 = (undefined4)(0);
  iVar2 = (int)(thunk_FUN_1109f7f0());
  if (iVar2 != 0) {
    cVar1 = (char)(thunk_FUN_1109f0a0(PTR_s_IsRadioFavoritesPrepulated_12119580,&local_24,0x20));
    if (cVar1 != '\0') {
      thunk_FUN_1145c380(&local_24,&local_28);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1037d060; body size 244 bytes.
#line 1 "ENTRY_1037d060"

undefined4 __fastcall FUN_1037d060(int param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *local_1c;
  SCStr local_18 [7];
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_102518f0(&local_1c,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_18))->int_allocRep("persistent_devices");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  local_11 = (char)((**(code **)(*piVar1 + 0x18))(local_18));
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_18))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  iVar3 = (int)((**(code **)(**(int **)(param_1 + 200) + 100))());
  if ((iVar3 == 0) || (local_11 == '\0')) {
    uVar4 = (undefined4)(0);
  }
  else {
    (**(code **)(**(int **)(param_1 + 200) + 100))();
    uVar4 = (undefined4)(thunk_FUN_11081a60());
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 1037d1a0; body size 327 bytes.
#line 1 "ENTRY_1037d1a0"

int __fastcall FUN_1037d1a0(int *param_1)

{
 try {
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_18 = (int *)(param_1);
  cVar3 = (char)((**(code **)(*param_1 + 0x1f0))(DAT_12126b84 ));
  if (cVar3 != '\0') {
    uVar4 = (uint)((**(code **)(param_1[3] + 0x14))(0xb));
    uVar6 = (uint)(0);
    if (uVar4 != 0) {
      do {
        piVar5 = (int *)((int *)(**(code **)(*(int *)local_18[0x32] + 0x38))(&local_1c,uVar6,0xb));
        piVar1 = (int *)((int *)*piVar5);

        *piVar5 = (int)(0);
        if (piVar1 == (int *)0x0) {
          piVar5 = (int *)((int *)0x0);
        }
        else {
          piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
        }
        *(unsigned char *)((char *)&local_8 + 0) = 3;
        if (local_1c != (int *)0x0) {
          (**(code **)(*local_1c + 8))();
        }
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        if ((((piVar1 != (int *)0x0) && (iVar2 = piVar1[2], iVar2 != 0)) &&
            (*(int *)(iVar2 + 0x1c) != 0)) &&
           ((cVar3 = thunk_FUN_11457320(), cVar3 != '\0' &&
            (cVar3 = (**(code **)(*local_18 + 0x1ec))(iVar2), cVar3 != '\0')))) {
          local_14 = (int)(local_14 + 1);
        }
        iVar2 = (int)(local_14);

        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))();
        }
        uVar6 = (uint)(uVar6 + 1);

      } while (uVar6 < uVar4);

      return (int)(iVar2);
    }
  }

  return (int)(0);

 } catch (...) { }
}


// Reference entry 1037d340; body size 290 bytes.
#line 1 "ENTRY_1037d340"

int __fastcall FUN_1037d340(int *param_1)

{
 try {
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_18 = (int *)(param_1);
  cVar2 = (char)((**(code **)(*param_1 + 0x1f0))(DAT_12126b84 ));
  if (cVar2 != '\0') {
    uVar3 = (uint)((**(code **)(param_1[3] + 0x14))(0xb));
    uVar6 = (uint)(0);
    if (uVar3 != 0) {
      do {
        piVar4 = (int *)((int *)(**(code **)(*(int *)param_1[0x32] + 0x38))(&local_1c,uVar6,0xb));
        piVar1 = (int *)((int *)*piVar4);

        *piVar4 = (int)(0);
        if (piVar1 == (int *)0x0) {
          piVar4 = (int *)((int *)0x0);
        }
        else {
          piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
        }
        *(unsigned char *)((char *)&local_8 + 0) = 3;
        if (local_1c != (int *)0x0) {
          (**(code **)(*local_1c + 8))();
        }
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        if (piVar1 == (int *)0x0) {
          iVar5 = (int)(0);
        }
        else {
          iVar5 = (int)(piVar1[2]);
        }
        cVar2 = (char)((**(code **)(*local_18 + 0x1ec))(iVar5));
        if (cVar2 != '\0') {
          local_14 = (int)(local_14 + 1);
        }
        iVar5 = (int)(local_14);

        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 8))();
        }
        uVar6 = (uint)(uVar6 + 1);

        param_1 = (int *)(local_18);
      } while (uVar6 < uVar3);

      return (int)(iVar5);
    }
  }

  return (int)(0);

 } catch (...) { }
}


// Reference entry 1037d4d0; body size 69 bytes.
#line 1 "ENTRY_1037d4d0"

int FUN_1037d4d0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_c [12];
  
  cVar2 = (char)(thunk_FUN_1038d3c0());
  if (cVar2 == '\0') {
    iVar3 = (int)(thunk_FUN_10387340());
    return (int)(iVar3);
  }
  piVar4 = (int *)((int *)thunk_FUN_10380bb0(local_c,param_1));
  iVar3 = (int)(piVar4[1]);
  iVar1 = (int)(*piVar4);
  thunk_FUN_10363490();
  return (int)(iVar3 - iVar1 >> 3);
}


// Reference entry 1037d540; body size 94 bytes.
#line 1 "ENTRY_1037d540"

undefined4 __stdcall FUN_1037d540(undefined4 param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  undefined1 local_1c [12];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_1037ddd0(local_1c,param_2);

  thunk_FUN_103230a0(param_1);
  thunk_FUN_101f53d0(uVar1);

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1037d5c0; body size 1619 bytes.
#line 1 "ENTRY_1037d5c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1037d5c0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int *piVar13;
  int *local_68;
  int *local_60;
  int *local_58;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  int local_28;
  uint local_24;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_28 = (int)(param_1);
  piVar3 = (int *)((int *)createPropertyBag());
  piVar13 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  local_18 = (int *)(piVar13);
  if (piVar13 == (int *)0x0) {
    local_68 = (int *)((int *)0x0);
  }
  else {
    local_68 = (int *)((int *)(**(code **)(*piVar13 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_38 != (int *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  local_48 = (int *)(operator_new(0x10));
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_48 == (int *)0x0) {
    local_1c = (int *)((int *)0x0);
  }
  else {
    local_1c = (int *)((int *)thunk_FUN_103d56e0());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  local_60 = (int *)((int *)0x0);
  if (local_1c != (int *)0x0) {
    local_60 = (int *)((int *)(**(code **)(*local_1c + 0xc))());
    (**(code **)(*local_60 + 4))();
  }
  uVar2 = (uint)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));

  iVar4 = (int)((**(code **)(**(int **)(param_1 + 0x828) + 0x14))());
  if (iVar4 != 0) {
    do {
      piVar3 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x828) + 0x18))(&local_3c,uVar2));
      piVar13 = (int *)((int *)*piVar3);
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      *piVar3 = (int)(0);
      if (piVar13 == (int *)0x0) {
        piVar3 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar13 + 0xc))());
      }
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      local_48 = (int *)(piVar3);
      if (piVar13 == (int *)0x0) {
        piVar8 = (int *)((int *)0x0);
        local_34 = (int *)((int *)0x0);
      }
      else {
        ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCIPropertyBag");
        *(unsigned char *)((char *)&local_8 + 0) = 8;
        puVar5 = (undefined4 *)((undefined4 *)(**(code **)*piVar13)(&local_38,&local_14));
        piVar8 = (int *)((int *)*puVar5);
        *puVar5 = (undefined4)(0);
        *(unsigned char *)((char *)&local_8 + 0) = 10;
        local_34 = (int *)(piVar8);
        if (local_38 != (int *)0x0) {
          (**(code **)(*local_38 + 8))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0xb;
        ((SCStr *)((SCStr *)&local_14))->int_release();

      }
      *(unsigned char *)((char *)&local_8 + 0) = 0xc;
      if (piVar3 != (int *)0x0) {
        local_48 = (int *)((int *)0x0);
        (**(code **)(*piVar3 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0xf;
      if (local_3c != (int *)0x0) {
        (**(code **)(*local_3c + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0xe;
      ((SCStr *)((SCStr *)&local_20))->int_allocRep("serialNumber");
      *(unsigned char *)((char *)&local_8 + 0) = 0x10;
      uVar6 = (undefined4)((**(code **)(*piVar8 + 0x18))(&local_2c,&local_20));
      *(unsigned char *)((char *)&local_8 + 0) = 0x11;
      thunk_FUN_10c61ec0(&local_24,uVar6);
      *(unsigned char *)((char *)&local_8 + 0) = 0x14;
      ((SCStr *)((SCStr *)&local_2c))->int_release();
      local_2c = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x16;
      ((SCStr *)((SCStr *)&local_20))->int_release();
      piVar13 = (int *)(local_18);

      *(unsigned char *)((char *)&local_8 + 0) = 0x15;
      (**(code **)(*local_18 + 0x70))(&local_24,piVar8);
      *(unsigned char *)((char *)&local_8 + 0) = 0x17;
      ((SCStr *)((SCStr *)&local_24))->int_release();

      *(unsigned char *)((char *)&local_8 + 0) = 0x18;
      (**(code **)(*piVar8 + 8))();
      param_1 = (int)(local_28);
      uVar2 = (uint)(local_30 + 1);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
      local_30 = (uint)(uVar2);
      uVar7 = (uint)((**(code **)(**(int **)(local_28 + 0x828) + 0x14))());
    } while (uVar2 < uVar7);
  }
  uVar2 = (uint)(0);

  iVar4 = (int)((**(code **)(*(int *)(param_1 + 0xc) + 0x14))(9));
  if (iVar4 != 0) {
    do {
      piVar8 = (int *)((int *)(**(code **)(**(int **)(param_1 + 200) + 0x38))(&local_3c,uVar2,9));
      piVar3 = (int *)((int *)*piVar8);
      *(unsigned char *)((char *)&local_8 + 0) = 0x19;
      *piVar8 = (int)(0);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x1c;
      local_48 = (int *)(piVar3);
      if (local_3c != (int *)0x0) {
        (**(code **)(*local_3c + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x1b;
      thunk_FUN_10320760(&local_14);
      *(unsigned char *)((char *)&local_8 + 0) = 0x1d;
      cVar1 = (char)((**(code **)(*piVar13 + 0x74))(&local_14));
      if (cVar1 != '\0') {
        (**(code **)(*piVar13 + 0x78))(&local_14);
        puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_10320510(&local_2c));
        *(unsigned char *)((char *)&local_8 + 0) = 0x1e;
        puVar9 = (undefined4 *)((undefined4 *)thunk_FUN_10320760(&local_30));
        puVar12 = (undefined1 *)(&DAT_1186d2ee);
        if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
          puVar12 = (undefined1 *)((undefined1 *)*puVar5);
        }
        puVar11 = (undefined1 *)(&DAT_1186d2ee);
        if ((undefined1 *)*puVar9 != (undefined1 *)0x0) {
          puVar11 = (undefined1 *)((undefined1 *)*puVar9);
        }
        thunk_FUN_112af4e0("SCHousehold",2,
                           "We found an online device. Not adding serialNumber: %s, displayName: %s"
                           ,puVar11,puVar12);
        *(unsigned char *)((char *)&local_8 + 0) = 0x1f;
        ((SCStr *)((SCStr *)&local_30))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 0x20;
        ((SCStr *)((SCStr *)&local_2c))->int_release();
        local_2c = (int *)((int *)0x0);
        piVar13 = (int *)(local_18);
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x21;
      ((SCStr *)((SCStr *)&local_14))->int_release();

      *(unsigned char *)((char *)&local_8 + 0) = 0x22;
      if (piVar3 != (int *)0x0) {
        local_48 = (int *)((int *)0x0);
        (**(code **)(*piVar3 + 8))();
      }
      param_1 = (int)(local_28);
      uVar2 = (uint)(local_24 + 1);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
      local_24 = (uint)(uVar2);
      uVar7 = (uint)((**(code **)(*(int *)(local_28 + 0xc) + 0x14))(9));
    } while (uVar2 < uVar7);
  }
  piVar8 = (int *)((int *)(**(code **)(*piVar13 + 0x90))(&local_3c));
  piVar3 = (int *)((int *)*piVar8);
  *(unsigned char *)((char *)&local_8 + 0) = 0x23;
  *piVar8 = (int)(0);
  if (piVar3 == (int *)0x0) {
    local_58 = (int *)((int *)0x0);
  }
  else {
    local_58 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x26;
  if (local_3c != (int *)0x0) {
    (**(code **)(*local_3c + 8))();
  }
  piVar8 = (int *)((int *)0x0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x25)));
  local_38 = (int *)((int *)0x0);
  iVar4 = (int)((**(code **)(*piVar3 + 0x14))());
  if (iVar4 == 0) {
    *param_2 = (undefined4)(local_1c);
    if (local_1c == (int *)0x0) goto LAB_1037dbc8;
  }
  else {
    do {
      uVar6 = (undefined4)((**(code **)(*piVar3 + 0x1c))(&local_30,piVar8));
      *(unsigned char *)((char *)&local_8 + 0) = 0x27;
      piVar8 = (int *)((int *)(**(code **)(*piVar13 + 0x6c))(&local_48,uVar6));
      piVar13 = (int *)((int *)*piVar8);
      *(unsigned char *)((char *)&local_8 + 0) = 0x28;
      *piVar8 = (int)(0);
      if (piVar13 == (int *)0x0) {
        piVar8 = (int *)((int *)0x0);
      }
      else {
        piVar8 = (int *)((int *)(**(code **)(*piVar13 + 0xc))());
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x29;
      if (piVar13 == (int *)0x0) {
        local_44 = (int *)((int *)0x0);
        local_2c = (int *)((int *)0x0);
      }
      else {
        ((SCStr *)((SCStr *)&local_28))->int_allocRep("SCIPropertyBag");
        *(unsigned char *)((char *)&local_8 + 0) = 0x2a;
        puVar5 = (undefined4 *)((undefined4 *)(**(code **)*piVar13)(&local_40,&local_28));
        piVar13 = (int *)((int *)*puVar5);
        *puVar5 = (undefined4)(0);
        *(unsigned char *)((char *)&local_8 + 0) = 0x2c;
        local_44 = (int *)(piVar13);
        if (local_40 != (int *)0x0) {
          (**(code **)(*local_40 + 8))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0x2d;
        ((SCStr *)((SCStr *)&local_28))->int_release();

        local_2c = (int *)(piVar13);
      }
      piVar13 = (int *)(local_2c);
      *(unsigned char *)((char *)&local_8 + 0) = 0x2e;
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x31;
      if (local_48 != (int *)0x0) {
        (**(code **)(*local_48 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x33;
      ((SCStr *)((SCStr *)&local_30))->int_release();

      *(unsigned char *)((char *)&local_8 + 0) = 0x32;
      (**(code **)(*local_1c + 0x20))(piVar13);
      ((SCStr *)((SCStr *)&local_20))->int_allocRep("displayName");
      *(unsigned char *)((char *)&local_8 + 0) = 0x34;
      ((SCStr *)((SCStr *)&local_24))->int_allocRep("serialNumber");
      piVar13 = (int *)(local_2c);
      *(unsigned char *)((char *)&local_8 + 0) = 0x35;
      puVar5 = (undefined4 *)((undefined4 *)(**(code **)(*local_2c + 0x18))(&local_34,&local_20));
      *(unsigned char *)((char *)&local_8 + 0) = 0x36;
      puVar9 = (undefined4 *)((undefined4 *)(**(code **)(*piVar13 + 0x18))(&local_14,&local_24));
      puVar12 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
        puVar12 = (undefined1 *)((undefined1 *)*puVar5);
      }
      puVar11 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*puVar9 != (undefined1 *)0x0) {
        puVar11 = (undefined1 *)((undefined1 *)*puVar9);
      }
      thunk_FUN_112af4e0("SCHousehold",2,
                         "Adding an offline device. serialNumber: %s, displayName: %s",puVar11,
                         puVar12);
      *(unsigned char *)((char *)&local_8 + 0) = 0x37;
      ((SCStr *)((SCStr *)&local_14))->int_release();

      *(unsigned char *)((char *)&local_8 + 0) = 0x38;
      ((SCStr *)((SCStr *)&local_34))->int_release();
      local_34 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x39;
      ((SCStr *)((SCStr *)&local_24))->int_release();

      *(unsigned char *)((char *)&local_8 + 0) = 0x3a;
      ((SCStr *)((SCStr *)&local_20))->int_release();

      *(unsigned char *)((char *)&local_8 + 0) = 0x3b;
      (**(code **)(*piVar13 + 8))();
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x25)));
      piVar8 = (int *)((int *)((int)local_38 + 1));
      local_38 = (int *)(piVar8);
      piVar10 = (int *)((int *)(**(code **)(*piVar3 + 0x14))());
      piVar13 = (int *)(local_18);
    } while (piVar8 < piVar10);
    *param_2 = (undefined4)(local_1c);
  }
  (**(code **)(*local_1c + 4))();
LAB_1037dbc8:
  *(unsigned char *)((char *)&local_8 + 0) = 0x3c;
  if (local_58 != (int *)0x0) {
    (**(code **)(*local_58 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x3d)));
  if (local_60 != (int *)0x0) {
    (**(code **)(*local_60 + 8))();
  }

  if (local_68 != (int *)0x0) {
    (**(code **)(*local_68 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1037e850; body size 266 bytes.
#line 1 "ENTRY_1037e850"

int * FUN_1037e850(int *param_1,undefined4 param_2,char *param_3)

{
 try {
  uint uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 local_28 [16];
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_18 = (int *)(param_1);

  pcVar2 = (char *)((char *)&param_3);
  if (0xf < in_stack_00000020) {
    pcVar2 = (char *)(param_3);
  }
  ((SCStr *)((SCStr *)&local_14))->int_allocRep(pcVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_10c97560(&local_18));
  puVar5 = (undefined4 *)(&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  uVar4 = (undefined4)(*puVar3);
  thunk_FUN_103869d0(local_28,4,uVar4,puVar5,in_stack_00000024);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))(uVar1);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  uVar6 = (undefined4)(0x1037e8e4);
  ((SCStr *)((SCStr *)&local_14))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  thunk_FUN_1035ccc0(local_28);
  thunk_FUN_10387aa0(param_1,uVar4,puVar5,uVar6);
  thunk_FUN_101f53d0();
  if (0xf < in_stack_00000020) {
    uVar1 = (uint)(in_stack_00000020 + 1);
    pcVar2 = (char *)(param_3);
    if (0xfff < uVar1) {
      pcVar2 = (char *)(*(char **)(param_3 + -4));
      uVar1 = (uint)(in_stack_00000020 + 0x24);
      if ((char *)0x1f < param_3 + (-4 - (int)pcVar2)) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(pcVar2,uVar1);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 1037eaf0; body size 412 bytes.
#line 1 "ENTRY_1037eaf0"

uint FUN_1037eaf0(int param_1)

{
 try {
  char *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar2 = (int)(param_1);


  uVar4 = (uint)(DAT_12126b84);

  iVar8 = (int)(1);
  uVar9 = (uint)(0);
  do {
    if (iVar2 == 0) {
      uVar5 = (uint)(0);
    }
    else {
      thunk_FUN_10bd4aa0(0);
      pcVar1 = (char *)(*(char **)(iVar2 + 0x5c));

      pcVar7 = (char *)("");
      if (pcVar1 != (char *)0x0) {
        pcVar7 = (char *)(pcVar1);
      }
      ((SCStr *)((SCStr *)&param_1))->int_allocRep(pcVar7);
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_10c94750(&local_14,&param_1,uVar4));
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      thunk_FUN_10bed390(*puVar6);
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)((SCStr *)&param_1))->int_release();
      param_1 = (int)(0);
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      cVar3 = (char)(thunk_FUN_10be03d0(0));
      if (cVar3 == '\0') {

        thunk_FUN_10365150();
        uVar5 = (uint)(1);
      }
      else {
        cVar3 = (char)(thunk_FUN_10be8520());
        if (cVar3 == '\0') {
          cVar3 = (char)(thunk_FUN_10be6d30(0));
          if (cVar3 == '\0') {

            thunk_FUN_10365150();
            uVar5 = (uint)(3);
          }
          else {
            cVar3 = (char)(thunk_FUN_101dccc0(0,0));
            if ((cVar3 != '\0') && (iVar8 == 1)) {
              cVar3 = (char)(thunk_FUN_10be72f0());
              if (cVar3 == '\0') {
LAB_1037ec6b:
                thunk_FUN_10365150();

                return (uint)(4);
              }
              cVar3 = (char)(thunk_FUN_10be6ad0());
              if (cVar3 != '\0') goto LAB_1037ec6b;
            }

            thunk_FUN_10365150();
            uVar5 = (uint)(5);
          }
        }
        else {

          thunk_FUN_10365150();
          uVar5 = (uint)(2);
        }
      }
    }
    if (uVar5 <= uVar9) {
      uVar5 = (uint)(uVar9);
    }
    iVar8 = (int)(iVar8 + 1);
    uVar9 = (uint)(uVar5);
    if (3 < iVar8) {

      return (uint)(uVar5);
    }
  } while( true );

 } catch (...) { }
}


// Reference entry 1037ed00; body size 189 bytes.
#line 1 "ENTRY_1037ed00"

int __thiscall Recovered_Bulk::FUN_1037ed00(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar4 = (int)(0);
  uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 200) + 100))(DAT_12126b84 ));
  thunk_FUN_11131cc0(uVar1,2,0);

  uVar5 = (uint)(0);
  iVar2 = (int)(thunk_FUN_11132ba0());
  if (iVar2 != 0) {
    do {
      iVar2 = (int)(thunk_FUN_11132c10(uVar5));
      if (iVar2 != 0) {
        iVar2 = (int)(thunk_FUN_10382dd0(iVar2,param_2,0));
        if (iVar2 == 4) {
          iVar4 = (int)(4);
          break;
        }
        if (iVar4 < iVar2) {
          iVar4 = (int)(iVar2);
        }
      }
      uVar5 = (uint)(uVar5 + 1);
      uVar3 = (uint)(thunk_FUN_11132ba0());
    } while (uVar5 < uVar3);
  }
  thunk_FUN_11132140();

  return (int)(iVar4);

 } catch (...) { }
}


// Reference entry 1037edf0; body size 107 bytes.
#line 1 "ENTRY_1037edf0"

int * __thiscall Recovered_Bulk::FUN_1037edf0(int *param_2,int param_3,undefined4 param_4)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  undefined1 local_1c [12];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(*param_1 + 0x4c))
                            (local_1c,param_4,DAT_12126b84 ));

  piVar1 = (int *)(*(int **)(*piVar1 + param_3 * 8));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  thunk_FUN_1036e480();

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 1037ee90; body size 167 bytes.
#line 1 "ENTRY_1037ee90"

undefined1 * __stdcall FUN_1037ee90(undefined1 *param_1)

{
 try {
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1037a3e0(local_14,DAT_12126b84 ));

  if (((char *)*puVar2 == (char *)0x0) || (*(char *)*puVar2 == '\0')) {
    pcVar3 = (char *)("");
  }
  else {
    thunk_FUN_1109f7f0();
    pcVar3 = (char *)((char *)thunk_FUN_1109f750());
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (undefined1)(0);
  pcVar4 = (char *)(pcVar3);
  do {
    cVar1 = (char)(*pcVar4);
    pcVar4 = (char *)(pcVar4 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130(pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));

  ((SCStr *)(local_14))->int_release();

  return (undefined1 *)(param_1);

 } catch (...) { }
}


// Reference entry 1037f020; body size 214 bytes.
#line 1 "ENTRY_1037f020"

undefined4 * __thiscall Recovered_Bulk::FUN_1037f020(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x1d8))(&local_14,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar2);

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
    thunk_FUN_10bac260(param_2);

    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10380570; body size 191 bytes.
#line 1 "ENTRY_10380570"

int __thiscall Recovered_Bulk::FUN_10380570(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar4 = (int)(*(int *)(param_1 + 4));
  if (iVar4 == 0) {
    pvVar2 = (void *)(operator_new(0x58));

    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)thunk_FUN_10ba6170(param_2));
    }
    piVar5 = (int *)(*(int **)(param_1 + 4));

    if (piVar3 != (int *)(piVar5)) {
      piVar5 = (int *)(*(int **)(param_1 + 8));
      if (piVar5 != (int *)0x0) {
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        (**(code **)(*piVar5 + 8))(uVar1);
      }
      *(int **)(param_1 + 4) = piVar3;
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 8) = 0;
        piVar5 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
        *(int **)(param_1 + 8) = piVar3;
        (**(code **)(*piVar3 + 4))();
        piVar5 = (int *)(*(int **)(param_1 + 4));
      }
    }
    (**(code **)(*piVar5 + 0x68))();
    iVar4 = (int)(*(int *)(param_1 + 4));
  }

  return (int)(iVar4);

 } catch (...) { }
}


// Reference entry 10380660; body size 201 bytes.
#line 1 "ENTRY_10380660"

int __thiscall Recovered_Bulk::FUN_10380660(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar4 = (int)(*(int *)(param_1 + 4));
  if (iVar4 == 0) {
    pvVar2 = (void *)(operator_new(0x88));

    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)thunk_FUN_10316a40(param_2));
    }
    piVar5 = (int *)(*(int **)(param_1 + 4));

    if (piVar3 != (int *)(piVar5)) {
      piVar5 = (int *)(*(int **)(param_1 + 8));
      if (piVar5 != (int *)0x0) {
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        (**(code **)(*piVar5 + 8))(uVar1);
      }
      *(int **)(param_1 + 4) = piVar3;
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 8) = 0;
        piVar5 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
        *(int **)(param_1 + 8) = piVar3;
        (**(code **)(*piVar3 + 4))();
        piVar5 = (int *)(*(int **)(param_1 + 4));
      }
    }
    (**(code **)(*piVar5 + 0xc0))();
    iVar4 = (int)(*(int *)(param_1 + 4));
  }

  return (int)(iVar4);

 } catch (...) { }
}


// Reference entry 10380760; body size 198 bytes.
#line 1 "ENTRY_10380760"

int __thiscall Recovered_Bulk::FUN_10380760(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar4 = (int)(*(int *)(param_1 + 4));
  if (iVar4 == 0) {
    pvVar2 = (void *)(operator_new(0xb8));

    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)thunk_FUN_10c88d60(param_2));
    }
    piVar5 = (int *)(*(int **)(param_1 + 4));

    if (piVar3 != (int *)(piVar5)) {
      piVar5 = (int *)(*(int **)(param_1 + 8));
      if (piVar5 != (int *)0x0) {
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        (**(code **)(*piVar5 + 8))(uVar1);
      }
      *(int **)(param_1 + 4) = piVar3;
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 8) = 0;
        piVar5 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
        *(int **)(param_1 + 8) = piVar3;
        (**(code **)(*piVar3 + 4))();
        piVar5 = (int *)(*(int **)(param_1 + 4));
      }
    }
    (**(code **)(*piVar5 + 0x18))();
    iVar4 = (int)(*(int *)(param_1 + 4));
  }

  return (int)(iVar4);

 } catch (...) { }
}


// Reference entry 10380860; body size 198 bytes.
#line 1 "ENTRY_10380860"

int __thiscall Recovered_Bulk::FUN_10380860(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar4 = (int)(*(int *)(param_1 + 4));
  if (iVar4 == 0) {
    pvVar2 = (void *)(operator_new(0x170));

    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)thunk_FUN_102cc420(param_2));
    }
    piVar5 = (int *)(*(int **)(param_1 + 4));

    if (piVar3 != (int *)(piVar5)) {
      piVar5 = (int *)(*(int **)(param_1 + 8));
      if (piVar5 != (int *)0x0) {
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        (**(code **)(*piVar5 + 8))(uVar1);
      }
      *(int **)(param_1 + 4) = piVar3;
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 8) = 0;
        piVar5 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
        *(int **)(param_1 + 8) = piVar3;
        (**(code **)(*piVar3 + 4))();
        piVar5 = (int *)(*(int **)(param_1 + 4));
      }
    }
    (**(code **)(*piVar5 + 0x34))();
    iVar4 = (int)(*(int *)(param_1 + 4));
  }

  return (int)(iVar4);

 } catch (...) { }
}


// Reference entry 10380960; body size 191 bytes.
#line 1 "ENTRY_10380960"

int __thiscall Recovered_Bulk::FUN_10380960(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar4 = (int)(*(int *)(param_1 + 4));
  if (iVar4 == 0) {
    pvVar2 = (void *)(operator_new(0x40));

    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)thunk_FUN_10b6d210(param_2));
    }
    piVar5 = (int *)(*(int **)(param_1 + 4));

    if (piVar3 != (int *)(piVar5)) {
      piVar5 = (int *)(*(int **)(param_1 + 8));
      if (piVar5 != (int *)0x0) {
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        (**(code **)(*piVar5 + 8))(uVar1);
      }
      *(int **)(param_1 + 4) = piVar3;
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 8) = 0;
        piVar5 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
        *(int **)(param_1 + 8) = piVar3;
        (**(code **)(*piVar3 + 4))();
        piVar5 = (int *)(*(int **)(param_1 + 4));
      }
    }
    (**(code **)(*piVar5 + 0x74))();
    iVar4 = (int)(*(int *)(param_1 + 4));
  }

  return (int)(iVar4);

 } catch (...) { }
}


// Reference entry 10380a50; body size 243 bytes.
#line 1 "ENTRY_10380a50"

int * FUN_10380a50(int *param_1)

{
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;


  iVar2 = (int)(thunk_FUN_110c2c60(DAT_12126b84 ));
  if (iVar2 == 0) {
    thunk_FUN_112af4e0("SCHousehold",1,
                       "Attempt to access SCServiceDescriptorManager when SwfObjMusicServiceDiscovery singleton is NULL"
                      );
    *param_1 = (int)(0);

    return (int *)(param_1);
  }

  piVar3 = (int *)((int *)thunk_FUN_1037ba90(&local_14,iVar2));
  piVar1 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10380e00; body size 182 bytes.
#line 1 "ENTRY_10380e00"

undefined4 __fastcall FUN_10380e00(int param_1)

{
 try {
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_1109f7f0(DAT_12126b84 );
  thunk_FUN_110a0140();
  uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 200) + 100))());
  thunk_FUN_11131cc0(uVar1,2,0);

  iVar2 = (int)(thunk_FUN_11132ba0());
  uVar1 = (undefined4)(0);
  if (iVar2 != 0) {
    iVar3 = (int)((**(code **)(*(int *)(param_1 + 0xc) + 0x14))(9));
    uVar1 = (undefined4)(3);
    if (iVar2 != iVar3) {
      uVar1 = (undefined4)(1);
    }
  }
  thunk_FUN_11132140();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10380ef0; body size 100 bytes.
#line 1 "ENTRY_10380ef0"

undefined4 * __thiscall Recovered_Bulk::FUN_10380ef0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1cc))(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10380f80; body size 100 bytes.
#line 1 "ENTRY_10380f80"

undefined4 * __thiscall Recovered_Bulk::FUN_10380f80(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1e0))(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10381060; body size 115 bytes.
#line 1 "ENTRY_10381060"

undefined4 __stdcall FUN_10381060(undefined4 param_1,undefined4 param_2)

{
 try {
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)(local_14))->int_allocRep("");

  thunk_FUN_103869d0(param_1,2,0,local_14,param_2);

  ((SCStr *)(local_14))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10381240; body size 115 bytes.
#line 1 "ENTRY_10381240"

undefined4 __stdcall FUN_10381240(undefined4 param_1,undefined4 param_2)

{
 try {
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)(local_14))->int_allocRep("");

  thunk_FUN_103869d0(param_1,5,0,local_14,param_2);

  ((SCStr *)(local_14))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10381620; body size 116 bytes.
#line 1 "ENTRY_10381620"

undefined4 __stdcall FUN_10381620(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)(local_14))->int_allocRep("");

  thunk_FUN_103869d0(param_1,5,param_2,local_14,param_3);

  ((SCStr *)(local_14))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 103816f0; body size 230 bytes.
#line 1 "ENTRY_103816f0"

undefined4 FUN_103816f0(undefined4 param_1,char *param_2)

{
 try {
  char *pcVar1;
  uint uVar2;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 local_24 [16];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (undefined4)(param_1);

  pcVar1 = (char *)((char *)&param_2);
  if (0xf < in_stack_0000001c) {
    pcVar1 = (char *)(param_2);
  }
  ((SCStr *)((SCStr *)&local_14))->int_allocRep(pcVar1);
  puVar4 = (undefined4 *)(&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  uVar3 = (undefined4)(0);
  thunk_FUN_103869d0(local_24,5,0,puVar4,in_stack_00000020);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  uVar5 = (undefined4)(0x10381761);
  ((SCStr *)((SCStr *)&local_14))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  thunk_FUN_1035ccc0(local_24);
  thunk_FUN_10387aa0(param_1,uVar3,puVar4,uVar5);
  thunk_FUN_101f53d0();
  if (0xf < in_stack_0000001c) {
    uVar2 = (uint)(in_stack_0000001c + 1);
    pcVar1 = (char *)(param_2);
    if (0xfff < uVar2) {
      pcVar1 = (char *)(*(char **)(param_2 + -4));
      uVar2 = (uint)(in_stack_0000001c + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar1)) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(pcVar1,uVar2);
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10381810; body size 116 bytes.
#line 1 "ENTRY_10381810"

undefined4 __stdcall FUN_10381810(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)(local_14))->int_allocRep("");

  thunk_FUN_103869d0(param_1,6,param_2,local_14,param_3);

  ((SCStr *)(local_14))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10381a40; body size 302 bytes.
#line 1 "ENTRY_10381a40"

int * FUN_10381a40(int *param_1,int param_2,char *param_3)

{
 try {
  uint uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint in_stack_00000020;
  undefined4 uVar5;
  undefined1 local_2c [12];
  undefined4 local_20;
  int *local_1c [2];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_1c[0] = param_1;


  pcVar2 = (char *)((char *)&param_3);
  if (0xf < in_stack_00000020) {
    pcVar2 = (char *)(param_3);
  }
  ((SCStr *)((SCStr *)&local_14))->int_allocRep(pcVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (param_2 == 0) {
    uVar4 = (undefined4)(0);
  }
  else {
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_10c97560(local_1c));
    uVar4 = (undefined4)(*puVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 2;

  }
  puVar3 = (undefined4 *)(&local_14);
  thunk_FUN_103869d0(local_2c,6,uVar4,puVar3,0);
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  if (param_2 != 0) {
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    if (local_1c[0] != (int *)0x0) {
      (**(code **)(*local_1c[0] + 8))(uVar1);
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  uVar5 = (undefined4)(0x10381af8);
  ((SCStr *)((SCStr *)&local_14))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  thunk_FUN_1035ccc0(local_2c);
  thunk_FUN_10387aa0(param_1,uVar4,puVar3,uVar5);
  thunk_FUN_101f53d0();
  if (0xf < in_stack_00000020) {
    uVar1 = (uint)(in_stack_00000020 + 1);
    pcVar2 = (char *)(param_3);
    if (0xfff < uVar1) {
      pcVar2 = (char *)(*(char **)(param_3 + -4));
      uVar1 = (uint)(in_stack_00000020 + 0x24);
      if ((char *)0x1f < param_3 + (-4 - (int)pcVar2)) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(pcVar2,uVar1);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10381bc0; body size 115 bytes.
#line 1 "ENTRY_10381bc0"

undefined4 __stdcall FUN_10381bc0(undefined4 param_1,undefined4 param_2)

{
 try {
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)(local_14))->int_allocRep("");

  thunk_FUN_103869d0(param_1,0,0,local_14,param_2);

  ((SCStr *)(local_14))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10381c50; body size 116 bytes.
#line 1 "ENTRY_10381c50"

undefined4 __stdcall FUN_10381c50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)(local_14))->int_allocRep("");

  thunk_FUN_103869d0(param_1,0,param_2,local_14,param_3);

  ((SCStr *)(local_14))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


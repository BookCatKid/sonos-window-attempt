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
extern int _invalid_parameter_noinfo_noreturn(...);
extern int ceil(...);
extern int createSCRunAsyncIOOperationAction(...);
extern int createSCStringArray(...);
extern int diagnostics(...);
extern int getSCHousehold(...);
extern int getSingleton(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int memmove(...);
extern int op_eq(...);
extern int operator_new(...);
extern int stringWithFormat(...);
extern int submitted(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101a2e90(...);
extern int thunk_FUN_101a31e0(...);
extern int thunk_FUN_101a33f0(...);
extern int thunk_FUN_101b5540(...);
extern int thunk_FUN_101b5de0(...);
extern int thunk_FUN_101b5e50(...);
extern int thunk_FUN_101b87c0(...);
extern int thunk_FUN_101b8f90(...);
extern int thunk_FUN_101b9270(...);
extern int thunk_FUN_101b94f0(...);
extern int thunk_FUN_101bf370(...);
extern int thunk_FUN_101d3630(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_101da390(...);
extern int thunk_FUN_101da4a0(...);
extern int thunk_FUN_101dcfc0(...);
extern int thunk_FUN_101f6530(...);
extern int thunk_FUN_101fda20(...);
extern int thunk_FUN_10200aa0(...);
extern int thunk_FUN_10203d60(...);
extern int thunk_FUN_102244a0(...);
extern int thunk_FUN_10225030(...);
extern int thunk_FUN_1023a9b0(...);
extern int thunk_FUN_1023a9c0(...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_102473e0(...);
extern int thunk_FUN_1026e550(...);
extern int thunk_FUN_1026f370(...);
extern int thunk_FUN_10272f30(...);
extern int thunk_FUN_1027e470(...);
extern int thunk_FUN_10288040(...);
extern int thunk_FUN_1028b250(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_10304120(...);
extern int thunk_FUN_10304a70(...);
extern int thunk_FUN_10323ac0(...);
extern int thunk_FUN_1033cdb0(...);
extern int thunk_FUN_1033d2d0(...);
extern int thunk_FUN_10342f40(...);
extern int thunk_FUN_10342f60(...);
extern int thunk_FUN_103434a0(...);
extern int thunk_FUN_1034d9a0(...);
extern int thunk_FUN_1034dcf0(...);
extern int thunk_FUN_10351370(...);
extern int thunk_FUN_10352a90(...);
extern int thunk_FUN_10357c10(...);
extern int thunk_FUN_1036e480(...);
extern int thunk_FUN_1036efe0(...);
extern int thunk_FUN_10370f20(...);
extern int thunk_FUN_103798e0(...);
extern int thunk_FUN_1037a2b0(...);
extern int thunk_FUN_103be530(...);
extern int thunk_FUN_103be5e0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d2880(...);
extern int thunk_FUN_103d2920(...);
extern int thunk_FUN_103d4080(...);
extern int thunk_FUN_103d4f80(...);
extern int thunk_FUN_103d53c0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_10408c60(...);
extern int thunk_FUN_10435bf0(...);
extern int thunk_FUN_10435c80(...);
extern int thunk_FUN_10436cd0(...);
extern int thunk_FUN_104379a0(...);
extern int thunk_FUN_10478ea0(...);
extern int thunk_FUN_1047a750(...);
extern int thunk_FUN_104ed740(...);
extern int thunk_FUN_104ed870(...);
extern int thunk_FUN_1059d120(...);
extern int thunk_FUN_1059d5a0(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105a26b0(...);
extern int thunk_FUN_105a26c0(...);
extern int thunk_FUN_105a3210(...);
extern int thunk_FUN_105a7950(...);
extern int thunk_FUN_105a85f0(...);
extern int thunk_FUN_105ad8f0(...);
extern int thunk_FUN_105ad900(...);
extern int thunk_FUN_105b71f0(...);
extern int thunk_FUN_105ba370(...);
extern int thunk_FUN_105bb550(...);
extern int thunk_FUN_105bc210(...);
extern int thunk_FUN_105bebd0(...);
extern int thunk_FUN_105c2260(...);
extern int thunk_FUN_105edb20(...);
extern int thunk_FUN_105f0080(...);
extern int thunk_FUN_105f2130(...);
extern int thunk_FUN_105f5920(...);
extern int thunk_FUN_105f5a00(...);
extern int thunk_FUN_105feb30(...);
extern int thunk_FUN_10605020(...);
extern int thunk_FUN_106190a0(...);
extern int thunk_FUN_106309a0(...);
extern int thunk_FUN_10630d00(...);
extern int thunk_FUN_1063a5d0(...);
extern int thunk_FUN_1063e3b0(...);
extern int thunk_FUN_10648530(...);
extern int thunk_FUN_10648750(...);
extern int thunk_FUN_10648810(...);
extern int thunk_FUN_10649300(...);
extern int thunk_FUN_10655080(...);
extern int thunk_FUN_10667d10(...);
extern int thunk_FUN_1066e450(...);
extern int thunk_FUN_10681930(...);
extern int thunk_FUN_10681ea0(...);
extern int thunk_FUN_10686440(...);
extern int thunk_FUN_10686ac0(...);
extern int thunk_FUN_10689dc0(...);
extern int thunk_FUN_1068bac0(...);
extern int thunk_FUN_1068c780(...);
extern int thunk_FUN_1068c930(...);
extern int thunk_FUN_1068d4b0(...);
extern int thunk_FUN_1068d890(...);
extern int thunk_FUN_1068de50(...);
extern int thunk_FUN_1068edf0(...);
extern int thunk_FUN_1068f630(...);
extern int thunk_FUN_1068fa70(...);
extern int thunk_FUN_10690860(...);
extern int thunk_FUN_10691b60(...);
extern int thunk_FUN_10693e90(...);
extern int thunk_FUN_10694f70(...);
extern int thunk_FUN_106950d0(...);
extern int thunk_FUN_10696290(...);
extern int thunk_FUN_106962a0(...);
extern int thunk_FUN_106964f0(...);
extern int thunk_FUN_10697210(...);
extern int thunk_FUN_10699d60(...);
extern int thunk_FUN_1069a360(...);
extern int thunk_FUN_1069d710(...);
extern int thunk_FUN_1069d9d0(...);
extern int thunk_FUN_1069e3f0(...);
extern int thunk_FUN_1069fb30(...);
extern int thunk_FUN_106a3130(...);
extern int thunk_FUN_106a48e0(...);
extern int thunk_FUN_106a5620(...);
extern int thunk_FUN_106a8c50(...);
extern int thunk_FUN_106a8e70(...);
extern int thunk_FUN_106a9bb0(...);
extern int thunk_FUN_106a9c40(...);
extern int thunk_FUN_106a9e70(...);
extern int thunk_FUN_106a9ef0(...);
extern int thunk_FUN_106aa0a0(...);
extern int thunk_FUN_106aabe0(...);
extern int thunk_FUN_106ab210(...);
extern int thunk_FUN_106ab920(...);
extern int thunk_FUN_106ac610(...);
extern int thunk_FUN_106ae320(...);
extern int thunk_FUN_106aec80(...);
extern int thunk_FUN_106afef0(...);
extern int thunk_FUN_106b1900(...);
extern int thunk_FUN_106b8450(...);
extern int thunk_FUN_106b8c60(...);
extern int thunk_FUN_106b9580(...);
extern int thunk_FUN_106b98d0(...);
extern int thunk_FUN_106ba0b0(...);
extern int thunk_FUN_106bad70(...);
extern int thunk_FUN_106bb660(...);
extern int thunk_FUN_106bb670(...);
extern int thunk_FUN_106bbeb0(...);
extern int thunk_FUN_106bc2c0(...);
extern int thunk_FUN_106bce00(...);
extern int thunk_FUN_106bce70(...);
extern int thunk_FUN_106c17b0(...);
extern int thunk_FUN_106c2cf0(...);
extern int thunk_FUN_106c3cf0(...);
extern int thunk_FUN_106c5390(...);
extern int thunk_FUN_106c8390(...);
extern int thunk_FUN_106c85d0(...);
extern int thunk_FUN_106c8880(...);
extern int thunk_FUN_106c8a90(...);
extern int thunk_FUN_106c9300(...);
extern int thunk_FUN_106c94c0(...);
extern int thunk_FUN_106c9660(...);
extern int thunk_FUN_106c9a00(...);
extern int thunk_FUN_106cf0f0(...);
extern int thunk_FUN_106cf140(...);
extern int thunk_FUN_106cf990(...);
extern int thunk_FUN_106cffb0(...);
extern int thunk_FUN_106d1940(...);
extern int thunk_FUN_106da030(...);
extern int thunk_FUN_106da680(...);
extern int thunk_FUN_106dbf00(...);
extern int thunk_FUN_106dc530(...);
extern int thunk_FUN_106e1380(...);
extern int thunk_FUN_106e3e70(...);
extern int thunk_FUN_10708df0(...);
extern int thunk_FUN_10709b20(...);
extern int thunk_FUN_10758340(...);
extern int thunk_FUN_107593f0(...);
extern int thunk_FUN_107626d0(...);
extern int thunk_FUN_10762e20(...);
extern int thunk_FUN_10765a30(...);
extern int thunk_FUN_10772f70(...);
extern int thunk_FUN_10773960(...);
extern int thunk_FUN_10777470(...);
extern int thunk_FUN_1077bcd0(...);
extern int thunk_FUN_1077bf70(...);
extern int thunk_FUN_1077d290(...);
extern int thunk_FUN_1077e3d0(...);
extern int thunk_FUN_1077eaf0(...);
extern int thunk_FUN_10786100(...);
extern int thunk_FUN_107cc370(...);
extern int thunk_FUN_107cc4d0(...);
extern int thunk_FUN_107cc5b0(...);
extern int thunk_FUN_107cc7a0(...);
extern int thunk_FUN_107cc800(...);
extern int thunk_FUN_107cc8d0(...);
extern int thunk_FUN_10811c10(...);
extern int thunk_FUN_10812740(...);
extern int thunk_FUN_10818140(...);
extern int thunk_FUN_10819ab0(...);
extern int thunk_FUN_10837820(...);
extern int thunk_FUN_10838010(...);
extern int thunk_FUN_1083d1a0(...);
extern int thunk_FUN_1083e550(...);
extern int thunk_FUN_1087e430(...);
extern int thunk_FUN_1087e440(...);
extern int thunk_FUN_10891c20(...);
extern int thunk_FUN_10892c70(...);
extern int thunk_FUN_1089e580(...);
extern int thunk_FUN_108a0960(...);
extern int thunk_FUN_108b4730(...);
extern int thunk_FUN_108b47a0(...);
extern int thunk_FUN_108b5130(...);
extern int thunk_FUN_108b8b70(...);
extern int thunk_FUN_108f8850(...);
extern int thunk_FUN_108f8af0(...);
extern int thunk_FUN_109543e0(...);
extern int thunk_FUN_109548c0(...);
extern int thunk_FUN_10970540(...);
extern int thunk_FUN_10970a30(...);
extern int thunk_FUN_10972da0(...);
extern int thunk_FUN_10988b60(...);
extern int thunk_FUN_109892c0(...);
extern int thunk_FUN_1099d9d0(...);
extern int thunk_FUN_1099e5a0(...);
extern int thunk_FUN_109a66c0(...);
extern int thunk_FUN_109a6790(...);
extern int thunk_FUN_109a85f0(...);
extern int thunk_FUN_10a0cd20(...);
extern int thunk_FUN_10a0d470(...);
extern int thunk_FUN_10a44600(...);
extern int thunk_FUN_10a44ae0(...);
extern int thunk_FUN_10a47030(...);
extern int thunk_FUN_10a48d70(...);
extern int thunk_FUN_10a49250(...);
extern int thunk_FUN_10a4b100(...);
extern int thunk_FUN_10bcad90(...);
extern int thunk_FUN_10bcb5c0(...);
extern int thunk_FUN_10bf1b90(...);
extern int thunk_FUN_10c2da80(...);
extern int thunk_FUN_10c2f5a0(...);
extern int thunk_FUN_10c95170(...);
extern int thunk_FUN_10c97650(...);
extern int thunk_FUN_10c97670(...);
extern int thunk_FUN_10c9b4c0(...);
extern int thunk_FUN_10c9c090(...);
extern int thunk_FUN_10c9c440(...);
extern int thunk_FUN_10c9c640(...);
extern int thunk_FUN_10c9c740(...);
extern int thunk_FUN_10c9c820(...);
extern int thunk_FUN_10cf2f30(...);
extern int thunk_FUN_10cf34e0(...);
extern int thunk_FUN_10cf3630(...);
extern int thunk_FUN_10cf3940(...);
extern int thunk_FUN_10cf41d0(...);
extern int thunk_FUN_10cf5110(...);
extern int thunk_FUN_10cf5140(...);
extern int thunk_FUN_10cf5250(...);
extern int thunk_FUN_10d9fde0(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10def450(...);
extern int thunk_FUN_10df2df0(...);
extern int thunk_FUN_10df2e20(...);
extern int thunk_FUN_10dfbb10(...);
extern int thunk_FUN_10dfbbe0(...);
extern int thunk_FUN_10dfbe50(...);
extern int thunk_FUN_10dfda60(...);
extern int thunk_FUN_10eaafe0(...);
extern int thunk_FUN_10eac8a0(...);
extern int thunk_FUN_10eac8b0(...);
extern int thunk_FUN_10eac8c0(...);
extern int thunk_FUN_10eacd00(...);
extern int thunk_FUN_10eacd40(...);
extern int thunk_FUN_10eacdc0(...);
extern int thunk_FUN_10eace50(...);
extern int thunk_FUN_10eace60(...);
extern int thunk_FUN_10eace70(...);
extern int thunk_FUN_10eaceb0(...);
extern int thunk_FUN_10ead000(...);
extern int thunk_FUN_10ead100(...);
extern int thunk_FUN_10ead8f0(...);
extern int thunk_FUN_10eae0a0(...);
extern int thunk_FUN_10eae0f0(...);
extern int thunk_FUN_10eae120(...);
extern int thunk_FUN_10eae150(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
extern int thunk_FUN_10eb64f0(...);
extern int thunk_FUN_10eb6cc0(...);
extern int thunk_FUN_10ebb890(...);
extern int thunk_FUN_10ebb8e0(...);
extern int thunk_FUN_10ebbab0(...);
extern int thunk_FUN_10ebc060(...);
extern int thunk_FUN_10ebc110(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ebc1e0(...);
extern int thunk_FUN_10ee2ec0(...);
extern int thunk_FUN_10ee48c0(...);
extern int thunk_FUN_10eeb8b0(...);
extern int thunk_FUN_10ef82c0(...);
extern int thunk_FUN_10f04dc0(...);
extern int thunk_FUN_11068c30(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_1107ece0(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110adac0(...);
extern int thunk_FUN_110b0460(...);
extern int thunk_FUN_110b0c50(...);
extern int thunk_FUN_110b2c00(...);
extern int thunk_FUN_110cb9c0(...);
extern int thunk_FUN_111c06e0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_1125fd80(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145c380(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148ac80(...);
extern int thunk_FUN_1148b586(...);
extern int ungetc(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11884800;
extern int DAT_1189bdd4;
extern int DAT_12119afc;
extern int DAT_12126b84;
extern int DAT_121a10dc;
extern int DAT_121a2294;
extern int DAT_121a2298;
extern int DAT_121a22a4;
extern int DAT_121a22ac;
extern int DAT_121a22b0;
extern int DAT_121a22c4;
extern int DAT_121a22c8;
extern int DAT_121a22cc;
extern int DAT_121a22d0;
extern int DAT_121a22d4;
extern int DAT_121a22d8;
extern int DAT_121a22dc;
extern int DAT_121a22e8;
extern int DAT_121a22ec;
extern int DAT_121a22f8;
extern int DAT_121a2368;
extern int DAT_121a236c;
extern int DAT_121a237c;
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
extern int DAT_121a23c8;
extern int DAT_121a23cc;
extern int DAT_121a23d0;
extern int DAT_121a23d4;
extern int DAT_121a23dc;
extern int DAT_121a23e0;
extern int DAT_121a23e8;
extern int DAT_121a23f4;
extern int DAT_121a23f8;
extern int DAT_121a24cc;
extern int DAT_121a2650;
extern int DAT_121a2668;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RUpnpCDDestroyObjectAIOOp;
extern int ghidra_vftable_SCAddMusicServiceDescriptor;
extern int ghidra_vftable_SCAddProductAccountRequiredSubwiz;
extern int ghidra_vftable_SCAddProductAddAnotherProductPage;
extern int ghidra_vftable_SCAddProductAddExistingPage;
extern int ghidra_vftable_SCAddProductApConnectSubwiz;
extern int ghidra_vftable_SCAddProductAppVersionCheckSubwiz;
extern int ghidra_vftable_SCAddProductAuthPlusAuthenticationSubwiz;
extern int ghidra_vftable_SCAddProductBleConnectSubwiz;
extern int ghidra_vftable_SCAddProductBluetoothOnlyJoinGestureSubwiz;
extern int ghidra_vftable_SCAddProductConnectRecoverySubwiz;
extern int ghidra_vftable_SCAddProductConnectionLastResortPage;
extern int ghidra_vftable_SCAddProductContinueConfigurationPage;
extern int ghidra_vftable_SCAddProductDeactivatedErrorPage;
extern int ghidra_vftable_SCAddProductDefaultIntroPage;
extern int ghidra_vftable_SCAddProductDevicePermissionsSubwiz;
extern int ghidra_vftable_SCAddProductFatalVerificationErrorPage;
extern int ghidra_vftable_SCAddProductFinishConfigurationPage;
extern int ghidra_vftable_SCAddProductFirmwareUpdateSubwiz;
extern int ghidra_vftable_SCAddProductIncompleteWirelessConnectSubwiz;
extern int ghidra_vftable_SCAddProductJoinPreparationSubwiz;
extern int ghidra_vftable_SCAddProductJoinProductSubwiz;
extern int ghidra_vftable_SCAddProductLegacyAuthenticationSubwiz;
extern int ghidra_vftable_SCAddProductLegacyOnlyPage;
extern int ghidra_vftable_SCAddProductNamePortableSubwiz;
extern int ghidra_vftable_SCAddProductNewHouseholdPage;
extern int ghidra_vftable_SCAddProductNotificationIntroPage;
extern int ghidra_vftable_SCAddProductOutroFailurePage;
extern int ghidra_vftable_SCAddProductOutroPage;
extern int ghidra_vftable_SCAddProductPortablePreparationSubwiz;
extern int ghidra_vftable_SCAddProductProductPlacementSubwiz;
extern int ghidra_vftable_SCAddProductRoomAllocationSubwiz;
extern int ghidra_vftable_SCAddProductSecureAuthenticationSubwiz;
extern int ghidra_vftable_SCAddProductSecureRegistrationSubwiz;
extern int ghidra_vftable_SCAddProductSelectionIntroPage;
extern int ghidra_vftable_SCAddProductTempWireInstructionsPage;
extern int ghidra_vftable_SCAddProductUpdateCheckSubwiz;
extern int ghidra_vftable_SCAddProductVanishedProductErrorPage;
extern int ghidra_vftable_SCAddProductWacConnectSubwiz;
extern int ghidra_vftable_SCAddProductWiredConnectSubwiz;
extern int ghidra_vftable_SCAddProductWizard;
extern int ghidra_vftable_SCBondingLaunchable;
extern int ghidra_vftable_SCConditionalElementTree;
extern int ghidra_vftable_SCConditionalElementTreeNoAppendInterface;
extern int ghidra_vftable_SCDiagnostics;
extern int ghidra_vftable_SCDisplayCustomControlActionDescriptor;
extern int ghidra_vftable_SCElapsedTimeMeasurement;
extern int ghidra_vftable_SCEventSubscriptionImpl;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCLaunchSoundLabAction;
extern int ghidra_vftable_SCMusicService;
extern int ghidra_vftable_SCMusicServiceFilterLearnMoreActionDescriptor;
extern int ghidra_vftable_SCNewWizControllerFor;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpPerformQueue;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCReceiptSessionManager;
extern int ghidra_vftable_SCSetupEngine_DenylistFromSetupHomeAction;
extern int ghidra_vftable_SCShareBrowseItem;
extern int ghidra_vftable_SCSonarCalibrationManager;
extern int ghidra_vftable_SCSubmitDiagsWizard;
extern int ghidra_vftable_SCSubmitDiagsWizardDonePage;
extern int ghidra_vftable_SCSubmitDiagsWizardErrorPage;
extern int ghidra_vftable_SCSubmitDiagsWizardIntroPage;
extern int ghidra_vftable_SCSubmitDiagsWizardSubmittingPage;
extern int ghidra_vftable_SCSubwizStateFor;
extern int ghidra_vftable_SCSwgenDowngradeProductAccountLoginSubwiz;
extern int ghidra_vftable_SCSwgenDowngradeProductAccountRequiredSubwiz;
extern int ghidra_vftable_SCSwgenDowngradeProductApConnectSubwiz;
extern int ghidra_vftable_SCSwgenDowngradeProductAppVersionCheckSubwiz;
extern int ghidra_vftable_SCSwgenDowngradeProductBleConnectSubwiz;
extern int ghidra_vftable_SCSwgenDowngradeProductCheckRunningLegacySWPage;
extern int ghidra_vftable_SCSwgenDowngradeProductConnectRecoverySubwiz;
extern int ghidra_vftable_SCSwgenDowngradeProductConnectedToLANPage;
extern int ghidra_vftable_SCSwgenDowngradeProductConnectingProductPage;
extern int ghidra_vftable_SCSwgenDowngradeProductConnectingProductRetryPage;
extern int ghidra_vftable_SCSwgenDowngradeProductDevicePermissionsSubwiz;
extern int ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradeIntroPage;
extern int ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingPage;
extern int ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingRetryPage;
extern int ghidra_vftable_SCSwgenDowngradeProductFirmwareUpdateSubwiz;
extern int ghidra_vftable_SCSwgenDowngradeProductIncompleteWirelessConnectSubwiz;
extern int ghidra_vftable_SCSwgenDowngradeProductIntroPage;
extern int ghidra_vftable_SCSwgenDowngradeProductJoinPreparationSubwiz;
extern int ghidra_vftable_SCSwgenDowngradeProductJoinProductFailurePage;
extern int ghidra_vftable_SCSwgenDowngradeProductJoinProductSubwiz;
extern int ghidra_vftable_SCSwgenDowngradeProductOptionsPage;
extern int ghidra_vftable_SCSwgenDowngradeProductOutroPage;
extern int ghidra_vftable_SCSwgenDowngradeProductPortablePreparationSubwiz;
extern int ghidra_vftable_SCSwgenDowngradeProductSearchingPage;
extern int ghidra_vftable_SCSwgenDowngradeProductSearchingRetryPage;
extern int ghidra_vftable_SCSwgenDowngradeProductSecureAuthenticationSubwiz;
extern int ghidra_vftable_SCSwgenDowngradeProductSelectionPage;
extern int ghidra_vftable_SCSwgenDowngradeProductWacConnectSubwiz;
extern int ghidra_vftable_SCSwgenDowngradeProductWiredConnectSubwiz;
extern int ghidra_vftable_SCSwgenDowngradeProductWizard;
extern int ghidra_vftable_SCVersion;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_stack_0000002c;
extern int in_stack_00000030;
extern int in_stack_00000034;
extern int unaff_EBX;
extern undefined1 LAB_1062386d[];
extern undefined1 LAB_1063a85c[];
extern undefined1 LAB_1063b0c4[];
extern undefined1 LAB_1063b32c[];
extern undefined1 LAB_1063b533[];
extern undefined1 LAB_1063baa4[];
extern undefined1 LAB_1063c13c[];
extern undefined1 LAB_1063c33c[];
extern undefined1 LAB_1063c8fc[];
extern undefined1 LAB_1063d334[];
extern undefined1 LAB_1063d6c4[];
extern undefined1 LAB_1063da54[];
extern undefined1 LAB_10647211[];
extern undefined1 LAB_10667fcf[];
extern undefined1 LAB_1066869c[];
extern undefined1 LAB_10669241[];
extern undefined1 LAB_106695fc[];
extern undefined1 LAB_1066a82c[];
extern undefined1 LAB_1066abb4[];
extern undefined1 LAB_1066af11[];
extern undefined1 LAB_1066b77c[];
extern undefined1 LAB_1066bd0f[];
extern undefined1 LAB_1066c71c[];
extern undefined1 LAB_1066c9bd[];
extern undefined1 LAB_1066cd5c[];
extern undefined1 LAB_1066d13c[];
extern undefined1 LAB_1067eb61[];
extern undefined1 LAB_1068b362[];
extern undefined1 LAB_106bdfa4[];
extern undefined1 LAB_106c952a[];
extern undefined1 LAB_106c95a1[];
extern undefined1 LAB_106cf0a8[];
extern undefined1 LAB_115bed50[];
extern undefined1 LAB_115bf037[];
extern undefined1 LAB_115bf087[];
extern undefined1 LAB_115bf0d7[];
extern undefined1 LAB_115bf127[];
extern undefined1 LAB_115bf190[];
extern undefined1 LAB_115bf92d[];
extern undefined1 LAB_115c0580[];
extern undefined1 LAB_115c05e0[];
extern undefined1 LAB_115c0640[];
extern undefined1 LAB_115c06a0[];
extern undefined1 LAB_115c0700[];
extern undefined1 LAB_115c0760[];
extern undefined1 LAB_115c07c0[];
extern undefined1 LAB_115c0820[];
extern undefined1 LAB_115c0880[];
extern undefined1 LAB_115c08e0[];
extern undefined1 LAB_115c0940[];
extern undefined1 LAB_115c09a0[];
extern undefined1 LAB_115c0a00[];
extern undefined1 LAB_115c0a60[];
extern undefined1 LAB_115c0ac0[];
extern undefined1 LAB_115c0ba0[];
extern undefined1 LAB_115c0c60[];
extern undefined1 LAB_115c0d20[];
extern undefined1 LAB_115c0de0[];
extern undefined1 LAB_115c0ea0[];
extern undefined1 LAB_115c0fc0[];
extern undefined1 LAB_115c105d[];
extern undefined1 LAB_115c115d[];
extern undefined1 LAB_115c1228[];
extern undefined1 LAB_115c138d[];
extern undefined1 LAB_115c1450[];
extern undefined1 LAB_115c1510[];
extern undefined1 LAB_115c1630[];
extern undefined1 LAB_115c1750[];
extern undefined1 LAB_115c18d0[];
extern undefined1 LAB_115c1a50[];
extern undefined1 LAB_115c1b70[];
extern undefined1 LAB_115c1c30[];
extern undefined1 LAB_115c1ce9[];
extern undefined1 LAB_115c2660[];
extern undefined1 LAB_115c2690[];
extern undefined1 LAB_115c2720[];
extern undefined1 LAB_115c2810[];
extern undefined1 LAB_115c2870[];
extern undefined1 LAB_115c28a0[];
extern undefined1 LAB_115c2900[];
extern undefined1 LAB_115c2930[];
extern undefined1 LAB_115c29c0[];
extern undefined1 LAB_115c2a20[];
extern undefined1 LAB_115c2a50[];
extern undefined1 LAB_115c2ab0[];
extern undefined1 LAB_115c2b40[];
extern undefined1 LAB_115c2ba0[];
extern undefined1 LAB_115c2bd0[];
extern undefined1 LAB_115c3150[];
extern undefined1 LAB_115c3282[];
extern undefined1 LAB_115c3302[];
extern undefined1 LAB_115c3382[];
extern undefined1 LAB_115c3402[];
extern undefined1 LAB_115c3482[];
extern undefined1 LAB_115c34d7[];
extern undefined1 LAB_115c3552[];
extern undefined1 LAB_115c35af[];
extern undefined1 LAB_115c35f7[];
extern undefined1 LAB_115c364f[];
extern undefined1 LAB_115c36ca[];
extern undefined1 LAB_115c3717[];
extern undefined1 LAB_115c3767[];
extern undefined1 LAB_115c37bf[];
extern undefined1 LAB_115c3832[];
extern undefined1 LAB_115c38b2[];
extern undefined1 LAB_115c3907[];
extern undefined1 LAB_115c3982[];
extern undefined1 LAB_115c39d7[];
extern undefined1 LAB_115c3a52[];
extern undefined1 LAB_115c3aa7[];
extern undefined1 LAB_115c3af7[];
extern undefined1 LAB_115c3b72[];
extern undefined1 LAB_115c3bc7[];
extern undefined1 LAB_115c3c17[];
extern undefined1 LAB_115c3c92[];
extern undefined1 LAB_115c3ce7[];
extern undefined1 LAB_115c3d62[];
extern undefined1 LAB_115c3de2[];
extern undefined1 LAB_115c3f14[];
extern undefined1 LAB_115c3f50[];
extern undefined1 LAB_115c4c7d[];
extern undefined1 LAB_115c4d9d[];
extern undefined1 LAB_115c4ded[];
extern undefined1 LAB_115c4e3d[];
extern undefined1 LAB_115c4ee4[];
extern undefined1 LAB_115c4fed[];
extern undefined1 LAB_115c503d[];
extern undefined1 LAB_115c50ef[];
extern undefined1 LAB_115c521d[];
extern undefined1 LAB_115c527d[];
extern undefined1 LAB_115c52dd[];
extern undefined1 LAB_115c531d[];
extern undefined1 LAB_115c54bd[];
extern undefined1 LAB_115c61fd[];
extern undefined1 LAB_115c66ad[];
extern undefined1 LAB_115c68f5[];
extern undefined1 LAB_115c6945[];
extern undefined1 LAB_115c69d5[];
extern undefined1 LAB_115c6a1d[];
extern undefined1 LAB_115c6c4d[];
extern undefined1 LAB_115c6ccd[];
extern undefined1 LAB_115c6d90[];
extern undefined1 LAB_115c6fe0[];
extern undefined1 LAB_115c701d[];
extern undefined1 LAB_115c7fa0[];
extern undefined1 LAB_115c8000[];
extern undefined1 LAB_115c8060[];
extern undefined1 LAB_115c80c0[];
extern undefined1 LAB_115c8120[];
extern undefined1 LAB_115c8180[];
extern undefined1 LAB_115c81e0[];
extern undefined1 LAB_115c8240[];
extern undefined1 LAB_115c82a0[];
extern undefined1 LAB_115c8300[];
extern undefined1 LAB_115c8360[];
extern undefined1 LAB_115c83c0[];
extern undefined1 LAB_115c8420[];
extern undefined1 LAB_115c8480[];
extern undefined1 LAB_115c84e0[];
extern undefined1 LAB_115c8540[];
extern undefined1 LAB_115c85a0[];
extern undefined1 LAB_115c8600[];
extern undefined1 LAB_115c8660[];
extern undefined1 LAB_115c86c0[];
extern undefined1 LAB_115c8720[];
extern undefined1 LAB_115c8780[];
extern undefined1 LAB_115c87bd[];
extern undefined1 LAB_115c87fd[];
extern undefined1 LAB_115c88b0[];
extern undefined1 LAB_115c89ad[];
extern undefined1 LAB_115c8a70[];
extern undefined1 LAB_115c8b30[];
extern undefined1 LAB_115c8bf0[];
extern undefined1 LAB_115c8cb0[];
extern undefined1 LAB_115c8d70[];
extern undefined1 LAB_115c8e30[];
extern undefined1 LAB_115c9070[];
extern undefined1 LAB_115c91f0[];
extern undefined1 LAB_115c92b0[];
extern undefined1 LAB_115c9370[];
extern undefined1 LAB_115c9430[];
extern undefined1 LAB_115c94f0[];
extern undefined1 LAB_115c9610[];
extern undefined1 LAB_115c96ad[];
extern undefined1 LAB_115c9890[];
extern undefined1 LAB_115c9950[];
extern undefined1 LAB_115c9a10[];
extern undefined1 LAB_115c9ad0[];
extern undefined1 LAB_115c9b90[];
extern undefined1 LAB_115c9d10[];
extern undefined1 LAB_115c9e30[];
extern undefined1 LAB_115c9ef0[];
extern undefined1 LAB_115c9fa9[];
extern undefined1 LAB_115cace0[];
extern undefined1 LAB_115cad10[];
extern undefined1 LAB_115cad40[];
extern undefined1 LAB_115cad70[];
extern undefined1 LAB_115cae00[];
extern undefined1 LAB_115cae30[];
extern undefined1 LAB_115cae90[];
extern undefined1 LAB_115caef0[];
extern undefined1 LAB_115caf20[];
extern undefined1 LAB_115caf50[];
extern undefined1 LAB_115cb040[];
extern undefined1 LAB_115cb070[];
extern undefined1 LAB_115cb190[];
extern undefined1 LAB_115cb1f0[];
extern undefined1 LAB_115cb220[];
extern undefined1 LAB_115cb250[];
extern undefined1 LAB_115cb2b0[];
extern undefined1 LAB_115cb5e0[];
extern undefined1 LAB_115cb61d[];
extern undefined1 LAB_115cb6e0[];
extern undefined1 LAB_115cb710[];
extern undefined1 LAB_115cb872[];
extern undefined1 LAB_115cb8c7[];
extern undefined1 LAB_115cb91f[];
extern undefined1 LAB_115cb992[];
extern undefined1 LAB_115cba12[];
extern undefined1 LAB_115cba92[];
extern undefined1 LAB_115cbb12[];
extern undefined1 LAB_115cbb92[];
extern undefined1 LAB_115cbc12[];
extern undefined1 LAB_115cbc67[];
extern undefined1 LAB_115cbcb7[];
extern undefined1 LAB_115cbd07[];
extern undefined1 LAB_115cbd57[];
extern undefined1 LAB_115cbdd2[];
extern undefined1 LAB_115cbe27[];
extern undefined1 LAB_115cbe77[];
extern undefined1 LAB_115cbef2[];
extern undefined1 LAB_115cbf72[];
extern undefined1 LAB_115cbff2[];
extern undefined1 LAB_115cc072[];
extern undefined1 LAB_115cc0f2[];
extern undefined1 LAB_115cc147[];
extern undefined1 LAB_115cc1c2[];
extern undefined1 LAB_115cc21f[];
extern undefined1 LAB_115cc267[];
extern undefined1 LAB_115cc2b7[];
extern undefined1 LAB_115cc307[];
extern undefined1 LAB_115cc382[];
extern undefined1 LAB_115cc402[];
extern undefined1 LAB_115cc482[];
extern undefined1 LAB_115cc502[];
extern undefined1 LAB_115cc582[];
extern undefined1 LAB_115cc5d7[];
extern undefined1 LAB_115cc627[];
extern undefined1 LAB_115cc6a2[];
extern undefined1 LAB_115cc6f7[];
extern undefined1 LAB_115cc772[];
extern undefined1 LAB_115cc7f2[];
extern undefined1 LAB_115cc924[];
extern undefined1 LAB_115cdd4d[];
extern undefined1 LAB_115cde25[];
extern undefined1 LAB_115cdfcd[];
extern undefined1 LAB_115ce035[];
extern undefined1 LAB_115ce2fd[];
extern undefined1 LAB_115ce365[];
extern undefined1 LAB_115ce3e0[];
extern undefined1 LAB_115ce4ed[];
extern undefined1 LAB_115ce5b5[];
extern undefined1 LAB_115ce74d[];
extern undefined1 LAB_115ce7b5[];
extern undefined1 LAB_115ce825[];
extern undefined1 LAB_115ce895[];
extern undefined1 LAB_115cec3d[];
extern undefined1 LAB_115d06e5[];
extern undefined1 LAB_115d072d[];
extern undefined1 LAB_115d076d[];
extern undefined1 LAB_115d07ad[];
extern undefined1 LAB_115d07ed[];
extern undefined1 LAB_115d1545[];
extern undefined1 LAB_115d1585[];
extern undefined1 LAB_115d15d5[];
extern undefined1 LAB_115d1625[];
extern undefined1 LAB_115d17dd[];
extern undefined1 LAB_115d1850[];
extern undefined1 LAB_115d1d80[];
extern undefined1 LAB_115d2010[];
extern undefined1 LAB_115d23e0[];
extern undefined1 LAB_115d25a0[];
extern undefined1 LAB_115d2a25[];
extern undefined1 LAB_115d2c50[];
extern undefined1 LAB_115d2f05[];
extern undefined1 LAB_115d2f44[];
extern undefined1 LAB_115d2f7d[];
extern undefined1 LAB_115d2fbd[];
extern undefined1 LAB_115d301b[];
extern undefined1 LAB_115d3260[];
extern undefined1 LAB_115d35de[];
extern undefined1 LAB_115d3669[];
extern undefined1 LAB_115d36c7[];
extern undefined1 LAB_115d3844[];
extern undefined1 LAB_115d387d[];
extern undefined1 LAB_115d38b0[];
extern undefined1 LAB_115d392d[];
extern undefined1 LAB_115d3974[];
extern undefined1 LAB_115d3f0d[];
extern undefined1 LAB_115d40fd[];
extern undefined1 LAB_115d41cd[];
extern undefined1 LAB_115d4215[];
extern undefined1 LAB_115d453d[];
extern undefined1 LAB_115d457d[];
extern undefined1 LAB_115d45bd[];
extern undefined1 LAB_115d46cd[];
extern undefined1 LAB_115d470d[];
extern undefined1 LAB_115d474d[];
extern undefined1 LAB_115d47dd[];
extern undefined1 LAB_115d48cd[];
extern undefined1 LAB_115d497d[];
extern undefined1 LAB_115d4b90[];
extern undefined1 LAB_115d4c20[];
extern undefined1 LAB_115d4f10[];
extern undefined1 LAB_115d52f0[];
extern undefined1 LAB_115d577d[];
extern undefined1 LAB_115d57cd[];
extern undefined1 LAB_115d58b0[];
extern undefined1 LAB_115d595e[];
extern undefined1 LAB_115d59b5[];
extern undefined1 LAB_115d5b50[];
extern undefined1 LAB_115d5b80[];
extern undefined1 LAB_115d5bb0[];
extern undefined1 LAB_115d5c40[];
extern undefined1 LAB_115d5c70[];
extern undefined1 LAB_115d5f6c[];
extern undefined1 LAB_115d5fad[];
extern undefined1 LAB_115d5ffc[];
extern undefined1 LAB_115d65db[];
extern undefined1 LAB_115d679b[];
extern undefined1 LAB_115d67dd[];
extern undefined1 LAB_115d681d[];
extern undefined1 LAB_115d68bb[];
extern undefined1 LAB_115d6ac0[];
extern undefined1 LAB_115d6af0[];
extern undefined1 LAB_115d6b20[];
extern undefined1 LAB_115d6b50[];
extern undefined1 LAB_115d6b80[];
extern undefined1 LAB_115d6bb0[];
extern undefined1 LAB_115d6d40[];
extern undefined1 LAB_115d6d70[];
extern undefined1 LAB_115d749d[];
extern undefined1 LAB_115d758d[];
extern undefined1 LAB_115d75cd[];
extern undefined1 LAB_115d76cd[];
extern undefined1 LAB_115d79b0[];
extern undefined1 LAB_115d7aa5[];
extern undefined1 LAB_115d7afc[];
extern undefined1 LAB_115d883d[];
extern undefined1 LAB_115d893d[];
extern undefined1 LAB_115d89bd[];
extern undefined1 LAB_115d8a85[];
extern undefined1 LAB_115d8ab0[];
extern undefined1 LAB_115d8b90[];
extern undefined1 LAB_115d8e75[];
extern undefined1 LAB_115d8ea0[];
extern undefined1 LAB_115d8edd[];
extern undefined1 LAB_115d90cd[];
extern undefined1 LAB_115d914d[];
extern undefined1 LAB_115d924d[];
extern undefined1 LAB_115d934d[];
extern undefined1 LAB_115d938d[];
extern undefined1 LAB_115d94e0[];
extern undefined1 LAB_115d95de[];
extern undefined1 LAB_115d9625[];
extern undefined1 LAB_115d9650[];
extern undefined1 LAB_115d968d[];
extern undefined1 LAB_115d970d[];
extern undefined1 LAB_115d981d[];
extern undefined1 LAB_115d985d[];
extern undefined1 LAB_115d98ed[];
extern undefined1 LAB_115d9935[];
extern undefined1 LAB_115d9d4d[];
extern undefined1 LAB_115da090[];
extern undefined1 LAB_115da0c0[];
extern undefined1 LAB_115da0f0[];
extern undefined1 LAB_115da120[];
extern undefined1 LAB_115da2d0[];
extern undefined1 LAB_115da330[];
extern undefined1 LAB_115da88d[];
extern undefined1 LAB_115da955[];
extern undefined1 LAB_115da980[];
extern undefined1 LAB_115da9b0[];
extern undefined1 LAB_115daa70[];
extern undefined1 LAB_115db345[];
extern undefined1 LAB_115db3b5[];
extern undefined1 LAB_115db3e0[];
extern undefined1 LAB_115db4e0[];
extern undefined1 LAB_115db5dd[];
extern undefined1 LAB_115db61d[];
extern undefined1 LAB_115db6dd[];
extern undefined1 LAB_115db79d[];
extern undefined1 LAB_115dbe66[];
extern undefined1 LAB_115dbfdc[];
extern undefined1 LAB_115dc95d[];
extern undefined1 LAB_115dd0a5[];
extern undefined1 LAB_115dd9a5[];
extern undefined1 LAB_115dda0d[];
extern undefined1 LAB_115dda65[];
extern undefined1 LAB_115ddaad[];
extern undefined1 LAB_115ddddd[];
extern undefined1 LAB_115ddf4d[];
extern undefined1 LAB_115ddf8d[];
extern undefined1 LAB_115de04d[];
extern undefined1 LAB_115de12d[];
extern undefined1 LAB_115de4bd[];
extern undefined1 LAB_115de550[];
extern undefined1 LAB_115de720[];
extern undefined1 LAB_115de75d[];
extern undefined1 LAB_115de7cd[];
extern undefined1 LAB_115de82d[];
extern undefined1 LAB_115de955[];
extern undefined1 LAB_115deac5[];
extern undefined1 LAB_115deb5d[];
extern undefined1 LAB_115deb90[];
extern undefined1 LAB_115debc0[];
extern undefined1 LAB_115dec30[];
extern undefined1 LAB_115def55[];
extern undefined1 LAB_115defdf[];
extern undefined1 LAB_115df1b0[];
extern undefined1 LAB_115df1e0[];
extern undefined1 LAB_115df490[];
extern undefined1 LAB_115df4c0[];
extern undefined1 LAB_115df520[];
extern int *stack0x00000004;
extern int *stack0x00000008;
extern int *stack0x0000000c;
extern int *stack0x00000010;
extern int *stack0xfffffffc;
extern void *ExceptionList;
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int createSCRunAsyncIOOperationAction(A...); template<class... A> int getSCHousehold(A...); template<class... A> int getSingleton(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int op_eq(A...); template<class... A> int stringWithFormat(A...); };
typedef void *ID;
typedef void *LOCK;
typedef void *UNLOCK;
typedef void *WARNING;
struct Announcements { char _pad; Announcements(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Attempting { char _pad; Attempting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Beginning { char _pad; Beginning(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ContainerID { char _pad; ContainerID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DestroyObject { char _pad; DestroyObject(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Dismissed { char _pad; Dismissed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Elements { char _pad; Elements(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Home { char _pad; Home(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Index { char _pad; Index(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Local { char _pad; Local(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ObjectID { char _pad; ObjectID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RINCON_AssociatedZPUDN { char _pad; RINCON_AssociatedZPUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Result { char _pad; Result(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Retry { char _pad; Retry(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIEventSink { char _pad; SCIEventSink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOp { char _pad; SCIOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSetupEngine { char _pad; SCSetupEngine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Setup { char _pad; Setup(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ShareManager { char _pad; ShareManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SonosNet { char _pad; SonosNet(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Starting { char _pad; Starting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Stopping { char _pad; Stopping(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct The { char _pad; The(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Time { char _pad; Time(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Timer { char _pad; Timer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; undefined4 * __thiscall FUN_1061fbb0(byte param_2); undefined4 * __thiscall FUN_1061fc50(byte param_2); undefined4 * __thiscall FUN_1061fcf0(byte param_2); undefined4 * __thiscall FUN_1061fec0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1061ffa0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10620080(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10620160(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10620260(undefined4 param_2,undefined4 param_3,undefined4 param_4); int * __thiscall FUN_10623c70(int *param_2); int * __thiscall FUN_10623ce0(int *param_2); undefined4 * __thiscall FUN_10625fe0(undefined4 param_2); undefined4 * __thiscall FUN_106260f0(undefined4 param_2); undefined4 * __thiscall FUN_10626200(undefined4 param_2); undefined4 * __thiscall FUN_10626310(undefined4 param_2); undefined4 * __thiscall FUN_10626420(undefined4 param_2); undefined4 * __thiscall FUN_10626530(undefined4 param_2); undefined4 * __thiscall FUN_10626640(undefined4 param_2); undefined4 * __thiscall FUN_10626750(undefined4 param_2); undefined4 * __thiscall FUN_10626860(undefined4 param_2); undefined4 * __thiscall FUN_10626970(undefined4 param_2); undefined4 * __thiscall FUN_10626a80(undefined4 param_2); undefined4 * __thiscall FUN_10626b90(undefined4 param_2); undefined4 * __thiscall FUN_10626ca0(undefined4 param_2); undefined4 * __thiscall FUN_10626db0(undefined4 param_2); undefined4 * __thiscall FUN_10626ec0(undefined4 param_2); undefined4 * __thiscall FUN_106271a0(undefined4 param_2); undefined4 * __thiscall FUN_106273b0(undefined4 param_2); undefined4 * __thiscall FUN_106275c0(undefined4 param_2); undefined4 * __thiscall FUN_106277d0(undefined4 param_2); undefined4 * __thiscall FUN_106279e0(undefined4 param_2); undefined4 * __thiscall FUN_10627d60(undefined4 param_2); undefined4 * __thiscall FUN_10627f70(undefined4 param_2); undefined4 * __thiscall FUN_10628270(undefined4 param_2); undefined4 * __thiscall FUN_10628420(undefined4 param_2); undefined4 * __thiscall FUN_106289a0(undefined4 param_2); undefined4 * __thiscall FUN_10628b50(undefined4 param_2); undefined4 * __thiscall FUN_10628d60(undefined4 param_2); undefined4 * __thiscall FUN_106290c0(undefined4 param_2); undefined4 * __thiscall FUN_10629420(undefined4 param_2); undefined4 * __thiscall FUN_106298d0(undefined4 param_2); undefined4 * __thiscall FUN_10629d80(undefined4 param_2); undefined4 * __thiscall FUN_1062a100(undefined4 param_2); undefined4 * __thiscall FUN_1062a310(undefined4 param_2); undefined4 * __thiscall FUN_1062a520(undefined4 param_2); undefined4 * __thiscall FUN_1062e520(byte param_2); undefined4 * __thiscall FUN_1062eaf0(byte param_2); undefined4 * __thiscall FUN_1062eb50(byte param_2); undefined4 * __thiscall FUN_1062ebb0(byte param_2); undefined4 * __thiscall FUN_1062ec10(byte param_2); undefined4 * __thiscall FUN_1062ec70(byte param_2); undefined4 * __thiscall FUN_1062ecd0(byte param_2); undefined4 * __thiscall FUN_1062ed30(byte param_2); undefined4 * __thiscall FUN_1062ed90(byte param_2); undefined4 * __thiscall FUN_1062edf0(byte param_2); undefined4 * __thiscall FUN_1062ee50(byte param_2); undefined4 * __thiscall FUN_1062eeb0(byte param_2); undefined4 * __thiscall FUN_1062ef10(byte param_2); undefined4 * __thiscall FUN_1062ef70(byte param_2); undefined4 * __thiscall FUN_1062efd0(byte param_2); undefined4 * __thiscall FUN_1062f030(byte param_2); undefined4 * __thiscall FUN_1062f130(byte param_2); undefined4 * __thiscall FUN_1062f1d0(byte param_2); undefined4 * __thiscall FUN_1062f270(byte param_2); undefined4 * __thiscall FUN_1062f310(byte param_2); undefined4 * __thiscall FUN_1062f3b0(byte param_2); undefined4 * __thiscall FUN_1062f450(byte param_2); undefined4 * __thiscall FUN_1062f560(byte param_2); undefined4 * __thiscall FUN_1062f700(byte param_2); undefined4 * __thiscall FUN_1062f8a0(byte param_2); undefined4 * __thiscall FUN_1062f940(byte param_2); undefined4 * __thiscall FUN_1062f9e0(byte param_2); undefined4 * __thiscall FUN_1062fbf0(byte param_2); undefined4 * __thiscall FUN_1062fc90(byte param_2); undefined4 * __thiscall FUN_1062fd30(byte param_2); undefined4 * __thiscall FUN_1062fdd0(byte param_2); undefined4 * __thiscall FUN_1062fe70(byte param_2); undefined4 * __thiscall FUN_1062ff10(byte param_2); undefined4 * __thiscall FUN_1062ffb0(byte param_2); undefined4 * __thiscall FUN_10630050(byte param_2); undefined4 * __thiscall FUN_106300f0(byte param_2); undefined4 * __thiscall FUN_10630190(byte param_2); undefined4 * __thiscall FUN_10630230(byte param_2); undefined4 * __thiscall FUN_106302d0(byte param_2); undefined4 * __thiscall FUN_10630370(byte param_2); undefined4 * __thiscall FUN_10630480(byte param_2); undefined4 * __thiscall FUN_10630520(byte param_2); int __thiscall FUN_106305c0(byte param_2); undefined4 * __thiscall FUN_10631770(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_106318d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10631a30(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10631b90(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10631cf0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10631e50(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10631f50(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_106320b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_106321b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10632290(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10632390(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_106325a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10632680(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10632780(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10632880(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_106329e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10632b40(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10632c20(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10632d80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10632e60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10632fc0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_106330a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10633180(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_106332e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_106333c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_106334a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10633600(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10633700(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10633860(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10633ba0(undefined4 param_2,undefined4 param_3,undefined4 param_4); void __thiscall FUN_10633d90(undefined4 *param_2,int *param_3,int *param_4); undefined4 __thiscall FUN_1063a710(undefined4 param_2); int * __thiscall FUN_1063e3b0(int *param_2); void __thiscall FUN_10648010(int param_2,int param_3); undefined4 * __thiscall FUN_1064bd40(undefined4 param_2); undefined4 * __thiscall FUN_1064be50(undefined4 param_2); undefined4 * __thiscall FUN_1064bf60(undefined4 param_2); undefined4 * __thiscall FUN_1064c070(undefined4 param_2); undefined4 * __thiscall FUN_1064c180(undefined4 param_2); undefined4 * __thiscall FUN_1064c290(undefined4 param_2); undefined4 * __thiscall FUN_1064c3a0(undefined4 param_2); undefined4 * __thiscall FUN_1064c4b0(undefined4 param_2); undefined4 * __thiscall FUN_1064c5c0(undefined4 param_2); undefined4 * __thiscall FUN_1064c6d0(undefined4 param_2); undefined4 * __thiscall FUN_1064c7e0(undefined4 param_2); undefined4 * __thiscall FUN_1064c8f0(undefined4 param_2); undefined4 * __thiscall FUN_1064ca00(undefined4 param_2); undefined4 * __thiscall FUN_1064cb10(undefined4 param_2); undefined4 * __thiscall FUN_1064cc20(undefined4 param_2); undefined4 * __thiscall FUN_1064cd30(undefined4 param_2); undefined4 * __thiscall FUN_1064ce40(undefined4 param_2); undefined4 * __thiscall FUN_1064cf50(undefined4 param_2); undefined4 * __thiscall FUN_1064d060(undefined4 param_2); undefined4 * __thiscall FUN_1064d170(undefined4 param_2); undefined4 * __thiscall FUN_1064d280(undefined4 param_2); undefined4 * __thiscall FUN_1064d390(undefined4 param_2); int __thiscall FUN_1064d660(int param_2); int * __thiscall FUN_1064d7a0(int *param_2); undefined4 * __thiscall FUN_1064da50(undefined4 param_2); undefined4 * __thiscall FUN_1064ddb0(undefined4 param_2); undefined4 * __thiscall FUN_1064df60(undefined4 param_2); undefined4 * __thiscall FUN_1064e170(undefined4 param_2); undefined4 * __thiscall FUN_1064e380(undefined4 param_2); undefined4 * __thiscall FUN_1064e590(undefined4 param_2); undefined4 * __thiscall FUN_1064e7a0(undefined4 param_2); undefined4 * __thiscall FUN_1064e9b0(undefined4 param_2); undefined4 * __thiscall FUN_1064f130(undefined4 param_2); undefined4 * __thiscall FUN_1064f5e0(undefined4 param_2); undefined4 * __thiscall FUN_1064f7f0(undefined4 param_2); undefined4 * __thiscall FUN_1064fa00(undefined4 param_2); undefined4 * __thiscall FUN_1064fc10(undefined4 param_2); undefined4 * __thiscall FUN_1064fe20(undefined4 param_2); undefined4 * __thiscall FUN_10650180(undefined4 param_2); undefined4 * __thiscall FUN_10650390(undefined4 param_2); undefined4 * __thiscall FUN_10650980(undefined4 param_2); undefined4 * __thiscall FUN_10650b90(undefined4 param_2); undefined4 * __thiscall FUN_10650da0(undefined4 param_2); undefined4 * __thiscall FUN_10650fb0(undefined4 param_2); undefined4 * __thiscall FUN_106511c0(undefined4 param_2); undefined4 * __thiscall FUN_106516b0(undefined4 param_2); undefined4 * __thiscall FUN_10651a10(undefined4 param_2); undefined4 * __thiscall FUN_10651c20(undefined4 param_2); undefined4 * __thiscall FUN_10651e30(undefined4 param_2); int * __thiscall FUN_10656a30(int *param_2); int * __thiscall FUN_10656aa0(int *param_2); undefined4 * __thiscall FUN_10657590(byte param_2); undefined4 * __thiscall FUN_10657600(byte param_2); undefined4 * __thiscall FUN_10657d80(byte param_2); undefined4 * __thiscall FUN_10657de0(byte param_2); undefined4 * __thiscall FUN_10657e40(byte param_2); undefined4 * __thiscall FUN_10657ea0(byte param_2); undefined4 * __thiscall FUN_10657f00(byte param_2); undefined4 * __thiscall FUN_10657f60(byte param_2); undefined4 * __thiscall FUN_10657fc0(byte param_2); undefined4 * __thiscall FUN_10658020(byte param_2); undefined4 * __thiscall FUN_10658080(byte param_2); undefined4 * __thiscall FUN_106580e0(byte param_2); undefined4 * __thiscall FUN_10658140(byte param_2); undefined4 * __thiscall FUN_106581a0(byte param_2); undefined4 * __thiscall FUN_10658200(byte param_2); undefined4 * __thiscall FUN_10658260(byte param_2); undefined4 * __thiscall FUN_106582c0(byte param_2); undefined4 * __thiscall FUN_10658320(byte param_2); undefined4 * __thiscall FUN_10658380(byte param_2); undefined4 * __thiscall FUN_106583e0(byte param_2); undefined4 * __thiscall FUN_10658440(byte param_2); undefined4 * __thiscall FUN_106584a0(byte param_2); undefined4 * __thiscall FUN_10658500(byte param_2); undefined4 * __thiscall FUN_10658560(byte param_2); undefined4 * __thiscall FUN_106586c0(byte param_2); undefined4 * __thiscall FUN_10658760(byte param_2); undefined4 * __thiscall FUN_10658900(byte param_2); undefined4 * __thiscall FUN_106589a0(byte param_2); undefined4 * __thiscall FUN_10658a40(byte param_2); undefined4 * __thiscall FUN_10658ae0(byte param_2); undefined4 * __thiscall FUN_10658b80(byte param_2); undefined4 * __thiscall FUN_10658c20(byte param_2); undefined4 * __thiscall FUN_10658cc0(byte param_2); undefined4 * __thiscall FUN_10658d60(byte param_2); undefined4 * __thiscall FUN_10658e00(byte param_2); undefined4 * __thiscall FUN_10658ea0(byte param_2); undefined4 * __thiscall FUN_10658fb0(byte param_2); undefined4 * __thiscall FUN_10659050(byte param_2); undefined4 * __thiscall FUN_106590f0(byte param_2); undefined4 * __thiscall FUN_10659190(byte param_2); undefined4 * __thiscall FUN_10659230(byte param_2); undefined4 * __thiscall FUN_106592d0(byte param_2); undefined4 * __thiscall FUN_10659370(byte param_2); undefined4 * __thiscall FUN_10659410(byte param_2); undefined4 * __thiscall FUN_106594b0(byte param_2); undefined4 * __thiscall FUN_10659550(byte param_2); undefined4 * __thiscall FUN_106596f0(byte param_2); undefined4 * __thiscall FUN_10659800(byte param_2); undefined4 * __thiscall FUN_106598a0(byte param_2); undefined4 * __thiscall FUN_106599b0(byte param_2); undefined4 * __thiscall FUN_10659a50(byte param_2); undefined4 * __thiscall FUN_10659af0(byte param_2); undefined4 * __thiscall FUN_10659b90(byte param_2); undefined4 * __thiscall FUN_10659c30(byte param_2); undefined4 * __thiscall FUN_10659cd0(byte param_2); undefined4 * __thiscall FUN_10659df0(byte param_2); undefined4 * __thiscall FUN_10659e90(byte param_2); undefined4 * __thiscall FUN_10659f30(byte param_2); undefined4 * __thiscall FUN_10659fd0(byte param_2); undefined4 * __thiscall FUN_1065a070(byte param_2); int __thiscall FUN_1065a2b0(byte param_2); undefined4 * __thiscall FUN_1065a330(byte param_2); int __thiscall FUN_1065a3f0(byte param_2); undefined4 * __thiscall FUN_1065b600(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065b760(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065b840(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065b940(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065baa0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065bc00(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065bd60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065bec0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065c020(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065c180(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065c260(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065c340(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065c420(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065c520(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065c680(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065c760(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065c840(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065c9a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065cb00(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065cc60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065cdc0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065cf20(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065d000(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065d160(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065d260(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065d360(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065d440(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065d540(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065d6a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065d800(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065d960(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065dac0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065dc20(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065dd40(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065de20(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065df80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065e060(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065e1c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1065e500(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 __thiscall FUN_10667e30(undefined4 param_2); int * __thiscall FUN_1066e450(int *param_2); int __thiscall FUN_1067f510(int param_2); undefined4 * __thiscall FUN_10684cd0(byte param_2); undefined4 * __thiscall FUN_10684ec0(byte param_2); void __thiscall FUN_106850b0(int param_2,int param_3,int param_4); void __thiscall FUN_10686920(undefined4 *param_2,int *param_3); void __thiscall FUN_10687b10(int *param_2); undefined4 * __thiscall FUN_10687d70(int param_2); undefined4 * __thiscall FUN_10687e80(int param_2); undefined4 * __thiscall FUN_10689480(byte param_2); void __thiscall FUN_106896f0(int *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1068a5e0(undefined4 *param_2,uint param_3); void __thiscall FUN_1068acc0(undefined4 *param_2); void __thiscall FUN_1068b210(undefined4 param_2,undefined4 param_3); void __thiscall FUN_1068b340(int param_2,short param_3); int __thiscall FUN_1068ba00(undefined4 param_2); uint __thiscall FUN_1068beb0(char *param_2); void __thiscall FUN_10690660(int *param_2,byte *param_3); int __thiscall FUN_106910d0(int *param_2); int __thiscall FUN_10691140(int param_2); int __thiscall FUN_106911c0(int param_2); int __thiscall FUN_10691240(int param_2); int * __thiscall FUN_10691480(int *param_2); int * __thiscall FUN_106917b0(int *param_2); undefined4 * __thiscall FUN_10691ac0(undefined4 param_2,undefined4 param_3,int *param_4); int __thiscall FUN_106935a0(byte param_2); void __thiscall FUN_106939b0(int param_2,int param_3,int param_4); void __thiscall FUN_10693a60(int param_2,int param_3,int param_4); void __thiscall FUN_10693af0(int param_2,int param_3,int param_4); void __thiscall FUN_10693cc0(char param_2); float __thiscall FUN_10693d80(int param_2); void __thiscall FUN_10694220(int param_2); int * __thiscall FUN_106961e0(int *param_2); undefined4 __thiscall FUN_10696be0(uint param_2); int * __thiscall FUN_10696cb0(int *param_2); void __thiscall FUN_10696e20(int param_2,int *param_3); int * __thiscall FUN_106979b0(int *param_2); undefined4 * __thiscall FUN_10697a50(byte param_2); undefined4 * __thiscall FUN_10697b00(byte param_2); void __thiscall FUN_10699cb0(int *param_2,undefined4 param_3,uint param_4); undefined8 * __thiscall FUN_1069aec0(undefined8 *param_2); int __thiscall FUN_1069b050(int param_2); int __thiscall FUN_1069b0d0(int param_2); int * __thiscall FUN_1069c7e0(int *param_2); undefined4 * __thiscall FUN_1069d0b0(byte param_2); undefined4 * __thiscall FUN_1069d200(byte param_2); uint __thiscall FUN_1069d8f0(int param_2); void __thiscall FUN_1069dd30(int param_2); int * __thiscall FUN_1069fb30(int *param_2,int param_3); int * __thiscall FUN_1069fc50(int *param_2); void __thiscall FUN_106a17f0(undefined4 *param_2); undefined4 * __thiscall FUN_106a18e0(undefined4 *param_2); int * __thiscall FUN_106a4610(int *param_2); undefined4 * __thiscall FUN_106a6aa0(uint param_2,uint param_3); void __thiscall FUN_106a6b30(int *param_2,undefined4 param_3); uint __thiscall FUN_106a7260(uint param_2); undefined4 * __thiscall FUN_106a88c0(int param_2); int * __thiscall FUN_106a8e70(int *param_2); undefined4 * __thiscall FUN_106a8f30(undefined4 param_2); int * __thiscall FUN_106a9140(int *param_2); void __thiscall FUN_106a9340(int param_2,int param_3); void __thiscall FUN_106a94b0(int param_2,int param_3); void __thiscall FUN_106a9bb0(int *param_2,undefined4 param_3); int * __thiscall FUN_106ab8c0(int *param_2,int *param_3); int * __thiscall FUN_106ab920(int *param_2,int *param_3); void __thiscall FUN_106abdc0(int param_2,int param_3,int param_4); int * __thiscall FUN_106ade40(int *param_2,int *param_3); void __thiscall FUN_106af3b0(int *param_2); undefined4 * __thiscall FUN_106afa60(undefined4 *param_2); int * __thiscall FUN_106afc20(int *param_2); undefined4 * __thiscall FUN_106b08d0(undefined4 *param_2); int __thiscall FUN_106b0d60(int param_2); undefined4 * __thiscall FUN_106b0e90(undefined4 param_2); int * __thiscall FUN_106b1170(int *param_2); int * __thiscall FUN_106b1230(int *param_2); int __thiscall FUN_106b21b0(int *param_2); int __thiscall FUN_106b2220(int param_2); int * __thiscall FUN_106b5300(int *param_2); int * __thiscall FUN_106b5370(int *param_2); int * __thiscall FUN_106b53e0(int *param_2); int * __thiscall FUN_106b54b0(int param_2); int * __thiscall FUN_106b5520(int *param_2); int __thiscall FUN_106b5d00(int *param_2); undefined1 __thiscall FUN_106b6590(int *param_2); undefined4 * __thiscall FUN_106b6a00(byte param_2); undefined4 * __thiscall FUN_106b6a70(byte param_2); undefined4 * __thiscall FUN_106b6ae0(byte param_2); undefined4 * __thiscall FUN_106b6b50(byte param_2); int __thiscall FUN_106b6e60(byte param_2); void __thiscall FUN_106b8340(int param_2,int param_3,int param_4); void __thiscall FUN_106b83c0(int param_2,int param_3,int param_4); void __thiscall FUN_106b8450(int param_2,int param_3,int param_4); void __thiscall FUN_106b84e0(int param_2,int param_3,int param_4); void __thiscall FUN_106b85a0(int param_2,int param_3,int param_4); float __thiscall FUN_106b8bb0(int param_2); undefined1 __thiscall FUN_106b8dc0(int *param_2); void __thiscall FUN_106ba360(int param_2); void __thiscall FUN_106ba3d0(int param_2); void __thiscall FUN_106ba580(int param_2); void __thiscall FUN_106ba880(int *param_2); void __thiscall FUN_106ba8f0(int *param_2); int __thiscall FUN_106bae10(int param_2,int param_3,int param_4); int * __thiscall FUN_106baeb0(int *param_2,int *param_3,int *param_4); void __thiscall FUN_106bece0(int *param_2,int *param_3); undefined4 * __thiscall FUN_106bed50(undefined4 *param_2); undefined4 __thiscall FUN_106c5390(undefined4 param_2); void __thiscall FUN_106c94c0(int *param_2); void __thiscall FUN_106cb650(int param_2); void __thiscall FUN_106cc880(int *param_2); undefined4 * __thiscall FUN_106cc8e0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_106cc960(undefined4 *param_2,SCStr *param_3); void __thiscall FUN_106cd8c0(undefined4 param_2); void __thiscall FUN_106cdbf0(int param_2); void __thiscall FUN_106ce680(undefined4 param_2); void __thiscall FUN_106cf050(undefined4 param_2); int __thiscall FUN_106cfe90(int param_2); undefined4 * __thiscall FUN_106d0310(byte param_2); void __thiscall FUN_106d0660(int param_2,undefined4 param_3); undefined4 * __thiscall FUN_106d0d60(undefined4 *param_2,SCStr *param_3); undefined4 __thiscall FUN_106d1940(undefined4 param_2,int *param_3); };
using namespace std;
void __stdcall FUN_106237a0(int *param_1);
void __fastcall FUN_1062c0e0(int param_1);
void __fastcall FUN_1062c350(undefined4 *param_1);
void __fastcall FUN_1062c750(int param_1);
void __fastcall FUN_1062cae0(int param_1);
void __fastcall FUN_1062cca0(undefined4 *param_1);
void __fastcall FUN_1062cd10(undefined4 *param_1);
void __fastcall FUN_1062ce10(undefined4 *param_1);
void __fastcall FUN_1062d010(undefined4 *param_1);
void __fastcall FUN_1062d3a0(undefined4 *param_1);
void __fastcall FUN_1062d8f0(undefined4 *param_1);
void __fastcall FUN_1062da60(int param_1);
undefined4 * __stdcall FUN_10631380(undefined4 *param_1);
undefined4 __stdcall FUN_1063ae50(undefined4 param_1);
undefined4 __stdcall FUN_1063b1e0(undefined4 param_1);
undefined4 __stdcall FUN_1063b3f0(undefined4 param_1);
undefined4 __stdcall FUN_1063b5f0(undefined4 param_1);
undefined4 __stdcall FUN_1063bff0(undefined4 param_1);
undefined4 __stdcall FUN_1063c200(undefined4 param_1);
undefined4 __stdcall FUN_1063c400(undefined4 param_1);
undefined4 __stdcall FUN_1063d0c0(undefined4 param_1);
undefined4 __stdcall FUN_1063d450(undefined4 param_1);
undefined4 __stdcall FUN_1063d7e0(undefined4 param_1);
int FUN_1063db90(void);
void FUN_10643990(void);
void FUN_10643a30(void);
void FUN_10643aa0(void);
void FUN_10643b40(void);
void FUN_10643d50(void);
void FUN_10643dd0(void);
void FUN_106440b0(void);
void FUN_10644150(void);
void FUN_106441c0(void);
void FUN_10644260(void);
void FUN_10644300(void);
void FUN_10644850(void);
void __fastcall FUN_10645f90(int param_1);
void FUN_10646e10(void);
void FUN_10646f60(void);
void FUN_10647190(void);
void __fastcall FUN_10647300(int *param_1);
void FUN_10647e50(void);
void FUN_106481c0(void);
int * FUN_10648530(int *param_1,int *param_2,int *param_3);
void FUN_106485d0(undefined4 *param_1,undefined4 *param_2);
void FUN_10648f00(undefined4 param_1,undefined4 *param_2);
void FUN_10649310(void);
void __fastcall FUN_10654880(undefined4 *param_1);
void __fastcall FUN_106548f0(undefined4 *param_1);
void __fastcall FUN_10654960(undefined4 *param_1);
void __fastcall FUN_106549d0(undefined4 *param_1);
void __fastcall FUN_10655080(undefined4 *param_1);
void __fastcall FUN_10655180(undefined4 *param_1);
void __fastcall FUN_106556b0(undefined4 *param_1);
void __fastcall FUN_10655b60(undefined4 *param_1);
void __fastcall FUN_10655c80(undefined4 *param_1);
void __fastcall FUN_10655ee0(undefined4 *param_1);
void __fastcall FUN_10656610(int param_1);
void __fastcall FUN_106567c0(undefined4 *param_1);
void __fastcall FUN_10656840(undefined4 *param_1);
void __fastcall FUN_106569d0(int param_1);
void __stdcall FUN_1065a780(undefined4 *param_1,undefined4 *param_2);
void FUN_1065a820(void);
void __fastcall FUN_1065ad80(undefined4 *param_1);
void __fastcall FUN_1065ae80(undefined4 *param_1);
void * FUN_1065b080(uint param_1);
undefined4 __stdcall FUN_106683f0(undefined4 param_1);
undefined4 __stdcall FUN_10669020(undefined4 param_1);
undefined4 __stdcall FUN_10669350(undefined4 param_1);
undefined4 __stdcall FUN_1066a680(undefined4 param_1);
undefined4 __stdcall FUN_1066a910(undefined4 param_1);
undefined4 __stdcall FUN_1066ace0(undefined4 param_1);
undefined4 __stdcall FUN_1066b5d0(undefined4 param_1);
undefined4 __stdcall FUN_1066bc00(undefined4 param_1);
undefined4 __stdcall FUN_1066c5d0(undefined4 param_1);
undefined4 __stdcall FUN_1066c7e0(undefined4 param_1);
undefined4 __stdcall FUN_1066cab0(undefined4 param_1);
undefined4 __stdcall FUN_1066ce90(undefined4 param_1);
undefined1 FUN_10678bd0(void);
void FUN_10678d50(void);
void FUN_10678df0(void);
void FUN_10678e60(void);
void FUN_10678f00(void);
void FUN_10678fe0(void);
void FUN_10679320(void);
void FUN_106793c0(void);
void FUN_10679430(void);
void FUN_106794d0(void);
void FUN_10679570(void);
void FUN_10679690(void);
void FUN_10679730(void);
void FUN_106797a0(void);
void FUN_10679810(void);
void FUN_106798b0(void);
void FUN_106799a0(void);
void FUN_10679a70(void);
void FUN_10679ae0(void);
void FUN_10679b50(void);
void FUN_10679bf0(void);
void __stdcall FUN_1067e790(int *param_1);
void FUN_1067e8a0(void);
void FUN_1067eae0(void);
void __fastcall FUN_1067ec50(int param_1);
void __fastcall FUN_1067f650(undefined4 *param_1);
void FUN_10681930(undefined4 *param_1,undefined4 *param_2);
void FUN_10682c20(undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_10683ef0(undefined4 *param_1);
void __fastcall FUN_106842f0(int *param_1);
void __fastcall FUN_10684470(undefined4 *param_1);
int * __fastcall FUN_10684bb0(int *param_1);
void __fastcall FUN_10685ac0(int *param_1);
undefined1 __stdcall FUN_10685f90(int *param_1);
void FUN_10687a40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_10687bc0(int param_1);
void __fastcall FUN_10688a60(undefined4 *param_1);
void __fastcall FUN_10689690(int param_1);
void __fastcall FUN_10689dc0(int param_1);
undefined4 * __stdcall FUN_1068a1a0(undefined4 *param_1);
undefined4 * __stdcall FUN_1068a3e0(undefined4 *param_1);
void __fastcall FUN_1068adc0(int param_1);
void __stdcall FUN_1068af20(int param_1);
void __fastcall FUN_1068b3b0(int param_1);
void __fastcall FUN_1068bac0(int param_1);
void FUN_1068dc60(int param_1,int param_2,undefined4 param_3);
void FUN_1068dd40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1068f0b0(int *param_1,int param_2,undefined4 param_3);
void FUN_1068f4d0(int *param_1,int param_2,undefined4 param_3);
void FUN_1068f630(int *param_1,int param_2,int param_3,undefined4 param_4);
void FUN_106905e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_10690860(int *param_1,int *param_2);
void FUN_106909d0(int param_1,int param_2);
void FUN_10690a60(int *param_1,int *param_2);
void __fastcall FUN_106921d0(undefined4 *param_1);
void __fastcall FUN_10692380(int param_1);
void __fastcall FUN_10692420(int param_1);
void __fastcall FUN_106924d0(int *param_1);
void __fastcall FUN_10692670(int *param_1);
void __fastcall FUN_106942e0(float *param_1);
void __fastcall FUN_106944f0(int *param_1);
void __fastcall FUN_106945b0(int *param_1);
void * FUN_10694f70(uint param_1);
undefined4 * FUN_106962a0(undefined4 *param_1);
bool FUN_10696830(void);
void __fastcall FUN_10697670(undefined4 *param_1);
void __fastcall FUN_106976e0(undefined4 *param_1);
void __fastcall FUN_10697770(undefined4 *param_1);
undefined4 * FUN_10697db0(undefined4 *param_1,int *param_2,undefined1 param_3);
undefined4 * FUN_10697f30(undefined4 *param_1);
undefined4 * FUN_10698040(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void FUN_1069a360(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
ulonglong * __fastcall FUN_1069a580(ulonglong *param_1);
ulonglong * __fastcall FUN_1069b2d0(ulonglong *param_1);
int __fastcall FUN_1069bb40(undefined4 *param_1);
int __fastcall FUN_1069bc70(undefined4 *param_1);
void __fastcall FUN_1069bda0(undefined4 *param_1);
void __fastcall FUN_1069be10(undefined4 *param_1);
void __fastcall FUN_1069be80(undefined4 *param_1);
void __fastcall FUN_1069bef0(undefined4 *param_1);
void __fastcall FUN_1069bfb0(int param_1);
void __fastcall FUN_1069c030(int *param_1);
void __fastcall FUN_1069c720(int *param_1);
void __fastcall FUN_1069def0(int param_1);
void __fastcall FUN_1069e140(int *param_1);
undefined4 * FUN_1069f6a0(undefined4 *param_1);
undefined4 * FUN_1069fad0(undefined4 *param_1,undefined4 *param_2);
void __fastcall FUN_106a03d0(int param_1);
void __fastcall FUN_106a1490(undefined4 *param_1);
void __fastcall FUN_106a4380(undefined4 *param_1);
int * __fastcall FUN_106a4780(int *param_1);
int * __fastcall FUN_106a4820(int *param_1);
undefined1 FUN_106a99a0(undefined4 *param_1,int *param_2);
bool FUN_106a9ab0(undefined4 param_1,int *param_2);
int * FUN_106a9e70(int *param_1,int *param_2,int *param_3);
void FUN_106aa0a0(undefined4 *param_1,undefined4 *param_2);
undefined4 * FUN_106abbe0(int param_1);
int * FUN_106ac1a0(int *param_1,int *param_2);
void FUN_106ac5a0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
int * FUN_106ac610(int *param_1,int *param_2,int *param_3);
int * FUN_106ac6f0(int *param_1,int *param_2,int *param_3);
void FUN_106ad240(int param_1,int param_2,uint param_3,int *param_4);
int __stdcall FUN_106ae120(int param_1,int param_2,int param_3);
int FUN_106ae3c0(int param_1,int param_2,int param_3);
int FUN_106ae630(int param_1,int param_2,int param_3,undefined4 param_4);
int * FUN_106ae6c0(int *param_1,int *param_2,int *param_3,undefined4 param_4);
void FUN_106aefa0(undefined4 param_1,undefined4 *param_2);
undefined1 FUN_106afd40(undefined4 *param_1,int *param_2);
bool FUN_106afe50(undefined4 param_1,int *param_2);
void FUN_106afef0(int *param_1,int *param_2);
void FUN_106b02c0(int *param_1,int *param_2);
void __fastcall FUN_106b3350(undefined4 *param_1);
void __fastcall FUN_106b33c0(undefined4 *param_1);
void __fastcall FUN_106b3430(undefined4 *param_1);
void __fastcall FUN_106b34a0(undefined4 *param_1);
void __fastcall FUN_106b36d0(int param_1);
void __fastcall FUN_106b3bd0(int *param_1);
void __fastcall FUN_106b3c90(int *param_1);
void __fastcall FUN_106b3df0(int param_1);
void __fastcall FUN_106b5260(int *param_1);
bool FUN_106b66a0(void);
undefined4 * __fastcall FUN_106b8930(int param_1);
bool __stdcall FUN_106b8ed0(int *param_1);
void __fastcall FUN_106ba740(float *param_1);
void __fastcall FUN_106baa40(int *param_1);
void __fastcall FUN_106bab00(int *param_1);
void __fastcall FUN_106bab80(int *param_1);
void FUN_106bb0e0(int param_1,int param_2);
void FUN_106bb2f0(int param_1,int param_2);
void * FUN_106bce00(uint param_1);
void * FUN_106bce70(uint param_1);
undefined4 * __stdcall FUN_106bde60(int param_1,int *param_2,int *param_3,int param_4,int *param_5);
int * __stdcall FUN_106c2360(int *param_1);
void __fastcall FUN_106c92a0(int param_1);
/* WARNING: Removing unreachable block (ram,0x106c98af) */ void __fastcall FUN_106c9660(int param_1);
undefined1 __stdcall FUN_106c9af0(int *param_1,undefined4 param_2);
undefined1 __stdcall FUN_106c9bd0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_106cae90(void);
void __fastcall FUN_106cb950(int param_1);
undefined4 __stdcall FUN_106cbb20(undefined4 param_1);
undefined4 __fastcall FUN_106cc040(int param_1);
void FUN_106ce420(void);
void FUN_106ce480(void);
undefined1 FUN_106ce4d0(void);
void __fastcall FUN_106cec40(int param_1);
void __fastcall FUN_106cf140(int param_1);
undefined1 FUN_106cf990(void);
void __fastcall FUN_106cffb0(undefined4 *param_1);
void __fastcall FUN_106d0100(undefined4 *param_1);
undefined1 FUN_106d07e0(void);
void __fastcall FUN_106d0ca0(int param_1);
void FUN_106d1b00(undefined4 param_1,int param_2);
void __fastcall FUN_106d29d0(undefined4 *param_1);
void __fastcall FUN_106d2a40(undefined4 *param_1);
void __fastcall FUN_106d2b30(int param_1);
// Reference entry 1061fbb0; body size 68 bytes.
#line 1 "ENTRY_1061fbb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1061fbb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1061fc50; body size 68 bytes.
#line 1 "ENTRY_1061fc50"

undefined4 * __thiscall Recovered_Bulk::FUN_1061fc50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1061fcf0; body size 159 bytes.
#line 1 "ENTRY_1061fcf0"

undefined4 * __thiscall Recovered_Bulk::FUN_1061fcf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115bed50);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0x39]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xec);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1061fec0; body size 178 bytes.
#line 1 "ENTRY_1061fec0"

undefined4 * __thiscall Recovered_Bulk::FUN_1061fec0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115bf037);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardDonePage);
    puVar1[4] = (uint)&ghidra_vftable_SCSubmitDiagsWizardDonePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSubmitDiagsWizardDonePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSubmitDiagsWizardDonePage;
    puVar1[0x38] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1061ffa0; body size 168 bytes.
#line 1 "ENTRY_1061ffa0"

undefined4 * __thiscall Recovered_Bulk::FUN_1061ffa0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115bf087);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSubmitDiagsWizardErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSubmitDiagsWizardErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSubmitDiagsWizardErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10620080; body size 175 bytes.
#line 1 "ENTRY_10620080"

undefined4 * __thiscall Recovered_Bulk::FUN_10620080(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115bf0d7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSubmitDiagsWizardIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSubmitDiagsWizardIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSubmitDiagsWizardIntroPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10620160; body size 195 bytes.
#line 1 "ENTRY_10620160"

undefined4 * __thiscall Recovered_Bulk::FUN_10620160(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115bf127);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xec));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardSubmittingPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSubmitDiagsWizardSubmittingPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSubmitDiagsWizardSubmittingPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSubmitDiagsWizardSubmittingPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    *(undefined1 *)(puVar1 + 0x3a) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10620260; body size 199 bytes.
#line 1 "ENTRY_10620260"

undefined4 * __thiscall Recovered_Bulk::FUN_10620260(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115bf190);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xec));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCSubmitDiagsWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSubmitDiagsWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSubmitDiagsWizard;
    puVar1[0x3a] = 0xffffffff;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 106237a0; body size 273 bytes.
#line 1 "ENTRY_106237a0"

void __stdcall FUN_106237a0(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115bf92d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(0);
  uVar3 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar3));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 == '\0') {
    ExceptionList = (void *)(local_10);
    return;
  }
  piVar4 = (int *)((int *)thunk_FUN_1037a2b0(&param_1));
  piVar5 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(1);
  *piVar4 = (int)(0);
  if (piVar5 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  uVar6 = (uint)(local_14);
  if (piVar5 != (int *)0x0) {
    piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x24))(&local_1c,4));
    uVar6 = (uint)(1);
    if (*piVar5 != 0) {
      uVar2 = (undefined1)(1);
      goto LAB_1062386d;
    }
  }
  uVar2 = (undefined1)(0);
LAB_1062386d:
  *(undefined1 *)(local_18 + 0xe0) = uVar2;
  if ((uVar6 & 1) != 0) {
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
  }
  local_8 = (undefined4)(6);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10623c70; body size 78 bytes.
#line 1 "ENTRY_10623c70"

int * __thiscall Recovered_Bulk::FUN_10623c70(int *param_2)
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


// Reference entry 10623ce0; body size 78 bytes.
#line 1 "ENTRY_10623ce0"

int * __thiscall Recovered_Bulk::FUN_10623ce0(int *param_2)
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


// Reference entry 10625fe0; body size 213 bytes.
#line 1 "ENTRY_10625fe0"

undefined4 * __thiscall Recovered_Bulk::FUN_10625fe0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c0580);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x100));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10708df0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10709b20(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 106260f0; body size 213 bytes.
#line 1 "ENTRY_106260f0"

undefined4 * __thiscall Recovered_Bulk::FUN_106260f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c05e0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xfc));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_106e1380(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_106e3e70(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10626200; body size 213 bytes.
#line 1 "ENTRY_10626200"

undefined4 * __thiscall Recovered_Bulk::FUN_10626200(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c0640);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_107626d0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10762e20(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10626310; body size 213 bytes.
#line 1 "ENTRY_10626310"

undefined4 * __thiscall Recovered_Bulk::FUN_10626310(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c06a0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x108));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10758340(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_107593f0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10626420; body size 213 bytes.
#line 1 "ENTRY_10626420"

undefined4 * __thiscall Recovered_Bulk::FUN_10626420(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c0700);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1077bcd0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_1077bf70(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10626530; body size 213 bytes.
#line 1 "ENTRY_10626530"

undefined4 * __thiscall Recovered_Bulk::FUN_10626530(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c0760);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10811c10(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10812740(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10626640; body size 213 bytes.
#line 1 "ENTRY_10626640"

undefined4 * __thiscall Recovered_Bulk::FUN_10626640(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c07c0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10818140(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10819ab0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10626750; body size 213 bytes.
#line 1 "ENTRY_10626750"

undefined4 * __thiscall Recovered_Bulk::FUN_10626750(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c0820);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10837820(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10838010(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10626860; body size 213 bytes.
#line 1 "ENTRY_10626860"

undefined4 * __thiscall Recovered_Bulk::FUN_10626860(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c0880);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1087e430(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_1087e440(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] =
       (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] =
       (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10626970; body size 213 bytes.
#line 1 "ENTRY_10626970"

undefined4 * __thiscall Recovered_Bulk::FUN_10626970(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c08e0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10891c20(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10892c70(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10626a80; body size 213 bytes.
#line 1 "ENTRY_10626a80"

undefined4 * __thiscall Recovered_Bulk::FUN_10626a80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c0940);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x128));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1089e580(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_108a0960(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10626b90; body size 213 bytes.
#line 1 "ENTRY_10626b90"

undefined4 * __thiscall Recovered_Bulk::FUN_10626b90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c09a0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x100));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_109543e0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109548c0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] =
       (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] =
       (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10626ca0; body size 213 bytes.
#line 1 "ENTRY_10626ca0"

undefined4 * __thiscall Recovered_Bulk::FUN_10626ca0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c0a00);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x120));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_109a6790(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109a85f0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] =
       (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] =
       (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10626db0; body size 213 bytes.
#line 1 "ENTRY_10626db0"

undefined4 * __thiscall Recovered_Bulk::FUN_10626db0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c0a60);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10a44600(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10a44ae0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10626ec0; body size 213 bytes.
#line 1 "ENTRY_10626ec0"

undefined4 * __thiscall Recovered_Bulk::FUN_10626ec0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c0ac0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10a48d70(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10a49250(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 106271a0; body size 213 bytes.
#line 1 "ENTRY_106271a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106271a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c0ba0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x100));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10708df0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10709b20(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductAccountLoginSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductAccountLoginSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductAccountLoginSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductAccountLoginSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 106273b0; body size 213 bytes.
#line 1 "ENTRY_106273b0"

undefined4 * __thiscall Recovered_Bulk::FUN_106273b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c0c60);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xfc));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_106e1380(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_106e3e70(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductAccountRequiredSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductAccountRequiredSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductAccountRequiredSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductAccountRequiredSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 106275c0; body size 213 bytes.
#line 1 "ENTRY_106275c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106275c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c0d20);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_107626d0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10762e20(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductApConnectSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductApConnectSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductApConnectSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductApConnectSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 106277d0; body size 213 bytes.
#line 1 "ENTRY_106277d0"

undefined4 * __thiscall Recovered_Bulk::FUN_106277d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c0de0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x108));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10758340(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_107593f0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductAppVersionCheckSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductAppVersionCheckSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductAppVersionCheckSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductAppVersionCheckSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 106279e0; body size 213 bytes.
#line 1 "ENTRY_106279e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106279e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c0ea0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1077bcd0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_1077bf70(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductBleConnectSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductBleConnectSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductBleConnectSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductBleConnectSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10627d60; body size 213 bytes.
#line 1 "ENTRY_10627d60"

undefined4 * __thiscall Recovered_Bulk::FUN_10627d60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c0fc0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10811c10(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10812740(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductConnectRecoverySubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectRecoverySubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectRecoverySubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectRecoverySubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10627f70; body size 130 bytes.
#line 1 "ENTRY_10627f70"

undefined4 * __thiscall Recovered_Bulk::FUN_10627f70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c105d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb64f0(param_2);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductConnectedToLANPage);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectedToLANPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectedToLANPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectedToLANPage;
  thunk_FUN_10eb41b0(uVar1);
  thunk_FUN_1063a5d0(param_1 + 0x38);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10628270; body size 130 bytes.
#line 1 "ENTRY_10628270"

undefined4 * __thiscall Recovered_Bulk::FUN_10628270(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c115d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb64f0(param_2);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductConnectingProductRetryPage);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectingProductRetryPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectingProductRetryPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectingProductRetryPage;
  thunk_FUN_10eb41b0(uVar1);
  thunk_FUN_1063a5d0(param_1 + 0x38);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10628420; body size 353 bytes.
#line 1 "ENTRY_10628420"

undefined4 * __thiscall Recovered_Bulk::FUN_10628420(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c1228);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10818140(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10819ab0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  local_8 = (undefined4)(3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductDevicePermissionsSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductDevicePermissionsSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductDevicePermissionsSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductDevicePermissionsSubwiz;
  iVar2 = (int)(thunk_FUN_10eb41b0());
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10cf3630(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0());
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10cf5250(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0());
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10ead100(iVar2);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 106289a0; body size 130 bytes.
#line 1 "ENTRY_106289a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106289a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c138d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb64f0(param_2);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingRetryPage);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingRetryPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingRetryPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingRetryPage;
  thunk_FUN_10eb41b0(uVar1);
  thunk_FUN_1063a5d0(param_1 + 0x38);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10628b50; body size 213 bytes.
#line 1 "ENTRY_10628b50"

undefined4 * __thiscall Recovered_Bulk::FUN_10628b50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c1450);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10837820(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10838010(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareUpdateSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareUpdateSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareUpdateSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareUpdateSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10628d60; body size 213 bytes.
#line 1 "ENTRY_10628d60"

undefined4 * __thiscall Recovered_Bulk::FUN_10628d60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c1510);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1087e430(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_1087e440(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductIncompleteWirelessConnectSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductIncompleteWirelessConnectSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductIncompleteWirelessConnectSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductIncompleteWirelessConnectSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 106290c0; body size 213 bytes.
#line 1 "ENTRY_106290c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106290c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c1630);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10891c20(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10892c70(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductJoinPreparationSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductJoinPreparationSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductJoinPreparationSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductJoinPreparationSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10629420; body size 213 bytes.
#line 1 "ENTRY_10629420"

undefined4 * __thiscall Recovered_Bulk::FUN_10629420(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c1750);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x128));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1089e580(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_108a0960(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductJoinProductSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductJoinProductSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductJoinProductSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductJoinProductSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 106298d0; body size 213 bytes.
#line 1 "ENTRY_106298d0"

undefined4 * __thiscall Recovered_Bulk::FUN_106298d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c18d0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x100));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_109543e0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109548c0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductPortablePreparationSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductPortablePreparationSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductPortablePreparationSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductPortablePreparationSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10629d80; body size 213 bytes.
#line 1 "ENTRY_10629d80"

undefined4 * __thiscall Recovered_Bulk::FUN_10629d80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c1a50);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x120));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_109a6790(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109a85f0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductSecureAuthenticationSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductSecureAuthenticationSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductSecureAuthenticationSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductSecureAuthenticationSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1062a100; body size 213 bytes.
#line 1 "ENTRY_1062a100"

undefined4 * __thiscall Recovered_Bulk::FUN_1062a100(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c1b70);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10a44600(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10a44ae0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductWacConnectSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductWacConnectSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductWacConnectSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductWacConnectSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1062a310; body size 213 bytes.
#line 1 "ENTRY_1062a310"

undefined4 * __thiscall Recovered_Bulk::FUN_1062a310(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c1c30);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10a48d70(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10a49250(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductWiredConnectSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductWiredConnectSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductWiredConnectSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductWiredConnectSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1062a520; body size 242 bytes.
#line 1 "ENTRY_1062a520"

undefined4 * __thiscall Recovered_Bulk::FUN_1062a520(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c1ce9);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_106da030(param_2);
  local_8 = (undefined4)(0);
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x23);
  }
  thunk_FUN_10cf2f30(puVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  puVar1 = (undefined4 *)((undefined4 *)0x0);
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(param_1 + 0x3a);
  }
  thunk_FUN_10eaafe0(puVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x23);
  }
  thunk_FUN_10cf41d0(puVar1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductWizard);
  param_1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductWizard;
  param_1[0x43] = 0x1000000;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1062c0e0; body size 119 bytes.
#line 1 "ENTRY_1062c0e0"

void __fastcall FUN_1062c0e0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115c2660);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x18));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x10));
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1062c350; body size 76 bytes.
#line 1 "ENTRY_1062c350"

void __fastcall FUN_1062c350(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c2690);
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


// Reference entry 1062c750; body size 84 bytes.
#line 1 "ENTRY_1062c750"

void __fastcall FUN_1062c750(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115c2720);
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


// Reference entry 1062cae0; body size 119 bytes.
#line 1 "ENTRY_1062cae0"

void __fastcall FUN_1062cae0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115c2810);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x18));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x10));
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1062cca0; body size 83 bytes.
#line 1 "ENTRY_1062cca0"

void __fastcall FUN_1062cca0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115c2870);
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
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1062cd10; body size 83 bytes.
#line 1 "ENTRY_1062cd10"

void __fastcall FUN_1062cd10(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115c28a0);
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
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1062ce10; body size 83 bytes.
#line 1 "ENTRY_1062ce10"

void __fastcall FUN_1062ce10(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115c2900);
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
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1062d010; body size 135 bytes.
#line 1 "ENTRY_1062d010"

void __fastcall FUN_1062d010(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115c2930);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0x3a]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1062d3a0; body size 135 bytes.
#line 1 "ENTRY_1062d3a0"

void __fastcall FUN_1062d3a0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115c29c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0x3a]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1062d8f0; body size 135 bytes.
#line 1 "ENTRY_1062d8f0"

void __fastcall FUN_1062d8f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115c2a20);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0x39]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1062da60; body size 197 bytes.
#line 1 "ENTRY_1062da60"

void __fastcall FUN_1062da60(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c2a50);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_105bb550(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  piVar1 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xf8));
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_106da680();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1062e520; body size 68 bytes.
#line 1 "ENTRY_1062e520"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e520(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062eaf0; body size 68 bytes.
#line 1 "ENTRY_1062eaf0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062eaf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062eb50; body size 68 bytes.
#line 1 "ENTRY_1062eb50"

undefined4 * __thiscall Recovered_Bulk::FUN_1062eb50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062ebb0; body size 68 bytes.
#line 1 "ENTRY_1062ebb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062ebb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062ec10; body size 68 bytes.
#line 1 "ENTRY_1062ec10"

undefined4 * __thiscall Recovered_Bulk::FUN_1062ec10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062ec70; body size 68 bytes.
#line 1 "ENTRY_1062ec70"

undefined4 * __thiscall Recovered_Bulk::FUN_1062ec70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062ecd0; body size 68 bytes.
#line 1 "ENTRY_1062ecd0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062ecd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062ed30; body size 68 bytes.
#line 1 "ENTRY_1062ed30"

undefined4 * __thiscall Recovered_Bulk::FUN_1062ed30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062ed90; body size 68 bytes.
#line 1 "ENTRY_1062ed90"

undefined4 * __thiscall Recovered_Bulk::FUN_1062ed90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062edf0; body size 68 bytes.
#line 1 "ENTRY_1062edf0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062edf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] =
       (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] =
       (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062ee50; body size 68 bytes.
#line 1 "ENTRY_1062ee50"

undefined4 * __thiscall Recovered_Bulk::FUN_1062ee50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062eeb0; body size 68 bytes.
#line 1 "ENTRY_1062eeb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062eeb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062ef10; body size 68 bytes.
#line 1 "ENTRY_1062ef10"

undefined4 * __thiscall Recovered_Bulk::FUN_1062ef10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] =
       (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] =
       (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062ef70; body size 68 bytes.
#line 1 "ENTRY_1062ef70"

undefined4 * __thiscall Recovered_Bulk::FUN_1062ef70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] =
       (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] =
       (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062efd0; body size 68 bytes.
#line 1 "ENTRY_1062efd0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062efd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f030; body size 68 bytes.
#line 1 "ENTRY_1062f030"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f030(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f130; body size 68 bytes.
#line 1 "ENTRY_1062f130"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f130(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f1d0; body size 68 bytes.
#line 1 "ENTRY_1062f1d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f1d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f270; body size 68 bytes.
#line 1 "ENTRY_1062f270"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f270(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f310; body size 68 bytes.
#line 1 "ENTRY_1062f310"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f310(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f3b0; body size 68 bytes.
#line 1 "ENTRY_1062f3b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f3b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f450; body size 159 bytes.
#line 1 "ENTRY_1062f450"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f450(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115c2ab0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0x3a]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xec);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1062f560; body size 68 bytes.
#line 1 "ENTRY_1062f560"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f560(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f700; body size 68 bytes.
#line 1 "ENTRY_1062f700"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f700(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f8a0; body size 68 bytes.
#line 1 "ENTRY_1062f8a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f8a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f940; body size 68 bytes.
#line 1 "ENTRY_1062f940"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f940(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f9e0; body size 159 bytes.
#line 1 "ENTRY_1062f9e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f9e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115c2b40);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0x3a]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf0);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1062fbf0; body size 68 bytes.
#line 1 "ENTRY_1062fbf0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062fbf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062fc90; body size 68 bytes.
#line 1 "ENTRY_1062fc90"

undefined4 * __thiscall Recovered_Bulk::FUN_1062fc90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] =
       (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] =
       (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062fd30; body size 68 bytes.
#line 1 "ENTRY_1062fd30"

undefined4 * __thiscall Recovered_Bulk::FUN_1062fd30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062fdd0; body size 68 bytes.
#line 1 "ENTRY_1062fdd0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062fdd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062fe70; body size 68 bytes.
#line 1 "ENTRY_1062fe70"

undefined4 * __thiscall Recovered_Bulk::FUN_1062fe70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062ff10; body size 68 bytes.
#line 1 "ENTRY_1062ff10"

undefined4 * __thiscall Recovered_Bulk::FUN_1062ff10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062ffb0; body size 68 bytes.
#line 1 "ENTRY_1062ffb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062ffb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10630050; body size 68 bytes.
#line 1 "ENTRY_10630050"

undefined4 * __thiscall Recovered_Bulk::FUN_10630050(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106300f0; body size 68 bytes.
#line 1 "ENTRY_106300f0"

undefined4 * __thiscall Recovered_Bulk::FUN_106300f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] =
       (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] =
       (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10630190; body size 68 bytes.
#line 1 "ENTRY_10630190"

undefined4 * __thiscall Recovered_Bulk::FUN_10630190(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10630230; body size 68 bytes.
#line 1 "ENTRY_10630230"

undefined4 * __thiscall Recovered_Bulk::FUN_10630230(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106302d0; body size 68 bytes.
#line 1 "ENTRY_106302d0"

undefined4 * __thiscall Recovered_Bulk::FUN_106302d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] =
       (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] =
       (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10630370; body size 159 bytes.
#line 1 "ENTRY_10630370"

undefined4 * __thiscall Recovered_Bulk::FUN_10630370(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115c2ba0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0x39]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf0);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10630480; body size 68 bytes.
#line 1 "ENTRY_10630480"

undefined4 * __thiscall Recovered_Bulk::FUN_10630480(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10630520; body size 68 bytes.
#line 1 "ENTRY_10630520"

undefined4 * __thiscall Recovered_Bulk::FUN_10630520(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106305c0; body size 221 bytes.
#line 1 "ENTRY_106305c0"

int __thiscall Recovered_Bulk::FUN_106305c0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c2bd0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_105bb550(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  piVar1 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xf8));
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x120);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10631380; body size 219 bytes.
#line 1 "ENTRY_10631380"

undefined4 * __stdcall FUN_10631380(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  bool bVar5;
  int *local_1c;
  void *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3150);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  local_18 = (void *)(operator_new(0x108));
  local_8 = (undefined4)(0);
  bVar5 = (bool)(local_18 == (void *)0x0);
  if (bVar5) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10cf34e0(&local_1c));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    local_14 = (undefined4)(1);
    uVar1 = (uint)(thunk_FUN_10eacd40(uVar1));
    uVar1 = (uint)(uVar1 & 0xff);
    uVar3 = (undefined4)(thunk_FUN_10eac8c0(uVar1));
    piVar4 = (int *)((int *)thunk_FUN_10eeb8b0(*puVar2,uVar3,uVar1));
  }
  local_8 = (undefined4)(2);
  *param_1 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  if (!bVar5) {
    local_8 = (undefined4)(3);
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10631770; body size 276 bytes.
#line 1 "ENTRY_10631770"

undefined4 * __thiscall Recovered_Bulk::FUN_10631770(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3282);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x100));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10708df0(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10709b20(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductAccountLoginSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductAccountLoginSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductAccountLoginSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductAccountLoginSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 106318d0; body size 276 bytes.
#line 1 "ENTRY_106318d0"

undefined4 * __thiscall Recovered_Bulk::FUN_106318d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3302);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0xfc));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_106e1380(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_106e3e70(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductAccountRequiredSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductAccountRequiredSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductAccountRequiredSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductAccountRequiredSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10631a30; body size 276 bytes.
#line 1 "ENTRY_10631a30"

undefined4 * __thiscall Recovered_Bulk::FUN_10631a30(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3382);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x11c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_107626d0(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10762e20(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductApConnectSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductApConnectSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductApConnectSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductApConnectSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10631b90; body size 276 bytes.
#line 1 "ENTRY_10631b90"

undefined4 * __thiscall Recovered_Bulk::FUN_10631b90(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3402);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x108));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10758340(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_107593f0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductAppVersionCheckSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductAppVersionCheckSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductAppVersionCheckSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductAppVersionCheckSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10631cf0; body size 276 bytes.
#line 1 "ENTRY_10631cf0"

undefined4 * __thiscall Recovered_Bulk::FUN_10631cf0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3482);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x10c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_1077bcd0(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_1077bf70(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductBleConnectSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductBleConnectSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductBleConnectSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductBleConnectSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10631e50; body size 195 bytes.
#line 1 "ENTRY_10631e50"

undefined4 * __thiscall Recovered_Bulk::FUN_10631e50(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c34d7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xec));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductCheckRunningLegacySWPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductCheckRunningLegacySWPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductCheckRunningLegacySWPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductCheckRunningLegacySWPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10631f50; body size 276 bytes.
#line 1 "ENTRY_10631f50"

undefined4 * __thiscall Recovered_Bulk::FUN_10631f50(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3552);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x11c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10811c10(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10812740(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductConnectRecoverySubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectRecoverySubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectRecoverySubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectRecoverySubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 106320b0; body size 193 bytes.
#line 1 "ENTRY_106320b0"

undefined4 * __thiscall Recovered_Bulk::FUN_106320b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c35af);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductConnectedToLANPage);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectedToLANPage;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectedToLANPage;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectedToLANPage;
    thunk_FUN_10eb41b0(uVar1);
    thunk_FUN_1063a5d0(puVar2 + 0x38);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 106321b0; body size 168 bytes.
#line 1 "ENTRY_106321b0"

undefined4 * __thiscall Recovered_Bulk::FUN_106321b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c35f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductConnectingProductPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectingProductPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectingProductPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectingProductPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10632290; body size 193 bytes.
#line 1 "ENTRY_10632290"

undefined4 * __thiscall Recovered_Bulk::FUN_10632290(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c364f);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductConnectingProductRetryPage);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectingProductRetryPage;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectingProductRetryPage;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductConnectingProductRetryPage;
    thunk_FUN_10eb41b0(uVar1);
    thunk_FUN_1063a5d0(puVar2 + 0x38);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10632390; body size 422 bytes.
#line 1 "ENTRY_10632390"

undefined4 * __thiscall Recovered_Bulk::FUN_10632390(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c36ca);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x11c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10818140(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10819ab0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    local_8 = (undefined4)(4);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductDevicePermissionsSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductDevicePermissionsSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductDevicePermissionsSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductDevicePermissionsSubwiz;
    iVar4 = (int)(thunk_FUN_10eb41b0());
    if (iVar4 == 0) {
      iVar4 = (int)(0);
    }
    else {
      iVar4 = (int)(iVar4 + 0xe8);
    }
    thunk_FUN_10ebc1d0(iVar4);
    thunk_FUN_10cf3630(iVar4);
    iVar4 = (int)(thunk_FUN_10eb41b0());
    if (iVar4 == 0) {
      iVar4 = (int)(0);
    }
    else {
      iVar4 = (int)(iVar4 + 0x100);
    }
    thunk_FUN_10ebc1d0(iVar4);
    thunk_FUN_10cf5250(iVar4);
    iVar4 = (int)(thunk_FUN_10eb41b0());
    if (iVar4 == 0) {
      iVar4 = (int)(0);
    }
    else {
      iVar4 = (int)(iVar4 + 0xf4);
    }
    thunk_FUN_10ebc1d0(iVar4);
    thunk_FUN_10ead100(iVar4);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 106325a0; body size 168 bytes.
#line 1 "ENTRY_106325a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106325a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3717);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradeIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradeIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradeIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradeIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10632680; body size 195 bytes.
#line 1 "ENTRY_10632680"

undefined4 * __thiscall Recovered_Bulk::FUN_10632680(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3767);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingPage;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    *(undefined1 *)(puVar1 + 0x3b) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10632780; body size 193 bytes.
#line 1 "ENTRY_10632780"

undefined4 * __thiscall Recovered_Bulk::FUN_10632780(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c37bf);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingRetryPage);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingRetryPage;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingRetryPage;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingRetryPage;
    thunk_FUN_10eb41b0(uVar1);
    thunk_FUN_1063a5d0(puVar2 + 0x38);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10632880; body size 276 bytes.
#line 1 "ENTRY_10632880"

undefined4 * __thiscall Recovered_Bulk::FUN_10632880(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3832);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x10c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10837820(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10838010(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareUpdateSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareUpdateSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareUpdateSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareUpdateSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 106329e0; body size 276 bytes.
#line 1 "ENTRY_106329e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106329e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c38b2);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x10c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_1087e430(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_1087e440(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductIncompleteWirelessConnectSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductIncompleteWirelessConnectSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductIncompleteWirelessConnectSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductIncompleteWirelessConnectSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10632b40; body size 168 bytes.
#line 1 "ENTRY_10632b40"

undefined4 * __thiscall Recovered_Bulk::FUN_10632b40(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3907);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10632c20; body size 276 bytes.
#line 1 "ENTRY_10632c20"

undefined4 * __thiscall Recovered_Bulk::FUN_10632c20(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3982);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x10c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10891c20(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10892c70(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductJoinPreparationSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductJoinPreparationSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductJoinPreparationSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductJoinPreparationSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10632d80; body size 168 bytes.
#line 1 "ENTRY_10632d80"

undefined4 * __thiscall Recovered_Bulk::FUN_10632d80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c39d7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductJoinProductFailurePage);
    puVar1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductJoinProductFailurePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductJoinProductFailurePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductJoinProductFailurePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10632e60; body size 276 bytes.
#line 1 "ENTRY_10632e60"

undefined4 * __thiscall Recovered_Bulk::FUN_10632e60(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3a52);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x128));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_1089e580(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_108a0960(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductJoinProductSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductJoinProductSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductJoinProductSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductJoinProductSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10632fc0; body size 168 bytes.
#line 1 "ENTRY_10632fc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10632fc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3aa7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductOptionsPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductOptionsPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductOptionsPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductOptionsPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 106330a0; body size 168 bytes.
#line 1 "ENTRY_106330a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106330a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3af7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductOutroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductOutroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductOutroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductOutroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10633180; body size 276 bytes.
#line 1 "ENTRY_10633180"

undefined4 * __thiscall Recovered_Bulk::FUN_10633180(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3b72);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x100));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_109543e0(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_109548c0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductPortablePreparationSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductPortablePreparationSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductPortablePreparationSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductPortablePreparationSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 106332e0; body size 168 bytes.
#line 1 "ENTRY_106332e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106332e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3bc7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductSearchingPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductSearchingPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductSearchingPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductSearchingPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 106333c0; body size 168 bytes.
#line 1 "ENTRY_106333c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106333c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3c17);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductSearchingRetryPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductSearchingRetryPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductSearchingRetryPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductSearchingRetryPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 106334a0; body size 276 bytes.
#line 1 "ENTRY_106334a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106334a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3c92);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x120));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_109a6790(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_109a85f0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductSecureAuthenticationSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductSecureAuthenticationSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductSecureAuthenticationSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductSecureAuthenticationSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10633600; body size 195 bytes.
#line 1 "ENTRY_10633600"

undefined4 * __thiscall Recovered_Bulk::FUN_10633600(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3ce7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductSelectionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductSelectionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductSelectionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductSelectionPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    *(undefined1 *)(puVar1 + 0x3b) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10633700; body size 276 bytes.
#line 1 "ENTRY_10633700"

undefined4 * __thiscall Recovered_Bulk::FUN_10633700(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3d62);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x10c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10a44600(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10a44ae0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductWacConnectSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductWacConnectSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductWacConnectSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductWacConnectSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10633860; body size 276 bytes.
#line 1 "ENTRY_10633860"

undefined4 * __thiscall Recovered_Bulk::FUN_10633860(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3de2);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x10c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10a48d70(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10a49250(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductWiredConnectSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductWiredConnectSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSwgenDowngradeProductWiredConnectSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductWiredConnectSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10633ba0; body size 301 bytes.
#line 1 "ENTRY_10633ba0"

undefined4 * __thiscall Recovered_Bulk::FUN_10633ba0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3f14);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x120));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar3);
    puVar1 = (undefined4 *)(puVar2 + 0x23);
    local_8 = (undefined4)(2);
    thunk_FUN_10cf2f30(puVar1);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    thunk_FUN_10eaafe0(puVar2 + 0x3a);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    thunk_FUN_10cf41d0(puVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductWizard);
    puVar2[4] = (uint)&ghidra_vftable_SCSwgenDowngradeProductWizard;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductWizard);
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSwgenDowngradeProductWizard;
    puVar2[0x43] = 0x1000000;
    puVar2[0x44] = 0;
    puVar2[0x45] = 0;
    puVar2[0x46] = 0;
    puVar2[0x47] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10633d90; body size 224 bytes.
#line 1 "ENTRY_10633d90"

void __thiscall Recovered_Bulk::FUN_10633d90(undefined4 *param_2,int *param_3,int *param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c3f50);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  if (param_3 != (int *)(param_4)) {
    piVar5 = (int *)(*(int **)(param_1 + 4));
    piVar6 = (int *)(param_3);
    ppvVar2 = (void **)(&local_10);
    piVar7 = (int *)(param_3);
    if ((int *)(param_4) != piVar5) {
      do {
        ExceptionList = (void *)(ppvVar2);
        iVar4 = (int)(*param_4);
        if (iVar4 != *piVar6) {
          piVar7 = (int *)((int *)piVar6[1]);
          if (piVar7 != (int *)0x0) {
            *piVar6 = (int)(0);
            piVar6[1] = 0;
            (**(code **)(*piVar7 + 8))(uVar3);
            iVar4 = (int)(*param_4);
          }
          *piVar6 = (int)(iVar4);
          piVar7 = (int *)((int *)param_4[1]);
          piVar6[1] = (int)piVar7;
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 4))();
          }
        }
        param_4 = (int *)(param_4 + 2);
        piVar6 = (int *)(piVar6 + 2);
        ppvVar2 = (void **)(ExceptionList);
      } while ((int *)(param_4) != piVar5);
      piVar5 = (int *)(*(int **)(param_1 + 4));
      piVar7 = (int *)(piVar6);
    }
    for (; ExceptionList = (void *)(ppvVar2, (int *)(piVar6) != piVar5); piVar6 = piVar6 + 2) {
      piVar1 = (int *)((int *)piVar6[1]);
      local_8 = (undefined4)(0);
      if (piVar1 != (int *)0x0) {
        *piVar6 = (int)(0);
        piVar6[1] = 0;
        (**(code **)(*piVar1 + 8))();
      }
      ppvVar2 = (void **)(ExceptionList);
    }
    *(int **)(param_1 + 4) = piVar7;
  }
  *param_2 = (undefined4)(param_3);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1063a710; body size 414 bytes.
#line 1 "ENTRY_1063a710"

undefined4 __thiscall Recovered_Bulk::FUN_1063a710(undefined4 param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 local_74 [32];
  undefined1 local_54 [32];
  undefined **local_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c4c7d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a2298);
  thunk_FUN_105f5920(&local_14);
  local_14 = (undefined4)(DAT_121a2294);
  local_8 = (undefined4)(0);
  thunk_FUN_105f5920(&local_14);
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_30 = (undefined4)(0);
  iStack_2c = (int)(0);
  uStack_28 = (undefined4)(0);
  iStack_24 = (int)(0);
  local_20 = (undefined4 *)((undefined4 *)0x0);
  local_1c = (undefined4 *)((undefined4 *)0x0);
  local_18 = (int)(0);
  puVar7 = (undefined1 *)(local_54);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  (**(code **)(*param_1 + 8))(puVar7,uVar2);
  iVar3 = (int)(thunk_FUN_105ad8f0());
  piVar4 = (int *)((int *)thunk_FUN_106190a0(iVar3 == 5,puVar7));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0x10))(local_74));
  uVar5 = (undefined4)((**(code **)(*piVar4 + 4))());
  thunk_FUN_105f5a00(uVar5);
  puVar1 = (undefined4 *)(local_1c);
  puVar6 = (undefined4 *)(local_20);
  if (local_20 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar6) != puVar1; puVar6 = puVar6 + 8) {
      (**(code **)*puVar6)(0);
    }
    uVar2 = (uint)(local_18 - (int)local_20 & 0xffffffe0);
    puVar6 = (undefined4 *)(local_20);
    if (0xfff < uVar2) {
      puVar6 = (undefined4 *)((undefined4 *)local_20[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_1063a85c;
    }
    thunk_FUN_1148a50e(puVar6,uVar2);
    local_20 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)((undefined4 *)0x0);
    local_18 = (int)(0);
  }
  if (iStack_2c != 0) {
    uVar2 = (uint)(iStack_24 - iStack_2c & 0xfffffffc);
    iVar3 = (int)(iStack_2c);
    if (0xfff < uVar2) {
      iVar3 = (int)(*(int *)(iStack_2c + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iStack_2c - iVar3) - 4U) {
LAB_1063a85c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar2);
    iStack_2c = (int)(0);
    uStack_28 = (undefined4)(0);
    iStack_24 = (int)(0);
  }
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_2);
}


// Reference entry 1063ae50; body size 719 bytes.
#line 1 "ENTRY_1063ae50"

undefined4 __stdcall FUN_1063ae50(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 local_b4 [32];
  undefined1 local_94 [32];
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined1 local_68 [32];
  undefined **local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  local_6c = (undefined4)(0xffffffff);
  puStack_70 = (undefined1 *)(LAB_115c4d9d);
  local_74 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)local_68);
  ExceptionList = (void *)(&local_74);
  local_8 = (undefined4)(DAT_121a22d8);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a22e8);
  local_6c = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a22ec);
  *(unsigned char *)((char *)&local_6c + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_44 = (undefined4)(0);
  iStack_40 = (int)(0);
  uStack_3c = (undefined4)(0);
  iStack_38 = (int)(0);
  local_34 = (undefined4 *)((undefined4 *)0x0);
  local_30 = (undefined4 *)((undefined4 *)0x0);
  local_2c = (int)(0);
  *(unsigned char *)((char *)&local_6c + 0) = 3;
  iVar5 = (int)(thunk_FUN_10eb41c0(uVar4));
  piVar6 = (int *)((int *)(*(code *)local_48[2])(*(undefined1 *)(iVar5 + 0x10c),local_68));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0x10))(local_94));
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(4)));
  thunk_FUN_10ebc1e0();
  ppuVar2 = (undefined **)(local_28);
  uVar7 = (undefined4)((**(code **)(*piVar6 + 4))());
  uVar3 = (undefined1)(thunk_FUN_10765a30(uVar7));
  piVar6 = (int *)((int *)(*(code *)ppuVar2[2])(uVar3));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0x10))(local_b4));
  uVar7 = (undefined4)((**(code **)(*piVar6 + 4))());
  thunk_FUN_105f5a00(uVar7);
  puVar1 = (undefined4 *)(local_10);
  puVar8 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar4 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_14);
    if (0xfff < uVar4) {
      puVar8 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar8))) goto LAB_1063b0c4;
    }
    thunk_FUN_1148a50e(puVar8,uVar4);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar4 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar5 = (int)(iStack_20);
    if (0xfff < uVar4) {
      iVar5 = (int)(*(int *)(iStack_20 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_20 - iVar5) - 4U) goto LAB_1063b0c4;
    }
    thunk_FUN_1148a50e(iVar5,uVar4);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  puVar1 = (undefined4 *)(local_30);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  puVar8 = (undefined4 *)(local_34);
  if (local_34 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar4 = (uint)(local_2c - (int)local_34 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_34);
    if (0xfff < uVar4) {
      puVar8 = (undefined4 *)((undefined4 *)local_34[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_34 + (-4 - (int)puVar8))) goto LAB_1063b0c4;
    }
    thunk_FUN_1148a50e(puVar8,uVar4);
    local_34 = (undefined4 *)((undefined4 *)0x0);
    local_30 = (undefined4 *)((undefined4 *)0x0);
    local_2c = (int)(0);
  }
  if (iStack_40 != 0) {
    uVar4 = (uint)(iStack_38 - iStack_40 & 0xfffffffc);
    iVar5 = (int)(iStack_40);
    if (0xfff < uVar4) {
      iVar5 = (int)(*(int *)(iStack_40 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_40 - iVar5) - 4U) {
LAB_1063b0c4:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar4);
    iStack_40 = (int)(0);
    uStack_3c = (undefined4)(0);
    iStack_38 = (int)(0);
  }
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_74);
  return (undefined4)(param_1);
}


// Reference entry 1063b1e0; body size 414 bytes.
#line 1 "ENTRY_1063b1e0"

undefined4 __stdcall FUN_1063b1e0(undefined4 param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 local_74 [32];
  undefined1 local_54 [32];
  undefined **local_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c4ded);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a22ac);
  thunk_FUN_105f5920(&local_14);
  local_8 = (undefined4)(0);
  local_14 = (undefined4)(0);
  thunk_FUN_105f5920(&local_14);
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_30 = (undefined4)(0);
  iStack_2c = (int)(0);
  uStack_28 = (undefined4)(0);
  iStack_24 = (int)(0);
  local_20 = (undefined4 *)((undefined4 *)0x0);
  local_1c = (undefined4 *)((undefined4 *)0x0);
  local_18 = (int)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_10ebc1e0(uVar4);
  ppuVar1 = (undefined **)(local_34);
  cVar3 = (char)(thunk_FUN_10eac8a0(local_54));
  piVar5 = (int *)((int *)(*(code *)ppuVar1[2])(cVar3 == '\0'));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_74));
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))());
  thunk_FUN_105f5a00(uVar6);
  puVar2 = (undefined4 *)(local_1c);
  puVar8 = (undefined4 *)(local_20);
  if (local_20 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar2; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar4 = (uint)(local_18 - (int)local_20 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_20);
    if (0xfff < uVar4) {
      puVar8 = (undefined4 *)((undefined4 *)local_20[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar8))) goto LAB_1063b32c;
    }
    thunk_FUN_1148a50e(puVar8,uVar4);
    local_20 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)((undefined4 *)0x0);
    local_18 = (int)(0);
  }
  if (iStack_2c != 0) {
    uVar4 = (uint)(iStack_24 - iStack_2c & 0xfffffffc);
    iVar7 = (int)(iStack_2c);
    if (0xfff < uVar4) {
      iVar7 = (int)(*(int *)(iStack_2c + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_2c - iVar7) - 4U) {
LAB_1063b32c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar7,uVar4);
    iStack_2c = (int)(0);
    uStack_28 = (undefined4)(0);
    iStack_24 = (int)(0);
  }
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 1063b3f0; body size 405 bytes.
#line 1 "ENTRY_1063b3f0"

undefined4 __stdcall FUN_1063b3f0(undefined4 param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 local_74 [32];
  undefined1 local_54 [32];
  undefined **local_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c4e3d);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a22d8);
  thunk_FUN_105f5920(&local_14);
  local_14 = (undefined4)(DAT_121a22e8);
  local_8 = (undefined4)(0);
  thunk_FUN_105f5920(&local_14);
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_30 = (undefined4)(0);
  iStack_2c = (int)(0);
  uStack_28 = (undefined4)(0);
  iStack_24 = (int)(0);
  local_20 = (undefined4 *)((undefined4 *)0x0);
  local_1c = (undefined4 *)((undefined4 *)0x0);
  local_18 = (int)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_10ebc1e0(uVar4);
  ppuVar1 = (undefined **)(local_34);
  uVar3 = (undefined1)(thunk_FUN_1077d290(local_54));
  piVar5 = (int *)((int *)(*(code *)ppuVar1[2])(uVar3));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_74));
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))());
  thunk_FUN_105f5a00(uVar6);
  puVar2 = (undefined4 *)(local_1c);
  puVar8 = (undefined4 *)(local_20);
  if (local_20 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar2; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar4 = (uint)(local_18 - (int)local_20 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_20);
    if (0xfff < uVar4) {
      puVar8 = (undefined4 *)((undefined4 *)local_20[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar8))) goto LAB_1063b533;
    }
    thunk_FUN_1148a50e(puVar8,uVar4);
    local_20 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)((undefined4 *)0x0);
    local_18 = (int)(0);
  }
  if (iStack_2c != 0) {
    uVar4 = (uint)(iStack_24 - iStack_2c & 0xfffffffc);
    iVar7 = (int)(iStack_2c);
    if (0xfff < uVar4) {
      iVar7 = (int)(*(int *)(iStack_2c + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_2c - iVar7) - 4U) {
LAB_1063b533:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar7,uVar4);
    iStack_2c = (int)(0);
    uStack_28 = (undefined4)(0);
    iStack_24 = (int)(0);
  }
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 1063b5f0; body size 1350 bytes.
#line 1 "ENTRY_1063b5f0"

undefined4 __stdcall FUN_1063b5f0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 unaff_EBX;
  uint3 uVar9;
  int iVar8;
  undefined4 *puVar10;
  undefined1 local_17c [32];
  undefined1 local_15c [32];
  undefined1 local_13c [32];
  undefined1 local_11c [32];
  undefined1 local_fc [32];
  undefined1 local_dc [32];
  undefined1 local_bc [32];
  undefined1 local_9c [32];
  void *local_7c;
  undefined1 *puStack_78;
  undefined4 local_74;
  int *local_70;
  int *local_6c;
  undefined **local_68;
  undefined4 local_64;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 *local_54;
  undefined4 *local_50;
  int local_4c;
  undefined **local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  uint local_8;
  
  local_74 = (undefined4)(0xffffffff);
  puStack_78 = (undefined1 *)(LAB_115c4ee4);
  local_7c = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_7c);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)&local_70);
  iVar4 = (int)(thunk_FUN_10eac8c0());
  local_8 = (uint)(DAT_121a22d4);
  thunk_FUN_105f5920(&local_8);
  local_8 = (uint)(DAT_121a22cc);
  local_74 = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (uint)(DAT_121a22c8);
  *(unsigned char *)((char *)&local_74 + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_8 = (uint)(DAT_121a22c4);
  *(unsigned char *)((char *)&local_74 + 0) = 2;
  thunk_FUN_105f5920(&local_8);
  local_8 = (uint)(DAT_121a22d0);
  *(unsigned char *)((char *)&local_74 + 0) = 3;
  thunk_FUN_105f5920(&local_8);
  *(unsigned char *)((char *)&local_74 + 0) = 4;
  uVar9 = (uint3)((uint3)((uint)unaff_EBX >> 8));
  if ((iVar4 == 4) || (iVar4 == 5)) {
    iVar8 = (int)(((uint)(uVar9) << 8 | (uint)(1)));
  }
  else {
    iVar8 = (int)((uint)uVar9 << 8);
  }
  local_8 = (uint)(DAT_121a22c4);
  thunk_FUN_105f5920(&local_8);
  local_8 = (uint)(DAT_121a22cc);
  *(unsigned char *)((char *)&local_74 + 0) = 5;
  thunk_FUN_105f5920(&local_8);
  local_8 = (uint)(DAT_121a22d0);
  *(unsigned char *)((char *)&local_74 + 0) = 6;
  thunk_FUN_105f5920(&local_8);
  if ((iVar4 == 4) || (local_8 = local_8 & 0xffffff00, iVar4 == 5)) {
    local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  }
  local_68 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_64 = (undefined4)(0);
  iStack_60 = (int)(0);
  uStack_5c = (undefined4)(0);
  iStack_58 = (int)(0);
  local_54 = (undefined4 *)((undefined4 *)0x0);
  local_50 = (undefined4 *)((undefined4 *)0x0);
  local_4c = (int)(0);
  *(unsigned char *)((char *)&local_74 + 0) = 8;
  piVar5 = (int *)((int *)thunk_FUN_106190a0(iVar8,local_fc));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(iVar4 == 1,local_11c));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(iVar4 == 2,local_13c));
  uVar6 = (undefined4)(((uint)((int3)((uint)iVar8 >> 8)) << 8 | (uint)(iVar4 == 3)));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(uVar6,local_15c));
  local_6c = (int *)((int *)(**(code **)(*piVar5 + 0xc))(iVar4 == 6,local_17c));
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_44 = (undefined4)(0);
  iStack_40 = (int)(0);
  uStack_3c = (undefined4)(0);
  iStack_38 = (int)(0);
  local_34 = (undefined4 *)((undefined4 *)0x0);
  local_30 = (undefined4 *)((undefined4 *)0x0);
  local_2c = (int)(0);
  *(unsigned char *)((char *)&local_74 + 0) = 9;
  piVar5 = (int *)((int *)thunk_FUN_106190a0(local_8,local_9c));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(uVar6,local_bc));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_dc));
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  *(unsigned char *)((char *)&local_74 + 0) = 10;
  thunk_FUN_10eb41c0();
  thunk_FUN_10cf34e0(&local_70);
  ppuVar2 = (undefined **)(local_28);
  *(unsigned char *)((char *)&local_74 + 0) = 0xb;
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))());
  cVar3 = (char)(thunk_FUN_10c9c640(uVar6));
  piVar5 = (int *)((int *)(*(code *)ppuVar2[2])(cVar3 == '\0'));
  iVar4 = (int)(*piVar5);
  uVar6 = (undefined4)((**(code **)(*local_6c + 4))());
  piVar5 = (int *)((int *)(**(code **)(iVar4 + 0x10))(uVar6));
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))());
  thunk_FUN_105f5a00(uVar6);
  local_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_74 + 1)) << 8 | (uint)(0xc)));
  if (local_70 != (int *)0x0) {
    (**(code **)(*local_70 + 8))();
  }
  puVar1 = (undefined4 *)(local_10);
  puVar10 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar10) != puVar1; puVar10 = puVar10 + 8) {
      (**(code **)*puVar10)(0);
    }
    uVar7 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar10 = (undefined4 *)(local_14);
    if (0xfff < uVar7) {
      puVar10 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar10))) goto LAB_1063baa4;
    }
    thunk_FUN_1148a50e(puVar10,uVar7);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar7 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar4 = (int)(iStack_20);
    if (0xfff < uVar7) {
      iVar4 = (int)(*(int *)(iStack_20 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_20 - iVar4) - 4U) goto LAB_1063baa4;
    }
    thunk_FUN_1148a50e(iVar4,uVar7);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  puVar1 = (undefined4 *)(local_30);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  puVar10 = (undefined4 *)(local_34);
  if (local_34 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar10) != puVar1; puVar10 = puVar10 + 8) {
      (**(code **)*puVar10)(0);
    }
    uVar7 = (uint)(local_2c - (int)local_34 & 0xffffffe0);
    puVar10 = (undefined4 *)(local_34);
    if (0xfff < uVar7) {
      puVar10 = (undefined4 *)((undefined4 *)local_34[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_34 + (-4 - (int)puVar10))) goto LAB_1063baa4;
    }
    thunk_FUN_1148a50e(puVar10,uVar7);
    local_34 = (undefined4 *)((undefined4 *)0x0);
    local_30 = (undefined4 *)((undefined4 *)0x0);
    local_2c = (int)(0);
  }
  if (iStack_40 != 0) {
    uVar7 = (uint)(iStack_38 - iStack_40 & 0xfffffffc);
    iVar4 = (int)(iStack_40);
    if (0xfff < uVar7) {
      iVar4 = (int)(*(int *)(iStack_40 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_40 - iVar4) - 4U) goto LAB_1063baa4;
    }
    thunk_FUN_1148a50e(iVar4,uVar7);
    iStack_40 = (int)(0);
    uStack_3c = (undefined4)(0);
    iStack_38 = (int)(0);
  }
  puVar1 = (undefined4 *)(local_50);
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  puVar10 = (undefined4 *)(local_54);
  if (local_54 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar10) != puVar1; puVar10 = puVar10 + 8) {
      (**(code **)*puVar10)(0);
    }
    uVar7 = (uint)(local_4c - (int)local_54 & 0xffffffe0);
    puVar10 = (undefined4 *)(local_54);
    if (0xfff < uVar7) {
      puVar10 = (undefined4 *)((undefined4 *)local_54[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_54 + (-4 - (int)puVar10))) goto LAB_1063baa4;
    }
    thunk_FUN_1148a50e(puVar10,uVar7);
    local_54 = (undefined4 *)((undefined4 *)0x0);
    local_50 = (undefined4 *)((undefined4 *)0x0);
    local_4c = (int)(0);
  }
  if (iStack_60 != 0) {
    uVar7 = (uint)(iStack_58 - iStack_60 & 0xfffffffc);
    iVar4 = (int)(iStack_60);
    if (0xfff < uVar7) {
      iVar4 = (int)(*(int *)(iStack_60 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_60 - iVar4) - 4U) {
LAB_1063baa4:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar7);
    iStack_60 = (int)(0);
    uStack_5c = (undefined4)(0);
    iStack_58 = (int)(0);
  }
  local_68 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_7c);
  return (undefined4)(param_1);
}


// Reference entry 1063bff0; body size 414 bytes.
#line 1 "ENTRY_1063bff0"

undefined4 __stdcall FUN_1063bff0(undefined4 param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 local_74 [32];
  undefined1 local_54 [32];
  undefined **local_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c4fed);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  thunk_FUN_105f5920(&local_14);
  local_14 = (undefined4)(DAT_121a22dc);
  local_8 = (undefined4)(0);
  thunk_FUN_105f5920(&local_14);
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_30 = (undefined4)(0);
  iStack_2c = (int)(0);
  uStack_28 = (undefined4)(0);
  iStack_24 = (int)(0);
  local_20 = (undefined4 *)((undefined4 *)0x0);
  local_1c = (undefined4 *)((undefined4 *)0x0);
  local_18 = (int)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_10ebc1e0(uVar4);
  ppuVar1 = (undefined **)(local_34);
  cVar3 = (char)(thunk_FUN_1083d1a0(local_54));
  piVar5 = (int *)((int *)(*(code *)ppuVar1[2])(cVar3 == '\0'));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_74));
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))());
  thunk_FUN_105f5a00(uVar6);
  puVar2 = (undefined4 *)(local_1c);
  puVar8 = (undefined4 *)(local_20);
  if (local_20 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar2; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar4 = (uint)(local_18 - (int)local_20 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_20);
    if (0xfff < uVar4) {
      puVar8 = (undefined4 *)((undefined4 *)local_20[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar8))) goto LAB_1063c13c;
    }
    thunk_FUN_1148a50e(puVar8,uVar4);
    local_20 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)((undefined4 *)0x0);
    local_18 = (int)(0);
  }
  if (iStack_2c != 0) {
    uVar4 = (uint)(iStack_24 - iStack_2c & 0xfffffffc);
    iVar7 = (int)(iStack_2c);
    if (0xfff < uVar4) {
      iVar7 = (int)(*(int *)(iStack_2c + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_2c - iVar7) - 4U) {
LAB_1063c13c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar7,uVar4);
    iStack_2c = (int)(0);
    uStack_28 = (undefined4)(0);
    iStack_24 = (int)(0);
  }
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 1063c200; body size 398 bytes.
#line 1 "ENTRY_1063c200"

undefined4 __stdcall FUN_1063c200(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_74 [32];
  undefined1 local_54 [32];
  undefined **local_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c503d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a22d8);
  thunk_FUN_105f5920(&local_14);
  local_14 = (undefined4)(DAT_121a22e8);
  local_8 = (undefined4)(0);
  thunk_FUN_105f5920(&local_14);
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_30 = (undefined4)(0);
  iStack_2c = (int)(0);
  uStack_28 = (undefined4)(0);
  iStack_24 = (int)(0);
  local_20 = (undefined4 *)((undefined4 *)0x0);
  local_1c = (undefined4 *)((undefined4 *)0x0);
  local_18 = (int)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_10ebc1e0(uVar2);
  piVar3 = (int *)((int *)(*(code *)local_34[2])(1,local_54));
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0x10))(local_74));
  uVar4 = (undefined4)((**(code **)(*piVar3 + 4))());
  thunk_FUN_105f5a00(uVar4);
  puVar1 = (undefined4 *)(local_1c);
  puVar6 = (undefined4 *)(local_20);
  if (local_20 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar6) != puVar1; puVar6 = puVar6 + 8) {
      (**(code **)*puVar6)(0);
    }
    uVar2 = (uint)(local_18 - (int)local_20 & 0xffffffe0);
    puVar6 = (undefined4 *)(local_20);
    if (0xfff < uVar2) {
      puVar6 = (undefined4 *)((undefined4 *)local_20[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_1063c33c;
    }
    thunk_FUN_1148a50e(puVar6,uVar2);
    local_20 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)((undefined4 *)0x0);
    local_18 = (int)(0);
  }
  if (iStack_2c != 0) {
    uVar2 = (uint)(iStack_24 - iStack_2c & 0xfffffffc);
    iVar5 = (int)(iStack_2c);
    if (0xfff < uVar2) {
      iVar5 = (int)(*(int *)(iStack_2c + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iStack_2c - iVar5) - 4U) {
LAB_1063c33c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar2);
    iStack_2c = (int)(0);
    uStack_28 = (undefined4)(0);
    iStack_24 = (int)(0);
  }
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 1063c400; body size 1433 bytes.
#line 1 "ENTRY_1063c400"

undefined4 __stdcall FUN_1063c400(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 unaff_EBX;
  uint3 uVar10;
  int iVar9;
  undefined4 *puVar11;
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  void *local_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  int *local_74;
  int *local_70;
  undefined **local_6c;
  undefined4 local_68;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  int local_50;
  undefined **local_4c;
  undefined4 local_48;
  int iStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  int local_30;
  undefined **local_2c;
  undefined4 local_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  uint local_8;
  
  local_78 = (undefined4)(0xffffffff);
  puStack_7c = (undefined1 *)(LAB_115c50ef);
  local_80 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_80);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)&local_74);
  iVar5 = (int)(thunk_FUN_10eac8c0());
  local_8 = (uint)(DAT_121a22d4);
  thunk_FUN_105f5920(&local_8);
  local_8 = (uint)(DAT_121a22cc);
  local_78 = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (uint)(DAT_121a22c8);
  *(unsigned char *)((char *)&local_78 + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_8 = (uint)(DAT_121a22c4);
  *(unsigned char *)((char *)&local_78 + 0) = 2;
  thunk_FUN_105f5920(&local_8);
  local_8 = (uint)(DAT_121a22d0);
  *(unsigned char *)((char *)&local_78 + 0) = 3;
  thunk_FUN_105f5920(&local_8);
  *(unsigned char *)((char *)&local_78 + 0) = 4;
  uVar10 = (uint3)((uint3)((uint)unaff_EBX >> 8));
  if ((iVar5 == 4) || (iVar5 == 5)) {
    iVar9 = (int)(((uint)(uVar10) << 8 | (uint)(1)));
  }
  else {
    iVar9 = (int)((uint)uVar10 << 8);
  }
  local_8 = (uint)(DAT_121a22c4);
  thunk_FUN_105f5920(&local_8);
  local_8 = (uint)(DAT_121a22cc);
  *(unsigned char *)((char *)&local_78 + 0) = 5;
  thunk_FUN_105f5920(&local_8);
  local_8 = (uint)(DAT_121a22d0);
  *(unsigned char *)((char *)&local_78 + 0) = 6;
  thunk_FUN_105f5920(&local_8);
  *(unsigned char *)((char *)&local_78 + 0) = 7;
  if ((iVar5 == 4) || (local_8 = local_8 & 0xffffff00, iVar5 == 5)) {
    local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  }
  local_c = (int *)(DAT_121a22ac);
  thunk_FUN_105f5920(&local_c);
  local_6c = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_68 = (undefined4)(0);
  iStack_64 = (int)(0);
  uStack_60 = (undefined4)(0);
  iStack_5c = (int)(0);
  local_58 = (undefined4 *)((undefined4 *)0x0);
  local_54 = (undefined4 *)((undefined4 *)0x0);
  local_50 = (int)(0);
  *(unsigned char *)((char *)&local_78 + 0) = 9;
  piVar6 = (int *)((int *)thunk_FUN_106190a0(iVar9,local_120));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(iVar5 == 1,local_140));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(iVar5 == 2,local_160));
  uVar7 = (undefined4)(((uint)((int3)((uint)iVar9 >> 8)) << 8 | (uint)(iVar5 == 3)));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(uVar7,local_180));
  local_70 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(iVar5 == 6,local_1a0));
  local_4c = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_48 = (undefined4)(0);
  iStack_44 = (int)(0);
  uStack_40 = (undefined4)(0);
  iStack_3c = (int)(0);
  local_38 = (undefined4 *)((undefined4 *)0x0);
  local_34 = (undefined4 *)((undefined4 *)0x0);
  local_30 = (int)(0);
  *(unsigned char *)((char *)&local_78 + 0) = 10;
  piVar6 = (int *)((int *)thunk_FUN_106190a0(local_8,local_c0));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(uVar7,local_e0));
  local_c = (int *)((int *)(**(code **)(*piVar6 + 0x10))(local_100));
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_28 = (undefined4)(0);
  iStack_24 = (int)(0);
  uStack_20 = (undefined4)(0);
  iStack_1c = (int)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (int)(0);
  *(unsigned char *)((char *)&local_78 + 0) = 0xb;
  thunk_FUN_10eb41c0();
  ppuVar2 = (undefined **)(local_2c);
  uVar3 = (undefined1)(thunk_FUN_10cf5140(local_a0));
  piVar6 = (int *)((int *)(*(code *)ppuVar2[2])(uVar3));
  thunk_FUN_10eb41c0();
  thunk_FUN_10cf34e0(&local_74);
  iVar5 = (int)(*piVar6);
  *(unsigned char *)((char *)&local_78 + 0) = 0xc;
  uVar7 = (undefined4)((**(code **)(*local_c + 4))());
  cVar4 = (char)(thunk_FUN_10c9c640(uVar7));
  piVar6 = (int *)((int *)(**(code **)(iVar5 + 0xc))(cVar4 == '\0'));
  iVar5 = (int)(*piVar6);
  uVar7 = (undefined4)((**(code **)(*local_70 + 4))());
  piVar6 = (int *)((int *)(**(code **)(iVar5 + 0x10))(uVar7));
  uVar7 = (undefined4)((**(code **)(*piVar6 + 4))());
  thunk_FUN_105f5a00(uVar7);
  local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(0xd)));
  if (local_74 != (int *)0x0) {
    (**(code **)(*local_74 + 8))();
  }
  puVar1 = (undefined4 *)(local_14);
  puVar11 = (undefined4 *)(local_18);
  if (local_18 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar11) != puVar1; puVar11 = puVar11 + 8) {
      (**(code **)*puVar11)(0);
    }
    uVar8 = (uint)(local_10 - (int)local_18 & 0xffffffe0);
    puVar11 = (undefined4 *)(local_18);
    if (0xfff < uVar8) {
      puVar11 = (undefined4 *)((undefined4 *)local_18[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)local_18 + (-4 - (int)puVar11))) goto LAB_1063c8fc;
    }
    thunk_FUN_1148a50e(puVar11,uVar8);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (int)(0);
  }
  if (iStack_24 != 0) {
    uVar8 = (uint)(iStack_1c - iStack_24 & 0xfffffffc);
    iVar5 = (int)(iStack_24);
    if (0xfff < uVar8) {
      iVar5 = (int)(*(int *)(iStack_24 + -4));
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (iStack_24 - iVar5) - 4U) goto LAB_1063c8fc;
    }
    thunk_FUN_1148a50e(iVar5,uVar8);
    iStack_24 = (int)(0);
    uStack_20 = (undefined4)(0);
    iStack_1c = (int)(0);
  }
  puVar1 = (undefined4 *)(local_34);
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  puVar11 = (undefined4 *)(local_38);
  if (local_38 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar11) != puVar1; puVar11 = puVar11 + 8) {
      (**(code **)*puVar11)(0);
    }
    uVar8 = (uint)(local_30 - (int)local_38 & 0xffffffe0);
    puVar11 = (undefined4 *)(local_38);
    if (0xfff < uVar8) {
      puVar11 = (undefined4 *)((undefined4 *)local_38[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)local_38 + (-4 - (int)puVar11))) goto LAB_1063c8fc;
    }
    thunk_FUN_1148a50e(puVar11,uVar8);
    local_38 = (undefined4 *)((undefined4 *)0x0);
    local_34 = (undefined4 *)((undefined4 *)0x0);
    local_30 = (int)(0);
  }
  if (iStack_44 != 0) {
    uVar8 = (uint)(iStack_3c - iStack_44 & 0xfffffffc);
    iVar5 = (int)(iStack_44);
    if (0xfff < uVar8) {
      iVar5 = (int)(*(int *)(iStack_44 + -4));
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (iStack_44 - iVar5) - 4U) goto LAB_1063c8fc;
    }
    thunk_FUN_1148a50e(iVar5,uVar8);
    iStack_44 = (int)(0);
    uStack_40 = (undefined4)(0);
    iStack_3c = (int)(0);
  }
  puVar1 = (undefined4 *)(local_54);
  local_4c = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  puVar11 = (undefined4 *)(local_58);
  if (local_58 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar11) != puVar1; puVar11 = puVar11 + 8) {
      (**(code **)*puVar11)(0);
    }
    uVar8 = (uint)(local_50 - (int)local_58 & 0xffffffe0);
    puVar11 = (undefined4 *)(local_58);
    if (0xfff < uVar8) {
      puVar11 = (undefined4 *)((undefined4 *)local_58[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)local_58 + (-4 - (int)puVar11))) goto LAB_1063c8fc;
    }
    thunk_FUN_1148a50e(puVar11,uVar8);
    local_58 = (undefined4 *)((undefined4 *)0x0);
    local_54 = (undefined4 *)((undefined4 *)0x0);
    local_50 = (int)(0);
  }
  if (iStack_64 != 0) {
    uVar8 = (uint)(iStack_5c - iStack_64 & 0xfffffffc);
    iVar5 = (int)(iStack_64);
    if (0xfff < uVar8) {
      iVar5 = (int)(*(int *)(iStack_64 + -4));
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (iStack_64 - iVar5) - 4U) {
LAB_1063c8fc:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar8);
    iStack_64 = (int)(0);
    uStack_60 = (undefined4)(0);
    iStack_5c = (int)(0);
  }
  local_6c = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_80);
  return (undefined4)(param_1);
}


// Reference entry 1063d0c0; body size 719 bytes.
#line 1 "ENTRY_1063d0c0"

undefined4 __stdcall FUN_1063d0c0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 local_b4 [32];
  undefined1 local_94 [32];
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined1 local_68 [32];
  undefined **local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  local_6c = (undefined4)(0xffffffff);
  puStack_70 = (undefined1 *)(LAB_115c521d);
  local_74 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)local_68);
  ExceptionList = (void *)(&local_74);
  local_8 = (undefined4)(DAT_121a22d8);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a22ec);
  local_6c = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a22f8);
  *(unsigned char *)((char *)&local_6c + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_44 = (undefined4)(0);
  iStack_40 = (int)(0);
  uStack_3c = (undefined4)(0);
  iStack_38 = (int)(0);
  local_34 = (undefined4 *)((undefined4 *)0x0);
  local_30 = (undefined4 *)((undefined4 *)0x0);
  local_2c = (int)(0);
  *(unsigned char *)((char *)&local_6c + 0) = 3;
  iVar4 = (int)(thunk_FUN_10eb41c0(uVar3));
  piVar5 = (int *)((int *)(*(code *)local_48[2])(*(undefined1 *)(iVar4 + 0x10d),local_68));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_94));
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(4)));
  iVar4 = (int)(thunk_FUN_10ebc1e0());
  ppuVar2 = (undefined **)(local_28);
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))());
  piVar5 = (int *)((int *)(*(code *)ppuVar2[2])(*(undefined1 *)(iVar4 + 0x118),uVar6));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_b4));
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))());
  thunk_FUN_105f5a00(uVar6);
  puVar1 = (undefined4 *)(local_10);
  puVar7 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar7) != puVar1; puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar3 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_14);
    if (0xfff < uVar3) {
      puVar7 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar7))) goto LAB_1063d334;
    }
    thunk_FUN_1148a50e(puVar7,uVar3);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar3 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar4 = (int)(iStack_20);
    if (0xfff < uVar3) {
      iVar4 = (int)(*(int *)(iStack_20 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iStack_20 - iVar4) - 4U) goto LAB_1063d334;
    }
    thunk_FUN_1148a50e(iVar4,uVar3);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  puVar1 = (undefined4 *)(local_30);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  puVar7 = (undefined4 *)(local_34);
  if (local_34 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar7) != puVar1; puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar3 = (uint)(local_2c - (int)local_34 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_34);
    if (0xfff < uVar3) {
      puVar7 = (undefined4 *)((undefined4 *)local_34[-1]);
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uint)((int)local_34 + (-4 - (int)puVar7))) goto LAB_1063d334;
    }
    thunk_FUN_1148a50e(puVar7,uVar3);
    local_34 = (undefined4 *)((undefined4 *)0x0);
    local_30 = (undefined4 *)((undefined4 *)0x0);
    local_2c = (int)(0);
  }
  if (iStack_40 != 0) {
    uVar3 = (uint)(iStack_38 - iStack_40 & 0xfffffffc);
    iVar4 = (int)(iStack_40);
    if (0xfff < uVar3) {
      iVar4 = (int)(*(int *)(iStack_40 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iStack_40 - iVar4) - 4U) {
LAB_1063d334:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar3);
    iStack_40 = (int)(0);
    uStack_3c = (undefined4)(0);
    iStack_38 = (int)(0);
  }
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_74);
  return (undefined4)(param_1);
}


// Reference entry 1063d450; body size 719 bytes.
#line 1 "ENTRY_1063d450"

undefined4 __stdcall FUN_1063d450(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 local_b4 [32];
  undefined1 local_94 [32];
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined1 local_68 [32];
  undefined **local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  local_6c = (undefined4)(0xffffffff);
  puStack_70 = (undefined1 *)(LAB_115c527d);
  local_74 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)local_68);
  ExceptionList = (void *)(&local_74);
  local_8 = (undefined4)(DAT_121a22d8);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a22dc);
  local_6c = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a22b0);
  *(unsigned char *)((char *)&local_6c + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_44 = (undefined4)(0);
  iStack_40 = (int)(0);
  uStack_3c = (undefined4)(0);
  iStack_38 = (int)(0);
  local_34 = (undefined4 *)((undefined4 *)0x0);
  local_30 = (undefined4 *)((undefined4 *)0x0);
  local_2c = (int)(0);
  *(unsigned char *)((char *)&local_6c + 0) = 3;
  iVar5 = (int)(thunk_FUN_10eb41c0(uVar4));
  piVar6 = (int *)((int *)(*(code *)local_48[2])(*(undefined1 *)(iVar5 + 0x10c),local_68));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0x10))(local_94));
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(4)));
  thunk_FUN_10ebc1e0();
  ppuVar2 = (undefined **)(local_28);
  uVar7 = (undefined4)((**(code **)(*piVar6 + 4))());
  uVar3 = (undefined1)(thunk_FUN_10a47030(uVar7));
  piVar6 = (int *)((int *)(*(code *)ppuVar2[2])(uVar3));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0x10))(local_b4));
  uVar7 = (undefined4)((**(code **)(*piVar6 + 4))());
  thunk_FUN_105f5a00(uVar7);
  puVar1 = (undefined4 *)(local_10);
  puVar8 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar4 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_14);
    if (0xfff < uVar4) {
      puVar8 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar8))) goto LAB_1063d6c4;
    }
    thunk_FUN_1148a50e(puVar8,uVar4);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar4 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar5 = (int)(iStack_20);
    if (0xfff < uVar4) {
      iVar5 = (int)(*(int *)(iStack_20 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_20 - iVar5) - 4U) goto LAB_1063d6c4;
    }
    thunk_FUN_1148a50e(iVar5,uVar4);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  puVar1 = (undefined4 *)(local_30);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  puVar8 = (undefined4 *)(local_34);
  if (local_34 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar4 = (uint)(local_2c - (int)local_34 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_34);
    if (0xfff < uVar4) {
      puVar8 = (undefined4 *)((undefined4 *)local_34[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_34 + (-4 - (int)puVar8))) goto LAB_1063d6c4;
    }
    thunk_FUN_1148a50e(puVar8,uVar4);
    local_34 = (undefined4 *)((undefined4 *)0x0);
    local_30 = (undefined4 *)((undefined4 *)0x0);
    local_2c = (int)(0);
  }
  if (iStack_40 != 0) {
    uVar4 = (uint)(iStack_38 - iStack_40 & 0xfffffffc);
    iVar5 = (int)(iStack_40);
    if (0xfff < uVar4) {
      iVar5 = (int)(*(int *)(iStack_40 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_40 - iVar5) - 4U) {
LAB_1063d6c4:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar4);
    iStack_40 = (int)(0);
    uStack_3c = (undefined4)(0);
    iStack_38 = (int)(0);
  }
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_74);
  return (undefined4)(param_1);
}


// Reference entry 1063d7e0; body size 719 bytes.
#line 1 "ENTRY_1063d7e0"

undefined4 __stdcall FUN_1063d7e0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 local_b4 [32];
  undefined1 local_94 [32];
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined1 local_68 [32];
  undefined **local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  local_6c = (undefined4)(0xffffffff);
  puStack_70 = (undefined1 *)(LAB_115c52dd);
  local_74 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)local_68);
  ExceptionList = (void *)(&local_74);
  local_8 = (undefined4)(DAT_121a22d8);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a22dc);
  local_6c = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a22b0);
  *(unsigned char *)((char *)&local_6c + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_44 = (undefined4)(0);
  iStack_40 = (int)(0);
  uStack_3c = (undefined4)(0);
  iStack_38 = (int)(0);
  local_34 = (undefined4 *)((undefined4 *)0x0);
  local_30 = (undefined4 *)((undefined4 *)0x0);
  local_2c = (int)(0);
  *(unsigned char *)((char *)&local_6c + 0) = 3;
  iVar5 = (int)(thunk_FUN_10eb41c0(uVar4));
  piVar6 = (int *)((int *)(*(code *)local_48[2])(*(undefined1 *)(iVar5 + 0x10c),local_68));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0x10))(local_94));
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(4)));
  thunk_FUN_10ebc1e0();
  ppuVar2 = (undefined **)(local_28);
  uVar7 = (undefined4)((**(code **)(*piVar6 + 4))());
  uVar3 = (undefined1)(thunk_FUN_10a4b100(uVar7));
  piVar6 = (int *)((int *)(*(code *)ppuVar2[2])(uVar3));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0x10))(local_b4));
  uVar7 = (undefined4)((**(code **)(*piVar6 + 4))());
  thunk_FUN_105f5a00(uVar7);
  puVar1 = (undefined4 *)(local_10);
  puVar8 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar4 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_14);
    if (0xfff < uVar4) {
      puVar8 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar8))) goto LAB_1063da54;
    }
    thunk_FUN_1148a50e(puVar8,uVar4);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar4 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar5 = (int)(iStack_20);
    if (0xfff < uVar4) {
      iVar5 = (int)(*(int *)(iStack_20 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_20 - iVar5) - 4U) goto LAB_1063da54;
    }
    thunk_FUN_1148a50e(iVar5,uVar4);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  puVar1 = (undefined4 *)(local_30);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  puVar8 = (undefined4 *)(local_34);
  if (local_34 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar4 = (uint)(local_2c - (int)local_34 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_34);
    if (0xfff < uVar4) {
      puVar8 = (undefined4 *)((undefined4 *)local_34[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_34 + (-4 - (int)puVar8))) goto LAB_1063da54;
    }
    thunk_FUN_1148a50e(puVar8,uVar4);
    local_34 = (undefined4 *)((undefined4 *)0x0);
    local_30 = (undefined4 *)((undefined4 *)0x0);
    local_2c = (int)(0);
  }
  if (iStack_40 != 0) {
    uVar4 = (uint)(iStack_38 - iStack_40 & 0xfffffffc);
    iVar5 = (int)(iStack_40);
    if (0xfff < uVar4) {
      iVar5 = (int)(*(int *)(iStack_40 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_40 - iVar5) - 4U) {
LAB_1063da54:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar4);
    iStack_40 = (int)(0);
    uStack_3c = (undefined4)(0);
    iStack_38 = (int)(0);
  }
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_74);
  return (undefined4)(param_1);
}


// Reference entry 1063db90; body size 163 bytes.
#line 1 "ENTRY_1063db90"

int FUN_1063db90(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int local_24;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c531d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar3 = (int)(0);
  thunk_FUN_1063e3b0(&local_24);
  uVar4 = (uint)(0);
  local_8 = (undefined4)(0);
  if (local_20 - local_24 >> 3 != 0) {
    do {
      uVar5 = (undefined4)(*(undefined4 *)(local_24 + uVar4 * 8));
      piVar6 = (int *)(*(int **)(local_24 + 4 + uVar4 * 8));
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))(uVar5,piVar6,uVar2);
      }
      cVar1 = (char)(thunk_FUN_10630d00(uVar5,piVar6));
      if (cVar1 != '\0') {
        iVar3 = (int)(iVar3 + 1);
      }
      uVar4 = (uint)(uVar4 + 1);
    } while (uVar4 < (uint)(local_20 - local_24 >> 3));
  }
  thunk_FUN_105bb550();
  ExceptionList = (void *)(local_10);
  return (int)(iVar3);
}


// Reference entry 1063e3b0; body size 156 bytes.
#line 1 "ENTRY_1063e3b0"

int * __thiscall Recovered_Bulk::FUN_1063e3b0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c54bd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (int)(0);
  param_2[1] = 0;
  param_2[2] = 0;
  iVar4 = (int)(*(int *)(param_1 + 0x118));
  iVar1 = (int)(*(int *)(param_1 + 0x114));
  if (iVar1 != iVar4) {
    iVar5 = (int)(iVar4 - iVar1 >> 3);
    iVar3 = (int)(thunk_FUN_105bc210(iVar5));
    *param_2 = (int)(iVar3);
    param_2[1] = iVar3;
    param_2[2] = iVar3 + iVar5 * 8;
    local_8 = (undefined4)(0);
    iVar4 = (int)(thunk_FUN_105b71f0(iVar1,iVar4,*param_2,param_2,uVar2));
    param_2[1] = iVar4;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 10643990; body size 120 bytes.
#line 1 "ENTRY_10643990"

void FUN_10643990(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10643a30; body size 81 bytes.
#line 1 "ENTRY_10643a30"

void FUN_10643a30(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10643aa0; body size 120 bytes.
#line 1 "ENTRY_10643aa0"

void FUN_10643aa0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10643b40; body size 416 bytes.
#line 1 "ENTRY_10643b40"

void FUN_10643b40(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_10eb41b0());
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10cf3630(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0());
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10cf5250(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0());
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10ead100(iVar2);
  thunk_FUN_105a26b0();
  iVar2 = (int)(thunk_FUN_10df2df0());
  thunk_FUN_10eb41b0();
  cVar1 = (char)(thunk_FUN_10cf5140());
  if (cVar1 != '\0') {
    iVar2 = (int)(thunk_FUN_10ebc1d0());
    *(undefined4 *)(iVar2 + 0x118) = 0;
    return;
  }
  if ((((iVar2 != DAT_121a22c4) && (iVar2 != DAT_121a22c8)) && (iVar2 != DAT_121a22d4)) &&
     ((iVar2 != DAT_121a22cc && (iVar2 != DAT_121a22d0)))) {
    if (iVar2 == DAT_121a22ec) {
      thunk_FUN_10eb41b0();
      iVar2 = (int)(thunk_FUN_10eac8c0());
      if (iVar2 == 5) {
        thunk_FUN_10eb41b0();
        iVar2 = (int)(thunk_FUN_10eacdc0());
        if (iVar2 != 5) {
          iVar2 = (int)(thunk_FUN_10ebc1d0());
          *(undefined4 *)(iVar2 + 0x118) = 1;
          return;
        }
      }
    }
    thunk_FUN_10eb41b0();
    cVar1 = (char)(thunk_FUN_10eaceb0());
    if (cVar1 != '\0') {
      thunk_FUN_10eb41b0();
      cVar1 = (char)(thunk_FUN_10eacd00());
      if (cVar1 == '\0') {
        iVar2 = (int)(thunk_FUN_10ebc1d0());
        *(undefined4 *)(iVar2 + 0x118) = 4;
        return;
      }
    }
    iVar2 = (int)(thunk_FUN_10ebc1d0());
    *(undefined4 *)(iVar2 + 0x118) = 3;
    return;
  }
  iVar2 = (int)(thunk_FUN_10ebc1d0());
  *(undefined4 *)(iVar2 + 0x118) = 2;
  return;
}


// Reference entry 10643d50; body size 97 bytes.
#line 1 "ENTRY_10643d50"

void FUN_10643d50(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  uVar2 = (undefined4)(3);
  thunk_FUN_10ebc1d0(3);
  thunk_FUN_1083e550(uVar2);
  return;
}


// Reference entry 10643dd0; body size 120 bytes.
#line 1 "ENTRY_10643dd0"

void FUN_10643dd0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 106440b0; body size 120 bytes.
#line 1 "ENTRY_106440b0"

void FUN_106440b0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10644150; body size 81 bytes.
#line 1 "ENTRY_10644150"

void FUN_10644150(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 106441c0; body size 120 bytes.
#line 1 "ENTRY_106441c0"

void FUN_106441c0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10644260; body size 120 bytes.
#line 1 "ENTRY_10644260"

void FUN_10644260(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10644300; body size 120 bytes.
#line 1 "ENTRY_10644300"

void FUN_10644300(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10644850; body size 122 bytes.
#line 1 "ENTRY_10644850"

void FUN_10644850(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c61fd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfda60(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebb8e0("delay",2000);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10645f90; body size 320 bytes.
#line 1 "ENTRY_10645f90"

void __fastcall FUN_10645f90(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c66ad);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10302280(param_1 + 0xa8,"Beginning downgradable product scan...");
    thunk_FUN_10ebbab0(8);
    thunk_FUN_10342f60(0x1f);
    thunk_FUN_10ebb890(5000,500);
    thunk_FUN_10ebb8e0("searchTimeout",30000);
  }
  uVar2 = (undefined4)(thunk_FUN_10dfbe50());
  local_8 = (undefined4)(1);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10eb41b0();
    thunk_FUN_106309a0();
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10dfbbe0());
  local_8 = (undefined4)(2);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10342f40(0x1f);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10646e10; body size 261 bytes.
#line 1 "ENTRY_10646e10"

void FUN_10646e10(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puStack_40;
  int **ppiStack_3c;
  int **ppiStack_38;
  uint uStack_34;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c68f5);
  local_10 = (void *)(ExceptionList);
  uStack_34 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ppiStack_38 = (int **)(&local_1c);
  ppiStack_3c = (int **)((int **)0x10646e43);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101da4a0());
  ppiStack_38 = (int **)(&local_18);
  local_8 = (undefined4)(0);
  ppiStack_3c = (int **)((int **)0x10646e58);
  piVar3 = (int *)((int *)(**(code **)(*(int *)*puVar2 + 0x3c))());
  piVar1 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    ppiStack_3c = (int **)((int **)0x10646e72);
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_18 != (int *)0x0) {
    ppiStack_3c = (int **)((int **)0x10646e8b);
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (local_1c != (int *)0x0) {
    ppiStack_3c = (int **)((int **)0x10646e9b);
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (piVar1 != (int *)0x0) {
    ppiStack_3c = (int **)((int **)0x10646eaa);
    iVar4 = (int)(thunk_FUN_10ebc1d0());
    if (*(char *)(iVar4 + 0xf8) == '\0') {
      ppiStack_3c = (int **)(&local_14);
      puStack_40 = (undefined1 *)((undefined1 *)0x10646ebc);
      thunk_FUN_10436cd0();
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      puStack_40 = (undefined1 *)((undefined1 *)&ppiStack_3c);
      (**(code **)(*piVar1 + 0x1c))();
      thunk_FUN_10435bf0();
      (**(code **)(*piVar1 + 0x1c))(&puStack_40);
      puStack_40 = (undefined1 *)((undefined1 *)0x10646ee1);
      thunk_FUN_10435c80();
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
      if (local_14 != (int *)0x0) {
        ppiStack_3c = (int **)((int **)0x10646ef1);
        (**(code **)(*local_14 + 8))();
      }
    }
  }
  local_8 = (undefined4)(9);
  if (piVar3 != (int *)0x0) {
    ppiStack_3c = (int **)((int **)0x10646f03);
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10646f60; body size 299 bytes.
#line 1 "ENTRY_10646f60"

void FUN_10646f60(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c6945);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_105a26b0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  iVar4 = (int)(thunk_FUN_10df2df0());
  if (iVar4 == DAT_121a22a4) {
    thunk_FUN_105a26c0();
    iVar5 = (int)(thunk_FUN_10df2e20());
    if (iVar5 == iVar4) {
      uVar6 = (undefined4)(1);
      thunk_FUN_10eb41b0(1);
      thunk_FUN_10ead8f0(uVar6);
    }
  }
  thunk_FUN_10eb41b0();
  iVar4 = (int)(thunk_FUN_10eac8b0());
  if (iVar4 == 3) {
    thunk_FUN_10eb41b0();
    uVar6 = (undefined4)(thunk_FUN_10cf34e0(&local_14));
    local_8 = (undefined4)(0);
    thunk_FUN_10351370(uVar6);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_1c != 0) {
      uVar6 = (undefined4)(6);
      thunk_FUN_101b5540(6);
      cVar1 = (char)(thunk_FUN_101b5de0(uVar6));
      cVar2 = (char)(thunk_FUN_10c9c440());
      cVar3 = (char)(thunk_FUN_10c9c740());
      if (((cVar2 != '\0') && (cVar1 == '\0')) && (cVar3 == '\0')) {
        uVar6 = (undefined4)(6);
        thunk_FUN_10eb41b0(6);
        thunk_FUN_10cf5110(uVar6);
      }
    }
    local_8 = (undefined4)(4);
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10647190; body size 295 bytes.
#line 1 "ENTRY_10647190"

void FUN_10647190(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  SCLibrary *pSVar4;
  undefined4 uVar5;
  int *piVar6;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c69d5);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSVar4 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  uVar5 = (undefined4)((**(code **)(**(int **)(*(int *)(pSVar4 + 0x4c) + 0xe8) + 4))(&local_14,0xd,uVar3));
  local_8 = (undefined4)(0);
  thunk_FUN_10225030(uVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (local_1c != (int *)0x0) {
    cVar2 = (char)((**(code **)(*local_1c + 0x34))());
    if (cVar2 != '\0') {
      bVar1 = (bool)(true);
      goto LAB_10647211;
    }
  }
  bVar1 = (bool)(false);
LAB_10647211:
  thunk_FUN_10eb41b0();
  cVar2 = (char)(thunk_FUN_10cf5140());
  if ((cVar2 != '\0') || (!bVar1)) {
    thunk_FUN_10eb41b0();
    piVar6 = (int *)((int *)thunk_FUN_10cf34e0(&local_20));
    local_18 = (int *)((int *)*piVar6);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    *piVar6 = (int)(0);
    if (local_18 == (int *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      piVar6 = (int *)((int *)(**(code **)(*local_18 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    local_14 = (int *)(piVar6);
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
    uVar5 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    thunk_FUN_10ee48c0(0);
    thunk_FUN_10ee2ec0(uVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))();
    }
  }
  local_8 = (undefined4)(9);
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10647300; body size 175 bytes.
#line 1 "ENTRY_10647300"

void __fastcall FUN_10647300(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c6a1d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (int *)(param_1);
  thunk_FUN_10c2f5a0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  thunk_FUN_10c2da80();
  iVar1 = (int)(thunk_FUN_10eac8b0());
  if (iVar1 != 3) {
    thunk_FUN_106cf0f0();
  }
  uVar3 = (undefined4)(0);
  thunk_FUN_10ee48c0(0);
  thunk_FUN_10ee2ec0(uVar3);
  (**(code **)(*param_1 + 0xc))();
  iVar1 = (int)(thunk_FUN_105ad8f0());
  if (iVar1 == 5) {
    puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101da4a0(&local_14));
    local_8 = (undefined4)(0);
    (**(code **)(*(int *)*puVar2 + 0x2c))();
    local_8 = (undefined4)(1);
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10647e50; body size 102 bytes.
#line 1 "ENTRY_10647e50"

void FUN_10647e50(void)

{
  undefined4 uVar1;
  undefined1 local_1c [12];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c6c4d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  uVar1 = (undefined4)(thunk_FUN_1066e450(local_1c));
  local_8 = (undefined4)(0);
  thunk_FUN_10cf3940(uVar1);
  thunk_FUN_1036e480();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10648010; body size 286 bytes.
#line 1 "ENTRY_10648010"

void __thiscall Recovered_Bulk::FUN_10648010(int param_2,int param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (uint)(param_3 - param_2 >> 3);
  iVar3 = (int)(*param_1);
  uVar1 = (uint)(param_1[1] - iVar3 >> 3);
  if (uVar4 <= uVar1) {
    iVar2 = (int)(iVar3 + uVar4 * 8);
    thunk_FUN_10648530(param_2,param_3,iVar3);
    thunk_FUN_10352a90(iVar2,param_1[1],param_1);
    param_1[1] = iVar2;
    return;
  }
  uVar5 = (uint)(param_1[2] - iVar3 >> 3);
  if (uVar5 < uVar4) {
    if (0x1fffffff < uVar4) {
                    
      thunk_FUN_1036efe0();
    }
    if (0x1fffffff - (uVar5 >> 1) < uVar5) {
      uVar5 = (uint)(0x1fffffff);
    }
    else {
      uVar5 = (uint)(uVar5 + (uVar5 >> 1));
      if (uVar5 < uVar4) {
        uVar5 = (uint)(uVar4);
      }
    }
    if (iVar3 != 0) {
      thunk_FUN_10352a90(iVar3,param_1[1],param_1);
      iVar3 = (int)(*param_1);
      uVar1 = (uint)(param_1[2] - iVar3 & 0xfffffff8);
      iVar2 = (int)(iVar3);
      if (0xfff < uVar1) {
        iVar2 = (int)(*(int *)(iVar3 + -4));
        uVar1 = (uint)(uVar1 + 0x23);
        if (0x1f < (iVar3 - iVar2) - 4U) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(iVar2,uVar1);
      *param_1 = (int)(0);
      param_1[1] = 0;
      param_1[2] = 0;
    }
    iVar3 = (int)(thunk_FUN_10370f20(uVar5));
    *param_1 = (int)(iVar3);
    uVar1 = (uint)(0);
    param_1[1] = iVar3;
    param_1[2] = iVar3 + uVar5 * 8;
  }
  iVar2 = (int)(param_2 + uVar1 * 8);
  thunk_FUN_10648530(param_2,iVar2,iVar3);
  iVar3 = (int)(thunk_FUN_10357c10(iVar2,param_3,param_1[1],param_1));
  param_1[1] = iVar3;
  return;
}


// Reference entry 106481c0; body size 107 bytes.
#line 1 "ENTRY_106481c0"

void FUN_106481c0(void)

{
  undefined4 uVar1;
  undefined1 local_1c [12];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c6ccd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  uVar1 = (undefined4)(thunk_FUN_1066e450(local_1c));
  local_8 = (undefined4)(0);
  thunk_FUN_10cf3940(uVar1);
  thunk_FUN_1036e480();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10648530; body size 92 bytes.
#line 1 "ENTRY_10648530"

int * FUN_10648530(int *param_1,int *param_2,int *param_3)

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


// Reference entry 106485d0; body size 111 bytes.
#line 1 "ENTRY_106485d0"

void FUN_106485d0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115c6d90);
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


// Reference entry 10648f00; body size 84 bytes.
#line 1 "ENTRY_10648f00"

void FUN_10648f00(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115c6fe0);
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


// Reference entry 10649310; body size 107 bytes.
#line 1 "ENTRY_10649310"

void FUN_10649310(void)

{
  undefined4 uVar1;
  undefined1 local_1c [12];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c701d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  uVar1 = (undefined4)(thunk_FUN_1066e450(local_1c));
  local_8 = (undefined4)(0);
  thunk_FUN_10cf3940(uVar1);
  thunk_FUN_1036e480();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1064bd40; body size 213 bytes.
#line 1 "ENTRY_1064bd40"

undefined4 * __thiscall Recovered_Bulk::FUN_1064bd40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c7fa0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xfc));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_106e1380(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_106e3e70(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064be50; body size 213 bytes.
#line 1 "ENTRY_1064be50"

undefined4 * __thiscall Recovered_Bulk::FUN_1064be50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8000);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_107626d0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10762e20(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064bf60; body size 213 bytes.
#line 1 "ENTRY_1064bf60"

undefined4 * __thiscall Recovered_Bulk::FUN_1064bf60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8060);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x108));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10758340(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_107593f0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064c070; body size 213 bytes.
#line 1 "ENTRY_1064c070"

undefined4 * __thiscall Recovered_Bulk::FUN_1064c070(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c80c0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10772f70(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10773960(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064c180; body size 213 bytes.
#line 1 "ENTRY_1064c180"

undefined4 * __thiscall Recovered_Bulk::FUN_1064c180(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8120);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1077bcd0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_1077bf70(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064c290; body size 213 bytes.
#line 1 "ENTRY_1064c290"

undefined4 * __thiscall Recovered_Bulk::FUN_1064c290(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8180);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xf4));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1077e3d0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_1077eaf0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064c3a0; body size 213 bytes.
#line 1 "ENTRY_1064c3a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1064c3a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c81e0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10811c10(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10812740(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064c4b0; body size 213 bytes.
#line 1 "ENTRY_1064c4b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1064c4b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8240);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10818140(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10819ab0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064c5c0; body size 213 bytes.
#line 1 "ENTRY_1064c5c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1064c5c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c82a0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10837820(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10838010(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064c6d0; body size 213 bytes.
#line 1 "ENTRY_1064c6d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1064c6d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8300);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1087e430(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_1087e440(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064c7e0; body size 213 bytes.
#line 1 "ENTRY_1064c7e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1064c7e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8360);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10891c20(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10892c70(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064c8f0; body size 213 bytes.
#line 1 "ENTRY_1064c8f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1064c8f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c83c0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x128));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1089e580(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_108a0960(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064ca00; body size 213 bytes.
#line 1 "ENTRY_1064ca00"

undefined4 * __thiscall Recovered_Bulk::FUN_1064ca00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8420);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_108b47a0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_108b5130(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064cb10; body size 213 bytes.
#line 1 "ENTRY_1064cb10"

undefined4 * __thiscall Recovered_Bulk::FUN_1064cb10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8480);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x100));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_108f8850(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_108f8af0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064cc20; body size 213 bytes.
#line 1 "ENTRY_1064cc20"

undefined4 * __thiscall Recovered_Bulk::FUN_1064cc20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c84e0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x100));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_109543e0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109548c0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064cd30; body size 213 bytes.
#line 1 "ENTRY_1064cd30"

undefined4 * __thiscall Recovered_Bulk::FUN_1064cd30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8540);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xf8));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10970540(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10970a30(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064ce40; body size 213 bytes.
#line 1 "ENTRY_1064ce40"

undefined4 * __thiscall Recovered_Bulk::FUN_1064ce40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c85a0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x104));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10988b60(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109892c0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064cf50; body size 213 bytes.
#line 1 "ENTRY_1064cf50"

undefined4 * __thiscall Recovered_Bulk::FUN_1064cf50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8600);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x118));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1099d9d0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_1099e5a0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064d060; body size 213 bytes.
#line 1 "ENTRY_1064d060"

undefined4 * __thiscall Recovered_Bulk::FUN_1064d060(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8660);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x120));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_109a6790(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109a85f0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064d170; body size 213 bytes.
#line 1 "ENTRY_1064d170"

undefined4 * __thiscall Recovered_Bulk::FUN_1064d170(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c86c0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x108));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10a0cd20(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10a0d470(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064d280; body size 213 bytes.
#line 1 "ENTRY_1064d280"

undefined4 * __thiscall Recovered_Bulk::FUN_1064d280(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8720);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10a44600(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10a44ae0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064d390; body size 213 bytes.
#line 1 "ENTRY_1064d390"

undefined4 * __thiscall Recovered_Bulk::FUN_1064d390(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8780);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10a48d70(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10a49250(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064d660; body size 93 bytes.
#line 1 "ENTRY_1064d660"

int __thiscall Recovered_Bulk::FUN_1064d660(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115c87bd);
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


// Reference entry 1064d7a0; body size 148 bytes.
#line 1 "ENTRY_1064d7a0"

int * __thiscall Recovered_Bulk::FUN_1064d7a0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c87fd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 3);
    iVar3 = (int)(thunk_FUN_10370f20(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = iVar3;
    param_1[2] = iVar3 + iVar5 * 8;
    local_8 = (undefined4)(0);
    iVar4 = (int)(thunk_FUN_10357c10(iVar4,iVar1,iVar3,param_1,uVar2));
    param_1[1] = iVar4;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 1064da50; body size 213 bytes.
#line 1 "ENTRY_1064da50"

undefined4 * __thiscall Recovered_Bulk::FUN_1064da50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c88b0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xfc));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_106e1380(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_106e3e70(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductAccountRequiredSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductAccountRequiredSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductAccountRequiredSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductAccountRequiredSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064ddb0; body size 130 bytes.
#line 1 "ENTRY_1064ddb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1064ddb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c89ad);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb64f0(param_2);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductAddExistingPage);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductAddExistingPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductAddExistingPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductAddExistingPage;
  thunk_FUN_10eb41b0(uVar1);
  thunk_FUN_10667d10(param_1 + 0x38);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064df60; body size 213 bytes.
#line 1 "ENTRY_1064df60"

undefined4 * __thiscall Recovered_Bulk::FUN_1064df60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8a70);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_107626d0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10762e20(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductApConnectSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductApConnectSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductApConnectSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductApConnectSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064e170; body size 213 bytes.
#line 1 "ENTRY_1064e170"

undefined4 * __thiscall Recovered_Bulk::FUN_1064e170(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8b30);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x108));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10758340(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_107593f0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductAppVersionCheckSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductAppVersionCheckSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductAppVersionCheckSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductAppVersionCheckSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064e380; body size 213 bytes.
#line 1 "ENTRY_1064e380"

undefined4 * __thiscall Recovered_Bulk::FUN_1064e380(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8bf0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10772f70(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10773960(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductAuthPlusAuthenticationSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductAuthPlusAuthenticationSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductAuthPlusAuthenticationSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductAuthPlusAuthenticationSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064e590; body size 213 bytes.
#line 1 "ENTRY_1064e590"

undefined4 * __thiscall Recovered_Bulk::FUN_1064e590(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8cb0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1077bcd0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_1077bf70(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductBleConnectSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductBleConnectSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductBleConnectSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductBleConnectSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064e7a0; body size 213 bytes.
#line 1 "ENTRY_1064e7a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1064e7a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8d70);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xf4));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1077e3d0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_1077eaf0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductBluetoothOnlyJoinGestureSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductBluetoothOnlyJoinGestureSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductBluetoothOnlyJoinGestureSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductBluetoothOnlyJoinGestureSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064e9b0; body size 213 bytes.
#line 1 "ENTRY_1064e9b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1064e9b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c8e30);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10811c10(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10812740(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductConnectRecoverySubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductConnectRecoverySubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductConnectRecoverySubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductConnectRecoverySubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064f130; body size 213 bytes.
#line 1 "ENTRY_1064f130"

undefined4 * __thiscall Recovered_Bulk::FUN_1064f130(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c9070);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10818140(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10819ab0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductDevicePermissionsSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductDevicePermissionsSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductDevicePermissionsSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductDevicePermissionsSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064f5e0; body size 213 bytes.
#line 1 "ENTRY_1064f5e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1064f5e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c91f0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10837820(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10838010(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductFirmwareUpdateSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductFirmwareUpdateSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductFirmwareUpdateSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductFirmwareUpdateSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064f7f0; body size 213 bytes.
#line 1 "ENTRY_1064f7f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1064f7f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c92b0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1087e430(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_1087e440(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductIncompleteWirelessConnectSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductIncompleteWirelessConnectSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductIncompleteWirelessConnectSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductIncompleteWirelessConnectSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064fa00; body size 213 bytes.
#line 1 "ENTRY_1064fa00"

undefined4 * __thiscall Recovered_Bulk::FUN_1064fa00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c9370);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10891c20(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10892c70(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductJoinPreparationSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductJoinPreparationSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductJoinPreparationSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductJoinPreparationSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064fc10; body size 213 bytes.
#line 1 "ENTRY_1064fc10"

undefined4 * __thiscall Recovered_Bulk::FUN_1064fc10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c9430);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x128));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1089e580(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_108a0960(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductJoinProductSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductJoinProductSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductJoinProductSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductJoinProductSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1064fe20; body size 213 bytes.
#line 1 "ENTRY_1064fe20"

undefined4 * __thiscall Recovered_Bulk::FUN_1064fe20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c94f0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_108b47a0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_108b5130(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductLegacyAuthenticationSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductLegacyAuthenticationSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductLegacyAuthenticationSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductLegacyAuthenticationSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10650180; body size 213 bytes.
#line 1 "ENTRY_10650180"

undefined4 * __thiscall Recovered_Bulk::FUN_10650180(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c9610);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x100));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_108f8850(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_108f8af0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductNamePortableSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductNamePortableSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductNamePortableSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductNamePortableSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10650390; body size 130 bytes.
#line 1 "ENTRY_10650390"

undefined4 * __thiscall Recovered_Bulk::FUN_10650390(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c96ad);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb64f0(param_2);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductNewHouseholdPage);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductNewHouseholdPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductNewHouseholdPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductNewHouseholdPage;
  thunk_FUN_10eb41b0(uVar1);
  thunk_FUN_10667d10(param_1 + 0x38);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10650980; body size 213 bytes.
#line 1 "ENTRY_10650980"

undefined4 * __thiscall Recovered_Bulk::FUN_10650980(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c9890);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x100));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_109543e0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109548c0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductPortablePreparationSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductPortablePreparationSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductPortablePreparationSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductPortablePreparationSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10650b90; body size 213 bytes.
#line 1 "ENTRY_10650b90"

undefined4 * __thiscall Recovered_Bulk::FUN_10650b90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c9950);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xf8));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10970540(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10970a30(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductProductPlacementSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductProductPlacementSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductProductPlacementSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductProductPlacementSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10650da0; body size 213 bytes.
#line 1 "ENTRY_10650da0"

undefined4 * __thiscall Recovered_Bulk::FUN_10650da0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c9a10);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x118));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1099d9d0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_1099e5a0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductRoomAllocationSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductRoomAllocationSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductRoomAllocationSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductRoomAllocationSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10650fb0; body size 213 bytes.
#line 1 "ENTRY_10650fb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10650fb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c9ad0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x120));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_109a6790(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109a85f0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductSecureAuthenticationSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductSecureAuthenticationSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductSecureAuthenticationSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductSecureAuthenticationSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 106511c0; body size 213 bytes.
#line 1 "ENTRY_106511c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106511c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c9b90);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x104));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10988b60(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109892c0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductSecureRegistrationSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductSecureRegistrationSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductSecureRegistrationSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductSecureRegistrationSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 106516b0; body size 213 bytes.
#line 1 "ENTRY_106516b0"

undefined4 * __thiscall Recovered_Bulk::FUN_106516b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c9d10);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x108));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10a0cd20(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10a0d470(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductUpdateCheckSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductUpdateCheckSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductUpdateCheckSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductUpdateCheckSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10651a10; body size 213 bytes.
#line 1 "ENTRY_10651a10"

undefined4 * __thiscall Recovered_Bulk::FUN_10651a10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c9e30);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10a44600(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10a44ae0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductWacConnectSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductWacConnectSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductWacConnectSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductWacConnectSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10651c20; body size 213 bytes.
#line 1 "ENTRY_10651c20"

undefined4 * __thiscall Recovered_Bulk::FUN_10651c20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c9ef0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10a48d70(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10a49250(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductWiredConnectSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductWiredConnectSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductWiredConnectSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductWiredConnectSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10651e30; body size 258 bytes.
#line 1 "ENTRY_10651e30"

undefined4 * __thiscall Recovered_Bulk::FUN_10651e30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115c9fa9);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_106da030(param_2);
  local_8 = (undefined4)(0);
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x23);
  }
  thunk_FUN_10cf2f30(puVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x23);
  }
  thunk_FUN_10cf41d0(puVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  puVar1 = (undefined4 *)((undefined4 *)0x0);
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(param_1 + 0x3a);
  }
  thunk_FUN_10eaafe0(puVar1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductWizard);
  param_1[4] = (uint)&ghidra_vftable_SCAddProductWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCAddProductWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAddProductWizard;
  *(undefined1 *)(param_1 + 0x43) = 1;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined2 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10654880; body size 76 bytes.
#line 1 "ENTRY_10654880"

void __fastcall FUN_10654880(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cace0);
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


// Reference entry 106548f0; body size 76 bytes.
#line 1 "ENTRY_106548f0"

void __fastcall FUN_106548f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cad10);
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


// Reference entry 10654960; body size 76 bytes.
#line 1 "ENTRY_10654960"

void __fastcall FUN_10654960(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cad40);
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


// Reference entry 106549d0; body size 76 bytes.
#line 1 "ENTRY_106549d0"

void __fastcall FUN_106549d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cad70);
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


// Reference entry 10655080; body size 187 bytes.
#line 1 "ENTRY_10655080"

void __fastcall FUN_10655080(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115cae00);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar3 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)((undefined4 *)param_1[1]);
    if (puVar3 != (undefined4 *)(puVar4)) {
      do {
        piVar1 = (int *)((int *)puVar3[1]);
        local_8 = (undefined4)(0);
        if (piVar1 != (int *)0x0) {
          *puVar3 = (undefined4)(0);
          puVar3[1] = 0;
          (**(code **)(*piVar1 + 8))(uVar2);
        }
        puVar3 = (undefined4 *)(puVar3 + 2);
      } while (puVar3 != (undefined4 *)(puVar4));
      puVar3 = (undefined4 *)((undefined4 *)*param_1);
    }
    local_8 = (undefined4)(0xffffffff);
    uVar2 = (uint)(param_1[2] - (int)puVar3 & 0xfffffff8);
    puVar4 = (undefined4 *)(puVar3);
    if (0xfff < uVar2) {
      puVar4 = (undefined4 *)((undefined4 *)puVar3[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar4))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(puVar4,uVar2);
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10655180; body size 187 bytes.
#line 1 "ENTRY_10655180"

void __fastcall FUN_10655180(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115cae30);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar3 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)((undefined4 *)param_1[1]);
    if (puVar3 != (undefined4 *)(puVar4)) {
      do {
        piVar1 = (int *)((int *)puVar3[1]);
        local_8 = (undefined4)(0);
        if (piVar1 != (int *)0x0) {
          *puVar3 = (undefined4)(0);
          puVar3[1] = 0;
          (**(code **)(*piVar1 + 8))(uVar2);
        }
        puVar3 = (undefined4 *)(puVar3 + 2);
      } while (puVar3 != (undefined4 *)(puVar4));
      puVar3 = (undefined4 *)((undefined4 *)*param_1);
    }
    local_8 = (undefined4)(0xffffffff);
    uVar2 = (uint)(param_1[2] - (int)puVar3 & 0xfffffff8);
    puVar4 = (undefined4 *)(puVar3);
    if (0xfff < uVar2) {
      puVar4 = (undefined4 *)((undefined4 *)puVar3[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar4))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(puVar4,uVar2);
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106556b0; body size 135 bytes.
#line 1 "ENTRY_106556b0"

void __fastcall FUN_106556b0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115cae90);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0x39]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10655b60; body size 135 bytes.
#line 1 "ENTRY_10655b60"

void __fastcall FUN_10655b60(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115caef0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0x39]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10655c80; body size 135 bytes.
#line 1 "ENTRY_10655c80"

void __fastcall FUN_10655c80(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115caf20);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0x39]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10655ee0; body size 146 bytes.
#line 1 "ENTRY_10655ee0"

void __fastcall FUN_10655ee0(undefined4 *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115caf50);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_105bb550(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  piVar1 = (int *)((int *)param_1[0x39]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10656610; body size 71 bytes.
#line 1 "ENTRY_10656610"

void __fastcall FUN_10656610(int param_1)

{
  thunk_FUN_10246290((undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x18) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x18),0x18);
  thunk_FUN_10648750((undefined4 *)(param_1 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x10) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x10),0x18);
  thunk_FUN_105ba370();
  return;
}


// Reference entry 106567c0; body size 83 bytes.
#line 1 "ENTRY_106567c0"

void __fastcall FUN_106567c0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115cb040);
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
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10656840; body size 198 bytes.
#line 1 "ENTRY_10656840"

void __fastcall FUN_10656840(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115cb070);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpPerformQueue);
  param_1[2] = (uint)&ghidra_vftable_SCOpPerformQueue;
  piVar1 = (int *)((int *)param_1[0xb]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[9]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10655080();
  param_1[2] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[4]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106569d0; body size 71 bytes.
#line 1 "ENTRY_106569d0"

void __fastcall FUN_106569d0(int param_1)

{
  thunk_FUN_10246290((undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x18) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x18),0x18);
  thunk_FUN_10648810((undefined4 *)(param_1 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x10) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x10),0x18);
  thunk_FUN_105ba370();
  return;
}


// Reference entry 10656a30; body size 81 bytes.
#line 1 "ENTRY_10656a30"

int * __thiscall Recovered_Bulk::FUN_10656a30(int *param_2)
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


// Reference entry 10656aa0; body size 65 bytes.
#line 1 "ENTRY_10656aa0"

int * __thiscall Recovered_Bulk::FUN_10656aa0(int *param_2)
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
  return (int *)(param_1);
}


// Reference entry 10657590; body size 83 bytes.
#line 1 "ENTRY_10657590"

undefined4 * __thiscall Recovered_Bulk::FUN_10657590(byte param_2)
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


// Reference entry 10657600; body size 68 bytes.
#line 1 "ENTRY_10657600"

undefined4 * __thiscall Recovered_Bulk::FUN_10657600(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657d80; body size 68 bytes.
#line 1 "ENTRY_10657d80"

undefined4 * __thiscall Recovered_Bulk::FUN_10657d80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657de0; body size 68 bytes.
#line 1 "ENTRY_10657de0"

undefined4 * __thiscall Recovered_Bulk::FUN_10657de0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657e40; body size 68 bytes.
#line 1 "ENTRY_10657e40"

undefined4 * __thiscall Recovered_Bulk::FUN_10657e40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657ea0; body size 68 bytes.
#line 1 "ENTRY_10657ea0"

undefined4 * __thiscall Recovered_Bulk::FUN_10657ea0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657f00; body size 68 bytes.
#line 1 "ENTRY_10657f00"

undefined4 * __thiscall Recovered_Bulk::FUN_10657f00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657f60; body size 68 bytes.
#line 1 "ENTRY_10657f60"

undefined4 * __thiscall Recovered_Bulk::FUN_10657f60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657fc0; body size 68 bytes.
#line 1 "ENTRY_10657fc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10657fc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658020; body size 68 bytes.
#line 1 "ENTRY_10658020"

undefined4 * __thiscall Recovered_Bulk::FUN_10658020(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658080; body size 68 bytes.
#line 1 "ENTRY_10658080"

undefined4 * __thiscall Recovered_Bulk::FUN_10658080(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106580e0; body size 68 bytes.
#line 1 "ENTRY_106580e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106580e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658140; body size 68 bytes.
#line 1 "ENTRY_10658140"

undefined4 * __thiscall Recovered_Bulk::FUN_10658140(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106581a0; body size 68 bytes.
#line 1 "ENTRY_106581a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106581a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658200; body size 68 bytes.
#line 1 "ENTRY_10658200"

undefined4 * __thiscall Recovered_Bulk::FUN_10658200(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658260; body size 68 bytes.
#line 1 "ENTRY_10658260"

undefined4 * __thiscall Recovered_Bulk::FUN_10658260(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106582c0; body size 68 bytes.
#line 1 "ENTRY_106582c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106582c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658320; body size 68 bytes.
#line 1 "ENTRY_10658320"

undefined4 * __thiscall Recovered_Bulk::FUN_10658320(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658380; body size 68 bytes.
#line 1 "ENTRY_10658380"

undefined4 * __thiscall Recovered_Bulk::FUN_10658380(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106583e0; body size 68 bytes.
#line 1 "ENTRY_106583e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106583e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658440; body size 68 bytes.
#line 1 "ENTRY_10658440"

undefined4 * __thiscall Recovered_Bulk::FUN_10658440(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106584a0; body size 68 bytes.
#line 1 "ENTRY_106584a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106584a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658500; body size 68 bytes.
#line 1 "ENTRY_10658500"

undefined4 * __thiscall Recovered_Bulk::FUN_10658500(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658560; body size 68 bytes.
#line 1 "ENTRY_10658560"

undefined4 * __thiscall Recovered_Bulk::FUN_10658560(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106586c0; body size 68 bytes.
#line 1 "ENTRY_106586c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106586c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658760; body size 68 bytes.
#line 1 "ENTRY_10658760"

undefined4 * __thiscall Recovered_Bulk::FUN_10658760(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658900; body size 68 bytes.
#line 1 "ENTRY_10658900"

undefined4 * __thiscall Recovered_Bulk::FUN_10658900(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106589a0; body size 68 bytes.
#line 1 "ENTRY_106589a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106589a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658a40; body size 68 bytes.
#line 1 "ENTRY_10658a40"

undefined4 * __thiscall Recovered_Bulk::FUN_10658a40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658ae0; body size 68 bytes.
#line 1 "ENTRY_10658ae0"

undefined4 * __thiscall Recovered_Bulk::FUN_10658ae0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658b80; body size 68 bytes.
#line 1 "ENTRY_10658b80"

undefined4 * __thiscall Recovered_Bulk::FUN_10658b80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658c20; body size 68 bytes.
#line 1 "ENTRY_10658c20"

undefined4 * __thiscall Recovered_Bulk::FUN_10658c20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658cc0; body size 68 bytes.
#line 1 "ENTRY_10658cc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10658cc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658d60; body size 68 bytes.
#line 1 "ENTRY_10658d60"

undefined4 * __thiscall Recovered_Bulk::FUN_10658d60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658e00; body size 68 bytes.
#line 1 "ENTRY_10658e00"

undefined4 * __thiscall Recovered_Bulk::FUN_10658e00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658ea0; body size 159 bytes.
#line 1 "ENTRY_10658ea0"

undefined4 * __thiscall Recovered_Bulk::FUN_10658ea0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115cb190);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0x39]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf4);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10658fb0; body size 68 bytes.
#line 1 "ENTRY_10658fb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10658fb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659050; body size 68 bytes.
#line 1 "ENTRY_10659050"

undefined4 * __thiscall Recovered_Bulk::FUN_10659050(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106590f0; body size 68 bytes.
#line 1 "ENTRY_106590f0"

undefined4 * __thiscall Recovered_Bulk::FUN_106590f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659190; body size 68 bytes.
#line 1 "ENTRY_10659190"

undefined4 * __thiscall Recovered_Bulk::FUN_10659190(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659230; body size 68 bytes.
#line 1 "ENTRY_10659230"

undefined4 * __thiscall Recovered_Bulk::FUN_10659230(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106592d0; body size 68 bytes.
#line 1 "ENTRY_106592d0"

undefined4 * __thiscall Recovered_Bulk::FUN_106592d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659370; body size 68 bytes.
#line 1 "ENTRY_10659370"

undefined4 * __thiscall Recovered_Bulk::FUN_10659370(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659410; body size 68 bytes.
#line 1 "ENTRY_10659410"

undefined4 * __thiscall Recovered_Bulk::FUN_10659410(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106594b0; body size 68 bytes.
#line 1 "ENTRY_106594b0"

undefined4 * __thiscall Recovered_Bulk::FUN_106594b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659550; body size 68 bytes.
#line 1 "ENTRY_10659550"

undefined4 * __thiscall Recovered_Bulk::FUN_10659550(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106596f0; body size 159 bytes.
#line 1 "ENTRY_106596f0"

undefined4 * __thiscall Recovered_Bulk::FUN_106596f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115cb1f0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0x39]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf4);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10659800; body size 68 bytes.
#line 1 "ENTRY_10659800"

undefined4 * __thiscall Recovered_Bulk::FUN_10659800(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106598a0; body size 159 bytes.
#line 1 "ENTRY_106598a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106598a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115cb220);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0x39]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xec);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 106599b0; body size 68 bytes.
#line 1 "ENTRY_106599b0"

undefined4 * __thiscall Recovered_Bulk::FUN_106599b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659a50; body size 68 bytes.
#line 1 "ENTRY_10659a50"

undefined4 * __thiscall Recovered_Bulk::FUN_10659a50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659af0; body size 68 bytes.
#line 1 "ENTRY_10659af0"

undefined4 * __thiscall Recovered_Bulk::FUN_10659af0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659b90; body size 68 bytes.
#line 1 "ENTRY_10659b90"

undefined4 * __thiscall Recovered_Bulk::FUN_10659b90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659c30; body size 68 bytes.
#line 1 "ENTRY_10659c30"

undefined4 * __thiscall Recovered_Bulk::FUN_10659c30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659cd0; body size 170 bytes.
#line 1 "ENTRY_10659cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10659cd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cb250);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_105bb550(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  piVar1 = (int *)((int *)param_1[0x39]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xfc);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10659df0; body size 68 bytes.
#line 1 "ENTRY_10659df0"

undefined4 * __thiscall Recovered_Bulk::FUN_10659df0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659e90; body size 68 bytes.
#line 1 "ENTRY_10659e90"

undefined4 * __thiscall Recovered_Bulk::FUN_10659e90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659f30; body size 68 bytes.
#line 1 "ENTRY_10659f30"

undefined4 * __thiscall Recovered_Bulk::FUN_10659f30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659fd0; body size 68 bytes.
#line 1 "ENTRY_10659fd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10659fd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1065a070; body size 68 bytes.
#line 1 "ENTRY_1065a070"

undefined4 * __thiscall Recovered_Bulk::FUN_1065a070(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCSubwizStateFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSubwizStateFor;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1065a2b0; body size 94 bytes.
#line 1 "ENTRY_1065a2b0"

int __thiscall Recovered_Bulk::FUN_1065a2b0(byte param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10246290((undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x18) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x18),0x18);
  thunk_FUN_10648750((undefined4 *)(param_1 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x10) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x10),0x18);
  thunk_FUN_105ba370();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (int)(param_1);
}


// Reference entry 1065a330; body size 106 bytes.
#line 1 "ENTRY_1065a330"

undefined4 * __thiscall Recovered_Bulk::FUN_1065a330(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115cb2b0);
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


// Reference entry 1065a3f0; body size 94 bytes.
#line 1 "ENTRY_1065a3f0"

int __thiscall Recovered_Bulk::FUN_1065a3f0(byte param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10246290((undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x18) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x18),0x18);
  thunk_FUN_10648810((undefined4 *)(param_1 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x10) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x10),0x18);
  thunk_FUN_105ba370();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (int)(param_1);
}


// Reference entry 1065a780; body size 113 bytes.
#line 1 "ENTRY_1065a780"

void __stdcall FUN_1065a780(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115cb5e0);
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


// Reference entry 1065a820; body size 107 bytes.
#line 1 "ENTRY_1065a820"

void FUN_1065a820(void)

{
  undefined4 uVar1;
  undefined1 local_1c [12];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cb61d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  uVar1 = (undefined4)(thunk_FUN_1066e450(local_1c));
  local_8 = (undefined4)(0);
  thunk_FUN_10cf3940(uVar1);
  thunk_FUN_1036e480();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1065ad80; body size 187 bytes.
#line 1 "ENTRY_1065ad80"

void __fastcall FUN_1065ad80(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115cb6e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar3 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)((undefined4 *)param_1[1]);
    if (puVar3 != (undefined4 *)(puVar4)) {
      do {
        piVar1 = (int *)((int *)puVar3[1]);
        local_8 = (undefined4)(0);
        if (piVar1 != (int *)0x0) {
          *puVar3 = (undefined4)(0);
          puVar3[1] = 0;
          (**(code **)(*piVar1 + 8))(uVar2);
        }
        puVar3 = (undefined4 *)(puVar3 + 2);
      } while (puVar3 != (undefined4 *)(puVar4));
      puVar3 = (undefined4 *)((undefined4 *)*param_1);
    }
    local_8 = (undefined4)(0xffffffff);
    uVar2 = (uint)(param_1[2] - (int)puVar3 & 0xfffffff8);
    puVar4 = (undefined4 *)(puVar3);
    if (0xfff < uVar2) {
      puVar4 = (undefined4 *)((undefined4 *)puVar3[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar4))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(puVar4,uVar2);
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1065ae80; body size 187 bytes.
#line 1 "ENTRY_1065ae80"

void __fastcall FUN_1065ae80(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115cb710);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar3 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)((undefined4 *)param_1[1]);
    if (puVar3 != (undefined4 *)(puVar4)) {
      do {
        piVar1 = (int *)((int *)puVar3[1]);
        local_8 = (undefined4)(0);
        if (piVar1 != (int *)0x0) {
          *puVar3 = (undefined4)(0);
          puVar3[1] = 0;
          (**(code **)(*piVar1 + 8))(uVar2);
        }
        puVar3 = (undefined4 *)(puVar3 + 2);
      } while (puVar3 != (undefined4 *)(puVar4));
      puVar3 = (undefined4 *)((undefined4 *)*param_1);
    }
    local_8 = (undefined4)(0xffffffff);
    uVar2 = (uint)(param_1[2] - (int)puVar3 & 0xfffffff8);
    puVar4 = (undefined4 *)(puVar3);
    if (0xfff < uVar2) {
      puVar4 = (undefined4 *)((undefined4 *)puVar3[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar4))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(puVar4,uVar2);
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1065b080; body size 90 bytes.
#line 1 "ENTRY_1065b080"

void * FUN_1065b080(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x71c71c8) {
    param_1 = (uint)(param_1 * 0x24);
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


// Reference entry 1065b600; body size 276 bytes.
#line 1 "ENTRY_1065b600"

undefined4 * __thiscall Recovered_Bulk::FUN_1065b600(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cb872);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0xfc));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_106e1380(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_106e3e70(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductAccountRequiredSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductAccountRequiredSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductAccountRequiredSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductAccountRequiredSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065b760; body size 168 bytes.
#line 1 "ENTRY_1065b760"

undefined4 * __thiscall Recovered_Bulk::FUN_1065b760(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cb8c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAddProductAddAnotherProductPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAddProductAddAnotherProductPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAddProductAddAnotherProductPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAddProductAddAnotherProductPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065b840; body size 193 bytes.
#line 1 "ENTRY_1065b840"

undefined4 * __thiscall Recovered_Bulk::FUN_1065b840(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cb91f);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductAddExistingPage);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductAddExistingPage;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductAddExistingPage;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductAddExistingPage;
    thunk_FUN_10eb41b0(uVar1);
    thunk_FUN_10667d10(puVar2 + 0x38);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065b940; body size 276 bytes.
#line 1 "ENTRY_1065b940"

undefined4 * __thiscall Recovered_Bulk::FUN_1065b940(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cb992);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x11c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_107626d0(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10762e20(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductApConnectSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductApConnectSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductApConnectSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductApConnectSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065baa0; body size 276 bytes.
#line 1 "ENTRY_1065baa0"

undefined4 * __thiscall Recovered_Bulk::FUN_1065baa0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cba12);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x108));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10758340(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_107593f0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductAppVersionCheckSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductAppVersionCheckSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductAppVersionCheckSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductAppVersionCheckSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065bc00; body size 276 bytes.
#line 1 "ENTRY_1065bc00"

undefined4 * __thiscall Recovered_Bulk::FUN_1065bc00(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cba92);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x10c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10772f70(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10773960(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductAuthPlusAuthenticationSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductAuthPlusAuthenticationSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductAuthPlusAuthenticationSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductAuthPlusAuthenticationSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065bd60; body size 276 bytes.
#line 1 "ENTRY_1065bd60"

undefined4 * __thiscall Recovered_Bulk::FUN_1065bd60(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cbb12);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x10c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_1077bcd0(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_1077bf70(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductBleConnectSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductBleConnectSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductBleConnectSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductBleConnectSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065bec0; body size 276 bytes.
#line 1 "ENTRY_1065bec0"

undefined4 * __thiscall Recovered_Bulk::FUN_1065bec0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cbb92);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0xf4));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_1077e3d0(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_1077eaf0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductBluetoothOnlyJoinGestureSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductBluetoothOnlyJoinGestureSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductBluetoothOnlyJoinGestureSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductBluetoothOnlyJoinGestureSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065c020; body size 276 bytes.
#line 1 "ENTRY_1065c020"

undefined4 * __thiscall Recovered_Bulk::FUN_1065c020(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cbc12);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x11c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10811c10(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10812740(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductConnectRecoverySubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductConnectRecoverySubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductConnectRecoverySubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductConnectRecoverySubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065c180; body size 168 bytes.
#line 1 "ENTRY_1065c180"

undefined4 * __thiscall Recovered_Bulk::FUN_1065c180(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cbc67);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAddProductConnectionLastResortPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAddProductConnectionLastResortPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAddProductConnectionLastResortPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAddProductConnectionLastResortPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065c260; body size 168 bytes.
#line 1 "ENTRY_1065c260"

undefined4 * __thiscall Recovered_Bulk::FUN_1065c260(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cbcb7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAddProductContinueConfigurationPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAddProductContinueConfigurationPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAddProductContinueConfigurationPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAddProductContinueConfigurationPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065c340; body size 168 bytes.
#line 1 "ENTRY_1065c340"

undefined4 * __thiscall Recovered_Bulk::FUN_1065c340(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cbd07);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAddProductDeactivatedErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAddProductDeactivatedErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAddProductDeactivatedErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAddProductDeactivatedErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065c420; body size 204 bytes.
#line 1 "ENTRY_1065c420"

undefined4 * __thiscall Recovered_Bulk::FUN_1065c420(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cbd57);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAddProductDefaultIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAddProductDefaultIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAddProductDefaultIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAddProductDefaultIntroPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    *(undefined1 *)(puVar1 + 0x3c) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065c520; body size 276 bytes.
#line 1 "ENTRY_1065c520"

undefined4 * __thiscall Recovered_Bulk::FUN_1065c520(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cbdd2);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x11c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10818140(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10819ab0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductDevicePermissionsSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductDevicePermissionsSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductDevicePermissionsSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductDevicePermissionsSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065c680; body size 168 bytes.
#line 1 "ENTRY_1065c680"

undefined4 * __thiscall Recovered_Bulk::FUN_1065c680(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cbe27);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAddProductFatalVerificationErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAddProductFatalVerificationErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAddProductFatalVerificationErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAddProductFatalVerificationErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065c760; body size 175 bytes.
#line 1 "ENTRY_1065c760"

undefined4 * __thiscall Recovered_Bulk::FUN_1065c760(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cbe77);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAddProductFinishConfigurationPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAddProductFinishConfigurationPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAddProductFinishConfigurationPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAddProductFinishConfigurationPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065c840; body size 276 bytes.
#line 1 "ENTRY_1065c840"

undefined4 * __thiscall Recovered_Bulk::FUN_1065c840(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cbef2);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x10c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10837820(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10838010(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductFirmwareUpdateSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductFirmwareUpdateSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductFirmwareUpdateSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductFirmwareUpdateSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065c9a0; body size 276 bytes.
#line 1 "ENTRY_1065c9a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1065c9a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cbf72);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x10c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_1087e430(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_1087e440(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductIncompleteWirelessConnectSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductIncompleteWirelessConnectSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductIncompleteWirelessConnectSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductIncompleteWirelessConnectSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065cb00; body size 276 bytes.
#line 1 "ENTRY_1065cb00"

undefined4 * __thiscall Recovered_Bulk::FUN_1065cb00(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cbff2);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x10c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10891c20(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10892c70(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductJoinPreparationSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductJoinPreparationSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductJoinPreparationSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductJoinPreparationSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065cc60; body size 276 bytes.
#line 1 "ENTRY_1065cc60"

undefined4 * __thiscall Recovered_Bulk::FUN_1065cc60(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc072);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x128));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_1089e580(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_108a0960(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductJoinProductSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductJoinProductSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductJoinProductSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductJoinProductSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065cdc0; body size 276 bytes.
#line 1 "ENTRY_1065cdc0"

undefined4 * __thiscall Recovered_Bulk::FUN_1065cdc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc0f2);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x10c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_108b47a0(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_108b5130(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductLegacyAuthenticationSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductLegacyAuthenticationSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductLegacyAuthenticationSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductLegacyAuthenticationSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065cf20; body size 175 bytes.
#line 1 "ENTRY_1065cf20"

undefined4 * __thiscall Recovered_Bulk::FUN_1065cf20(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc147);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAddProductLegacyOnlyPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAddProductLegacyOnlyPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAddProductLegacyOnlyPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAddProductLegacyOnlyPage;
    *(undefined1 *)((int)puVar1 + 0xe1) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065d000; body size 276 bytes.
#line 1 "ENTRY_1065d000"

undefined4 * __thiscall Recovered_Bulk::FUN_1065d000(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc1c2);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x100));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_108f8850(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_108f8af0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductNamePortableSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductNamePortableSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductNamePortableSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductNamePortableSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065d160; body size 193 bytes.
#line 1 "ENTRY_1065d160"

undefined4 * __thiscall Recovered_Bulk::FUN_1065d160(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc21f);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductNewHouseholdPage);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductNewHouseholdPage;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductNewHouseholdPage;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductNewHouseholdPage;
    thunk_FUN_10eb41b0(uVar1);
    thunk_FUN_10667d10(puVar2 + 0x38);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065d260; body size 204 bytes.
#line 1 "ENTRY_1065d260"

undefined4 * __thiscall Recovered_Bulk::FUN_1065d260(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc267);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAddProductNotificationIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAddProductNotificationIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAddProductNotificationIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAddProductNotificationIntroPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    *(undefined1 *)(puVar1 + 0x3c) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065d360; body size 168 bytes.
#line 1 "ENTRY_1065d360"

undefined4 * __thiscall Recovered_Bulk::FUN_1065d360(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc2b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAddProductOutroFailurePage);
    puVar1[4] = (uint)&ghidra_vftable_SCAddProductOutroFailurePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAddProductOutroFailurePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAddProductOutroFailurePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065d440; body size 197 bytes.
#line 1 "ENTRY_1065d440"

undefined4 * __thiscall Recovered_Bulk::FUN_1065d440(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc307);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xec));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAddProductOutroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAddProductOutroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAddProductOutroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAddProductOutroPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065d540; body size 276 bytes.
#line 1 "ENTRY_1065d540"

undefined4 * __thiscall Recovered_Bulk::FUN_1065d540(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc382);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x100));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_109543e0(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_109548c0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductPortablePreparationSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductPortablePreparationSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductPortablePreparationSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductPortablePreparationSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065d6a0; body size 276 bytes.
#line 1 "ENTRY_1065d6a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1065d6a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc402);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0xf8));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10970540(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10970a30(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductProductPlacementSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductProductPlacementSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductProductPlacementSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductProductPlacementSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065d800; body size 276 bytes.
#line 1 "ENTRY_1065d800"

undefined4 * __thiscall Recovered_Bulk::FUN_1065d800(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc482);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x118));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_1099d9d0(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_1099e5a0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductRoomAllocationSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductRoomAllocationSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductRoomAllocationSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductRoomAllocationSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065d960; body size 276 bytes.
#line 1 "ENTRY_1065d960"

undefined4 * __thiscall Recovered_Bulk::FUN_1065d960(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc502);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x120));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_109a6790(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_109a85f0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductSecureAuthenticationSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductSecureAuthenticationSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductSecureAuthenticationSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductSecureAuthenticationSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065dac0; body size 276 bytes.
#line 1 "ENTRY_1065dac0"

undefined4 * __thiscall Recovered_Bulk::FUN_1065dac0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc582);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x104));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10988b60(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_109892c0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductSecureRegistrationSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductSecureRegistrationSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductSecureRegistrationSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductSecureRegistrationSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065dc20; body size 229 bytes.
#line 1 "ENTRY_1065dc20"

undefined4 * __thiscall Recovered_Bulk::FUN_1065dc20(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc5d7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xfc));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAddProductSelectionIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAddProductSelectionIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAddProductSelectionIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAddProductSelectionIntroPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    *(undefined1 *)(puVar1 + 0x3e) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065dd40; body size 168 bytes.
#line 1 "ENTRY_1065dd40"

undefined4 * __thiscall Recovered_Bulk::FUN_1065dd40(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc627);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAddProductTempWireInstructionsPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAddProductTempWireInstructionsPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAddProductTempWireInstructionsPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAddProductTempWireInstructionsPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065de20; body size 276 bytes.
#line 1 "ENTRY_1065de20"

undefined4 * __thiscall Recovered_Bulk::FUN_1065de20(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc6a2);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x108));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10a0cd20(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10a0d470(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductUpdateCheckSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductUpdateCheckSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductUpdateCheckSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductUpdateCheckSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065df80; body size 168 bytes.
#line 1 "ENTRY_1065df80"

undefined4 * __thiscall Recovered_Bulk::FUN_1065df80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc6f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAddProductVanishedProductErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAddProductVanishedProductErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAddProductVanishedProductErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAddProductVanishedProductErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065e060; body size 276 bytes.
#line 1 "ENTRY_1065e060"

undefined4 * __thiscall Recovered_Bulk::FUN_1065e060(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc772);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x10c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10a44600(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10a44ae0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductWacConnectSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductWacConnectSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductWacConnectSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductWacConnectSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065e1c0; body size 276 bytes.
#line 1 "ENTRY_1065e1c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1065e1c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc7f2);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x10c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10a48d70(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10a49250(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductWiredConnectSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductWiredConnectSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAddProductWiredConnectSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductWiredConnectSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1065e500; body size 317 bytes.
#line 1 "ENTRY_1065e500"

undefined4 * __thiscall Recovered_Bulk::FUN_1065e500(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cc924);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x128));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar3);
    puVar1 = (undefined4 *)(puVar2 + 0x23);
    local_8 = (undefined4)(2);
    thunk_FUN_10cf2f30(puVar1);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    thunk_FUN_10cf41d0(puVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    thunk_FUN_10eaafe0(puVar2 + 0x3a);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAddProductWizard);
    puVar2[4] = (uint)&ghidra_vftable_SCAddProductWizard;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAddProductWizard);
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAddProductWizard;
    *(undefined1 *)(puVar2 + 0x43) = 1;
    puVar2[0x44] = 0;
    puVar2[0x45] = 0;
    puVar2[0x46] = 0;
    *(undefined2 *)(puVar2 + 0x47) = 0;
    puVar2[0x48] = 0;
    puVar2[0x49] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10667e30; body size 506 bytes.
#line 1 "ENTRY_10667e30"

undefined4 __thiscall Recovered_Bulk::FUN_10667e30(undefined4 param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 local_98 [32];
  void *local_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  undefined1 local_6c [32];
  undefined1 local_4c [32];
  int *local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  local_70 = (undefined4)(0xffffffff);
  puStack_74 = (undefined1 *)(LAB_115cdd4d);
  local_78 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)local_6c);
  ExceptionList = (void *)(&local_78);
  local_8 = (undefined4)(DAT_121a236c);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a237c);
  local_70 = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2368);
  *(unsigned char *)((char *)&local_70 + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  puVar8 = (undefined1 *)(local_4c);
  *(unsigned char *)((char *)&local_70 + 0) = 3;
  (**(code **)(*param_1 + 8))(puVar8,uVar2);
  iVar3 = (int)(thunk_FUN_105ad8f0());
  piVar4 = (int *)((int *)thunk_FUN_106190a0(iVar3 == 6,puVar8));
  piVar5 = (int *)((int *)thunk_FUN_10cf34e0(&local_2c));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(*piVar5 == 0)));
  *(unsigned char *)((char *)&local_70 + 0) = 4;
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(local_8,local_6c));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0x10))(local_98));
  uVar6 = (undefined4)((**(code **)(*piVar4 + 4))());
  thunk_FUN_105f5a00(uVar6);
  local_70 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_70 + 1)) << 8 | (uint)(5)));
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }
  puVar1 = (undefined4 *)(local_10);
  puVar7 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar7) != puVar1; puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar2 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_14);
    if (0xfff < uVar2) {
      puVar7 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar7))) goto LAB_10667fcf;
    }
    thunk_FUN_1148a50e(puVar7,uVar2);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar2 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar3 = (int)(iStack_20);
    if (0xfff < uVar2) {
      iVar3 = (int)(*(int *)(iStack_20 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iStack_20 - iVar3) - 4U) {
LAB_10667fcf:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar2);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_78);
  return (undefined4)(param_2);
}


// Reference entry 106683f0; body size 783 bytes.
#line 1 "ENTRY_106683f0"

undefined4 __stdcall FUN_106683f0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 local_d4 [32];
  undefined1 local_b4 [32];
  undefined1 local_94 [32];
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined1 local_68 [32];
  undefined **local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  local_6c = (undefined4)(0xffffffff);
  puStack_70 = (undefined1 *)(LAB_115cde25);
  local_74 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_74);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)local_68);
  iVar4 = (int)(thunk_FUN_10eac8b0());
  local_8 = (undefined4)(DAT_121a23a8);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23b8);
  local_6c = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23b0);
  *(unsigned char *)((char *)&local_6c + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23b4);
  *(unsigned char *)((char *)&local_6c + 0) = 2;
  thunk_FUN_105f5920(&local_8);
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_44 = (undefined4)(0);
  iStack_40 = (int)(0);
  uStack_3c = (undefined4)(0);
  iStack_38 = (int)(0);
  local_34 = (undefined4 *)((undefined4 *)0x0);
  local_30 = (undefined4 *)((undefined4 *)0x0);
  local_2c = (int)(0);
  *(unsigned char *)((char *)&local_6c + 0) = 4;
  piVar5 = (int *)((int *)thunk_FUN_106190a0(iVar4 == 3,local_68));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(iVar4 == 2,local_94));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_b4));
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(5)));
  thunk_FUN_10ebc1e0();
  ppuVar2 = (undefined **)(local_28);
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))());
  uVar3 = (undefined1)(thunk_FUN_10765a30(uVar6));
  piVar5 = (int *)((int *)(*(code *)ppuVar2[2])(uVar3));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_d4));
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))());
  thunk_FUN_105f5a00(uVar6);
  puVar1 = (undefined4 *)(local_10);
  puVar8 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar7 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_14);
    if (0xfff < uVar7) {
      puVar8 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar8))) goto LAB_1066869c;
    }
    thunk_FUN_1148a50e(puVar8,uVar7);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar7 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar4 = (int)(iStack_20);
    if (0xfff < uVar7) {
      iVar4 = (int)(*(int *)(iStack_20 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_20 - iVar4) - 4U) goto LAB_1066869c;
    }
    thunk_FUN_1148a50e(iVar4,uVar7);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  puVar1 = (undefined4 *)(local_30);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  puVar8 = (undefined4 *)(local_34);
  if (local_34 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar7 = (uint)(local_2c - (int)local_34 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_34);
    if (0xfff < uVar7) {
      puVar8 = (undefined4 *)((undefined4 *)local_34[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_34 + (-4 - (int)puVar8))) goto LAB_1066869c;
    }
    thunk_FUN_1148a50e(puVar8,uVar7);
    local_34 = (undefined4 *)((undefined4 *)0x0);
    local_30 = (undefined4 *)((undefined4 *)0x0);
    local_2c = (int)(0);
  }
  if (iStack_40 != 0) {
    uVar7 = (uint)(iStack_38 - iStack_40 & 0xfffffffc);
    iVar4 = (int)(iStack_40);
    if (0xfff < uVar7) {
      iVar4 = (int)(*(int *)(iStack_40 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_40 - iVar4) - 4U) {
LAB_1066869c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar7);
    iStack_40 = (int)(0);
    uStack_3c = (undefined4)(0);
    iStack_38 = (int)(0);
  }
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_74);
  return (undefined4)(param_1);
}


// Reference entry 10669020; body size 652 bytes.
#line 1 "ENTRY_10669020"

undefined4 __stdcall FUN_10669020(undefined4 param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  void *local_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  undefined1 local_6c [32];
  undefined1 local_4c [32];
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  int *local_8;
  
  local_70 = (undefined4)(0xffffffff);
  puStack_74 = (undefined1 *)(LAB_115cdfcd);
  local_78 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_78);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)local_6c);
  thunk_FUN_10cf34e0(&local_8);
  local_70 = (undefined4)(0);
  local_2c = (int)(thunk_FUN_10c95170());
  local_70 = (undefined4)(1);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  local_8 = (int *)(DAT_121a23a8);
  local_70 = (undefined4)(0xffffffff);
  thunk_FUN_105f5920(&local_8);
  local_8 = (int *)(DAT_121a23f8);
  local_70 = (undefined4)(2);
  thunk_FUN_105f5920(&local_8);
  local_8 = (int *)(DAT_121a23f4);
  *(unsigned char *)((char *)&local_70 + 0) = 3;
  thunk_FUN_105f5920(&local_8);
  local_8 = (int *)(DAT_121a23b8);
  *(unsigned char *)((char *)&local_70 + 0) = 4;
  thunk_FUN_105f5920(&local_8);
  local_8 = (int *)(DAT_121a23ac);
  *(unsigned char *)((char *)&local_70 + 0) = 5;
  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  local_70 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_70 + 1)) << 8 | (uint)(7)));
  thunk_FUN_10eb41c0();
  ppuVar1 = (undefined **)(local_28);
  uVar3 = (undefined1)(thunk_FUN_10eace50(local_4c));
  piVar4 = (int *)((int *)(*(code *)ppuVar1[2])(uVar3));
  thunk_FUN_10ebc1e0();
  iVar7 = (int)(*piVar4);
  uVar3 = (undefined1)(thunk_FUN_10777470(local_6c));
  piVar4 = (int *)((int *)(**(code **)(iVar7 + 0xc))(uVar3));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(local_2c == 4,local_98));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(local_2c == 6,local_b8));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0x10))(local_d8));
  uVar5 = (undefined4)((**(code **)(*piVar4 + 4))());
  thunk_FUN_105f5a00(uVar5);
  puVar2 = (undefined4 *)(local_10);
  puVar8 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar2; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar6 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_14);
    if (0xfff < uVar6) {
      puVar8 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar8))) goto LAB_10669241;
    }
    thunk_FUN_1148a50e(puVar8,uVar6);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar6 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar7 = (int)(iStack_20);
    if (0xfff < uVar6) {
      iVar7 = (int)(*(int *)(iStack_20 + -4));
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (iStack_20 - iVar7) - 4U) {
LAB_10669241:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar7,uVar6);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_78);
  return (undefined4)(param_1);
}


// Reference entry 10669350; body size 783 bytes.
#line 1 "ENTRY_10669350"

undefined4 __stdcall FUN_10669350(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 local_d4 [32];
  undefined1 local_b4 [32];
  undefined1 local_94 [32];
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined1 local_68 [32];
  undefined **local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  local_6c = (undefined4)(0xffffffff);
  puStack_70 = (undefined1 *)(LAB_115ce035);
  local_74 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_74);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)local_68);
  iVar4 = (int)(thunk_FUN_10eac8b0());
  local_8 = (undefined4)(DAT_121a23a8);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23ac);
  local_6c = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23b0);
  *(unsigned char *)((char *)&local_6c + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23b4);
  *(unsigned char *)((char *)&local_6c + 0) = 2;
  thunk_FUN_105f5920(&local_8);
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_44 = (undefined4)(0);
  iStack_40 = (int)(0);
  uStack_3c = (undefined4)(0);
  iStack_38 = (int)(0);
  local_34 = (undefined4 *)((undefined4 *)0x0);
  local_30 = (undefined4 *)((undefined4 *)0x0);
  local_2c = (int)(0);
  *(unsigned char *)((char *)&local_6c + 0) = 4;
  piVar5 = (int *)((int *)thunk_FUN_106190a0(iVar4 == 3,local_68));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(iVar4 == 2,local_94));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_b4));
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(5)));
  thunk_FUN_10ebc1e0();
  ppuVar2 = (undefined **)(local_28);
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))());
  uVar3 = (undefined1)(thunk_FUN_1077d290(uVar6));
  piVar5 = (int *)((int *)(*(code *)ppuVar2[2])(uVar3));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_d4));
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))());
  thunk_FUN_105f5a00(uVar6);
  puVar1 = (undefined4 *)(local_10);
  puVar8 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar7 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_14);
    if (0xfff < uVar7) {
      puVar8 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar8))) goto LAB_106695fc;
    }
    thunk_FUN_1148a50e(puVar8,uVar7);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar7 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar4 = (int)(iStack_20);
    if (0xfff < uVar7) {
      iVar4 = (int)(*(int *)(iStack_20 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_20 - iVar4) - 4U) goto LAB_106695fc;
    }
    thunk_FUN_1148a50e(iVar4,uVar7);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  puVar1 = (undefined4 *)(local_30);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  puVar8 = (undefined4 *)(local_34);
  if (local_34 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar7 = (uint)(local_2c - (int)local_34 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_34);
    if (0xfff < uVar7) {
      puVar8 = (undefined4 *)((undefined4 *)local_34[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_34 + (-4 - (int)puVar8))) goto LAB_106695fc;
    }
    thunk_FUN_1148a50e(puVar8,uVar7);
    local_34 = (undefined4 *)((undefined4 *)0x0);
    local_30 = (undefined4 *)((undefined4 *)0x0);
    local_2c = (int)(0);
  }
  if (iStack_40 != 0) {
    uVar7 = (uint)(iStack_38 - iStack_40 & 0xfffffffc);
    iVar4 = (int)(iStack_40);
    if (0xfff < uVar7) {
      iVar4 = (int)(*(int *)(iStack_40 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_40 - iVar4) - 4U) {
LAB_106695fc:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar7);
    iStack_40 = (int)(0);
    uStack_3c = (undefined4)(0);
    iStack_38 = (int)(0);
  }
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_74);
  return (undefined4)(param_1);
}


// Reference entry 1066a680; body size 519 bytes.
#line 1 "ENTRY_1066a680"

undefined4 __stdcall FUN_1066a680(undefined4 param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 local_98 [32];
  void *local_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  undefined1 local_6c [32];
  undefined1 local_4c [32];
  int *local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  local_70 = (undefined4)(0xffffffff);
  puStack_74 = (undefined1 *)(LAB_115ce2fd);
  local_78 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)local_6c);
  ExceptionList = (void *)(&local_78);
  local_8 = (undefined4)(DAT_121a23cc);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23dc);
  local_70 = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23e8);
  *(unsigned char *)((char *)&local_70 + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  *(unsigned char *)((char *)&local_70 + 0) = 3;
  thunk_FUN_10eb41c0(uVar4);
  thunk_FUN_10cf34e0(&local_2c);
  ppuVar1 = (undefined **)(local_28);
  *(unsigned char *)((char *)&local_70 + 0) = 4;
  uVar3 = (undefined1)(thunk_FUN_10c9b4c0(local_4c));
  piVar5 = (int *)((int *)(*(code *)ppuVar1[2])(uVar3));
  thunk_FUN_10ebc1e0();
  iVar7 = (int)(*piVar5);
  uVar3 = (undefined1)(thunk_FUN_1083d1a0(local_6c));
  piVar5 = (int *)((int *)(**(code **)(iVar7 + 0xc))(uVar3));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_98));
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))());
  thunk_FUN_105f5a00(uVar6);
  local_70 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_70 + 1)) << 8 | (uint)(5)));
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }
  puVar2 = (undefined4 *)(local_10);
  puVar8 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar2; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar4 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_14);
    if (0xfff < uVar4) {
      puVar8 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar8))) goto LAB_1066a82c;
    }
    thunk_FUN_1148a50e(puVar8,uVar4);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar4 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar7 = (int)(iStack_20);
    if (0xfff < uVar4) {
      iVar7 = (int)(*(int *)(iStack_20 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_20 - iVar7) - 4U) {
LAB_1066a82c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar7,uVar4);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_78);
  return (undefined4)(param_1);
}


// Reference entry 1066a910; body size 775 bytes.
#line 1 "ENTRY_1066a910"

undefined4 __stdcall FUN_1066a910(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 local_d4 [32];
  undefined1 local_b4 [32];
  undefined1 local_94 [32];
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined1 local_68 [32];
  undefined **local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  local_6c = (undefined4)(0xffffffff);
  puStack_70 = (undefined1 *)(LAB_115ce365);
  local_74 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_74);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)local_68);
  iVar3 = (int)(thunk_FUN_10eac8b0());
  local_8 = (undefined4)(DAT_121a23a8);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23ac);
  local_6c = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23b0);
  *(unsigned char *)((char *)&local_6c + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23b4);
  *(unsigned char *)((char *)&local_6c + 0) = 2;
  thunk_FUN_105f5920(&local_8);
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_44 = (undefined4)(0);
  iStack_40 = (int)(0);
  uStack_3c = (undefined4)(0);
  iStack_38 = (int)(0);
  local_34 = (undefined4 *)((undefined4 *)0x0);
  local_30 = (undefined4 *)((undefined4 *)0x0);
  local_2c = (int)(0);
  *(unsigned char *)((char *)&local_6c + 0) = 4;
  piVar4 = (int *)((int *)thunk_FUN_106190a0(iVar3 == 3,local_68));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(iVar3 == 2,local_94));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0x10))(local_b4));
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(5)));
  thunk_FUN_10ebc1e0();
  ppuVar2 = (undefined **)(local_28);
  uVar5 = (undefined4)((**(code **)(*piVar4 + 4))());
  piVar4 = (int *)((int *)(*(code *)ppuVar2[2])(1,uVar5));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0x10))(local_d4));
  uVar5 = (undefined4)((**(code **)(*piVar4 + 4))());
  thunk_FUN_105f5a00(uVar5);
  puVar1 = (undefined4 *)(local_10);
  puVar7 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar7) != puVar1; puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar6 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_14);
    if (0xfff < uVar6) {
      puVar7 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar7))) goto LAB_1066abb4;
    }
    thunk_FUN_1148a50e(puVar7,uVar6);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar6 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar3 = (int)(iStack_20);
    if (0xfff < uVar6) {
      iVar3 = (int)(*(int *)(iStack_20 + -4));
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (iStack_20 - iVar3) - 4U) goto LAB_1066abb4;
    }
    thunk_FUN_1148a50e(iVar3,uVar6);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  puVar1 = (undefined4 *)(local_30);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  puVar7 = (undefined4 *)(local_34);
  if (local_34 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar7) != puVar1; puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar6 = (uint)(local_2c - (int)local_34 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_34);
    if (0xfff < uVar6) {
      puVar7 = (undefined4 *)((undefined4 *)local_34[-1]);
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (uint)((int)local_34 + (-4 - (int)puVar7))) goto LAB_1066abb4;
    }
    thunk_FUN_1148a50e(puVar7,uVar6);
    local_34 = (undefined4 *)((undefined4 *)0x0);
    local_30 = (undefined4 *)((undefined4 *)0x0);
    local_2c = (int)(0);
  }
  if (iStack_40 != 0) {
    uVar6 = (uint)(iStack_38 - iStack_40 & 0xfffffffc);
    iVar3 = (int)(iStack_40);
    if (0xfff < uVar6) {
      iVar3 = (int)(*(int *)(iStack_40 + -4));
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (iStack_40 - iVar3) - 4U) {
LAB_1066abb4:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar6);
    iStack_40 = (int)(0);
    uStack_3c = (undefined4)(0);
    iStack_38 = (int)(0);
  }
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_74);
  return (undefined4)(param_1);
}


// Reference entry 1066ace0; body size 679 bytes.
#line 1 "ENTRY_1066ace0"

undefined4 __stdcall FUN_1066ace0(undefined4 param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 local_f4 [32];
  undefined1 local_d4 [32];
  undefined1 local_b4 [32];
  undefined1 local_94 [32];
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  local_6c = (undefined4)(0xffffffff);
  puStack_70 = (undefined1 *)(LAB_115ce3e0);
  local_74 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_74);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)local_68);
  iVar4 = (int)(thunk_FUN_10eac8c0());
  local_8 = (undefined4)(DAT_121a239c);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23a4);
  local_6c = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2398);
  *(unsigned char *)((char *)&local_6c + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a2394);
  *(unsigned char *)((char *)&local_6c + 0) = 2;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23a0);
  *(unsigned char *)((char *)&local_6c + 0) = 3;
  thunk_FUN_105f5920(&local_8);
  *(unsigned char *)((char *)&local_6c + 0) = 4;
  if ((iVar4 == 4) || (iVar4 == 5)) {
    uVar6 = (undefined4)(1);
  }
  else {
    uVar6 = (undefined4)(0);
  }
  local_8 = (undefined4)(DAT_121a237c);
  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(6)));
  thunk_FUN_10eb41c0();
  ppuVar1 = (undefined **)(local_28);
  uVar3 = (undefined1)(thunk_FUN_10cf5140(local_48));
  piVar5 = (int *)((int *)(*(code *)ppuVar1[2])(uVar3));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(uVar6,local_68));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(iVar4 == 1,local_94));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(iVar4 == 2,local_b4));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(iVar4 == 3,local_d4));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(iVar4 == 6,local_f4));
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))());
  thunk_FUN_105f5a00(uVar6);
  puVar2 = (undefined4 *)(local_10);
  puVar8 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar2; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar7 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_14);
    if (0xfff < uVar7) {
      puVar8 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar8))) goto LAB_1066af11;
    }
    thunk_FUN_1148a50e(puVar8,uVar7);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar7 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar4 = (int)(iStack_20);
    if (0xfff < uVar7) {
      iVar4 = (int)(*(int *)(iStack_20 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_20 - iVar4) - 4U) {
LAB_1066af11:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar7);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_74);
  return (undefined4)(param_1);
}


// Reference entry 1066b5d0; body size 519 bytes.
#line 1 "ENTRY_1066b5d0"

undefined4 __stdcall FUN_1066b5d0(undefined4 param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 local_98 [32];
  void *local_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  undefined1 local_6c [32];
  undefined1 local_4c [32];
  int *local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  local_70 = (undefined4)(0xffffffff);
  puStack_74 = (undefined1 *)(LAB_115ce4ed);
  local_78 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)local_6c);
  ExceptionList = (void *)(&local_78);
  local_8 = (undefined4)(DAT_121a23a8);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23f4);
  local_70 = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23b8);
  *(unsigned char *)((char *)&local_70 + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  *(unsigned char *)((char *)&local_70 + 0) = 3;
  thunk_FUN_10ebc1e0(uVar4);
  ppuVar1 = (undefined **)(local_28);
  uVar3 = (undefined1)(thunk_FUN_108b8b70(local_4c));
  piVar5 = (int *)((int *)(*(code *)ppuVar1[2])(uVar3));
  thunk_FUN_10eb41c0();
  thunk_FUN_10cf34e0(&local_2c);
  iVar8 = (int)(*piVar5);
  *(unsigned char *)((char *)&local_70 + 0) = 4;
  iVar6 = (int)(thunk_FUN_10c95170(local_6c));
  piVar5 = (int *)((int *)(**(code **)(iVar8 + 0xc))(iVar6 == 2));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_98));
  uVar7 = (undefined4)((**(code **)(*piVar5 + 4))());
  thunk_FUN_105f5a00(uVar7);
  local_70 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_70 + 1)) << 8 | (uint)(5)));
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }
  puVar2 = (undefined4 *)(local_10);
  puVar9 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar9) != puVar2; puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar4 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar9 = (undefined4 *)(local_14);
    if (0xfff < uVar4) {
      puVar9 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar9))) goto LAB_1066b77c;
    }
    thunk_FUN_1148a50e(puVar9,uVar4);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar4 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar8 = (int)(iStack_20);
    if (0xfff < uVar4) {
      iVar8 = (int)(*(int *)(iStack_20 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_20 - iVar8) - 4U) {
LAB_1066b77c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar8,uVar4);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_78);
  return (undefined4)(param_1);
}


// Reference entry 1066bc00; body size 345 bytes.
#line 1 "ENTRY_1066bc00"

undefined4 __stdcall FUN_1066bc00(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_54 [32];
  undefined **local_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115ce5b5);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a23d0);
  thunk_FUN_105f5920(&local_14);
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_30 = (undefined4)(0);
  iStack_2c = (int)(0);
  uStack_28 = (undefined4)(0);
  iStack_24 = (int)(0);
  local_20 = (undefined4 *)((undefined4 *)0x0);
  local_1c = (undefined4 *)((undefined4 *)0x0);
  local_18 = (int)(0);
  local_8 = (undefined4)(1);
  piVar3 = (int *)((int *)thunk_FUN_10605020(local_54));
  uVar4 = (undefined4)((**(code **)(*piVar3 + 4))(uVar2));
  thunk_FUN_105f5a00(uVar4);
  puVar1 = (undefined4 *)(local_1c);
  puVar6 = (undefined4 *)(local_20);
  if (local_20 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar6) != puVar1; puVar6 = puVar6 + 8) {
      (**(code **)*puVar6)(0);
    }
    uVar2 = (uint)(local_18 - (int)local_20 & 0xffffffe0);
    puVar6 = (undefined4 *)(local_20);
    if (0xfff < uVar2) {
      puVar6 = (undefined4 *)((undefined4 *)local_20[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_1066bd0f;
    }
    thunk_FUN_1148a50e(puVar6,uVar2);
    local_20 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)((undefined4 *)0x0);
    local_18 = (int)(0);
  }
  if (iStack_2c != 0) {
    uVar2 = (uint)(iStack_24 - iStack_2c & 0xfffffffc);
    iVar5 = (int)(iStack_2c);
    if (0xfff < uVar2) {
      iVar5 = (int)(*(int *)(iStack_2c + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iStack_2c - iVar5) - 4U) {
LAB_1066bd0f:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar2);
    iStack_2c = (int)(0);
    uStack_28 = (undefined4)(0);
    iStack_24 = (int)(0);
  }
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 1066c5d0; body size 414 bytes.
#line 1 "ENTRY_1066c5d0"

undefined4 __stdcall FUN_1066c5d0(undefined4 param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 local_74 [32];
  undefined1 local_54 [32];
  undefined **local_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115ce74d);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a23d4);
  thunk_FUN_105f5920(&local_14);
  local_14 = (undefined4)(DAT_121a23e0);
  local_8 = (undefined4)(0);
  thunk_FUN_105f5920(&local_14);
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_30 = (undefined4)(0);
  iStack_2c = (int)(0);
  uStack_28 = (undefined4)(0);
  iStack_24 = (int)(0);
  local_20 = (undefined4 *)((undefined4 *)0x0);
  local_1c = (undefined4 *)((undefined4 *)0x0);
  local_18 = (int)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_10eb41c0(uVar4);
  ppuVar1 = (undefined **)(local_34);
  uVar3 = (undefined1)(thunk_FUN_10eace60(local_54));
  piVar5 = (int *)((int *)(*(code *)ppuVar1[2])(uVar3));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_74));
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))());
  thunk_FUN_105f5a00(uVar6);
  puVar2 = (undefined4 *)(local_1c);
  puVar8 = (undefined4 *)(local_20);
  if (local_20 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar2; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar4 = (uint)(local_18 - (int)local_20 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_20);
    if (0xfff < uVar4) {
      puVar8 = (undefined4 *)((undefined4 *)local_20[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar8))) goto LAB_1066c71c;
    }
    thunk_FUN_1148a50e(puVar8,uVar4);
    local_20 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)((undefined4 *)0x0);
    local_18 = (int)(0);
  }
  if (iStack_2c != 0) {
    uVar4 = (uint)(iStack_24 - iStack_2c & 0xfffffffc);
    iVar7 = (int)(iStack_2c);
    if (0xfff < uVar4) {
      iVar7 = (int)(*(int *)(iStack_2c + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_2c - iVar7) - 4U) {
LAB_1066c71c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar7,uVar4);
    iStack_2c = (int)(0);
    uStack_28 = (undefined4)(0);
    iStack_24 = (int)(0);
  }
  local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 1066c7e0; body size 576 bytes.
#line 1 "ENTRY_1066c7e0"

undefined4 __stdcall FUN_1066c7e0(undefined4 param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  void *local_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  undefined1 local_6c [32];
  undefined1 local_4c [32];
  int *local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  local_70 = (undefined4)(0xffffffff);
  puStack_74 = (undefined1 *)(LAB_115ce7b5);
  local_78 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)local_6c);
  ExceptionList = (void *)(&local_78);
  local_8 = (undefined4)(DAT_121a23cc);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23dc);
  local_70 = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23c8);
  *(unsigned char *)((char *)&local_70 + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23e8);
  *(unsigned char *)((char *)&local_70 + 0) = 2;
  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  *(unsigned char *)((char *)&local_70 + 0) = 4;
  thunk_FUN_10eb41c0(uVar4);
  thunk_FUN_10cf34e0(&local_2c);
  ppuVar1 = (undefined **)(local_28);
  *(unsigned char *)((char *)&local_70 + 0) = 5;
  uVar3 = (undefined1)(thunk_FUN_10c9b4c0(local_4c));
  piVar5 = (int *)((int *)(*(code *)ppuVar1[2])(uVar3));
  iVar6 = (int)(thunk_FUN_10ebc1e0());
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(*(undefined1 *)(iVar6 + 0x100),local_6c));
  thunk_FUN_10ebc1e0();
  iVar6 = (int)(*piVar5);
  uVar3 = (undefined1)(thunk_FUN_10eace70(local_98));
  piVar5 = (int *)((int *)(**(code **)(iVar6 + 0xc))(uVar3));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_b8));
  uVar7 = (undefined4)((**(code **)(*piVar5 + 4))());
  thunk_FUN_105f5a00(uVar7);
  local_70 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_70 + 1)) << 8 | (uint)(6)));
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }
  puVar2 = (undefined4 *)(local_10);
  puVar8 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar2; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar4 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_14);
    if (0xfff < uVar4) {
      puVar8 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar8))) goto LAB_1066c9bd;
    }
    thunk_FUN_1148a50e(puVar8,uVar4);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar4 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar6 = (int)(iStack_20);
    if (0xfff < uVar4) {
      iVar6 = (int)(*(int *)(iStack_20 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_20 - iVar6) - 4U) {
LAB_1066c9bd:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar6,uVar4);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_78);
  return (undefined4)(param_1);
}


// Reference entry 1066cab0; body size 783 bytes.
#line 1 "ENTRY_1066cab0"

undefined4 __stdcall FUN_1066cab0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 local_d4 [32];
  undefined1 local_b4 [32];
  undefined1 local_94 [32];
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined1 local_68 [32];
  undefined **local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  local_6c = (undefined4)(0xffffffff);
  puStack_70 = (undefined1 *)(LAB_115ce825);
  local_74 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_74);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)local_68);
  iVar4 = (int)(thunk_FUN_10eac8b0());
  local_8 = (undefined4)(DAT_121a23a8);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23ac);
  local_6c = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23b0);
  *(unsigned char *)((char *)&local_6c + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23b4);
  *(unsigned char *)((char *)&local_6c + 0) = 2;
  thunk_FUN_105f5920(&local_8);
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_44 = (undefined4)(0);
  iStack_40 = (int)(0);
  uStack_3c = (undefined4)(0);
  iStack_38 = (int)(0);
  local_34 = (undefined4 *)((undefined4 *)0x0);
  local_30 = (undefined4 *)((undefined4 *)0x0);
  local_2c = (int)(0);
  *(unsigned char *)((char *)&local_6c + 0) = 4;
  piVar5 = (int *)((int *)thunk_FUN_106190a0(iVar4 == 3,local_68));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(iVar4 == 2,local_94));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_b4));
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(5)));
  thunk_FUN_10ebc1e0();
  ppuVar2 = (undefined **)(local_28);
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))());
  uVar3 = (undefined1)(thunk_FUN_10a47030(uVar6));
  piVar5 = (int *)((int *)(*(code *)ppuVar2[2])(uVar3));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_d4));
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))());
  thunk_FUN_105f5a00(uVar6);
  puVar1 = (undefined4 *)(local_10);
  puVar8 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar7 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_14);
    if (0xfff < uVar7) {
      puVar8 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar8))) goto LAB_1066cd5c;
    }
    thunk_FUN_1148a50e(puVar8,uVar7);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar7 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar4 = (int)(iStack_20);
    if (0xfff < uVar7) {
      iVar4 = (int)(*(int *)(iStack_20 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_20 - iVar4) - 4U) goto LAB_1066cd5c;
    }
    thunk_FUN_1148a50e(iVar4,uVar7);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  puVar1 = (undefined4 *)(local_30);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  puVar8 = (undefined4 *)(local_34);
  if (local_34 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar7 = (uint)(local_2c - (int)local_34 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_34);
    if (0xfff < uVar7) {
      puVar8 = (undefined4 *)((undefined4 *)local_34[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_34 + (-4 - (int)puVar8))) goto LAB_1066cd5c;
    }
    thunk_FUN_1148a50e(puVar8,uVar7);
    local_34 = (undefined4 *)((undefined4 *)0x0);
    local_30 = (undefined4 *)((undefined4 *)0x0);
    local_2c = (int)(0);
  }
  if (iStack_40 != 0) {
    uVar7 = (uint)(iStack_38 - iStack_40 & 0xfffffffc);
    iVar4 = (int)(iStack_40);
    if (0xfff < uVar7) {
      iVar4 = (int)(*(int *)(iStack_40 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_40 - iVar4) - 4U) {
LAB_1066cd5c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar7);
    iStack_40 = (int)(0);
    uStack_3c = (undefined4)(0);
    iStack_38 = (int)(0);
  }
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_74);
  return (undefined4)(param_1);
}


// Reference entry 1066ce90; body size 783 bytes.
#line 1 "ENTRY_1066ce90"

undefined4 __stdcall FUN_1066ce90(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 local_d4 [32];
  undefined1 local_b4 [32];
  undefined1 local_94 [32];
  void *local_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined1 local_68 [32];
  undefined **local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  local_6c = (undefined4)(0xffffffff);
  puStack_70 = (undefined1 *)(LAB_115ce895);
  local_74 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_74);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)local_68);
  iVar4 = (int)(thunk_FUN_10eac8b0());
  local_8 = (undefined4)(DAT_121a23a8);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23ac);
  local_6c = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23b0);
  *(unsigned char *)((char *)&local_6c + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a23b4);
  *(unsigned char *)((char *)&local_6c + 0) = 2;
  thunk_FUN_105f5920(&local_8);
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_44 = (undefined4)(0);
  iStack_40 = (int)(0);
  uStack_3c = (undefined4)(0);
  iStack_38 = (int)(0);
  local_34 = (undefined4 *)((undefined4 *)0x0);
  local_30 = (undefined4 *)((undefined4 *)0x0);
  local_2c = (int)(0);
  *(unsigned char *)((char *)&local_6c + 0) = 4;
  piVar5 = (int *)((int *)thunk_FUN_106190a0(iVar4 == 3,local_68));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(iVar4 == 2,local_94));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_b4));
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(5)));
  thunk_FUN_10ebc1e0();
  ppuVar2 = (undefined **)(local_28);
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))());
  uVar3 = (undefined1)(thunk_FUN_10a4b100(uVar6));
  piVar5 = (int *)((int *)(*(code *)ppuVar2[2])(uVar3));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_d4));
  uVar6 = (undefined4)((**(code **)(*piVar5 + 4))());
  thunk_FUN_105f5a00(uVar6);
  puVar1 = (undefined4 *)(local_10);
  puVar8 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar7 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_14);
    if (0xfff < uVar7) {
      puVar8 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar8))) goto LAB_1066d13c;
    }
    thunk_FUN_1148a50e(puVar8,uVar7);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar7 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar4 = (int)(iStack_20);
    if (0xfff < uVar7) {
      iVar4 = (int)(*(int *)(iStack_20 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_20 - iVar4) - 4U) goto LAB_1066d13c;
    }
    thunk_FUN_1148a50e(iVar4,uVar7);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  puVar1 = (undefined4 *)(local_30);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  puVar8 = (undefined4 *)(local_34);
  if (local_34 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar7 = (uint)(local_2c - (int)local_34 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_34);
    if (0xfff < uVar7) {
      puVar8 = (undefined4 *)((undefined4 *)local_34[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_34 + (-4 - (int)puVar8))) goto LAB_1066d13c;
    }
    thunk_FUN_1148a50e(puVar8,uVar7);
    local_34 = (undefined4 *)((undefined4 *)0x0);
    local_30 = (undefined4 *)((undefined4 *)0x0);
    local_2c = (int)(0);
  }
  if (iStack_40 != 0) {
    uVar7 = (uint)(iStack_38 - iStack_40 & 0xfffffffc);
    iVar4 = (int)(iStack_40);
    if (0xfff < uVar7) {
      iVar4 = (int)(*(int *)(iStack_40 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_40 - iVar4) - 4U) {
LAB_1066d13c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar7);
    iStack_40 = (int)(0);
    uStack_3c = (undefined4)(0);
    iStack_38 = (int)(0);
  }
  local_48 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_74);
  return (undefined4)(param_1);
}


// Reference entry 1066e450; body size 156 bytes.
#line 1 "ENTRY_1066e450"

int * __thiscall Recovered_Bulk::FUN_1066e450(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115cec3d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (int)(0);
  param_2[1] = 0;
  param_2[2] = 0;
  iVar4 = (int)(*(int *)(param_1 + 0x114));
  iVar1 = (int)(*(int *)(param_1 + 0x110));
  if (iVar1 != iVar4) {
    iVar5 = (int)(iVar4 - iVar1 >> 3);
    iVar3 = (int)(thunk_FUN_10370f20(iVar5));
    *param_2 = (int)(iVar3);
    param_2[1] = iVar3;
    param_2[2] = iVar3 + iVar5 * 8;
    local_8 = (undefined4)(0);
    iVar4 = (int)(thunk_FUN_10357c10(iVar1,iVar4,*param_2,param_2,uVar2));
    param_2[1] = iVar4;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 10678bd0; body size 274 bytes.
#line 1 "ENTRY_10678bd0"

undefined1 FUN_10678bd0(void)

{
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d06e5);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uVar1 = (undefined1)(0);
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(&local_14));
  piVar6 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(0);
  *piVar3 = (int)(0);
  if (piVar6 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar6 != (int *)0x0) {
    uVar4 = (undefined4)(thunk_FUN_10c97650());
    uVar5 = (undefined4)(thunk_FUN_10c97670());
    piVar6 = (int *)((int *)thunk_FUN_10436cd0(&local_1c));
    local_18 = (int *)((int *)*piVar6);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    *piVar6 = (int)(0);
    if (local_18 == (int *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      piVar6 = (int *)((int *)(**(code **)(*local_18 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    local_14 = (int *)(piVar6);
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    uVar1 = (undefined1)(thunk_FUN_104379a0(uVar4,uVar5));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))();
    }
  }
  local_8 = (undefined4)(9);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 10678d50; body size 120 bytes.
#line 1 "ENTRY_10678d50"

void FUN_10678d50(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10678df0; body size 81 bytes.
#line 1 "ENTRY_10678df0"

void FUN_10678df0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10678e60; body size 120 bytes.
#line 1 "ENTRY_10678e60"

void FUN_10678e60(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10678f00; body size 120 bytes.
#line 1 "ENTRY_10678f00"

void FUN_10678f00(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10678fe0; body size 656 bytes.
#line 1 "ENTRY_10678fe0"

void FUN_10678fe0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d072d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar3 = (int)(thunk_FUN_10eb41b0(uVar2));
  if (iVar3 == 0) {
    iVar3 = (int)(0);
  }
  else {
    iVar3 = (int)(iVar3 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar3);
  thunk_FUN_10cf3630(iVar3);
  iVar3 = (int)(thunk_FUN_10eb41b0(uVar2));
  if (iVar3 == 0) {
    iVar3 = (int)(0);
  }
  else {
    iVar3 = (int)(iVar3 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar3);
  thunk_FUN_10cf5250(iVar3);
  iVar3 = (int)(thunk_FUN_10eb41b0());
  if (iVar3 == 0) {
    iVar3 = (int)(0);
  }
  else {
    iVar3 = (int)(iVar3 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar3);
  thunk_FUN_10ead100(iVar3);
  thunk_FUN_10eb41b0();
  iVar3 = (int)(thunk_FUN_106dbf00(DAT_121a23a8));
  thunk_FUN_105a26b0();
  iVar4 = (int)(thunk_FUN_10df2df0());
  thunk_FUN_10eb41b0();
  cVar1 = (char)(thunk_FUN_10cf5140());
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10ebc1d0());
    *(undefined4 *)(iVar3 + 0x118) = 0;
    ExceptionList = (void *)(local_10);
    return;
  }
  if (1 < iVar3) {
    thunk_FUN_10eb41b0();
    thunk_FUN_10cf34e0(&local_14);
    local_8 = (undefined4)(0);
    thunk_FUN_10c9c090(4);
    local_8 = (undefined4)(1);
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(0xffffffff);
    iVar3 = (int)(thunk_FUN_10ebc1d0());
    *(undefined4 *)(iVar3 + 0x118) = 5;
    ExceptionList = (void *)(local_10);
    return;
  }
  if ((((iVar4 != DAT_121a2394) && (iVar4 != DAT_121a2398)) && (iVar4 != DAT_121a239c)) &&
     ((iVar4 != DAT_121a23a4 && (iVar4 != DAT_121a23a0)))) {
    if (iVar4 == DAT_121a23b8) {
      thunk_FUN_10eb41b0();
      iVar3 = (int)(thunk_FUN_10eac8c0());
      if (iVar3 == 5) {
        thunk_FUN_10eb41b0();
        iVar3 = (int)(thunk_FUN_10eacdc0());
        if (iVar3 != 5) {
          iVar3 = (int)(thunk_FUN_10ebc1d0());
          *(undefined4 *)(iVar3 + 0x118) = 1;
          ExceptionList = (void *)(local_10);
          return;
        }
      }
    }
    thunk_FUN_10eb41b0();
    cVar1 = (char)(thunk_FUN_10eaceb0());
    if (cVar1 != '\0') {
      thunk_FUN_10eb41b0();
      cVar1 = (char)(thunk_FUN_10eacd00());
      if (cVar1 == '\0') {
        iVar3 = (int)(thunk_FUN_10ebc1d0());
        *(undefined4 *)(iVar3 + 0x118) = 4;
        ExceptionList = (void *)(local_10);
        return;
      }
    }
    iVar3 = (int)(thunk_FUN_10ebc1d0());
    *(undefined4 *)(iVar3 + 0x118) = 3;
    ExceptionList = (void *)(local_10);
    return;
  }
  iVar3 = (int)(thunk_FUN_10ebc1d0());
  *(undefined4 *)(iVar3 + 0x118) = 2;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10679320; body size 120 bytes.
#line 1 "ENTRY_10679320"

void FUN_10679320(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 106793c0; body size 81 bytes.
#line 1 "ENTRY_106793c0"

void FUN_106793c0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10679430; body size 120 bytes.
#line 1 "ENTRY_10679430"

void FUN_10679430(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 106794d0; body size 120 bytes.
#line 1 "ENTRY_106794d0"

void FUN_106794d0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10679570; body size 219 bytes.
#line 1 "ENTRY_10679570"

void FUN_10679570(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_1c [12];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d076d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eb41b0(uVar1));
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10cf3630(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0(uVar1));
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10cf5250(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0());
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10ead100(iVar2);
  thunk_FUN_10eb41b0();
  uVar3 = (undefined4)(thunk_FUN_1066e450(local_1c));
  local_8 = (undefined4)(0);
  thunk_FUN_10ebc1d0(uVar3);
  thunk_FUN_108b4730(uVar3);
  thunk_FUN_1036e480();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10679690; body size 120 bytes.
#line 1 "ENTRY_10679690"

void FUN_10679690(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10679730; body size 81 bytes.
#line 1 "ENTRY_10679730"

void FUN_10679730(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 106797a0; body size 81 bytes.
#line 1 "ENTRY_106797a0"

void FUN_106797a0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10679810; body size 120 bytes.
#line 1 "ENTRY_10679810"

void FUN_10679810(void)

{
  undefined4 *puVar1;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d07ad);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb41b0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10cf34e0(&local_14));
  local_8 = (undefined4)(0);
  thunk_FUN_10ebc1d0();
  thunk_FUN_10972da0(*puVar1);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106798b0; body size 180 bytes.
#line 1 "ENTRY_106798b0"

void FUN_106798b0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_1c [12];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d07ed);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eb41b0(uVar1));
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10cf3630(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0(uVar1));
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10ead100(iVar2);
  thunk_FUN_10eb41b0();
  uVar3 = (undefined4)(thunk_FUN_1066e450(local_1c));
  local_8 = (undefined4)(0);
  thunk_FUN_10ebc1d0(uVar3);
  thunk_FUN_109a66c0(uVar3);
  thunk_FUN_1036e480();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106799a0; body size 158 bytes.
#line 1 "ENTRY_106799a0"

void FUN_106799a0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  thunk_FUN_10eb41b0();
  iVar1 = (int)(thunk_FUN_106dbf00(DAT_121a23a8));
  if (0 < iVar1) {
    iVar1 = (int)(thunk_FUN_10ebc1d0());
    *(undefined1 *)(iVar1 + 0x11a) = 1;
  }
  return;
}


// Reference entry 10679a70; body size 81 bytes.
#line 1 "ENTRY_10679a70"

void FUN_10679a70(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10679ae0; body size 81 bytes.
#line 1 "ENTRY_10679ae0"

void FUN_10679ae0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10679b50; body size 120 bytes.
#line 1 "ENTRY_10679b50"

void FUN_10679b50(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 10679bf0; body size 120 bytes.
#line 1 "ENTRY_10679bf0"

void FUN_10679bf0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf5250(iVar1);
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead100(iVar1);
  return;
}


// Reference entry 1067e790; body size 162 bytes.
#line 1 "ENTRY_1067e790"

void __stdcall FUN_1067e790(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d1545);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10eb41b0();
    thunk_FUN_10cf34e0(&param_1);
    local_8 = (undefined4)(1);
    thunk_FUN_10c9c090(3);
    local_8 = (undefined4)(2);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1067e8a0; body size 405 bytes.
#line 1 "ENTRY_1067e8a0"

void FUN_1067e8a0(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d1585);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_105a26b0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  iVar6 = (int)(thunk_FUN_10df2df0());
  if ((iVar6 == DAT_121a2368) || (iVar6 == DAT_121a236c)) {
    thunk_FUN_105a26c0();
    iVar7 = (int)(thunk_FUN_10df2e20());
    if (iVar7 == iVar6) {
      uVar8 = (undefined4)(1);
      thunk_FUN_10eb41b0(1);
      thunk_FUN_10ead8f0(uVar8);
    }
  }
  thunk_FUN_10eb41b0();
  iVar6 = (int)(thunk_FUN_10eac8b0());
  if (iVar6 == 3) {
    thunk_FUN_10eb41b0();
    uVar8 = (undefined4)(thunk_FUN_10cf34e0(&local_14));
    local_8 = (undefined4)(0);
    thunk_FUN_10351370(uVar8);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_1c != 0) {
      uVar8 = (undefined4)(5);
      thunk_FUN_101b5540(5);
      cVar3 = (char)(thunk_FUN_101b5e50(uVar8));
      if ((cVar3 == '\0') || (cVar3 = thunk_FUN_105a3210(), cVar3 != '\0')) {
        bVar1 = (bool)(false);
      }
      else {
        bVar1 = (bool)(true);
      }
      cVar3 = (char)(thunk_FUN_10c9c820());
      if ((cVar3 == '\0') || (cVar3 = thunk_FUN_105c2260(local_1c), cVar3 != '\0')) {
        bVar2 = (bool)(false);
      }
      else {
        bVar2 = (bool)(true);
      }
      if ((!bVar1) || (!bVar2)) {
        uVar8 = (undefined4)(5);
        thunk_FUN_10eb41b0(5);
        thunk_FUN_10cf5110(uVar8);
      }
      uVar8 = (undefined4)(6);
      thunk_FUN_101b5540(6);
      cVar3 = (char)(thunk_FUN_101b5de0(uVar8));
      cVar4 = (char)(thunk_FUN_10c9c440());
      cVar5 = (char)(thunk_FUN_10c9c740());
      if (((cVar4 != '\0') && (cVar3 == '\0')) && (cVar5 == '\0')) {
        uVar8 = (undefined4)(6);
        thunk_FUN_10eb41b0(6);
        thunk_FUN_10cf5110(uVar8);
      }
    }
    local_8 = (undefined4)(4);
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1067eae0; body size 295 bytes.
#line 1 "ENTRY_1067eae0"

void FUN_1067eae0(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  SCLibrary *pSVar4;
  undefined4 uVar5;
  int *piVar6;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d15d5);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSVar4 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  uVar5 = (undefined4)((**(code **)(**(int **)(*(int *)(pSVar4 + 0x4c) + 0xe8) + 4))(&local_14,0xd,uVar3));
  local_8 = (undefined4)(0);
  thunk_FUN_10225030(uVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (local_1c != (int *)0x0) {
    cVar2 = (char)((**(code **)(*local_1c + 0x34))());
    if (cVar2 != '\0') {
      bVar1 = (bool)(true);
      goto LAB_1067eb61;
    }
  }
  bVar1 = (bool)(false);
LAB_1067eb61:
  thunk_FUN_10eb41b0();
  cVar2 = (char)(thunk_FUN_10cf5140());
  if ((cVar2 != '\0') || (!bVar1)) {
    thunk_FUN_10eb41b0();
    piVar6 = (int *)((int *)thunk_FUN_10cf34e0(&local_20));
    local_18 = (int *)((int *)*piVar6);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    *piVar6 = (int)(0);
    if (local_18 == (int *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      piVar6 = (int *)((int *)(**(code **)(*local_18 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    local_14 = (int *)(piVar6);
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
    uVar5 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    thunk_FUN_10ee48c0(0);
    thunk_FUN_10ee2ec0(uVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))();
    }
  }
  local_8 = (undefined4)(9);
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1067ec50; body size 294 bytes.
#line 1 "ENTRY_1067ec50"

void __fastcall FUN_1067ec50(int param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d1625);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a2650);
  piVar4 = (int *)((int *)thunk_FUN_10cf34e0(&local_18));
  piVar1 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(0);
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar2 = (char)(thunk_FUN_10ead000());
  if ((cVar2 == '\0') && (piVar1 != (int *)0x0)) {
    iVar5 = (int)(thunk_FUN_106dbf00(DAT_121a23e0));
    iVar5 = (int)(thunk_FUN_106dbf00(DAT_121a23dc + iVar5 * 0xc));
    if (0 < iVar5) {
      thunk_FUN_106bbeb0(piVar1);
    }
  }
  thunk_FUN_10302280(param_1 + 0xa8,"Stopping Setup Announcements and clearing SonosNet info");
  thunk_FUN_106cf140();
  iVar5 = (int)(thunk_FUN_10eac8b0());
  if (iVar5 != 3) {
    thunk_FUN_106cf0f0();
  }
  uVar6 = (undefined4)(0);
  thunk_FUN_10ee48c0(0);
  thunk_FUN_10ee2ec0(uVar6);
  local_8 = (undefined4)(4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1067f510; body size 93 bytes.
#line 1 "ENTRY_1067f510"

int __thiscall Recovered_Bulk::FUN_1067f510(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d17dd);
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


// Reference entry 1067f650; body size 76 bytes.
#line 1 "ENTRY_1067f650"

void __fastcall FUN_1067f650(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d1850);
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


// Reference entry 10681930; body size 111 bytes.
#line 1 "ENTRY_10681930"

void FUN_10681930(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d1d80);
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


// Reference entry 10682c20; body size 84 bytes.
#line 1 "ENTRY_10682c20"

void FUN_10682c20(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d2010);
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


// Reference entry 10683ef0; body size 76 bytes.
#line 1 "ENTRY_10683ef0"

void __fastcall FUN_10683ef0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d23e0);
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


// Reference entry 106842f0; body size 96 bytes.
#line 1 "ENTRY_106842f0"

void __fastcall FUN_106842f0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10681930(*param_1,param_1[1],param_1);
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


// Reference entry 10684470; body size 69 bytes.
#line 1 "ENTRY_10684470"

void __fastcall FUN_10684470(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCReceiptSessionManager);
  DAT_121a24cc = (int)(0);
  thunk_FUN_10681ea0(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x1c);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10684bb0; body size 116 bytes.
#line 1 "ENTRY_10684bb0"

int * __fastcall FUN_10684bb0(int *param_1)

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


// Reference entry 10684cd0; body size 106 bytes.
#line 1 "ENTRY_10684cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10684cd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d25a0);
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


// Reference entry 10684ec0; body size 91 bytes.
#line 1 "ENTRY_10684ec0"

undefined4 * __thiscall Recovered_Bulk::FUN_10684ec0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCReceiptSessionManager);
  DAT_121a24cc = (int)(0);
  thunk_FUN_10681ea0(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x1c);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106850b0; body size 104 bytes.
#line 1 "ENTRY_106850b0"

void __thiscall Recovered_Bulk::FUN_106850b0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10681930(*param_1,param_1[1],param_1);
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


// Reference entry 10685ac0; body size 96 bytes.
#line 1 "ENTRY_10685ac0"

void __fastcall FUN_10685ac0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10681930(*param_1,param_1[1],param_1);
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


// Reference entry 10685f90; body size 172 bytes.
#line 1 "ENTRY_10685f90"

undefined1 __stdcall FUN_10685f90(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined1 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d2a25);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)thunk_FUN_10686ac0(&param_1,param_1));
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
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 == (int *)0x0) {
    uVar4 = (undefined1)(0);
  }
  else {
    if ((int *)piVar1[8] != (int *)0x0) {
      (**(code **)(*(int *)piVar1[8] + 0x20))();
    }
    uVar4 = (undefined1)(1);
  }
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar4);
}


// Reference entry 10686920; body size 206 bytes.
#line 1 "ENTRY_10686920"

void __thiscall Recovered_Bulk::FUN_10686920(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d2c50);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar4 = (int *)(*(int **)(param_1 + 4));
  piVar6 = (int *)(param_3 + 2);
  piVar5 = (int *)(param_3);
  if ((int *)(piVar6) != piVar4) {
    do {
      iVar3 = (int)(*piVar6);
      if (iVar3 != *piVar5) {
        piVar1 = (int *)((int *)piVar5[1]);
        if (piVar1 != (int *)0x0) {
          *piVar5 = (int)(0);
          piVar5[1] = 0;
          (**(code **)(*piVar1 + 8))(uVar2);
          iVar3 = (int)(*piVar6);
        }
        *piVar5 = (int)(iVar3);
        piVar1 = (int *)((int *)piVar6[1]);
        piVar5[1] = (int)piVar1;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
      }
      piVar6 = (int *)(piVar6 + 2);
      piVar5 = (int *)(piVar5 + 2);
    } while ((int *)(piVar6) != piVar4);
    piVar4 = (int *)(*(int **)(param_1 + 4));
  }
  piVar6 = (int *)((int *)piVar4[-1]);
  local_8 = (undefined4)(0);
  if (piVar6 != (int *)0x0) {
    piVar4[-2] = 0;
    piVar4[-1] = 0;
    (**(code **)(*piVar6 + 8))();
    piVar4 = (int *)(*(int **)(param_1 + 4));
  }
  *(int **)(param_1 + 4) = piVar4 + -2;
  *param_2 = (undefined4)(param_3);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10687a40; body size 157 bytes.
#line 1 "ENTRY_10687a40"

void FUN_10687a40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *in_stack_00000034;
  undefined1 auStack_54 [36];
  undefined4 local_30;
  uint uStack_2c;
  uint uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)(LAB_115d2f05);
  local_10 = (void *)(ExceptionList);
  uStack_28 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uStack_2c = (uint)(0);
  local_30 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  if (in_stack_00000034 != (int *)0x0) {
    local_30 = (undefined4)((**(code **)*in_stack_00000034)(auStack_54));
  }
  local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
  thunk_FUN_10686440(param_1,param_2,param_3);
  if (in_stack_00000034 != (int *)0x0) {
    uStack_2c = (uint)((uint)(in_stack_00000034 != (int *)&stack0x00000010));
    local_30 = (undefined4)(0x10687ac9);
    (**(code **)(*in_stack_00000034 + 0x10))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10687b10; body size 126 bytes.
#line 1 "ENTRY_10687b10"

void __thiscall Recovered_Bulk::FUN_10687b10(int *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d2f44);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(4));
  local_8 = (undefined4)(0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    uVar3 = (undefined4)((**(code **)(*param_2 + 0x1c))(uVar1));
    *puVar2 = (undefined4)(uVar3);
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_1106b190(-(uint)(param_1 != 0) & param_1 + 8U,puVar2,0);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10687bc0; body size 268 bytes.
#line 1 "ENTRY_10687bc0"

void __fastcall FUN_10687bc0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d2f7d);
  local_10 = (void *)(ExceptionList);
  uVar5 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar7 = (int *)(*(int **)(param_1 + 8));
  piVar6 = (int *)((int *)*piVar7);
  if (piVar6 != (int *)(piVar7)) {
    do {
      local_8 = (undefined4)(0xffffffff);
      piVar7 = (int *)((int *)piVar6[6]);
      iVar2 = (int)(piVar6[5]);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))(uVar5);
      }
      local_8 = (undefined4)(0);
      if (*(int **)(iVar2 + 0x20) != (int *)0x0) {
        (**(code **)(**(int **)(iVar2 + 0x20) + 0x1c))();
      }
      piVar3 = (int *)((int *)piVar6[2]);
      if (*(char *)((int)piVar3 + 0xd) == '\0') {
        cVar1 = (char)(*(char *)(*piVar3 + 0xd));
        piVar6 = (int *)(piVar3);
        piVar3 = (int *)((int *)*piVar3);
        while (cVar1 == '\0') {
          cVar1 = (char)(*(char *)(*piVar3 + 0xd));
          piVar6 = (int *)(piVar3);
          piVar3 = (int *)((int *)*piVar3);
        }
      }
      else {
        cVar1 = (char)(*(char *)(piVar6[1] + 0xd));
        piVar4 = (int *)((int *)piVar6[1]);
        piVar3 = (int *)(piVar6);
        while ((piVar6 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = (char)(*(char *)(piVar6[1] + 0xd));
          piVar4 = (int *)((int *)piVar6[1]);
          piVar3 = (int *)(piVar6);
        }
      }
      local_8 = (undefined4)(1);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 8))();
      }
      piVar7 = (int *)(*(int **)(param_1 + 8));
    } while (piVar6 != (int *)(piVar7));
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10681ea0((undefined4 *)(param_1 + 8),piVar7[1]);
  piVar7[1] = (int)piVar7;
  *piVar7 = (int)((int)piVar7);
  piVar7[2] = (int)piVar7;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10687d70; body size 114 bytes.
#line 1 "ENTRY_10687d70"

undefined4 * __thiscall Recovered_Bulk::FUN_10687d70(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d2fbd);
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


// Reference entry 10687e80; body size 278 bytes.
#line 1 "ENTRY_10687e80"

undefined4 * __thiscall Recovered_Bulk::FUN_10687e80(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d301b);
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


// Reference entry 10688a60; body size 76 bytes.
#line 1 "ENTRY_10688a60"

void __fastcall FUN_10688a60(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d3260);
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


// Reference entry 10689480; body size 86 bytes.
#line 1 "ENTRY_10689480"

undefined4 * __thiscall Recovered_Bulk::FUN_10689480(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  param_1[6] = (uint)&ghidra_vftable_SCShareBrowseItem;
  param_1[0xe] = (uint)&ghidra_vftable_SCShareBrowseItem;
  param_1[0xf] = (uint)&ghidra_vftable_SCShareBrowseItem;
  param_1[0x10] = (uint)&ghidra_vftable_SCShareBrowseItem;
  param_1[0x11] = (uint)&ghidra_vftable_SCShareBrowseItem;
  param_1[0x46] = (uint)&ghidra_vftable_SCShareBrowseItem;
  thunk_FUN_10203d60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x120);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10689690; body size 76 bytes.
#line 1 "ENTRY_10689690"

void __fastcall FUN_10689690(int param_1)

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


// Reference entry 106896f0; body size 149 bytes.
#line 1 "ENTRY_106896f0"

void __thiscall Recovered_Bulk::FUN_106896f0(int *param_2,undefined4 param_3)
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


// Reference entry 10689dc0; body size 76 bytes.
#line 1 "ENTRY_10689dc0"

void __fastcall FUN_10689dc0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x54));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x58) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x54));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}


// Reference entry 1068a1a0; body size 431 bytes.
#line 1 "ENTRY_1068a1a0"

undefined4 * __stdcall FUN_1068a1a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  SCLibrary *this_;
  undefined1 *puVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d35de);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_110828b0(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  thunk_FUN_1107ece0();
  (*(code *)**(undefined4 **)(iVar2 + 0x1c))();
  puVar3 = (undefined4 *)(operator_new(0xd7d0));
  local_8 = (undefined4)(0);
  local_1c = (int *)(puVar3);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    iVar2 = (int)(thunk_FUN_110cb9c0());
    iVar2 = (int)(*(int *)(iVar2 + 0x2c));
    uVar4 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x48))());
    uVar14 = (undefined4)(0);
    uVar13 = (undefined4)(0);
    iVar1 = (int)(*(int *)(*(int *)(iVar2 + 4) + 4));
    uVar12 = (undefined4)(2000);
    uVar11 = (undefined4)(2000);
    uVar5 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x50))
                      (2000,2000,0,0));
    pcVar10 = (char *)("DestroyObject");
    uVar6 = (undefined4)((**(code **)(*(int *)(iVar2 + iVar1 + 4) + 0x68))("DestroyObject",uVar5));
    thunk_FUN_111c0760(uVar4,uVar6,pcVar10,uVar5,uVar11,uVar12,uVar13,uVar14);
    *puVar3 = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
    puVar3[0x18] = (uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp;
    puVar3[0x11b] = (uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp;
  }
  local_8 = (undefined4)(0xffffffff);
  puVar8 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)((int)local_14 + 0xc) != (undefined1 *)0x0) {
    puVar8 = (undefined1 *)(*(undefined1 **)((int)local_14 + 0xc));
  }
  piVar7 = (int *)((int *)thunk_FUN_1124ffa0("ObjectID",0));
  (**(code **)(*piVar7 + 0xc))(puVar8);
  local_1c = (int *)(operator_new(0x48));
  local_8 = (undefined4)(1);
  if (local_1c == (int *)0x0) {
    piVar7 = (int *)((int *)0x0);
  }
  else {
    piVar7 = (int *)((int *)thunk_FUN_101b94f0(puVar3));
  }
  piVar9 = (int *)((int *)0x0);
  local_8 = (undefined4)(0xffffffff);
  local_14 = (int *)((int *)0x0);
  local_18 = (int *)(piVar7);
  if (piVar7 != (int *)0x0) {
    piVar9 = (int *)((int *)(**(code **)(*piVar7 + 0xc))());
    local_14 = (int *)(piVar9);
    (**(code **)(*piVar9 + 4))();
  }
  local_8 = (undefined4)(2);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  puVar3 = (undefined4 *)((undefined4 *)((SCLibrary *)(this_))->createSCRunAsyncIOOperationAction((SCIOp *)&local_1c));
  uVar4 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  *param_1 = (undefined4)(uVar4);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))(piVar7);
  }
  local_8 = (undefined4)(4);
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1068a3e0; body size 337 bytes.
#line 1 "ENTRY_1068a3e0"

undefined4 * __stdcall FUN_1068a3e0(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d3669);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (int *)(operator_new(0x14));
  local_8 = (undefined4)(0);
  if (local_14 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)thunk_FUN_103be5e0(uVar1));
  }
  local_8 = (undefined4)(0xffffffff);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (undefined4)(1);
  local_14 = (int *)((int *)0x0);
  if (piVar2 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  local_14 = (int *)(operator_new(0x18));
  if (local_14 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    *local_14 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    local_14[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *local_14 = (int)((int)(uint)&ghidra_vftable_SCDisplayCustomControlActionDescriptor);
    local_14[2] = 8;
    local_14[3] = 0;
    local_14[4] = 0;
    local_14[5] = 0;
    piVar5 = (int *)(local_14);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (piVar5 != (int *)0x0) {
    piVar4 = (int *)(piVar5);
    if (*(code **)(*piVar5 + 0xc) != thunk_FUN_101da390) {
      piVar4 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
    }
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
  local_14 = (int *)(piVar5);
  thunk_FUN_103beae0(&local_14,0xffffffff);
  *param_1 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (undefined4)(0xd);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1068a5e0; body size 231 bytes.
#line 1 "ENTRY_1068a5e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1068a5e0(undefined4 *param_2,uint param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d36c7);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  if (*(uint *)(param_1 + 200) < param_3) {
    *param_2 = (undefined4)(0);
    return (undefined4 *)(param_2);
  }
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)(operator_new(0x120));
  local_8 = (undefined4)(0);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    thunk_FUN_10200aa0(param_1 + 0xb8,param_1 + 0xb4,param_3,param_1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCShareBrowseItem);
    piVar2[6] = (int)(uint)&ghidra_vftable_SCShareBrowseItem;
    piVar2[0xe] = (int)(uint)&ghidra_vftable_SCShareBrowseItem;
    piVar2[0xf] = (int)(uint)&ghidra_vftable_SCShareBrowseItem;
    piVar2[0x10] = (int)(uint)&ghidra_vftable_SCShareBrowseItem;
    piVar2[0x11] = (int)(uint)&ghidra_vftable_SCShareBrowseItem;
    piVar2[0x46] = (int)(uint)&ghidra_vftable_SCShareBrowseItem;
  }
  local_8 = (undefined4)(0xffffffff);
  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 1068acc0; body size 118 bytes.
#line 1 "ENTRY_1068acc0"

void __thiscall Recovered_Bulk::FUN_1068acc0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d3844);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x38));
  pvVar3 = (void *)(operator_new(0x14));
  local_8 = (undefined4)(0);
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)thunk_FUN_103be530(uVar1));
  }
  local_8 = (undefined4)(0xffffffff);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }
  *param_2 = (undefined4)(piVar4);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1068adc0; body size 128 bytes.
#line 1 "ENTRY_1068adc0"

void __fastcall FUN_1068adc0(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d387d);
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


// Reference entry 1068af20; body size 118 bytes.
#line 1 "ENTRY_1068af20"

void __stdcall FUN_1068af20(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d38b0);
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


// Reference entry 1068b210; body size 232 bytes.
#line 1 "ENTRY_1068b210"

void __thiscall Recovered_Bulk::FUN_1068b210(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d392d);
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


// Reference entry 1068b340; body size 83 bytes.
#line 1 "ENTRY_1068b340"

void __thiscall Recovered_Bulk::FUN_1068b340(int param_2,short param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x40) + 0xc))());
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x40) + 8))());
      goto LAB_1068b362;
    }
  }
  iVar2 = (int)(*(int *)(param_1 + 0x44));
LAB_1068b362:
  if ((iVar2 == param_2) && (param_3 == 0)) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    thunk_FUN_112af4e0("ShareManager",2,"Attempting to retry");
    thunk_FUN_1068bac0();
  }
  return;
}


// Reference entry 1068b3b0; body size 307 bytes.
#line 1 "ENTRY_1068b3b0"

void __fastcall FUN_1068b3b0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d3974);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar5 = (int *)(*(int **)(param_1 + 0x54));
  if (piVar5 != (int *)0x0) {
    if (*(int *)(param_1 + 0x58) != 0) {
      (**(code **)(*piVar5 + 0x10))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
      piVar5 = (int *)(*(int **)(param_1 + 0x54));
    }
    if (piVar5 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar5 + 1));
      if (iVar1 == 0) {
        (**(code **)*piVar5)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  iVar1 = (int)(3);
  if (*(uint *)(param_1 + 0x5c) < 4) {
    iVar1 = (int)(*(int *)(param_1 + 0x5c));
  }
  uVar4 = (undefined4)(*(undefined4 *)(&DAT_12119afc + iVar1 * 4));
  thunk_FUN_112af4e0("ShareManager",2,"Starting Retry Timer. Index: %zu  Time: %zu",iVar1,uVar4);
  pvVar2 = (void *)(operator_new(0x6c));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(thunk_FUN_111c06e0(uVar4));
  }
  piVar5 = (int *)(*(int **)(param_1 + 0x54));
  local_8 = (undefined4)(0xffffffff);
  if (piVar5 != (int *)0x0) {
    if (*(int *)(param_1 + 0x58) != 0) {
      (**(code **)(*piVar5 + 0x10))();
      piVar5 = (int *)(*(int **)(param_1 + 0x54));
    }
    if (piVar5 != (int *)0x0) {
      iVar3 = (int)(thunk_FUN_1123fcd0(piVar5 + 1));
      if (iVar3 == 0) {
        (**(code **)*piVar5)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  *(int *)(param_1 + 0x54) = iVar1;
  if (iVar1 != 0) {
    thunk_FUN_1123fce0(iVar1 + 4);
    if (*(int **)(param_1 + 0x54) != (int *)0x0) {
      uVar4 = (undefined4)((**(code **)(**(int **)(param_1 + 0x54) + 4))(param_1 + 0x14,0));
      *(undefined4 *)(param_1 + 0x58) = uVar4;
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1068ba00; body size 139 bytes.
#line 1 "ENTRY_1068ba00"

int __thiscall Recovered_Bulk::FUN_1068ba00(undefined4 param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("ContainerID",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("Elements",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  uVar3 = (undefined4)(0x400);
  iVar2 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("ObjectID");
  thunk_FUN_112503c0(iVar2,uVar3);
  uVar3 = (undefined4)(0x4000);
  iVar2 = (int)(param_1 + 0xdbd0);
  thunk_FUN_1124ff50("Result");
  thunk_FUN_112503c0(iVar2,uVar3);
  return (int)(param_1);
}


// Reference entry 1068bac0; body size 130 bytes.
#line 1 "ENTRY_1068bac0"

void __fastcall FUN_1068bac0(int param_1)

{
  char cVar1;
  SCLibrary *pSVar2;
  int iVar3;
  
  if (((*(char **)(param_1 + 0x4c) != (char *)0x0) && (**(char **)(param_1 + 0x4c) != '\0')) &&
     (*(char *)(param_1 + 0x49) == '\0')) {
    pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    iVar3 = (int)((**(code **)(*(int *)pSVar2 + 0x110))());
    if ((iVar3 == 2) || (iVar3 == 1)) {
      thunk_FUN_110b0460(1);
      thunk_FUN_110adac0(param_1 + 8);
      *(undefined2 *)(param_1 + 0x48) = 0x101;
      thunk_FUN_10689dc0();
      cVar1 = (char)(thunk_FUN_110b0c50("RINCON_AssociatedZPUDN"));
      if (cVar1 != '\0') {
        thunk_FUN_110b2c00(param_1 + 8,"RINCON_AssociatedZPUDN",&DAT_1189bdd4,0,100);
      }
    }
  }
  return;
}


// Reference entry 1068beb0; body size 242 bytes.
#line 1 "ENTRY_1068beb0"

uint __thiscall Recovered_Bulk::FUN_1068beb0(char *param_2)
{
  uint param_1 = (uint )this;
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint local_4;
  
  *(undefined4 *)(param_1 + 0x7f8) = 0;
  *(undefined4 *)(param_1 + 0x7fc) = 0;
  *(undefined4 *)(param_1 + 0x800) = 0;
  pcVar3 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  pcVar3 = (char *)(pcVar3 + (1 - (int)(param_2 + 1)));
  local_4 = (uint)(param_1);
  if (pcVar3 < (char *)0x1ff) {
    iVar2 = (int)(param_1 + 0x7f8);
  }
  else {
    free((void *)0x0);
    *(undefined4 *)(param_1 + 0x7f8) = 0;
    *(char **)(param_1 + 0x7fc) = pcVar3;
    local_4 = (uint)(thunk_FUN_1148b586(-(uint)((int)((unsigned long long)(pcVar3) * 4 >> 0x20) != 0) |
                                 (uint)((unsigned long long)(pcVar3) * 4)));
    *(uint *)(param_1 + 0x7f8) = local_4;
    iVar2 = (int)(local_4 + *(int *)(param_1 + 0x7fc) * 4);
  }
  iVar2 = (int)(thunk_FUN_11068c30(&param_2,param_2 + (int)pcVar3,&local_4,iVar2,1));
  uVar4 = (uint)(param_1);
  if (*(uint *)(param_1 + 0x7f8) != 0) {
    uVar4 = (uint)(*(uint *)(param_1 + 0x7f8));
  }
  if ((iVar2 == 0) && (uVar4 < local_4)) {
    *(int *)(param_1 + 0x800) = ((int)(local_4 - uVar4) >> 2) + -1;
    return (uint)(param_1);
  }
  *(undefined4 *)(param_1 + 0x800) = 0;
  return (uint)(param_1);
}


// Reference entry 1068dc60; body size 177 bytes.
#line 1 "ENTRY_1068dc60"

void FUN_1068dc60(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d3f0d);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  iVar4 = (int)(param_2 - param_1 >> 4);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  while (ExceptionList = ppvVar2, 0 < iVar4) {
    local_8 = (undefined4)(0xffffffff);
    piVar1 = (int *)(*(int **)(param_1 + -4 + iVar4 * 8));
    iVar4 = (int)(iVar4 + -1);
    local_18 = (undefined4)(*(undefined4 *)(param_1 + iVar4 * 8));
    local_14 = (int *)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    local_8 = (undefined4)(0);
    thunk_FUN_1068edf0(param_1,iVar4,param_2 - param_1 >> 3,&local_18,param_3);
    local_8 = (undefined4)(1);
    ppvVar2 = (void **)(ExceptionList);
    if (piVar1 != (int *)0x0) {
      local_18 = (undefined4)(0);
      local_14 = (int *)((int *)0x0);
      (**(code **)(*piVar1 + 8))();
      ppvVar2 = (void **)(ExceptionList);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1068dd40; body size 94 bytes.
#line 1 "ENTRY_1068dd40"

void FUN_1068dd40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_1068c780(param_2,param_1));
  if (cVar1 != '\0') {
    thunk_FUN_10690860(param_2,param_1);
  }
  cVar1 = (char)(thunk_FUN_1068c780(param_3,param_2));
  if (cVar1 != '\0') {
    thunk_FUN_10690860(param_3,param_2);
    cVar1 = (char)(thunk_FUN_1068c780(param_2,param_1));
    if (cVar1 != '\0') {
      thunk_FUN_10690860(param_2,param_1);
    }
  }
  return;
}


// Reference entry 1068f0b0; body size 208 bytes.
#line 1 "ENTRY_1068f0b0"

void FUN_1068f0b0(int *param_1,int param_2,undefined4 param_3)

{
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d40fd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (0xf < (int)(param_2 - (int)param_1 & 0xfffffff8U)) {
    piVar1 = (int *)(*(int **)(param_2 + -4));
    piVar5 = (int *)((int *)(param_2 + -8));
    iVar3 = (int)(*piVar5);
    local_18 = (int)(iVar3);
    local_14 = (int *)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
      iVar3 = (int)(*piVar5);
    }
    iVar4 = (int)(*param_1);
    local_8 = (undefined4)(0);
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
    thunk_FUN_1068edf0(param_1,0,(int)piVar5 - (int)param_1 >> 3,&local_18,param_3);
    local_8 = (undefined4)(1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1068f4d0; body size 270 bytes.
#line 1 "ENTRY_1068f4d0"

void FUN_1068f4d0(int *param_1,int param_2,undefined4 param_3)

{
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
  
  puStack_c = (undefined1 *)(LAB_115d41cd);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (0xf < (int)(param_2 - (int)param_1 & 0xfffffff8U)) {
    piVar6 = (int *)((int *)(param_2 + -4));
    do {
      local_8 = (undefined4)(0xffffffff);
      piVar1 = (int *)((int *)*piVar6);
      iVar4 = (int)(piVar6[-1]);
      local_18 = (int)(iVar4);
      local_14 = (int *)(piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar3);
        iVar4 = (int)(piVar6[-1]);
      }
      iVar5 = (int)(*param_1);
      local_8 = (undefined4)(0);
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
      thunk_FUN_1068edf0(param_1,0,(-4 - (int)param_1) + (int)piVar6 >> 3,&local_18,param_3);
      local_8 = (undefined4)(1);
      if (piVar1 != (int *)0x0) {
        local_18 = (int)(0);
        local_14 = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
      piVar6 = (int *)(piVar6 + -2);
    } while (0xf < (int)((4 - (int)param_1) + (int)piVar6 & 0xfffffff8U));
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1068f630; body size 540 bytes.
#line 1 "ENTRY_1068f630"

void FUN_1068f630(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  void **ppvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d4215);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  uVar5 = (uint)(param_2 - (int)param_1);
  ppvVar3 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  iVar8 = (int)(param_2);
  while( true ) {
    ExceptionList = (void *)(ppvVar3);
    if ((int)(uVar5 & 0xfffffff8) < 0x101) {
      thunk_FUN_1068d890(param_1,iVar8,param_4);
      ExceptionList = (void *)(local_10);
      return;
    }
    if (param_3 < 1) break;
    thunk_FUN_1068de50(&local_18,param_1,iVar8,param_4);
    param_3 = (int)((param_3 >> 1) + (param_3 >> 2));
    if ((int)(local_18 - (int)param_1 & 0xfffffff8U) < (int)(iVar8 - (int)local_14 & 0xfffffff8U)) {
      thunk_FUN_1068f630(param_1,local_18,param_3,param_4);
      param_1 = (int *)(local_14);
    }
    else {
      thunk_FUN_1068f630(local_14,iVar8,param_3,param_4);
      param_2 = (int)(local_18);
      iVar8 = (int)(local_18);
    }
    uVar5 = (uint)(iVar8 - (int)param_1);
    ppvVar3 = (void **)(ExceptionList);
  }
  iVar6 = (int)(iVar8 - (int)param_1 >> 3);
  iVar7 = (int)(iVar8 - (int)param_1 >> 4);
  while (0 < iVar7) {
    piVar9 = (int *)((int *)param_1[iVar7 * 2 + -1]);
    iVar7 = (int)(iVar7 + -1);
    local_18 = (int)(param_1[iVar7 * 2]);
    local_14 = (int *)(piVar9);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))(uVar4);
    }
    local_8 = (undefined4)(0);
    thunk_FUN_1068edf0(param_1,iVar7,iVar6,&local_18,param_4);
    local_8 = (undefined4)(1);
    if (piVar9 != (int *)0x0) {
      local_18 = (int)(0);
      local_14 = (int *)((int *)0x0);
      (**(code **)(*piVar9 + 8))();
    }
    local_8 = (undefined4)(0xffffffff);
    iVar8 = (int)(param_2);
  }
  if (iVar6 < 2) {
    ExceptionList = (void *)(local_10);
    return;
  }
  piVar9 = (int *)((int *)(iVar8 + -4));
  do {
    piVar1 = (int *)((int *)*piVar9);
    iVar8 = (int)(piVar9[-1]);
    local_18 = (int)(iVar8);
    local_14 = (int *)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      iVar8 = (int)(piVar9[-1]);
    }
    iVar7 = (int)(*param_1);
    local_8 = (undefined4)(2);
    if (iVar7 != iVar8) {
      piVar2 = (int *)((int *)*piVar9);
      if (piVar2 != (int *)0x0) {
        piVar9[-1] = 0;
        *piVar9 = (int)(0);
        (**(code **)(*piVar2 + 8))();
        iVar7 = (int)(*param_1);
      }
      piVar9[-1] = iVar7;
      piVar2 = (int *)((int *)param_1[1]);
      *piVar9 = (int)((int)piVar2);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    thunk_FUN_1068edf0(param_1,0,(-4 - (int)param_1) + (int)piVar9 >> 3,&local_18,param_4);
    local_8 = (undefined4)(3);
    if (piVar1 != (int *)0x0) {
      local_18 = (int)(0);
      local_14 = (int *)((int *)0x0);
      (**(code **)(*piVar1 + 8))();
    }
    piVar9 = (int *)(piVar9 + -2);
    local_8 = (undefined4)(0xffffffff);
  } while (0xf < (int)((4 - (int)param_1) + (int)piVar9 & 0xfffffff8U));
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106905e0; body size 95 bytes.
#line 1 "ENTRY_106905e0"

void FUN_106905e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10690660; body size 99 bytes.
#line 1 "ENTRY_10690660"

void __thiscall Recovered_Bulk::FUN_10690660(int *param_2,byte *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_1068d4b0(local_8,param_3,
                             ((((*param_3 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_3[1]) * 0x1000193
                              ^ (uint)param_3[2]) * 0x1000193 ^ (uint)param_3[3]) * 0x1000193));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar1);
  return;
}


// Reference entry 10690860; body size 216 bytes.
#line 1 "ENTRY_10690860"

void FUN_10690860(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d453d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(*param_1);
  piVar2 = (int *)((int *)param_1[1]);
  iVar5 = (int)(iVar1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    iVar5 = (int)(*param_1);
  }
  local_8 = (undefined4)(0);
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
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106909d0; body size 108 bytes.
#line 1 "ENTRY_106909d0"

void FUN_106909d0(int param_1,int param_2)

{
  int *in_stack_00000030;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d457d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  thunk_FUN_1068f630(param_1,param_2,param_2 - param_1 >> 3,&stack0x0000000c,
                     DAT_12126b84 ^ (uint)&stack0xfffffffc);
  if (in_stack_00000030 != (int *)0x0) {
    (**(code **)(*in_stack_00000030 + 0x10))(in_stack_00000030 != (int *)&stack0x0000000c);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10690a60; body size 216 bytes.
#line 1 "ENTRY_10690a60"

void FUN_10690a60(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d45bd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(*param_1);
  piVar2 = (int *)((int *)param_1[1]);
  iVar5 = (int)(iVar1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    iVar5 = (int)(*param_1);
  }
  local_8 = (undefined4)(0);
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
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106910d0; body size 87 bytes.
#line 1 "ENTRY_106910d0"

int __thiscall Recovered_Bulk::FUN_106910d0(int *param_2)
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


// Reference entry 10691140; body size 93 bytes.
#line 1 "ENTRY_10691140"

int __thiscall Recovered_Bulk::FUN_10691140(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d46cd);
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


// Reference entry 106911c0; body size 93 bytes.
#line 1 "ENTRY_106911c0"

int __thiscall Recovered_Bulk::FUN_106911c0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d470d);
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


// Reference entry 10691240; body size 93 bytes.
#line 1 "ENTRY_10691240"

int __thiscall Recovered_Bulk::FUN_10691240(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d474d);
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


// Reference entry 10691480; body size 148 bytes.
#line 1 "ENTRY_10691480"

int * __thiscall Recovered_Bulk::FUN_10691480(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d47dd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 3);
    iVar3 = (int)(thunk_FUN_10694f70(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = iVar3;
    param_1[2] = iVar3 + iVar5 * 8;
    local_8 = (undefined4)(0);
    iVar4 = (int)(thunk_FUN_1068fa70(iVar4,iVar1,iVar3,param_1,uVar2));
    param_1[1] = iVar4;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 106917b0; body size 152 bytes.
#line 1 "ENTRY_106917b0"

int * __thiscall Recovered_Bulk::FUN_106917b0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d48cd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 3);
    iVar3 = (int)(thunk_FUN_10694f70(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = iVar3;
    param_1[2] = iVar3 + iVar5 * 8;
    local_8 = (undefined4)(0);
    iVar4 = (int)(thunk_FUN_1068fa70(iVar4,iVar1,*param_1,param_1,uVar2));
    param_1[1] = iVar4;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 10691ac0; body size 123 bytes.
#line 1 "ENTRY_10691ac0"

undefined4 * __thiscall Recovered_Bulk::FUN_10691ac0(undefined4 param_2,undefined4 param_3,int *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d497d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10408c60(&param_4,param_4,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  thunk_FUN_10691b60(param_2,param_3,*puVar1);
  local_8 = (undefined4)(1);
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicService);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 106921d0; body size 118 bytes.
#line 1 "ENTRY_106921d0"

void __fastcall FUN_106921d0(undefined4 *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d4b90);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0xb]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 2,DAT_12126b84 ^ (uint)&stack0xfffffffc);
    param_1[0xb] = 0;
  }
  piVar1 = (int *)((int *)param_1[1]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10692380; body size 119 bytes.
#line 1 "ENTRY_10692380"

void __fastcall FUN_10692380(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d4c20);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))
              (piVar1 != (int *)(param_1 + 0x10),DAT_12126b84 ^ (uint)&stack0xfffffffc);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xc));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10692420; body size 137 bytes.
#line 1 "ENTRY_10692420"

void __fastcall FUN_10692420(int param_1)

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
    thunk_FUN_1148a50e(puVar2,0x10);
    puVar2 = (undefined4 *)(puVar3);
  }
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 4),0x10);
  return;
}


// Reference entry 106924d0; body size 77 bytes.
#line 1 "ENTRY_106924d0"

void __fastcall FUN_106924d0(int *param_1)

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


// Reference entry 10692670; body size 118 bytes.
#line 1 "ENTRY_10692670"

void __fastcall FUN_10692670(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_1068c930(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0x28) * 0x28);
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


// Reference entry 106935a0; body size 140 bytes.
#line 1 "ENTRY_106935a0"

int __thiscall Recovered_Bulk::FUN_106935a0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d4f10);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))
              (piVar1 != (int *)(param_1 + 0x10),DAT_12126b84 ^ (uint)&stack0xfffffffc);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xc));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 106939b0; body size 132 bytes.
#line 1 "ENTRY_106939b0"

void __thiscall Recovered_Bulk::FUN_106939b0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_1068c930(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0x28) * 0x28);
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
  param_1[1] = param_2 + param_3 * 0x28;
  param_1[2] = param_2 + param_4 * 0x28;
  return;
}


// Reference entry 10693a60; body size 104 bytes.
#line 1 "ENTRY_10693a60"

void __thiscall Recovered_Bulk::FUN_10693a60(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_1026e550(*param_1,param_1[1],param_1);
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


// Reference entry 10693af0; body size 104 bytes.
#line 1 "ENTRY_10693af0"

void __thiscall Recovered_Bulk::FUN_10693af0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10272f30(*param_1,param_1[1],param_1);
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


// Reference entry 10693cc0; body size 138 bytes.
#line 1 "ENTRY_10693cc0"

void __thiscall Recovered_Bulk::FUN_10693cc0(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d52f0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x34));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))
              (piVar1 != (int *)(param_1 + 0x10),DAT_12126b84 ^ (uint)&stack0xfffffffc);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xc));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10693d80; body size 136 bytes.
#line 1 "ENTRY_10693d80"

float __thiscall Recovered_Bulk::FUN_10693d80(int param_2)
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


// Reference entry 10694220; body size 87 bytes.
#line 1 "ENTRY_10694220"

void __thiscall Recovered_Bulk::FUN_10694220(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 106942e0; body size 133 bytes.
#line 1 "ENTRY_106942e0"

void __fastcall FUN_106942e0(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10693e90();
  return;
}


// Reference entry 106944f0; body size 77 bytes.
#line 1 "ENTRY_106944f0"

void __fastcall FUN_106944f0(int *param_1)

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


// Reference entry 106945b0; body size 118 bytes.
#line 1 "ENTRY_106945b0"

void __fastcall FUN_106945b0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_1068c930(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0x28) * 0x28);
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


// Reference entry 10694f70; body size 87 bytes.
#line 1 "ENTRY_10694f70"

void * FUN_10694f70(uint param_1)

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


// Reference entry 106961e0; body size 137 bytes.
#line 1 "ENTRY_106961e0"

int * __thiscall Recovered_Bulk::FUN_106961e0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d577d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x60));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (undefined4)(0);
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 106962a0; body size 289 bytes.
#line 1 "ENTRY_106962a0"

undefined4 * FUN_106962a0(undefined4 *param_1)

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
  puStack_c = (undefined1 *)(LAB_115d57cd);
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
  if (pSVar3 != (SCLibrary *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x3c))(&local_14));
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
      (**(code **)(*piVar1 + 0x18))(param_1);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }
      local_8 = (undefined4)(6);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))();
      }
      ExceptionList = (void *)(local_10);
      return (undefined4 *)(param_1);
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
  }
  *param_1 = (undefined4)(0);
  local_8 = (undefined4)(8);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10696830; body size 88 bytes.
#line 1 "ENTRY_10696830"

bool FUN_10696830(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d58b0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)thunk_FUN_106964f0(&local_14));
  iVar1 = (int)(*piVar3);
  local_8 = (undefined4)(0);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (bool)(iVar1 != 0);
}


// Reference entry 10696be0; body size 120 bytes.
#line 1 "ENTRY_10696be0"

undefined4 __thiscall Recovered_Bulk::FUN_10696be0(uint param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_1068d4b0(local_8,&param_2,
                             ((((param_2 & 0xff ^ 0x811c9dc5) * 0x1000193 ^ param_2 >> 8 & 0xff) *
                               0x1000193 ^ param_2 >> 0x10 & 0xff) * 0x1000193 ^ param_2 >> 0x18) *
                             0x1000193));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 4))) {
    return (undefined4)(*(undefined4 *)(iVar1 + 0xc));
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 10696cb0; body size 286 bytes.
#line 1 "ENTRY_10696cb0"

int * __thiscall Recovered_Bulk::FUN_10696cb0(int *param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_stack_0000002c;
  int local_48 [9];
  int *local_24;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d595e);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_20 = (int *)(param_2);
  local_18 = (undefined4)(0);
  *param_2 = (int)(0);
  param_2[1] = 0;
  param_2[2] = 0;
  local_14 = (int)(param_1[1]);
  iVar3 = (int)(*param_1);
  local_8 = (undefined4)(1);
  if (iVar3 != local_14) {
    iVar4 = (int)(local_14 - iVar3 >> 3);
    iVar2 = (int)(thunk_FUN_10694f70(iVar4));
    *param_2 = (int)(iVar2);
    param_2[1] = iVar2;
    local_1c = (int *)(param_2);
    param_2[2] = iVar2 + iVar4 * 8;
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    iVar3 = (int)(thunk_FUN_1068fa70(iVar3,local_14,*param_2,param_2));
    param_2[1] = iVar3;
  }
  local_1c = (int *)(local_48);
  local_18 = (undefined4)(1);
  local_24 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (in_stack_0000002c != (int *)0x0) {
    local_24 = (int *)((int *)(**(code **)*in_stack_0000002c)(local_48,uVar1));
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  thunk_FUN_1068f630(*param_2,param_2[1],param_2[1] - *param_2 >> 3,local_48);
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 0x10))(local_24 != (int *)(local_48));
  }
  if (in_stack_0000002c != (int *)0x0) {
    (**(code **)(*in_stack_0000002c + 0x10))(in_stack_0000002c != (int *)&stack0x00000008);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 10696e20; body size 303 bytes.
#line 1 "ENTRY_10696e20"

void __thiscall Recovered_Bulk::FUN_10696e20(int param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 local_24 [8];
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d59b5);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (int *)(*(int **)(param_1 + 0x10));
  local_1c = (int)(param_1);
  iVar3 = (int)(thunk_FUN_1068d4b0(local_24,&local_14,
                             (((((uint)local_14 & 0xff ^ 0x811c9dc5) * 0x1000193 ^
                               (uint)local_14 >> 8 & 0xff) * 0x1000193 ^
                              (uint)local_14 >> 0x10 & 0xff) * 0x1000193 ^ (uint)local_14 >> 0x18) *
                             0x1000193));
  iVar3 = (int)(*(int *)(iVar3 + 4));
  if ((iVar3 == 0) || (iVar3 == *(int *)(param_2 + 4))) {
    uVar4 = (undefined4)(0xffffffff);
  }
  else {
    uVar4 = (undefined4)(*(undefined4 *)(iVar3 + 0xc));
  }
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  if ((char)param_3 != '\0') {
    if ((*(char **)(param_1 + 0x1c) != (char *)0x0) && (**(char **)(param_1 + 0x1c) != '\0')) {
      piVar5 = (int *)((int *)thunk_FUN_106962a0(&param_3,uVar2));
      piVar1 = (int *)((int *)*piVar5);
      local_8 = (undefined4)(0);
      *piVar5 = (int)(0);
      local_18 = (int *)(piVar1);
      if (piVar1 == (int *)0x0) {
        piVar5 = (int *)((int *)0x0);
      }
      else {
        piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
      }
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      local_14 = (int *)(piVar5);
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 8))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
      if (piVar1 != (int *)0x0) {
        iVar3 = (int)((**(code **)(*piVar1 + 0x14))(param_1 + 0x1c));
        *(bool *)(local_1c + 0x24) = iVar3 == 2;
      }
      local_8 = (undefined4)(5);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))();
      }
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10697670; body size 76 bytes.
#line 1 "ENTRY_10697670"

void __fastcall FUN_10697670(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d5b50);
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


// Reference entry 106976e0; body size 110 bytes.
#line 1 "ENTRY_106976e0"

void __fastcall FUN_106976e0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d5b80);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddMusicServiceDescriptor);
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


// Reference entry 10697770; body size 143 bytes.
#line 1 "ENTRY_10697770"

void __fastcall FUN_10697770(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d5bb0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLaunchSoundLabAction);
  piVar1 = (int *)((int *)param_1[6]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
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


// Reference entry 106979b0; body size 81 bytes.
#line 1 "ENTRY_106979b0"

int * __thiscall Recovered_Bulk::FUN_106979b0(int *param_2)
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


// Reference entry 10697a50; body size 131 bytes.
#line 1 "ENTRY_10697a50"

undefined4 * __thiscall Recovered_Bulk::FUN_10697a50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d5c40);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddMusicServiceDescriptor);
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
    thunk_FUN_1148a50e(param_1,0x14);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10697b00; body size 164 bytes.
#line 1 "ENTRY_10697b00"

undefined4 * __thiscall Recovered_Bulk::FUN_10697b00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d5c70);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLaunchSoundLabAction);
  piVar1 = (int *)((int *)param_1[6]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
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
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10697db0; body size 303 bytes.
#line 1 "ENTRY_10697db0"

undefined4 * FUN_10697db0(undefined4 *param_1,int *param_2,undefined1 param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d5f6c);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (param_2 != (int *)0x0) {
    cVar1 = (char)(thunk_FUN_106950d0(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (cVar1 != '\0') {
      piVar2 = (int *)(operator_new(0x14));
      local_8 = (undefined4)(0);
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
        (**(code **)(*piVar3 + 4))();
        *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
        piVar2[1] = 0;
        g_lSCObjCount = (int)(g_lSCObjCount + 1);
        *piVar2 = (int)((int)(uint)&ghidra_vftable_SCAddMusicServiceDescriptor);
        piVar2[2] = (int)param_2;
        piVar2[3] = (int)piVar3;
        *(unsigned char *)((char *)&local_8 + 0) = 2;
        (**(code **)(*piVar3 + 4))();
        *(undefined1 *)(piVar2 + 4) = param_3;
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
        (**(code **)(*piVar3 + 8))();
      }
      piVar3 = (int *)((int *)0x0);
      local_8 = (undefined4)(0xffffffff);
      if (piVar2 != (int *)0x0) {
        piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
        (**(code **)(*piVar3 + 4))();
      }
      local_8 = (undefined4)(4);
      *param_1 = (undefined4)(piVar2);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      local_8 = (undefined4)(5);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))();
      }
      ExceptionList = (void *)(local_10);
      return (undefined4 *)(param_1);
    }
  }
  *param_1 = (undefined4)(0);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10697f30; body size 211 bytes.
#line 1 "ENTRY_10697f30"

undefined4 * FUN_10697f30(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d5fad);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)(operator_new(8));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
    piVar3 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCMusicServiceFilterLearnMoreActionDescriptor);
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
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (undefined4)(1);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10698040; body size 182 bytes.
#line 1 "ENTRY_10698040"

undefined4 * FUN_10698040(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d5ffc);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x1c));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10697210(param_2,param_3));
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


// Reference entry 10699cb0; body size 132 bytes.
#line 1 "ENTRY_10699cb0"

void __thiscall Recovered_Bulk::FUN_10699cb0(int *param_2,undefined4 param_3,uint param_4)
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


// Reference entry 1069a360; body size 95 bytes.
#line 1 "ENTRY_1069a360"

void FUN_1069a360(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 1069a580; body size 188 bytes.
#line 1 "ENTRY_1069a580"

ulonglong * __fastcall FUN_1069a580(ulonglong *param_1)

{
  void *pvVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d65db);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
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
  local_8 = (undefined4)(1);
  *(undefined4 *)(param_1 + 4) = 7;
  *(undefined4 *)((int)param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  thunk_FUN_1069d710(0x10,*(undefined4 *)((int)param_1 + 0xc));
  ExceptionList = (void *)(local_10);
  return (ulonglong *)(param_1);
}


// Reference entry 1069aec0; body size 175 bytes.
#line 1 "ENTRY_1069aec0"

undefined8 * __thiscall Recovered_Bulk::FUN_1069aec0(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d679b);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
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
  local_8 = (undefined4)(1);
  *(undefined4 *)(param_1 + 4) = 7;
  *(undefined4 *)((int)param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  thunk_FUN_1069d710(0x10,*(undefined4 *)((int)param_1 + 0xc));
  ExceptionList = (void *)(local_10);
  return (undefined8 *)(param_1);
}


// Reference entry 1069b050; body size 93 bytes.
#line 1 "ENTRY_1069b050"

int __thiscall Recovered_Bulk::FUN_1069b050(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d67dd);
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


// Reference entry 1069b0d0; body size 93 bytes.
#line 1 "ENTRY_1069b0d0"

int __thiscall Recovered_Bulk::FUN_1069b0d0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d681d);
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


// Reference entry 1069b2d0; body size 188 bytes.
#line 1 "ENTRY_1069b2d0"

ulonglong * __fastcall FUN_1069b2d0(ulonglong *param_1)

{
  void *pvVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d68bb);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
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
  local_8 = (undefined4)(1);
  *(undefined4 *)(param_1 + 4) = 7;
  *(undefined4 *)((int)param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  thunk_FUN_1069d710(0x10,*(undefined4 *)((int)param_1 + 0xc));
  ExceptionList = (void *)(local_10);
  return (ulonglong *)(param_1);
}


// Reference entry 1069bb40; body size 236 bytes.
#line 1 "ENTRY_1069bb40"

int __fastcall FUN_1069bb40(undefined4 *param_1)

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
  puStack_c = (undefined1 *)(LAB_115d6ac0);
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


// Reference entry 1069bc70; body size 236 bytes.
#line 1 "ENTRY_1069bc70"

int __fastcall FUN_1069bc70(undefined4 *param_1)

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
  puStack_c = (undefined1 *)(LAB_115d6af0);
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


// Reference entry 1069bda0; body size 76 bytes.
#line 1 "ENTRY_1069bda0"

void __fastcall FUN_1069bda0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d6b20);
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


// Reference entry 1069be10; body size 76 bytes.
#line 1 "ENTRY_1069be10"

void __fastcall FUN_1069be10(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d6b50);
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


// Reference entry 1069be80; body size 76 bytes.
#line 1 "ENTRY_1069be80"

void __fastcall FUN_1069be80(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d6b80);
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


// Reference entry 1069bef0; body size 76 bytes.
#line 1 "ENTRY_1069bef0"

void __fastcall FUN_1069bef0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d6bb0);
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


// Reference entry 1069bfb0; body size 99 bytes.
#line 1 "ENTRY_1069bfb0"

void __fastcall FUN_1069bfb0(int param_1)

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


// Reference entry 1069c030; body size 77 bytes.
#line 1 "ENTRY_1069c030"

void __fastcall FUN_1069c030(int *param_1)

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


// Reference entry 1069c720; body size 72 bytes.
#line 1 "ENTRY_1069c720"

void __fastcall FUN_1069c720(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 0xc));
    local_4 = (int *)(param_1);
    thunk_FUN_10699d60(piVar1,*(undefined4 *)(iVar2 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    local_4 = (int *)((int *)*piVar1);
    thunk_FUN_1069a360(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),&local_4);
  }
  return;
}


// Reference entry 1069c7e0; body size 81 bytes.
#line 1 "ENTRY_1069c7e0"

int * __thiscall Recovered_Bulk::FUN_1069c7e0(int *param_2)
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


// Reference entry 1069d0b0; body size 261 bytes.
#line 1 "ENTRY_1069d0b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1069d0b0(byte param_2)
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
  
  puStack_c = (undefined1 *)(LAB_115d6d40);
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


// Reference entry 1069d200; body size 261 bytes.
#line 1 "ENTRY_1069d200"

undefined4 * __thiscall Recovered_Bulk::FUN_1069d200(byte param_2)
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
  
  puStack_c = (undefined1 *)(LAB_115d6d70);
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


// Reference entry 1069d8f0; body size 137 bytes.
#line 1 "ENTRY_1069d8f0"

uint __thiscall Recovered_Bulk::FUN_1069d8f0(int param_2)
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


// Reference entry 1069dd30; body size 88 bytes.
#line 1 "ENTRY_1069dd30"

void __thiscall Recovered_Bulk::FUN_1069dd30(int param_2)
{
  int param_1 = (int )this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *(float *)(param_1 + 8))));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 1069def0; body size 134 bytes.
#line 1 "ENTRY_1069def0"

void __fastcall FUN_1069def0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  ceil((double)((float)((double)iVar1 + (double)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
               *(float *)(param_1 + 8)));
  thunk_FUN_1148ac80();
  thunk_FUN_1069d9d0();
  return;
}


// Reference entry 1069e140; body size 77 bytes.
#line 1 "ENTRY_1069e140"

void __fastcall FUN_1069e140(int *param_1)

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


// Reference entry 1069f6a0; body size 335 bytes.
#line 1 "ENTRY_1069f6a0"

undefined4 * FUN_1069f6a0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  SCLibrary *this_;
  int *piVar3;
  int *piVar4;
  int **ppiVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d749d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)0x0);
  if (this_ != (SCLibrary *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*(int *)this_ + 0xc))(uVar2));
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = (undefined4)(0);
  if (this_ == (SCLibrary *)0x0) {
    *param_1 = (undefined4)(0);
    local_8 = (undefined4)(1);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_1);
  }
  ppiVar5 = (int **)(&local_14);
  piVar3 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar5));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    local_8 = (undefined4)(7);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_1);
  }
  (**(code **)(*piVar1 + 0x1cc))(param_1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  local_8 = (undefined4)(9);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1069fad0; body size 74 bytes.
#line 1 "ENTRY_1069fad0"

undefined4 * FUN_1069fad0(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_2);
  }
  cVar1 = (char)(thunk_FUN_1145c380(puVar2,&param_2));
  if (cVar1 != '\0') {
    thunk_FUN_1069fb30(param_1,param_2);
    return (undefined4 *)(param_1);
  }
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1069fb30; body size 229 bytes.
#line 1 "ENTRY_1069fb30"

int * __thiscall Recovered_Bulk::FUN_1069fb30(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d758d);
  uVar5 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  piVar7 = (int *)(*(int **)(param_1 + 0x10));
  piVar1 = (int *)(*(int **)(param_1 + 0x14));
  ppvVar4 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  while( true ) {
    ExceptionList = (void *)(ppvVar4);
    if ((int *)(piVar7) == piVar1) {
      *param_2 = (int)(0);
      ExceptionList = (void *)(local_10);
      return (int *)(param_2);
    }
    local_8 = (undefined4)(0xffffffff);
    piVar2 = (int *)((int *)piVar7[1]);
    piVar3 = (int *)((int *)*piVar7);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(uVar5);
    }
    local_8 = (undefined4)(0);
    iVar6 = (int)(thunk_FUN_10696290());
    if (param_3 == iVar6) break;
    local_8 = (undefined4)(2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
    piVar7 = (int *)(piVar7 + 2);
    ppvVar4 = (void **)(ExceptionList);
  }
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


// Reference entry 1069fc50; body size 150 bytes.
#line 1 "ENTRY_1069fc50"

int * __thiscall Recovered_Bulk::FUN_1069fc50(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d75cd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (int)(0);
  param_2[1] = 0;
  param_2[2] = 0;
  iVar4 = (int)(*(int *)(param_1 + 0x14));
  iVar1 = (int)(*(int *)(param_1 + 0x10));
  if (iVar1 != iVar4) {
    iVar5 = (int)(iVar4 - iVar1 >> 3);
    iVar3 = (int)(thunk_FUN_10694f70(iVar5));
    *param_2 = (int)(iVar3);
    param_2[1] = iVar3;
    param_2[2] = iVar3 + iVar5 * 8;
    local_8 = (undefined4)(0);
    iVar4 = (int)(thunk_FUN_1068fa70(iVar1,iVar4,*param_2,param_2,uVar2));
    param_2[1] = iVar4;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 106a03d0; body size 323 bytes.
#line 1 "ENTRY_106a03d0"

void __fastcall FUN_106a03d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined **ppuStack_58;
  int iStack_54;
  undefined4 uStack_40;
  int **ppiStack_3c;
  int iStack_38;
  undefined1 *puStack_34;
  uint uStack_30;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d76cd);
  local_10 = (void *)(ExceptionList);
  uStack_30 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x28) != 0) {
    puStack_34 = (undefined1 *)((undefined1 *)0x106a040a);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x28) + 8) + 0x14))();
    if (*(int *)(param_1 + 0x28) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0x2c));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        puStack_34 = (undefined1 *)((undefined1 *)0x106a042a);
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  puStack_34 = (undefined1 *)((undefined1 *)(param_1 + 0x1c));
  iStack_38 = (int)(param_1 + 8);
  ppiStack_3c = (int **)(&local_14);
  uStack_40 = (undefined4)(0x106a0449);
  piVar2 = (int *)((int *)thunk_FUN_1069e3f0());
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    puStack_34 = (undefined1 *)((undefined1 *)0x106a0469);
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    puStack_34 = (undefined1 *)((undefined1 *)0x106a0482);
    (**(code **)(*local_14 + 8))();
  }
  puStack_34 = (undefined1 *)((undefined1 *)&ppuStack_58);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ppuStack_58 = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  iStack_54 = (int)(param_1);
  piVar3 = (int *)((int *)thunk_FUN_10bf1b90(&local_18,piVar1));
  piVar1 = (int *)((int *)*piVar3);
  *piVar3 = (int)(0);
  piVar3 = (int *)(*(int **)(param_1 + 0x2c));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  if (piVar3 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    puStack_34 = (undefined1 *)((undefined1 *)0x106a04ca);
    (**(code **)(*piVar3 + 8))();
  }
  *(int **)(param_1 + 0x28) = piVar1;
  if (piVar1 == (int *)0x0) {
    uVar4 = (undefined4)(0);
  }
  else {
    puStack_34 = (undefined1 *)((undefined1 *)0x106a04d8);
    uVar4 = (undefined4)((**(code **)(*piVar1 + 0xc))());
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (local_18 != (int *)0x0) {
    puStack_34 = (undefined1 *)((undefined1 *)0x106a04ef);
    (**(code **)(*local_18 + 8))();
  }
  local_8 = (undefined4)(6);
  if (piVar2 != (int *)0x0) {
    puStack_34 = (undefined1 *)((undefined1 *)0x106a0501);
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106a1490; body size 76 bytes.
#line 1 "ENTRY_106a1490"

void __fastcall FUN_106a1490(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d79b0);
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


// Reference entry 106a17f0; body size 191 bytes.
#line 1 "ENTRY_106a17f0"

void __thiscall Recovered_Bulk::FUN_106a17f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d7aa5);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x5c));
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_1026f370(*(undefined4 *)(param_1 + 8)));
  }
  piVar4 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
    (**(code **)(*piVar4 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  *param_2 = (undefined4)(piVar3);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106a18e0; body size 183 bytes.
#line 1 "ENTRY_106a18e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106a18e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d7afc);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x5c));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_1026f370(*(undefined4 *)(param_1 + 8)));
  }
  piVar4 = (int *)((int *)0x0);
  local_8 = (undefined4)(0xffffffff);
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = (undefined4)(1);
  *param_2 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(2);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 106a4380; body size 68 bytes.
#line 1 "ENTRY_106a4380"

void __fastcall FUN_106a4380(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonarCalibrationManager);
  thunk_FUN_101a33f0();
  thunk_FUN_1027e470(param_1 + 2,*(undefined4 *)(param_1[2] + 4));
  thunk_FUN_1148a50e(param_1[2],0x20);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 106a4610; body size 88 bytes.
#line 1 "ENTRY_106a4610"

int * __thiscall Recovered_Bulk::FUN_106a4610(int *param_2)
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


// Reference entry 106a4780; body size 116 bytes.
#line 1 "ENTRY_106a4780"

int * __fastcall FUN_106a4780(int *param_1)

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


// Reference entry 106a4820; body size 116 bytes.
#line 1 "ENTRY_106a4820"

int * __fastcall FUN_106a4820(int *param_1)

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


// Reference entry 106a6aa0; body size 77 bytes.
#line 1 "ENTRY_106a6aa0"

undefined4 * __thiscall Recovered_Bulk::FUN_106a6aa0(uint param_2,uint param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = (uint)(param_1[4]);
  if (param_2 <= uVar1) {
    if (uVar1 - param_2 < param_3) {
      param_3 = (uint)(uVar1 - param_2);
    }
    puVar2 = (undefined4 *)(param_1);
    if (0xf < (uint)param_1[5]) {
      puVar2 = (undefined4 *)((undefined4 *)*param_1);
    }
    param_1[4] = uVar1 - param_3;
    memmove((void *)((int)puVar2 + param_2),(void *)((int)((int)puVar2 + param_2) + param_3),
            ((uVar1 - param_3) - param_2) + 1);
    return (undefined4 *)(param_1);
  }
                    
  thunk_FUN_106a5620();
}


// Reference entry 106a6b30; body size 80 bytes.
#line 1 "ENTRY_106a6b30"

void __thiscall Recovered_Bulk::FUN_106a6b30(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_106a3130(local_c,param_3);
  if (*(char *)(local_4 + 0xd) == '\0') {
    cVar1 = (char)(thunk_FUN_106a48e0(param_3,local_4 + 0x10));
    if (cVar1 == '\0') {
      *param_2 = (int)(local_4);
      return;
    }
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 106a7260; body size 166 bytes.
#line 1 "ENTRY_106a7260"

uint __thiscall Recovered_Bulk::FUN_106a7260(uint param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  uVar2 = (uint)(**(uint **)(param_1 + 0x1c));
  if (((uVar2 != 0) && (**(uint **)(param_1 + 0xc) < uVar2)) &&
     ((param_2 == 0xffffffff || (*(byte *)(uVar2 - 1) == param_2)))) {
    **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + 1;
    **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + -1;
    if (param_2 == 0xffffffff) {
      param_2 = (uint)(0);
    }
    return (uint)(param_2);
  }
  if ((*(FILE **)(param_1 + 0x4c) != (FILE *)0x0) && (param_2 != 0xffffffff)) {
    if ((*(int *)(param_1 + 0x38) == 0) &&
       (iVar4 = ungetc(param_2 & 0xff,*(FILE **)(param_1 + 0x4c)), iVar4 != -1)) {
      return (uint)(param_2);
    }
    puVar1 = (undefined1 *)((undefined1 *)(param_1 + 0x3c));
    if ((undefined1 *)**(int **)(param_1 + 0x1c) != puVar1) {
      *puVar1 = (undefined1)((char)param_2);
      puVar3 = (undefined1 *)((undefined1 *)**(int **)(param_1 + 0xc));
      if ((undefined1 *)(puVar3) != puVar1) {
        *(undefined1 **)(param_1 + 0x50) = puVar3;
        *(int *)(param_1 + 0x54) = **(int **)(param_1 + 0x2c) + **(int **)(param_1 + 0x1c);
      }
      **(int **)(param_1 + 0xc) = (int)puVar1;
      **(int **)(param_1 + 0x1c) = (int)puVar1;
      **(undefined4 **)(param_1 + 0x2c) = 1;
      return (uint)(param_2);
    }
  }
  return (uint)(0xffffffff);
}


// Reference entry 106a88c0; body size 110 bytes.
#line 1 "ENTRY_106a88c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106a88c0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d883d);
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


// Reference entry 106a8e70; body size 91 bytes.
#line 1 "ENTRY_106a8e70"

int * __thiscall Recovered_Bulk::FUN_106a8e70(int *param_2)
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


// Reference entry 106a8f30; body size 125 bytes.
#line 1 "ENTRY_106a8f30"

undefined4 * __thiscall Recovered_Bulk::FUN_106a8f30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d893d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x28));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  local_8 = (undefined4)(0);
  thunk_FUN_106a9bb0(param_2,param_2);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 106a9140; body size 91 bytes.
#line 1 "ENTRY_106a9140"

int * __thiscall Recovered_Bulk::FUN_106a9140(int *param_2)
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


// Reference entry 106a9340; body size 286 bytes.
#line 1 "ENTRY_106a9340"

void __thiscall Recovered_Bulk::FUN_106a9340(int param_2,int param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (uint)(param_3 - param_2 >> 3);
  iVar3 = (int)(*param_1);
  uVar1 = (uint)(param_1[1] - iVar3 >> 3);
  if (uVar4 <= uVar1) {
    iVar2 = (int)(iVar3 + uVar4 * 8);
    thunk_FUN_106a9e70(param_2,param_3,iVar3);
    thunk_FUN_10478ea0(iVar2,param_1[1],param_1);
    param_1[1] = iVar2;
    return;
  }
  uVar5 = (uint)(param_1[2] - iVar3 >> 3);
  if (uVar5 < uVar4) {
    if (0x1fffffff < uVar4) {
                    
      thunk_FUN_106bb660();
    }
    if (0x1fffffff - (uVar5 >> 1) < uVar5) {
      uVar5 = (uint)(0x1fffffff);
    }
    else {
      uVar5 = (uint)(uVar5 + (uVar5 >> 1));
      if (uVar5 < uVar4) {
        uVar5 = (uint)(uVar4);
      }
    }
    if (iVar3 != 0) {
      thunk_FUN_10478ea0(iVar3,param_1[1],param_1);
      iVar3 = (int)(*param_1);
      uVar1 = (uint)(param_1[2] - iVar3 & 0xfffffff8);
      iVar2 = (int)(iVar3);
      if (0xfff < uVar1) {
        iVar2 = (int)(*(int *)(iVar3 + -4));
        uVar1 = (uint)(uVar1 + 0x23);
        if (0x1f < (iVar3 - iVar2) - 4U) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(iVar2,uVar1);
      *param_1 = (int)(0);
      param_1[1] = 0;
      param_1[2] = 0;
    }
    iVar3 = (int)(thunk_FUN_106bce00(uVar5));
    *param_1 = (int)(iVar3);
    uVar1 = (uint)(0);
    param_1[1] = iVar3;
    param_1[2] = iVar3 + uVar5 * 8;
  }
  iVar2 = (int)(param_2 + uVar1 * 8);
  thunk_FUN_106a9e70(param_2,iVar2,iVar3);
  iVar3 = (int)(thunk_FUN_106ae320(iVar2,param_3,param_1[1],param_1));
  param_1[1] = iVar3;
  return;
}


// Reference entry 106a94b0; body size 517 bytes.
#line 1 "ENTRY_106a94b0"

void __thiscall Recovered_Bulk::FUN_106a94b0(int param_2,int param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d89bd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar3 = (undefined4 *)((undefined4 *)*param_1);
  uVar2 = (uint)((param_3 - param_2) / 0x14);
  puVar5 = (undefined4 *)((undefined4 *)param_1[1]);
  uVar4 = (uint)(((int)puVar5 - (int)puVar3) / 0x14);
  if (uVar2 <= uVar4) {
    thunk_FUN_106a9ef0(param_2,param_3,puVar3,uVar1);
    puVar5 = (undefined4 *)((undefined4 *)param_1[1]);
    for (puVar7 = (undefined4 *)(puVar3 + uVar2 * 5); (undefined4 *)(puVar7) != puVar5; puVar7 = puVar7 + 5) {
      (**(code **)*puVar7)(0);
    }
    param_1[1] = (int)(puVar3 + uVar2 * 5);
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar8 = (uint)((param_1[2] - (int)puVar3) / 0x14);
  if (uVar8 < uVar2) {
    if (0xccccccc < uVar2) {
                    
      thunk_FUN_106bb670();
    }
    if (0xccccccc - (uVar8 >> 1) < uVar8) {
      uVar8 = (uint)(0xccccccc);
    }
    else {
      uVar8 = (uint)(uVar8 + (uVar8 >> 1));
      if (uVar8 < uVar2) {
        uVar8 = (uint)(uVar2);
      }
    }
    if (puVar3 != (undefined4 *)0x0) {
      if (puVar3 != (undefined4 *)(puVar5)) {
        do {
          (**(code **)*puVar3)(0);
          puVar3 = (undefined4 *)(puVar3 + 5);
        } while (puVar3 != (undefined4 *)(puVar5));
        puVar3 = (undefined4 *)((undefined4 *)*param_1);
      }
      uVar2 = (uint)(((param_1[2] - (int)puVar3) / 0x14) * 0x14);
      puVar5 = (undefined4 *)(puVar3);
      if (0xfff < uVar2) {
        puVar5 = (undefined4 *)((undefined4 *)puVar3[-1]);
        uVar2 = (uint)(uVar2 + 0x23);
        if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar5))) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(puVar5,uVar2);
      *param_1 = (int)(0);
      param_1[1] = 0;
      param_1[2] = 0;
    }
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_106bce70(uVar8));
    *param_1 = (int)((int)puVar3);
    param_1[1] = (int)puVar3;
    param_1[2] = (int)(puVar3 + uVar8 * 5);
    uVar4 = (uint)(0);
  }
  iVar9 = (int)(param_2 + uVar4 * 0x14);
  thunk_FUN_106a9ef0(param_2,iVar9,puVar3,uVar1);
  iVar6 = (int)(param_1[1]);
  local_8 = (undefined4)(0);
  for (; iVar9 != param_3; iVar9 = iVar9 + 0x14) {
    thunk_FUN_106b1900(iVar9);
    iVar6 = (int)(iVar6 + 0x14);
  }
  param_1[1] = iVar6;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106a99a0; body size 192 bytes.
#line 1 "ENTRY_106a99a0"

undefined1 FUN_106a99a0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d8a85);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)*param_2);
  uVar6 = (undefined4)(*(undefined4 *)*param_1);
  piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0x14))(&param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar2 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(0);
  *piVar4 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  uVar5 = (undefined4)((**(code **)(*piVar1 + 0x18))(uVar6));
  uVar3 = (undefined1)(thunk_FUN_106c85d0(piVar2,uVar5,uVar6));
  local_8 = (undefined4)(4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar3);
}


// Reference entry 106a9ab0; body size 92 bytes.
#line 1 "ENTRY_106a9ab0"

bool FUN_106a9ab0(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d8ab0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)thunk_FUN_1034dcf0(&param_2));
  iVar1 = (int)(*piVar3);
  local_8 = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (bool)(iVar1 == 0);
}


// Reference entry 106a9bb0; body size 113 bytes.
#line 1 "ENTRY_106a9bb0"

void __thiscall Recovered_Bulk::FUN_106a9bb0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_106a9c40(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
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


// Reference entry 106a9e70; body size 92 bytes.
#line 1 "ENTRY_106a9e70"

int * FUN_106a9e70(int *param_1,int *param_2,int *param_3)

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


// Reference entry 106aa0a0; body size 111 bytes.
#line 1 "ENTRY_106aa0a0"

void FUN_106aa0a0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d8b90);
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


// Reference entry 106ab8c0; body size 73 bytes.
#line 1 "ENTRY_106ab8c0"

int * __thiscall Recovered_Bulk::FUN_106ab8c0(int *param_2,int *param_3)
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


// Reference entry 106ab920; body size 73 bytes.
#line 1 "ENTRY_106ab920"

int * __thiscall Recovered_Bulk::FUN_106ab920(int *param_2,int *param_3)
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


// Reference entry 106abbe0; body size 124 bytes.
#line 1 "ENTRY_106abbe0"

undefined4 * FUN_106abbe0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d8e75);
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


// Reference entry 106abdc0; body size 536 bytes.
#line 1 "ENTRY_106abdc0"

void __thiscall Recovered_Bulk::FUN_106abdc0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d8ea0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(param_1[1]);
  iVar3 = (int)(*param_1);
  uVar4 = (uint)(param_4 - param_3 >> 3);
  if (uVar4 != 0) {
    if (uVar4 <= (uint)(param_1[2] - iVar1 >> 3)) {
      if (uVar4 < (uint)(iVar1 - param_2 >> 3)) {
        iVar5 = (int)(iVar1 + uVar4 * -8);
        iVar3 = (int)(thunk_FUN_106bad70(iVar5,iVar1,iVar1));
        param_1[1] = iVar3;
        thunk_FUN_106ac610(param_2,iVar5,iVar1);
        thunk_FUN_10478ea0(param_2,uVar4 * 8 + param_2,param_1);
        local_8 = (undefined4)(2);
        thunk_FUN_106ae320(param_3,param_4,param_2,param_1);
        ExceptionList = (void *)(local_10);
        return;
      }
      iVar3 = (int)(thunk_FUN_106bad70(param_2,iVar1,uVar4 * 8 + param_2));
      param_1[1] = iVar3;
      thunk_FUN_10478ea0(param_2,iVar1,param_1);
      local_8 = (undefined4)(6);
      thunk_FUN_106ae320(param_3,param_4,param_2,param_1);
      ExceptionList = (void *)(local_10);
      return;
    }
    iVar5 = (int)(iVar1 - iVar3 >> 3);
    if (0x1fffffffU - iVar5 < uVar4) {
                    
      thunk_FUN_106bb660();
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
    iVar5 = (int)(thunk_FUN_106bce00(uVar2));
    iVar7 = (int)(param_2 - iVar3 >> 3);
    local_8 = (undefined4)(0);
    thunk_FUN_106ae320(param_3,param_4,iVar5 + iVar7 * 8,param_1);
    if ((uVar4 == 1) && (param_2 == iVar1)) {
      thunk_FUN_106ae320(iVar3,iVar1,iVar5,param_1);
    }
    else {
      thunk_FUN_106bad70(iVar3,param_2,iVar5);
      thunk_FUN_106bad70(param_2,iVar1,iVar5 + (uVar4 + iVar7) * 8);
    }
    thunk_FUN_106b8450(iVar5,uVar6,uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106ac1a0; body size 484 bytes.
#line 1 "ENTRY_106ac1a0"

int * FUN_106ac1a0(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  void **ppvVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d8edd);
  local_10 = (void *)(ExceptionList);
  uVar9 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  if (param_1 != (int *)(param_2)) {
    ppvVar7 = (void **)(&local_10);
    piVar5 = (int *)(param_1 + 2);
    while (ExceptionList = ppvVar7, piVar5 != (int *)(param_2)) {
      local_8 = (undefined4)(0xffffffff);
      piVar2 = (int *)((int *)piVar5[1]);
      piVar1 = (int *)(piVar5 + 2);
      iVar3 = (int)(*piVar5);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(uVar9);
      }
      local_8 = (undefined4)(0);
      cVar8 = (char)(thunk_FUN_10d9fde0(*param_1));
      piVar11 = (int *)(piVar1);
      if (cVar8 == '\0') {
        cVar8 = (char)(thunk_FUN_10d9fde0(piVar5[-2]));
        while (cVar8 != '\0') {
          piVar11 = (int *)(piVar5 + -2);
          iVar10 = (int)(*piVar11);
          if (iVar10 != *piVar5) {
            piVar6 = (int *)((int *)piVar5[1]);
            if (piVar6 != (int *)0x0) {
              *piVar5 = (int)(0);
              piVar5[1] = 0;
              (**(code **)(*piVar6 + 8))();
              iVar10 = (int)(*piVar11);
            }
            *piVar5 = (int)(iVar10);
            piVar6 = (int *)((int *)piVar5[-1]);
            piVar5[1] = (int)piVar6;
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 4))();
            }
          }
          cVar8 = (char)(thunk_FUN_10d9fde0(piVar5[-4]));
          piVar5 = (int *)(piVar11);
        }
        if (iVar3 != *piVar5) {
          piVar11 = (int *)((int *)piVar5[1]);
          if (piVar11 != (int *)0x0) {
            *piVar5 = (int)(0);
            piVar5[1] = 0;
            (**(code **)(*piVar11 + 8))();
          }
          *piVar5 = (int)(iVar3);
          piVar5[1] = (int)piVar2;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 4))();
          }
        }
      }
      else {
        while (piVar6 = piVar11, piVar5 != (int *)(param_1)) {
          piVar11 = (int *)(piVar6 + -2);
          iVar10 = (int)(piVar6[-4]);
          piVar5 = (int *)(piVar6 + -4);
          if (iVar10 != *piVar11) {
            piVar4 = (int *)((int *)piVar6[-1]);
            if (piVar4 != (int *)0x0) {
              *piVar11 = (int)(0);
              piVar6[-1] = 0;
              (**(code **)(*piVar4 + 8))();
              iVar10 = (int)(*piVar5);
            }
            *piVar11 = (int)(iVar10);
            piVar4 = (int *)((int *)piVar6[-3]);
            piVar6[-1] = (int)piVar4;
            if (piVar4 != (int *)0x0) {
              (**(code **)(*piVar4 + 4))();
            }
          }
        }
        if (iVar3 != *param_1) {
          piVar5 = (int *)((int *)param_1[1]);
          if (piVar5 != (int *)0x0) {
            *param_1 = (int)(0);
            param_1[1] = 0;
            (**(code **)(*piVar5 + 8))();
          }
          *param_1 = (int)(iVar3);
          param_1[1] = (int)piVar2;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 4))();
          }
        }
      }
      local_8 = (undefined4)(1);
      ppvVar7 = (void **)(ExceptionList);
      piVar5 = (int *)(piVar1);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))();
        ppvVar7 = (void **)(ExceptionList);
      }
    }
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 106ac5a0; body size 88 bytes.
#line 1 "ENTRY_106ac5a0"

void FUN_106ac5a0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10d9fde0(*param_1));
  if (cVar1 != '\0') {
    thunk_FUN_106afef0(param_2,param_1);
  }
  cVar1 = (char)(thunk_FUN_10d9fde0(*param_2));
  if (cVar1 != '\0') {
    thunk_FUN_106afef0(param_3,param_2);
    cVar1 = (char)(thunk_FUN_10d9fde0(*param_1));
    if (cVar1 != '\0') {
      thunk_FUN_106afef0(param_2,param_1);
    }
  }
  return;
}


// Reference entry 106ac610; body size 93 bytes.
#line 1 "ENTRY_106ac610"

int * FUN_106ac610(int *param_1,int *param_2,int *param_3)

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


// Reference entry 106ac6f0; body size 92 bytes.
#line 1 "ENTRY_106ac6f0"

int * FUN_106ac6f0(int *param_1,int *param_2,int *param_3)

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


// Reference entry 106ad240; body size 398 bytes.
#line 1 "ENTRY_106ad240"

void FUN_106ad240(int param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (int)(param_3 - 1);
  iVar6 = (int)(param_2);
  while (iVar5 = iVar6, iVar5 < iVar1 >> 1) {
    iVar6 = (int)(iVar5 * 2 + 2);
    cVar3 = (char)(thunk_FUN_10d9fde0(*(undefined4 *)(param_1 + -8 + iVar6 * 8)));
    if (cVar3 != '\0') {
      iVar6 = (int)(iVar5 * 2 + 1);
    }
    iVar4 = (int)(*(int *)(param_1 + iVar6 * 8));
    if (iVar4 != *(int *)(param_1 + iVar5 * 8)) {
      piVar2 = (int *)(*(int **)(param_1 + 4 + iVar5 * 8));
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(param_1 + iVar5 * 8) = 0;
        *(undefined4 *)(param_1 + 4 + iVar5 * 8) = 0;
        (**(code **)(*piVar2 + 8))();
        iVar4 = (int)(*(int *)(param_1 + iVar6 * 8));
      }
      *(int *)(param_1 + iVar5 * 8) = iVar4;
      piVar2 = (int *)(*(int **)(param_1 + 4 + iVar6 * 8));
      *(int **)(param_1 + 4 + iVar5 * 8) = piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  iVar6 = (int)(iVar5);
  if (((iVar5 == iVar1 >> 1) && ((param_3 & 1) == 0)) &&
     (iVar4 = *(int *)(param_1 + -8 + param_3 * 8), iVar6 = iVar1,
     iVar4 != *(int *)(param_1 + iVar5 * 8))) {
    piVar2 = (int *)(*(int **)(param_1 + 4 + iVar5 * 8));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + iVar5 * 8) = 0;
      *(undefined4 *)(param_1 + 4 + iVar5 * 8) = 0;
      (**(code **)(*piVar2 + 8))();
      iVar4 = (int)(*(int *)(param_1 + -8 + param_3 * 8));
    }
    *(int *)(param_1 + iVar5 * 8) = iVar4;
    piVar2 = (int *)(*(int **)(param_1 + -4 + param_3 * 8));
    *(int **)(param_1 + 4 + iVar5 * 8) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  while (iVar1 = iVar6, param_2 < iVar1) {
    iVar6 = (int)(iVar1 + -1 >> 1);
    cVar3 = (char)(thunk_FUN_10d9fde0(*param_4));
    if (cVar3 == '\0') break;
    iVar5 = (int)(*(int *)(param_1 + iVar6 * 8));
    if (iVar5 != *(int *)(param_1 + iVar1 * 8)) {
      piVar2 = (int *)(*(int **)(param_1 + 4 + iVar1 * 8));
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(param_1 + iVar1 * 8) = 0;
        *(undefined4 *)(param_1 + 4 + iVar1 * 8) = 0;
        (**(code **)(*piVar2 + 8))();
        iVar5 = (int)(*(int *)(param_1 + iVar6 * 8));
      }
      *(int *)(param_1 + iVar1 * 8) = iVar5;
      piVar2 = (int *)(*(int **)(param_1 + 4 + iVar6 * 8));
      *(int **)(param_1 + 4 + iVar1 * 8) = piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  iVar6 = (int)(*param_4);
  if (iVar6 != *(int *)(param_1 + iVar1 * 8)) {
    piVar2 = (int *)(*(int **)(param_1 + 4 + iVar1 * 8));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + iVar1 * 8) = 0;
      *(undefined4 *)(param_1 + 4 + iVar1 * 8) = 0;
      (**(code **)(*piVar2 + 8))();
      iVar6 = (int)(*param_4);
    }
    *(int *)(param_1 + iVar1 * 8) = iVar6;
    piVar2 = (int *)((int *)param_4[1]);
    *(int **)(param_1 + 4 + iVar1 * 8) = piVar2;
    if (piVar2 != (int *)0x0) {
                    
                    
      (**(code **)(*piVar2 + 4))();
      return;
    }
  }
  return;
}


// Reference entry 106ade40; body size 214 bytes.
#line 1 "ENTRY_106ade40"

int * __thiscall Recovered_Bulk::FUN_106ade40(int *param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d90cd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_106ab920(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
  if (param_1[1] != 0x6666666) {
    uVar1 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x28));
    puVar3[4] = *param_3;
    puVar3[7] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_106ba0b0(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);
}


// Reference entry 106ae120; body size 112 bytes.
#line 1 "ENTRY_106ae120"

int __stdcall FUN_106ae120(int param_1,int param_2,int param_3)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d914d);
  local_8 = (undefined4)(0);
  ppvVar1 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x14) {
    thunk_FUN_106b1900(param_1);
    param_3 = (int)(param_3 + 0x14);
    ppvVar1 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_3);
}


// Reference entry 106ae3c0; body size 113 bytes.
#line 1 "ENTRY_106ae3c0"

int FUN_106ae3c0(int param_1,int param_2,int param_3)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d924d);
  local_8 = (undefined4)(0);
  ppvVar1 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x14) {
    thunk_FUN_106b1900(param_1);
    param_3 = (int)(param_3 + 0x14);
    ppvVar1 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_3);
}


// Reference entry 106ae630; body size 115 bytes.
#line 1 "ENTRY_106ae630"

int FUN_106ae630(int param_1,int param_2,int param_3,undefined4 param_4)

{
  void **ppvVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d934d);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar1 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x14) {
    thunk_FUN_106aec80(param_4,param_3,param_1,uVar2);
    param_3 = (int)(param_3 + 0x14);
    ppvVar1 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_3);
}


// Reference entry 106ae6c0; body size 147 bytes.
#line 1 "ENTRY_106ae6c0"

int * FUN_106ae6c0(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d938d);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (int *)(param_2)); param_1 = param_1 + 1) {
    iVar1 = (int)(*param_1);
    *param_3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    param_3 = (int *)(param_3 + 1);
    ppvVar2 = (void **)(ExceptionList);
  }
  thunk_FUN_101fda20(param_3,param_3,param_4);
  ExceptionList = (void *)(local_10);
  return (int *)(param_3);
}


// Reference entry 106aefa0; body size 84 bytes.
#line 1 "ENTRY_106aefa0"

void FUN_106aefa0(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d94e0);
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


// Reference entry 106af3b0; body size 67 bytes.
#line 1 "ENTRY_106af3b0"

void __thiscall Recovered_Bulk::FUN_106af3b0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  if (piVar1 != *(int **)(param_1 + 8)) {
    iVar2 = (int)(*param_2);
    *piVar1 = (int)(iVar2);
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar2 + -0x10));
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_106ab210(piVar1,param_2);
  return;
}


// Reference entry 106afa60; body size 347 bytes.
#line 1 "ENTRY_106afa60"

undefined4 * __thiscall Recovered_Bulk::FUN_106afa60(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *local_24;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = (undefined1 *)(LAB_115d95de);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  param_2[1] = 0;
  param_2[2] = 0;
  local_14 = (int *)(*(int **)(param_1 + 0x14));
  local_1c = (int *)(*(int **)(param_1 + 0x18));
  local_8 = (uint)(0);
  local_18 = (undefined4)(1);
  if ((int *)(local_14) != local_1c) {
    do {
      piVar1 = (int *)((int *)local_14[1]);
      piVar2 = (int *)((int *)*local_14);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar4);
      }
      local_8 = (uint)(1);
      thunk_FUN_105ad900();
      iVar5 = (int)(thunk_FUN_106dc530());
      iVar6 = (int)(thunk_FUN_10649300());
      if (iVar5 == iVar6) {
        piVar7 = (int *)((int *)0x0);
        local_20 = (int *)((int *)0x0);
        local_24 = (int *)(piVar2);
        if (piVar2 != (int *)0x0) {
          piVar7 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
          local_20 = (int *)(piVar7);
          (**(code **)(*piVar7 + 4))();
        }
        local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        piVar3 = (int *)((int *)param_2[1]);
        if (piVar3 == (int *)param_2[2]) {
          thunk_FUN_106aabe0(piVar3,&local_24);
        }
        else {
          *piVar3 = (int)((int)piVar2);
          piVar3[1] = (int)piVar7;
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 4))();
          }
          param_2[1] = param_2[1] + 8;
        }
        local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
        if (piVar7 != (int *)0x0) {
          local_24 = (int *)((int *)0x0);
          local_20 = (int *)((int *)0x0);
          (**(code **)(*piVar7 + 8))();
        }
      }
      local_8 = (uint)(4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
      local_14 = (int *)(local_14 + 2);
      local_8 = (uint)(local_8 & 0xffffff00);
    } while ((int *)(local_14) != local_1c);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 106afc20; body size 74 bytes.
#line 1 "ENTRY_106afc20"

int * __thiscall Recovered_Bulk::FUN_106afc20(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_105ad900();
    iVar2 = (int)(thunk_FUN_106dc530());
    iVar3 = (int)(thunk_FUN_10649300());
    if (iVar2 == iVar3) {
      piVar1 = (int *)(*(int **)(param_1 + 0xc));
      *param_2 = (int)((int)piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      return (int *)(param_2);
    }
  }
  *param_2 = (int)(0);
  return (int *)(param_2);
}


// Reference entry 106afd40; body size 192 bytes.
#line 1 "ENTRY_106afd40"

undefined1 FUN_106afd40(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d9625);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)*param_2);
  uVar6 = (undefined4)(*(undefined4 *)*param_1);
  piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0x14))(&param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar2 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(0);
  *piVar4 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  uVar5 = (undefined4)((**(code **)(*piVar1 + 0x18))(uVar6));
  uVar3 = (undefined1)(thunk_FUN_106c85d0(piVar2,uVar5,uVar6));
  local_8 = (undefined4)(4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar3);
}


// Reference entry 106afe50; body size 92 bytes.
#line 1 "ENTRY_106afe50"

bool FUN_106afe50(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d9650);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)thunk_FUN_1034dcf0(&param_2));
  iVar1 = (int)(*piVar3);
  local_8 = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (bool)(iVar1 == 0);
}


// Reference entry 106afef0; body size 216 bytes.
#line 1 "ENTRY_106afef0"

void FUN_106afef0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d968d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(*param_1);
  piVar2 = (int *)((int *)param_1[1]);
  iVar5 = (int)(iVar1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    iVar5 = (int)(*param_1);
  }
  local_8 = (undefined4)(0);
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
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106b02c0; body size 216 bytes.
#line 1 "ENTRY_106b02c0"

void FUN_106b02c0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d970d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(*param_1);
  piVar2 = (int *)((int *)param_1[1]);
  iVar5 = (int)(iVar1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    iVar5 = (int)(*param_1);
  }
  local_8 = (undefined4)(0);
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
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106b08d0; body size 70 bytes.
#line 1 "ENTRY_106b08d0"

undefined4 * __thiscall Recovered_Bulk::FUN_106b08d0(undefined4 *param_2)
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
  return (undefined4 *)(param_1);
}


// Reference entry 106b0d60; body size 93 bytes.
#line 1 "ENTRY_106b0d60"

int __thiscall Recovered_Bulk::FUN_106b0d60(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d981d);
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


// Reference entry 106b0e90; body size 128 bytes.
#line 1 "ENTRY_106b0e90"

undefined4 * __thiscall Recovered_Bulk::FUN_106b0e90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d985d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x28));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  local_8 = (undefined4)(0);
  thunk_FUN_106a9bb0(param_2,param_2);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 106b1170; body size 148 bytes.
#line 1 "ENTRY_106b1170"

int * __thiscall Recovered_Bulk::FUN_106b1170(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d98ed);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 3);
    iVar3 = (int)(thunk_FUN_106bce00(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = iVar3;
    param_1[2] = iVar3 + iVar5 * 8;
    local_8 = (undefined4)(0);
    iVar4 = (int)(thunk_FUN_106ae320(iVar4,iVar1,iVar3,param_1,uVar2));
    param_1[1] = iVar4;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 106b1230; body size 229 bytes.
#line 1 "ENTRY_106b1230"

int * __thiscall Recovered_Bulk::FUN_106b1230(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar3 = (void *)(ExceptionList);
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115d9935);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  iVar5 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar5 != iVar1) {
    iVar2 = (int)((iVar1 - iVar5) / 0x14);
    iVar4 = (int)(thunk_FUN_106bce70(iVar2));
    *param_1 = (int)(iVar4);
    param_1[1] = iVar4;
    param_1[2] = iVar4 + iVar2 * 0x14;
    local_8 = (undefined4)(1);
    do {
      thunk_FUN_106b1900(iVar5);
      iVar4 = (int)(iVar4 + 0x14);
      iVar5 = (int)(iVar5 + 0x14);
    } while (iVar5 != iVar1);
    param_1[1] = iVar4;
    ExceptionList = (void *)(local_10);
    return (int *)(param_1);
  }
  ExceptionList = (void *)(pvVar3);
  return (int *)(param_1);
}


// Reference entry 106b21b0; body size 87 bytes.
#line 1 "ENTRY_106b21b0"

int __thiscall Recovered_Bulk::FUN_106b21b0(int *param_2)
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


// Reference entry 106b2220; body size 96 bytes.
#line 1 "ENTRY_106b2220"

int __thiscall Recovered_Bulk::FUN_106b2220(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115d9d4d);
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


// Reference entry 106b3350; body size 76 bytes.
#line 1 "ENTRY_106b3350"

void __fastcall FUN_106b3350(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115da090);
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


// Reference entry 106b33c0; body size 76 bytes.
#line 1 "ENTRY_106b33c0"

void __fastcall FUN_106b33c0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115da0c0);
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


// Reference entry 106b3430; body size 76 bytes.
#line 1 "ENTRY_106b3430"

void __fastcall FUN_106b3430(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115da0f0);
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


// Reference entry 106b34a0; body size 76 bytes.
#line 1 "ENTRY_106b34a0"

void __fastcall FUN_106b34a0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115da120);
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


// Reference entry 106b36d0; body size 99 bytes.
#line 1 "ENTRY_106b36d0"

void __fastcall FUN_106b36d0(int param_1)

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
  thunk_FUN_10304120(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x10);
  return;
}


// Reference entry 106b3bd0; body size 147 bytes.
#line 1 "ENTRY_106b3bd0"

void __fastcall FUN_106b3bd0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115da2d0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if (*param_1 != 0) {
    thunk_FUN_106b8c60(*param_1,param_1[1]);
    iVar1 = (int)(*param_1);
    uVar4 = (uint)(param_1[2] - iVar1 & 0xfffffff8);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4,uVar2);
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106b3c90; body size 96 bytes.
#line 1 "ENTRY_106b3c90"

void __fastcall FUN_106b3c90(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_106aa0a0(*param_1,param_1[1],param_1);
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


// Reference entry 106b3df0; body size 93 bytes.
#line 1 "ENTRY_106b3df0"

void __fastcall FUN_106b3df0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115da330);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x30));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_104ed870();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106b5260; body size 72 bytes.
#line 1 "ENTRY_106b5260"

void __fastcall FUN_106b5260(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 4));
    local_4 = (int *)(param_1);
    thunk_FUN_10304120(piVar1,*(undefined4 *)(iVar2 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    local_4 = (int *)((int *)*piVar1);
    thunk_FUN_10304a70(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),&local_4);
  }
  return;
}


// Reference entry 106b5300; body size 81 bytes.
#line 1 "ENTRY_106b5300"

int * __thiscall Recovered_Bulk::FUN_106b5300(int *param_2)
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


// Reference entry 106b5370; body size 81 bytes.
#line 1 "ENTRY_106b5370"

int * __thiscall Recovered_Bulk::FUN_106b5370(int *param_2)
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


// Reference entry 106b53e0; body size 81 bytes.
#line 1 "ENTRY_106b53e0"

int * __thiscall Recovered_Bulk::FUN_106b53e0(int *param_2)
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


// Reference entry 106b54b0; body size 89 bytes.
#line 1 "ENTRY_106b54b0"

int * __thiscall Recovered_Bulk::FUN_106b54b0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)(param_2);
    if (param_2 != 0) {
      piVar1 = (int *)((int *)(**(code **)(*(int *)(param_2 + 200) + 0xc))());
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 106b5520; body size 81 bytes.
#line 1 "ENTRY_106b5520"

int * __thiscall Recovered_Bulk::FUN_106b5520(int *param_2)
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


// Reference entry 106b5d00; body size 181 bytes.
#line 1 "ENTRY_106b5d00"

int __thiscall Recovered_Bulk::FUN_106b5d00(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115da88d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_106ab920(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
    if (param_1[1] == 0x6666666) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x28));
    puVar3[4] = *param_2;
    puVar3[7] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_106ba0b0(local_24,local_20,puVar3));
  }
  ExceptionList = (void *)(local_10);
  return (int)(local_1c + 0x18);
}


// Reference entry 106b6590; body size 189 bytes.
#line 1 "ENTRY_106b6590"

undefined1 __thiscall Recovered_Bulk::FUN_106b6590(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = (int *)(param_2);
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115da955);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar6 = (undefined4)(*(undefined4 *)*param_1);
  piVar4 = (int *)((int *)(**(code **)(*param_2 + 0x14))(&param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
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
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  uVar5 = (undefined4)((**(code **)(*piVar2 + 0x18))(uVar6));
  uVar3 = (undefined1)(thunk_FUN_106c85d0(piVar1,uVar5,uVar6));
  local_8 = (undefined4)(4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar3);
}


// Reference entry 106b66a0; body size 93 bytes.
#line 1 "ENTRY_106b66a0"

bool FUN_106b66a0(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115da980);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)thunk_FUN_1034dcf0(&local_14));
  iVar1 = (int)(*piVar3);
  local_8 = (undefined4)(0);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (bool)(iVar1 == 0);
}


// Reference entry 106b6a00; body size 83 bytes.
#line 1 "ENTRY_106b6a00"

undefined4 * __thiscall Recovered_Bulk::FUN_106b6a00(byte param_2)
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


// Reference entry 106b6a70; body size 83 bytes.
#line 1 "ENTRY_106b6a70"

undefined4 * __thiscall Recovered_Bulk::FUN_106b6a70(byte param_2)
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


// Reference entry 106b6ae0; body size 83 bytes.
#line 1 "ENTRY_106b6ae0"

undefined4 * __thiscall Recovered_Bulk::FUN_106b6ae0(byte param_2)
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


// Reference entry 106b6b50; body size 106 bytes.
#line 1 "ENTRY_106b6b50"

undefined4 * __thiscall Recovered_Bulk::FUN_106b6b50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115da9b0);
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


// Reference entry 106b6e60; body size 114 bytes.
#line 1 "ENTRY_106b6e60"

int __thiscall Recovered_Bulk::FUN_106b6e60(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115daa70);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x30));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_104ed870();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 106b8340; body size 100 bytes.
#line 1 "ENTRY_106b8340"

void __thiscall Recovered_Bulk::FUN_106b8340(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_106b8c60(*param_1,param_1[1]);
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


// Reference entry 106b83c0; body size 104 bytes.
#line 1 "ENTRY_106b83c0"

void __thiscall Recovered_Bulk::FUN_106b83c0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_106aa0a0(*param_1,param_1[1],param_1);
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


// Reference entry 106b8450; body size 104 bytes.
#line 1 "ENTRY_106b8450"

void __thiscall Recovered_Bulk::FUN_106b8450(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10478ea0(*param_1,param_1[1],param_1);
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


// Reference entry 106b84e0; body size 142 bytes.
#line 1 "ENTRY_106b84e0"

void __thiscall Recovered_Bulk::FUN_106b84e0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)((undefined4 *)param_1[1]);
    if (puVar2 != (undefined4 *)(puVar3)) {
      do {
        (**(code **)*puVar2)(0);
        puVar2 = (undefined4 *)(puVar2 + 5);
      } while (puVar2 != (undefined4 *)(puVar3));
      puVar2 = (undefined4 *)((undefined4 *)*param_1);
    }
    uVar1 = (uint)(((param_1[2] - (int)puVar2) / 0x14) * 0x14);
    puVar3 = (undefined4 *)(puVar2);
    if (0xfff < uVar1) {
      puVar3 = (undefined4 *)((undefined4 *)puVar2[-1]);
      uVar1 = (uint)(uVar1 + 0x23);
      if (0x1f < (uint)((int)puVar2 + (-4 - (int)puVar3))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(puVar3,uVar1);
  }
  *param_1 = (int)(param_2);
  param_1[1] = param_2 + param_3 * 0x14;
  param_1[2] = param_2 + param_4 * 0x14;
  return;
}


// Reference entry 106b85a0; body size 104 bytes.
#line 1 "ENTRY_106b85a0"

void __thiscall Recovered_Bulk::FUN_106b85a0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_101fda20(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
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


// Reference entry 106b8930; body size 127 bytes.
#line 1 "ENTRY_106b8930"

undefined4 * __fastcall FUN_106b8930(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115db345);
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


// Reference entry 106b8bb0; body size 136 bytes.
#line 1 "ENTRY_106b8bb0"

float __thiscall Recovered_Bulk::FUN_106b8bb0(int param_2)
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


// Reference entry 106b8dc0; body size 192 bytes.
#line 1 "ENTRY_106b8dc0"

undefined1 __thiscall Recovered_Bulk::FUN_106b8dc0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115db3b5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)*param_2);
  uVar6 = (undefined4)(**(undefined4 **)(param_1 + 4));
  piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0x14))(&param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar2 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(0);
  *piVar4 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  uVar5 = (undefined4)((**(code **)(*piVar1 + 0x18))(uVar6));
  uVar3 = (undefined1)(thunk_FUN_106c85d0(piVar2,uVar5,uVar6));
  local_8 = (undefined4)(4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar3);
}


// Reference entry 106b8ed0; body size 94 bytes.
#line 1 "ENTRY_106b8ed0"

bool __stdcall FUN_106b8ed0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115db3e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)thunk_FUN_1034dcf0(&param_1));
  iVar1 = (int)(*piVar3);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (bool)(iVar1 == 0);
}


// Reference entry 106ba360; body size 79 bytes.
#line 1 "ENTRY_106ba360"

void __thiscall Recovered_Bulk::FUN_106ba360(int param_2)
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


// Reference entry 106ba3d0; body size 79 bytes.
#line 1 "ENTRY_106ba3d0"

void __thiscall Recovered_Bulk::FUN_106ba3d0(int param_2)
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


// Reference entry 106ba580; body size 87 bytes.
#line 1 "ENTRY_106ba580"

void __thiscall Recovered_Bulk::FUN_106ba580(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 106ba740; body size 133 bytes.
#line 1 "ENTRY_106ba740"

void __fastcall FUN_106ba740(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_106b98d0();
  return;
}


// Reference entry 106ba880; body size 83 bytes.
#line 1 "ENTRY_106ba880"

void __thiscall Recovered_Bulk::FUN_106ba880(int *param_2)
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


// Reference entry 106ba8f0; body size 83 bytes.
#line 1 "ENTRY_106ba8f0"

void __thiscall Recovered_Bulk::FUN_106ba8f0(int *param_2)
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


// Reference entry 106baa40; body size 140 bytes.
#line 1 "ENTRY_106baa40"

void __fastcall FUN_106baa40(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115db4e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*param_1 != 0) {
    thunk_FUN_106b8c60(*param_1,param_1[1]);
    iVar1 = (int)(*param_1);
    uVar4 = (uint)(param_1[2] - iVar1 & 0xfffffff8);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4,uVar2);
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106bab00; body size 96 bytes.
#line 1 "ENTRY_106bab00"

void __fastcall FUN_106bab00(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_106aa0a0(*param_1,param_1[1],param_1);
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


// Reference entry 106bab80; body size 128 bytes.
#line 1 "ENTRY_106bab80"

void __fastcall FUN_106bab80(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)((undefined4 *)param_1[1]);
    if (puVar2 != (undefined4 *)(puVar3)) {
      do {
        (**(code **)*puVar2)(0);
        puVar2 = (undefined4 *)(puVar2 + 5);
      } while (puVar2 != (undefined4 *)(puVar3));
      puVar2 = (undefined4 *)((undefined4 *)*param_1);
    }
    uVar1 = (uint)(((param_1[2] - (int)puVar2) / 0x14) * 0x14);
    puVar3 = (undefined4 *)(puVar2);
    if (0xfff < uVar1) {
      puVar3 = (undefined4 *)((undefined4 *)puVar2[-1]);
      uVar1 = (uint)(uVar1 + 0x23);
      if (0x1f < (uint)((int)puVar2 + (-4 - (int)puVar3))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(puVar3,uVar1);
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 106bae10; body size 116 bytes.
#line 1 "ENTRY_106bae10"

int __thiscall Recovered_Bulk::FUN_106bae10(int param_2,int param_3,int param_4)
{
  undefined4 param_1 = (undefined4 )this;
  void **ppvVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115db5dd);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar1 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar1, param_2 != param_3); param_2 = param_2 + 0x14) {
    thunk_FUN_106aec80(param_1,param_4,param_2,uVar2);
    param_4 = (int)(param_4 + 0x14);
    ppvVar1 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_4);
}


// Reference entry 106baeb0; body size 157 bytes.
#line 1 "ENTRY_106baeb0"

int * __thiscall Recovered_Bulk::FUN_106baeb0(int *param_2,int *param_3,int *param_4)
{
  undefined4 param_1 = (undefined4 )this;
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115db61d);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_2 != (int *)(param_3)); param_2 = param_2 + 1) {
    iVar1 = (int)(*param_2);
    *param_4 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    param_4 = (int *)(param_4 + 1);
    ppvVar2 = (void **)(ExceptionList);
  }
  thunk_FUN_101fda20(param_4,param_4,param_1);
  ExceptionList = (void *)(local_10);
  return (int *)(param_4);
}


// Reference entry 106bb0e0; body size 110 bytes.
#line 1 "ENTRY_106bb0e0"

void FUN_106bb0e0(int param_1,int param_2)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115db6dd);
  local_8 = (undefined4)(0);
  ppvVar1 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x14) {
    thunk_FUN_106b1900(param_1);
    ppvVar1 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106bb2f0; body size 110 bytes.
#line 1 "ENTRY_106bb2f0"

void FUN_106bb2f0(int param_1,int param_2)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115db79d);
  local_8 = (undefined4)(0);
  ppvVar1 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x14) {
    thunk_FUN_106b1900(param_1);
    ppvVar1 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106bce00; body size 87 bytes.
#line 1 "ENTRY_106bce00"

void * FUN_106bce00(uint param_1)

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


// Reference entry 106bce70; body size 90 bytes.
#line 1 "ENTRY_106bce70"

void * FUN_106bce70(uint param_1)

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


// Reference entry 106bde60; body size 586 bytes.
#line 1 "ENTRY_106bde60"

undefined4 * __stdcall FUN_106bde60(int param_1,int *param_2,int *param_3,int param_4,int *param_5)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115dbe66);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)(operator_new(0xdc));
  local_8 = (undefined4)(0);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10786100(uVar1));
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
  piVar3 = (int *)((int *)0x0);
  local_8 = (undefined4)(0xffffffff);
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)(piVar2);
    if (*(code **)(*piVar2 + 0xc) != thunk_FUN_1023a9b0) {
      piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    }
    (**(code **)(*piVar3 + 4))();
  }
  local_18 = (int *)((int *)0x0);
  local_14 = (int *)((int *)0x0);
  local_8 = (undefined4)(2);
  if (param_1 == 1) {
    if (param_2 != (int *)0x0) {
      local_18 = (int *)(param_2);
      local_14 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      (**(code **)(*local_14 + 4))();
    }
  }
  else {
    if (param_1 == 7) {
      piVar7 = (int *)(param_5);
      if (param_2 != (int *)0x0) {
        piVar7 = (int *)(param_2);
      }
      if (piVar7 == (int *)0x0) goto LAB_106bdfa4;
      iVar5 = (int)(*piVar7);
      local_18 = (int *)(piVar7);
    }
    else {
      if ((param_1 != 8) || (param_3 == (int *)0x0)) goto LAB_106bdfa4;
      iVar5 = (int)(*param_3);
      local_18 = (int *)(param_3);
    }
    local_14 = (int *)((int *)(**(code **)(iVar5 + 0xc))());
    (**(code **)(*local_14 + 4))();
  }
LAB_106bdfa4:
  thunk_FUN_105ad900();
  thunk_FUN_107cc5b0(local_18);
  iVar5 = (int)(param_1);
  thunk_FUN_105ad900(param_1);
  thunk_FUN_107cc370(iVar5);
  if (param_1 == 1) {
    if (param_3 == (int *)0x0) {
      if (param_4 == 0) {
        uVar4 = (undefined4)(1);
        thunk_FUN_105ad900(1);
        thunk_FUN_107cc4d0(uVar4);
      }
    }
    else if (param_4 != 0) {
      uVar4 = (undefined4)(0);
      thunk_FUN_105ad900(param_3,param_4,0);
      thunk_FUN_107cc8d0(param_3,param_4,uVar4);
    }
  }
  else if (param_1 == 7) {
    if (param_5 != (int *)0x0) {
      thunk_FUN_105ad900(param_5);
      thunk_FUN_107cc800(param_5);
    }
  }
  else if (((param_1 == 8) && (param_3 != (int *)0x0)) && (param_4 != 0)) {
    thunk_FUN_105ad900(param_3,param_4);
    thunk_FUN_107cc7a0(param_3,param_4);
  }
  puVar6 = (undefined4 *)(operator_new(0x18));
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    thunk_FUN_10f04dc0(piVar2);
    *puVar6 = (undefined4)((uint)&ghidra_vftable_SCBondingLaunchable);
    puVar6[2] = (uint)&ghidra_vftable_SCBondingLaunchable;
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(puVar6);
}


// Reference entry 106bece0; body size 69 bytes.
#line 1 "ENTRY_106bece0"

void __thiscall Recovered_Bulk::FUN_106bece0(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_106ab920(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 106bed50; body size 172 bytes.
#line 1 "ENTRY_106bed50"

undefined4 * __thiscall Recovered_Bulk::FUN_106bed50(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115dbfdc);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)(operator_new(0x38));
  local_8 = (undefined4)(0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    iVar1 = (int)(*(int *)(param_1 + 0x10));
    piVar4 = (int *)(*(int **)(param_1 + 8));
    thunk_FUN_104ed740(uVar2);
    *piVar3 = (int)((int)(uint)&ghidra_vftable_SCSetupEngine_DenylistFromSetupHomeAction);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    piVar3[0xb] = (int)piVar4;
    piVar3[0xc] = 0;
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      piVar3[0xc] = (int)piVar4;
      (**(code **)(*piVar4 + 4))();
    }
    piVar3[0xd] = iVar1;
  }
  local_8 = (undefined4)(0xffffffff);
  *param_2 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 106c2360; body size 125 bytes.
#line 1 "ENTRY_106c2360"

int * __stdcall FUN_106c2360(int *param_1)

{
  uint uVar1;
  int *local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115dc95d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_106c2cf0(&local_1c,1,0);
  local_8 = (undefined4)(0);
  if ((local_18 - (int)local_1c & 0xfffffff8U) == 0) {
    *param_1 = (int)(0);
  }
  else {
    local_1c = (int *)((int *)*local_1c);
    *param_1 = (int)((int)local_1c);
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 4))(uVar1);
    }
  }
  thunk_FUN_1047a750();
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 106c5390; body size 152 bytes.
#line 1 "ENTRY_106c5390"

undefined4 __thiscall Recovered_Bulk::FUN_106c5390(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115dd0a5);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)(local_18))->int_allocRep("|");
  local_8 = (undefined4)(0);
  uVar2 = (undefined4)(thunk_FUN_101a2e90(&local_14,param_1 + 8,local_18,uVar1));
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  thunk_FUN_101a2e90(param_2,uVar2,param_1 + 4);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(3);
  ((SCStr *)(local_18))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_2);
}


// Reference entry 106c92a0; body size 71 bytes.
#line 1 "ENTRY_106c92a0"

void __fastcall FUN_106c92a0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (char)(thunk_FUN_1059d120(*(undefined4 *)(param_1 + 0x108)));
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_1059d120(*(undefined4 *)(param_1 + 0xe8)));
    if (cVar1 == '\0') {
      uVar2 = (undefined4)(thunk_FUN_1059d5a0(500));
      *(undefined4 *)(param_1 + 0x108) = uVar2;
    }
  }
  return;
}


// Reference entry 106c94c0; body size 325 bytes.
#line 1 "ENTRY_106c94c0"

void __thiscall Recovered_Bulk::FUN_106c94c0(int *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115dd9a5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if ((char)param_2 == '\0') {
    thunk_FUN_1125fd80(1,&DAT_1186d2ee,0,DAT_12126b84 ^ (uint)&stack0xfffffffc);
    uVar5 = (undefined4)(thunk_FUN_1059d5a0(1000));
    *(undefined4 *)(param_1 + 0xfc) = uVar5;
    ExceptionList = (void *)(local_10);
    return;
  }
  iVar2 = (int)(thunk_FUN_10288040());
  if (*(int *)(iVar2 + 0xc) == 0) {
LAB_106c952a:
    param_2 = (int *)((int *)0x0);
  }
  else {
    thunk_FUN_105ad900();
    iVar3 = (int)(thunk_FUN_106dc530());
    iVar4 = (int)(thunk_FUN_10649300());
    if (iVar3 != iVar4) goto LAB_106c952a;
    param_2 = (int *)(*(int **)(iVar2 + 0xc));
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
    }
  }
  local_8 = (undefined4)(0);
  thunk_FUN_106a8e70(&param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (local_18 != 0) {
    thunk_FUN_105ad900();
    cVar1 = (char)(thunk_FUN_10eaceb0());
    if (cVar1 != '\0') {
      thunk_FUN_1125fd80(1,&DAT_1186d2ee,1);
      uVar5 = (undefined4)(thunk_FUN_1059d5a0(10000));
      *(undefined4 *)(param_1 + 0xf8) = uVar5;
      local_8 = (undefined4)(5);
      goto LAB_106c95a1;
    }
  }
  local_8 = (undefined4)(4);
LAB_106c95a1:
  if (local_14 == (int *)0x0) {
    ExceptionList = (void *)(local_10);
    return;
  }
  (**(code **)(*local_14 + 8))();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106c9660; body size 739 bytes.
#line 1 "ENTRY_106c9660"

/* WARNING: Removing unreachable block (ram,0x106c98af) */
/* WARNING: Removing unreachable block (ram,0x106c97f5) */
/* WARNING: Removing unreachable block (ram,0x106c98cd) */
/* WARNING: Removing unreachable block (ram,0x106c9809) */

void __fastcall FUN_106c9660(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_120 [24];
  undefined4 uStack_108;
  int *piStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  int local_d4;
  uint local_d0;
  int iStack_cc;
  void *local_c4;
  undefined1 *puStack_c0;
  undefined4 local_bc;
  int local_b8 [9];
  int *local_94;
  int local_90 [9];
  int *local_6c;
  int local_68 [9];
  int *local_44;
  undefined1 local_40 [4];
  int local_3c;
  int local_38;
  int local_30 [9];
  int *local_c;
  uint local_8;
  
  local_bc = (undefined4)(0xffffffff);
  puStack_c0 = (undefined1 *)(LAB_115dda0d);
  local_c4 = (void *)(ExceptionList);
  uStack_f8 = (uint)(DAT_12126b84 ^ (uint)local_b8);
  ExceptionList = (void *)(&local_c4);
  local_8 = (uint)(uStack_f8);
  thunk_FUN_105edb20();
  thunk_FUN_106a8c50();
  uStack_fc = (uint)(0x17);
  local_bc = (undefined4)(0);
  uStack_100 = (undefined4)(0x106c96c8);
  iVar3 = (int)(thunk_FUN_1033cdb0());
  uStack_fc = (uint)(iVar3 * 2);
  piStack_104 = (int *)(local_90);
  uStack_100 = (undefined4)(0x17);
  uStack_108 = (undefined4)(0x106c96d6);
  thunk_FUN_106c3cf0();
  local_bc = (undefined4)(((uint)(*(unsigned short *)((char *)&local_bc + 1)) << 8 | (uint)(1)));
  thunk_FUN_105f0080(auStack_120,local_68);
  thunk_FUN_102244a0();
  if (local_6c != (int *)0x0) {
    uStack_fc = (uint)((uint)(local_6c != (int *)(local_90)));
    uStack_100 = (undefined4)(0x106c970b);
    (**(code **)(*local_6c + 0x10))();
    local_6c = (int *)((int *)0x0);
  }
  if (local_44 != (int *)0x0) {
    uStack_fc = (uint)((uint)(local_44 != (int *)(local_68)));
    uStack_100 = (undefined4)(0x106c972a);
    (**(code **)(*local_44 + 0x10))();
    local_44 = (int *)((int *)0x0);
  }
  uStack_fc = (uint)(0);
  *(unsigned char *)((char *)&local_bc + 0) = 5;
  if (local_94 != (int *)0x0) {
    uStack_fc = (uint)((**(code **)*local_94)(auStack_120));
  }
  *(unsigned char *)((char *)&local_bc + 0) = 4;
  thunk_FUN_1033d2d0(local_40);
  *(unsigned char *)((char *)&local_bc + 0) = 6;
  lVar2 = (longlong)(0);
  if (local_3c == local_38) {
    lVar1 = (longlong)(0);
  }
  else {
    lVar1 = (longlong)(0);
    lVar2 = (longlong)(0);
    do {
      piVar4 = (int *)(*(int **)(local_3c + 0x14));
      if (piVar4 != (int *)0x0) {
        uStack_fc = (uint)(0x106c97ae);
        (**(code **)(*piVar4 + 4))();
      }
      *(unsigned char *)((char *)&local_bc + 0) = 7;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)((int *)0x0);
      }
      else {
        uStack_fc = (uint)(0x106c97c7);
        piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      }
      uStack_fc = (uint)(0xb);
      *(unsigned char *)((char *)&local_bc + 0) = 9;
      uStack_100 = (undefined4)(0x106c97dd);
      lVar9 = (longlong)(thunk_FUN_1034d9a0());
      uStack_fc = (uint)(0x14);
      uStack_100 = (undefined4)(0x106c97eb);
      lVar10 = (longlong)(thunk_FUN_1034d9a0());
      if (lVar1 < lVar9) {
        lVar1 = (longlong)(lVar9);
      }
      if (lVar2 < lVar10) {
        lVar2 = (longlong)(lVar10);
      }
      *(unsigned char *)((char *)&local_bc + 0) = 0xb;
      if (piVar4 != (int *)0x0) {
        uStack_fc = (uint)(0x106c983c);
        (**(code **)(*piVar4 + 8))();
      }
      *(unsigned char *)((char *)&local_bc + 0) = 6;
      uStack_fc = (uint)(0x106c9848);
      thunk_FUN_105f2130();
    } while (local_3c != local_38);
  }
  local_d4 = (int)((int)((ulonglong)lVar1 >> 0x20));
  local_bc = (undefined4)(((uint)(*(unsigned short *)((char *)&local_bc + 1)) << 8 | (uint)(4)));
  if (local_c != (int *)0x0) {
    uStack_fc = (uint)((uint)(local_c != (int *)(local_30)));
    uStack_100 = (undefined4)(0x106c988a);
    (**(code **)(*local_c + 0x10))();
  }
  uStack_fc = (uint)(0x17);
  uStack_100 = (undefined4)(0x106c989f);
  iVar3 = (int)(thunk_FUN_1033cdb0());
  uVar5 = (uint)(iVar3 * 2);
  local_d0 = (uint)(uVar5 - (uint)lVar1);
  iStack_cc = (int)((((int)uVar5 >> 0x1f) - local_d4) - (uint)(uVar5 < (uint)lVar1));
  if (lVar1 < 1) {
    iStack_cc = (int)(0);
    local_d0 = (uint)(0);
  }
  uVar7 = (uint)(660000 - (uint)lVar2);
  iVar8 = (int)(-(uint)(660000 < (uint)lVar2) - (int)((ulonglong)lVar2 >> 0x20));
  uVar5 = (uint)(local_d0);
  iVar3 = (int)(iStack_cc);
  if (((((0 < lVar2) && (uVar5 = uVar7, iVar3 = iVar8, -1 < iStack_cc)) &&
       ((0 < iStack_cc || (local_d0 != 0)))) &&
      ((iStack_cc < iVar8 || ((iStack_cc <= iVar8 && (local_d0 <= uVar7)))))) ||
     ((-1 < iVar3 && ((local_d0 = uVar5, 0 < iVar3 || (uVar5 != 0)))))) {
    uStack_100 = (undefined4)(0x106c9902);
    uStack_fc = (uint)(local_d0);
    uVar6 = (undefined4)(thunk_FUN_1059d5a0());
    *(undefined4 *)(param_1 + 0x10c) = uVar6;
  }
  if (local_94 != (int *)0x0) {
    uStack_fc = (uint)((uint)(local_94 != (int *)(local_b8)));
    uStack_100 = (undefined4)(0x106c9920);
    (**(code **)(*local_94 + 0x10))();
  }
  ExceptionList = (void *)(local_c4);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 106c9af0; body size 177 bytes.
#line 1 "ENTRY_106c9af0"

undefined1 __stdcall FUN_106c9af0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = (int *)(param_1);
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115dda65);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar4 = (int *)((int *)(**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
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
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  uVar6 = (undefined4)(param_2);
  uVar5 = (undefined4)((**(code **)(*piVar2 + 0x18))(param_2));
  uVar3 = (undefined1)(thunk_FUN_106c85d0(piVar1,uVar5,uVar6));
  local_8 = (undefined4)(4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar3);
}


// Reference entry 106c9bd0; body size 195 bytes.
#line 1 "ENTRY_106c9bd0"

undefined1 __stdcall FUN_106c9bd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115ddaad);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar4 = (int *)((int *)createSCStringArray());
  piVar1 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  (**(code **)(*piVar1 + 0x24))(&param_1);
  uVar2 = (undefined1)(thunk_FUN_106c85d0(piVar1,param_2,param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  local_8 = (undefined4)(6);
  ((SCStr *)((SCStr *)&param_1))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar2);
}


// Reference entry 106cae90; body size 108 bytes.
#line 1 "ENTRY_106cae90"

void FUN_106cae90(void)

{
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115ddddd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("legacy wizard terminated");
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_106c9a00(3000);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106cb650; body size 614 bytes.
#line 1 "ENTRY_106cb650"

void __thiscall Recovered_Bulk::FUN_106cb650(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115ddf4d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x40) == param_2) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0x7fffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    thunk_FUN_106c8880();
    cVar1 = (char)(thunk_FUN_1059d120(*(undefined4 *)(param_1 + 0x60)));
    if (cVar1 == '\0') {
      cVar1 = (char)(thunk_FUN_1059d120(*(undefined4 *)(param_1 + 0x40)));
      if (cVar1 == '\0') {
        uVar3 = (undefined4)(thunk_FUN_1059d5a0(500));
        *(undefined4 *)(param_1 + 0x60) = uVar3;
        ExceptionList = (void *)(local_10);
        return;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x50) == param_2) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      thunk_FUN_106c94c0(1);
      ExceptionList = (void *)(local_10);
      return;
    }
    if (*(int *)(param_1 + 0x54) == param_2) {
      *(undefined4 *)(param_1 + 0x54) = 0;
      thunk_FUN_1125fd80(1,&DAT_1186d2ee,0);
      uVar3 = (undefined4)(thunk_FUN_1059d5a0(1000));
      *(undefined4 *)(param_1 + 0x54) = uVar3;
      ExceptionList = (void *)(local_10);
      return;
    }
    if (*(int *)(param_1 + 0x58) == param_2) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      thunk_FUN_106c9300();
      ExceptionList = (void *)(local_10);
      return;
    }
    if (*(int *)(param_1 + 0x5c) == param_2) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      puVar4 = (undefined1 *)(operator_new(1));
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = (undefined1 *)((undefined1 *)0x0);
      }
      else {
        *puVar4 = (undefined1)(1);
      }
      thunk_FUN_1106b190(-(uint)(param_1 != 0xa8) & param_1 - 8U,puVar4,0);
      ExceptionList = (void *)(local_10);
      return;
    }
    if (*(int *)(param_1 + 0x60) == param_2) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      thunk_FUN_106c8a90();
      ExceptionList = (void *)(local_10);
      return;
    }
    if (*(int *)(param_1 + 100) == param_2) {
      *(undefined4 *)(param_1 + 100) = 0;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("product time out");
      local_8 = (undefined4)(8);
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int)(0);
      local_8 = (undefined4)(0xffffffff);
      thunk_FUN_106c9a00(0);
      thunk_FUN_106c9660();
      ExceptionList = (void *)(local_10);
      return;
    }
    if (*(int *)(param_1 + 0x68) == param_2) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      thunk_FUN_106c9a00(0);
      ExceptionList = (void *)(local_10);
      return;
    }
    if (*(int *)(param_1 + 0x120) == param_2) {
      *(undefined4 *)(param_1 + 0x120) = 0;
      thunk_FUN_106c8390(uVar2);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106cb950; body size 153 bytes.
#line 1 "ENTRY_106cb950"

void __fastcall FUN_106cb950(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115ddf8d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("wizard gone away");
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (int)(0);
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_106c9a00(500);
  cVar1 = (char)(thunk_FUN_1059d120(*(undefined4 *)(param_1 + 0x78)));
  if (cVar1 != '\0') {
    thunk_FUN_1059d940(*(undefined4 *)(param_1 + 0x78));
  }
  uVar2 = (undefined4)(thunk_FUN_1059d5a0(0));
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106cbb20; body size 515 bytes.
#line 1 "ENTRY_106cbb20"

undefined4 __stdcall FUN_106cbb20(undefined4 param_1)

{
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 local_78 [64];
  SCStr local_38 [4];
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115de04d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  bVar1 = (byte)(thunk_FUN_103d4080(param_1,&DAT_121a2668,1));
  local_34 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_34 + 1)) << 8 | (uint)(bVar1)));
  local_30 = (int)(DAT_121a2650);
  pvVar3 = (void *)(operator_new(1));
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)((void *)0x0);
  }
  else {
    *(bool *)pvVar3 = (void *)(bVar1 != 0);
  }
  thunk_FUN_1106b190(-(uint)(local_30 != 0) & local_30 + 0xa0U,pvVar3,0,uVar2);
  ((SCStr *)((char *)local_38))->stringWithFormat(&DAT_11884800,(uint)bVar1);
  local_8 = (undefined4)(0);
  pcVar4 = (char *)("");
  if (bVar1 == 0) {
    pcVar4 = (char *)("not ");
  }
  ((SCStr *)((SCStr *)&local_24))->int_allocRep(pcVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)((SCStr *)&local_20))->int_allocRep("clearDenylist");
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep("willLaunch");
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("automatically launch popups when their trigger conditions are met");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("The SCSetupEngine will ");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  uVar5 = (undefined4)(thunk_FUN_101a2e90(&local_2c,&local_14,&local_24));
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  uVar5 = (undefined4)(thunk_FUN_101a2e90(&local_28,uVar5,&local_18));
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  thunk_FUN_103d53c0(local_78,param_1,uVar5);
  puVar6 = (undefined4 *)(&local_20);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  thunk_FUN_103d2880(&local_1c,local_34);
  uVar5 = (undefined4)(thunk_FUN_103d2920(puVar6));
  uVar5 = (undefined4)(thunk_FUN_103d4f80(uVar5));
  thunk_FUN_102473e0();
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_28))->int_release();
  local_28 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((SCStr *)((SCStr *)&local_2c))->int_release();
  local_2c = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  ((SCStr *)((SCStr *)&local_20))->int_release();
  local_20 = (undefined4)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
  ((SCStr *)((SCStr *)&local_24))->int_release();
  local_24 = (undefined4)(0);
  local_8 = (undefined4)(0x10);
  ((SCStr *)(local_38))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar5);
}


// Reference entry 106cc040; body size 164 bytes.
#line 1 "ENTRY_106cc040"

undefined4 __fastcall FUN_106cc040(int param_1)

{
  bool bVar1;
  SCStr *this_;
  SCStr aSStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115de12d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  this_ = (SCStr *)((SCStr *)(**(code **)(**(int **)(param_1 + 0x2c) + 0x1c))());
  local_8 = (undefined4)(0);
  uStack_34 = (undefined4)(0x106cc08a);
  bVar1 = (bool)(((SCStr *)(this_))->op_eq((SCStr *)&DAT_121a10dc));
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(0xffffffff);
  if (!bVar1) {
    uStack_34 = (undefined4)(0);
    uStack_38 = (undefined4)(0);
    ((SCStr *)(aSStack_3c))->int_allocRep("Dismissed from Setup Home");
    thunk_FUN_106bc2c0(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x34));
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 106cc880; body size 67 bytes.
#line 1 "ENTRY_106cc880"

void __thiscall Recovered_Bulk::FUN_106cc880(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  if (piVar1 != *(int **)(param_1 + 8)) {
    iVar2 = (int)(*param_2);
    *piVar1 = (int)(iVar2);
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar2 + -0x10));
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_106ab210(piVar1,param_2);
  return;
}


// Reference entry 106cc8e0; body size 103 bytes.
#line 1 "ENTRY_106cc8e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106cc8e0(undefined4 *param_2,SCStr *param_3)
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


// Reference entry 106cc960; body size 125 bytes.
#line 1 "ENTRY_106cc960"

undefined4 * __thiscall Recovered_Bulk::FUN_106cc960(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIEventSink"));
  if (bVar1) {
    if (param_1 == (int *)0xc8) {
      param_1 = (int *)((int *)0x0);
    }
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
    if (param_1 == (int *)0xc8) {
      param_1 = (int *)((int *)0x0);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 106cd8c0; body size 240 bytes.
#line 1 "ENTRY_106cd8c0"

void __thiscall Recovered_Bulk::FUN_106cd8c0(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115de4bd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("|");
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  uVar2 = (undefined4)(thunk_FUN_101a2e90(&local_1c,&param_2,&local_14,uVar1));
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  thunk_FUN_101a2e90(&local_18,uVar2,&stack0x00000008);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if (local_18 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(local_18);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  (**(code **)(**(int **)(param_1 + 300) + 0x14))(puVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined1 *)((undefined1 *)0x0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (undefined4)(0);
  local_8 = (undefined4)(0xb);
  ((SCStr *)((SCStr *)&stack0x00000008))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106cdbf0; body size 161 bytes.
#line 1 "ENTRY_106cdbf0"

void __thiscall Recovered_Bulk::FUN_106cdbf0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  undefined1 local_1c [8];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115de550);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_106ab920(local_1c,&param_2);
  if ((*(char *)(local_14 + 0xd) != '\0') || (param_2 < *(int *)(local_14 + 0x10))) {
    local_14 = (int)(*(int *)(param_1 + 0xc));
  }
  if (local_14 != *(int *)(param_1 + 0xc)) {
    iVar2 = (int)(thunk_FUN_106b9580(local_14));
    local_8 = (undefined4)(0);
    ((SCStr *)((SCStr *)(iVar2 + 0x1c)))->int_release();
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_1148a50e(iVar2,0x28,uVar1);
    thunk_FUN_106cf990();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106ce420; body size 64 bytes.
#line 1 "ENTRY_106ce420"

void FUN_106ce420(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115de720);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106ce480; body size 64 bytes.
#line 1 "ENTRY_106ce480"

void FUN_106ce480(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115de75d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(3);
  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106ce4d0; body size 344 bytes.
#line 1 "ENTRY_106ce4d0"

undefined1 FUN_106ce4d0(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  SCLibrary *this_;
  undefined4 uVar5;
  undefined1 uVar6;
  int **ppiVar7;
  int *local_2c;
  int *local_28;
  SCStr local_1c [4];
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115de7cd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)thunk_FUN_1023a9c0(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
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
  iVar4 = (int)((**(code **)(*piVar1 + 0x14))());
  if (iVar4 == 1) {
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("returning empty list, in searching state");
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    ((SCStr *)((SCStr *)&local_18))->int_release();
    uVar6 = (undefined1)(1);
  }
  else {
    ppiVar7 = (int **)(&local_18);
    this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    uVar5 = (undefined4)(((SCLibrary *)(this_))->getSCHousehold());
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    thunk_FUN_101bf370(uVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))(ppiVar7);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    cVar2 = (char)((**(code **)(*local_2c + 0x58))());
    if (cVar2 == '\0') {
      cVar2 = (char)((**(code **)(*piVar1 + 100))());
      if (cVar2 == '\0') {
        uVar6 = (undefined1)(0);
      }
      else {
        ((SCStr *)(local_1c))->int_allocRep("returning empty list, updating");
        *(unsigned char *)((char *)&local_8 + 0) = 0x13;
        ((SCStr *)(local_1c))->int_release();
        uVar6 = (undefined1)(1);
      }
    }
    else {
      ((SCStr *)((SCStr *)&local_14))->int_allocRep("returning empty list, connecting");
      *(unsigned char *)((char *)&local_8 + 0) = 0xe;
      ((SCStr *)((SCStr *)&local_14))->int_release();
      uVar6 = (undefined1)(1);
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x17)));
    if (local_28 != (int *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
  }
  local_8 = (undefined4)(0x18);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar6);
}


// Reference entry 106ce680; body size 259 bytes.
#line 1 "ENTRY_106ce680"

void __thiscall Recovered_Bulk::FUN_106ce680(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115de82d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("|");
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  uVar2 = (undefined4)(thunk_FUN_101a2e90(&local_1c,&param_2,&local_14,uVar1));
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  thunk_FUN_101a2e90(&local_18,uVar2,&stack0x00000008);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_24 = (undefined1 *)(&DAT_1186d2ee);
  local_20 = (undefined1)(0);
  local_28 = (undefined1 *)(&DAT_1186d2ee);
  if (local_18 != (undefined1 *)0x0) {
    local_28 = (undefined1 *)(local_18);
  }
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  (**(code **)(**(int **)(param_1 + 300) + 0x20))(&local_28,1);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined1 *)((undefined1 *)0x0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (undefined4)(0);
  local_8 = (undefined4)(0xb);
  ((SCStr *)((SCStr *)&stack0x00000008))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106cec40; body size 646 bytes.
#line 1 "ENTRY_106cec40"

void __fastcall FUN_106cec40(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115de955);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)(param_1 + 0x1ac));
  thunk_FUN_10478ea0(*puVar2,*(undefined4 *)(param_1 + 0x1b0),puVar2,
                     DAT_12126b84 ^ (uint)&stack0xfffffffc);
  *(undefined4 *)(param_1 + 0x1b0) = *puVar2;
  uVar5 = (uint)(-(uint)(param_1 != 0) & param_1 + 0x90U);
  thunk_FUN_10288040(uVar5);
  thunk_FUN_1028b250(uVar5);
  thunk_FUN_103434a0(-(uint)(param_1 != 0) & param_1 + 0x94U);
  uVar5 = (uint)(-(uint)(param_1 != 0) & param_1 + 0x98U);
  thunk_FUN_10bcad90(uVar5);
  thunk_FUN_10bcb5c0(uVar5);
  uVar5 = (uint)(-(uint)(param_1 != 0) & param_1 + 200U);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1023a9c0(&local_14));
  local_8 = (undefined4)(0);
  (**(code **)(*(int *)*puVar2 + 0x28))(uVar5);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(0xffffffff);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101da4a0(&local_14));
  local_8 = (undefined4)(2);
  (**(code **)(*(int *)*puVar2 + 0x38))(uVar5);
  local_8 = (undefined4)(3);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(0xffffffff);
  uVar6 = (uint)(-(uint)(param_1 != 0) & param_1 + 0xc4U);
  thunk_FUN_105bebd0(uVar6);
  thunk_FUN_10ef82c0(uVar6);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x90))(&local_14));
  piVar1 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(4);
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    local_20 = (int *)((int *)0x0);
  }
  else {
    local_20 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x30))(uVar5);
  }
  if (*(int **)(param_1 + 0x130) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x130) + 0x70))(uVar5);
  }
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x18))(&local_1c));
  piVar1 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  *piVar4 = (int)(0);
  local_18 = (int *)(piVar1);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  local_14 = (int *)(piVar4);
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xcc))(*(undefined4 *)(param_1 + 0xd4));
  }
  thunk_FUN_1059d800();
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc)));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  local_8 = (undefined4)(0xd);
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106cf050; body size 104 bytes.
#line 1 "ENTRY_106cf050"

void __thiscall Recovered_Bulk::FUN_106cf050(undefined4 param_2)
{
  int param_1 = (int )this;
  char cVar1;
  undefined4 uVar2;
  
  if ((char)param_2 == '\0') {
    if (*(int *)(param_1 + 0xfc) == 0) goto LAB_106cf0a8;
    cVar1 = (char)(thunk_FUN_1059d120(*(int *)(param_1 + 0xfc)));
    if (cVar1 == '\0') goto LAB_106cf0a8;
    uVar2 = (undefined4)(*(undefined4 *)(param_1 + 0xfc));
  }
  else {
    if (*(int *)(param_1 + 0xf8) == 0) goto LAB_106cf0a8;
    cVar1 = (char)(thunk_FUN_1059d120(*(int *)(param_1 + 0xf8)));
    if (cVar1 == '\0') goto LAB_106cf0a8;
    uVar2 = (undefined4)(*(undefined4 *)(param_1 + 0xf8));
  }
  thunk_FUN_1059d940(uVar2);
LAB_106cf0a8:
  thunk_FUN_106c94c0(param_2);
  return;
}


// Reference entry 106cf140; body size 103 bytes.
#line 1 "ENTRY_106cf140"

void __fastcall FUN_106cf140(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_1059d120(*(undefined4 *)(param_1 + 0xf8)));
  if (cVar1 != '\0') {
    thunk_FUN_1059d940(*(undefined4 *)(param_1 + 0xf8));
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  cVar1 = (char)(thunk_FUN_1059d120(*(undefined4 *)(param_1 + 0xfc)));
  if (cVar1 != '\0') {
    thunk_FUN_1059d940(*(undefined4 *)(param_1 + 0xfc));
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  return;
}


// Reference entry 106cf990; body size 184 bytes.
#line 1 "ENTRY_106cf990"

undefined1 FUN_106cf990(void)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115deac5);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_106c5390(&local_18);
  local_8 = (undefined4)(0);
  thunk_FUN_106c17b0(&local_14);
  local_1c = (undefined1)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  local_24 = (undefined1 *)(&DAT_1186d2ee);
  if (local_18 != (undefined1 *)0x0) {
    local_24 = (undefined1 *)(local_18);
  }
  local_20 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    local_20 = (undefined1 *)(local_14);
  }
  uVar1 = (undefined1)((**(code **)(**(int **)(DAT_121a2650 + 0x124) + 0x20))(&local_24,1,uVar2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined1 *)((undefined1 *)0x0);
  local_8 = (undefined4)(3);
  ((SCStr *)((SCStr *)&local_18))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 106cfe90; body size 93 bytes.
#line 1 "ENTRY_106cfe90"

int __thiscall Recovered_Bulk::FUN_106cfe90(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115deb5d);
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


// Reference entry 106cffb0; body size 177 bytes.
#line 1 "ENTRY_106cffb0"

void __fastcall FUN_106cffb0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115deb90);
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


// Reference entry 106d0100; body size 162 bytes.
#line 1 "ENTRY_106d0100"

void __fastcall FUN_106d0100(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115debc0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDiagnostics);
  param_1[2] = (uint)&ghidra_vftable_SCDiagnostics;
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 0x20)))->int_release();
  param_1[0x20] = 0;
  thunk_FUN_106cffb0(uVar2);
  param_1[2] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[4]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106d0310; body size 186 bytes.
#line 1 "ENTRY_106d0310"

undefined4 * __thiscall Recovered_Bulk::FUN_106d0310(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115dec30);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDiagnostics);
  param_1[2] = (uint)&ghidra_vftable_SCDiagnostics;
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 0x20)))->int_release();
  param_1[0x20] = 0;
  thunk_FUN_106cffb0(uVar2);
  param_1[2] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[4]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x88);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 106d0660; body size 297 bytes.
#line 1 "ENTRY_106d0660"

void __thiscall Recovered_Bulk::FUN_106d0660(int param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115def55);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (int)(param_1);
  if (*(int **)(param_1 + 0x14) == (int *)0x0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x14) + 0x20))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  }
  if (iVar2 == param_2) {
    piVar1 = (int *)(*(int **)(param_1 + 0x14));
    if ((short)param_3 == 0) {
      puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*piVar1 + 0x3c))(&local_14));
      local_8 = (undefined4)(0);
      puVar4 = (undefined4 *)((undefined4 *)(**(code **)(*piVar1 + 0x40))(&param_3));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      puVar6 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
        puVar6 = (undefined1 *)((undefined1 *)*puVar3);
      }
      puVar7 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
        puVar7 = (undefined1 *)((undefined1 *)*puVar4);
      }
      uVar5 = (undefined4)((**(code **)(*piVar1 + 0x30))(puVar6));
      thunk_FUN_112af4e0("diagnostics",1,"Local diagnostics (%s) submitted (ID: %u, GUID: %s)",
                         puVar7,uVar5);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
      ((SCStr *)((SCStr *)&param_3))->int_release();
      param_3 = (undefined4)(0);
      local_8 = (undefined4)(3);
      ((SCStr *)((SCStr *)&local_14))->int_release();
    }
    else {
      puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*piVar1 + 0x38))(&param_2));
      puVar6 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
        puVar6 = (undefined1 *)((undefined1 *)*puVar3);
      }
      thunk_FUN_112af4e0("diagnostics",1,"Local diagnostics submit error: %s",puVar6);
      local_8 = (undefined4)(4);
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int)(0);
    }
    local_8 = (undefined4)(0xffffffff);
    (**(code **)(*(int *)(param_1 + 0x10) + 4))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106d07e0; body size 511 bytes.
#line 1 "ENTRY_106d07e0"

undefined1 FUN_106d07e0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 uVar6;
  int *piVar7;
  int *local_3c;
  int *local_38;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115defdf);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)thunk_FUN_1037a2b0(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar5 = (int *)((int *)*piVar1);
  local_8 = (undefined4)(0);
  *piVar1 = (int)(0);
  if (piVar5 == (int *)0x0) {
    local_28 = (int *)((int *)0x0);
  }
  else {
    local_28 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar5 == (int *)0x0) {
    uVar6 = (undefined1)(0);
  }
  else {
    uVar2 = (undefined4)(thunk_FUN_103798e0(&local_20));
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    thunk_FUN_101b9270(uVar2);
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if ((local_3c == (int *)0x0) || (iVar3 = thunk_FUN_10323ac0(), iVar3 != 3)) {
      uVar6 = (undefined1)(0);
    }
    else {
      puVar4 = (undefined4 *)((undefined4 *)(**(code **)(*local_3c + 0x94))(&local_24));
      local_20 = (int *)((int *)*puVar4);
      *(unsigned char *)((char *)&local_8 + 0) = 0xb;
      *puVar4 = (undefined4)(0);
      if (local_20 == (int *)0x0) {
        piVar5 = (int *)((int *)0x0);
      }
      else {
        piVar5 = (int *)((int *)(**(code **)(*local_20 + 0xc))());
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0xe;
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0xd;
      piVar1 = (int *)(operator_new(0x1c));
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)((int *)0x0);
      }
      else {
        *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
        piVar1[1] = 0;
        g_lSCObjCount = (int)(g_lSCObjCount + 1);
        *(unsigned char *)((char *)&local_8 + 0) = 0x10;
        *piVar1 = (int)((int)(uint)&ghidra_vftable_SCVersion);
        local_18 = (int *)(piVar1);
        ((SCStr *)((SCStr *)(piVar1 + 6)))->int_allocRep("");
        *(unsigned char *)((char *)&local_8 + 0) = 0x11;
        thunk_FUN_101b8f90(0x40,2,0x3aac);
      }
      piVar7 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0xd;
      local_18 = (int *)((int *)0x0);
      local_1c = (int *)(piVar1);
      if (piVar1 != (int *)0x0) {
        piVar7 = (int *)(piVar1);
        if (*(code **)(*piVar1 + 0xc) != thunk_FUN_101b87c0) {
          piVar7 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
        }
        local_18 = (int *)(piVar7);
        (**(code **)(*piVar7 + 4))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x12;
      iVar3 = (int)((**(code **)(*local_20 + 0x38))(piVar1));
      local_11 = (undefined1)(-1 < iVar3);
      *(unsigned char *)((char *)&local_8 + 0) = 0x16;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x17;
      uVar6 = (undefined1)(local_11);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))();
        uVar6 = (undefined1)(local_11);
      }
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x18)));
    if (local_38 != (int *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
  }
  local_8 = (undefined4)(0x19);
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar6);
}


// Reference entry 106d0ca0; body size 135 bytes.
#line 1 "ENTRY_106d0ca0"

void __fastcall FUN_106d0ca0(int param_1)

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


// Reference entry 106d0d60; body size 103 bytes.
#line 1 "ENTRY_106d0d60"

undefined4 * __thiscall Recovered_Bulk::FUN_106d0d60(undefined4 *param_2,SCStr *param_3)
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


// Reference entry 106d1940; body size 171 bytes.
#line 1 "ENTRY_106d1940"

undefined4 __thiscall Recovered_Bulk::FUN_106d1940(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115df1b0);
  uVar5 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar4 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  while (ExceptionList = ppvVar4, cVar1 == '\0') {
    thunk_FUN_106d1940(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    piVar3 = (int *)((int *)param_3[6]);
    local_8 = (undefined4)(0);
    if (piVar3 != (int *)0x0) {
      param_3[5] = 0;
      param_3[6] = 0;
      (**(code **)(*piVar3 + 8))(uVar5);
    }
    local_8 = (undefined4)(1);
    ((SCStr *)((SCStr *)(param_3 + 4)))->int_release();
    param_3[4] = 0;
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_1148a50e(param_3,0x1c);
    ppvVar4 = (void **)(ExceptionList);
    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 106d1b00; body size 122 bytes.
#line 1 "ENTRY_106d1b00"

void FUN_106d1b00(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115df1e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_2 + 0x18));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)(param_2 + 0x10)))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e(param_2,0x1c);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106d29d0; body size 83 bytes.
#line 1 "ENTRY_106d29d0"

void __fastcall FUN_106d29d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115df490);
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
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 106d2a40; body size 76 bytes.
#line 1 "ENTRY_106d2a40"

void __fastcall FUN_106d2a40(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115df4c0);
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


// Reference entry 106d2b30; body size 84 bytes.
#line 1 "ENTRY_106d2b30"

void __fastcall FUN_106d2b30(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115df520);
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


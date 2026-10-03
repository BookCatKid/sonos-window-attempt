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
extern int FUN_105f07f0(...);
extern int FUN_105f08c0(...);
extern int FUN_105f0b80(...);
extern int FUN_105f0ba0(...);
extern __declspec(dllimport) int _errno(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int atoi(...);
extern int createActionContextForAction(...);
extern int createDisplayWizardAction(...);
extern int endsWith(...);
extern __declspec(dllimport) int fclose(...);
extern __declspec(dllimport) int feof(...);
extern int getSCHousehold(...);
extern int getSingleton(...);
extern int int_allocRep(...);
extern int int_release(...);
extern __declspec(dllimport) int memmove(...);
extern int on(...);
extern int operator_new(...);
extern __declspec(dllimport) int stat64i32(...);
extern __declspec(dllimport) int strncmp(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_10129760(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012cdb0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a33f0(...);
extern int thunk_FUN_101aa810(...);
extern int thunk_FUN_101b5540(...);
extern int thunk_FUN_101b5de0(...);
extern int thunk_FUN_101b5e50(...);
extern int thunk_FUN_101b94f0(...);
extern int thunk_FUN_101bc3e0(...);
extern int thunk_FUN_101caf40(...);
extern int thunk_FUN_101da4a0(...);
extern int thunk_FUN_101dccc0(...);
extern int thunk_FUN_101f4a30(...);
extern int thunk_FUN_101f6530(...);
extern int thunk_FUN_10211630(...);
extern int thunk_FUN_102116d0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_1023a9b0(...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_1027ee20(...);
extern int thunk_FUN_102bce30(...);
extern int thunk_FUN_102caa30(...);
extern int thunk_FUN_102f8990(...);
extern int thunk_FUN_10309e90(...);
extern int thunk_FUN_1031d470(...);
extern int thunk_FUN_1031d730(...);
extern int thunk_FUN_103434a0(...);
extern int thunk_FUN_10351370(...);
extern int thunk_FUN_1037a2b0(...);
extern int thunk_FUN_1037d020(...);
extern int thunk_FUN_1037f130(...);
extern int thunk_FUN_104cb6d0(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_1059d5a0(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_1059dd40(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105a1f40(...);
extern int thunk_FUN_105a26b0(...);
extern int thunk_FUN_105a5630(...);
extern int thunk_FUN_105a5690(...);
extern int thunk_FUN_105a7950(...);
extern int thunk_FUN_105aca80(...);
extern int thunk_FUN_105b3de0(...);
extern int thunk_FUN_105b63f0(...);
extern int thunk_FUN_105b6490(...);
extern int thunk_FUN_105b6a20(...);
extern int thunk_FUN_105b6d40(...);
extern int thunk_FUN_105b6da0(...);
extern int thunk_FUN_105b6ed0(...);
extern int thunk_FUN_105b71f0(...);
extern int thunk_FUN_105b7bd0(...);
extern int thunk_FUN_105b9630(...);
extern int thunk_FUN_105b9d30(...);
extern int thunk_FUN_105b9f10(...);
extern int thunk_FUN_105ba0d0(...);
extern int thunk_FUN_105ba370(...);
extern int thunk_FUN_105bc210(...);
extern int thunk_FUN_105bebd0(...);
extern int thunk_FUN_105c2b30(...);
extern int thunk_FUN_105c33c0(...);
extern int thunk_FUN_105ca4f0(...);
extern int thunk_FUN_105ce870(...);
extern int thunk_FUN_105ce910(...);
extern int thunk_FUN_105cee40(...);
extern int thunk_FUN_105cef80(...);
extern int thunk_FUN_105cf380(...);
extern int thunk_FUN_105d0180(...);
extern int thunk_FUN_105d0590(...);
extern int thunk_FUN_105d1280(...);
extern int thunk_FUN_105d2090(...);
extern int thunk_FUN_105d2c90(...);
extern int thunk_FUN_105de4b0(...);
extern int thunk_FUN_105e71e0(...);
extern int thunk_FUN_105e7240(...);
extern int thunk_FUN_105e7540(...);
extern int thunk_FUN_105f2130(...);
extern int thunk_FUN_105f2b00(...);
extern int thunk_FUN_105f34e0(...);
extern int thunk_FUN_105f36d0(...);
extern int thunk_FUN_105f38c0(...);
extern int thunk_FUN_105f4090(...);
extern int thunk_FUN_105f4340(...);
extern int thunk_FUN_105f5a00(...);
extern int thunk_FUN_105f5df0(...);
extern int thunk_FUN_105f60e0(...);
extern int thunk_FUN_105f6290(...);
extern int thunk_FUN_105f98d0(...);
extern int thunk_FUN_105f9a80(...);
extern int thunk_FUN_105f9e40(...);
extern int thunk_FUN_105fce60(...);
extern int thunk_FUN_10604790(...);
extern int thunk_FUN_10604820(...);
extern int thunk_FUN_10604d60(...);
extern int thunk_FUN_10604dd0(...);
extern int thunk_FUN_10604e40(...);
extern int thunk_FUN_10604eb0(...);
extern int thunk_FUN_10604f20(...);
extern int thunk_FUN_106050a0(...);
extern int thunk_FUN_106052d0(...);
extern int thunk_FUN_10610c60(...);
extern int thunk_FUN_1061c630(...);
extern int thunk_FUN_106da030(...);
extern int thunk_FUN_106da680(...);
extern int thunk_FUN_106de0c0(...);
extern int thunk_FUN_106de2c0(...);
extern int thunk_FUN_106dfa00(...);
extern int thunk_FUN_106dfb80(...);
extern int thunk_FUN_106dfcc0(...);
extern int thunk_FUN_106e1380(...);
extern int thunk_FUN_106e3e70(...);
extern int thunk_FUN_10758340(...);
extern int thunk_FUN_107593f0(...);
extern int thunk_FUN_107626d0(...);
extern int thunk_FUN_10762e20(...);
extern int thunk_FUN_10767860(...);
extern int thunk_FUN_10767d40(...);
extern int thunk_FUN_1077bcd0(...);
extern int thunk_FUN_1077bf70(...);
extern int thunk_FUN_10811c10(...);
extern int thunk_FUN_10812740(...);
extern int thunk_FUN_10818140(...);
extern int thunk_FUN_10819ab0(...);
extern int thunk_FUN_10873290(...);
extern int thunk_FUN_10874b00(...);
extern int thunk_FUN_108fb850(...);
extern int thunk_FUN_108fc3e0(...);
extern int thunk_FUN_10905580(...);
extern int thunk_FUN_10907260(...);
extern int thunk_FUN_10916c20(...);
extern int thunk_FUN_10919b50(...);
extern int thunk_FUN_1092b700(...);
extern int thunk_FUN_10948f60(...);
extern int thunk_FUN_10949d90(...);
extern int thunk_FUN_109a6790(...);
extern int thunk_FUN_109a85f0(...);
extern int thunk_FUN_109edf50(...);
extern int thunk_FUN_109eeaf0(...);
extern int thunk_FUN_10bb5460(...);
extern int thunk_FUN_10c2eca0(...);
extern int thunk_FUN_10c2f5a0(...);
extern int thunk_FUN_10c5f1d0(...);
extern int thunk_FUN_10c5f450(...);
extern int thunk_FUN_10c5f8a0(...);
extern int thunk_FUN_10c61010(...);
extern int thunk_FUN_10c61ec0(...);
extern int thunk_FUN_10c62d50(...);
extern int thunk_FUN_10c96760(...);
extern int thunk_FUN_10c97610(...);
extern int thunk_FUN_10c97f60(...);
extern int thunk_FUN_10c98710(...);
extern int thunk_FUN_10c987f0(...);
extern int thunk_FUN_10c9a720(...);
extern int thunk_FUN_10c9c980(...);
extern int thunk_FUN_10cb7e00(...);
extern int thunk_FUN_10cb7ef0(...);
extern int thunk_FUN_10cb7fe0(...);
extern int thunk_FUN_10cb80d0(...);
extern int thunk_FUN_10cb86d0(...);
extern int thunk_FUN_10cb87b0(...);
extern int thunk_FUN_10cf2f30(...);
extern int thunk_FUN_10cf34e0(...);
extern int thunk_FUN_10cf3630(...);
extern int thunk_FUN_10cf41d0(...);
extern int thunk_FUN_10cf5250(...);
extern int thunk_FUN_10dd1440(...);
extern int thunk_FUN_10deea50(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10df2df0(...);
extern int thunk_FUN_10e0ac90(...);
extern int thunk_FUN_10e0f250(...);
extern int thunk_FUN_10e0f500(...);
extern int thunk_FUN_10e12a10(...);
extern int thunk_FUN_10e23140(...);
extern int thunk_FUN_10e26cb0(...);
extern int thunk_FUN_10e5d4a0(...);
extern int thunk_FUN_10e83400(...);
extern int thunk_FUN_10e89980(...);
extern int thunk_FUN_10e9cfd0(...);
extern int thunk_FUN_10eaafe0(...);
extern int thunk_FUN_10eab1c0(...);
extern int thunk_FUN_10eacce0(...);
extern int thunk_FUN_10eace90(...);
extern int thunk_FUN_10ead100(...);
extern int thunk_FUN_10ead150(...);
extern int thunk_FUN_10eae0a0(...);
extern int thunk_FUN_10eae0f0(...);
extern int thunk_FUN_10eae120(...);
extern int thunk_FUN_10eae150(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
extern int thunk_FUN_10eb64f0(...);
extern int thunk_FUN_10eb6cc0(...);
extern int thunk_FUN_10ebc060(...);
extern int thunk_FUN_10ebc110(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ec0a20(...);
extern int thunk_FUN_10ec1250(...);
extern int thunk_FUN_10ec1a10(...);
extern int thunk_FUN_10ec1b40(...);
extern int thunk_FUN_10ec1c00(...);
extern int thunk_FUN_10ec1d40(...);
extern int thunk_FUN_10ec7940(...);
extern int thunk_FUN_10eca460(...);
extern int thunk_FUN_10ecb760(...);
extern int thunk_FUN_10ecb9f0(...);
extern int thunk_FUN_10ecbaa0(...);
extern int thunk_FUN_10ecbbd0(...);
extern int thunk_FUN_10ecbc60(...);
extern int thunk_FUN_10ecd540(...);
extern int thunk_FUN_10ecea60(...);
extern int thunk_FUN_10eced20(...);
extern int thunk_FUN_10eceeb0(...);
extern int thunk_FUN_10edf540(...);
extern int thunk_FUN_10ee0ce0(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_110cb6d0(...);
extern int thunk_FUN_110cb840(...);
extern int thunk_FUN_110cc080(...);
extern int thunk_FUN_110cdcd0(...);
extern int thunk_FUN_110ce190(...);
extern int thunk_FUN_111c06e0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_111c0a80(...);
extern int thunk_FUN_111fc6a0(...);
extern int thunk_FUN_111fc6d0(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_1124f2e0(...);
extern int thunk_FUN_1124f320(...);
extern int thunk_FUN_1124f350(...);
extern int thunk_FUN_1124f3c0(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_113d2490(...);
extern int thunk_FUN_113d2660(...);
extern int thunk_FUN_113d2860(...);
extern int thunk_FUN_11457630(...);
extern int thunk_FUN_11457d80(...);
extern int thunk_FUN_11457ec0(...);
extern int thunk_FUN_11458170(...);
extern int thunk_FUN_1145cb70(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b586(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11882ff0;
extern int DAT_11883704;
extern int DAT_1188465c;
extern int DAT_11884fe8;
extern int DAT_118876d0;
extern int DAT_118947c0;
extern int DAT_118947c4;
extern int DAT_118a1338;
extern int DAT_118bd270;
extern int DAT_118bd5c0;
extern int DAT_12126b84;
extern int DAT_121a12a8;
extern int DAT_121a12b0;
extern int DAT_121a2128;
extern int DAT_121a212c;
extern int DAT_121a2130;
extern int DAT_121a2134;
extern int DAT_121a2138;
extern int DAT_121a213c;
extern int DAT_121a2140;
extern int DAT_121a2144;
extern int DAT_121a2148;
extern int DAT_121a214c;
extern int DAT_121a2150;
extern int DAT_121a2154;
extern int DAT_121a2158;
extern int DAT_121a215c;
extern int DAT_121a2160;
extern int DAT_121a2164;
extern int DAT_121a2168;
extern int DAT_121a216c;
extern int DAT_121a2170;
extern int DAT_121a2174;
extern int DAT_121a2178;
extern int DAT_121a217c;
extern int DAT_121a2180;
extern int DAT_121a2184;
extern int DAT_121a2188;
extern int DAT_121a218c;
extern int DAT_121a2190;
extern int DAT_121a2194;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RHttpGetNoRedirectAIOOp;
extern int ghidra_vftable_RHttpPostNoRedirectAIOOp;
extern int ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp;
extern int ghidra_vftable_RUpnpAISetLineInLevelAIOOp;
extern int ghidra_vftable_RUpnpAVTSetPlayModeAIOOp;
extern int ghidra_vftable_RUpnpDPGetZoneAttributesAIOOp;
extern int ghidra_vftable_RUpnpDPSetAutoplayRoomUUIDAIOOp;
extern int ghidra_vftable_RUpnpDPSetLEDStateAIOOp;
extern int ghidra_vftable_RUpnpRCSetOutputFixedAIOOp;
extern int ghidra_vftable_RUpnpRCSetRoomCalibrationStatusAIOOp;
extern int ghidra_vftable_RUpnpSPSetStringAIOOp;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCChangeEmailWizard;
extern int ghidra_vftable_SCChickenExitAction;
extern int ghidra_vftable_SCCompoundAction;
extern int ghidra_vftable_SCConditionalElementTree;
extern int ghidra_vftable_SCConditionalVectorBuilderTree;
extern int ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface;
extern int ghidra_vftable_SCConfirmHideOfflineDevice;
extern int ghidra_vftable_SCCreateAndSummonNewWizActionDescriptorFor;
extern int ghidra_vftable_SCDisplayWizardNeedingTokenAction;
extern int ghidra_vftable_SCElapsedTimeMeasurement;
extern int ghidra_vftable_SCFactoryResetAction;
extern int ghidra_vftable_SCForgetHouseholdAction;
extern int ghidra_vftable_SCHideOfflineDeviceSignIn;
extern int ghidra_vftable_SCHideOfflineDeviceSignInDescriptor;
extern int ghidra_vftable_SCIActionDelegate;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIncrementHHSwgenAndOnlineUpdateWizardAction;
extern int ghidra_vftable_SCLegacyWelcomeLoginWizardAction;
extern int ghidra_vftable_SCNewWizControllerFor;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCNewWizStateTypeFor;
extern int ghidra_vftable_SCOfflineDeviceHiddenConfirmation;
extern int ghidra_vftable_SCOfflineTroubleshootAction;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpRenderingControlSetRoomCalibrationStatus;
extern int ghidra_vftable_SCResetDismissedServicesAction;
extern int ghidra_vftable_SCSecureTransferWizardActionDescriptor;
extern int ghidra_vftable_SCSetupAssetSet;
extern int ghidra_vftable_SCSubwizStateFor;
extern int ghidra_vftable_SCWifiConfigAccountRequiredSubwiz;
extern int ghidra_vftable_SCWifiConfigAccountRequiredSubwizType;
extern int ghidra_vftable_SCWifiConfigApConnectSubwiz;
extern int ghidra_vftable_SCWifiConfigApConnectSubwizType;
extern int ghidra_vftable_SCWifiConfigApInstructionsSubwiz;
extern int ghidra_vftable_SCWifiConfigApInstructionsSubwizType;
extern int ghidra_vftable_SCWifiConfigAppVersionCheckSubwiz;
extern int ghidra_vftable_SCWifiConfigAppVersionCheckSubwizType;
extern int ghidra_vftable_SCWifiConfigAskNetworkModifiedPage;
extern int ghidra_vftable_SCWifiConfigAskNetworkModifiedPageType;
extern int ghidra_vftable_SCWifiConfigAskUnplugEthernetPage;
extern int ghidra_vftable_SCWifiConfigAskUnplugEthernetPageType;
extern int ghidra_vftable_SCWifiConfigBleConnectSubwiz;
extern int ghidra_vftable_SCWifiConfigBleConnectSubwizType;
extern int ghidra_vftable_SCWifiConfigConnectRecoverySubwiz;
extern int ghidra_vftable_SCWifiConfigConnectRecoverySubwizType;
extern int ghidra_vftable_SCWifiConfigDevicePermissionsSubwiz;
extern int ghidra_vftable_SCWifiConfigDevicePermissionsSubwizType;
extern int ghidra_vftable_SCWifiConfigHouseholdSelectionSubwiz;
extern int ghidra_vftable_SCWifiConfigHouseholdSelectionSubwizType;
extern int ghidra_vftable_SCWifiConfigInformWiredConnectionPage;
extern int ghidra_vftable_SCWifiConfigInformWiredConnectionPageType;
extern int ghidra_vftable_SCWifiConfigIntroPage;
extern int ghidra_vftable_SCWifiConfigIntroPageType;
extern int ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwiz;
extern int ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwizType;
extern int ghidra_vftable_SCWifiConfigNetworkCredentialsSubwiz;
extern int ghidra_vftable_SCWifiConfigNetworkCredentialsSubwizType;
extern int ghidra_vftable_SCWifiConfigPlayerOutOfDatePage;
extern int ghidra_vftable_SCWifiConfigPlayerOutOfDatePageType;
extern int ghidra_vftable_SCWifiConfigPlayerSelectionSubwiz;
extern int ghidra_vftable_SCWifiConfigPlayerSelectionSubwizType;
extern int ghidra_vftable_SCWifiConfigSecureAuthenticationSubwiz;
extern int ghidra_vftable_SCWifiConfigSecureAuthenticationSubwizType;
extern int ghidra_vftable_SCWifiConfigSetupCardBleFoundPage;
extern int ghidra_vftable_SCWifiConfigSetupCardBleFoundPageType;
extern int ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPage;
extern int ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPageType;
extern int ghidra_vftable_SCWifiConfigSetupCardNoNetworkPage;
extern int ghidra_vftable_SCWifiConfigSetupCardNoNetworkPageType;
extern int ghidra_vftable_SCWifiConfigSetupCardNothingFoundPage;
extern int ghidra_vftable_SCWifiConfigSetupCardNothingFoundPageType;
extern int ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPage;
extern int ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPageType;
extern int ghidra_vftable_SCWifiConfigStartOpenApPage;
extern int ghidra_vftable_SCWifiConfigStartOpenApPageType;
extern int ghidra_vftable_SCWifiConfigSuccessPage;
extern int ghidra_vftable_SCWifiConfigSuccessPageType;
extern int ghidra_vftable_SCWifiConfigSystemIdSubwiz;
extern int ghidra_vftable_SCWifiConfigSystemIdSubwizType;
extern int ghidra_vftable_SCWifiConfigTroubleshootSubwiz;
extern int ghidra_vftable_SCWifiConfigTroubleshootSubwizType;
extern int ghidra_vftable_SCWifiConfigWizard;
extern int ghidra_vftable_SCWifiConfigWizardType;
extern int ghidra_vftable_SCWifiConfigWrongHHIDPage;
extern int ghidra_vftable_SCWifiConfigWrongHHIDPageType;
extern int ghidra_vftable_SetupFileTransferDownloadOp;
extern int ghidra_vftable_SetupFileTransferUploadOp;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_stack_00000028;
extern undefined1 LAB_105b06ab[];
extern undefined1 LAB_105b08e1[];
extern undefined1 LAB_105bc777[];
extern undefined1 LAB_105bfd82[];
extern undefined1 LAB_105c0137[];
extern undefined1 LAB_105c0d42[];
extern undefined1 LAB_105c0e75[];
extern undefined1 LAB_105c0e94[];
extern undefined1 LAB_105c0eb7[];
extern undefined1 LAB_105c7fb2[];
extern undefined1 LAB_105c824c[];
extern undefined1 LAB_105c834e[];
extern undefined1 LAB_105c8702[];
extern undefined1 LAB_105c8de2[];
extern undefined1 LAB_105c90fd[];
extern undefined1 LAB_105e3120[];
extern undefined1 LAB_105e93eb[];
extern undefined1 LAB_105f99e9[];
extern undefined1 LAB_105f9bd5[];
extern undefined1 LAB_105f9fde[];
extern undefined1 LAB_105fa048[];
extern undefined1 LAB_10605515[];
extern undefined1 LAB_106057c5[];
extern undefined1 LAB_10605a65[];
extern undefined1 LAB_10608679[];
extern undefined1 LAB_10608d85[];
extern undefined1 LAB_106095d5[];
extern undefined1 LAB_1060bd55[];
extern undefined1 LAB_115a85f0[];
extern undefined1 LAB_115a91fd[];
extern undefined1 LAB_115a923d[];
extern undefined1 LAB_115a9285[];
extern undefined1 LAB_115a92c5[];
extern undefined1 LAB_115a9305[];
extern undefined1 LAB_115a9345[];
extern undefined1 LAB_115a940d[];
extern undefined1 LAB_115a944d[];
extern undefined1 LAB_115a948d[];
extern undefined1 LAB_115a9975[];
extern undefined1 LAB_115a99b5[];
extern undefined1 LAB_115a9a21[];
extern undefined1 LAB_115a9ee0[];
extern undefined1 LAB_115a9f1d[];
extern undefined1 LAB_115aa205[];
extern undefined1 LAB_115aa245[];
extern undefined1 LAB_115aa3ed[];
extern undefined1 LAB_115aa42d[];
extern undefined1 LAB_115aa46d[];
extern undefined1 LAB_115aa4ad[];
extern undefined1 LAB_115aa5fd[];
extern undefined1 LAB_115aa65b[];
extern undefined1 LAB_115aa69d[];
extern undefined1 LAB_115aa6f3[];
extern undefined1 LAB_115aa72d[];
extern undefined1 LAB_115aaa08[];
extern undefined1 LAB_115aaf3d[];
extern undefined1 LAB_115aaf7d[];
extern undefined1 LAB_115aafbd[];
extern undefined1 LAB_115aaffd[];
extern undefined1 LAB_115ab03d[];
extern undefined1 LAB_115ab0cd[];
extern undefined1 LAB_115ab10d[];
extern undefined1 LAB_115ab1b5[];
extern undefined1 LAB_115ab2d7[];
extern undefined1 LAB_115ab875[];
extern undefined1 LAB_115ab8ad[];
extern undefined1 LAB_115ab905[];
extern undefined1 LAB_115ab955[];
extern undefined1 LAB_115ab98d[];
extern undefined1 LAB_115ab9cd[];
extern undefined1 LAB_115aba55[];
extern undefined1 LAB_115abafd[];
extern undefined1 LAB_115abf07[];
extern undefined1 LAB_115abf8d[];
extern undefined1 LAB_115ac078[];
extern undefined1 LAB_115ac160[];
extern undefined1 LAB_115ac941[];
extern undefined1 LAB_115acb4a[];
extern undefined1 LAB_115ad34a[];
extern undefined1 LAB_115ad405[];
extern undefined1 LAB_115ad44f[];
extern undefined1 LAB_115ad49f[];
extern undefined1 LAB_115ad4e7[];
extern undefined1 LAB_115ad535[];
extern undefined1 LAB_115ad575[];
extern undefined1 LAB_115ad5b5[];
extern undefined1 LAB_115ad66f[];
extern undefined1 LAB_115ad6b5[];
extern undefined1 LAB_115ad6f5[];
extern undefined1 LAB_115ad81f[];
extern undefined1 LAB_115ad8df[];
extern undefined1 LAB_115adaef[];
extern undefined1 LAB_115ae87d[];
extern undefined1 LAB_115ae8c5[];
extern undefined1 LAB_115ae91b[];
extern undefined1 LAB_115aed75[];
extern undefined1 LAB_115aee10[];
extern undefined1 LAB_115aee55[];
extern undefined1 LAB_115af125[];
extern undefined1 LAB_115af17b[];
extern undefined1 LAB_115af870[];
extern undefined1 LAB_115afa20[];
extern undefined1 LAB_115afa50[];
extern undefined1 LAB_115afa80[];
extern undefined1 LAB_115b169d[];
extern undefined1 LAB_115b177d[];
extern undefined1 LAB_115b17bd[];
extern undefined1 LAB_115b181f[];
extern undefined1 LAB_115b1874[];
extern undefined1 LAB_115b199d[];
extern undefined1 LAB_115b1ab1[];
extern undefined1 LAB_115b1b31[];
extern undefined1 LAB_115b1bb1[];
extern undefined1 LAB_115b1c31[];
extern undefined1 LAB_115b1cb1[];
extern undefined1 LAB_115b1db1[];
extern undefined1 LAB_115b2443[];
extern undefined1 LAB_115b2603[];
extern undefined1 LAB_115b26a2[];
extern undefined1 LAB_115b2713[];
extern undefined1 LAB_115b2a73[];
extern undefined1 LAB_115b30c1[];
extern undefined1 LAB_115b318d[];
extern undefined1 LAB_115b333d[];
extern undefined1 LAB_115b3b27[];
extern undefined1 LAB_115b3b77[];
extern undefined1 LAB_115b400d[];
extern undefined1 LAB_115b405d[];
extern undefined1 LAB_115b40ad[];
extern undefined1 LAB_115b4175[];
extern undefined1 LAB_115b41bd[];
extern undefined1 LAB_115b42ed[];
extern undefined1 LAB_115b437d[];
extern undefined1 LAB_115b4625[];
extern undefined1 LAB_115b465d[];
extern undefined1 LAB_115b469d[];
extern undefined1 LAB_115b46f5[];
extern undefined1 LAB_115b483d[];
extern undefined1 LAB_115b487d[];
extern undefined1 LAB_115b48d5[];
extern undefined1 LAB_115b491d[];
extern undefined1 LAB_115b495d[];
extern undefined1 LAB_115b49dd[];
extern undefined1 LAB_115b4a9d[];
extern undefined1 LAB_115b4add[];
extern undefined1 LAB_115b4cfd[];
extern undefined1 LAB_115b4d3d[];
extern undefined1 LAB_115b4d8d[];
extern undefined1 LAB_115b4ddd[];
extern undefined1 LAB_115b4e2d[];
extern undefined1 LAB_115b4e7d[];
extern undefined1 LAB_115b5015[];
extern undefined1 LAB_115b506d[];
extern undefined1 LAB_115b50f5[];
extern undefined1 LAB_115b5295[];
extern undefined1 LAB_115b53a5[];
extern undefined1 LAB_115b53e5[];
extern undefined1 LAB_115b5445[];
extern undefined1 LAB_115b5505[];
extern undefined1 LAB_115b56c0[];
extern undefined1 LAB_115b5750[];
extern undefined1 LAB_115b5780[];
extern undefined1 LAB_115b5b50[];
extern undefined1 LAB_115b5be0[];
extern undefined1 LAB_115b5c10[];
extern undefined1 LAB_115b5c95[];
extern undefined1 LAB_115b5ccd[];
extern undefined1 LAB_115b5d25[];
extern undefined1 LAB_115b5ded[];
extern undefined1 LAB_115b5e45[];
extern undefined1 LAB_115b5e8d[];
extern undefined1 LAB_115b5ef0[];
extern undefined1 LAB_115b5f80[];
extern undefined1 LAB_115b5fb0[];
extern undefined1 LAB_115b61cd[];
extern undefined1 LAB_115b6328[];
extern undefined1 LAB_115b63b0[];
extern undefined1 LAB_115b63f8[];
extern undefined1 LAB_115b65bd[];
extern undefined1 LAB_115b65fd[];
extern undefined1 LAB_115b663d[];
extern undefined1 LAB_115b6688[];
extern undefined1 LAB_115b66e0[];
extern undefined1 LAB_115b675d[];
extern undefined1 LAB_115b679d[];
extern undefined1 LAB_115b6828[];
extern undefined1 LAB_115b6908[];
extern undefined1 LAB_115b6958[];
extern undefined1 LAB_115b69a8[];
extern undefined1 LAB_115b6ab0[];
extern undefined1 LAB_115b6bc8[];
extern undefined1 LAB_115b6c80[];
extern undefined1 LAB_115b6ce0[];
extern undefined1 LAB_115b6d9e[];
extern undefined1 LAB_115b6dfe[];
extern undefined1 LAB_115b6e5e[];
extern undefined1 LAB_115b6ebe[];
extern undefined1 LAB_115b6f1e[];
extern undefined1 LAB_115b6f7e[];
extern undefined1 LAB_115b6fde[];
extern undefined1 LAB_115b703e[];
extern undefined1 LAB_115b709e[];
extern undefined1 LAB_115b70fe[];
extern undefined1 LAB_115b715e[];
extern undefined1 LAB_115b71be[];
extern undefined1 LAB_115b721e[];
extern undefined1 LAB_115b727e[];
extern undefined1 LAB_115b72de[];
extern undefined1 LAB_115b733e[];
extern undefined1 LAB_115b739e[];
extern undefined1 LAB_115b73fe[];
extern undefined1 LAB_115b745e[];
extern undefined1 LAB_115b74be[];
extern undefined1 LAB_115b751e[];
extern undefined1 LAB_115b757e[];
extern undefined1 LAB_115b75de[];
extern undefined1 LAB_115b763e[];
extern undefined1 LAB_115b769e[];
extern undefined1 LAB_115b76fe[];
extern undefined1 LAB_115b775e[];
extern undefined1 LAB_115b77c0[];
extern undefined1 LAB_115b7820[];
extern undefined1 LAB_115b7880[];
extern undefined1 LAB_115b78e0[];
extern undefined1 LAB_115b7940[];
extern undefined1 LAB_115b79a0[];
extern undefined1 LAB_115b7a00[];
extern undefined1 LAB_115b7a60[];
extern undefined1 LAB_115b7ac0[];
extern undefined1 LAB_115b7b20[];
extern undefined1 LAB_115b7b80[];
extern undefined1 LAB_115b7be0[];
extern undefined1 LAB_115b7c40[];
extern undefined1 LAB_115b7ca0[];
extern undefined1 LAB_115b7ce8[];
extern undefined1 LAB_115b7d38[];
extern undefined1 LAB_115b7d7d[];
extern undefined1 LAB_115b7dc5[];
extern undefined1 LAB_115b7e05[];
extern undefined1 LAB_115b7e45[];
extern undefined1 LAB_115b7e7d[];
extern undefined1 LAB_115b7ec5[];
extern undefined1 LAB_115b7f10[];
extern undefined1 LAB_115b7ff0[];
extern undefined1 LAB_115b8030[];
extern undefined1 LAB_115b8070[];
extern undefined1 LAB_115b80d0[];
extern undefined1 LAB_115b812e[];
extern undefined1 LAB_115b8190[];
extern undefined1 LAB_115b81ee[];
extern undefined1 LAB_115b8250[];
extern undefined1 LAB_115b82ae[];
extern undefined1 LAB_115b8310[];
extern undefined1 LAB_115b836e[];
extern undefined1 LAB_115b83ce[];
extern undefined1 LAB_115b842e[];
extern undefined1 LAB_115b8490[];
extern undefined1 LAB_115b84ee[];
extern undefined1 LAB_115b8550[];
extern undefined1 LAB_115b85ae[];
extern undefined1 LAB_115b8610[];
extern undefined1 LAB_115b866e[];
extern undefined1 LAB_115b86d0[];
extern undefined1 LAB_115b872e[];
extern undefined1 LAB_115b878e[];
extern undefined1 LAB_115b87db[];
extern undefined1 LAB_115b883e[];
extern undefined1 LAB_115b88a0[];
extern undefined1 LAB_115b88fe[];
extern undefined1 LAB_115b8960[];
extern undefined1 LAB_115b89be[];
extern undefined1 LAB_115b8a1e[];
extern undefined1 LAB_115b8a80[];
extern undefined1 LAB_115b8ade[];
extern undefined1 LAB_115b8b40[];
extern undefined1 LAB_115b8b9e[];
extern undefined1 LAB_115b8bdd[];
extern undefined1 LAB_115b8c3e[];
extern undefined1 LAB_115b8c7d[];
extern undefined1 LAB_115b8cde[];
extern undefined1 LAB_115b8d3e[];
extern undefined1 LAB_115b8d9e[];
extern undefined1 LAB_115b8ddd[];
extern undefined1 LAB_115b8e3e[];
extern undefined1 LAB_115b8e9e[];
extern undefined1 LAB_115b8efe[];
extern undefined1 LAB_115b8f60[];
extern undefined1 LAB_115b8fbe[];
extern undefined1 LAB_115b9028[];
extern undefined1 LAB_115b908e[];
extern undefined1 LAB_115b90f7[];
extern undefined1 LAB_115b9791[];
extern undefined1 LAB_115b997e[];
extern undefined1 LAB_115b99b0[];
extern undefined1 LAB_115b99e0[];
extern undefined1 LAB_115b9a10[];
extern undefined1 LAB_115b9a40[];
extern undefined1 LAB_115b9a70[];
extern undefined1 LAB_115b9aa0[];
extern undefined1 LAB_115b9bc0[];
extern undefined1 LAB_115b9c50[];
extern undefined1 LAB_115b9cb0[];
extern undefined1 LAB_115b9d10[];
extern undefined1 LAB_115b9d40[];
extern undefined1 LAB_115b9e00[];
extern undefined1 LAB_115b9e30[];
extern undefined1 LAB_115b9e60[];
extern undefined1 LAB_115b9e90[];
extern undefined1 LAB_115b9ec0[];
extern undefined1 LAB_115b9f20[];
extern undefined1 LAB_115b9f50[];
extern undefined1 LAB_115b9f80[];
extern undefined1 LAB_115ba040[];
extern undefined1 LAB_115ba070[];
extern undefined1 LAB_115ba0a0[];
extern undefined1 LAB_115ba0d0[];
extern undefined1 LAB_115ba190[];
extern undefined1 LAB_115ba1c0[];
extern undefined1 LAB_115ba1f0[];
extern undefined1 LAB_115ba220[];
extern undefined1 LAB_115ba5af[];
extern undefined1 LAB_115ba68d[];
extern undefined1 LAB_115ba722[];
extern undefined1 LAB_115ba7a2[];
extern undefined1 LAB_115ba822[];
extern undefined1 LAB_115ba8a2[];
extern undefined1 LAB_115ba8f7[];
extern undefined1 LAB_115ba947[];
extern undefined1 LAB_115ba9c2[];
extern undefined1 LAB_115baa42[];
extern undefined1 LAB_115baac2[];
extern undefined1 LAB_115bab42[];
extern undefined1 LAB_115bab97[];
extern undefined1 LAB_115babfd[];
extern undefined1 LAB_115bac72[];
extern undefined1 LAB_115bacf2[];
extern undefined1 LAB_115bad47[];
extern undefined1 LAB_115badc2[];
extern undefined1 LAB_115bae42[];
extern undefined1 LAB_115bae9f[];
extern undefined1 LAB_115baeef[];
extern undefined1 LAB_115baf37[];
extern undefined1 LAB_115baf87[];
extern undefined1 LAB_115bafdf[];
extern undefined1 LAB_115bb027[];
extern undefined1 LAB_115bb077[];
extern undefined1 LAB_115bb0f2[];
extern undefined1 LAB_115bb147[];
extern undefined1 LAB_115bb197[];
extern undefined1 LAB_115bb231[];
extern undefined1 LAB_115bb2d2[];
extern undefined1 LAB_115bb383[];
extern undefined1 LAB_115bb49f[];
extern undefined1 LAB_115bb5c4[];
extern undefined1 LAB_115bba95[];
extern int *stack0x00000004;
extern int *stack0xffffffc4;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std {}
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int createActionContextForAction(A...); template<class... A> int createDisplayWizardAction(A...); template<class... A> int getSCHousehold(A...); template<class... A> int getSingleton(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int endsWith(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); };
namespace std { template<class...> struct _Parallelism_allocator { char _pad; _Parallelism_allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct allocator { char _pad; allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct greater { char _pad; greater(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct priority_queue { char _pad; priority_queue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct vector { char _pad; vector(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
typedef void *CHN;
typedef void *HTTP;
typedef void *LED;
typedef void *NORMAL;
typedef void *UNCOMPRESSED;
typedef void *UPNP;
typedef void *WARNING;
struct AVTransport { char _pad; AVTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AudioIn { char _pad; AudioIn(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Base { char _pad; Base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Button { char _pad; Button(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ButtonLock { char _pad; ButtonLock(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Calibration { char _pad; Calibration(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentConfiguration { char _pad; CurrentConfiguration(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentIcon { char _pad; CurrentIcon(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentTargetRoomName { char _pad; CurrentTargetRoomName(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentZoneName { char _pad; CurrentZoneName(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DesiredFixed { char _pad; DesiredFixed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DesiredIcon { char _pad; DesiredIcon(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DesiredLEDState { char _pad; DesiredLEDState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DesiredLeftLineInLevel { char _pad; DesiredLeftLineInLevel(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DesiredName { char _pad; DesiredName(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DesiredRightLineInLevel { char _pad; DesiredRightLineInLevel(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DeviceProperties { char _pad; DeviceProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Different { char _pad; Different(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Downloader { char _pad; Downloader(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Encode { char _pad; Encode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FID_conflict__Tidy { char _pad; FID_conflict__Tidy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetZoneAttributes { char _pad; GetZoneAttributes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct InstanceID { char _pad; InstanceID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Library { char _pad; Library(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Line { char _pad; Line(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Lock { char _pad; Lock(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Matches { char _pad; Matches(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Mode { char _pad; Mode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Multiple { char _pad; Multiple(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Names { char _pad; Names(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NewPlayMode { char _pad; NewPlayMode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Normal { char _pad; Normal(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Out { char _pad; Out(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Page { char _pad; Page(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Play { char _pad; Play(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct R_AudioInEncodeType { char _pad; R_AudioInEncodeType(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Release { char _pad; Release(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RenderingControl { char _pad; RenderingControl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RoomCalibrationEnabled { char _pad; RoomCalibrationEnabled(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RoomUUID { char _pad; RoomUUID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAction { char _pad; SCIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIWizard { char _pad; SCIWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSetupFileIoHelper { char _pad; SCSetupFileIoHelper(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigAccountRequiredSubwiz { char _pad; SCWifiConfigAccountRequiredSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigApConnectSubwiz { char _pad; SCWifiConfigApConnectSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigApInstructionsSubwiz { char _pad; SCWifiConfigApInstructionsSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigAppVersionCheckSubwiz { char _pad; SCWifiConfigAppVersionCheckSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigAskNetworkModifiedPage { char _pad; SCWifiConfigAskNetworkModifiedPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigAskUnplugEthernetPage { char _pad; SCWifiConfigAskUnplugEthernetPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigBleConnectSubwiz { char _pad; SCWifiConfigBleConnectSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigConnectRecoverySubwiz { char _pad; SCWifiConfigConnectRecoverySubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigDevicePermissionsSubwiz { char _pad; SCWifiConfigDevicePermissionsSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigHouseholdSelectionSubwiz { char _pad; SCWifiConfigHouseholdSelectionSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigInformWiredConnectionPage { char _pad; SCWifiConfigInformWiredConnectionPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigIntroPage { char _pad; SCWifiConfigIntroPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigNetworkCredentialPropagationSubwiz { char _pad; SCWifiConfigNetworkCredentialPropagationSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigNetworkCredentialsSubwiz { char _pad; SCWifiConfigNetworkCredentialsSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigPlayerOutOfDatePage { char _pad; SCWifiConfigPlayerOutOfDatePage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigPlayerSelectionSubwiz { char _pad; SCWifiConfigPlayerSelectionSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigSecureAuthenticationSubwiz { char _pad; SCWifiConfigSecureAuthenticationSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigSetupCardBleFoundPage { char _pad; SCWifiConfigSetupCardBleFoundPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigSetupCardJoinNearbySystemPage { char _pad; SCWifiConfigSetupCardJoinNearbySystemPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigSetupCardNoNetworkPage { char _pad; SCWifiConfigSetupCardNoNetworkPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigSetupCardNothingFoundPage { char _pad; SCWifiConfigSetupCardNothingFoundPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigSetupCardUnrecognizedNetworkPage { char _pad; SCWifiConfigSetupCardUnrecognizedNetworkPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigStartOpenApPage { char _pad; SCWifiConfigStartOpenApPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigSuccessPage { char _pad; SCWifiConfigSuccessPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigSystemIdSubwiz { char _pad; SCWifiConfigSystemIdSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigTroubleshootSubwiz { char _pad; SCWifiConfigTroubleshootSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigWizard { char _pad; SCWifiConfigWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigWrongHHIDPage { char _pad; SCWifiConfigWrongHHIDPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetAudioInputAttributes { char _pad; SetAudioInputAttributes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetAutoplayRoomUUID { char _pad; SetAutoplayRoomUUID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetLEDState { char _pad; SetLEDState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetLineInLevel { char _pad; SetLineInLevel(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetOutputFixed { char _pad; SetOutputFixed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetPlayMode { char _pad; SetPlayMode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetRoomCalibrationStatus { char _pad; SetRoomCalibrationStatus(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetString { char _pad; SetString(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Setting { char _pad; Setting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SettingsActions { char _pad; SettingsActions(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetupFileTransferDownloadOp { char _pad; SetupFileTransferDownloadOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetupFileTransferUploadOp { char _pad; SetupFileTransferUploadOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Sonar { char _pad; Sonar(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Source { char _pad; Source(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct StringValue { char _pad; StringValue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Studio { char _pad; Studio(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subwiz { char _pad; Subwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SystemProperties { char _pad; SystemProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Uncompressed { char _pad; Uncompressed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UseVolume { char _pad; UseVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Variable { char _pad; Variable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct VariableName { char _pad; VariableName(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Visual { char _pad; Visual(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Volume { char _pad; Volume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct White { char _pad; White(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct With { char _pad; With(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; int * __thiscall FUN_105a96c0(int *param_2); int __thiscall FUN_105a9bf0(byte param_2); void __thiscall FUN_105ab410(int param_2); void __thiscall FUN_105ab560(int param_2); void __thiscall FUN_105ad530(int *param_2,int *param_3); void __thiscall FUN_105ad590(int *param_2,uint *param_3); void __thiscall FUN_105aef50(int param_2,int param_3); undefined4 * __thiscall FUN_105b0420(int param_2); undefined4 * __thiscall FUN_105b04f0(int param_2); int __thiscall FUN_105b0610(void); int __thiscall FUN_105b0840(void); int __thiscall FUN_105b1670(int param_2); int __thiscall FUN_105b1760(int param_2); int __thiscall FUN_105b1890(int param_2); void __thiscall FUN_105b2f90(int param_2,short param_3); int __thiscall FUN_105b6040(undefined4 param_2,int *param_3); undefined4 * __thiscall FUN_105b61a0(undefined4 param_2,undefined4 param_3,int param_4); int __thiscall FUN_105b6e60(undefined4 *param_2); int * __thiscall FUN_105b6ed0(int *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_105b7ed0(int param_2); undefined4 * __thiscall FUN_105b7fe0(int param_2); undefined4 * __thiscall FUN_105b82b0(undefined4 param_2); undefined4 * __thiscall FUN_105b8650(undefined4 param_2,undefined4 param_3); int * __thiscall FUN_105b87a0(int *param_2); int __thiscall FUN_105bab50(byte param_2); undefined4 * __thiscall FUN_105babd0(byte param_2); undefined4 * __thiscall FUN_105bac30(byte param_2); void __thiscall FUN_105badc0(int param_2,int param_3,int param_4); void __thiscall FUN_105bae50(int param_2,int param_3,int param_4); void __thiscall FUN_105bbae0(int param_2,short param_3); void __thiscall FUN_105bbc80(int *param_2,undefined4 param_3); void __thiscall FUN_105bc050(int *param_2); char __thiscall FUN_105bd1c0(undefined4 param_2); void __thiscall FUN_105bd230(char *param_2); void __thiscall FUN_105bd350(int *param_2,undefined4 *param_3); bool __thiscall FUN_105bfd60(int param_2,short *param_3); void __thiscall FUN_105c0360(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_105c36a0(undefined4 param_2,undefined4 param_3,undefined1 param_4,
            int *param_5); undefined4 * __thiscall FUN_105c4500(byte param_2); undefined4 * __thiscall FUN_105c53f0(undefined4 *param_2,int *param_3); undefined4 * __thiscall FUN_105c5e60(undefined4 *param_2); int * __thiscall FUN_105c7e10(int *param_2); undefined4 * __thiscall FUN_105c7f00(undefined4 *param_2); undefined4 * __thiscall FUN_105c8010(undefined4 *param_2); int * __thiscall FUN_105c81b0(int *param_2); int * __thiscall FUN_105c82b0(int *param_2); int * __thiscall FUN_105c83b0(int *param_2); undefined4 * __thiscall FUN_105c8650(undefined4 *param_2); int * __thiscall FUN_105c8760(int *param_2); int * __thiscall FUN_105c8850(int *param_2); undefined4 * __thiscall FUN_105c8d20(undefined4 *param_2); undefined4 * __thiscall FUN_105c9050(undefined4 *param_2); undefined4 * __thiscall FUN_105c9690(undefined4 *param_2); undefined4 * __thiscall FUN_105cdd60(int param_2); undefined4 * __thiscall FUN_105cde70(undefined4 param_2,undefined4 param_3,int param_4); undefined4 * __thiscall FUN_105cdf70(int param_2); undefined4 * __thiscall FUN_105ce870(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); undefined4 * __thiscall FUN_105ce910(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); undefined4 * __thiscall FUN_105cea50(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); undefined4 * __thiscall FUN_105ceb20(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); undefined4 * __thiscall FUN_105cee40(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); undefined4 * __thiscall FUN_105cfb90(undefined4 param_2,undefined4 param_3,int *param_4); undefined4 * __thiscall FUN_105cfdf0(undefined4 param_2,undefined4 param_3,int *param_4); undefined4 * __thiscall FUN_105cff00(undefined4 param_2,undefined4 param_3,int *param_4); undefined4 * __thiscall FUN_105d0af0(undefined4 param_2,undefined4 param_3,int *param_4); undefined4 * __thiscall FUN_105d0be0(int param_2); undefined4 * __thiscall FUN_105d4df0(byte param_2); void __thiscall FUN_105d6d20(int param_2,int param_3,int param_4); void __thiscall FUN_105d6db0(int param_2,int param_3,int param_4); void __thiscall FUN_105d75e0(int *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105dc230(undefined4 *param_2); undefined4 * __thiscall FUN_105dc9d0(undefined4 *param_2); undefined4 * __thiscall FUN_105dcb90(undefined4 *param_2); undefined4 * __thiscall FUN_105dd6d0(undefined4 *param_2); undefined4 * __thiscall FUN_105dd810(undefined4 *param_2); undefined4 * __thiscall FUN_105dd960(undefined4 *param_2); undefined4 * __thiscall FUN_105ddaa0(undefined4 *param_2); undefined4 * __thiscall FUN_105ddbe0(undefined4 *param_2); undefined4 * __thiscall FUN_105dde90(undefined4 *param_2); undefined4 * __thiscall FUN_105dfad0(undefined4 *param_2,byte param_3); undefined4 * __thiscall FUN_105e0530(undefined4 *param_2,byte param_3); undefined4 * __thiscall FUN_105e1800(undefined4 *param_2,byte param_3); undefined4 __thiscall FUN_105e2b70(int param_2,short *param_3); void __thiscall FUN_105e3f90(undefined4 param_2,undefined4 param_3); int __thiscall FUN_105e7060(int param_2); undefined4 __thiscall FUN_105e71e0(undefined4 param_2); undefined4 __thiscall FUN_105e7240(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_105e72a0(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_105e73c0(undefined4 param_2); undefined4 __thiscall FUN_105e7420(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_105e7480(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_105e7540(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_105e75a0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_105e77e0(undefined4 param_2); void __thiscall FUN_105e7960(undefined4 param_2); undefined4 * __thiscall FUN_105e8ce0(int param_2); undefined4 * __thiscall FUN_105e8dc0(int param_2); undefined4 * __thiscall FUN_105e8fa0(int param_2); undefined4 * __thiscall FUN_105e9100(undefined4 param_2,undefined4 param_3,undefined4 param_4); int __thiscall FUN_105e9350(void); int __thiscall FUN_105e94a0(undefined4 param_2,int *param_3); int __thiscall FUN_105e9ae0(undefined4 param_2,int *param_3); int __thiscall FUN_105e9ea0(undefined4 param_2,int *param_3); void __thiscall FUN_105eb590(undefined4 *param_2); void __thiscall FUN_105eb8b0(undefined4 *param_2); void __thiscall FUN_105eba50(undefined4 *param_2); int __thiscall FUN_105ecae0(int param_2); int __thiscall FUN_105ecb60(int param_2); int __thiscall FUN_105ecd40(int param_2); int __thiscall FUN_105ecdf0(int param_2,int param_3); int __thiscall FUN_105ed100(int param_2); int __thiscall FUN_105ed1b0(int param_2,int param_3); int __thiscall FUN_105ed770(int param_2,int *param_3); int __thiscall FUN_105eda70(undefined4 param_2); int __thiscall FUN_105edff0(int param_2,int *param_3); int __thiscall FUN_105ee340(void); int __thiscall FUN_105ee3e0(undefined4 param_2,undefined4 param_3); int __thiscall FUN_105ee4a0(int param_2,int *param_3); int __thiscall FUN_105f0440(byte param_2); int __thiscall FUN_105f04d0(byte param_2); int __thiscall FUN_105f0650(byte param_2); int __thiscall FUN_105f06e0(byte param_2); int __thiscall FUN_105f0760(byte param_2); void __thiscall FUN_105f0fd0(char param_2); void __thiscall FUN_105f1060(char param_2); void __thiscall FUN_105f1260(char param_2); void __thiscall FUN_105f1310(char param_2); void __thiscall FUN_105f1390(char param_2); undefined4 __thiscall FUN_105f2380(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5); void __thiscall FUN_105f2bd0(int param_2); void __thiscall FUN_105f2d80(undefined1 *param_2); void __thiscall FUN_105f2e10(undefined1 *param_2); void __thiscall FUN_105f2f30(int param_2); void __thiscall FUN_105f2fc0(int param_2); void __thiscall FUN_105f3050(int param_2); undefined4 * __thiscall FUN_105f5a00(int param_2); undefined4 * __thiscall FUN_105f5df0(int param_2); undefined4 * __thiscall FUN_105f6050(int param_2); undefined4 * __thiscall FUN_105f60e0(int param_2); undefined4 * __thiscall FUN_105f6470(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6560(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6650(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6740(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6830(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6920(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6a10(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6b00(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6bf0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6ce0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6dd0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6ec0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6fb0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f70a0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7190(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7280(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7370(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7460(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7550(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7640(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7730(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7820(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7910(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7a00(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7af0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7be0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7cd0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7e20(undefined4 param_2); undefined4 * __thiscall FUN_105f7f30(undefined4 param_2); undefined4 * __thiscall FUN_105f8040(undefined4 param_2); undefined4 * __thiscall FUN_105f8150(undefined4 param_2); undefined4 * __thiscall FUN_105f8260(undefined4 param_2); undefined4 * __thiscall FUN_105f8370(undefined4 param_2); undefined4 * __thiscall FUN_105f8480(undefined4 param_2); undefined4 * __thiscall FUN_105f8590(undefined4 param_2); undefined4 * __thiscall FUN_105f86a0(undefined4 param_2); undefined4 * __thiscall FUN_105f87b0(undefined4 param_2); undefined4 * __thiscall FUN_105f88c0(undefined4 param_2); undefined4 * __thiscall FUN_105f89d0(undefined4 param_2); undefined4 * __thiscall FUN_105f8ae0(undefined4 param_2); undefined4 * __thiscall FUN_105f8bf0(undefined4 param_2); undefined1 * __thiscall FUN_105f8ff0(undefined1 *param_2); int __thiscall FUN_105f9110(int param_2); int * __thiscall FUN_105f9250(int *param_2); int * __thiscall FUN_105f9380(int *param_2); int * __thiscall FUN_105f94e0(int *param_2); int * __thiscall FUN_105f9640(int *param_2); int * __thiscall FUN_105f97a0(int *param_2); undefined4 * __thiscall FUN_105f98d0(int *param_2); undefined4 * __thiscall FUN_105f9a80(undefined4 *param_2); undefined1 * __thiscall FUN_105f9e40(undefined1 *param_2); undefined4 * __thiscall FUN_105fa0e0(undefined4 *param_2); undefined4 * __thiscall FUN_105fa180(undefined4 *param_2); undefined4 * __thiscall FUN_105fa220(undefined4 param_2); undefined4 * __thiscall FUN_105fa330(undefined4 param_2); undefined4 * __thiscall FUN_105fa430(undefined4 param_2); undefined4 * __thiscall FUN_105fa540(undefined4 param_2); undefined4 * __thiscall FUN_105fa640(undefined4 param_2); undefined4 * __thiscall FUN_105fa750(undefined4 param_2); undefined4 * __thiscall FUN_105fa850(undefined4 param_2); undefined4 * __thiscall FUN_105fa960(undefined4 param_2); undefined4 * __thiscall FUN_105faab0(undefined4 param_2); undefined4 * __thiscall FUN_105fac00(undefined4 param_2); undefined4 * __thiscall FUN_105fad00(undefined4 param_2); undefined4 * __thiscall FUN_105fae10(undefined4 param_2); undefined4 * __thiscall FUN_105faf10(undefined4 param_2); undefined4 * __thiscall FUN_105fb020(undefined4 param_2); undefined4 * __thiscall FUN_105fb120(undefined4 param_2); undefined4 * __thiscall FUN_105fb230(undefined4 param_2); undefined4 * __thiscall FUN_105fb330(undefined4 param_2); undefined4 * __thiscall FUN_105fb440(undefined4 param_2); undefined4 * __thiscall FUN_105fb590(undefined4 param_2); undefined4 * __thiscall FUN_105fb690(undefined4 param_2); undefined4 * __thiscall FUN_105fb770(undefined4 param_2); undefined4 * __thiscall FUN_105fb870(undefined4 param_2); undefined4 * __thiscall FUN_105fb980(undefined4 param_2); undefined4 * __thiscall FUN_105fba80(undefined4 param_2); undefined4 * __thiscall FUN_105fbb90(undefined4 param_2); undefined4 * __thiscall FUN_105fbce0(undefined4 param_2); undefined4 * __thiscall FUN_105fbde0(undefined4 param_2); undefined4 * __thiscall FUN_105fbef0(undefined4 param_2); undefined4 * __thiscall FUN_105fbff0(undefined4 param_2); undefined4 * __thiscall FUN_105fc100(undefined4 param_2); undefined4 * __thiscall FUN_105fc200(undefined4 param_2); undefined4 * __thiscall FUN_105fc2b0(undefined4 param_2); undefined4 * __thiscall FUN_105fc3b0(undefined4 param_2); undefined4 * __thiscall FUN_105fc460(undefined4 param_2); undefined4 * __thiscall FUN_105fc5b0(undefined4 param_2); undefined4 * __thiscall FUN_105fc700(undefined4 param_2); undefined4 * __thiscall FUN_105fc800(undefined4 param_2); undefined4 * __thiscall FUN_105fc8b0(undefined4 param_2); undefined4 * __thiscall FUN_105fca00(undefined4 param_2); undefined4 * __thiscall FUN_105fcb50(undefined4 param_2); undefined4 * __thiscall FUN_105fcc50(undefined4 param_2); undefined4 * __thiscall FUN_105fcd60(undefined4 param_2); undefined4 * __thiscall FUN_105fce60(undefined4 param_2); undefined4 * __thiscall FUN_105fd080(undefined4 param_2); undefined4 * __thiscall FUN_105fd180(undefined4 param_2); undefined4 * __thiscall FUN_105fea30(undefined4 param_2); undefined4 * __thiscall FUN_10601ca0(byte param_2); undefined4 * __thiscall FUN_10602210(byte param_2); undefined4 * __thiscall FUN_10602270(byte param_2); undefined4 * __thiscall FUN_106022d0(byte param_2); undefined4 * __thiscall FUN_10602330(byte param_2); undefined4 * __thiscall FUN_10602390(byte param_2); undefined4 * __thiscall FUN_106023f0(byte param_2); undefined4 * __thiscall FUN_10602450(byte param_2); undefined4 * __thiscall FUN_106024b0(byte param_2); undefined4 * __thiscall FUN_10602510(byte param_2); undefined4 * __thiscall FUN_10602570(byte param_2); undefined4 * __thiscall FUN_106025d0(byte param_2); undefined4 * __thiscall FUN_10602630(byte param_2); undefined4 * __thiscall FUN_10602690(byte param_2); undefined4 * __thiscall FUN_106026f0(byte param_2); undefined4 * __thiscall FUN_10602860(byte param_2); undefined4 * __thiscall FUN_10602900(byte param_2); undefined4 * __thiscall FUN_106029a0(byte param_2); undefined4 * __thiscall FUN_10602a40(byte param_2); undefined4 * __thiscall FUN_10602ae0(byte param_2); undefined4 * __thiscall FUN_10602b80(byte param_2); undefined4 * __thiscall FUN_10602c20(byte param_2); undefined4 * __thiscall FUN_10602cc0(byte param_2); undefined4 * __thiscall FUN_10602d60(byte param_2); undefined4 * __thiscall FUN_10602e00(byte param_2); undefined4 * __thiscall FUN_10602ea0(byte param_2); undefined4 * __thiscall FUN_10603080(byte param_2); undefined4 * __thiscall FUN_10603120(byte param_2); undefined4 * __thiscall FUN_106031c0(byte param_2); undefined4 * __thiscall FUN_10603260(byte param_2); undefined4 * __thiscall FUN_10603300(byte param_2); undefined4 * __thiscall FUN_106033a0(byte param_2); undefined4 * __thiscall FUN_106034a0(byte param_2); undefined4 * __thiscall FUN_106035a0(byte param_2); undefined4 * __thiscall FUN_10603640(byte param_2); undefined4 * __thiscall FUN_106036e0(byte param_2); undefined4 * __thiscall FUN_106037e0(byte param_2); undefined4 * __thiscall FUN_10603880(byte param_2); undefined4 * __thiscall FUN_10603920(byte param_2); undefined4 * __thiscall FUN_106039c0(byte param_2); int __thiscall FUN_10603a60(byte param_2); undefined4 * __thiscall FUN_10603c00(byte param_2); void __thiscall FUN_10604230(int param_2,int param_3,int param_4); undefined4 __thiscall FUN_106052d0(undefined4 param_2); undefined4 * __thiscall FUN_10605d60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10605ec0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606020(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606180(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_106062e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_106063c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_106064a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606600(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606760(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_106068c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606a20(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606b00(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606c30(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606d90(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606ef0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606fd0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607130(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607290(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607390(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607490(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607570(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607650(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607750(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607830(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607910(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_10607a70(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607b20(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607df0(undefined4 param_2,undefined4 param_3,undefined4 param_4); int __thiscall FUN_10608200(char param_2,undefined4 param_3); int __thiscall FUN_10608280(char param_2,undefined4 param_3); int __thiscall FUN_10608300(char param_2,undefined4 param_3); };
using namespace std;
undefined4 * FUN_105b0bd0(int param_1);
undefined4 * FUN_105b0cf0(int param_1);
undefined4 * __fastcall FUN_105b2900(int param_1);
undefined4 * __fastcall FUN_105b29e0(int param_1);
void __fastcall FUN_105b3320(int param_1);
void __stdcall FUN_105b4f00(int param_1);
undefined4 __stdcall FUN_105b4fe0(int *param_1);
void __fastcall FUN_105b5b90(int param_1);
void __stdcall FUN_105b6d40(undefined4 param_1,int *param_2);
undefined4 * FUN_105b71f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_105b7290(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_105b7330(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_105b73d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __fastcall FUN_105b9540(undefined4 *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_105b9e00(int *param_1);
void __fastcall FUN_105ba440(int param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_105bb4e0(int *param_1);
void __fastcall FUN_105bb550(int *param_1);
undefined4 * __stdcall FUN_105bb660(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __stdcall FUN_105bb700(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_105bb7c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __stdcall FUN_105bb880(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_105bb940(int param_1);
void __fastcall FUN_105bb9a0(int param_1);
void __fastcall FUN_105bba50(int param_1);
void * FUN_105bc210(uint param_1);
void __fastcall FUN_105bc2f0(int param_1);
undefined1 FUN_105bc6f0(void);
int FUN_105bc7f0(undefined4 param_1,byte param_2);
void __fastcall FUN_105bc870(int param_1);
undefined4
FUN_105bd4a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6);
float10 __fastcall FUN_105bf060(int param_1);
undefined1 FUN_105bfc10(void);
undefined1 FUN_105bfe50(void);
undefined1 FUN_105bfee0(char param_1);
undefined1 FUN_105c00b0(void);
void __fastcall FUN_105c0250(int param_1);
undefined1 FUN_105c0a20(void);
void FUN_105c0bc0(undefined4 param_1);
void FUN_105c0c30(undefined4 param_1);
void FUN_105c0ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
int * FUN_105c1110(int *param_1);
void __fastcall FUN_105c2a00(int param_1);
void __stdcall FUN_105c2dd0(int param_1,undefined4 param_2);
undefined4 * __fastcall FUN_105c39f0(undefined4 *param_1);
SCIAction * __stdcall FUN_105c79e0(SCIAction *param_1);
undefined4 * __stdcall FUN_105c8110(undefined4 *param_1);
void __fastcall FUN_105d2560(int *param_1);
void __fastcall FUN_105d2ad0(int *param_1);
void __fastcall FUN_105d2b30(int *param_1);
void __fastcall FUN_105d2b90(int *param_1);
void __fastcall FUN_105d2c90(int *param_1);
void __fastcall FUN_105d6fa0(int *param_1);
void __fastcall FUN_105d7580(int param_1);
void __fastcall FUN_105d8bf0(int param_1);
void __fastcall FUN_105d8de0(int param_1);
undefined4 * __stdcall FUN_105dc710(undefined4 *param_1);
undefined4 * __stdcall FUN_105dc870(undefined4 *param_1);
undefined4 * __stdcall FUN_105dd100(undefined4 *param_1);
undefined4 * FUN_105e0450(undefined4 *param_1);
undefined4 * FUN_105e0970(undefined4 *param_1);
void __fastcall FUN_105e3830(int param_1);
int __fastcall FUN_105e7300(int param_1);
undefined4 * FUN_105ea9f0(int param_1);
undefined4 * FUN_105eab10(undefined4 *param_1);
undefined4 * FUN_105eaba0(undefined4 *param_1);
undefined4 * FUN_105eac30(int param_1);
undefined4 * FUN_105eafe0(undefined4 *param_1);
undefined4 * FUN_105eb070(undefined4 *param_1);
undefined4 * FUN_105eb100(int param_1);
undefined4 * FUN_105eb2b0(undefined4 *param_1);
undefined4 * FUN_105eb340(undefined4 *param_1);
int __fastcall FUN_105ed8d0(int param_1);
int __fastcall FUN_105ee720(int param_1);
void __fastcall FUN_105eecb0(int param_1);
void __fastcall FUN_105eee60(int param_1);
void __fastcall FUN_105eef30(int param_1);
undefined4 * __fastcall FUN_105f08e0(int param_1);
undefined4 * __fastcall FUN_105f0980(int param_1);
undefined4 * __fastcall FUN_105f0a20(int param_1);
undefined4 * __fastcall FUN_105f0c70(int param_1);
undefined4 * __fastcall FUN_105f0d20(int param_1);
undefined4 * __fastcall FUN_105f0df0(int param_1);
int __stdcall FUN_105f3db0(int param_1,int param_2,int param_3);
int __stdcall FUN_105f3e40(int param_1,int param_2,int param_3);
int __stdcall FUN_105f3ed0(int param_1,int param_2,int param_3);
undefined1 * __stdcall FUN_105f3f80(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3);
int FUN_105f4090(int *param_1,int *param_2,int param_3);
int FUN_105f4220(int param_1,int param_2,int param_3);
int FUN_105f42b0(int param_1,int param_2,int param_3);
undefined1 * FUN_105f4410(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3);
void FUN_105f4970(undefined4 param_1,int param_2,int param_3);
void FUN_105f4a20(undefined4 param_1,int param_2,int param_3);
void FUN_105f4ad0(undefined4 param_1,undefined1 *param_2,undefined1 *param_3);
void FUN_105f4fa0(undefined4 param_1,undefined1 *param_2,undefined1 *param_3);
undefined4 * __fastcall FUN_105fd2c0(undefined4 *param_1);
void __fastcall FUN_105fec50(int param_1);
void __fastcall FUN_105fece0(int param_1);
void __fastcall FUN_105fed70(int param_1);
void __fastcall FUN_105fee00(int param_1);
void __fastcall FUN_105feec0(int param_1);
void __fastcall FUN_105fef60(int param_1);
void __fastcall FUN_105ff3e0(int *param_1);
void __fastcall FUN_105ff930(int param_1);
void __fastcall FUN_105ffaa0(int param_1);
void __fastcall FUN_105ffba0(int param_1);
void __fastcall FUN_105ffc30(int param_1);
void __fastcall FUN_105ffe50(int param_1);
void __fastcall FUN_105ffee0(int param_1);
void __fastcall FUN_105fff80(int param_1);
void __fastcall FUN_10600020(int param_1);
void __fastcall FUN_106000b0(int param_1);
void __fastcall FUN_106001b0(int param_1);
void __fastcall FUN_106002b0(int param_1);
void __fastcall FUN_10600350(int param_1);
void __fastcall FUN_10600ac0(undefined4 *param_1);
void __fastcall FUN_10600b80(undefined4 *param_1);
void __fastcall FUN_10600ce0(undefined4 *param_1);
void __fastcall FUN_10600ee0(int param_1);
void __fastcall FUN_10604820(int *param_1);
void * FUN_10604d60(uint param_1);
void * FUN_10604dd0(uint param_1);
void * FUN_10604e40(uint param_1);
void * FUN_10604eb0(uint param_1);
void * FUN_10604f20(uint param_1);
void * FUN_10604fa0(uint param_1);
undefined4 * __stdcall FUN_106051a0(undefined4 *param_1);
undefined4 * __stdcall FUN_10607c00(undefined4 *param_1);
undefined4 __stdcall FUN_106083b0(undefined4 param_1);
undefined4 __stdcall FUN_10608940(undefined4 param_1);
undefined4 __stdcall FUN_106091b0(undefined4 param_1);
undefined4 __stdcall FUN_1060b510(undefined4 param_1);
// Reference entry 105a96c0; body size 88 bytes.
#line 1 "ENTRY_105a96c0"

int * __thiscall Recovered_Bulk::FUN_105a96c0(int *param_2)
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


// Reference entry 105a9bf0; body size 148 bytes.
#line 1 "ENTRY_105a9bf0"

int __thiscall Recovered_Bulk::FUN_105a9bf0(byte param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x30));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x28));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10def0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105ab410; body size 79 bytes.
#line 1 "ENTRY_105ab410"

void __thiscall Recovered_Bulk::FUN_105ab410(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8));
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = (int)(*(int *)(param_2 + 4));
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
  piVar2[2] = (int)((int)piVar1);
  *piVar1 = (int)(param_2);
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 105ab560; body size 79 bytes.
#line 1 "ENTRY_105ab560"

void __thiscall Recovered_Bulk::FUN_105ab560(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8));
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = (int)(*(int *)(param_2 + 4));
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
  piVar2[2] = (int)((int)piVar1);
  *piVar1 = (int)(param_2);
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 105ad530; body size 69 bytes.
#line 1 "ENTRY_105ad530"

void __thiscall Recovered_Bulk::FUN_105ad530(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_105a5630(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 105ad590; body size 69 bytes.
#line 1 "ENTRY_105ad590"

void __thiscall Recovered_Bulk::FUN_105ad590(int *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_105a5690(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(uint *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 105aef50; body size 90 bytes.
#line 1 "ENTRY_105aef50"

void __thiscall Recovered_Bulk::FUN_105aef50(int param_2,int param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xb0) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0xb0));
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  if (0 < param_2) {
    iVar2 = (int)(param_2);
    if (0 < param_3) {
      iVar2 = (int)(param_3);
    }
    *(int *)(param_1 + 0xb4) = iVar2;
    uVar1 = (undefined4)(thunk_FUN_1059d5a0(param_2));
    *(undefined4 *)(param_1 + 0xb0) = uVar1;
  }
  return;
}


// Reference entry 105b0420; body size 110 bytes.
#line 1 "ENTRY_105b0420"

undefined4 * __thiscall Recovered_Bulk::FUN_105b0420(int param_2)
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
  param_1[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105b04f0; body size 107 bytes.
#line 1 "ENTRY_105b04f0"

undefined4 * __thiscall Recovered_Bulk::FUN_105b04f0(int param_2)
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
  param_1[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105b0610; body size 203 bytes.
#line 1 "ENTRY_105b0610"

int __thiscall Recovered_Bulk::FUN_105b0610(void)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = (undefined4)(0);
  if (in_stack_00000028 != (int *)0x0) {
    if (in_stack_00000028 == (int *)&stack0x00000004) {
      uVar3 = (undefined4)((**(code **)(*in_stack_00000028 + 4))(puVar2 + 2,uVar1));
      puVar2[0xb] = (undefined4)(uVar3);
      if (in_stack_00000028 == (int *)0x0) goto LAB_105b06ab;
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
    else {
      puVar2[0xb] = (undefined4)(in_stack_00000028);
    }
    in_stack_00000028 = (int *)((int *)0x0);
  }
LAB_105b06ab:
  *(undefined4 **)(param_1 + 0x24) = puVar2;
  if (in_stack_00000028 != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105b0840; body size 209 bytes.
#line 1 "ENTRY_105b0840"

int __thiscall Recovered_Bulk::FUN_105b0840(void)
{
  int param_1 = (int )this;
 try {
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (in_stack_00000028 == (int *)0x0) {

    return (int)(param_1);
  }
  puVar3 = (undefined4 *)(operator_new(0x30));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar3[0xb] = (undefined4)(0);
  if (in_stack_00000028 != (int *)0x0) {
    if (in_stack_00000028 == (int *)&stack0x00000004) {
      uVar4 = (undefined4)((**(code **)(*in_stack_00000028 + 4))(puVar3 + 2,uVar2));
      puVar3[0xb] = (undefined4)(uVar4);
      if (in_stack_00000028 == (int *)0x0) goto LAB_105b08e1;
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
    else {
      puVar3[0xb] = (undefined4)(in_stack_00000028);
    }
    in_stack_00000028 = (int *)((int *)0x0);
  }
LAB_105b08e1:
  *(undefined4 **)(param_1 + 0x24) = puVar3;
  if (in_stack_00000028 != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105b0bd0; body size 124 bytes.
#line 1 "ENTRY_105b0bd0"

undefined4 * FUN_105b0bd0(int param_1)

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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 105b0cf0; body size 121 bytes.
#line 1 "ENTRY_105b0cf0"

undefined4 * FUN_105b0cf0(int param_1)

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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 105b1670; body size 93 bytes.
#line 1 "ENTRY_105b1670"

int __thiscall Recovered_Bulk::FUN_105b1670(int param_2)
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


// Reference entry 105b1760; body size 93 bytes.
#line 1 "ENTRY_105b1760"

int __thiscall Recovered_Bulk::FUN_105b1760(int param_2)
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


// Reference entry 105b1890; body size 96 bytes.
#line 1 "ENTRY_105b1890"

int __thiscall Recovered_Bulk::FUN_105b1890(int param_2)
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


// Reference entry 105b2900; body size 127 bytes.
#line 1 "ENTRY_105b2900"

undefined4 * __fastcall FUN_105b2900(int param_1)

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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 105b29e0; body size 124 bytes.
#line 1 "ENTRY_105b29e0"

undefined4 * __fastcall FUN_105b29e0(int param_1)

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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 105b2f90; body size 648 bytes.
#line 1 "ENTRY_105b2f90"

void __thiscall Recovered_Bulk::FUN_105b2f90(int param_2,short param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_84 [4];
  int local_80;
  int local_7c;
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
  int local_8;


  local_14 = (uint)(DAT_12126b84);

  if (param_3 == 0) {
    if ((*(int **)(param_1 + 0x44) == (int *)0x0) ||
       (iVar2 = (**(code **)(**(int **)(param_1 + 0x44) + 0x20))(local_14), param_2 != iVar2)) {
      if ((*(int **)(param_1 + 0x4c) != (int *)0x0) &&
         (iVar2 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x20))(), param_2 == iVar2)) {
        thunk_FUN_10e0ac90(local_4c);

        if (local_48 != local_44) {
          do {
            piVar1 = (int *)(*(int **)(local_48 + 0x14));
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 4))();
            }
            *(unsigned char *)((char *)&local_8 + 0) = 7;
            if (piVar1 == (int *)0x0) {
              piVar3 = (int *)((int *)0x0);
            }
            else {
              piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
            }
            *(unsigned char *)((char *)&local_8 + 0) = 9;
            thunk_FUN_105b3de0(piVar1);
            *(unsigned char *)((char *)&local_8 + 0) = 0xb;
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 8))();
            }
            local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
            thunk_FUN_105f2130();
          } while (local_48 != local_44);
        }

        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 0x10))(local_18 != (int *)(local_3c));
          local_18 = (int *)((int *)0x0);
        }
        if (*(int *)(param_1 + 0x4c) != 0) {
          piVar1 = (int *)(*(int **)(param_1 + 0x50));
          if (piVar1 != (int *)0x0) {
            *(undefined4 *)(param_1 + 0x4c) = 0;
            *(undefined4 *)(param_1 + 0x50) = 0;
            (**(code **)(*piVar1 + 8))();
          }
          *(undefined4 *)(param_1 + 0x4c) = 0;
          *(undefined4 *)(param_1 + 0x50) = 0;
        }
      }
    }
    else {
      thunk_FUN_10e0ac90(local_84);

      if (local_80 != local_7c) {
        do {
          piVar1 = (int *)(*(int **)(local_80 + 0x14));
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))();
          }
          *(unsigned char *)((char *)&local_8 + 0) = 1;
          if (piVar1 == (int *)0x0) {
            piVar3 = (int *)((int *)0x0);
          }
          else {
            piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
          }
          *(unsigned char *)((char *)&local_8 + 0) = 3;
          thunk_FUN_105b3de0(piVar1);
          *(unsigned char *)((char *)&local_8 + 0) = 5;
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))();
          }
          local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
          thunk_FUN_105f2130();
        } while (local_80 != local_7c);
      }

      if (local_50 != (int *)0x0) {
        (**(code **)(*local_50 + 0x10))(local_50 != (int *)(local_74));
      }
      if (*(int *)(param_1 + 0x44) != 0) {
        piVar1 = (int *)(*(int **)(param_1 + 0x48));
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x44) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
          (**(code **)(*piVar1 + 8))();
        }
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
    }
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 105b3320; body size 149 bytes.
#line 1 "ENTRY_105b3320"

void __fastcall FUN_105b3320(int param_1)

{
  int *piVar1;
  char cVar2;
  
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    cVar2 = (char)((**(code **)(**(int **)(param_1 + 0x44) + 0x1c))());
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x18))();
      if (*(int *)(param_1 + 0x44) != 0) {
        piVar1 = (int *)(*(int **)(param_1 + 0x48));
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x44) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
          (**(code **)(*piVar1 + 8))();
        }
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
    }
  }
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    cVar2 = (char)((**(code **)(**(int **)(param_1 + 0x4c) + 0x1c))());
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x4c) + 0x18))();
      if (*(int *)(param_1 + 0x4c) != 0) {
        piVar1 = (int *)(*(int **)(param_1 + 0x50));
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x4c) = 0;
          *(undefined4 *)(param_1 + 0x50) = 0;
          (**(code **)(*piVar1 + 8))();
        }
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
    }
  }
  return;
}


// Reference entry 105b4f00; body size 118 bytes.
#line 1 "ENTRY_105b4f00"

void __stdcall FUN_105b4f00(int param_1)

{
 try {
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if ((param_1 != 0) && (*(int *)(param_1 + -0x10) < 0xffff)) {
    iVar1 = (int)(thunk_FUN_1123fcd0((void *)(param_1 + -0x10),DAT_12126b84 ));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + -8) = 0;
      *(undefined4 *)(param_1 + -0xc) = 0;
      thunk_FUN_113cfb70(param_1,*(undefined4 *)(param_1 + -4));
      free((void *)(param_1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 105b4fe0; body size 123 bytes.
#line 1 "ENTRY_105b4fe0"

undefined4 __stdcall FUN_105b4fe0(int *param_1)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (param_1 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar1 + 4))();

    thunk_FUN_105b3de0(param_1);

    (**(code **)(*piVar1 + 8))();
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 105b5b90; body size 229 bytes.
#line 1 "ENTRY_105b5b90"

void __fastcall FUN_105b5b90(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x48) != '\0') {
    *(undefined1 *)(param_1 + 0x48) = 0;
    uVar2 = (uint)(-(uint)(*(int *)(param_1 + 0x34) != 0) & *(int *)(param_1 + 0x34) + 0xcU);
    if (uVar2 != 0) {
      (**(code **)(**(int **)(uVar2 + 4) + 0x18))(*(undefined4 *)(param_1 + 0x10));
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0x38));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined4 *)(param_1 + 0x38) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    thunk_FUN_103434a0(param_1 + 8);
    if (*(int *)(param_1 + 0x5c) != 0) {
      thunk_FUN_104dec20();
      if (*(undefined4 **)(param_1 + 0x5c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x5c))(1);
      }
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    if (*(int *)(param_1 + 0x70) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0x74));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined4 *)(param_1 + 0x74) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0x7c));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x7c) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
  }
  return;
}


// Reference entry 105b6040; body size 176 bytes.
#line 1 "ENTRY_105b6040"

int __thiscall Recovered_Bulk::FUN_105b6040(undefined4 param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  thunk_FUN_10118c40(param_2);
  piVar1 = (int *)((int *)(param_1 + 0x18));
  *piVar1 = (int)(0);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar2 = (int)(*param_3);
  iVar3 = (int)(param_3[1]);

  if (iVar2 != iVar3) {
    iVar7 = (int)(iVar3 - iVar2 >> 3);
    iVar5 = (int)(thunk_FUN_105bc210(iVar7));
    *piVar1 = (int)(iVar5);
    *(int *)(param_1 + 0x1c) = iVar5;
    *(int *)(param_1 + 0x20) = iVar5 + iVar7 * 8;
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar6 = (undefined4)(thunk_FUN_105b71f0(iVar2,iVar3,*piVar1,piVar1,uVar4));
    *(undefined4 *)(param_1 + 0x1c) = uVar6;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105b61a0; body size 191 bytes.
#line 1 "ENTRY_105b61a0"

undefined4 * __thiscall Recovered_Bulk::FUN_105b61a0(undefined4 param_2,undefined4 param_3,int param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar4 = (void *)(operator_new(0x34));
  param_1[1] = (undefined4)(pvVar4);

  thunk_FUN_10118c40(param_4);
  uVar1 = (undefined4)(*(undefined4 *)(param_4 + 0x1c));
  uVar2 = (undefined4)(*(undefined4 *)(param_4 + 0x18));
  uVar3 = (undefined4)(*(undefined4 *)(param_4 + 0x20));
  *(undefined4 *)(param_4 + 0x20) = 0;
  *(undefined4 *)(param_4 + 0x1c) = 0;
  *(undefined4 *)(param_4 + 0x18) = 0;
  *(undefined4 *)((int)pvVar4 + 0x28) = uVar2;
  *(undefined4 *)((int)pvVar4 + 0x2c) = uVar1;
  *(undefined4 *)((int)pvVar4 + 0x30) = uVar3;
  *(undefined4 *)param_1[1] = (undefined4)(param_3);
  *(undefined4 *)(param_1[1] + 4) = param_3;
  *(undefined4 *)(param_1[1] + 8) = param_3;
  *(undefined1 *)(param_1[1] + 0xc) = 0;
  *(undefined1 *)(param_1[1] + 0xd) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105b6d40; body size 67 bytes.
#line 1 "ENTRY_105b6d40"

void __stdcall FUN_105b6d40(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_105b6d40(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_105b9d30();
    thunk_FUN_1148a50e(param_2,0x34);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 105b6e60; body size 88 bytes.
#line 1 "ENTRY_105b6e60"

int __thiscall Recovered_Bulk::FUN_105b6e60(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_105b6ed0(local_c,param_2);
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


// Reference entry 105b6ed0; body size 127 bytes.
#line 1 "ENTRY_105b6ed0"

int * __thiscall Recovered_Bulk::FUN_105b6ed0(int *param_2,undefined4 *param_3)
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
  param_2[1] = (int)(0);
  param_2[2] = (int)(iVar4);
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
        param_2[2] = (int)((int)puVar7);
        puVar7 = (undefined4 *)((undefined4 *)*puVar7);
      }
      else {
        puVar7 = (undefined4 *)((undefined4 *)puVar7[2]);
      }
      param_2[1] = (int)((uint)(-1 < iVar4));
    } while (*(char *)((int)puVar7 + 0xd) == '\0');
  }
  return (int *)(param_2);
}


// Reference entry 105b71f0; body size 124 bytes.
#line 1 "ENTRY_105b71f0"

undefined4 * FUN_105b71f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return (undefined4 *)(param_3);

 } catch (...) { }
}


// Reference entry 105b7290; body size 124 bytes.
#line 1 "ENTRY_105b7290"

undefined4 * FUN_105b7290(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return (undefined4 *)(param_3);

 } catch (...) { }
}


// Reference entry 105b7330; body size 124 bytes.
#line 1 "ENTRY_105b7330"

undefined4 * FUN_105b7330(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return (undefined4 *)(param_3);

 } catch (...) { }
}


// Reference entry 105b73d0; body size 124 bytes.
#line 1 "ENTRY_105b73d0"

undefined4 * FUN_105b73d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return (undefined4 *)(param_3);

 } catch (...) { }
}


// Reference entry 105b7ed0; body size 114 bytes.
#line 1 "ENTRY_105b7ed0"

undefined4 * __thiscall Recovered_Bulk::FUN_105b7ed0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105b7fe0; body size 278 bytes.
#line 1 "ENTRY_105b7fe0"

undefined4 * __thiscall Recovered_Bulk::FUN_105b7fe0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[0xd] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCElapsedTimeMeasurement);
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105b82b0; body size 93 bytes.
#line 1 "ENTRY_105b82b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105b82b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x34));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105b8650; body size 183 bytes.
#line 1 "ENTRY_105b8650"

undefined4 * __thiscall Recovered_Bulk::FUN_105b8650(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0xc));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_10129760(0x10,param_1[1]);

  thunk_FUN_105b7bd0(param_2,param_3);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105b87a0; body size 148 bytes.
#line 1 "ENTRY_105b87a0"

int * __thiscall Recovered_Bulk::FUN_105b87a0(int *param_2)
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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 3);
    iVar3 = (int)(thunk_FUN_105bc210(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = (int)(iVar3);
    param_1[2] = (int)(iVar3 + iVar5 * 8);

    iVar4 = (int)(thunk_FUN_105b71f0(iVar4,iVar1,iVar3,param_1,uVar2));
    param_1[1] = (int)(iVar4);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 105b9540; body size 188 bytes.
#line 1 "ENTRY_105b9540"

undefined4 * __fastcall FUN_105b9540(undefined4 *param_1)

{
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSetupAssetSet);

  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  param_1[4] = (undefined4)(pvVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  param_1[6] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105b9e00; body size 81 bytes.
#line 1 "ENTRY_105b9e00"

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

void __fastcall FID_conflict__Tidy_105b9e00(int *param_1)

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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 105ba440; body size 71 bytes.
#line 1 "ENTRY_105ba440"

void __fastcall FUN_105ba440(int param_1)

{
  thunk_FUN_10246290((undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x18) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x18),0x18);
  thunk_FUN_105b6da0((undefined4 *)(param_1 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x10) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x10),0x18);
  thunk_FUN_105ba370();
  return;
}


// Reference entry 105bab50; body size 94 bytes.
#line 1 "ENTRY_105bab50"

int __thiscall Recovered_Bulk::FUN_105bab50(byte param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10246290((undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x18) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x18),0x18);
  thunk_FUN_105b6da0((undefined4 *)(param_1 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x10) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x10),0x18);
  thunk_FUN_105ba370();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (int)(param_1);
}


// Reference entry 105babd0; body size 74 bytes.
#line 1 "ENTRY_105babd0"

undefined4 * __thiscall Recovered_Bulk::FUN_105babd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SetupFileTransferDownloadOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_SetupFileTransferDownloadOp);
  thunk_FUN_105b9f10();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa9dc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105bac30; body size 74 bytes.
#line 1 "ENTRY_105bac30"

undefined4 * __thiscall Recovered_Bulk::FUN_105bac30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SetupFileTransferUploadOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_SetupFileTransferUploadOp);
  thunk_FUN_105ba0d0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa708);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105badc0; body size 104 bytes.
#line 1 "ENTRY_105badc0"

void __thiscall Recovered_Bulk::FUN_105badc0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_105b63f0(*param_1,param_1[1],param_1);
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
  param_1[1] = (int)(param_2 + param_3 * 8);
  param_1[2] = (int)(param_2 + param_4 * 8);
  return;
}


// Reference entry 105bae50; body size 104 bytes.
#line 1 "ENTRY_105bae50"

void __thiscall Recovered_Bulk::FUN_105bae50(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_105b6490(*param_1,param_1[1],param_1);
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
  param_1[1] = (int)(param_2 + param_3 * 8);
  param_1[2] = (int)(param_2 + param_4 * 8);
  return;
}


// Reference entry 105bb4e0; body size 81 bytes.
#line 1 "ENTRY_105bb4e0"

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

void __fastcall FID_conflict__Tidy_105bb4e0(int *param_1)

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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 105bb550; body size 96 bytes.
#line 1 "ENTRY_105bb550"

void __fastcall FUN_105bb550(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_105b63f0(*param_1,param_1[1],param_1);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 105bb660; body size 123 bytes.
#line 1 "ENTRY_105bb660"

undefined4 * __stdcall FUN_105bb660(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return (undefined4 *)(param_3);

 } catch (...) { }
}


// Reference entry 105bb700; body size 123 bytes.
#line 1 "ENTRY_105bb700"

undefined4 * __stdcall FUN_105bb700(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return (undefined4 *)(param_3);

 } catch (...) { }
}


// Reference entry 105bb7c0; body size 121 bytes.
#line 1 "ENTRY_105bb7c0"

void FUN_105bb7c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return;

 } catch (...) { }
}


// Reference entry 105bb880; body size 121 bytes.
#line 1 "ENTRY_105bb880"

void __stdcall FUN_105bb880(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return;

 } catch (...) { }
}


// Reference entry 105bb940; body size 76 bytes.
#line 1 "ENTRY_105bb940"

void __fastcall FUN_105bb940(int param_1)

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


// Reference entry 105bb9a0; body size 70 bytes.
#line 1 "ENTRY_105bb9a0"

void __fastcall FUN_105bb9a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
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
  return;
}


// Reference entry 105bba50; body size 113 bytes.
#line 1 "ENTRY_105bba50"

void __fastcall FUN_105bba50(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x32) = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x2c));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
    if (*(int *)(param_1 + 0x20) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0x24));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return;
}


// Reference entry 105bbae0; body size 333 bytes.
#line 1 "ENTRY_105bbae0"

void __thiscall Recovered_Bulk::FUN_105bbae0(int param_2,short param_3)
{
  int param_1 = (int )this;
 try {
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x18) + 0x20))(DAT_12126b84 ));
  if (param_2 == iVar2) {
    *(short *)(param_1 + 0x28) = param_3;
    if ((param_3 == 0) && (7 < (uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)))) {
      thunk_FUN_105c2b30();

      return;
    }
    *(undefined1 *)(param_1 + 0x2a) = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      piVar3 = (int *)(*(int **)(param_1 + 0x1c));
      if (piVar3 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        (**(code **)(*piVar3 + 8))();
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    piVar3 = (int *)(*(int **)(param_1 + 0x20));
    if (piVar3 != (int *)0x0) {
      piVar5 = (int *)((int *)0x0);
      if ((int *)(param_1 + -8) != (int *)0x0) {
        piVar5 = (int *)((int *)(**(code **)(*(int *)(param_1 + -8) + 0xc))());
        (**(code **)(*piVar5 + 4))();
        piVar3 = (int *)(*(int **)(param_1 + 0x20));
      }
      iVar2 = (int)(*piVar3);

      uVar1 = (undefined2)((**(code **)(*(int *)(param_1 + -8) + 0x24))());
      uVar4 = (undefined4)((**(code **)(*(int *)(param_1 + -8) + 0x20))(uVar1));
      (**(code **)(iVar2 + 0x14))(uVar4);
      if (*(int *)(param_1 + 0x20) != 0) {
        piVar3 = (int *)(*(int **)(param_1 + 0x24));
        if (piVar3 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x20) = 0;
          *(undefined4 *)(param_1 + 0x24) = 0;
          (**(code **)(*piVar3 + 8))();
        }
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
      }

      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))();
      }
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 105bbc80; body size 149 bytes.
#line 1 "ENTRY_105bbc80"

void __thiscall Recovered_Bulk::FUN_105bbc80(int *param_2,undefined4 param_3)
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


// Reference entry 105bc050; body size 164 bytes.
#line 1 "ENTRY_105bc050"

void __thiscall Recovered_Bulk::FUN_105bc050(int *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  int *piVar2;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)0x0);
  local_18 = (int *)(param_2);
  local_14 = (int *)((int *)0x0);
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))(DAT_12126b84 ));
    local_14 = (int *)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x18));

  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    thunk_FUN_105b6a20(puVar1,&local_18);
  }
  else {
    *puVar1 = (undefined4)(param_2);
    puVar1[1] = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 105bc210; body size 87 bytes.
#line 1 "ENTRY_105bc210"

void * FUN_105bc210(uint param_1)

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


// Reference entry 105bc2f0; body size 218 bytes.
#line 1 "ENTRY_105bc2f0"

void __fastcall FUN_105bc2f0(int param_1)

{
 try {
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  piVar4 = (int *)(*(int **)(param_1 + 0x14));
  *(undefined1 *)(param_1 + 0x1c) = 0;
  if (piVar4 != (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
    if ((int *)(param_1 + -8) != (int *)0x0) {
      piVar6 = (int *)((int *)(**(code **)(*(int *)(param_1 + -8) + 0xc))(uVar3));
      (**(code **)(*piVar6 + 4))();
      piVar4 = (int *)(*(int **)(param_1 + 0x14));
    }
    iVar1 = (int)(*piVar4);

    uVar2 = (undefined2)((**(code **)(*(int *)(param_1 + -8) + 0x24))());
    uVar5 = (undefined4)((**(code **)(*(int *)(param_1 + -8) + 0x20))(uVar2));
    (**(code **)(iVar1 + 0x14))(uVar5);
    if (*(int *)(param_1 + 0x14) != 0) {
      piVar4 = (int *)(*(int **)(param_1 + 0x18));
      if (piVar4 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        (**(code **)(*piVar4 + 8))();
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
    }

    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 105bc6f0; body size 195 bytes.
#line 1 "ENTRY_105bc6f0"

undefined1 FUN_105bc6f0(void)

{
 try {
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  cVar1 = (char)(thunk_FUN_10c9a720(DAT_12126b84 ));
  if (cVar1 == '\0') {
    uVar2 = (undefined1)(thunk_FUN_10c9c980());

    return (undefined1)(uVar2);
  }
  uVar3 = (undefined4)(thunk_FUN_10c97f60(&local_14));

  thunk_FUN_10351370(uVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (local_1c != 0) {
    cVar1 = (char)(thunk_FUN_10c9c980());
    if (cVar1 != '\0') {
      cVar1 = (char)(thunk_FUN_10c9c980());
      if (cVar1 != '\0') {
        uVar2 = (undefined1)(1);
        goto LAB_105bc777;
      }
    }
  }
  uVar2 = (undefined1)(0);
LAB_105bc777:

  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 105bc7f0; body size 101 bytes.
#line 1 "ENTRY_105bc7f0"

int FUN_105bc7f0(undefined4 param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_11457630(param_1));
  if (cVar1 != '\0') {
    return (int)(param_2 + 4);
  }
  cVar1 = (char)(thunk_FUN_11457d80(param_1));
  if (cVar1 != '\0') {
    return (int)(param_2 + 6);
  }
  cVar1 = (char)(thunk_FUN_11458170(param_1));
  if (cVar1 != '\0') {
    return (int)(param_2 + 2);
  }
  cVar1 = (char)(thunk_FUN_11457ec0(param_1));
  if (cVar1 != '\0') {
    return (int)(param_2 + 0x54);
  }
  return (int)(0);
}


// Reference entry 105bc870; body size 70 bytes.
#line 1 "ENTRY_105bc870"

void __fastcall FUN_105bc870(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
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
  return;
}


// Reference entry 105bd1c0; body size 83 bytes.
#line 1 "ENTRY_105bd1c0"

char __thiscall Recovered_Bulk::FUN_105bd1c0(undefined4 param_2)
{
  int param_1 = (int )this;
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (char)(thunk_FUN_111fc6a0(param_2));
  if (((cVar1 == '\0') && (*(int *)(param_1 + 0x442c) != -1)) &&
     (*(int *)(param_1 + 0x442c) == 0x130)) {
    uVar2 = (undefined4)((**(code **)(*(int *)(param_1 + -0x60) + 0x3c))());
    thunk_FUN_112af4e0("SetupFileTransferDownloadOp",1,"HTTP result code: (%d) on (%s) ",0x130,uVar2
                      );
    *(undefined1 *)(param_1 + 0xa978) = 1;
    cVar1 = (char)('\x01');
  }
  return (char)(cVar1);
}


// Reference entry 105bd230; body size 134 bytes.
#line 1 "ENTRY_105bd230"

void __thiscall Recovered_Bulk::FUN_105bd230(char *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  char *_Str;
  undefined1 *puVar3;
  
  iVar2 = (int)(strncmp(param_2,"HTTP/1.1 ",9));
  if ((iVar2 == 0) || (iVar2 = strncmp(param_2,"HTTP/1.0 ",9), iVar2 == 0)) {
    _Str = (char *)(param_2 + 9);
    cVar1 = (char)(param_2[9]);
    while (cVar1 == ' ') {
      _Str = (char *)(_Str + 1);
      cVar1 = (char)(*_Str);
    }
    iVar2 = (int)(atoi(_Str));
    *(int *)(param_1 + 0xa6a4) = iVar2;
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0xa658) != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0xa658));
    }
    thunk_FUN_112af4e0("SetupFileTransferUploadOp",1,
                       "SetupFileTransferUploadOp: HTTP result code: (%d) on %s",iVar2,puVar3);
  }
  thunk_FUN_111fc6d0(param_2);
  return;
}


// Reference entry 105bd350; body size 107 bytes.
#line 1 "ENTRY_105bd350"

void __thiscall Recovered_Bulk::FUN_105bd350(int *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_105b6ed0(local_c,param_3);
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


// Reference entry 105bd4a0; body size 119 bytes.
#line 1 "ENTRY_105bd4a0"

undefined4
FUN_105bd4a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
 try {
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  pvVar1 = (void *)(operator_new(0xa9dc));

  if (pvVar1 != (void *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_105b9630(param_1,param_2,param_3,param_4,param_5,param_6));

    return (undefined4)(uVar2);
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 105bf060; body size 85 bytes.
#line 1 "ENTRY_105bf060"

float10 __fastcall FUN_105bf060(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xa6e8));
  if (iVar1 == 0) {
    return (float10)((float10)0.0);
  }
  return (float10)((float10)((float)((double)*(int *)(param_1 + 0xa6e4) +
                          (double)(&DAT_11880fb0)[-(*(int *)(param_1 + 0xa6e4) >> 0x1f)]) /
                  (float)((double)iVar1 + (double)(&DAT_11880fb0)[-(iVar1 >> 0x1f)])));
}


// Reference entry 105bfc10; body size 170 bytes.
#line 1 "ENTRY_105bfc10"

undefined1 FUN_105bfc10(void)

{
 try {
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar3 = (int *)((int *)thunk_FUN_1037a2b0(&local_14,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar3);

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
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 == (int *)0x0) {
    uVar2 = (undefined1)(0);
  }
  else {
    uVar2 = (undefined1)((**(code **)(*piVar1 + 0x17c))());
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 105bfd60; body size 91 bytes.
#line 1 "ENTRY_105bfd60"

bool __thiscall Recovered_Bulk::FUN_105bfd60(int param_2,short *param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x20) + 0xc))());
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x20) + 8))());
      goto LAB_105bfd82;
    }
  }
  iVar2 = (int)(*(int *)(param_1 + 0x24));
LAB_105bfd82:
  if (iVar2 == param_2) {
    *(int *)(param_1 + 0x3c) = (*(int **)(param_1 + 0x20))[0x1123];
    if (*param_3 == 0) {
      uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 0x40))());
      *(undefined4 *)(param_1 + 0x38) = uVar3;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return (bool)(*(int *)(param_1 + 0x3c) == 200);
}


// Reference entry 105bfe50; body size 106 bytes.
#line 1 "ENTRY_105bfe50"

undefined1 FUN_105bfe50(void)

{
 try {
  undefined1 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1037a2b0(&local_14,DAT_12126b84 ));

  uVar1 = (undefined1)((**(code **)(*(int *)*puVar2 + 500))());

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 105bfee0; body size 343 bytes.
#line 1 "ENTRY_105bfee0"

undefined1 FUN_105bfee0(char param_1)

{
 try {
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  undefined4 *local_34;
  undefined4 *local_30;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar3 = (int *)((int *)thunk_FUN_1037a2b0(&local_18,DAT_12126b84 ));
  local_28 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (local_28 == (int *)0x0) {
    local_24 = (int *)((int *)0x0);
  }
  else {
    local_24 = (int *)((int *)(**(code **)(*local_28 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_1037f130(&local_34,9);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  puVar6 = (undefined4 *)(local_34);
  uVar5 = (undefined1)(1);
  if (local_34 != (undefined4 *)(local_30)) {
    do {
      piVar3 = (int *)((int *)puVar6[1]);
      piVar1 = (int *)((int *)*puVar6);
      local_20 = (int *)(piVar1);
      local_1c = (int *)(piVar3);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      local_18 = (int *)((int *)((uint)local_18 & 0xffffff00));
      if (param_1 != '\0') {
        iVar4 = (int)((**(code **)(*piVar1 + 0xf4))());
        local_18 = (int *)((int *)((uint)local_18 & 0xff));
        if (iVar4 == 2) {
          local_18 = (int *)((int *)0x1);
        }
      }
      cVar2 = (char)((**(code **)(*piVar1 + 0x1c))());
      if ((cVar2 == '\0') && ((char)local_18 == '\0')) {
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
        uVar5 = (undefined1)(0);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))();
        }
        break;
      }
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      if (piVar3 != (int *)0x0) {
        local_20 = (int *)((int *)0x0);
        local_1c = (int *)((int *)0x0);
        (**(code **)(*piVar3 + 8))();
      }
      puVar6 = (undefined4 *)(puVar6 + 2);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
      uVar5 = (undefined1)(local_11);
    } while (puVar6 != (undefined4 *)(local_30));
  }
  thunk_FUN_101f4a30();

  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }

  return (undefined1)(uVar5);

 } catch (...) { }
}


// Reference entry 105c00b0; body size 173 bytes.
#line 1 "ENTRY_105c00b0"

undefined1 FUN_105c00b0(void)

{
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_1037a2b0(&local_14,DAT_12126b84 ));
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
    iVar3 = (int)((**(code **)(piVar1[3] + 0x14))(9));
    if (iVar3 != 0) {
      uVar4 = (undefined1)(0);
      goto LAB_105c0137;
    }
  }
  uVar4 = (undefined1)(1);
LAB_105c0137:

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (undefined1)(uVar4);

 } catch (...) { }
}


// Reference entry 105c0250; body size 128 bytes.
#line 1 "ENTRY_105c0250"

void __fastcall FUN_105c0250(int param_1)

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


// Reference entry 105c0360; body size 232 bytes.
#line 1 "ENTRY_105c0360"

void __thiscall Recovered_Bulk::FUN_105c0360(undefined4 param_2,undefined4 param_3)
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


// Reference entry 105c0a20; body size 303 bytes.
#line 1 "ENTRY_105c0a20"

undefined1 FUN_105c0a20(void)

{
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar2 = (int)(thunk_FUN_10c96760(DAT_12126b84 ));
  if ((((iVar2 != 0x29) && (iVar2 != 0x2a)) && (iVar2 != 0x2b)) && (iVar2 != 0x3a)) {

    return (undefined1)(0);
  }
  piVar3 = (int *)((int *)thunk_FUN_10c987f0(&local_14));
  piVar1 = (int *)((int *)*piVar3);

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
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 != (int *)0x0) {
    iVar2 = (int)((**(code **)(*piVar1 + 0x14))());
    if (((iVar2 < 0x47) ||
        ((iVar2 = (**(code **)(*piVar1 + 0x14))(), iVar2 == 0x47 &&
         (iVar2 = (**(code **)(*piVar1 + 0x18))(), iVar2 < 1)))) ||
       ((iVar2 = (**(code **)(*piVar1 + 0x14))(), iVar2 == 0x47 &&
        ((iVar2 = (**(code **)(*piVar1 + 0x18))(), iVar2 == 1 &&
         (iVar2 = (**(code **)(*piVar1 + 0x1c))(), iVar2 < 0x8975)))))) {
      uVar4 = (undefined1)(1);
    }
    else {
      uVar4 = (undefined1)(0);
    }

    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }

    return (undefined1)(uVar4);
  }

  if (piVar3 == (int *)0x0) {

    return (undefined1)(0);
  }
  (**(code **)(*piVar3 + 8))();

  return (undefined1)(0);

 } catch (...) { }
}


// Reference entry 105c0bc0; body size 79 bytes.
#line 1 "ENTRY_105c0bc0"

void FUN_105c0bc0(undefined4 param_1)

{
  int iVar1;
  undefined1 local_34 [6];
  uint local_2e;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_34);
  iVar1 = (int)(stat64i32(param_1,local_34));
  if ((iVar1 == 0) && ((local_2e & 0x8000) != 0)) {
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 105c0c30; body size 79 bytes.
#line 1 "ENTRY_105c0c30"

void FUN_105c0c30(undefined4 param_1)

{
  int iVar1;
  undefined1 local_34 [6];
  uint local_2e;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_34);
  iVar1 = (int)(stat64i32(param_1,local_34));
  if ((iVar1 == 0) && ((local_2e & 0x4000) != 0)) {
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 105c0ca0; body size 563 bytes.
#line 1 "ENTRY_105c0ca0"

void FUN_105c0ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FILE *_File;
  int *piVar1;
  FILE *_File_00;
  int iVar2;
  size_t sVar3;
  void *_Str;
  void *_DstBuf;
  char *pcVar4;
  undefined1 auStack_d8 [3];
  undefined1 local_d5;
  size_t local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_c4 [192];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)auStack_d8);
  local_cc = (undefined4)(param_1);
  local_d0 = (undefined4)(param_2);
  local_c8 = (undefined4)(param_3);
  local_d5 = (undefined1)(0);
  _File = (FILE *)((FILE *)thunk_FUN_1145cb70(param_2,&DAT_118876d0));
  if (_File == (FILE *)0x0) {
    piVar1 = (int *)(_errno());
    thunk_FUN_112af4e0("SCSetupFileIoHelper",1,"Downloader: error %d opening file: %s",*piVar1,
                       param_2);
    free((void *)0x0);
    free((void *)0x0);
    goto LAB_105c0eb7;
  }
  _File_00 = (FILE *)((FILE *)thunk_FUN_1145cb70(param_1,&DAT_118a1338));
  if (_File_00 == (FILE *)0x0) {
    piVar1 = (int *)(_errno());
    iVar2 = (int)(*piVar1);
    pcVar4 = (char *)("Downloader: error %d opening file: %s");
LAB_105c0d42:
    thunk_FUN_112af4e0("SCSetupFileIoHelper",1,pcVar4,iVar2,param_1);
    _Str = (void *)((void *)0x0);
    _DstBuf = (void *)((void *)0x0);
  }
  else {
    iVar2 = (int)(thunk_FUN_113d2660(local_c4,1,local_c8,0x10,0,0,0));
    if (iVar2 != 0) {
      pcVar4 = (char *)("Downloader: error %d parsing file: %s");
      param_1 = (undefined4)(param_2);
      goto LAB_105c0d42;
    }
    _DstBuf = (void *)((void *)thunk_FUN_1148b586(0x40000));
    _Str = (void *)((void *)thunk_FUN_1148b586(0x40010));
    iVar2 = (int)(feof(_File));
    while ((iVar2 == 0 && (sVar3 = fread(_DstBuf,1,0x40000,_File), sVar3 != 0))) {
      local_d4 = (size_t)(0x40010);
      iVar2 = (int)(thunk_FUN_113d2860(local_c4,_DstBuf,sVar3,_Str,&local_d4));
      if (iVar2 != 0) {
        thunk_FUN_112af4e0("SCSetupFileIoHelper",1,"Downloader: error %d parsing file: %s",iVar2,
                           local_d0);
        goto LAB_105c0e94;
      }
      sVar3 = (size_t)(fwrite(_Str,1,local_d4,_File_00));
      if (sVar3 != local_d4) goto LAB_105c0e75;
      iVar2 = (int)(feof(_File));
    }
    local_d4 = (size_t)(0x40010);
    iVar2 = (int)(thunk_FUN_113d2490(local_c4,_Str,&local_d4));
    if (iVar2 == 0) {
      if ((local_d4 == 0) || (sVar3 = fwrite(_Str,1,local_d4,_File_00), sVar3 == local_d4)) {
        local_d5 = (undefined1)(1);
      }
      else {
LAB_105c0e75:
        thunk_FUN_112af4e0("SCSetupFileIoHelper",1,"Downloader: Could not write file: %s",local_cc);
      }
    }
    else {
      thunk_FUN_112af4e0("SCSetupFileIoHelper",1,"Downloader: error %d finishing file: %s",iVar2,
                         local_d0);
    }
  }
LAB_105c0e94:
  free(_DstBuf);
  free(_Str);
  fclose(_File);
  if (_File_00 != (FILE *)0x0) {
    fclose(_File_00);
  }
LAB_105c0eb7:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 105c1110; body size 357 bytes.
#line 1 "ENTRY_105c1110"

int * FUN_105c1110(int *param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)thunk_FUN_1037a2b0());
  piVar2 = (int *)((int *)*piVar1);

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
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  local_18 = (undefined4)(thunk_FUN_10c2f5a0());
  if (piVar2 == (int *)0x0) {
    local_1c = (int *)(operator_new(0x14));
    if (local_1c == (int *)0x0) {
      *param_1 = (int)(0);
    }
    else {
      *local_1c = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      local_1c[1] = (int)(0);
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *local_1c = (int)((int)(uint)&ghidra_vftable_SCArray);
      local_1c[2] = (int)(0);
      local_1c[3] = (int)(0);
      local_1c[4] = (int)(0);
      *param_1 = (int)((int)local_1c);
      if (local_1c != (int *)0x0) {
        (**(code **)(*local_1c + 4))();
      }
    }

    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
  }
  else {
    thunk_FUN_1037d020(&stack0xffffffc4);
    piVar2 = (int *)((int *)thunk_FUN_10c2eca0(&local_20));
    piVar2 = (int *)((int *)*piVar2);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    *param_1 = (int)((int)piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    piVar2 = (int *)(local_1c);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    if (local_1c != (int *)0x0) {

      local_1c = (int *)((int *)0x0);
      (**(code **)(*piVar2 + 8))();
    }

    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();

      return (int *)(param_1);
    }
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 105c2a00; body size 239 bytes.
#line 1 "ENTRY_105c2a00"

void __fastcall FUN_105c2a00(int param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0xa9dc));

  if (pvVar2 == (void *)0x0) {
    iVar3 = (int)(0);
  }
  else {
    iVar3 = (int)(thunk_FUN_105b9630(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                               *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),0,
                               6000));
  }
  piVar6 = (int *)(*(int **)(param_1 + 0x20));

  if (piVar6 != (int *)0x0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      (**(code **)(*piVar6 + 0x10))(uVar1);
      piVar6 = (int *)(*(int **)(param_1 + 0x20));
    }
    if (piVar6 != (int *)0x0) {
      iVar4 = (int)(thunk_FUN_1123fcd0(piVar6 + 1));
      if (iVar4 == 0) {
        (**(code **)*piVar6)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(int *)(param_1 + 0x20) = iVar3;
  if (iVar3 != 0) {
    thunk_FUN_1123fce0(iVar3 + 4);
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      uVar5 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 4))(-(uint)(param_1 != 0) & param_1 + 8U,0));
      *(undefined4 *)(param_1 + 0x24) = uVar5;
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 105c2dd0; body size 195 bytes.
#line 1 "ENTRY_105c2dd0"

void __stdcall FUN_105c2dd0(int param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  undefined4 ****ppppuVar2;
  uint uVar3;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  if (param_1 != 0) {


    local_2c[0] = (undefined4 ***)((undefined4 ***)((uint)local_2c[0] & 0xffffff00));
    thunk_FUN_1012d130(param_1,param_2);
    ppppuVar2 = (undefined4 ****)(local_2c);
    if (0xf < local_18) {
      ppppuVar2 = (undefined4 ****)((undefined4 ****)local_2c[0]);
    }

    thunk_FUN_1012cdb0(ppppuVar2,local_1c);
    if (0xf < local_18) {
      uVar3 = (uint)(local_18 + 1);
      ppppuVar2 = (undefined4 ****)((undefined4 ****)local_2c[0]);
      if (0xfff < uVar3) {
        ppppuVar2 = (undefined4 ****)((undefined4 ****)local_2c[0][-1]);
        uVar3 = (uint)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar2))) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(ppppuVar2,uVar3,uVar1);
    }
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 105c36a0; body size 179 bytes.
#line 1 "ENTRY_105c36a0"

undefined4 * __thiscall Recovered_Bulk::FUN_105c36a0(undefined4 param_2,undefined4 param_3,undefined1 param_4,
            int *param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(param_2);
  param_1[5] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardNeedingTokenAction);
  *(undefined1 *)(param_1 + 6) = param_4;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);

  param_1[9] = (undefined4)(param_5);
  param_1[10] = (undefined4)(0);
  if (param_5 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_5 + 0xc))(uVar1));
    param_1[10] = (undefined4)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105c39f0; body size 131 bytes.
#line 1 "ENTRY_105c39f0"

undefined4 * __fastcall FUN_105c39f0(undefined4 *param_1)

{
 try {
  char cVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *(undefined2 *)(param_1 + 4) = 0;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferWizardActionDescriptor);
  cVar1 = (char)(thunk_FUN_101dccc0(3,0,uVar2));
  *(bool *)((int)param_1 + 0x11) = cVar1 != '\0';

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105c4500; body size 69 bytes.
#line 1 "ENTRY_105c4500"

undefined4 * __thiscall Recovered_Bulk::FUN_105c4500(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCChangeEmailWizard);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCChangeEmailWizard);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCChangeEmailWizard);
  param_1[0x12] = (undefined4)((uint)&ghidra_vftable_SCChangeEmailWizard);
  param_1[0x13] = (undefined4)((uint)&ghidra_vftable_SCChangeEmailWizard);
  thunk_FUN_10dd1440();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105c53f0; body size 883 bytes.
#line 1 "ENTRY_105c53f0"

undefined4 * __thiscall Recovered_Bulk::FUN_105c53f0(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  SCLibrary *this_;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  SCIWizard *pSVar7;
  int *local_2c;
  int *local_28;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (param_3 == (int *)0x0) {
    param_3 = (int *)(operator_new(0xd0));

    if (param_3 == (int *)0x0) {
      piVar2 = (int *)((int *)0x0);
    }
    else {
      piVar2 = (int *)((int *)thunk_FUN_10e23140(*(undefined4 *)(param_1 + 0x10)));
    }
    piVar3 = (int *)(*(int **)(param_1 + 0x14));

    if (piVar2 != (int *)(piVar3)) {
      piVar3 = (int *)(*(int **)(param_1 + 0x18));
      if (piVar3 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        (**(code **)(*piVar3 + 8))();
      }
      *(int **)(param_1 + 0x14) = piVar2;
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x18) = 0;
        piVar3 = (int *)((int *)0x0);
      }
      else {
        piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
        *(int **)(param_1 + 0x18) = piVar2;
        (**(code **)(*piVar2 + 4))();
        piVar3 = (int *)(*(int **)(param_1 + 0x14));
      }
    }
    pSVar7 = (SCIWizard *)((SCIWizard *)&param_3);
    this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    uVar4 = (undefined4)(((SCLibrary *)(this_))->createDisplayWizardAction(pSVar7));

    thunk_FUN_101aa810(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 8))(piVar3);
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    *param_2 = (undefined4)(local_2c);
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 4))();
    }

    if (local_28 != (int *)0x0) {
      (**(code **)(*local_28 + 8))();

      return (undefined4 *)(param_2);
    }
  }
  else {
    thunk_FUN_101b5540(DAT_12126b84 );
    if (((*(int **)(param_1 + 0x14) == (int *)0x0) ||
        (iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 0xc0))(), iVar5 != 2)) ||
       (((((cVar1 = thunk_FUN_101b5e50(0), cVar1 == '\0' ||
           (cVar1 = thunk_FUN_101b5de0(0), cVar1 != '\0')) &&
          ((cVar1 = thunk_FUN_101b5e50(1), cVar1 == '\0' ||
           (cVar1 = thunk_FUN_101b5de0(1), cVar1 != '\0')))) &&
         ((cVar1 = thunk_FUN_101b5e50(3), cVar1 == '\0' ||
          (cVar1 = thunk_FUN_101b5de0(3), cVar1 != '\0')))) &&
        ((cVar1 = thunk_FUN_101b5e50(2), cVar1 == '\0' ||
         (cVar1 = thunk_FUN_101b5de0(2), cVar1 != '\0')))))) {
      *param_2 = (undefined4)(0);

      return (undefined4 *)(param_2);
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      piVar2 = (int *)(*(int **)(param_1 + 0x18));
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        (**(code **)(*piVar2 + 8))();
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    piVar2 = (int *)(operator_new(0xdc));

    param_3 = (int *)(piVar2);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)thunk_FUN_106e1380());
      uVar4 = (undefined4)((**(code **)(*piVar3 + 0xc))(0,0,0));
      thunk_FUN_105a7950(uVar4);
      *piVar2 = (int)((int)(uint)&ghidra_vftable_SCNewWizControllerFor);
      piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCNewWizControllerFor);
      piVar2[6] = (int)((int)(uint)&ghidra_vftable_SCNewWizControllerFor);
      piVar2[7] = (int)((int)(uint)&ghidra_vftable_SCNewWizControllerFor);
      piVar2[0xe] = (int)((int)(uint)&ghidra_vftable_SCNewWizControllerFor);
      piVar2[0x11] = (int)((int)(uint)&ghidra_vftable_SCNewWizControllerFor);
      piVar2[0x14] = (int)((int)(uint)&ghidra_vftable_SCNewWizControllerFor);
    }

    piVar3 = (int *)((int *)0x0);
    if (piVar2 != (int *)0x0) {
      if (*(code **)(*piVar2 + 0xc) != thunk_FUN_1023a9b0) {
        piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
      }
      (**(code **)(*piVar2 + 4))();
      piVar3 = (int *)(piVar2);
    }

    uVar4 = (undefined4)(thunk_FUN_105aca80(&param_3,5,0xd,0));
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    thunk_FUN_101aa810(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    puVar6 = (undefined4 *)((undefined4 *)(**(code **)(*local_2c + 0x20))(&local_18));
    piVar2 = (int *)(*(int **)(param_1 + 8));
    local_14 = (int *)((int *)*puVar6);
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    (**(code **)(*local_14 + 0x88))(piVar2);
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    *param_2 = (undefined4)(local_2c);
    (**(code **)(*local_2c + 4))();
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x10)));
    if (local_28 != (int *)0x0) {
      (**(code **)(*local_28 + 8))();
    }

    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105c5e60; body size 399 bytes.
#line 1 "ENTRY_105c5e60"

undefined4 * __thiscall Recovered_Bulk::FUN_105c5e60(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  SCLibrary *this_;
  undefined4 *puVar6;
  SCIAction *pSVar7;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  piVar4 = (int *)(operator_new(0x20));

  local_14 = (int *)(piVar4);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)(operator_new(0x1c));
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      iVar1 = (int)(*(int *)(param_1 + 8));
      *piVar5 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar5[1] = (int)(0);
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      piVar5[2] = (int)(0);
      piVar5[3] = (int)(0);
      *piVar5 = (int)((int)(uint)&ghidra_vftable_SCLegacyWelcomeLoginWizardAction);
      piVar5[4] = (int)(iVar1);
      piVar5[5] = (int)(0);
      piVar5[6] = (int)(0);
    }
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar4[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar4[2] = (int)((int)(uint)&ghidra_vftable_SCIActionDelegate);
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar4[2] = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar4[3] = (int)(0);
    piVar4[4] = (int)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    piVar4[5] = (int)((int)piVar5);
    piVar4[6] = (int)(0);
    if (piVar5 != (int *)0x0) {
      if (*(code **)(*piVar5 + 0xc) != thunk_FUN_10211630) {
        piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(uVar3));
      }
      piVar4[6] = (int)((int)piVar5);
      (**(code **)(*piVar5 + 4))();
    }
    *(undefined1 *)(piVar4 + 7) = 0;
  }
  piVar5 = (int *)((int *)0x0);

  if (piVar4 != (int *)0x0) {
    piVar5 = (int *)(piVar4);
    if (*(code **)(*piVar4 + 0xc) != thunk_FUN_102116d0) {
      piVar5 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
    }
    (**(code **)(*piVar5 + 4))();
  }
  pSVar7 = (SCIAction *)((SCIAction *)&local_14);

  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  puVar6 = (undefined4 *)((undefined4 *)((SCLibrary *)(this_))->createActionContextForAction(pSVar7));
  uVar2 = (undefined4)(*puVar6);
  *puVar6 = (undefined4)(0);
  *param_2 = (undefined4)(uVar2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(piVar4);
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105c79e0; body size 390 bytes.
#line 1 "ENTRY_105c79e0"

SCIAction * __stdcall FUN_105c79e0(SCIAction *param_1)

{
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  SCLibrary *this_;
  SCIAction *pSVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x20));

  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)(operator_new(0x28));
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar3[1] = (int)(0);
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      piVar3[2] = (int)(0);
      piVar3[3] = (int)(0);
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIncrementHHSwgenAndOnlineUpdateWizardAction);
      piVar3[4] = (int)(0);
      piVar3[5] = (int)(0);
      piVar3[6] = (int)(0);
      piVar3[7] = (int)(0);
      piVar3[8] = (int)(0);
      piVar3[9] = (int)(0);
    }
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCIActionDelegate);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar2[3] = (int)(0);
    piVar2[4] = (int)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    piVar2[5] = (int)((int)piVar3);
    piVar2[6] = (int)(0);
    if (piVar3 != (int *)0x0) {
      if (*(code **)(*piVar3 + 0xc) != thunk_FUN_10211630) {
        piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
      }
      piVar2[6] = (int)((int)piVar3);
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined1 *)(piVar2 + 7) = 0;
  }
  piVar3 = (int *)((int *)0x0);

  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)(piVar2);
    if (*(code **)(*piVar2 + 0xc) != thunk_FUN_102116d0) {
      piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    }
    (**(code **)(*piVar3 + 4))();
  }

  pSVar4 = (SCIAction *)(param_1);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  ((SCLibrary *)(this_))->createActionContextForAction(pSVar4);

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar2);
  }

  return (SCIAction *)(param_1);

 } catch (...) { }
}


// Reference entry 105c7e10; body size 186 bytes.
#line 1 "ENTRY_105c7e10"

int * __thiscall Recovered_Bulk::FUN_105c7e10(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_10cb7e00(&local_14,0,DAT_12126b84 ));
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
  if (*(char *)(param_1 + 0x10) != '\0') {
    (**(code **)(*piVar1 + 0xfc))();
  }
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


// Reference entry 105c7f00; body size 218 bytes.
#line 1 "ENTRY_105c7f00"

undefined4 * __thiscall Recovered_Bulk::FUN_105c7f00(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0xd8));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_105c33c0(*(undefined1 *)(param_1 + 0x14)));
  }
  piVar4 = (int *)((int *)0x0);

  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
    (**(code **)(*piVar4 + 4))();
  }

  if ((piVar3 == (int *)0x0) || (*(char *)(param_1 + 0x10) == '\0')) {
    *param_2 = (undefined4)(piVar3);
    if (piVar3 == (int *)0x0) goto LAB_105c7fb2;
  }
  else {
    (**(code **)(*piVar3 + 0xfc))();
    *param_2 = (undefined4)(piVar3);
  }
  (**(code **)(*piVar3 + 4))();
LAB_105c7fb2:

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105c8010; body size 202 bytes.
#line 1 "ENTRY_105c8010"

undefined4 * __thiscall Recovered_Bulk::FUN_105c8010(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0xd8));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10bb5460(*(undefined4 *)(param_1 + 0x14)));
  }
  piVar4 = (int *)((int *)0x0);

  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
    (**(code **)(*piVar4 + 4))();
  }

  if (*(char *)(param_1 + 0x10) != '\0') {
    (**(code **)(*piVar3 + 0xfc))();
  }
  *param_2 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105c8110; body size 117 bytes.
#line 1 "ENTRY_105c8110"

undefined4 * __stdcall FUN_105c8110(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0xd0));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10e89980(uVar1));
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105c81b0; body size 196 bytes.
#line 1 "ENTRY_105c81b0"

int * __thiscall Recovered_Bulk::FUN_105c81b0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = (int *)(param_2);


  piVar3 = (int *)((int *)thunk_FUN_10cb86d0(&param_2,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if ((piVar1 == (int *)0x0) || (*(char *)(param_1 + 0x10) == '\0')) {
    *piVar2 = (int)((int)piVar1);
    if (piVar1 == (int *)0x0) goto LAB_105c824c;
  }
  else {
    (**(code **)(*piVar1 + 0xfc))();
    *piVar2 = (int)((int)piVar1);
  }
  (**(code **)(*piVar1 + 4))();
LAB_105c824c:

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(piVar2);

 } catch (...) { }
}


// Reference entry 105c82b0; body size 198 bytes.
#line 1 "ENTRY_105c82b0"

int * __thiscall Recovered_Bulk::FUN_105c82b0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = (int *)(param_2);


  piVar3 = (int *)((int *)thunk_FUN_10cb87b0(&param_2,0,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if ((piVar1 == (int *)0x0) || (*(char *)(param_1 + 0x10) == '\0')) {
    *piVar2 = (int)((int)piVar1);
    if (piVar1 == (int *)0x0) goto LAB_105c834e;
  }
  else {
    (**(code **)(*piVar1 + 0xfc))();
    *piVar2 = (int)((int)piVar1);
  }
  (**(code **)(*piVar1 + 4))();
LAB_105c834e:

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(piVar2);

 } catch (...) { }
}


// Reference entry 105c83b0; body size 186 bytes.
#line 1 "ENTRY_105c83b0"

int * __thiscall Recovered_Bulk::FUN_105c83b0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_10cb7ef0(&local_14,0,DAT_12126b84 ));
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
  if (*(char *)(param_1 + 0x10) != '\0') {
    (**(code **)(*piVar1 + 0xfc))();
  }
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


// Reference entry 105c8650; body size 218 bytes.
#line 1 "ENTRY_105c8650"

undefined4 * __thiscall Recovered_Bulk::FUN_105c8650(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0xd0));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10e83400(*(undefined1 *)(param_1 + 0x14)));
  }
  piVar4 = (int *)((int *)0x0);

  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
    (**(code **)(*piVar4 + 4))();
  }

  if ((piVar3 == (int *)0x0) || (*(char *)(param_1 + 0x10) == '\0')) {
    *param_2 = (undefined4)(piVar3);
    if (piVar3 == (int *)0x0) goto LAB_105c8702;
  }
  else {
    (**(code **)(*piVar3 + 0xfc))();
    *param_2 = (undefined4)(piVar3);
  }
  (**(code **)(*piVar3 + 4))();
LAB_105c8702:

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105c8760; body size 186 bytes.
#line 1 "ENTRY_105c8760"

int * __thiscall Recovered_Bulk::FUN_105c8760(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_10cb7fe0(&local_14,0,DAT_12126b84 ));
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
  if (*(char *)(param_1 + 0x10) != '\0') {
    (**(code **)(*piVar1 + 0xfc))();
  }
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


// Reference entry 105c8850; body size 186 bytes.
#line 1 "ENTRY_105c8850"

int * __thiscall Recovered_Bulk::FUN_105c8850(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_10cb80d0(&local_14,0,DAT_12126b84 ));
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
  if (*(char *)(param_1 + 0x10) != '\0') {
    (**(code **)(*piVar1 + 0xfc))();
  }
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


// Reference entry 105c8d20; body size 280 bytes.
#line 1 "ENTRY_105c8d20"

undefined4 * __thiscall Recovered_Bulk::FUN_105c8d20(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  uVar1 = (uint)(DAT_12126b84);

  piVar5 = (int *)((int *)0x0);
  piVar4 = (int *)((int *)0x0);

  pvVar2 = (void *)(operator_new(0xd8));
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (pvVar2 == (void *)0x0) {
    local_14 = (int *)((int *)0x0);
  }
  else {
    local_14 = (int *)((int *)thunk_FUN_10e12a10(0));
  }
  piVar3 = (int *)(*(int **)(param_1 + 0x14));
  local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
  if ((int *)(local_14) != piVar3) {
    piVar3 = (int *)(*(int **)(param_1 + 0x18));
    if (piVar3 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      (**(code **)(*piVar3 + 8))(uVar1);
    }
    *(int **)(param_1 + 0x14) = local_14;
    if (local_14 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      goto LAB_105c8de2;
    }
    piVar3 = (int *)((int *)(**(code **)(*local_14 + 0xc))());
    *(int **)(param_1 + 0x18) = piVar3;
    (**(code **)(*piVar3 + 4))();
    piVar3 = (int *)(*(int **)(param_1 + 0x14));
  }
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    (**(code **)(*piVar4 + 4))();
    piVar5 = (int *)(piVar3);
  }
LAB_105c8de2:
  if ((*(int **)(param_1 + 0x14) != (int *)0x0) && (*(char *)(param_1 + 0x10) != '\0')) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0xfc))();
  }
  *param_2 = (undefined4)(piVar5);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105c9050; body size 213 bytes.
#line 1 "ENTRY_105c9050"

undefined4 * __thiscall Recovered_Bulk::FUN_105c9050(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0xd8));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10e26cb0(0));
  }
  piVar4 = (int *)((int *)0x0);

  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
    (**(code **)(*piVar4 + 4))();
  }

  if ((piVar3 == (int *)0x0) || (*(char *)(param_1 + 0x10) == '\0')) {
    *param_2 = (undefined4)(piVar3);
    if (piVar3 == (int *)0x0) goto LAB_105c90fd;
  }
  else {
    (**(code **)(*piVar3 + 0xfc))();
    *param_2 = (undefined4)(piVar3);
  }
  (**(code **)(*piVar3 + 4))();
LAB_105c90fd:

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105c9690; body size 216 bytes.
#line 1 "ENTRY_105c9690"

undefined4 * __thiscall Recovered_Bulk::FUN_105c9690(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  uVar1 = (uint)(DAT_12126b84);

  piVar5 = (int *)((int *)0x0);

  piVar4 = (int *)((int *)0x0);
  if (*(int *)(param_1 + 0x14) == 1) {
    pvVar2 = (void *)(operator_new(0x1b0));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)thunk_FUN_10e5d4a0(*(undefined4 *)(param_1 + 0x1c),
                                         *(undefined4 *)(param_1 + 8)));
    }
    local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
    if (piVar3 != (int *)0x0) {
      piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
      (**(code **)(*piVar5 + 4))();
      piVar4 = (int *)(piVar3);
      if (*(char *)(param_1 + 0x10) != '\0') {
        (**(code **)(*piVar3 + 0xfc))();
      }
    }
  }
  *param_2 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar1);
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105cdd60; body size 114 bytes.
#line 1 "ENTRY_105cdd60"

undefined4 * __thiscall Recovered_Bulk::FUN_105cdd60(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105cde70; body size 126 bytes.
#line 1 "ENTRY_105cde70"

undefined4 * __thiscall Recovered_Bulk::FUN_105cde70(undefined4 param_2,undefined4 param_3,int param_4)
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
  param_1[0xf] = (undefined4)(0);

  if (*(undefined4 **)(param_4 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_4 + 0x24))(param_1 + 6,uVar1));
    param_1[0xf] = (undefined4)(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105cdf70; body size 278 bytes.
#line 1 "ENTRY_105cdf70"

undefined4 * __thiscall Recovered_Bulk::FUN_105cdf70(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[0xd] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCElapsedTimeMeasurement);
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105ce870; body size 127 bytes.
#line 1 "ENTRY_105ce870"

undefined4 * __thiscall Recovered_Bulk::FUN_105ce870(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AudioIn:1","SetAudioInputAttributes",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 105ce910; body size 127 bytes.
#line 1 "ENTRY_105ce910"

undefined4 * __thiscall Recovered_Bulk::FUN_105ce910(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AudioIn:1","SetLineInLevel",uVar3,param_3,
                     param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAISetLineInLevelAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAISetLineInLevelAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAISetLineInLevelAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 105cea50; body size 155 bytes.
#line 1 "ENTRY_105cea50"

undefined4 * __thiscall Recovered_Bulk::FUN_105cea50(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:DeviceProperties:1","GetZoneAttributes",
                     uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneAttributesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneAttributesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneAttributesAIOOp);
  *(undefined1 *)(param_1 + 0x35f4) = 0;
  *(undefined1 *)(param_1 + 0x36f4) = 0;
  *(undefined1 *)(param_1 + 0x37f4) = 0;
  *(undefined1 *)(param_1 + 0x37f8) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 105ceb20; body size 127 bytes.
#line 1 "ENTRY_105ceb20"

undefined4 * __thiscall Recovered_Bulk::FUN_105ceb20(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:DeviceProperties:1","SetAutoplayRoomUUID",
                     uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayRoomUUIDAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayRoomUUIDAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayRoomUUIDAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 105cee40; body size 127 bytes.
#line 1 "ENTRY_105cee40"

undefined4 * __thiscall Recovered_Bulk::FUN_105cee40(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:RenderingControl:1","SetOutputFixed",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetOutputFixedAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetOutputFixedAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetOutputFixedAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 105cfb90; body size 189 bytes.
#line 1 "ENTRY_105cfb90"

undefined4 * __thiscall Recovered_Bulk::FUN_105cfb90(undefined4 param_2,undefined4 param_3,int *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegate);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConfirmHideOfflineDevice);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCConfirmHideOfflineDevice);

  param_1[7] = (undefined4)(param_3);
  param_1[8] = (undefined4)(param_4);
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 4))(uVar1);
  }

  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105cfdf0; body size 217 bytes.
#line 1 "ENTRY_105cfdf0"

undefined4 * __thiscall Recovered_Bulk::FUN_105cfdf0(undefined4 param_2,undefined4 param_3,int *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegate);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHideOfflineDeviceSignIn);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCHideOfflineDeviceSignIn);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCHideOfflineDeviceSignIn);

  param_1[10] = (undefined4)(param_3);
  param_1[0xb] = (undefined4)(param_4);
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 4))(uVar1);
  }

  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105cff00; body size 157 bytes.
#line 1 "ENTRY_105cff00"

undefined4 * __thiscall Recovered_Bulk::FUN_105cff00(undefined4 param_2,undefined4 param_3,int *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHideOfflineDeviceSignInDescriptor);

  param_1[3] = (undefined4)(param_3);
  param_1[4] = (undefined4)(param_4);
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 4))(uVar1);
  }

  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105d0af0; body size 189 bytes.
#line 1 "ENTRY_105d0af0"

undefined4 * __thiscall Recovered_Bulk::FUN_105d0af0(undefined4 param_2,undefined4 param_3,int *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegate);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOfflineDeviceHiddenConfirmation);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOfflineDeviceHiddenConfirmation);

  param_1[7] = (undefined4)(param_3);
  param_1[8] = (undefined4)(param_4);
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 4))(uVar1);
  }

  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105d0be0; body size 292 bytes.
#line 1 "ENTRY_105d0be0"

undefined4 * __thiscall Recovered_Bulk::FUN_105d0be0(int param_2)
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
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[0xd] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCElapsedTimeMeasurement);
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRenderingControlSetRoomCalibrationStatus);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpRenderingControlSetRoomCalibrationStatus);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105d2560; body size 88 bytes.
#line 1 "ENTRY_105d2560"

void __fastcall FUN_105d2560(int *param_1)

{
 try {
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  puVar1 = (undefined4 *)((undefined4 *)*param_1);

  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1,DAT_12126b84 ));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 105d2ad0; body size 68 bytes.
#line 1 "ENTRY_105d2ad0"

void __fastcall FUN_105d2ad0(int *param_1)

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


// Reference entry 105d2b30; body size 68 bytes.
#line 1 "ENTRY_105d2b30"

void __fastcall FUN_105d2b30(int *param_1)

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


// Reference entry 105d2b90; body size 68 bytes.
#line 1 "ENTRY_105d2b90"

void __fastcall FUN_105d2b90(int *param_1)

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


// Reference entry 105d2c90; body size 96 bytes.
#line 1 "ENTRY_105d2c90"

void __fastcall FUN_105d2c90(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_105ca4f0(*param_1,param_1[1],param_1);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 105d4df0; body size 82 bytes.
#line 1 "ENTRY_105d4df0"

undefined4 * __thiscall Recovered_Bulk::FUN_105d4df0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  thunk_FUN_105ca4f0(*puVar1,param_1[3],puVar1);
  param_1[3] = (undefined4)(*puVar1);
  thunk_FUN_105d2c90();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d6d20; body size 104 bytes.
#line 1 "ENTRY_105d6d20"

void __thiscall Recovered_Bulk::FUN_105d6d20(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_105ca4f0(*param_1,param_1[1],param_1);
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
  param_1[1] = (int)(param_2 + param_3 * 8);
  param_1[2] = (int)(param_2 + param_4 * 8);
  return;
}


// Reference entry 105d6db0; body size 132 bytes.
#line 1 "ENTRY_105d6db0"

void __thiscall Recovered_Bulk::FUN_105d6db0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_104cb6d0(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0x14) * 0x14);
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
  param_1[1] = (int)(param_2 + param_3 * 0x14);
  param_1[2] = (int)(param_2 + param_4 * 0x14);
  return;
}


// Reference entry 105d6fa0; body size 96 bytes.
#line 1 "ENTRY_105d6fa0"

void __fastcall FUN_105d6fa0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_105ca4f0(*param_1,param_1[1],param_1);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 105d7580; body size 76 bytes.
#line 1 "ENTRY_105d7580"

void __fastcall FUN_105d7580(int param_1)

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


// Reference entry 105d75e0; body size 149 bytes.
#line 1 "ENTRY_105d75e0"

void __thiscall Recovered_Bulk::FUN_105d75e0(int *param_2,undefined4 param_3)
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


// Reference entry 105d8bf0; body size 385 bytes.
#line 1 "ENTRY_105d8bf0"

void __fastcall FUN_105d8bf0(int param_1)

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
  if ((*(int *)(param_1 + 0x4c) != 0) && (*(int **)(param_1 + 0x48) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x48));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if ((*(int *)(param_1 + 0x58) != 0) && (*(int **)(param_1 + 0x54) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x54) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x54));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if ((*(int *)(param_1 + 100) != 0) && (*(int **)(param_1 + 0x60) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x60) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x60));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if ((*(int *)(param_1 + 0x34) != 0) && (*(int **)(param_1 + 0x30) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x30));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if ((*(int *)(param_1 + 0x40) != 0) && (*(int **)(param_1 + 0x3c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x3c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}


// Reference entry 105d8de0; body size 133 bytes.
#line 1 "ENTRY_105d8de0"

void __fastcall FUN_105d8de0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x44) != 0) && (*(int **)(param_1 + 0x40) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x40));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if ((*(int *)(param_1 + 0x50) != 0) && (*(int **)(param_1 + 0x4c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x4c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}


// Reference entry 105dc230; body size 249 bytes.
#line 1 "ENTRY_105dc230"

undefined4 * __thiscall Recovered_Bulk::FUN_105dc230(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  SCLibrary *this_;
  undefined4 *puVar6;
  SCIAction *pSVar7;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  piVar4 = (int *)(operator_new(0xc));
  local_14 = (int *)(piVar4);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
    piVar5 = (int *)((int *)0x0);
  }
  else {
    uVar1 = (undefined1)(*(undefined1 *)(param_1 + 8));
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar4[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCChickenExitAction);
    *(undefined1 *)(piVar4 + 2) = uVar1;
    piVar5 = (int *)((int *)0x0);
    if (piVar4 != (int *)0x0) {
      if (*(code **)(*piVar4 + 0xc) == thunk_FUN_101caf40) {
        (**(code **)(*piVar4 + 4))();
        piVar5 = (int *)(piVar4);
      }
      else {
        piVar5 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar3));
        (**(code **)(*piVar5 + 4))();
      }
    }
  }
  pSVar7 = (SCIAction *)((SCIAction *)&local_14);

  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  puVar6 = (undefined4 *)((undefined4 *)((SCLibrary *)(this_))->createActionContextForAction(pSVar7));
  uVar2 = (undefined4)(*puVar6);
  *puVar6 = (undefined4)(0);
  *param_2 = (undefined4)(uVar2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(piVar4);
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105dc710; body size 277 bytes.
#line 1 "ENTRY_105dc710"

undefined4 * __stdcall FUN_105dc710(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  SCLibrary *this_;
  undefined4 *puVar5;
  SCIAction *pSVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)(operator_new(0x1c));
  local_14 = (int *)(piVar3);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
    piVar4 = (int *)((int *)0x0);
  }
  else {
    *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar3[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar3[2] = (int)((int)(uint)&ghidra_vftable_SCIActionDelegate);
    piVar3[3] = (int)(0);
    piVar3[4] = (int)(0);
    *(undefined1 *)(piVar3 + 5) = 0;
    *piVar3 = (int)((int)(uint)&ghidra_vftable_SCFactoryResetAction);
    piVar3[2] = (int)((int)(uint)&ghidra_vftable_SCFactoryResetAction);
    *(undefined1 *)(piVar3 + 6) = 0;
    piVar4 = (int *)((int *)0x0);
    if (piVar3 != (int *)0x0) {
      if (*(code **)(*piVar3 + 0xc) == thunk_FUN_102f8990) {
        (**(code **)(*piVar3 + 4))();
        piVar4 = (int *)(piVar3);
      }
      else {
        piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar2));
        (**(code **)(*piVar4 + 4))();
      }
    }
  }
  pSVar6 = (SCIAction *)((SCIAction *)&local_14);

  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  puVar5 = (undefined4 *)((undefined4 *)((SCLibrary *)(this_))->createActionContextForAction(pSVar6));
  uVar1 = (undefined4)(*puVar5);
  *puVar5 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(piVar3);
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105dc870; body size 277 bytes.
#line 1 "ENTRY_105dc870"

undefined4 * __stdcall FUN_105dc870(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  SCLibrary *this_;
  undefined4 *puVar5;
  SCIAction *pSVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)(operator_new(0x1c));
  local_14 = (int *)(piVar3);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
    piVar4 = (int *)((int *)0x0);
  }
  else {
    *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar3[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar3[2] = (int)((int)(uint)&ghidra_vftable_SCIActionDelegate);
    piVar3[3] = (int)(0);
    piVar3[4] = (int)(0);
    *(undefined1 *)(piVar3 + 5) = 0;
    *piVar3 = (int)((int)(uint)&ghidra_vftable_SCForgetHouseholdAction);
    piVar3[2] = (int)((int)(uint)&ghidra_vftable_SCForgetHouseholdAction);
    *(undefined1 *)(piVar3 + 6) = 0;
    piVar4 = (int *)((int *)0x0);
    if (piVar3 != (int *)0x0) {
      if (*(code **)(*piVar3 + 0xc) == thunk_FUN_102f8990) {
        (**(code **)(*piVar3 + 4))();
        piVar4 = (int *)(piVar3);
      }
      else {
        piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar2));
        (**(code **)(*piVar4 + 4))();
      }
    }
  }
  pSVar6 = (SCIAction *)((SCIAction *)&local_14);

  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  puVar5 = (undefined4 *)((undefined4 *)((SCLibrary *)(this_))->createActionContextForAction(pSVar6));
  uVar1 = (undefined4)(*puVar5);
  *puVar5 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(piVar3);
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105dc9d0; body size 358 bytes.
#line 1 "ENTRY_105dc9d0"

undefined4 * __thiscall Recovered_Bulk::FUN_105dc9d0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  SCLibrary *pSVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  SCIAction *pSVar7;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  pSVar4 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  if (pSVar4 != (SCLibrary *)0x0) {
    puVar5 = (undefined4 *)(operator_new(0x30));

    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      piVar1 = (int *)(*(int **)(param_1 + 0x10));
      local_14 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar3);
      }
      uVar2 = (undefined4)(*(undefined4 *)(param_1 + 8));
      *puVar5 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
      puVar5[1] = (undefined4)(0);
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      puVar5[2] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegate);
      puVar5[3] = (undefined4)(0);
      puVar5[4] = (undefined4)(0);
      *(undefined1 *)(puVar5 + 5) = 0;
      puVar5[6] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
      puVar5[7] = (undefined4)(0);
      puVar5[8] = (undefined4)(0);
      puVar5[9] = (undefined4)(uVar2);
      *puVar5 = (undefined4)((uint)&ghidra_vftable_SCHideOfflineDeviceSignIn);
      puVar5[2] = (undefined4)((uint)&ghidra_vftable_SCHideOfflineDeviceSignIn);
      puVar5[6] = (undefined4)((uint)&ghidra_vftable_SCHideOfflineDeviceSignIn);
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      puVar5[10] = (undefined4)(local_14);
      puVar5[0xb] = (undefined4)(piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
    pSVar7 = (SCIAction *)((SCIAction *)&local_18);

    pSVar4 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    puVar6 = (undefined4 *)((undefined4 *)((SCLibrary *)(pSVar4))->createActionContextForAction(pSVar7));
    *param_2 = (undefined4)(0);
    uVar2 = (undefined4)(*puVar6);
    *puVar6 = (undefined4)(0);
    *param_2 = (undefined4)(uVar2);

    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))(puVar5);
    }

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105dcb90; body size 352 bytes.
#line 1 "ENTRY_105dcb90"

undefined4 * __thiscall Recovered_Bulk::FUN_105dcb90(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *local_20;
  SCLibrary *local_1c;
  undefined4 local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  local_1c = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  if (local_1c != (SCLibrary *)0x0) {
    puVar4 = (undefined4 *)(operator_new(0x2c));

    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      local_11 = (undefined1)(*(undefined1 *)(param_1 + 0x14));
      piVar1 = (int *)(*(int **)(param_1 + 0x10));
      local_18 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar3);
      }
      uVar2 = (undefined4)(*(undefined4 *)(param_1 + 8));
      *puVar4 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
      puVar4[1] = (undefined4)(0);
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      puVar4[2] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegate);
      puVar4[3] = (undefined4)(0);
      puVar4[4] = (undefined4)(0);
      *(undefined1 *)(puVar4 + 5) = 0;
      puVar4[6] = (undefined4)(uVar2);
      *puVar4 = (undefined4)((uint)&ghidra_vftable_SCOfflineTroubleshootAction);
      puVar4[2] = (undefined4)((uint)&ghidra_vftable_SCOfflineTroubleshootAction);
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      puVar4[7] = (undefined4)(local_18);
      puVar4[8] = (undefined4)(piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *(undefined1 *)(puVar4 + 9) = local_11;
      *(undefined1 *)((int)puVar4 + 0x25) = 0;
      puVar4[10] = (undefined4)(1);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
    }

    puVar5 = (undefined4 *)((undefined4 *)((SCLibrary *)(local_1c))->createActionContextForAction((SCIAction *)&local_20));
    *param_2 = (undefined4)(0);
    uVar2 = (undefined4)(*puVar5);
    *puVar5 = (undefined4)(0);
    *param_2 = (undefined4)(uVar2);

    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))(puVar4);
    }

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105dd100; body size 241 bytes.
#line 1 "ENTRY_105dd100"

undefined4 * __stdcall FUN_105dd100(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  SCLibrary *this_;
  undefined4 *puVar5;
  SCIAction *pSVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)(operator_new(8));
  local_14 = (int *)(piVar3);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
    piVar4 = (int *)((int *)0x0);
  }
  else {
    *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar3[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar3 = (int)((int)(uint)&ghidra_vftable_SCResetDismissedServicesAction);
    piVar4 = (int *)((int *)0x0);
    if (piVar3 != (int *)0x0) {
      if (*(code **)(*piVar3 + 0xc) == thunk_FUN_101caf40) {
        (**(code **)(*piVar3 + 4))();
        piVar4 = (int *)(piVar3);
      }
      else {
        piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar2));
        (**(code **)(*piVar4 + 4))();
      }
    }
  }
  pSVar6 = (SCIAction *)((SCIAction *)&local_14);

  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  puVar5 = (undefined4 *)((undefined4 *)((SCLibrary *)(this_))->createActionContextForAction(pSVar6));
  uVar1 = (undefined4)(*puVar5);
  *puVar5 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(piVar3);
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105dd6d0; body size 250 bytes.
#line 1 "ENTRY_105dd6d0"

undefined4 * __thiscall Recovered_Bulk::FUN_105dd6d0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x20));

  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    pvVar3 = (void *)(operator_new(0x4c));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_105cef80(param_1 + 8,*(undefined4 *)(param_1 + 0xc)));
    }
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCIActionDelegate);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar2[3] = (int)(0);
    piVar2[4] = (int)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    piVar2[5] = (int)((int)piVar4);
    piVar2[6] = (int)(0);
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar1));
      piVar2[6] = (int)((int)piVar4);
      (**(code **)(*piVar4 + 4))();
    }
    *(undefined1 *)(piVar2 + 7) = 0;
  }

  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105dd810; body size 260 bytes.
#line 1 "ENTRY_105dd810"

undefined4 * __thiscall Recovered_Bulk::FUN_105dd810(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x20));

  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    pvVar3 = (void *)(operator_new(0x54));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_105cf380(param_1 + 8,*(undefined4 *)(param_1 + 0xc),param_1 + 0x14,
                                         param_1 + 0x10));
    }
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCIActionDelegate);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar2[3] = (int)(0);
    piVar2[4] = (int)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    piVar2[5] = (int)((int)piVar4);
    piVar2[6] = (int)(0);
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar1));
      piVar2[6] = (int)((int)piVar4);
      (**(code **)(*piVar4 + 4))();
    }
    *(undefined1 *)(piVar2 + 7) = 0;
  }

  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105dd960; body size 256 bytes.
#line 1 "ENTRY_105dd960"

undefined4 * __thiscall Recovered_Bulk::FUN_105dd960(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x20));

  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    pvVar3 = (void *)(operator_new(0x50));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_105d0180(param_1 + 8,*(undefined4 *)(param_1 + 0xc),param_1 + 0x10));
    }
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCIActionDelegate);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar2[3] = (int)(0);
    piVar2[4] = (int)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    piVar2[5] = (int)((int)piVar4);
    piVar2[6] = (int)(0);
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar1));
      piVar2[6] = (int)((int)piVar4);
      (**(code **)(*piVar4 + 4))();
    }
    *(undefined1 *)(piVar2 + 7) = 0;
  }

  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105ddaa0; body size 256 bytes.
#line 1 "ENTRY_105ddaa0"

undefined4 * __thiscall Recovered_Bulk::FUN_105ddaa0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x20));

  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    pvVar3 = (void *)(operator_new(0x50));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_105d0590(param_1 + 8,*(undefined4 *)(param_1 + 0xc),param_1 + 0x10));
    }
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCIActionDelegate);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar2[3] = (int)(0);
    piVar2[4] = (int)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    piVar2[5] = (int)((int)piVar4);
    piVar2[6] = (int)(0);
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar1));
      piVar2[6] = (int)((int)piVar4);
      (**(code **)(*piVar4 + 4))();
    }
    *(undefined1 *)(piVar2 + 7) = 0;
  }

  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105ddbe0; body size 250 bytes.
#line 1 "ENTRY_105ddbe0"

undefined4 * __thiscall Recovered_Bulk::FUN_105ddbe0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x20));

  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    pvVar3 = (void *)(operator_new(0x58));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_105d1280(param_1 + 8,*(undefined4 *)(param_1 + 0xc)));
    }
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCIActionDelegate);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar2[3] = (int)(0);
    piVar2[4] = (int)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    piVar2[5] = (int)((int)piVar4);
    piVar2[6] = (int)(0);
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar1));
      piVar2[6] = (int)((int)piVar4);
      (**(code **)(*piVar4 + 4))();
    }
    *(undefined1 *)(piVar2 + 7) = 0;
  }

  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105dde90; body size 250 bytes.
#line 1 "ENTRY_105dde90"

undefined4 * __thiscall Recovered_Bulk::FUN_105dde90(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x20));

  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    pvVar3 = (void *)(operator_new(0x50));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_105d2090(param_1 + 8,*(undefined4 *)(param_1 + 0xc)));
    }
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCIActionDelegate);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar2[3] = (int)(0);
    piVar2[4] = (int)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    piVar2[5] = (int)((int)piVar4);
    piVar2[6] = (int)(0);
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar1));
      piVar2[6] = (int)((int)piVar4);
      (**(code **)(*piVar4 + 4))();
    }
    *(undefined1 *)(piVar2 + 7) = 0;
  }

  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105dfad0; body size 562 bytes.
#line 1 "ENTRY_105dfad0"

undefined4 * __thiscall Recovered_Bulk::FUN_105dfad0(undefined4 *param_2,byte param_3)
{
  int param_1 = (int )this;
 try {
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  SCLibrary *this_;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  void *pvVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int **ppiVar11;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  ppiVar11 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar8 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  if (piVar8 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar8 + 0xc))(ppiVar11,uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  piVar5 = (int *)((int *)(**(code **)(*piVar8 + 0x1b8))(&local_1c,(undefined4 *)(param_1 + 0x30)));
  piVar8 = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *piVar5 = (int)(0);
  local_18 = (int *)(piVar8);
  if (piVar8 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*piVar8 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  local_14 = (int *)(piVar5);
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  uVar2 = (undefined1)((undefined1)local_8);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (piVar8 == (int *)0x0) {
    *(unsigned char *)((char *)&local_8 + 0) = uVar2;
    pvVar7 = (void *)(operator_new(0x48));
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    if (pvVar7 == (void *)0x0) {
      piVar8 = (int *)((int *)0x0);
    }
    else {
      pvVar7 = (void *)(operator_new(0x6c));
      *(unsigned char *)((char *)&local_8 + 0) = 0x10;
      if (pvVar7 == (void *)0x0) {
        *(unsigned char *)((char *)&local_8 + 0) = 0xf;
        piVar8 = (int *)((int *)thunk_FUN_101b94f0(0));
      }
      else {
        uVar6 = (undefined4)(thunk_FUN_111c06e0(0));
        *(unsigned char *)((char *)&local_8 + 0) = 0xf;
        piVar8 = (int *)((int *)thunk_FUN_101b94f0(uVar6));
      }
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    *param_2 = (undefined4)(piVar8);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x11)));
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();
    }

  }
  else {
    uVar6 = (undefined4)(thunk_FUN_1031d470(&local_24,param_3 ^ 1));
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    thunk_FUN_102caa30(uVar6);
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))();
    }
    puVar10 = (undefined1 *)(&DAT_118947c4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x30));
    puVar9 = (undefined1 *)(&DAT_1186d2ee);
    if (puVar1 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)(puVar1);
    }
    if (param_3 == 0) {
      puVar10 = (undefined1 *)(&DAT_118947c0);
    }
    thunk_FUN_112af4e0("SettingsActions",2,"Setting Button Lock to %s on %s",puVar10,puVar9);
    thunk_FUN_10309e90(&DAT_11884fe8,"toggleAction","actionName","ButtonLock","value",puVar10,0);
    *param_2 = (undefined4)(local_20);
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 4))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();
    }

  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105e0450; body size 168 bytes.
#line 1 "ENTRY_105e0450"

undefined4 * FUN_105e0450(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x48));

  if (pvVar2 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    pvVar2 = (void *)(operator_new(0x6c));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (pvVar2 == (void *)0x0) {
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      piVar4 = (int *)((int *)thunk_FUN_101b94f0(0));
    }
    else {
      uVar3 = (undefined4)(thunk_FUN_111c06e0(0));
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      piVar4 = (int *)((int *)thunk_FUN_101b94f0(uVar3));
    }
  }

  *param_1 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105e0530; body size 861 bytes.
#line 1 "ENTRY_105e0530"

undefined4 * __thiscall Recovered_Bulk::FUN_105e0530(undefined4 *param_2,byte param_3)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 *puVar6;
  void *pvVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)(thunk_FUN_110828b0(DAT_12126b84 ));
  puVar8 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x30) != (undefined1 *)0x0) {
    puVar8 = (undefined1 *)(*(undefined1 **)(param_1 + 0x30));
  }
  iVar1 = (int)((**(code **)(*(int *)(iVar1 + 0x1c) + 4))(puVar8,1));
  if (iVar1 == 0) {
    pvVar7 = (void *)(operator_new(0x48));

    if (pvVar7 == (void *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      pvVar7 = (void *)(operator_new(0x6c));
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      if (pvVar7 == (void *)0x0) {
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
        piVar5 = (int *)((int *)thunk_FUN_101b94f0(0));
      }
      else {
        uVar3 = (undefined4)(thunk_FUN_111c06e0(0));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
        piVar5 = (int *)((int *)thunk_FUN_101b94f0(uVar3));
      }
    }

    *param_2 = (undefined4)(piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }

    return (undefined4 *)(param_2);
  }
  iVar1 = (int)(thunk_FUN_110cdcd0());
  iVar1 = (int)(*(int *)(iVar1 + 0x2c));
  puVar2 = (undefined4 *)(operator_new(0xd7d0));

  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    uVar3 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + iVar1 + 4) + 0x48))());
    uVar13 = (undefined4)(0);
    uVar12 = (undefined4)(0);
    uVar11 = (undefined4)(2000);
    uVar10 = (undefined4)(2000);
    uVar4 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + iVar1 + 4) + 0x50))
                      (2000,2000,0,0));
    thunk_FUN_111c0760(uVar3,"urn:schemas-upnp-org:service:RenderingControl:1",
                       "SetRoomCalibrationStatus",uVar4,uVar10,uVar11,uVar12,uVar13);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetRoomCalibrationStatusAIOOp);
    puVar2[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetRoomCalibrationStatusAIOOp);
    puVar2[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetRoomCalibrationStatusAIOOp);
  }

  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(0);
  thunk_FUN_1124ffa0("RoomCalibrationEnabled",0);
  thunk_FUN_1124f3c0(param_3 ^ 1);
  thunk_FUN_10e9cfd0();
  piVar5 = (int *)(operator_new(0x48));
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    *piVar5 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar5[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar9 = (int *)(piVar5 + 2);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    thunk_FUN_11240650();
    *piVar9 = (int)((int)(uint)&ghidra_vftable_RControlAIOOpCB);
    *piVar5 = (int)((int)(uint)&ghidra_vftable_SCOpImpl);
    *piVar9 = (int)((int)(uint)&ghidra_vftable_SCOpImpl);
    piVar5[3] = (int)(0);
    piVar5[4] = (int)(0);
    piVar5[5] = (int)((int)(uint)&ghidra_vftable_RControlAIOOpRefBase);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    piVar5[6] = (int)((int)puVar2);
    if (puVar2 != (undefined4 *)0x0) {
      thunk_FUN_1123fce0(puVar2 + 1);
    }
    piVar5[7] = (int)(0);
    piVar5[5] = (int)((int)(uint)&ghidra_vftable_RControlAIOOpRef);
    piVar5[8] = (int)(0);
    *(undefined2 *)(piVar5 + 9) = 1000;
    piVar5[10] = (int)(0);
    piVar5[0xb] = (int)(0);
    piVar5[0xc] = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar5[0xd] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar5[0xc] = (int)((int)(uint)&ghidra_vftable_SCElapsedTimeMeasurement);
    piVar5[0xe] = (int)(0);
    piVar5[0xf] = (int)(0);
    piVar5[0xf] = (int)(0);
    piVar5[0x10] = (int)(0);
    piVar5[0x11] = (int)(0);
    *piVar9 = (int)((int)(uint)&ghidra_vftable_SCOpRenderingControlSetRoomCalibrationStatus);
    *piVar5 = (int)((int)(uint)&ghidra_vftable_SCOpRenderingControlSetRoomCalibrationStatus);
  }
  piVar9 = (int *)((int *)0x0);

  if (piVar5 != (int *)0x0) {
    piVar9 = (int *)(piVar5);
    if (*(code **)(*piVar5 + 0xc) != thunk_FUN_105de4b0) {
      piVar9 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
    }
    (**(code **)(*piVar9 + 4))();
  }

  puVar8 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x30) != (undefined1 *)0x0) {
    puVar8 = (undefined1 *)(*(undefined1 **)(param_1 + 0x30));
  }
  puVar6 = (undefined1 *)(&DAT_118947c4);
  if (param_3 == 0) {
    puVar6 = (undefined1 *)(&DAT_118947c0);
  }
  thunk_FUN_112af4e0("SettingsActions",1,"Setting Sonar Calibration to %s on %s",puVar6,puVar8);
  *param_2 = (undefined4)(piVar5);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }

  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105e0970; body size 168 bytes.
#line 1 "ENTRY_105e0970"

undefined4 * FUN_105e0970(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x48));

  if (pvVar2 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    pvVar2 = (void *)(operator_new(0x6c));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (pvVar2 == (void *)0x0) {
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      piVar4 = (int *)((int *)thunk_FUN_101b94f0(0));
    }
    else {
      uVar3 = (undefined4)(thunk_FUN_111c06e0(0));
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      piVar4 = (int *)((int *)thunk_FUN_101b94f0(uVar3));
    }
  }

  *param_1 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105e1800; body size 529 bytes.
#line 1 "ENTRY_105e1800"

undefined4 * __thiscall Recovered_Bulk::FUN_105e1800(undefined4 *param_2,byte param_3)
{
  int param_1 = (int )this;
 try {
  undefined1 uVar1;
  uint uVar2;
  SCLibrary *this_;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  void *pvVar7;
  int *piVar8;
  undefined1 *puVar9;
  int **ppiVar10;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ppiVar10 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar3 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar8 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar8 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar8 + 0xc))(ppiVar10,uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  piVar4 = (int *)((int *)(**(code **)(*piVar8 + 0x1b8))(&local_1c,(undefined4 *)(param_1 + 0x30)));
  piVar8 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *piVar4 = (int)(0);
  local_18 = (int *)(piVar8);
  if (piVar8 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar8 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  local_14 = (int *)(piVar4);
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  uVar1 = (undefined1)((undefined1)local_8);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (piVar8 == (int *)0x0) {
    *(unsigned char *)((char *)&local_8 + 0) = uVar1;
    pvVar7 = (void *)(operator_new(0x48));
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    if (pvVar7 == (void *)0x0) {
      piVar8 = (int *)((int *)0x0);
    }
    else {
      pvVar7 = (void *)(operator_new(0x6c));
      *(unsigned char *)((char *)&local_8 + 0) = 0x10;
      if (pvVar7 == (void *)0x0) {
        *(unsigned char *)((char *)&local_8 + 0) = 0xf;
        piVar8 = (int *)((int *)thunk_FUN_101b94f0(0));
      }
      else {
        uVar5 = (undefined4)(thunk_FUN_111c06e0(0));
        *(unsigned char *)((char *)&local_8 + 0) = 0xf;
        piVar8 = (int *)((int *)thunk_FUN_101b94f0(uVar5));
      }
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    *param_2 = (undefined4)(piVar8);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x11)));
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }

  }
  else {
    uVar5 = (undefined4)(thunk_FUN_1031d730(&local_24,param_3 ^ 1));
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    thunk_FUN_102caa30(uVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
    puVar6 = (undefined1 *)(*(undefined1 **)(param_1 + 0x30));
    puVar9 = (undefined1 *)(&DAT_1186d2ee);
    if (puVar6 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)(puVar6);
    }
    puVar6 = (undefined1 *)(&DAT_118947c4);
    if (param_3 == 0) {
      puVar6 = (undefined1 *)(&DAT_118947c0);
    }
    thunk_FUN_112af4e0("SettingsActions",2,"Setting White LED to %s on %s",puVar6,puVar9);
    *param_2 = (undefined4)(local_20);
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 4))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }

  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105e2b70; body size 1536 bytes.
#line 1 "ENTRY_105e2b70"

undefined4 __thiscall Recovered_Bulk::FUN_105e2b70(int param_2,short *param_3)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar2 = (int)(thunk_FUN_110828b0(DAT_12126b84 ));
  puVar13 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)0x0) {
    puVar13 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c));
  }
  iVar2 = (int)((**(code **)(*(int *)(iVar2 + 0x1c) + 4))(puVar13,1));
  if ((*(int **)(param_1 + 0x24) == (int *)0x0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0xc))(), cVar1 == '\0')) {
    iVar3 = (int)(*(int *)(param_1 + 0x28));
  }
  else {
    iVar3 = (int)((**(code **)(**(int **)(param_1 + 0x24) + 8))());
  }
  if (iVar3 == param_2) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      *(undefined1 *)(param_1 + 0x6c) = 1;
      thunk_FUN_112af4e0("SettingsActions",1,"Error Setting LED to on (UPNP=%d)",*param_3);
    }
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)(operator_new(0xd7d0));

      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)((undefined4 *)0x0);
      }
      else {
        iVar2 = (int)(thunk_FUN_110cb840());
        iVar2 = (int)(*(int *)(iVar2 + 0x2c));
        uVar5 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x48))());
        uVar12 = (undefined4)(0);
        uVar11 = (undefined4)(0);
        uVar10 = (undefined4)(2000);
        uVar9 = (undefined4)(2000);
        uVar6 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x50))
                          (2000,2000,0,0));
        thunk_FUN_111c0760(uVar5,"urn:schemas-upnp-org:service:AVTransport:1","SetPlayMode",uVar6,
                           uVar9,uVar10,uVar11,uVar12);
        *puVar4 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetPlayModeAIOOp);
        puVar4[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetPlayModeAIOOp);
        puVar4[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetPlayModeAIOOp);
      }

      thunk_FUN_1124ffa0("InstanceID",0);
      thunk_FUN_1124f350(0);
      piVar7 = (int *)((int *)thunk_FUN_1124ffa0("NewPlayMode",0));
      (**(code **)(*piVar7 + 0xc))("NORMAL");
      thunk_FUN_102207b0(puVar4,param_1 + 8,*(undefined4 *)(param_1 + 0x68));
    }
  }
  else {
    if ((*(int **)(param_1 + 0x30) == (int *)0x0) ||
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0xc))(), cVar1 == '\0')) {
      iVar3 = (int)(*(int *)(param_1 + 0x34));
    }
    else {
      iVar3 = (int)((**(code **)(**(int **)(param_1 + 0x30) + 8))());
    }
    if (iVar3 == param_2) {
      *(undefined4 *)(param_1 + 0x34) = 0;
      if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
        *(undefined1 *)(param_1 + 0x6c) = 1;
        thunk_FUN_112af4e0("SettingsActions",1,"Error setting Play Mode to Normal (UPNP=%d)",
                           *param_3);
      }
      if (iVar2 != 0) {
        puVar4 = (undefined4 *)(operator_new(0xd7d0));

        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)((undefined4 *)0x0);
        }
        else {
          iVar2 = (int)(thunk_FUN_110ce190());
          iVar2 = (int)(*(int *)(iVar2 + 0x2c));
          uVar5 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x48))());
          uVar12 = (undefined4)(0);
          uVar11 = (undefined4)(0);
          uVar10 = (undefined4)(2000);
          uVar9 = (undefined4)(2000);
          uVar6 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x50))
                            (2000,2000,0,0));
          thunk_FUN_111c0760(uVar5,"urn:schemas-upnp-org:service:SystemProperties:1","SetString",
                             uVar6,uVar9,uVar10,uVar11,uVar12);
          *puVar4 = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetStringAIOOp);
          puVar4[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetStringAIOOp);
          puVar4[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetStringAIOOp);
        }

        piVar7 = (int *)((int *)thunk_FUN_1124ffa0("VariableName",0));
        (**(code **)(*piVar7 + 0xc))("R_AudioInEncodeType");
        piVar7 = (int *)((int *)thunk_FUN_1124ffa0("StringValue",0));
        (**(code **)(*piVar7 + 0xc))("UNCOMPRESSED");
        thunk_FUN_102207b0(puVar4,param_1 + 8,*(undefined4 *)(param_1 + 0x68));
      }
    }
    else {
      if ((*(int **)(param_1 + 0x3c) == (int *)0x0) ||
         (cVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(), cVar1 == '\0')) {
        iVar3 = (int)(*(int *)(param_1 + 0x40));
      }
      else {
        iVar3 = (int)((**(code **)(**(int **)(param_1 + 0x3c) + 8))());
      }
      if (iVar3 == param_2) {
        *(undefined4 *)(param_1 + 0x40) = 0;
        if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
          *(undefined1 *)(param_1 + 0x6c) = 1;
          thunk_FUN_112af4e0("SettingsActions",1,
                             "Error setting line-in Encode to Uncompressed (UPNP=%d)",*param_3);
        }
        if ((*(char *)(param_1 + 0x6d) != '\0') && (iVar2 != 0)) {
          pvVar8 = (void *)(operator_new(0xd7d0));

          if (pvVar8 == (void *)0x0) {
            uVar5 = (undefined4)(0);
          }
          else {
            uVar11 = (undefined4)(0);
            uVar10 = (undefined4)(0);
            uVar9 = (undefined4)(0);
            uVar6 = (undefined4)(2000);
            uVar5 = (undefined4)(2000);
            iVar2 = (int)(thunk_FUN_110cb6d0(2000,2000,0,0,0));
            uVar5 = (undefined4)(thunk_FUN_105ce870(*(undefined4 *)(iVar2 + 0x2c),uVar5,uVar6,uVar9,uVar10,uVar11
                                      ));
          }
          puVar13 = (undefined1 *)(&DAT_1186d2ee);

          uVar6 = (undefined4)(thunk_FUN_1109aba0(0x1f4a,&DAT_11882ff0,&DAT_1186d2ee));
          thunk_FUN_105e71e0(uVar6,puVar13);
          thunk_FUN_102207b0(uVar5,param_1 + 8,*(undefined4 *)(param_1 + 0x68));
          goto LAB_105e3120;
        }
        if ((*(char *)(param_1 + 0x6e) == '\0') || (iVar2 == 0)) goto LAB_105e3120;
        pvVar8 = (void *)(operator_new(0xd7d0));

      }
      else {
        if ((*(int **)(param_1 + 0x48) == (int *)0x0) ||
           (cVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0xc))(), cVar1 == '\0')) {
          iVar3 = (int)(*(int *)(param_1 + 0x4c));
        }
        else {
          iVar3 = (int)((**(code **)(**(int **)(param_1 + 0x48) + 8))());
        }
        if (iVar3 == param_2) {
          *(undefined4 *)(param_1 + 0x4c) = 0;
          if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
            *(undefined1 *)(param_1 + 0x6c) = 1;
            uVar5 = (undefined4)(thunk_FUN_1109aba0(0x1f4a,&DAT_11882ff0,*param_3));
            thunk_FUN_112af4e0("SettingsActions",1,"Error renaming line-in name to \'%s\' (UPNP=%d)"
                               ,uVar5);
          }
          if (iVar2 != 0) {
            pvVar8 = (void *)(operator_new(0xd7d0));

            if (pvVar8 == (void *)0x0) {
              uVar5 = (undefined4)(0);
            }
            else {
              uVar11 = (undefined4)(0);
              uVar10 = (undefined4)(0);
              uVar9 = (undefined4)(0);
              uVar6 = (undefined4)(2000);
              uVar5 = (undefined4)(2000);
              iVar2 = (int)(thunk_FUN_110cb6d0(2000,2000,0,0,0));
              uVar5 = (undefined4)(thunk_FUN_105ce910(*(undefined4 *)(iVar2 + 0x2c),uVar5,uVar6,uVar9,uVar10,
                                         uVar11));
            }

            thunk_FUN_105e7240(1,1);
            thunk_FUN_102207b0(uVar5,param_1 + 8,*(undefined4 *)(param_1 + 0x68));
          }
          goto LAB_105e3120;
        }
        iVar3 = (int)(thunk_FUN_101bc3e0());
        if (iVar3 != param_2) {
          iVar2 = (int)(thunk_FUN_101bc3e0());
          if (iVar2 != param_2) {

            return (undefined4)(0);
          }
          *(undefined4 *)(param_1 + 100) = 0;
          if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
            *(undefined1 *)(param_1 + 0x6c) = 1;
            thunk_FUN_112af4e0("SettingsActions",1,"Error setting Line-Out to Variable (UPNP=%d)",
                               *param_3);
          }
          goto LAB_105e3120;
        }
        *(undefined4 *)(param_1 + 0x58) = 0;
        if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
          *(undefined1 *)(param_1 + 0x6c) = 1;
          thunk_FUN_112af4e0("SettingsActions",1,"Error setting line-in level to \'%d\' (UPNP=%d)",1
                             ,*param_3);
        }
        if ((*(char *)(param_1 + 0x6e) == '\0') || (iVar2 == 0)) goto LAB_105e3120;
        pvVar8 = (void *)(operator_new(0xd7d0));

      }
      if (pvVar8 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar11 = (undefined4)(0);
        uVar10 = (undefined4)(0);
        uVar9 = (undefined4)(0);
        uVar6 = (undefined4)(2000);
        uVar5 = (undefined4)(2000);
        iVar2 = (int)(thunk_FUN_110cdcd0(2000,2000,0,0,0));
        uVar5 = (undefined4)(thunk_FUN_105cee40(*(undefined4 *)(iVar2 + 0x2c),uVar5,uVar6,uVar9,uVar10,uVar11));
      }

      thunk_FUN_105e7540(0,0);
      thunk_FUN_102207b0(uVar5,param_1 + 8,*(undefined4 *)(param_1 + 0x68));
    }
  }
LAB_105e3120:
  if ((((*(int *)(param_1 + 0x28) == 0) && (*(int *)(param_1 + 0x4c) == 0)) &&
      (*(int *)(param_1 + 0x58) == 0)) &&
     (((*(int *)(param_1 + 100) == 0 && (*(int *)(param_1 + 0x34) == 0)) &&
      (*(int *)(param_1 + 0x40) == 0)))) {

    return (undefined4)(1);
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 105e3830; body size 128 bytes.
#line 1 "ENTRY_105e3830"

void __fastcall FUN_105e3830(int param_1)

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


// Reference entry 105e3f90; body size 232 bytes.
#line 1 "ENTRY_105e3f90"

void __thiscall Recovered_Bulk::FUN_105e3f90(undefined4 param_2,undefined4 param_3)
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


// Reference entry 105e7060; body size 99 bytes.
#line 1 "ENTRY_105e7060"

int __thiscall Recovered_Bulk::FUN_105e7060(int param_2)
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


// Reference entry 105e71e0; body size 69 bytes.
#line 1 "ENTRY_105e71e0"

undefined4 __thiscall Recovered_Bulk::FUN_105e71e0(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("DesiredName",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("DesiredIcon",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 105e7240; body size 69 bytes.
#line 1 "ENTRY_105e7240"

undefined4 __thiscall Recovered_Bulk::FUN_105e7240(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124ffa0("DesiredLeftLineInLevel",0);
  thunk_FUN_1124f320(param_2);
  thunk_FUN_1124ffa0("DesiredRightLineInLevel",0);
  thunk_FUN_1124f320(param_3);
  return (undefined4)(param_1);
}


// Reference entry 105e72a0; body size 69 bytes.
#line 1 "ENTRY_105e72a0"

undefined4 __thiscall Recovered_Bulk::FUN_105e72a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("NewPlayMode",0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  return (undefined4)(param_1);
}


// Reference entry 105e7300; body size 147 bytes.
#line 1 "ENTRY_105e7300"

int __fastcall FUN_105e7300(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0x400);
  iVar1 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("CurrentZoneName");
  thunk_FUN_112503c0(iVar1,uVar2);
  uVar2 = (undefined4)(0x400);
  iVar1 = (int)(param_1 + 0xdbd0);
  thunk_FUN_1124ff50("CurrentIcon");
  thunk_FUN_112503c0(iVar1,uVar2);
  uVar2 = (undefined4)(0x10);
  iVar1 = (int)(param_1 + 0xdfd0);
  thunk_FUN_1124ff50("CurrentConfiguration");
  thunk_FUN_112503c0(iVar1,uVar2);
  iVar1 = (int)(thunk_FUN_1124ff50("CurrentTargetRoomName"));
  *(undefined1 *)(iVar1 + 0x30) = 1;
  thunk_FUN_112503c0(param_1 + 0xdfe0,0x41);
  return (int)(param_1);
}


// Reference entry 105e73c0; body size 69 bytes.
#line 1 "ENTRY_105e73c0"

undefined4 __thiscall Recovered_Bulk::FUN_105e73c0(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("RoomUUID",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("Source",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 105e7420; body size 69 bytes.
#line 1 "ENTRY_105e7420"

undefined4 __thiscall Recovered_Bulk::FUN_105e7420(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  thunk_FUN_1124ffa0("Volume",0);
  thunk_FUN_1124f2e0(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("Source",0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  return (undefined4)(param_1);
}


// Reference entry 105e7480; body size 69 bytes.
#line 1 "ENTRY_105e7480"

undefined4 __thiscall Recovered_Bulk::FUN_105e7480(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  thunk_FUN_1124ffa0("UseVolume",0);
  thunk_FUN_1124f3c0(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("Source",0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  return (undefined4)(param_1);
}


// Reference entry 105e7540; body size 69 bytes.
#line 1 "ENTRY_105e7540"

undefined4 __thiscall Recovered_Bulk::FUN_105e7540(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  thunk_FUN_1124ffa0("DesiredFixed",0);
  thunk_FUN_1124f3c0(param_3);
  return (undefined4)(param_1);
}


// Reference entry 105e75a0; body size 69 bytes.
#line 1 "ENTRY_105e75a0"

undefined4 __thiscall Recovered_Bulk::FUN_105e75a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  thunk_FUN_1124ffa0("RoomCalibrationEnabled",0);
  thunk_FUN_1124f3c0(param_3);
  return (undefined4)(param_1);
}


// Reference entry 105e77e0; body size 305 bytes.
#line 1 "ENTRY_105e77e0"

void __thiscall Recovered_Bulk::FUN_105e77e0(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)(thunk_FUN_110828b0(DAT_12126b84 ));
  puVar6 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c));
  }
  iVar1 = (int)((**(code **)(*(int *)(iVar1 + 0x1c) + 4))(puVar6,1));
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(operator_new(0xd7d0));

    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      iVar1 = (int)(thunk_FUN_110cc080());
      iVar1 = (int)(*(int *)(iVar1 + 0x2c));
      uVar3 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 4 + iVar1) + 0x48))());
      uVar10 = (undefined4)(0);
      uVar9 = (undefined4)(0);
      uVar8 = (undefined4)(2000);
      uVar7 = (undefined4)(2000);
      uVar4 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 4 + iVar1) + 0x50))
                        (2000,2000,0,0));
      thunk_FUN_111c0760(uVar3,"urn:schemas-upnp-org:service:DeviceProperties:1","SetLEDState",uVar4
                         ,uVar7,uVar8,uVar9,uVar10);
      *puVar2 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetLEDStateAIOOp);
      puVar2[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetLEDStateAIOOp);
      puVar2[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetLEDStateAIOOp);
    }

    piVar5 = (int *)((int *)thunk_FUN_1124ffa0("DesiredLEDState",0));
    (**(code **)(*piVar5 + 0xc))(&DAT_118947c0);
    thunk_FUN_102207b0(puVar2,-(uint)(param_1 != 0) & param_1 + 8U,param_2);
    *(undefined4 *)(param_1 + 0x68) = param_2;
  }

  return;

 } catch (...) { }
}


// Reference entry 105e7960; body size 350 bytes.
#line 1 "ENTRY_105e7960"

void __thiscall Recovered_Bulk::FUN_105e7960(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)(thunk_FUN_110828b0(DAT_12126b84 ));
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x28) != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(*(undefined1 **)(param_1 + 0x28));
  }
  iVar1 = (int)((**(code **)(*(int *)(iVar1 + 0x1c) + 4))(puVar7,1));
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(operator_new(0xd7d0));

    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      iVar1 = (int)(thunk_FUN_110cb6d0());
      iVar1 = (int)(*(int *)(iVar1 + 0x2c));
      uVar3 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 4 + iVar1) + 0x48))());
      uVar11 = (undefined4)(0);
      uVar10 = (undefined4)(0);
      uVar9 = (undefined4)(2000);
      uVar8 = (undefined4)(2000);
      uVar4 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + iVar1 + 4) + 0x50))
                        (2000,2000,0,0));
      thunk_FUN_111c0760(uVar3,"urn:schemas-upnp-org:service:AudioIn:1","SetAudioInputAttributes",
                         uVar4,uVar8,uVar9,uVar10,uVar11);
      *puVar2 = (undefined4)((uint)&ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp);
      puVar2[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp);
      puVar2[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp);
    }

    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)(*(undefined1 **)(param_1 + 0x20));
    }
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c));
    }
    piVar5 = (int *)((int *)thunk_FUN_1124ffa0("DesiredName",0));
    (**(code **)(*piVar5 + 0xc))(puVar6);
    piVar5 = (int *)((int *)thunk_FUN_1124ffa0("DesiredIcon",0));
    (**(code **)(*piVar5 + 0xc))(puVar7);
    thunk_FUN_102207b0(puVar2,param_1 + 8,param_2);
    *(undefined4 *)(param_1 + 0x6c) = param_2;
  }

  return;

 } catch (...) { }
}


// Reference entry 105e8ce0; body size 110 bytes.
#line 1 "ENTRY_105e8ce0"

undefined4 * __thiscall Recovered_Bulk::FUN_105e8ce0(int param_2)
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
  param_1[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105e8dc0; body size 153 bytes.
#line 1 "ENTRY_105e8dc0"

undefined4 * __thiscall Recovered_Bulk::FUN_105e8dc0(int param_2)
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
  param_1[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
  }
  param_1[0x15] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x4c) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x4c))(param_1 + 0xc));
    param_1[0x15] = (undefined4)(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105e8fa0; body size 153 bytes.
#line 1 "ENTRY_105e8fa0"

undefined4 * __thiscall Recovered_Bulk::FUN_105e8fa0(int param_2)
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
  param_1[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
  }
  param_1[0x15] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x4c) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x4c))(param_1 + 0xc));
    param_1[0x15] = (undefined4)(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105e9100; body size 84 bytes.
#line 1 "ENTRY_105e9100"

undefined4 * __thiscall Recovered_Bulk::FUN_105e9100(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  param_1[3] = (undefined4)(param_4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[9] = (undefined4)(param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 105e9350; body size 203 bytes.
#line 1 "ENTRY_105e9350"

int __thiscall Recovered_Bulk::FUN_105e9350(void)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = (undefined4)(0);
  if (in_stack_00000028 != (int *)0x0) {
    if (in_stack_00000028 == (int *)&stack0x00000004) {
      uVar3 = (undefined4)((**(code **)(*in_stack_00000028 + 4))(puVar2 + 2,uVar1));
      puVar2[0xb] = (undefined4)(uVar3);
      if (in_stack_00000028 == (int *)0x0) goto LAB_105e93eb;
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
    else {
      puVar2[0xb] = (undefined4)(in_stack_00000028);
    }
    in_stack_00000028 = (int *)((int *)0x0);
  }
LAB_105e93eb:
  *(undefined4 **)(param_1 + 0x24) = puVar2;
  if (in_stack_00000028 != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105e94a0; body size 173 bytes.
#line 1 "ENTRY_105e94a0"

int __thiscall Recovered_Bulk::FUN_105e94a0(undefined4 param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  puVar2 = (undefined4 *)(operator_new(0xc));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[1] = (undefined4)(param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  puVar2[2] = (undefined4)(param_3);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(uVar1);
  }
  *(undefined4 **)(param_1 + 0x24) = puVar2;

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105e9ae0; body size 173 bytes.
#line 1 "ENTRY_105e9ae0"

int __thiscall Recovered_Bulk::FUN_105e9ae0(undefined4 param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  puVar2 = (undefined4 *)(operator_new(0xc));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[1] = (undefined4)(param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  puVar2[2] = (undefined4)(param_3);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(uVar1);
  }
  *(undefined4 **)(param_1 + 0x24) = puVar2;

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105e9ea0; body size 173 bytes.
#line 1 "ENTRY_105e9ea0"

int __thiscall Recovered_Bulk::FUN_105e9ea0(undefined4 param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  puVar2 = (undefined4 *)(operator_new(0xc));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[1] = (undefined4)(param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  puVar2[2] = (undefined4)(param_3);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(uVar1);
  }
  *(undefined4 **)(param_1 + 0x24) = puVar2;

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105ea9f0; body size 124 bytes.
#line 1 "ENTRY_105ea9f0"

undefined4 * FUN_105ea9f0(int param_1)

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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 105eab10; body size 112 bytes.
#line 1 "ENTRY_105eab10"

undefined4 * FUN_105eab10(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0xc));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

  puVar3[1] = (undefined4)(*param_1);
  piVar1 = (int *)((int *)param_1[1]);
  puVar3[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 105eaba0; body size 112 bytes.
#line 1 "ENTRY_105eaba0"

undefined4 * FUN_105eaba0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0xc));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

  puVar3[1] = (undefined4)(*param_1);
  piVar1 = (int *)((int *)param_1[1]);
  puVar3[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 105eac30; body size 158 bytes.
#line 1 "ENTRY_105eac30"

undefined4 * FUN_105eac30(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x58));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
  }
  puVar2[0x15] = (undefined4)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x4c))(puVar2 + 0xc));
    puVar2[0x15] = (undefined4)(uVar3);
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 105eafe0; body size 112 bytes.
#line 1 "ENTRY_105eafe0"

undefined4 * FUN_105eafe0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0xc));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

  puVar3[1] = (undefined4)(*param_1);
  piVar1 = (int *)((int *)param_1[1]);
  puVar3[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 105eb070; body size 112 bytes.
#line 1 "ENTRY_105eb070"

undefined4 * FUN_105eb070(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0xc));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

  puVar3[1] = (undefined4)(*param_1);
  piVar1 = (int *)((int *)param_1[1]);
  puVar3[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 105eb100; body size 158 bytes.
#line 1 "ENTRY_105eb100"

undefined4 * FUN_105eb100(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x58));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
  }
  puVar2[0x15] = (undefined4)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x4c))(puVar2 + 0xc));
    puVar2[0x15] = (undefined4)(uVar3);
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 105eb2b0; body size 112 bytes.
#line 1 "ENTRY_105eb2b0"

undefined4 * FUN_105eb2b0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0xc));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

  puVar3[1] = (undefined4)(*param_1);
  piVar1 = (int *)((int *)param_1[1]);
  puVar3[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 105eb340; body size 112 bytes.
#line 1 "ENTRY_105eb340"

undefined4 * FUN_105eb340(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0xc));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

  puVar3[1] = (undefined4)(*param_1);
  piVar1 = (int *)((int *)param_1[1]);
  puVar3[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 105eb590; body size 119 bytes.
#line 1 "ENTRY_105eb590"

void __thiscall Recovered_Bulk::FUN_105eb590(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0xc));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

  puVar3[1] = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  puVar3[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  *(undefined4 **)(param_1 + 0x24) = puVar3;

  return;

 } catch (...) { }
}


// Reference entry 105eb8b0; body size 119 bytes.
#line 1 "ENTRY_105eb8b0"

void __thiscall Recovered_Bulk::FUN_105eb8b0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0xc));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

  puVar3[1] = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  puVar3[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  *(undefined4 **)(param_1 + 0x24) = puVar3;

  return;

 } catch (...) { }
}


// Reference entry 105eba50; body size 119 bytes.
#line 1 "ENTRY_105eba50"

void __thiscall Recovered_Bulk::FUN_105eba50(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0xc));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

  puVar3[1] = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  puVar3[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  *(undefined4 **)(param_1 + 0x24) = puVar3;

  return;

 } catch (...) { }
}


// Reference entry 105ecae0; body size 96 bytes.
#line 1 "ENTRY_105ecae0"

int __thiscall Recovered_Bulk::FUN_105ecae0(int param_2)
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


// Reference entry 105ecb60; body size 96 bytes.
#line 1 "ENTRY_105ecb60"

int __thiscall Recovered_Bulk::FUN_105ecb60(int param_2)
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


// Reference entry 105ecd40; body size 141 bytes.
#line 1 "ENTRY_105ecd40"

int __thiscall Recovered_Bulk::FUN_105ecd40(int param_2)
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
  *(undefined4 *)(param_1 + 0x4c) = 0;

  if (*(undefined4 **)(param_2 + 0x4c) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x4c))(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105ecdf0; body size 142 bytes.
#line 1 "ENTRY_105ecdf0"

int __thiscall Recovered_Bulk::FUN_105ecdf0(int param_2,int param_3)
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
  *(undefined4 *)(param_1 + 0x4c) = 0;

  if (*(undefined4 **)(param_3 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_3 + 0x24))(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105ed100; body size 141 bytes.
#line 1 "ENTRY_105ed100"

int __thiscall Recovered_Bulk::FUN_105ed100(int param_2)
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
  *(undefined4 *)(param_1 + 0x4c) = 0;

  if (*(undefined4 **)(param_2 + 0x4c) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x4c))(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105ed1b0; body size 142 bytes.
#line 1 "ENTRY_105ed1b0"

int __thiscall Recovered_Bulk::FUN_105ed1b0(int param_2,int param_3)
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
  *(undefined4 *)(param_1 + 0x4c) = 0;

  if (*(undefined4 **)(param_3 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_3 + 0x24))(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105ed770; body size 273 bytes.
#line 1 "ENTRY_105ed770"

int __thiscall Recovered_Bulk::FUN_105ed770(int param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 uVar2;
  int local_50 [9];
  int *local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_18 = (int *)(local_50);

  local_14 = (int)(param_2);
  local_28 = (int)(param_2);
  local_24 = (int *)(param_3);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(DAT_12126b84 );
  }
  local_2c = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  piVar1 = (int *)(operator_new(0xc));
  *piVar1 = (int)((int)(uint)&ghidra_vftable_std_Func_impl_no_alloc);
  local_20 = (int *)(piVar1 + 1);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  *local_20 = (int)(local_14);
  piVar1[2] = (int)((int)param_3);
  local_1c = (int *)(piVar1);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  local_2c = (int *)(piVar1);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  local_20 = (int *)((int *)param_1);
  if (local_2c != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)*local_2c)(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 0x10))(local_2c != (int *)(local_50));
    }
  }

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105ed8d0; body size 191 bytes.
#line 1 "ENTRY_105ed8d0"

int __fastcall FUN_105ed8d0(int param_1)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined **local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined ***local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_14 = (int)(param_1);
  thunk_FUN_1027ee20(&stack0x00000004);
  local_3c = (undefined4)(local_18);
  local_40 = (undefined4)(local_1c);
  local_44 = (undefined4)(local_20);
  local_24 = (undefined ***)(&local_48);
  local_48 = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);



  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  local_14 = (int)(param_1);
  uVar2 = (undefined4)(FUN_105f07f0(param_1));
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  if (local_24 != (undefined ***)0x0) {
    (*(code *)(*local_24)[4])(local_24 != &local_48,uVar1);
  }
  thunk_FUN_101a33f0();

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105eda70; body size 138 bytes.
#line 1 "ENTRY_105eda70"

int __thiscall Recovered_Bulk::FUN_105eda70(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined **local_3c;
  undefined4 local_38;
  undefined ***local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_38 = (undefined4)(param_2);
  local_18 = (undefined ***)(&local_3c);
  local_3c = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  *(undefined4 *)(param_1 + 0x24) = 0;

  local_14 = (int)(param_1);
  uVar2 = (undefined4)(FUN_105f08c0(param_1));
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  if (local_18 != (undefined ***)0x0) {
    (*(code *)(*local_18)[4])(local_18 != &local_3c,uVar1);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105edff0; body size 273 bytes.
#line 1 "ENTRY_105edff0"

int __thiscall Recovered_Bulk::FUN_105edff0(int param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 uVar2;
  int local_50 [9];
  int *local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_18 = (int *)(local_50);

  local_14 = (int)(param_2);
  local_28 = (int)(param_2);
  local_24 = (int *)(param_3);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(DAT_12126b84 );
  }
  local_2c = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  piVar1 = (int *)(operator_new(0xc));
  *piVar1 = (int)((int)(uint)&ghidra_vftable_std_Func_impl_no_alloc);
  local_20 = (int *)(piVar1 + 1);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  *local_20 = (int)(local_14);
  piVar1[2] = (int)((int)param_3);
  local_1c = (int *)(piVar1);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  local_2c = (int *)(piVar1);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  local_20 = (int *)((int *)param_1);
  if (local_2c != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)*local_2c)(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 0x10))(local_2c != (int *)(local_50));
    }
  }

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105ee340; body size 126 bytes.
#line 1 "ENTRY_105ee340"

int __thiscall Recovered_Bulk::FUN_105ee340(void)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (in_stack_00000028 != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)*in_stack_00000028)(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    if (in_stack_00000028 != (int *)0x0) {
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105ee3e0; body size 144 bytes.
#line 1 "ENTRY_105ee3e0"

int __thiscall Recovered_Bulk::FUN_105ee3e0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined ***local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_38 = (undefined4)(param_2);
  local_18 = (undefined ***)(&local_3c);
  local_3c = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  local_34 = (undefined4)(param_3);
  *(undefined4 *)(param_1 + 0x24) = 0;

  local_14 = (int)(param_1);
  uVar2 = (undefined4)(FUN_105f0ba0(param_1));
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  if (local_18 != (undefined ***)0x0) {
    (*(code *)(*local_18)[4])(local_18 != &local_3c,uVar1);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105ee4a0; body size 273 bytes.
#line 1 "ENTRY_105ee4a0"

int __thiscall Recovered_Bulk::FUN_105ee4a0(int param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 uVar2;
  int local_50 [9];
  int *local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_18 = (int *)(local_50);

  local_14 = (int)(param_2);
  local_28 = (int)(param_2);
  local_24 = (int *)(param_3);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(DAT_12126b84 );
  }
  local_2c = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  piVar1 = (int *)(operator_new(0xc));
  *piVar1 = (int)((int)(uint)&ghidra_vftable_std_Func_impl_no_alloc);
  local_20 = (int *)(piVar1 + 1);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  *local_20 = (int)(local_14);
  piVar1[2] = (int)((int)param_3);
  local_1c = (int *)(piVar1);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  local_2c = (int *)(piVar1);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  local_20 = (int *)((int *)param_1);
  if (local_2c != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)*local_2c)(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 0x10))(local_2c != (int *)(local_50));
    }
  }

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105ee720; body size 147 bytes.
#line 1 "ENTRY_105ee720"

int __fastcall FUN_105ee720(int param_1)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined **local_3c;
  int local_38;
  undefined ***local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_18 = (undefined ***)(&local_3c);
  local_3c = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  *(undefined4 *)(param_1 + 0x24) = 0;

  local_38 = (int)(param_1);
  local_14 = (int)(param_1);
  uVar2 = (undefined4)(FUN_105f0b80(param_1));
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  if (local_18 != (undefined ***)0x0) {
    (*(code *)(*local_18)[4])(local_18 != &local_3c,uVar1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105eecb0; body size 84 bytes.
#line 1 "ENTRY_105eecb0"

void __fastcall FUN_105eecb0(int param_1)

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


// Reference entry 105eee60; body size 84 bytes.
#line 1 "ENTRY_105eee60"

void __fastcall FUN_105eee60(int param_1)

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


// Reference entry 105eef30; body size 84 bytes.
#line 1 "ENTRY_105eef30"

void __fastcall FUN_105eef30(int param_1)

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


// Reference entry 105f0440; body size 107 bytes.
#line 1 "ENTRY_105f0440"

int __thiscall Recovered_Bulk::FUN_105f0440(byte param_2)
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


// Reference entry 105f04d0; body size 93 bytes.
#line 1 "ENTRY_105f04d0"

int __thiscall Recovered_Bulk::FUN_105f04d0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x54));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x58);
  }
  return (int)(param_1);
}


// Reference entry 105f0650; body size 107 bytes.
#line 1 "ENTRY_105f0650"

int __thiscall Recovered_Bulk::FUN_105f0650(byte param_2)
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


// Reference entry 105f06e0; body size 93 bytes.
#line 1 "ENTRY_105f06e0"

int __thiscall Recovered_Bulk::FUN_105f06e0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x54));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x58);
  }
  return (int)(param_1);
}


// Reference entry 105f0760; body size 107 bytes.
#line 1 "ENTRY_105f0760"

int __thiscall Recovered_Bulk::FUN_105f0760(byte param_2)
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


// Reference entry 105f08e0; body size 127 bytes.
#line 1 "ENTRY_105f08e0"

undefined4 * __fastcall FUN_105f08e0(int param_1)

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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 105f0980; body size 116 bytes.
#line 1 "ENTRY_105f0980"

undefined4 * __fastcall FUN_105f0980(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0xc));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar3[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  piVar1 = (int *)(*(int **)(param_1 + 8));

  puVar3[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 105f0a20; body size 159 bytes.
#line 1 "ENTRY_105f0a20"

undefined4 * __fastcall FUN_105f0a20(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x58));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
  }
  puVar2[0x15] = (undefined4)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x54))(puVar2 + 0xc));
    puVar2[0x15] = (undefined4)(uVar3);
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 105f0c70; body size 116 bytes.
#line 1 "ENTRY_105f0c70"

undefined4 * __fastcall FUN_105f0c70(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0xc));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar3[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  piVar1 = (int *)(*(int **)(param_1 + 8));

  puVar3[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 105f0d20; body size 159 bytes.
#line 1 "ENTRY_105f0d20"

undefined4 * __fastcall FUN_105f0d20(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x58));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
  }
  puVar2[0x15] = (undefined4)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x54))(puVar2 + 0xc));
    puVar2[0x15] = (undefined4)(uVar3);
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 105f0df0; body size 116 bytes.
#line 1 "ENTRY_105f0df0"

undefined4 * __fastcall FUN_105f0df0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0xc));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar3[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  piVar1 = (int *)(*(int **)(param_1 + 8));

  puVar3[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 105f0fd0; body size 105 bytes.
#line 1 "ENTRY_105f0fd0"

void __thiscall Recovered_Bulk::FUN_105f0fd0(char param_2)
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


// Reference entry 105f1060; body size 91 bytes.
#line 1 "ENTRY_105f1060"

void __thiscall Recovered_Bulk::FUN_105f1060(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x54));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x58);
  }
  return;
}


// Reference entry 105f1260; body size 105 bytes.
#line 1 "ENTRY_105f1260"

void __thiscall Recovered_Bulk::FUN_105f1260(char param_2)
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


// Reference entry 105f1310; body size 91 bytes.
#line 1 "ENTRY_105f1310"

void __thiscall Recovered_Bulk::FUN_105f1310(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x54));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x58);
  }
  return;
}


// Reference entry 105f1390; body size 105 bytes.
#line 1 "ENTRY_105f1390"

void __thiscall Recovered_Bulk::FUN_105f1390(char param_2)
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


// Reference entry 105f2380; body size 113 bytes.
#line 1 "ENTRY_105f2380"

undefined4 __thiscall Recovered_Bulk::FUN_105f2380(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10c5f8a0(&DAT_1186d2ee);

  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_5 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_5);
  }
  thunk_FUN_10c62d50(param_1,param_5,param_2,param_3,param_4,puVar2,uVar1);

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 105f2bd0; body size 151 bytes.
#line 1 "ENTRY_105f2bd0"

void __thiscall Recovered_Bulk::FUN_105f2bd0(int param_2)
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

  iVar1 = (int)(*(int *)(param_1 + 4));
  thunk_FUN_105f9e40(param_2);

  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  piVar2 = (int *)(*(int **)(param_2 + 0x28));
  *(int **)(iVar1 + 0x28) = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(uVar3);
  }
  *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  piVar2 = (int *)(*(int **)(param_2 + 0x30));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  *(int **)(iVar1 + 0x30) = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x34;

  return;

 } catch (...) { }
}


// Reference entry 105f2d80; body size 108 bytes.
#line 1 "ENTRY_105f2d80"

void __thiscall Recovered_Bulk::FUN_105f2d80(undefined1 *param_2)
{
  int param_1 = (int )this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  **(undefined1 **)(param_1 + 4) = *param_2;
  thunk_FUN_105f98d0(param_2 + 4);

  thunk_FUN_105f9a80(param_2 + 0x10);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x1c;

  return;

 } catch (...) { }
}


// Reference entry 105f2e10; body size 225 bytes.
#line 1 "ENTRY_105f2e10"

void __thiscall Recovered_Bulk::FUN_105f2e10(undefined1 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar6 = (uint)(DAT_12126b84);

  puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 4));
  *puVar1 = (undefined1)(*param_2);
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 8));
  uVar4 = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(puVar1 + 4) = uVar4;
  *(undefined4 *)(puVar1 + 8) = uVar3;
  *(undefined4 *)(puVar1 + 0xc) = uVar2;
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  uVar4 = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(puVar1 + 0x10) = uVar4;
  *(undefined4 *)(puVar1 + 0x14) = uVar3;
  *(undefined4 *)(puVar1 + 0x18) = uVar2;

  *(undefined4 *)(puVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(puVar1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(puVar1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  piVar5 = (int *)(*(int **)(param_2 + 0x28));
  *(int **)(puVar1 + 0x28) = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))(uVar6);
  }
  *(undefined4 *)(puVar1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  piVar5 = (int *)(*(int **)(param_2 + 0x30));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  *(int **)(puVar1 + 0x30) = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x34;

  return;

 } catch (...) { }
}


// Reference entry 105f2f30; body size 112 bytes.
#line 1 "ENTRY_105f2f30"

void __thiscall Recovered_Bulk::FUN_105f2f30(int param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTree);
  puVar1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  uVar4 = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  puVar1[2] = (undefined4)(uVar4);
  puVar1[3] = (undefined4)(uVar3);
  puVar1[4] = (undefined4)(uVar2);
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x1c));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  uVar4 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  puVar1[5] = (undefined4)(uVar4);
  puVar1[6] = (undefined4)(uVar3);
  puVar1[7] = (undefined4)(uVar2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x20;
  return;
}


// Reference entry 105f2fc0; body size 112 bytes.
#line 1 "ENTRY_105f2fc0"

void __thiscall Recovered_Bulk::FUN_105f2fc0(int param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);
  puVar1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  uVar4 = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  puVar1[2] = (undefined4)(uVar4);
  puVar1[3] = (undefined4)(uVar3);
  puVar1[4] = (undefined4)(uVar2);
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x1c));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  uVar4 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  puVar1[5] = (undefined4)(uVar4);
  puVar1[6] = (undefined4)(uVar3);
  puVar1[7] = (undefined4)(uVar2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x20;
  return;
}


// Reference entry 105f3050; body size 112 bytes.
#line 1 "ENTRY_105f3050"

void __thiscall Recovered_Bulk::FUN_105f3050(int param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);
  puVar1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  uVar4 = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  puVar1[2] = (undefined4)(uVar4);
  puVar1[3] = (undefined4)(uVar3);
  puVar1[4] = (undefined4)(uVar2);
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x1c));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  uVar4 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  puVar1[5] = (undefined4)(uVar4);
  puVar1[6] = (undefined4)(uVar3);
  puVar1[7] = (undefined4)(uVar2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x20;
  return;
}


// Reference entry 105f3db0; body size 112 bytes.
#line 1 "ENTRY_105f3db0"

int __stdcall FUN_105f3db0(int param_1,int param_2,int param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x20) {
    thunk_FUN_105f5a00(param_1);
    param_3 = (int)(param_3 + 0x20);

  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 105f3e40; body size 112 bytes.
#line 1 "ENTRY_105f3e40"

int __stdcall FUN_105f3e40(int param_1,int param_2,int param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x20) {
    thunk_FUN_105f5df0(param_1);
    param_3 = (int)(param_3 + 0x20);

  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 105f3ed0; body size 112 bytes.
#line 1 "ENTRY_105f3ed0"

int __stdcall FUN_105f3ed0(int param_1,int param_2,int param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x20) {
    thunk_FUN_105f60e0(param_1);
    param_3 = (int)(param_3 + 0x20);

  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 105f3f80; body size 142 bytes.
#line 1 "ENTRY_105f3f80"

undefined1 * __stdcall FUN_105f3f80(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != (undefined1 *)(param_2)); param_1 = param_1 + 0x1c) {

    *param_3 = (undefined1)(*param_1);
    thunk_FUN_105f98d0(param_1 + 4);

    thunk_FUN_105f9a80(param_1 + 0x10);
    param_3 = (undefined1 *)(param_3 + 0x1c);

  }

  return (undefined1 *)(param_3);

 } catch (...) { }
}


// Reference entry 105f4090; body size 201 bytes.
#line 1 "ENTRY_105f4090"

int FUN_105f4090(int *param_1,int *param_2,int param_3)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;

  uVar2 = (uint)(DAT_12126b84);

  if (param_1 != (int *)(param_2)) {
    piVar3 = (int *)(param_1 + 0xc);
    do {

      thunk_FUN_105f9e40(piVar3 + -0xc);

      *(int *)(param_3 + 0x1c) = piVar3[-5];
      *(int *)(param_3 + 0x20) = piVar3[-4];
      *(int *)(param_3 + 0x24) = piVar3[-3];
      piVar1 = (int *)((int *)piVar3[-2]);
      *(int **)(param_3 + 0x28) = piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar2);
      }
      *(int *)(param_3 + 0x2c) = piVar3[-1];
      piVar1 = (int *)((int *)*piVar3);

      *(int **)(param_3 + 0x30) = piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      param_3 = (int)(param_3 + 0x34);
      piVar1 = (int *)(piVar3 + 1);
      piVar3 = (int *)(piVar3 + 0xd);
    } while (piVar1 != (int *)(param_2));
  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 105f4220; body size 113 bytes.
#line 1 "ENTRY_105f4220"

int FUN_105f4220(int param_1,int param_2,int param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x20) {
    thunk_FUN_105f5df0(param_1);
    param_3 = (int)(param_3 + 0x20);

  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 105f42b0; body size 113 bytes.
#line 1 "ENTRY_105f42b0"

int FUN_105f42b0(int param_1,int param_2,int param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x20) {
    thunk_FUN_105f60e0(param_1);
    param_3 = (int)(param_3 + 0x20);

  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 105f4410; body size 143 bytes.
#line 1 "ENTRY_105f4410"

undefined1 * FUN_105f4410(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != (undefined1 *)(param_2)); param_1 = param_1 + 0x1c) {

    *param_3 = (undefined1)(*param_1);
    thunk_FUN_105f98d0(param_1 + 4);

    thunk_FUN_105f9a80(param_1 + 0x10);
    param_3 = (undefined1 *)(param_3 + 0x1c);

  }

  return (undefined1 *)(param_3);

 } catch (...) { }
}


// Reference entry 105f4970; body size 140 bytes.
#line 1 "ENTRY_105f4970"

void FUN_105f4970(undefined4 param_1,int param_2,int param_3)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_105f9e40(param_3);

  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  piVar1 = (int *)(*(int **)(param_3 + 0x28));
  *(int **)(param_2 + 0x28) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
  piVar1 = (int *)(*(int **)(param_3 + 0x30));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  *(int **)(param_2 + 0x30) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  return;

 } catch (...) { }
}


// Reference entry 105f4a20; body size 140 bytes.
#line 1 "ENTRY_105f4a20"

void FUN_105f4a20(undefined4 param_1,int param_2,int param_3)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_105f9e40(param_3);

  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  piVar1 = (int *)(*(int **)(param_3 + 0x28));
  *(int **)(param_2 + 0x28) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
  piVar1 = (int *)(*(int **)(param_3 + 0x30));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  *(int **)(param_2 + 0x30) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  return;

 } catch (...) { }
}


// Reference entry 105f4ad0; body size 214 bytes.
#line 1 "ENTRY_105f4ad0"

void FUN_105f4ad0(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
 try {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar5 = (uint)(DAT_12126b84);

  *param_2 = (undefined1)(*param_3);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0xc));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 8));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 4));
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)(param_2 + 4) = uVar3;
  *(undefined4 *)(param_2 + 8) = uVar2;
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x18));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0x14));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 0x10));
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x10) = uVar3;
  *(undefined4 *)(param_2 + 0x14) = uVar2;
  *(undefined4 *)(param_2 + 0x18) = uVar1;

  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  piVar4 = (int *)(*(int **)(param_3 + 0x28));
  *(int **)(param_2 + 0x28) = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar5);
  }
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
  piVar4 = (int *)(*(int **)(param_3 + 0x30));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  *(int **)(param_2 + 0x30) = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }

  return;

 } catch (...) { }
}


// Reference entry 105f4fa0; body size 97 bytes.
#line 1 "ENTRY_105f4fa0"

void FUN_105f4fa0(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_2 = (undefined1)(*param_3);
  thunk_FUN_105f98d0(param_3 + 4);

  thunk_FUN_105f9a80(param_3 + 0x10);

  return;

 } catch (...) { }
}


// Reference entry 105f5a00; body size 329 bytes.
#line 1 "ENTRY_105f5a00"

undefined4 * __thiscall Recovered_Bulk::FUN_105f5a00(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  void *_Src;
  void *_Dst;
  size_t _Size;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  piVar1 = (int *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTree);

  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  *piVar1 = (int)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  _Src = (void *)(*(void **)(param_2 + 8));
  if (_Src != *(void **)(param_2 + 0xc)) {
    _Size = (size_t)((int)*(void **)(param_2 + 0xc) - (int)_Src);
    iVar4 = (int)((int)_Size >> 2);
    iVar2 = (int)(thunk_FUN_105a1f40(iVar4));
    *piVar1 = (int)(iVar2);
    iVar4 = (int)(iVar4 * 4);
    param_1[3] = (undefined4)(iVar2);
    param_1[4] = (undefined4)(iVar2 + iVar4);
    _Dst = (void *)((void *)*piVar1);
    memmove(_Dst,_Src,_Size);
    param_1[3] = (undefined4)((void *)(iVar4 + (int)_Dst));
  }
  piVar1 = (int *)(param_1 + 5);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar1 = (int)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  iVar4 = (int)(*(int *)(param_2 + 0x18));
  iVar2 = (int)(*(int *)(param_2 + 0x14));
  if (iVar2 != iVar4) {
    iVar5 = (int)(iVar4 - iVar2 >> 5);
    iVar3 = (int)(thunk_FUN_10604dd0(iVar5));
    *piVar1 = (int)(iVar3);
    param_1[6] = (undefined4)(iVar3);
    param_1[7] = (undefined4)(iVar5 * 0x20 + iVar3);
    iVar3 = (int)(*piVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    do {
      thunk_FUN_105f5a00(iVar2);
      iVar3 = (int)(iVar3 + 0x20);
      iVar2 = (int)(iVar2 + 0x20);
    } while (iVar2 != iVar4);
    param_1[6] = (undefined4)(iVar3);

    return (undefined4 *)(param_1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f5df0; body size 344 bytes.
#line 1 "ENTRY_105f5df0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f5df0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  piVar1 = (int *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  *piVar1 = (int)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  iVar2 = (int)(*(int *)(param_2 + 8));
  iVar6 = (int)(*(int *)(param_2 + 0xc));
  if (iVar2 != iVar6) {
    iVar5 = (int)((iVar6 - iVar2) / 0x34);
    iVar3 = (int)(thunk_FUN_10604d60(iVar5));
    *piVar1 = (int)(iVar3);
    param_1[3] = (undefined4)(iVar3);
    param_1[4] = (undefined4)(iVar5 * 0x34 + iVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar4 = (undefined4)(thunk_FUN_105f4090(iVar2,iVar6,*piVar1,piVar1));
    param_1[3] = (undefined4)(uVar4);
  }
  piVar1 = (int *)(param_1 + 5);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *piVar1 = (int)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  iVar2 = (int)(*(int *)(param_2 + 0x18));
  iVar6 = (int)(*(int *)(param_2 + 0x14));
  if (iVar6 != iVar2) {
    iVar3 = (int)(iVar2 - iVar6 >> 5);
    iVar5 = (int)(thunk_FUN_10604e40(iVar3));
    *piVar1 = (int)(iVar5);
    param_1[6] = (undefined4)(iVar5);
    param_1[7] = (undefined4)(iVar3 * 0x20 + iVar5);
    iVar5 = (int)(*piVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    do {
      thunk_FUN_105f5df0(iVar6);
      iVar5 = (int)(iVar5 + 0x20);
      iVar6 = (int)(iVar6 + 0x20);
    } while (iVar6 != iVar2);
    param_1[6] = (undefined4)(iVar5);

    return (undefined4 *)(param_1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6050; body size 105 bytes.
#line 1 "ENTRY_105f6050"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6050(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  param_1[2] = (undefined4)(uVar3);
  param_1[3] = (undefined4)(uVar2);
  param_1[4] = (undefined4)(uVar1);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x1c));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  param_1[5] = (undefined4)(uVar1);
  param_1[6] = (undefined4)(uVar3);
  param_1[7] = (undefined4)(uVar2);
  return (undefined4 *)(param_1);
}


// Reference entry 105f60e0; body size 344 bytes.
#line 1 "ENTRY_105f60e0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f60e0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  piVar1 = (int *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  *piVar1 = (int)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  iVar2 = (int)(*(int *)(param_2 + 8));
  iVar6 = (int)(*(int *)(param_2 + 0xc));
  if (iVar2 != iVar6) {
    iVar5 = (int)((iVar6 - iVar2) / 0xc);
    iVar3 = (int)(thunk_FUN_10604f20(iVar5));
    *piVar1 = (int)(iVar3);
    param_1[3] = (undefined4)(iVar3);
    param_1[4] = (undefined4)(iVar3 + iVar5 * 0xc);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar4 = (undefined4)(thunk_FUN_105f4340(iVar2,iVar6,*piVar1,piVar1));
    param_1[3] = (undefined4)(uVar4);
  }
  piVar1 = (int *)(param_1 + 5);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *piVar1 = (int)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  iVar2 = (int)(*(int *)(param_2 + 0x18));
  iVar6 = (int)(*(int *)(param_2 + 0x14));
  if (iVar6 != iVar2) {
    iVar3 = (int)(iVar2 - iVar6 >> 5);
    iVar5 = (int)(thunk_FUN_10604eb0(iVar3));
    *piVar1 = (int)(iVar5);
    param_1[6] = (undefined4)(iVar5);
    param_1[7] = (undefined4)(iVar3 * 0x20 + iVar5);
    iVar5 = (int)(*piVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    do {
      thunk_FUN_105f60e0(iVar6);
      iVar5 = (int)(iVar5 + 0x20);
      iVar6 = (int)(iVar6 + 0x20);
    } while (iVar6 != iVar2);
    param_1[6] = (undefined4)(iVar5);

    return (undefined4 *)(param_1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6470; body size 183 bytes.
#line 1 "ENTRY_105f6470"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6470(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6560; body size 183 bytes.
#line 1 "ENTRY_105f6560"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6560(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6650; body size 183 bytes.
#line 1 "ENTRY_105f6650"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6650(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6740; body size 183 bytes.
#line 1 "ENTRY_105f6740"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6740(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6830; body size 180 bytes.
#line 1 "ENTRY_105f6830"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6830(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6920; body size 180 bytes.
#line 1 "ENTRY_105f6920"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6920(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6a10; body size 183 bytes.
#line 1 "ENTRY_105f6a10"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6a10(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6b00; body size 183 bytes.
#line 1 "ENTRY_105f6b00"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6b00(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6bf0; body size 183 bytes.
#line 1 "ENTRY_105f6bf0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6bf0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6ce0; body size 183 bytes.
#line 1 "ENTRY_105f6ce0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6ce0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6dd0; body size 180 bytes.
#line 1 "ENTRY_105f6dd0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6dd0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6ec0; body size 180 bytes.
#line 1 "ENTRY_105f6ec0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6ec0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6fb0; body size 183 bytes.
#line 1 "ENTRY_105f6fb0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6fb0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f70a0; body size 183 bytes.
#line 1 "ENTRY_105f70a0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f70a0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7190; body size 180 bytes.
#line 1 "ENTRY_105f7190"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7190(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7280; body size 183 bytes.
#line 1 "ENTRY_105f7280"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7280(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7370; body size 183 bytes.
#line 1 "ENTRY_105f7370"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7370(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7460; body size 180 bytes.
#line 1 "ENTRY_105f7460"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7460(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7550; body size 180 bytes.
#line 1 "ENTRY_105f7550"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7550(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7640; body size 180 bytes.
#line 1 "ENTRY_105f7640"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7640(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7730; body size 180 bytes.
#line 1 "ENTRY_105f7730"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7730(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7820; body size 180 bytes.
#line 1 "ENTRY_105f7820"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7820(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7910; body size 180 bytes.
#line 1 "ENTRY_105f7910"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7910(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7a00; body size 180 bytes.
#line 1 "ENTRY_105f7a00"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7a00(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7af0; body size 183 bytes.
#line 1 "ENTRY_105f7af0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7af0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7be0; body size 183 bytes.
#line 1 "ENTRY_105f7be0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7be0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7cd0; body size 180 bytes.
#line 1 "ENTRY_105f7cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7cd0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7e20; body size 213 bytes.
#line 1 "ENTRY_105f7e20"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7e20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xfc));

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

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7f30; body size 213 bytes.
#line 1 "ENTRY_105f7f30"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7f30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

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

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f8040; body size 213 bytes.
#line 1 "ENTRY_105f8040"

undefined4 * __thiscall Recovered_Bulk::FUN_105f8040(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10767860(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10767d40(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f8150; body size 213 bytes.
#line 1 "ENTRY_105f8150"

undefined4 * __thiscall Recovered_Bulk::FUN_105f8150(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x108));

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

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f8260; body size 213 bytes.
#line 1 "ENTRY_105f8260"

undefined4 * __thiscall Recovered_Bulk::FUN_105f8260(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));

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

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f8370; body size 213 bytes.
#line 1 "ENTRY_105f8370"

undefined4 * __thiscall Recovered_Bulk::FUN_105f8370(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

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

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f8480; body size 213 bytes.
#line 1 "ENTRY_105f8480"

undefined4 * __thiscall Recovered_Bulk::FUN_105f8480(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

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

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f8590; body size 213 bytes.
#line 1 "ENTRY_105f8590"

undefined4 * __thiscall Recovered_Bulk::FUN_105f8590(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x120));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10873290(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10874b00(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f86a0; body size 213 bytes.
#line 1 "ENTRY_105f86a0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f86a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x124));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10905580(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10907260(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f87b0; body size 213 bytes.
#line 1 "ENTRY_105f87b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f87b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_108fb850(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_108fc3e0(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f88c0; body size 213 bytes.
#line 1 "ENTRY_105f88c0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f88c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10916c20(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10919b50(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f89d0; body size 213 bytes.
#line 1 "ENTRY_105f89d0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f89d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10948f60(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10949d90(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f8ae0; body size 213 bytes.
#line 1 "ENTRY_105f8ae0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f8ae0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x120));

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

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f8bf0; body size 213 bytes.
#line 1 "ENTRY_105f8bf0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f8bf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_109edf50(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109eeaf0(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f8ff0; body size 220 bytes.
#line 1 "ENTRY_105f8ff0"

undefined1 * __thiscall Recovered_Bulk::FUN_105f8ff0(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
 try {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar5 = (uint)(DAT_12126b84);

  *param_1 = (undefined1)(*param_2);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 8));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar1;

  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  piVar4 = (int *)(*(int **)(param_2 + 0x28));
  *(int **)(param_1 + 0x28) = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar5);
  }
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  piVar4 = (int *)(*(int **)(param_2 + 0x30));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  *(int **)(param_1 + 0x30) = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }

  return (undefined1 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f9110; body size 144 bytes.
#line 1 "ENTRY_105f9110"

int __thiscall Recovered_Bulk::FUN_105f9110(int param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_105f9e40(param_2);

  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  piVar1 = (int *)(*(int **)(param_2 + 0x28));
  *(int **)(param_1 + 0x28) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  piVar1 = (int *)(*(int **)(param_2 + 0x30));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  *(int **)(param_1 + 0x30) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105f9250; body size 166 bytes.
#line 1 "ENTRY_105f9250"

int * __thiscall Recovered_Bulk::FUN_105f9250(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  iVar5 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar5 != iVar1) {
    iVar2 = (int)((iVar1 - iVar5) / 0x34);
    iVar4 = (int)(thunk_FUN_10604d60(iVar2));
    *param_1 = (int)(iVar4);
    param_1[1] = (int)(iVar4);
    param_1[2] = (int)(iVar2 * 0x34 + iVar4);

    iVar5 = (int)(thunk_FUN_105f4090(iVar5,iVar1,iVar4,param_1,uVar3));
    param_1[1] = (int)(iVar5);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 105f9380; body size 204 bytes.
#line 1 "ENTRY_105f9380"

int * __thiscall Recovered_Bulk::FUN_105f9380(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (int)(0);
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 5);
    iVar3 = (int)(thunk_FUN_10604dd0(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = (int)(iVar3);
    param_1[2] = (int)(iVar5 * 0x20 + iVar3);

    do {
      thunk_FUN_105f5a00(iVar4);
      iVar3 = (int)(iVar3 + 0x20);
      iVar4 = (int)(iVar4 + 0x20);
    } while (iVar4 != iVar1);
    param_1[1] = (int)(iVar3);

    return (int *)(param_1);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 105f94e0; body size 204 bytes.
#line 1 "ENTRY_105f94e0"

int * __thiscall Recovered_Bulk::FUN_105f94e0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (int)(0);
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 5);
    iVar3 = (int)(thunk_FUN_10604e40(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = (int)(iVar3);
    param_1[2] = (int)(iVar5 * 0x20 + iVar3);

    do {
      thunk_FUN_105f5df0(iVar4);
      iVar3 = (int)(iVar3 + 0x20);
      iVar4 = (int)(iVar4 + 0x20);
    } while (iVar4 != iVar1);
    param_1[1] = (int)(iVar3);

    return (int *)(param_1);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 105f9640; body size 204 bytes.
#line 1 "ENTRY_105f9640"

int * __thiscall Recovered_Bulk::FUN_105f9640(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (int)(0);
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 5);
    iVar3 = (int)(thunk_FUN_10604eb0(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = (int)(iVar3);
    param_1[2] = (int)(iVar5 * 0x20 + iVar3);

    do {
      thunk_FUN_105f60e0(iVar4);
      iVar3 = (int)(iVar3 + 0x20);
      iVar4 = (int)(iVar4 + 0x20);
    } while (iVar4 != iVar1);
    param_1[1] = (int)(iVar3);

    return (int *)(param_1);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 105f97a0; body size 166 bytes.
#line 1 "ENTRY_105f97a0"

int * __thiscall Recovered_Bulk::FUN_105f97a0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  iVar5 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar5 != iVar1) {
    iVar2 = (int)((iVar1 - iVar5) / 0xc);
    iVar4 = (int)(thunk_FUN_10604f20(iVar2));
    *param_1 = (int)(iVar4);
    param_1[1] = (int)(iVar4);
    param_1[2] = (int)(iVar4 + iVar2 * 0xc);

    iVar5 = (int)(thunk_FUN_105f4340(iVar5,iVar1,iVar4,param_1,uVar3));
    param_1[1] = (int)(iVar5);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 105f98d0; body size 286 bytes.
#line 1 "ENTRY_105f98d0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f98d0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int iVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  iVar6 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar6 != iVar1) {
    uVar4 = (uint)((iVar1 - iVar6) / 0x18);
    if (0xaaaaaaa < uVar4) {
LAB_105f99e9:
                    
      thunk_FUN_1012a2a0(uVar2);
    }
    uVar4 = (uint)(uVar4 * 0x18);
    if (uVar4 < 0x1000) {
      if (uVar4 == 0) {
        pvVar5 = (void *)((void *)0x0);
      }
      else {
        pvVar5 = (void *)(operator_new(uVar4));
      }
    }
    else {
      if (uVar4 + 0x23 <= uVar4) goto LAB_105f99e9;
      pvVar3 = (void *)(operator_new(uVar4 + 0x23));
      if (pvVar3 == (void *)0x0) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar5 = (void *)((void *)((int)pvVar3 + 0x23U & 0xffffffe0));
      *(void **)((int)pvVar5 + -4) = pvVar3;
    }
    *param_1 = (undefined4)(pvVar5);
    param_1[1] = (undefined4)(pvVar5);
    param_1[2] = (undefined4)((void *)(uVar4 + (int)pvVar5));

    do {
      thunk_FUN_10deea50(iVar6);
      pvVar5 = (void *)((void *)((int)pvVar5 + 0x18));
      iVar6 = (int)(iVar6 + 0x18);
    } while (iVar6 != iVar1);
    param_1[1] = (undefined4)(pvVar5);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f9a80; body size 346 bytes.
#line 1 "ENTRY_105f9a80"

undefined4 * __thiscall Recovered_Bulk::FUN_105f9a80(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined1 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  puVar4 = (undefined1 *)((undefined1 *)*param_2);
  puVar1 = (undefined1 *)((undefined1 *)param_2[1]);
  if ((undefined1 *)(puVar4) == puVar1) {

    return (undefined4 *)(param_1);
  }
  uVar5 = (uint)(((int)puVar1 - (int)puVar4) / 0x1c);
  if (uVar5 < 0x924924a) {
    uVar5 = (uint)(uVar5 * 0x1c);
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        puVar6 = (undefined1 *)((undefined1 *)0x0);
      }
      else {
        puVar6 = (undefined1 *)(operator_new(uVar5));
      }
    }
    else {
      if (uVar5 + 0x23 <= uVar5) goto LAB_105f9bd5;
      pvVar3 = (void *)(operator_new(uVar5 + 0x23));
      if (pvVar3 == (void *)0x0) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
      puVar6 = (undefined1 *)((undefined1 *)((int)pvVar3 + 0x23U & 0xffffffe0));
      *(void **)(puVar6 + -4) = pvVar3;
    }
    *param_1 = (undefined4)(puVar6);
    param_1[1] = (undefined4)(puVar6);
    param_1[2] = (undefined4)(puVar6 + uVar5);
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    do {
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      *puVar6 = (undefined1)(*puVar4);
      thunk_FUN_105f98d0(puVar4 + 4);
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      thunk_FUN_105f9a80(puVar4 + 0x10);
      puVar6 = (undefined1 *)(puVar6 + 0x1c);
      puVar4 = (undefined1 *)(puVar4 + 0x1c);
    } while ((undefined1 *)(puVar4) != puVar1);
    param_1[1] = (undefined4)(puVar6);

    return (undefined4 *)(param_1);
  }
LAB_105f9bd5:
                    
  thunk_FUN_1012a2a0(uVar2);

 } catch (...) { }
}


// Reference entry 105f9e40; body size 525 bytes.
#line 1 "ENTRY_105f9e40"

undefined1 * __thiscall Recovered_Bulk::FUN_105f9e40(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
 try {
  uint *puVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (uint *)((uint *)(param_1 + 4));
  *param_1 = (undefined1)(*param_2);
  *puVar1 = (uint)(0);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar2 = (int)(*(int *)(param_2 + 8));
  iVar7 = (int)(*(int *)(param_2 + 4));
  if (iVar7 != iVar2) {
    uVar6 = (uint)((iVar2 - iVar7) / 0x18);
    if (0xaaaaaaa < uVar6) goto LAB_105fa048;
    uVar6 = (uint)(uVar6 * 0x18);
    if (uVar6 < 0x1000) {
      if (uVar6 == 0) {
        pvVar5 = (void *)((void *)0x0);
      }
      else {
        pvVar5 = (void *)(operator_new(uVar6));
      }
    }
    else {
      if (uVar6 + 0x23 <= uVar6) goto LAB_105fa048;
      pvVar4 = (void *)(operator_new(uVar6 + 0x23));
      if (pvVar4 == (void *)0x0) goto LAB_105f9fde;
      pvVar5 = (void *)((void *)((int)pvVar4 + 0x23U & 0xffffffe0));
      *(void **)((int)pvVar5 - 4) = pvVar4;
    }
    *puVar1 = (uint)((uint)pvVar5);
    *(void **)(param_1 + 8) = pvVar5;
    *(void **)(param_1 + 0xc) = (void *)((int)pvVar5 + uVar6);
    uVar6 = (uint)(*puVar1);

    do {
      thunk_FUN_10deea50(iVar7);
      uVar6 = (uint)(uVar6 + 0x18);
      iVar7 = (int)(iVar7 + 0x18);
    } while (iVar7 != iVar2);
    *(uint *)(param_1 + 8) = uVar6;
  }
  puVar1 = (uint *)((uint *)(param_1 + 0x10));

  *puVar1 = (uint)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar2 = (int)(*(int *)(param_2 + 0x14));
  iVar7 = (int)(*(int *)(param_2 + 0x10));
  if (iVar7 != iVar2) {
    uVar6 = (uint)((iVar2 - iVar7) / 0x1c);
    if (0x9249249 < uVar6) {
LAB_105fa048:
                    
      thunk_FUN_1012a2a0(uVar3);
    }
    uVar6 = (uint)(uVar6 * 0x1c);
    if (uVar6 < 0x1000) {
      if (uVar6 == 0) {
        pvVar5 = (void *)((void *)0x0);
      }
      else {
        pvVar5 = (void *)(operator_new(uVar6));
      }
    }
    else {
      if (uVar6 + 0x23 <= uVar6) goto LAB_105fa048;
      pvVar4 = (void *)(operator_new(uVar6 + 0x23));
      if (pvVar4 == (void *)0x0) {
LAB_105f9fde:
                    
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar5 = (void *)((void *)((int)pvVar4 + 0x23U & 0xffffffe0));
      *(void **)((int)pvVar5 - 4) = pvVar4;
    }
    *puVar1 = (uint)((uint)pvVar5);
    *(void **)(param_1 + 0x14) = pvVar5;
    *(void **)(param_1 + 0x18) = (void *)((int)pvVar5 + uVar6);
    uVar3 = (uint)(*puVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    do {
      thunk_FUN_105f9e40(iVar7);
      uVar3 = (uint)(uVar3 + 0x1c);
      iVar7 = (int)(iVar7 + 0x1c);
    } while (iVar7 != iVar2);
    *(uint *)(param_1 + 0x14) = uVar3;
  }

  return (undefined1 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa0e0; body size 125 bytes.
#line 1 "ENTRY_105fa0e0"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa0e0(undefined4 *param_2)
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
  piVar1 = (int *)((int *)param_2[3]);
  param_1[3] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  param_1[4] = (undefined4)(param_2[4]);
  piVar1 = (int *)((int *)param_2[5]);

  param_1[5] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa180; body size 125 bytes.
#line 1 "ENTRY_105fa180"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa180(undefined4 *param_2)
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
  piVar1 = (int *)((int *)param_2[3]);
  param_1[3] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  param_1[4] = (undefined4)(param_2[4]);
  piVar1 = (int *)((int *)param_2[5]);

  param_1[5] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa220; body size 213 bytes.
#line 1 "ENTRY_105fa220"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa220(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xfc));

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

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa330; body size 197 bytes.
#line 1 "ENTRY_105fa330"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa330(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigAccountRequiredSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwizType);
  DAT_121a212c = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa430; body size 213 bytes.
#line 1 "ENTRY_105fa430"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa430(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

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

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa540; body size 197 bytes.
#line 1 "ENTRY_105fa540"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa540(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigApConnectSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwizType);
  DAT_121a216c = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa640; body size 213 bytes.
#line 1 "ENTRY_105fa640"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa640(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10767860(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10767d40(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa750; body size 197 bytes.
#line 1 "ENTRY_105fa750"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa750(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigApInstructionsSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwizType);
  DAT_121a2168 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa850; body size 213 bytes.
#line 1 "ENTRY_105fa850"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa850(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x108));

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

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa960; body size 197 bytes.
#line 1 "ENTRY_105fa960"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa960(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigAppVersionCheckSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwizType);
  DAT_121a215c = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105faab0; body size 194 bytes.
#line 1 "ENTRY_105faab0"

undefined4 * __thiscall Recovered_Bulk::FUN_105faab0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigAskNetworkModifiedPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskNetworkModifiedPageType);
  DAT_121a2148 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fac00; body size 194 bytes.
#line 1 "ENTRY_105fac00"

undefined4 * __thiscall Recovered_Bulk::FUN_105fac00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigAskUnplugEthernetPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskUnplugEthernetPageType);
  DAT_121a2180 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fad00; body size 213 bytes.
#line 1 "ENTRY_105fad00"

undefined4 * __thiscall Recovered_Bulk::FUN_105fad00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));

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

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fae10; body size 197 bytes.
#line 1 "ENTRY_105fae10"

undefined4 * __thiscall Recovered_Bulk::FUN_105fae10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigBleConnectSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwizType);
  DAT_121a2170 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105faf10; body size 213 bytes.
#line 1 "ENTRY_105faf10"

undefined4 * __thiscall Recovered_Bulk::FUN_105faf10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

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

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb020; body size 197 bytes.
#line 1 "ENTRY_105fb020"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb020(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigConnectRecoverySubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwizType);
  DAT_121a218c = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb120; body size 213 bytes.
#line 1 "ENTRY_105fb120"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb120(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

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

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb230; body size 197 bytes.
#line 1 "ENTRY_105fb230"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb230(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigDevicePermissionsSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwizType);
  DAT_121a2158 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb330; body size 213 bytes.
#line 1 "ENTRY_105fb330"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb330(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x120));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10873290(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10874b00(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb440; body size 197 bytes.
#line 1 "ENTRY_105fb440"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb440(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigHouseholdSelectionSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwizType);
  DAT_121a2190 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb590; body size 194 bytes.
#line 1 "ENTRY_105fb590"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb590(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigInformWiredConnectionPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigInformWiredConnectionPageType);
  DAT_121a217c = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb690; body size 173 bytes.
#line 1 "ENTRY_105fb690"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb690(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);

  *(undefined2 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = (undefined4)(0);
  thunk_FUN_10eb41b0(uVar1);
  thunk_FUN_10610c60(param_1 + 0x3c);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb770; body size 194 bytes.
#line 1 "ENTRY_105fb770"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb770(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigIntroPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPageType);
  DAT_121a2128 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb870; body size 213 bytes.
#line 1 "ENTRY_105fb870"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb870(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x124));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10905580(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10907260(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb980; body size 197 bytes.
#line 1 "ENTRY_105fb980"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb980(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigNetworkCredentialPropagationSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwizType);
  DAT_121a2188 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fba80; body size 213 bytes.
#line 1 "ENTRY_105fba80"

undefined4 * __thiscall Recovered_Bulk::FUN_105fba80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_108fb850(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_108fc3e0(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fbb90; body size 197 bytes.
#line 1 "ENTRY_105fbb90"

undefined4 * __thiscall Recovered_Bulk::FUN_105fbb90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigNetworkCredentialsSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwizType);
  DAT_121a2184 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fbce0; body size 194 bytes.
#line 1 "ENTRY_105fbce0"

undefined4 * __thiscall Recovered_Bulk::FUN_105fbce0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigPlayerOutOfDatePage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerOutOfDatePageType);
  DAT_121a214c = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fbde0; body size 213 bytes.
#line 1 "ENTRY_105fbde0"

undefined4 * __thiscall Recovered_Bulk::FUN_105fbde0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10948f60(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10949d90(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fbef0; body size 197 bytes.
#line 1 "ENTRY_105fbef0"

undefined4 * __thiscall Recovered_Bulk::FUN_105fbef0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigPlayerSelectionSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwizType);
  DAT_121a2164 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fbff0; body size 213 bytes.
#line 1 "ENTRY_105fbff0"

undefined4 * __thiscall Recovered_Bulk::FUN_105fbff0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x120));

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

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fc100; body size 197 bytes.
#line 1 "ENTRY_105fc100"

undefined4 * __thiscall Recovered_Bulk::FUN_105fc100(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigSecureAuthenticationSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwizType);
  DAT_121a2174 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fc200; body size 130 bytes.
#line 1 "ENTRY_105fc200"

undefined4 * __thiscall Recovered_Bulk::FUN_105fc200(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10eb64f0(param_2);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPage);
  thunk_FUN_10eb41b0(uVar1);
  thunk_FUN_10610c60(param_1 + 0x38);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fc2b0; body size 194 bytes.
#line 1 "ENTRY_105fc2b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105fc2b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigSetupCardBleFoundPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPageType);
  DAT_121a2140 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fc3b0; body size 130 bytes.
#line 1 "ENTRY_105fc3b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105fc3b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10eb64f0(param_2);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPage);
  thunk_FUN_10eb41b0(uVar1);
  thunk_FUN_10610c60(param_1 + 0x38);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fc460; body size 194 bytes.
#line 1 "ENTRY_105fc460"

undefined4 * __thiscall Recovered_Bulk::FUN_105fc460(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigSetupCardJoinNearbySystemPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPageType);
  DAT_121a213c = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fc5b0; body size 194 bytes.
#line 1 "ENTRY_105fc5b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105fc5b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigSetupCardNoNetworkPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNoNetworkPageType);
  DAT_121a2130 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fc700; body size 194 bytes.
#line 1 "ENTRY_105fc700"

undefined4 * __thiscall Recovered_Bulk::FUN_105fc700(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigSetupCardNothingFoundPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNothingFoundPageType);
  DAT_121a2134 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fc800; body size 130 bytes.
#line 1 "ENTRY_105fc800"

undefined4 * __thiscall Recovered_Bulk::FUN_105fc800(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10eb64f0(param_2);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPage);
  thunk_FUN_10eb41b0(uVar1);
  thunk_FUN_10610c60(param_1 + 0x38);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fc8b0; body size 194 bytes.
#line 1 "ENTRY_105fc8b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105fc8b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigSetupCardUnrecognizedNetworkPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPageType);
  DAT_121a2138 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fca00; body size 194 bytes.
#line 1 "ENTRY_105fca00"

undefined4 * __thiscall Recovered_Bulk::FUN_105fca00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigStartOpenApPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigStartOpenApPageType);
  DAT_121a2178 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fcb50; body size 194 bytes.
#line 1 "ENTRY_105fcb50"

undefined4 * __thiscall Recovered_Bulk::FUN_105fcb50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigSuccessPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSuccessPageType);
  DAT_121a2144 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fcc50; body size 213 bytes.
#line 1 "ENTRY_105fcc50"

undefined4 * __thiscall Recovered_Bulk::FUN_105fcc50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_109edf50(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109eeaf0(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fcd60; body size 197 bytes.
#line 1 "ENTRY_105fcd60"

undefined4 * __thiscall Recovered_Bulk::FUN_105fcd60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigSystemIdSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwizType);
  DAT_121a2154 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fce60; body size 431 bytes.
#line 1 "ENTRY_105fce60"

undefined4 * __thiscall Recovered_Bulk::FUN_105fce60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10916c20(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10919b50(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigTroubleshootSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigTroubleshootSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigTroubleshootSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigTroubleshootSubwiz);
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
  iVar2 = (int)(thunk_FUN_10eb41b0());
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0x10c);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10ead150(iVar2);
  thunk_FUN_105a26b0();
  iVar2 = (int)(thunk_FUN_10df2df0());
  if (iVar2 == DAT_121a216c) {
    uVar3 = (undefined4)(1);
    thunk_FUN_10ebc1d0(1);
    thunk_FUN_1092b700(uVar3);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fd080; body size 197 bytes.
#line 1 "ENTRY_105fd080"

undefined4 * __thiscall Recovered_Bulk::FUN_105fd080(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigTroubleshootSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigTroubleshootSubwizType);
  DAT_121a2160 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fd180; body size 244 bytes.
#line 1 "ENTRY_105fd180"

undefined4 * __thiscall Recovered_Bulk::FUN_105fd180(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_106da030(param_2);

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
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  puVar1 = (undefined4 *)((undefined4 *)0x0);
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(param_1 + 0x3a);
  }
  thunk_FUN_10eaafe0(puVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  puVar1 = (undefined4 *)((undefined4 *)0x0);
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(param_1 + 0x40);
  }
  thunk_FUN_10eab1c0(puVar1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizard);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizard);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizard);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizard);
  param_1[0x46] = (undefined4)(0);
  param_1[0x47] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x48) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fd2c0; body size 4730 bytes.
#line 1 "ENTRY_105fd2c0"

undefined4 * __fastcall FUN_105fd2c0(undefined4 *param_1)

{
 try {
  bool bVar1;
  undefined4 *puVar2;
  SCStr *pSVar3;
  SCStr local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_18))->int_allocRep("SCWifiConfigWizard");

  thunk_FUN_106de2c0(&local_18);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizardType);

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  DAT_121a2194 = (int)(param_1);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigIntroPage");
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 7;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPageType);
    DAT_121a2128 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigAccountRequiredSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x11)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x14)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x15;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwizType);
    DAT_121a212c = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x16;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigSetupCardNoNetworkPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0x17;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x1a;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x19;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1b)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0x1c;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNoNetworkPageType);
    DAT_121a2130 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x1f;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigSetupCardNothingFoundPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0x20;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x23;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x22;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x24)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0x25;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNothingFoundPageType);
    DAT_121a2134 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x28;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigSetupCardUnrecognizedNetworkPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0x29;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x2c;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x2b;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x2d)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0x2e;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPageType);
    DAT_121a2138 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x31;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigSetupCardJoinNearbySystemPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0x32;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x35;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x34;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x36)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0x37;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPageType);
    DAT_121a213c = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x3a;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigSetupCardBleFoundPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0x3b;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x3e;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x3d;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x3f)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0x40;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPageType);
    DAT_121a2140 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x43;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigSuccessPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0x44;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x47;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x46;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x48)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0x49;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSuccessPageType);
    DAT_121a2144 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x4c;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigAskNetworkModifiedPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0x4d;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x50;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x4f;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x51)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0x52;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskNetworkModifiedPageType);
    DAT_121a2148 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x55;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigPlayerOutOfDatePage");
    *(unsigned char *)((char *)&local_8 + 0) = 0x56;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x59;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x58;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x5a)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0x5b;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerOutOfDatePageType);
    DAT_121a214c = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x5e;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigWrongHHIDPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0x5f;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x62;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x61;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(99)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 100;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWrongHHIDPageType);
    DAT_121a2150 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x67;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigSystemIdSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x68;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x6b)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x6e)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x6f;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwizType);
    DAT_121a2154 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x70;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigDevicePermissionsSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x71;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x74)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x77)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x78;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwizType);
    DAT_121a2158 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x79;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigAppVersionCheckSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x7a;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x7d)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x80)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x81;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwizType);
    DAT_121a215c = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x82;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigTroubleshootSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x83;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x86)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x89)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x8a;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigTroubleshootSubwizType);
    DAT_121a2160 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x8b;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigPlayerSelectionSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x8c;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x8f)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x92)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x93;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwizType);
    DAT_121a2164 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x94;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigApInstructionsSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x95;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x98)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x9b)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x9c;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwizType);
    DAT_121a2168 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x9d;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigApConnectSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x9e;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xa1)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xa4)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xa5;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwizType);
    DAT_121a216c = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xa6;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigBleConnectSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xa7;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xaa)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xad)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xae;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwizType);
    DAT_121a2170 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xaf;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigSecureAuthenticationSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xb0;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb3)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb6)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xb7;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwizType);
    DAT_121a2174 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xb8;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigStartOpenApPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0xb9;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0xbc;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0xbb;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xbd)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0xbe;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigStartOpenApPageType);
    DAT_121a2178 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xc1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigInformWiredConnectionPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0xc2;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0xc5;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0xc4;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc6)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 199;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigInformWiredConnectionPageType);
    DAT_121a217c = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xca;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigAskUnplugEthernetPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0xcb;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0xce;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0xcd;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xcf)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0xd0;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskUnplugEthernetPageType);
    DAT_121a2180 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xd3;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigNetworkCredentialsSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xd4;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd7)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xda)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xdb;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwizType);
    DAT_121a2184 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xdc;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigNetworkCredentialPropagationSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xdd;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xe0)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xe3)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xe4;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwizType);
    DAT_121a2188 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xe5;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigConnectRecoverySubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xe6;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xe9)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xec)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xed;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwizType);
    DAT_121a218c = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xee;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigHouseholdSelectionSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xef;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf2)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf5)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xf6;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwizType);
    DAT_121a2190 = (int)(puVar2);
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_106dfb80(puVar2);
  thunk_FUN_106dfcc0(&DAT_121a12a8,&DAT_121a12b0);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fea30; body size 194 bytes.
#line 1 "ENTRY_105fea30"

undefined4 * __thiscall Recovered_Bulk::FUN_105fea30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigWrongHHIDPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWrongHHIDPageType);
  DAT_121a2150 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fec50; body size 110 bytes.
#line 1 "ENTRY_105fec50"

void __fastcall FUN_105fec50(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105fece0; body size 110 bytes.
#line 1 "ENTRY_105fece0"

void __fastcall FUN_105fece0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105fed70; body size 110 bytes.
#line 1 "ENTRY_105fed70"

void __fastcall FUN_105fed70(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105fee00; body size 110 bytes.
#line 1 "ENTRY_105fee00"

void __fastcall FUN_105fee00(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105feec0; body size 119 bytes.
#line 1 "ENTRY_105feec0"

void __fastcall FUN_105feec0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x18));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x10));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 105fef60; body size 119 bytes.
#line 1 "ENTRY_105fef60"

void __fastcall FUN_105fef60(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x18));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x10));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 105ff3e0; body size 68 bytes.
#line 1 "ENTRY_105ff3e0"

void __fastcall FUN_105ff3e0(int *param_1)

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


// Reference entry 105ff930; body size 135 bytes.
#line 1 "ENTRY_105ff930"

void __fastcall FUN_105ff930(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x30));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x28));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();

  return;

 } catch (...) { }
}


// Reference entry 105ffaa0; body size 110 bytes.
#line 1 "ENTRY_105ffaa0"

void __fastcall FUN_105ffaa0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105ffba0; body size 110 bytes.
#line 1 "ENTRY_105ffba0"

void __fastcall FUN_105ffba0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105ffc30; body size 110 bytes.
#line 1 "ENTRY_105ffc30"

void __fastcall FUN_105ffc30(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105ffe50; body size 110 bytes.
#line 1 "ENTRY_105ffe50"

void __fastcall FUN_105ffe50(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105ffee0; body size 119 bytes.
#line 1 "ENTRY_105ffee0"

void __fastcall FUN_105ffee0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x18));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x10));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 105fff80; body size 119 bytes.
#line 1 "ENTRY_105fff80"

void __fastcall FUN_105fff80(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x18));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x10));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10600020; body size 110 bytes.
#line 1 "ENTRY_10600020"

void __fastcall FUN_10600020(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 106000b0; body size 110 bytes.
#line 1 "ENTRY_106000b0"

void __fastcall FUN_106000b0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 106001b0; body size 110 bytes.
#line 1 "ENTRY_106001b0"

void __fastcall FUN_106001b0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 106002b0; body size 119 bytes.
#line 1 "ENTRY_106002b0"

void __fastcall FUN_106002b0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x14));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xc));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10600350; body size 110 bytes.
#line 1 "ENTRY_10600350"

void __fastcall FUN_10600350(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10600ac0; body size 123 bytes.
#line 1 "ENTRY_10600ac0"

void __fastcall FUN_10600ac0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0(uVar1);

  return;

 } catch (...) { }
}


// Reference entry 10600b80; body size 123 bytes.
#line 1 "ENTRY_10600b80"

void __fastcall FUN_10600b80(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0(uVar1);

  return;

 } catch (...) { }
}


// Reference entry 10600ce0; body size 123 bytes.
#line 1 "ENTRY_10600ce0"

void __fastcall FUN_10600ce0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0(uVar1);

  return;

 } catch (...) { }
}


// Reference entry 10600ee0; body size 258 bytes.
#line 1 "ENTRY_10600ee0"

void __fastcall FUN_10600ee0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x118)))->int_release();
  *(undefined4 *)(param_1 + 0x118) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 0x110));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x104));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xf8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xec));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_106da680();

  return;

 } catch (...) { }
}


// Reference entry 10601ca0; body size 68 bytes.
#line 1 "ENTRY_10601ca0"

undefined4 * __thiscall Recovered_Bulk::FUN_10601ca0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602210; body size 68 bytes.
#line 1 "ENTRY_10602210"

undefined4 * __thiscall Recovered_Bulk::FUN_10602210(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602270; body size 68 bytes.
#line 1 "ENTRY_10602270"

undefined4 * __thiscall Recovered_Bulk::FUN_10602270(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106022d0; body size 68 bytes.
#line 1 "ENTRY_106022d0"

undefined4 * __thiscall Recovered_Bulk::FUN_106022d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602330; body size 68 bytes.
#line 1 "ENTRY_10602330"

undefined4 * __thiscall Recovered_Bulk::FUN_10602330(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602390; body size 68 bytes.
#line 1 "ENTRY_10602390"

undefined4 * __thiscall Recovered_Bulk::FUN_10602390(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106023f0; body size 68 bytes.
#line 1 "ENTRY_106023f0"

undefined4 * __thiscall Recovered_Bulk::FUN_106023f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602450; body size 68 bytes.
#line 1 "ENTRY_10602450"

undefined4 * __thiscall Recovered_Bulk::FUN_10602450(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106024b0; body size 68 bytes.
#line 1 "ENTRY_106024b0"

undefined4 * __thiscall Recovered_Bulk::FUN_106024b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602510; body size 68 bytes.
#line 1 "ENTRY_10602510"

undefined4 * __thiscall Recovered_Bulk::FUN_10602510(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602570; body size 68 bytes.
#line 1 "ENTRY_10602570"

undefined4 * __thiscall Recovered_Bulk::FUN_10602570(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106025d0; body size 68 bytes.
#line 1 "ENTRY_106025d0"

undefined4 * __thiscall Recovered_Bulk::FUN_106025d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602630; body size 68 bytes.
#line 1 "ENTRY_10602630"

undefined4 * __thiscall Recovered_Bulk::FUN_10602630(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602690; body size 68 bytes.
#line 1 "ENTRY_10602690"

undefined4 * __thiscall Recovered_Bulk::FUN_10602690(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106026f0; body size 68 bytes.
#line 1 "ENTRY_106026f0"

undefined4 * __thiscall Recovered_Bulk::FUN_106026f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602860; body size 68 bytes.
#line 1 "ENTRY_10602860"

undefined4 * __thiscall Recovered_Bulk::FUN_10602860(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602900; body size 68 bytes.
#line 1 "ENTRY_10602900"

undefined4 * __thiscall Recovered_Bulk::FUN_10602900(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106029a0; body size 68 bytes.
#line 1 "ENTRY_106029a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106029a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602a40; body size 68 bytes.
#line 1 "ENTRY_10602a40"

undefined4 * __thiscall Recovered_Bulk::FUN_10602a40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602ae0; body size 68 bytes.
#line 1 "ENTRY_10602ae0"

undefined4 * __thiscall Recovered_Bulk::FUN_10602ae0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602b80; body size 68 bytes.
#line 1 "ENTRY_10602b80"

undefined4 * __thiscall Recovered_Bulk::FUN_10602b80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602c20; body size 68 bytes.
#line 1 "ENTRY_10602c20"

undefined4 * __thiscall Recovered_Bulk::FUN_10602c20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602cc0; body size 68 bytes.
#line 1 "ENTRY_10602cc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10602cc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602d60; body size 68 bytes.
#line 1 "ENTRY_10602d60"

undefined4 * __thiscall Recovered_Bulk::FUN_10602d60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602e00; body size 68 bytes.
#line 1 "ENTRY_10602e00"

undefined4 * __thiscall Recovered_Bulk::FUN_10602e00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602ea0; body size 68 bytes.
#line 1 "ENTRY_10602ea0"

undefined4 * __thiscall Recovered_Bulk::FUN_10602ea0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603080; body size 68 bytes.
#line 1 "ENTRY_10603080"

undefined4 * __thiscall Recovered_Bulk::FUN_10603080(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603120; body size 68 bytes.
#line 1 "ENTRY_10603120"

undefined4 * __thiscall Recovered_Bulk::FUN_10603120(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106031c0; body size 68 bytes.
#line 1 "ENTRY_106031c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106031c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603260; body size 68 bytes.
#line 1 "ENTRY_10603260"

undefined4 * __thiscall Recovered_Bulk::FUN_10603260(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603300; body size 68 bytes.
#line 1 "ENTRY_10603300"

undefined4 * __thiscall Recovered_Bulk::FUN_10603300(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106033a0; body size 147 bytes.
#line 1 "ENTRY_106033a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106033a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0(uVar1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe4);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 106034a0; body size 147 bytes.
#line 1 "ENTRY_106034a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106034a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0(uVar1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe4);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 106035a0; body size 68 bytes.
#line 1 "ENTRY_106035a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106035a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603640; body size 68 bytes.
#line 1 "ENTRY_10603640"

undefined4 * __thiscall Recovered_Bulk::FUN_10603640(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106036e0; body size 147 bytes.
#line 1 "ENTRY_106036e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106036e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0(uVar1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe4);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 106037e0; body size 68 bytes.
#line 1 "ENTRY_106037e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106037e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603880; body size 68 bytes.
#line 1 "ENTRY_10603880"

undefined4 * __thiscall Recovered_Bulk::FUN_10603880(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603920; body size 68 bytes.
#line 1 "ENTRY_10603920"

undefined4 * __thiscall Recovered_Bulk::FUN_10603920(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106039c0; body size 68 bytes.
#line 1 "ENTRY_106039c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106039c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603a60; body size 282 bytes.
#line 1 "ENTRY_10603a60"

int __thiscall Recovered_Bulk::FUN_10603a60(byte param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x118)))->int_release();
  *(undefined4 *)(param_1 + 0x118) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 0x110));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x104));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xf8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xec));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x124);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10603c00; body size 68 bytes.
#line 1 "ENTRY_10603c00"

undefined4 * __thiscall Recovered_Bulk::FUN_10603c00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10604230; body size 131 bytes.
#line 1 "ENTRY_10604230"

void __thiscall Recovered_Bulk::FUN_10604230(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_105f2b00(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0xc) * 0xc);
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
  param_1[1] = (int)(param_2 + param_3 * 0xc);
  param_1[2] = (int)(param_2 + param_4 * 0xc);
  return;
}


// Reference entry 10604820; body size 117 bytes.
#line 1 "ENTRY_10604820"

void __fastcall FUN_10604820(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_105f2b00(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0xc) * 0xc);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 10604d60; body size 87 bytes.
#line 1 "ENTRY_10604d60"

void * FUN_10604d60(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x4ec4ec5) {
    param_1 = (uint)(param_1 * 0x34);
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


// Reference entry 10604dd0; body size 87 bytes.
#line 1 "ENTRY_10604dd0"

void * FUN_10604dd0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x8000000) {
    param_1 = (uint)(param_1 * 0x20);
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


// Reference entry 10604e40; body size 87 bytes.
#line 1 "ENTRY_10604e40"

void * FUN_10604e40(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x8000000) {
    param_1 = (uint)(param_1 * 0x20);
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


// Reference entry 10604eb0; body size 87 bytes.
#line 1 "ENTRY_10604eb0"

void * FUN_10604eb0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x8000000) {
    param_1 = (uint)(param_1 * 0x20);
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


// Reference entry 10604f20; body size 90 bytes.
#line 1 "ENTRY_10604f20"

void * FUN_10604f20(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x15555556) {
    param_1 = (uint)(param_1 * 0xc);
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


// Reference entry 10604fa0; body size 97 bytes.
#line 1 "ENTRY_10604fa0"

void * FUN_10604fa0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x924924a) {
    param_1 = (uint)(param_1 * 0x1c);
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


// Reference entry 106051a0; body size 240 bytes.
#line 1 "ENTRY_106051a0"

undefined4 * __stdcall FUN_106051a0(undefined4 *param_1)

{
 try {
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10cf34e0(&local_18);

  piVar2 = (int *)((int *)thunk_FUN_10c97610(&local_14));
  piVar4 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar1));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  pvVar3 = (void *)(operator_new(0x110));
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)thunk_FUN_10ee0ce0(piVar4,2));
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  *param_1 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 106052d0; body size 2155 bytes.
#line 1 "ENTRY_106052d0"

undefined4 __thiscall Recovered_Bulk::FUN_106052d0(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  SCStr *this_;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined **local_ec [8];
  SCStr local_cc [8];
  undefined **local_c4 [8];
  undefined4 local_a4 [2];
  undefined4 local_9c [2];
  undefined4 local_94 [2];
  undefined4 local_8c;
  int *local_88;
  undefined4 local_84;
  void *local_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  SCStr local_74 [8];
  undefined **local_6c;
  undefined4 local_68;
  int *piStack_64;
  int *piStack_60;
  int iStack_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  int local_50;
  undefined4 local_4c [2];
  undefined4 local_44 [2];
  undefined4 local_3c [2];
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  undefined **local_28;
  undefined4 local_24;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  int *local_8;
  
  this_ = (SCStr *)(local_74);


  uVar4 = (uint)(DAT_12126b84 ^ (uint)this_);

  piVar5 = (int *)((int *)thunk_FUN_10cf34e0(&local_8));
  iVar1 = (int)(*piVar5);

  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(uVar4);
  }

  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x11c) == 1) || (*(int *)(param_1 + 0x11c) == 2)) {
      local_8 = (int *)((int *)thunk_FUN_10c5f450(this_,0x2099,&DAT_11882ff0));

      uVar6 = (undefined4)(thunk_FUN_10c5f450(local_3c,0x2bed,&DAT_11882ff0));
      *(unsigned char *)((char *)&local_78 + 0) = 0x11;
      uVar7 = (undefined4)(thunk_FUN_10c5f450(local_44,0x2beb,&DAT_11882ff0));
      *(unsigned char *)((char *)&local_78 + 0) = 0x12;
      uVar8 = (undefined4)(thunk_FUN_10c5f450(local_4c,0x2be9,&DAT_11882ff0));
      *(unsigned char *)((char *)&local_78 + 0) = 0x13;
      thunk_FUN_10ec1250();
      uVar11 = (undefined4)(0);
      *(unsigned char *)((char *)&local_78 + 0) = 0x14;
      piVar5 = (int *)(local_8);
      thunk_FUN_10eceeb0(uVar8);
      thunk_FUN_10ecbaa0(uVar7);
      thunk_FUN_10ecbc60(uVar6);
      thunk_FUN_10ecb760(piVar5);
      uVar6 = (undefined4)(thunk_FUN_10eca460(uVar11));
      thunk_FUN_105f6290(uVar6);
      local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

      piStack_20 = (int *)((int *)0x0);
      piStack_1c = (int *)((int *)0x0);
      iStack_18 = (int)(0);
      local_14 = (undefined4 *)((undefined4 *)0x0);
      local_10 = (undefined4 *)((undefined4 *)0x0);

      *(unsigned char *)((char *)&local_78 + 0) = 0x16;
      uVar6 = (undefined4)(thunk_FUN_106050a0(local_c4));
      thunk_FUN_105f60e0(uVar6);
      puVar3 = (undefined4 *)(local_10);
      *(unsigned char *)((char *)&local_78 + 0) = 0x15;
      puVar9 = (undefined4 *)(local_14);
      if (local_14 != (undefined4 *)0x0) {
        for (; (undefined4 *)(puVar9) != puVar3; puVar9 = puVar9 + 8) {
          (**(code **)*puVar9)(0);
        }
        uVar4 = (uint)(local_c - (int)local_14 & 0xffffffe0);
        puVar9 = (undefined4 *)(local_14);
        if (0xfff < uVar4) {
          puVar9 = (undefined4 *)((undefined4 *)local_14[-1]);
          uVar4 = (uint)(uVar4 + 0x23);
          if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar9))) goto LAB_10605a65;
        }
        thunk_FUN_1148a50e(puVar9,uVar4);
        local_14 = (undefined4 *)((undefined4 *)0x0);
        local_10 = (undefined4 *)((undefined4 *)0x0);

      }
      piVar5 = (int *)(piStack_1c);
      if (piStack_20 != (int *)0x0) {
        if (piStack_20 != (int *)(piStack_1c)) {
          piVar10 = (int *)(piStack_20 + 1);
          do {
            *(unsigned char *)((char *)&local_78 + 0) = 0x17;
            ((SCStr *)((SCStr *)(piVar10 + 1)))->int_release();
            piVar10[1] = (int)(0);
            piVar2 = (int *)((int *)*piVar10);
            *(unsigned char *)((char *)&local_78 + 0) = 0x18;
            if (piVar2 != (int *)0x0) {
              piVar10[-1] = (int)(0);
              *piVar10 = (int)(0);
              (**(code **)(*piVar2 + 8))();
            }
            *(unsigned char *)((char *)&local_78 + 0) = 0x15;
            piVar2 = (int *)(piVar10 + 2);
            piVar10 = (int *)(piVar10 + 3);
          } while (piVar2 != (int *)(piVar5));
        }
        uVar4 = (uint)(((iStack_18 - (int)piStack_20) / 0xc) * 0xc);
        piVar5 = (int *)(piStack_20);
        if (0xfff < uVar4) {
          piVar5 = (int *)((int *)piStack_20[-1]);
          uVar4 = (uint)(uVar4 + 0x23);
          if (0x1f < (uint)((int)piStack_20 + (-4 - (int)piVar5))) {
LAB_10605a65:
                    
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1148a50e(piVar5,uVar4);
        piStack_20 = (int *)((int *)0x0);
        piStack_1c = (int *)((int *)0x0);
        iStack_18 = (int)(0);
      }
      local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
      thunk_FUN_10604790();
      thunk_FUN_10604820();
      local_c4[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
      *(unsigned char *)((char *)&local_78 + 0) = 0x19;
      ((SCStr *)((SCStr *)&local_2c))->int_release();
      piVar5 = (int *)(local_30);

      *(unsigned char *)((char *)&local_78 + 0) = 0x1a;
      if (local_30 != (int *)0x0) {

        local_30 = (int *)((int *)0x0);
        (**(code **)(*piVar5 + 8))();
      }
      *(unsigned char *)((char *)&local_78 + 0) = 0x1b;
      ((SCStr *)((SCStr *)local_4c))->int_release();
      local_4c[0] = (undefined4)(0);
      *(unsigned char *)((char *)&local_78 + 0) = 0x1c;
      ((SCStr *)((SCStr *)local_44))->int_release();
      local_44[0] = (undefined4)(0);
      local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(0x1d)));
      ((SCStr *)((SCStr *)local_3c))->int_release();
      local_3c[0] = (undefined4)(0);

    }
    else {
      local_8 = (int *)((int *)thunk_FUN_10c5f450(local_cc,0x2099,&DAT_11882ff0));

      uVar6 = (undefined4)(thunk_FUN_10c5f450(local_a4,0x2bed,&DAT_11882ff0));
      *(unsigned char *)((char *)&local_78 + 0) = 0x20;
      uVar7 = (undefined4)(thunk_FUN_10c5f450(local_9c,0x2bea,&DAT_11882ff0));
      *(unsigned char *)((char *)&local_78 + 0) = 0x21;
      uVar8 = (undefined4)(thunk_FUN_10c5f450(local_94,0x2be9,&DAT_11882ff0));
      *(unsigned char *)((char *)&local_78 + 0) = 0x22;
      thunk_FUN_10ec1250();
      uVar11 = (undefined4)(0);
      *(unsigned char *)((char *)&local_78 + 0) = 0x23;
      piVar5 = (int *)(local_8);
      thunk_FUN_10eceeb0(uVar8);
      thunk_FUN_10ecbaa0(uVar7);
      thunk_FUN_10ecbc60(uVar6);
      thunk_FUN_10ecb760(piVar5);
      uVar6 = (undefined4)(thunk_FUN_10eca460(uVar11));
      thunk_FUN_105f6290(uVar6);
      local_6c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

      piStack_64 = (int *)((int *)0x0);
      piStack_60 = (int *)((int *)0x0);
      iStack_5c = (int)(0);
      local_58 = (undefined4 *)((undefined4 *)0x0);
      local_54 = (undefined4 *)((undefined4 *)0x0);

      *(unsigned char *)((char *)&local_78 + 0) = 0x25;
      uVar6 = (undefined4)(thunk_FUN_106050a0(local_ec));
      thunk_FUN_105f60e0(uVar6);
      puVar3 = (undefined4 *)(local_54);
      *(unsigned char *)((char *)&local_78 + 0) = 0x24;
      puVar9 = (undefined4 *)(local_58);
      if (local_58 != (undefined4 *)0x0) {
        for (; (undefined4 *)(puVar9) != puVar3; puVar9 = puVar9 + 8) {
          (**(code **)*puVar9)(0);
        }
        uVar4 = (uint)(local_50 - (int)local_58 & 0xffffffe0);
        puVar9 = (undefined4 *)(local_58);
        if (0xfff < uVar4) {
          puVar9 = (undefined4 *)((undefined4 *)local_58[-1]);
          uVar4 = (uint)(uVar4 + 0x23);
          if (0x1f < (uint)((int)local_58 + (-4 - (int)puVar9))) goto LAB_106057c5;
        }
        thunk_FUN_1148a50e(puVar9,uVar4);
        local_58 = (undefined4 *)((undefined4 *)0x0);
        local_54 = (undefined4 *)((undefined4 *)0x0);

      }
      piVar5 = (int *)(piStack_60);
      if (piStack_64 != (int *)0x0) {
        if (piStack_64 != (int *)(piStack_60)) {
          piVar10 = (int *)(piStack_64 + 1);
          do {
            *(unsigned char *)((char *)&local_78 + 0) = 0x26;
            ((SCStr *)((SCStr *)(piVar10 + 1)))->int_release();
            piVar10[1] = (int)(0);
            piVar2 = (int *)((int *)*piVar10);
            *(unsigned char *)((char *)&local_78 + 0) = 0x27;
            if (piVar2 != (int *)0x0) {
              piVar10[-1] = (int)(0);
              *piVar10 = (int)(0);
              (**(code **)(*piVar2 + 8))();
            }
            *(unsigned char *)((char *)&local_78 + 0) = 0x24;
            piVar2 = (int *)(piVar10 + 2);
            piVar10 = (int *)(piVar10 + 3);
          } while (piVar2 != (int *)(piVar5));
        }
        uVar4 = (uint)(((iStack_5c - (int)piStack_64) / 0xc) * 0xc);
        piVar5 = (int *)(piStack_64);
        if (0xfff < uVar4) {
          piVar5 = (int *)((int *)piStack_64[-1]);
          uVar4 = (uint)(uVar4 + 0x23);
          if (0x1f < (uint)((int)piStack_64 + (-4 - (int)piVar5))) {
LAB_106057c5:
                    
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1148a50e(piVar5,uVar4);
        piStack_64 = (int *)((int *)0x0);
        piStack_60 = (int *)((int *)0x0);
        iStack_5c = (int)(0);
      }
      local_6c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
      thunk_FUN_10604790();
      thunk_FUN_10604820();
      local_ec[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
      *(unsigned char *)((char *)&local_78 + 0) = 0x28;
      ((SCStr *)((SCStr *)&local_84))->int_release();
      piVar5 = (int *)(local_88);

      *(unsigned char *)((char *)&local_78 + 0) = 0x29;
      if (local_88 != (int *)0x0) {

        local_88 = (int *)((int *)0x0);
        (**(code **)(*piVar5 + 8))();
      }
      *(unsigned char *)((char *)&local_78 + 0) = 0x2a;
      ((SCStr *)((SCStr *)local_94))->int_release();
      local_94[0] = (undefined4)(0);
      *(unsigned char *)((char *)&local_78 + 0) = 0x2b;
      ((SCStr *)((SCStr *)local_9c))->int_release();
      local_9c[0] = (undefined4)(0);
      local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(0x2c)));
      ((SCStr *)((SCStr *)local_a4))->int_release();
      local_a4[0] = (undefined4)(0);

      this_ = (SCStr *)(local_cc);
    }
  }
  else {
    local_8 = (int *)((int *)thunk_FUN_10c5f450(this_,0x2099,&DAT_11882ff0));

    uVar6 = (undefined4)(thunk_FUN_10c5f450(local_4c,0x2bed,&DAT_11882ff0));
    *(unsigned char *)((char *)&local_78 + 0) = 2;
    uVar7 = (undefined4)(thunk_FUN_10c5f450(local_44,0x2bec,&DAT_11882ff0));
    *(unsigned char *)((char *)&local_78 + 0) = 3;
    uVar8 = (undefined4)(thunk_FUN_10c5f450(local_3c,0x2be9,&DAT_11882ff0));
    *(unsigned char *)((char *)&local_78 + 0) = 4;
    thunk_FUN_10ec1250();
    uVar11 = (undefined4)(0);
    *(unsigned char *)((char *)&local_78 + 0) = 5;
    piVar5 = (int *)(local_8);
    thunk_FUN_10eceeb0(uVar8);
    thunk_FUN_10ecbaa0(uVar7);
    thunk_FUN_10ecbc60(uVar6);
    thunk_FUN_10ecb760(piVar5);
    uVar6 = (undefined4)(thunk_FUN_10eca460(uVar11));
    thunk_FUN_105f6290(uVar6);
    local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

    piStack_20 = (int *)((int *)0x0);
    piStack_1c = (int *)((int *)0x0);
    iStack_18 = (int)(0);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);

    *(unsigned char *)((char *)&local_78 + 0) = 7;
    uVar6 = (undefined4)(thunk_FUN_106050a0(local_c4));
    thunk_FUN_105f60e0(uVar6);
    puVar3 = (undefined4 *)(local_10);
    *(unsigned char *)((char *)&local_78 + 0) = 6;
    puVar9 = (undefined4 *)(local_14);
    if (local_14 != (undefined4 *)0x0) {
      for (; (undefined4 *)(puVar9) != puVar3; puVar9 = puVar9 + 8) {
        (**(code **)*puVar9)(0);
      }
      uVar4 = (uint)(local_c - (int)local_14 & 0xffffffe0);
      puVar9 = (undefined4 *)(local_14);
      if (0xfff < uVar4) {
        puVar9 = (undefined4 *)((undefined4 *)local_14[-1]);
        uVar4 = (uint)(uVar4 + 0x23);
        if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar9))) goto LAB_10605515;
      }
      thunk_FUN_1148a50e(puVar9,uVar4);
      local_14 = (undefined4 *)((undefined4 *)0x0);
      local_10 = (undefined4 *)((undefined4 *)0x0);

    }
    piVar5 = (int *)(piStack_1c);
    if (piStack_20 != (int *)0x0) {
      if (piStack_20 != (int *)(piStack_1c)) {
        piVar10 = (int *)(piStack_20 + 1);
        do {
          *(unsigned char *)((char *)&local_78 + 0) = 8;
          ((SCStr *)((SCStr *)(piVar10 + 1)))->int_release();
          piVar10[1] = (int)(0);
          piVar2 = (int *)((int *)*piVar10);
          *(unsigned char *)((char *)&local_78 + 0) = 9;
          if (piVar2 != (int *)0x0) {
            piVar10[-1] = (int)(0);
            *piVar10 = (int)(0);
            (**(code **)(*piVar2 + 8))();
          }
          *(unsigned char *)((char *)&local_78 + 0) = 6;
          piVar2 = (int *)(piVar10 + 2);
          piVar10 = (int *)(piVar10 + 3);
        } while (piVar2 != (int *)(piVar5));
      }
      uVar4 = (uint)(((iStack_18 - (int)piStack_20) / 0xc) * 0xc);
      piVar5 = (int *)(piStack_20);
      if (0xfff < uVar4) {
        piVar5 = (int *)((int *)piStack_20[-1]);
        uVar4 = (uint)(uVar4 + 0x23);
        if (0x1f < (uint)((int)piStack_20 + (-4 - (int)piVar5))) {
LAB_10605515:
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(piVar5,uVar4);
      piStack_20 = (int *)((int *)0x0);
      piStack_1c = (int *)((int *)0x0);
      iStack_18 = (int)(0);
    }
    local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
    thunk_FUN_10604790();
    thunk_FUN_10604820();
    local_c4[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
    *(unsigned char *)((char *)&local_78 + 0) = 10;
    ((SCStr *)((SCStr *)&local_2c))->int_release();
    piVar5 = (int *)(local_30);

    *(unsigned char *)((char *)&local_78 + 0) = 0xb;
    if (local_30 != (int *)0x0) {

      local_30 = (int *)((int *)0x0);
      (**(code **)(*piVar5 + 8))();
    }
    *(unsigned char *)((char *)&local_78 + 0) = 0xc;
    ((SCStr *)((SCStr *)local_3c))->int_release();
    local_3c[0] = (undefined4)(0);
    *(unsigned char *)((char *)&local_78 + 0) = 0xd;
    ((SCStr *)((SCStr *)local_44))->int_release();
    local_44[0] = (undefined4)(0);
    local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(0xe)));
    ((SCStr *)((SCStr *)local_4c))->int_release();
    local_4c[0] = (undefined4)(0);

  }
  ((SCStr *)(this_))->int_release();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 10605d60; body size 276 bytes.
#line 1 "ENTRY_10605d60"

undefined4 * __thiscall Recovered_Bulk::FUN_10605d60(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
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


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

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

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10605ec0; body size 276 bytes.
#line 1 "ENTRY_10605ec0"

undefined4 * __thiscall Recovered_Bulk::FUN_10605ec0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
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


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

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

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606020; body size 276 bytes.
#line 1 "ENTRY_10606020"

undefined4 * __thiscall Recovered_Bulk::FUN_10606020(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
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


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

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
        uVar7 = (undefined4)(thunk_FUN_10767860(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10767d40(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606180; body size 276 bytes.
#line 1 "ENTRY_10606180"

undefined4 * __thiscall Recovered_Bulk::FUN_10606180(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
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


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

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

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 106062e0; body size 168 bytes.
#line 1 "ENTRY_106062e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106062e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskNetworkModifiedPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskNetworkModifiedPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskNetworkModifiedPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskNetworkModifiedPage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 106063c0; body size 175 bytes.
#line 1 "ENTRY_106063c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106063c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0xe4));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskUnplugEthernetPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskUnplugEthernetPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskUnplugEthernetPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskUnplugEthernetPage);
    *(undefined1 *)(puVar1 + 0x38) = 0;

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 106064a0; body size 276 bytes.
#line 1 "ENTRY_106064a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106064a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
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


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

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

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606600; body size 276 bytes.
#line 1 "ENTRY_10606600"

undefined4 * __thiscall Recovered_Bulk::FUN_10606600(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
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


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc4));

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

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606760; body size 276 bytes.
#line 1 "ENTRY_10606760"

undefined4 * __thiscall Recovered_Bulk::FUN_10606760(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
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


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

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

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 106068c0; body size 276 bytes.
#line 1 "ENTRY_106068c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106068c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
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


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

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
        uVar7 = (undefined4)(thunk_FUN_10873290(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10874b00(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606a20; body size 168 bytes.
#line 1 "ENTRY_10606a20"

undefined4 * __thiscall Recovered_Bulk::FUN_10606a20(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigInformWiredConnectionPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigInformWiredConnectionPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigInformWiredConnectionPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigInformWiredConnectionPage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606b00; body size 236 bytes.
#line 1 "ENTRY_10606b00"

undefined4 * __thiscall Recovered_Bulk::FUN_10606b00(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xf4));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar3);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPage);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPage);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPage);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPage);
    puVar2[0x38] = (undefined4)(0);
    puVar2[0x39] = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    *(undefined2 *)(puVar2 + 0x3a) = 0;
    puVar2[0x3b] = (undefined4)(0);
    thunk_FUN_10eb41b0(uVar1);
    thunk_FUN_10610c60(puVar2 + 0x3c);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606c30; body size 276 bytes.
#line 1 "ENTRY_10606c30"

undefined4 * __thiscall Recovered_Bulk::FUN_10606c30(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
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


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x124));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10905580(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10907260(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606d90; body size 276 bytes.
#line 1 "ENTRY_10606d90"

undefined4 * __thiscall Recovered_Bulk::FUN_10606d90(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
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


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

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
        uVar7 = (undefined4)(thunk_FUN_108fb850(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_108fc3e0(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606ef0; body size 168 bytes.
#line 1 "ENTRY_10606ef0"

undefined4 * __thiscall Recovered_Bulk::FUN_10606ef0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerOutOfDatePage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerOutOfDatePage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerOutOfDatePage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerOutOfDatePage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606fd0; body size 276 bytes.
#line 1 "ENTRY_10606fd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10606fd0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
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


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

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
        uVar7 = (undefined4)(thunk_FUN_10948f60(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10949d90(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607130; body size 276 bytes.
#line 1 "ENTRY_10607130"

undefined4 * __thiscall Recovered_Bulk::FUN_10607130(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
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


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

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

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607290; body size 193 bytes.
#line 1 "ENTRY_10607290"

undefined4 * __thiscall Recovered_Bulk::FUN_10607290(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xe4));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPage);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPage);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPage);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPage);
    thunk_FUN_10eb41b0(uVar1);
    thunk_FUN_10610c60(puVar2 + 0x38);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607390; body size 193 bytes.
#line 1 "ENTRY_10607390"

undefined4 * __thiscall Recovered_Bulk::FUN_10607390(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xe4));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPage);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPage);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPage);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPage);
    thunk_FUN_10eb41b0(uVar1);
    thunk_FUN_10610c60(puVar2 + 0x38);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607490; body size 168 bytes.
#line 1 "ENTRY_10607490"

undefined4 * __thiscall Recovered_Bulk::FUN_10607490(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNoNetworkPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNoNetworkPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNoNetworkPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNoNetworkPage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607570; body size 168 bytes.
#line 1 "ENTRY_10607570"

undefined4 * __thiscall Recovered_Bulk::FUN_10607570(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNothingFoundPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNothingFoundPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNothingFoundPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNothingFoundPage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607650; body size 193 bytes.
#line 1 "ENTRY_10607650"

undefined4 * __thiscall Recovered_Bulk::FUN_10607650(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xe4));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPage);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPage);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPage);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPage);
    thunk_FUN_10eb41b0(uVar1);
    thunk_FUN_10610c60(puVar2 + 0x38);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607750; body size 168 bytes.
#line 1 "ENTRY_10607750"

undefined4 * __thiscall Recovered_Bulk::FUN_10607750(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigStartOpenApPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigStartOpenApPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigStartOpenApPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigStartOpenApPage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607830; body size 168 bytes.
#line 1 "ENTRY_10607830"

undefined4 * __thiscall Recovered_Bulk::FUN_10607830(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSuccessPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSuccessPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSuccessPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSuccessPage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607910; body size 276 bytes.
#line 1 "ENTRY_10607910"

undefined4 * __thiscall Recovered_Bulk::FUN_10607910(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
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


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

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
        uVar7 = (undefined4)(thunk_FUN_109edf50(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_109eeaf0(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607a70; body size 133 bytes.
#line 1 "ENTRY_10607a70"

undefined4 __thiscall Recovered_Bulk::FUN_10607a70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  pvVar1 = (void *)(operator_new(0xc0));

  if (pvVar1 != (void *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    uVar2 = (undefined4)(thunk_FUN_105fce60(uVar2));

    return (undefined4)(uVar2);
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10607b20; body size 168 bytes.
#line 1 "ENTRY_10607b20"

undefined4 * __thiscall Recovered_Bulk::FUN_10607b20(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWrongHHIDPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWrongHHIDPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWrongHHIDPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWrongHHIDPage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607c00; body size 386 bytes.
#line 1 "ENTRY_10607c00"

undefined4 * __stdcall FUN_10607c00(undefined4 *param_1)

{
 try {
  undefined1 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(0);

  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101da4a0(&local_24,DAT_12126b84 ));

  piVar3 = (int *)((int *)(**(code **)(*(int *)*puVar2 + 0x3c))(&local_20));
  piVar4 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar3 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  local_24 = (int *)(operator_new(0x120));
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  uVar1 = (undefined1)((undefined1)local_8);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_24 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    if (piVar4 == (int *)0x0) {
      *(unsigned char *)((char *)&local_8 + 0) = uVar1;
      ((SCStr *)((SCStr *)&local_18))->int_allocRep((char *)0x0);
      puVar2 = (undefined4 *)(&local_18);

      uVar5 = (uint)(2);
    }
    else {
      puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*piVar4 + 0x1c))(&local_1c));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
      uVar5 = (uint)(1);
    }
    local_14 = (uint)(uVar5);
    uVar1 = (undefined1)(thunk_FUN_10eacce0(1));
    piVar4 = (int *)((int *)thunk_FUN_10edf540(0,puVar2,uVar1));
  }

  *param_1 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  if ((uVar5 & 2) != 0) {
    uVar5 = (uint)(uVar5 & 0xfffffffd | 4);

    local_14 = (uint)(uVar5);
    ((SCStr *)((SCStr *)&local_18))->int_release();

  }
  if ((uVar5 & 1) != 0) {

    ((SCStr *)((SCStr *)&local_1c))->int_release();

  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10607df0; body size 299 bytes.
#line 1 "ENTRY_10607df0"

undefined4 * __thiscall Recovered_Bulk::FUN_10607df0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)(operator_new(0x124));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar3);
    puVar1 = (undefined4 *)(puVar2 + 0x23);

    thunk_FUN_10cf2f30(puVar1);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    thunk_FUN_10cf41d0(puVar1);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_10eaafe0(puVar2 + 0x3a);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    thunk_FUN_10eab1c0(puVar2 + 0x40);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizard);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizard);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizard);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizard);
    puVar2[0x46] = (undefined4)(0);
    puVar2[0x47] = (undefined4)(0);
    *(undefined1 *)(puVar2 + 0x48) = 0;

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10608200; body size 94 bytes.
#line 1 "ENTRY_10608200"

int __thiscall Recovered_Bulk::FUN_10608200(char param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  if (*(int *)(iVar1 + -8) == *(int *)(iVar1 + -4)) {
    thunk_FUN_105f34e0(*(int *)(iVar1 + -8),param_3);
  }
  else {
    thunk_FUN_105f5a00(param_3);
    *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + 0x20;
  }
  iVar1 = (int)(*(int *)(iVar1 + -8));
  if (param_2 == '\0') {
    if (*(int *)(iVar1 + -0x1c) == 4) {
      *(undefined4 *)(iVar1 + -0x1c) = 5;
      return (int)(param_1);
    }
    if (*(int *)(iVar1 + -0x1c) == 0) {
      *(undefined4 *)(iVar1 + -0x1c) = 1;
    }
  }
  return (int)(param_1);
}


// Reference entry 10608280; body size 94 bytes.
#line 1 "ENTRY_10608280"

int __thiscall Recovered_Bulk::FUN_10608280(char param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  if (*(int *)(iVar1 + -8) == *(int *)(iVar1 + -4)) {
    thunk_FUN_105f36d0(*(int *)(iVar1 + -8),param_3);
  }
  else {
    thunk_FUN_105f5df0(param_3);
    *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + 0x20;
  }
  iVar1 = (int)(*(int *)(iVar1 + -8));
  if (param_2 == '\0') {
    if (*(int *)(iVar1 + -0x1c) == 4) {
      *(undefined4 *)(iVar1 + -0x1c) = 5;
      return (int)(param_1);
    }
    if (*(int *)(iVar1 + -0x1c) == 0) {
      *(undefined4 *)(iVar1 + -0x1c) = 1;
    }
  }
  return (int)(param_1);
}


// Reference entry 10608300; body size 94 bytes.
#line 1 "ENTRY_10608300"

int __thiscall Recovered_Bulk::FUN_10608300(char param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  if (*(int *)(iVar1 + -8) == *(int *)(iVar1 + -4)) {
    thunk_FUN_105f38c0(*(int *)(iVar1 + -8),param_3);
  }
  else {
    thunk_FUN_105f60e0(param_3);
    *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + 0x20;
  }
  iVar1 = (int)(*(int *)(iVar1 + -8));
  if (param_2 == '\0') {
    if (*(int *)(iVar1 + -0x1c) == 4) {
      *(undefined4 *)(iVar1 + -0x1c) = 5;
      return (int)(param_1);
    }
    if (*(int *)(iVar1 + -0x1c) == 0) {
      *(undefined4 *)(iVar1 + -0x1c) = 1;
    }
  }
  return (int)(param_1);
}


// Reference entry 106083b0; body size 1130 bytes.
#line 1 "ENTRY_106083b0"

undefined4 __stdcall FUN_106083b0(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined **local_128 [8];
  undefined **local_108 [8];
  undefined **local_e8 [8];
  undefined **local_c8 [8];
  undefined **local_a8 [8];
  SCStr local_88 [8];
  void *local_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  undefined1 local_74 [4];
  undefined4 local_70;
  int *local_6c;
  undefined4 local_68 [2];
  undefined4 local_60;
  int *local_5c;
  undefined4 local_58 [2];
  undefined4 local_50;
  int *local_4c;
  undefined4 local_48 [2];
  undefined4 local_40;
  int *local_3c;
  undefined4 local_38;
  undefined4 local_34 [2];
  undefined4 local_2c [2];
  undefined **local_24;
  undefined4 local_20;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;


  uVar3 = (undefined4)(thunk_FUN_10c5f450(local_88,0x2089,&DAT_11882ff0,DAT_12126b84 ^ (uint)local_74));

  thunk_FUN_10ec0a20(&DAT_11883704);
  uVar9 = (undefined4)(2);
  *(unsigned char *)((char *)&local_78 + 0) = 1;
  thunk_FUN_10ecea60(uVar3);
  iVar4 = (int)(thunk_FUN_10ec7940(uVar9));
  thunk_FUN_105f6290(iVar4 + 4);
  *(unsigned char *)((char *)&local_78 + 0) = 2;
  uVar3 = (undefined4)(thunk_FUN_10c5f450(local_34,0x2088,&DAT_11882ff0));
  *(unsigned char *)((char *)&local_78 + 0) = 3;
  thunk_FUN_10ec0a20(&DAT_118bd5c0);
  *(unsigned char *)((char *)&local_78 + 0) = 4;
  iVar4 = (int)(thunk_FUN_10ecea60(uVar3));
  thunk_FUN_105f6290(iVar4 + 4);
  *(unsigned char *)((char *)&local_78 + 0) = 5;
  uVar3 = (undefined4)(thunk_FUN_10c5f450(local_2c,0x2c05,&DAT_11882ff0));
  *(unsigned char *)((char *)&local_78 + 0) = 6;
  thunk_FUN_10ec1b40("header");
  *(unsigned char *)((char *)&local_78 + 0) = 7;
  iVar4 = (int)(thunk_FUN_10eced20(uVar3));
  thunk_FUN_105f6290(iVar4 + 4);
  *(unsigned char *)((char *)&local_78 + 0) = 8;
  thunk_FUN_10ec1d40();
  *(unsigned char *)((char *)&local_78 + 0) = 9;
  iVar4 = (int)(thunk_FUN_1061c630(1));
  thunk_FUN_105f6290(iVar4 + 4);
  local_24 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_1c = (int *)((int *)0x0);
  piStack_18 = (int *)((int *)0x0);
  iStack_14 = (int)(0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char *)((char *)&local_78 + 0) = 0xb;
  piVar5 = (int *)((int *)thunk_FUN_106050a0(local_a8));
  thunk_FUN_10eb41c0();
  uVar3 = (undefined4)(thunk_FUN_106052d0(local_128));
  *(unsigned char *)((char *)&local_78 + 0) = 0xc;
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 8))(uVar3));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 8))(local_c8));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 8))(local_e8));
  uVar3 = (undefined4)((**(code **)(*piVar5 + 8))(local_108));
  thunk_FUN_105f60e0(uVar3);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  puVar2 = (undefined4 *)(local_c);
  local_128[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_78 + 0) = 10;
  puVar7 = (undefined4 *)(local_10);
  if (local_10 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar7) != puVar2; puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar6 = (uint)(local_8 - (int)local_10 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_10);
    if (0xfff < uVar6) {
      puVar7 = (undefined4 *)((undefined4 *)local_10[-1]);
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (uint)((int)local_10 + (-4 - (int)puVar7))) goto LAB_10608679;
    }
    thunk_FUN_1148a50e(puVar7,uVar6);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (undefined4 *)((undefined4 *)0x0);

  }
  piVar5 = (int *)(piStack_18);
  if (piStack_1c != (int *)0x0) {
    if (piStack_1c != (int *)(piStack_18)) {
      piVar8 = (int *)(piStack_1c + 1);
      do {
        *(unsigned char *)((char *)&local_78 + 0) = 0xd;
        ((SCStr *)((SCStr *)(piVar8 + 1)))->int_release();
        piVar8[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar8);
        *(unsigned char *)((char *)&local_78 + 0) = 0xe;
        if (piVar1 != (int *)0x0) {
          piVar8[-1] = (int)(0);
          *piVar8 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&local_78 + 0) = 10;
        piVar1 = (int *)(piVar8 + 2);
        piVar8 = (int *)(piVar8 + 3);
      } while (piVar1 != (int *)(piVar5));
    }
    uVar6 = (uint)(((iStack_14 - (int)piStack_1c) / 0xc) * 0xc);
    piVar5 = (int *)(piStack_1c);
    if (0xfff < uVar6) {
      piVar5 = (int *)((int *)piStack_1c[-1]);
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (uint)((int)piStack_1c + (-4 - (int)piVar5))) {
LAB_10608679:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar5,uVar6);
    piStack_1c = (int *)((int *)0x0);
    piStack_18 = (int *)((int *)0x0);
    iStack_14 = (int)(0);
  }
  local_24 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_a8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_78 + 0) = 0xf;
  ((SCStr *)((SCStr *)&local_38))->int_release();
  piVar5 = (int *)(local_3c);

  *(unsigned char *)((char *)&local_78 + 0) = 0x10;
  if (local_3c != (int *)0x0) {

    local_3c = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_c8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_78 + 0) = 0x11;
  ((SCStr *)((SCStr *)local_48))->int_release();
  piVar5 = (int *)(local_4c);
  local_48[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_78 + 0) = 0x12;
  if (local_4c != (int *)0x0) {

    local_4c = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char *)((char *)&local_78 + 0) = 0x13;
  ((SCStr *)((SCStr *)local_2c))->int_release();
  local_2c[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_e8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_78 + 0) = 0x14;
  ((SCStr *)((SCStr *)local_58))->int_release();
  piVar5 = (int *)(local_5c);
  local_58[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_78 + 0) = 0x15;
  if (local_5c != (int *)0x0) {

    local_5c = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char *)((char *)&local_78 + 0) = 0x16;
  ((SCStr *)((SCStr *)local_34))->int_release();
  local_34[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_108[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_78 + 0) = 0x17;
  ((SCStr *)((SCStr *)local_68))->int_release();
  piVar5 = (int *)(local_6c);
  local_68[0] = (undefined4)(0);
  local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(0x18)));
  if (local_6c != (int *)0x0) {

    local_6c = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }

  ((SCStr *)(local_88))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10608940; body size 1727 bytes.
#line 1 "ENTRY_10608940"

undefined4 __stdcall FUN_10608940(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined **local_194 [8];
  undefined **local_174 [8];
  undefined **local_154 [8];
  undefined **local_134 [8];
  undefined **local_114 [8];
  undefined **local_f4 [8];
  undefined1 local_d4 [12];
  undefined4 local_c8;
  int *local_c4;
  undefined4 local_c0 [2];
  undefined4 local_b8;
  int *local_b4;
  undefined4 local_b0 [2];
  undefined4 local_a8;
  int *local_a4;
  undefined4 local_a0 [2];
  undefined4 local_98;
  int *local_94;
  undefined4 local_90 [2];
  undefined4 local_88;
  int *local_84;
  undefined4 local_80;
  void *local_7c;
  undefined1 *puStack_78;
  undefined4 local_74;
  undefined4 local_70 [2];
  undefined4 local_68 [2];
  undefined1 *local_60 [3];
  int *local_54;
  int *local_50;
  undefined4 local_4c;
  int *local_48;
  undefined4 local_40;
  undefined4 local_3c [2];
  undefined4 local_34 [2];
  undefined **local_2c;
  undefined4 local_28;
  int *piStack_24;
  int *piStack_20;
  int iStack_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  undefined1 *local_c;
  int *local_8;


  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)local_70);
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(&local_8));
  piVar6 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  local_54 = (int *)(piVar6);
  if (piVar6 == (int *)0x0) {
    local_50 = (int *)((int *)0x0);
  }
  else {
    local_50 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
  }
  *(unsigned char *)((char *)&local_74 + 0) = 3;
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  *(unsigned char *)((char *)&local_74 + 0) = 2;
  thunk_FUN_10c5f1d0(piVar6);
  thunk_FUN_10c61010(local_60,local_3c,6,0,0);
  *(unsigned char *)((char *)&local_74 + 0) = 4;
  thunk_FUN_10c5f1d0(piVar6);
  puVar7 = (undefined1 *)(local_d4);
  thunk_FUN_105bebd0(puVar7);
  local_40 = (undefined4)(thunk_FUN_10e0f250(puVar7));
  uVar4 = (undefined4)(thunk_FUN_10c98710(&local_8));
  *(unsigned char *)((char *)&local_74 + 0) = 5;
  thunk_FUN_10c61ec0(&local_c,uVar4);
  *(unsigned char *)((char *)&local_74 + 0) = 8;
  ((SCStr *)((SCStr *)&local_8))->int_release();
  local_8 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_74 + 0) = 7;
  uVar4 = (undefined4)(thunk_FUN_10c5f450(local_3c,0x2c0f,&DAT_11882ff0));
  *(unsigned char *)((char *)&local_74 + 0) = 9;
  thunk_FUN_10ec0a20("leaveItWired");
  uVar10 = (undefined4)(2);
  *(unsigned char *)((char *)&local_74 + 0) = 10;
  thunk_FUN_10ecea60(uVar4);
  iVar5 = (int)(thunk_FUN_10ec7940(uVar10));
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char *)((char *)&local_74 + 0) = 0xb;
  uVar4 = (undefined4)(thunk_FUN_10c5f450((SCStr *)local_70,0x2c0e,&DAT_11882ff0));
  *(unsigned char *)((char *)&local_74 + 0) = 0xc;
  thunk_FUN_10ec0a20("continue");
  *(unsigned char *)((char *)&local_74 + 0) = 0xd;
  iVar5 = (int)(thunk_FUN_10ecea60(uVar4));
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char *)((char *)&local_74 + 0) = 0xe;
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (local_c != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(local_c);
  }
  uVar4 = (undefined4)(thunk_FUN_10c5f450(local_68,0x277d,&DAT_1188465c,puVar7));
  *(unsigned char *)((char *)&local_74 + 0) = 0xf;
  uVar10 = (undefined4)(thunk_FUN_10e0f500(&local_4c,1));
  *(unsigned char *)((char *)&local_74 + 0) = 0x10;
  thunk_FUN_10ec1c00("image");
  *(unsigned char *)((char *)&local_74 + 0) = 0x11;
  thunk_FUN_10ecbbd0(uVar10);
  iVar5 = (int)(thunk_FUN_10ecb9f0(uVar4));
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char *)((char *)&local_74 + 0) = 0x12;
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char *)((char *)&local_74 + 0) = 0x13;
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (local_60[0] != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(local_60[0]);
  }
  thunk_FUN_10c62d50(local_34,local_60,0x2c0d,&DAT_1188465c,puVar7);
  *(unsigned char *)((char *)&local_74 + 0) = 0x14;
  thunk_FUN_10ec1b40("header");
  *(unsigned char *)((char *)&local_74 + 0) = 0x15;
  iVar5 = (int)(thunk_FUN_10eced20(local_34));
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char *)((char *)&local_74 + 0) = 0x16;
  thunk_FUN_10ec1d40();
  *(unsigned char *)((char *)&local_74 + 0) = 0x17;
  iVar5 = (int)(thunk_FUN_1061c630(1));
  thunk_FUN_105f6290(iVar5 + 4);
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_24 = (int *)((int *)0x0);
  piStack_20 = (int *)((int *)0x0);
  iStack_1c = (int)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);
  local_14 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char *)((char *)&local_74 + 0) = 0x19;
  piVar6 = (int *)((int *)thunk_FUN_106050a0(local_f4));
  thunk_FUN_10eb41c0();
  uVar4 = (undefined4)(thunk_FUN_106052d0(local_194));
  *(unsigned char *)((char *)&local_74 + 0) = 0x1a;
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 8))(uVar4));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 8))(local_114));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 8))(local_134));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 8))(local_154));
  uVar4 = (undefined4)((**(code **)(*piVar6 + 8))(local_174));
  thunk_FUN_105f60e0(uVar4);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  puVar2 = (undefined4 *)(local_14);
  local_194[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_74 + 0) = 0x18;
  puVar9 = (undefined4 *)(local_18);
  if (local_18 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar9) != puVar2; puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar8 = (uint)(local_10 - (int)local_18 & 0xffffffe0);
    puVar9 = (undefined4 *)(local_18);
    if (0xfff < uVar8) {
      puVar9 = (undefined4 *)((undefined4 *)local_18[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)local_18 + (-4 - (int)puVar9))) goto LAB_10608d85;
    }
    thunk_FUN_1148a50e(puVar9,uVar8);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_14 = (undefined4 *)((undefined4 *)0x0);

  }
  piVar6 = (int *)(piStack_20);
  if (piStack_24 != (int *)0x0) {
    if (piStack_24 != (int *)(piStack_20)) {
      piVar3 = (int *)(piStack_24 + 1);
      do {
        *(unsigned char *)((char *)&local_74 + 0) = 0x1b;
        ((SCStr *)((SCStr *)(piVar3 + 1)))->int_release();
        piVar3[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar3);
        *(unsigned char *)((char *)&local_74 + 0) = 0x1c;
        if (piVar1 != (int *)0x0) {
          piVar3[-1] = (int)(0);
          *piVar3 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&local_74 + 0) = 0x18;
        piVar1 = (int *)(piVar3 + 2);
        piVar3 = (int *)(piVar3 + 3);
      } while (piVar1 != (int *)(piVar6));
    }
    uVar8 = (uint)(((iStack_1c - (int)piStack_24) / 0xc) * 0xc);
    piVar6 = (int *)(piStack_24);
    if (0xfff < uVar8) {
      piVar6 = (int *)((int *)piStack_24[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)piStack_24 + (-4 - (int)piVar6))) {
LAB_10608d85:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar6,uVar8);
    piStack_24 = (int *)((int *)0x0);
    piStack_20 = (int *)((int *)0x0);
    iStack_1c = (int)(0);
  }
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_f4[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_74 + 0) = 0x1d;
  ((SCStr *)((SCStr *)&local_80))->int_release();
  piVar6 = (int *)(local_84);

  *(unsigned char *)((char *)&local_74 + 0) = 0x1e;
  if (local_84 != (int *)0x0) {

    local_84 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_114[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_74 + 0) = 0x1f;
  ((SCStr *)((SCStr *)local_90))->int_release();
  piVar6 = (int *)(local_94);
  local_90[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_74 + 0) = 0x20;
  if (local_94 != (int *)0x0) {

    local_94 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_74 + 0) = 0x21;
  ((SCStr *)((SCStr *)local_34))->int_release();
  local_34[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_134[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_74 + 0) = 0x22;
  ((SCStr *)((SCStr *)local_a0))->int_release();
  piVar6 = (int *)(local_a4);
  local_a0[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_74 + 0) = 0x23;
  if (local_a4 != (int *)0x0) {

    local_a4 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(local_48);
  *(unsigned char *)((char *)&local_74 + 0) = 0x24;
  if (local_48 != (int *)0x0) {

    local_48 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_74 + 0) = 0x25;
  ((SCStr *)((SCStr *)local_68))->int_release();
  local_68[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_154[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_74 + 0) = 0x26;
  ((SCStr *)((SCStr *)local_b0))->int_release();
  piVar6 = (int *)(local_b4);
  local_b0[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_74 + 0) = 0x27;
  if (local_b4 != (int *)0x0) {

    local_b4 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_74 + 0) = 0x28;
  ((SCStr *)((SCStr *)local_70))->int_release();
  local_70[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_174[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_74 + 0) = 0x29;
  ((SCStr *)((SCStr *)local_c0))->int_release();
  piVar6 = (int *)(local_c4);
  local_c0[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_74 + 0) = 0x2a;
  if (local_c4 != (int *)0x0) {

    local_c4 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_74 + 0) = 0x2b;
  ((SCStr *)((SCStr *)local_3c))->int_release();
  local_3c[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_74 + 0) = 0x2c;
  ((SCStr *)((SCStr *)&local_c))->int_release();
  local_c = (undefined1 *)((undefined1 *)0x0);
  local_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_74 + 1)) << 8 | (uint)(0x2d)));
  ((SCStr *)((SCStr *)local_60))->int_release();
  local_60[0] = (undefined1 *)((undefined1 *)0x0);

  if (local_50 != (int *)0x0) {
    (**(code **)(*local_50 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 106091b0; body size 1670 bytes.
#line 1 "ENTRY_106091b0"

undefined4 __stdcall FUN_106091b0(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined **local_18c [8];
  undefined **local_16c [8];
  undefined **local_14c [8];
  undefined **local_12c [8];
  undefined **local_10c [8];
  undefined **local_ec [8];
  undefined1 local_cc [12];
  undefined4 local_c0;
  int *local_bc;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  int *local_ac;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  int *local_9c;
  undefined4 local_98 [2];
  undefined4 local_90;
  int *local_8c;
  undefined4 local_88;
  void *local_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  undefined1 local_78 [4];
  undefined4 local_74;
  int *local_70;
  undefined4 local_6c;
  undefined4 local_68 [2];
  undefined1 *local_60 [3];
  int *local_54;
  int *local_50;
  undefined4 local_4c;
  int *local_48;
  undefined4 local_40;
  undefined4 local_3c [2];
  undefined4 local_34 [2];
  undefined **local_2c;
  undefined4 local_28;
  int *piStack_24;
  int *piStack_20;
  int iStack_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  undefined1 *local_c;
  int *local_8;


  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)local_78);
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(&local_8));
  piVar6 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  local_54 = (int *)(piVar6);
  if (piVar6 == (int *)0x0) {
    local_50 = (int *)((int *)0x0);
  }
  else {
    local_50 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
  }
  *(unsigned char *)((char *)&local_7c + 0) = 3;
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 2;
  thunk_FUN_10c5f1d0(piVar6);
  thunk_FUN_10c61010(local_60,local_3c,6,0,0);
  *(unsigned char *)((char *)&local_7c + 0) = 4;
  thunk_FUN_10c5f1d0(piVar6);
  puVar7 = (undefined1 *)(local_cc);
  thunk_FUN_105bebd0(puVar7);
  local_40 = (undefined4)(thunk_FUN_10e0f250(puVar7));
  uVar4 = (undefined4)(thunk_FUN_10c98710(&local_8));
  *(unsigned char *)((char *)&local_7c + 0) = 5;
  thunk_FUN_10c61ec0(&local_c,uVar4);
  *(unsigned char *)((char *)&local_7c + 0) = 8;
  ((SCStr *)((SCStr *)&local_8))->int_release();
  local_8 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_7c + 0) = 7;
  uVar4 = (undefined4)(thunk_FUN_10c5f450(local_3c,0x2c0c,&DAT_11882ff0));
  *(unsigned char *)((char *)&local_7c + 0) = 9;
  thunk_FUN_10ec0a20("moreInfo");
  uVar10 = (undefined4)(2);
  *(unsigned char *)((char *)&local_7c + 0) = 10;
  thunk_FUN_10ecea60(uVar4);
  iVar5 = (int)(thunk_FUN_10ec7940(uVar10));
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0xb;
  iVar5 = (int)(thunk_FUN_10ec1a10("continue"));
  *(unsigned char *)((char *)&local_7c + 0) = 0xc;
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0xd;
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (local_c != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(local_c);
  }
  uVar4 = (undefined4)(thunk_FUN_10c5f450(local_68,0x277d,&DAT_1188465c,puVar7));
  *(unsigned char *)((char *)&local_7c + 0) = 0xe;
  uVar10 = (undefined4)(thunk_FUN_10e0f500(&local_4c,1));
  *(unsigned char *)((char *)&local_7c + 0) = 0xf;
  thunk_FUN_10ec1c00("image");
  *(unsigned char *)((char *)&local_7c + 0) = 0x10;
  thunk_FUN_10ecbbd0(uVar10);
  iVar5 = (int)(thunk_FUN_10ecb9f0(uVar4));
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0x11;
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char *)((char *)&local_7c + 0) = 0x12;
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (local_60[0] != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(local_60[0]);
  }
  thunk_FUN_10c62d50(local_34,local_60,0x2c0b,&DAT_1188465c,puVar7);
  *(unsigned char *)((char *)&local_7c + 0) = 0x13;
  thunk_FUN_10ec1b40("header");
  uVar4 = (undefined4)(1);
  *(unsigned char *)((char *)&local_7c + 0) = 0x14;
  thunk_FUN_10eced20(local_34);
  iVar5 = (int)(thunk_FUN_10ecd540(uVar4));
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0x15;
  thunk_FUN_10ec1d40();
  *(unsigned char *)((char *)&local_7c + 0) = 0x16;
  iVar5 = (int)(thunk_FUN_1061c630(1));
  thunk_FUN_105f6290(iVar5 + 4);
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_24 = (int *)((int *)0x0);
  piStack_20 = (int *)((int *)0x0);
  iStack_1c = (int)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);
  local_14 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char *)((char *)&local_7c + 0) = 0x18;
  piVar6 = (int *)((int *)thunk_FUN_106050a0(local_ec));
  thunk_FUN_10eb41c0();
  uVar4 = (undefined4)(thunk_FUN_106052d0(local_18c));
  *(unsigned char *)((char *)&local_7c + 0) = 0x19;
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 8))(uVar4));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 8))(local_10c));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 8))(local_12c));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 8))(local_14c));
  uVar4 = (undefined4)((**(code **)(*piVar6 + 8))(local_16c));
  thunk_FUN_105f60e0(uVar4);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  puVar2 = (undefined4 *)(local_14);
  local_18c[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x17;
  puVar9 = (undefined4 *)(local_18);
  if (local_18 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar9) != puVar2; puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar8 = (uint)(local_10 - (int)local_18 & 0xffffffe0);
    puVar9 = (undefined4 *)(local_18);
    if (0xfff < uVar8) {
      puVar9 = (undefined4 *)((undefined4 *)local_18[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)local_18 + (-4 - (int)puVar9))) goto LAB_106095d5;
    }
    thunk_FUN_1148a50e(puVar9,uVar8);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_14 = (undefined4 *)((undefined4 *)0x0);

  }
  piVar6 = (int *)(piStack_20);
  if (piStack_24 != (int *)0x0) {
    if (piStack_24 != (int *)(piStack_20)) {
      piVar3 = (int *)(piStack_24 + 1);
      do {
        *(unsigned char *)((char *)&local_7c + 0) = 0x1a;
        ((SCStr *)((SCStr *)(piVar3 + 1)))->int_release();
        piVar3[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar3);
        *(unsigned char *)((char *)&local_7c + 0) = 0x1b;
        if (piVar1 != (int *)0x0) {
          piVar3[-1] = (int)(0);
          *piVar3 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&local_7c + 0) = 0x17;
        piVar1 = (int *)(piVar3 + 2);
        piVar3 = (int *)(piVar3 + 3);
      } while (piVar1 != (int *)(piVar6));
    }
    uVar8 = (uint)(((iStack_1c - (int)piStack_24) / 0xc) * 0xc);
    piVar6 = (int *)(piStack_24);
    if (0xfff < uVar8) {
      piVar6 = (int *)((int *)piStack_24[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)piStack_24 + (-4 - (int)piVar6))) {
LAB_106095d5:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar6,uVar8);
    piStack_24 = (int *)((int *)0x0);
    piStack_20 = (int *)((int *)0x0);
    iStack_1c = (int)(0);
  }
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_ec[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x1c;
  ((SCStr *)((SCStr *)&local_6c))->int_release();
  piVar6 = (int *)(local_70);

  *(unsigned char *)((char *)&local_7c + 0) = 0x1d;
  if (local_70 != (int *)0x0) {

    local_70 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_10c[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x1e;
  ((SCStr *)((SCStr *)&local_88))->int_release();
  piVar6 = (int *)(local_8c);

  *(unsigned char *)((char *)&local_7c + 0) = 0x1f;
  if (local_8c != (int *)0x0) {

    local_8c = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 0x20;
  ((SCStr *)((SCStr *)local_34))->int_release();
  local_34[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_12c[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x21;
  ((SCStr *)((SCStr *)local_98))->int_release();
  piVar6 = (int *)(local_9c);
  local_98[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x22;
  if (local_9c != (int *)0x0) {

    local_9c = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(local_48);
  *(unsigned char *)((char *)&local_7c + 0) = 0x23;
  if (local_48 != (int *)0x0) {

    local_48 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 0x24;
  ((SCStr *)((SCStr *)local_68))->int_release();
  local_68[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_14c[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x25;
  ((SCStr *)((SCStr *)local_a8))->int_release();
  piVar6 = (int *)(local_ac);
  local_a8[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x26;
  if (local_ac != (int *)0x0) {

    local_ac = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_16c[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x27;
  ((SCStr *)((SCStr *)local_b8))->int_release();
  piVar6 = (int *)(local_bc);
  local_b8[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x28;
  if (local_bc != (int *)0x0) {

    local_bc = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 0x29;
  ((SCStr *)((SCStr *)local_3c))->int_release();
  local_3c[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x2a;
  ((SCStr *)((SCStr *)&local_c))->int_release();
  local_c = (undefined1 *)((undefined1 *)0x0);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(0x2b)));
  ((SCStr *)((SCStr *)local_60))->int_release();
  local_60[0] = (undefined1 *)((undefined1 *)0x0);

  if (local_50 != (int *)0x0) {
    (**(code **)(*local_50 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1060b510; body size 3122 bytes.
#line 1 "ENTRY_1060b510"

undefined4 __stdcall FUN_1060b510(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined **local_278 [8];
  undefined **local_258 [8];
  undefined **local_238 [8];
  undefined **local_218 [8];
  undefined **local_1f8 [8];
  undefined **local_1d8 [8];
  undefined **local_1b8 [8];
  undefined **local_198 [8];
  undefined **local_178 [8];
  undefined1 local_158 [8];
  undefined4 local_150 [2];
  undefined4 local_148 [3];
  undefined4 local_13c;
  int *local_138;
  undefined4 local_134 [2];
  undefined4 local_12c;
  int *local_128;
  undefined4 local_124 [2];
  undefined4 local_11c;
  int *local_118;
  undefined4 local_114 [2];
  undefined4 local_10c;
  int *local_108;
  undefined4 local_104 [2];
  undefined4 local_fc;
  int *local_f8;
  undefined4 local_f4 [2];
  undefined4 local_ec;
  int *local_e8;
  undefined4 local_e4 [2];
  undefined4 local_dc;
  int *local_d8;
  undefined4 local_d4 [2];
  undefined4 local_cc;
  int *local_c8;
  undefined4 local_c4;
  int *local_c0;
  int *local_bc;
  undefined4 local_b8;
  int *local_b4;
  undefined4 local_b0;
  int *local_ac;
  undefined4 local_a8;
  undefined1 *local_a0 [3];
  undefined4 local_94 [2];
  undefined4 local_8c [2];
  void *local_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  undefined4 local_78 [2];
  undefined **local_70;
  undefined4 local_6c;
  int *piStack_68;
  int *piStack_64;
  int iStack_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  int local_54;
  undefined **local_50;
  undefined4 local_4c;
  int *piStack_48;
  int *piStack_44;
  int iStack_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  int local_34;
  undefined **local_30;
  undefined4 local_2c;
  int *piStack_28;
  int *piStack_24;
  int iStack_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 local_10;
  undefined1 *local_c;
  int *local_8;


  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)local_78);
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(&local_8));
  piVar5 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  local_c0 = (int *)(piVar5);
  if (piVar5 == (int *)0x0) {
    local_bc = (int *)((int *)0x0);
  }
  else {
    local_bc = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
  }
  *(unsigned char *)((char *)&local_7c + 0) = 3;
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 2;
  thunk_FUN_10c5f1d0(piVar5);
  thunk_FUN_10c61010(local_a0,local_94,6,0,0);
  *(unsigned char *)((char *)&local_7c + 0) = 4;
  thunk_FUN_10c5f1d0(piVar5);
  puVar7 = (undefined1 *)(local_158);
  thunk_FUN_105bebd0(puVar7);
  local_8 = (int *)((int *)thunk_FUN_10e0f250(puVar7));
  uVar4 = (undefined4)(thunk_FUN_10c98710(&local_10));
  *(unsigned char *)((char *)&local_7c + 0) = 5;
  thunk_FUN_10c61ec0(&local_c,uVar4);
  *(unsigned char *)((char *)&local_7c + 0) = 8;
  ((SCStr *)((SCStr *)&local_10))->int_release();

  *(unsigned char *)((char *)&local_7c + 0) = 7;
  thunk_FUN_10eb41c0();
  piVar5 = (int *)((int *)thunk_FUN_10eace90());
  local_a8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_a8 + 1)) << 8 | (uint)(1 < (uint)((piVar5[1] - *piVar5) / 0x4c))));
  uVar4 = (undefined4)(thunk_FUN_10c5f450(local_94,0x20a6,&DAT_11882ff0));
  *(unsigned char *)((char *)&local_7c + 0) = 9;
  thunk_FUN_10ec0a20("needHelp");
  uVar10 = (undefined4)(2);
  *(unsigned char *)((char *)&local_7c + 0) = 10;
  thunk_FUN_10ecea60(uVar4);
  iVar6 = (int)(thunk_FUN_10ec7940(uVar10));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0xb;
  iVar6 = (int)(thunk_FUN_10ec1a10(&DAT_118bd270));
  *(unsigned char *)((char *)&local_7c + 0) = 0xc;
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0xd;
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (local_c != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(local_c);
  }
  uVar4 = (undefined4)(thunk_FUN_10c5f450(local_150,0x277d,&DAT_1188465c,puVar7));
  *(unsigned char *)((char *)&local_7c + 0) = 0xe;
  uVar10 = (undefined4)(thunk_FUN_10e0f500(&local_b8,1));
  *(unsigned char *)((char *)&local_7c + 0) = 0xf;
  thunk_FUN_10ec1c00("image");
  *(unsigned char *)((char *)&local_7c + 0) = 0x10;
  thunk_FUN_10ecbbd0(uVar10);
  iVar6 = (int)(thunk_FUN_10ecb9f0(uVar4));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0x11;
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char *)((char *)&local_7c + 0) = 0x12;
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (local_a0[0] != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(local_a0[0]);
  }
  thunk_FUN_10c62d50(local_8c,local_a0,0x2c07,&DAT_1188465c,puVar7);
  *(unsigned char *)((char *)&local_7c + 0) = 0x13;
  thunk_FUN_10ec1b40("header");
  uVar4 = (undefined4)(1);
  *(unsigned char *)((char *)&local_7c + 0) = 0x14;
  thunk_FUN_10eced20(local_8c);
  iVar6 = (int)(thunk_FUN_10ecd540(uVar4));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0x15;
  iVar6 = (int)(thunk_FUN_10ec1a10("differentProduct"));
  *(unsigned char *)((char *)&local_7c + 0) = 0x16;
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0x17;
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (local_c != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(local_c);
  }
  uVar4 = (undefined4)(thunk_FUN_10c5f450(local_148,0x277d,&DAT_1188465c,puVar7));
  *(unsigned char *)((char *)&local_7c + 0) = 0x18;
  uVar10 = (undefined4)(thunk_FUN_10e0f500(&local_b0,1));
  *(unsigned char *)((char *)&local_7c + 0) = 0x19;
  thunk_FUN_10ec1c00("image");
  *(unsigned char *)((char *)&local_7c + 0) = 0x1a;
  thunk_FUN_10ecbbd0(uVar10);
  iVar6 = (int)(thunk_FUN_10ecb9f0(uVar4));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0x1b;
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char *)((char *)&local_7c + 0) = 0x1c;
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (local_a0[0] != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(local_a0[0]);
  }
  thunk_FUN_10c62d50((SCStr *)local_78,local_a0,0x2c08,&DAT_1188465c,puVar7);
  *(unsigned char *)((char *)&local_7c + 0) = 0x1d;
  thunk_FUN_10ec1b40("header");
  uVar4 = (undefined4)(1);
  *(unsigned char *)((char *)&local_7c + 0) = 0x1e;
  thunk_FUN_10eced20((SCStr *)local_78);
  iVar6 = (int)(thunk_FUN_10ecd540(uVar4));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0x1f;
  thunk_FUN_10ec1d40();
  *(unsigned char *)((char *)&local_7c + 0) = 0x20;
  iVar6 = (int)(thunk_FUN_1061c630(1));
  thunk_FUN_105f6290(iVar6 + 4);
  local_70 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_68 = (int *)((int *)0x0);
  piStack_64 = (int *)((int *)0x0);
  iStack_60 = (int)(0);
  local_5c = (undefined4 *)((undefined4 *)0x0);
  local_58 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char *)((char *)&local_7c + 0) = 0x22;
  piVar5 = (int *)((int *)thunk_FUN_106050a0(local_1f8));
  local_8 = (int *)((int *)(**(code **)(*piVar5 + 8))(local_218));
  local_50 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_48 = (int *)((int *)0x0);
  piStack_44 = (int *)((int *)0x0);
  iStack_40 = (int)(0);
  local_3c = (undefined4 *)((undefined4 *)0x0);
  local_38 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char *)((char *)&local_7c + 0) = 0x23;
  piVar5 = (int *)((int *)thunk_FUN_106050a0(local_198));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 8))(local_1b8));
  local_30 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);
  local_1c = (undefined4 *)((undefined4 *)0x0);

  piStack_28 = (int *)((int *)0x0);
  piStack_24 = (int *)((int *)0x0);
  iStack_20 = (int)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char *)((char *)&local_7c + 0) = 0x24;
  piVar3 = (int *)((int *)thunk_FUN_106050a0(local_178));
  thunk_FUN_10eb41c0();
  uVar4 = (undefined4)(thunk_FUN_106052d0(local_278));
  *(unsigned char *)((char *)&local_7c + 0) = 0x25;
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 8))(uVar4));
  iVar6 = (int)(*piVar3);
  uVar4 = (undefined4)((**(code **)(*piVar5 + 8))(local_1d8));
  piVar5 = (int *)((int *)(**(code **)(iVar6 + 0xc))(local_a8,uVar4));
  iVar6 = (int)(*piVar5);
  uVar4 = (undefined4)((**(code **)(*local_8 + 8))(local_238));
  piVar5 = (int *)((int *)(**(code **)(iVar6 + 0x14))(uVar4));
  uVar4 = (undefined4)((**(code **)(*piVar5 + 8))(local_258));
  thunk_FUN_105f60e0(uVar4);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  puVar2 = (undefined4 *)(local_18);
  local_278[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x23;
  puVar9 = (undefined4 *)(local_1c);
  if (local_1c != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar9) != puVar2; puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar8 = (uint)(local_14 - (int)local_1c & 0xffffffe0);
    puVar9 = (undefined4 *)(local_1c);
    if (0xfff < uVar8) {
      puVar9 = (undefined4 *)((undefined4 *)local_1c[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)local_1c + (-4 - (int)puVar9))) goto LAB_1060bd55;
    }
    thunk_FUN_1148a50e(puVar9,uVar8);
    local_1c = (undefined4 *)((undefined4 *)0x0);
    local_18 = (undefined4 *)((undefined4 *)0x0);

  }
  piVar5 = (int *)(piStack_24);
  if (piStack_28 != (int *)0x0) {
    if (piStack_28 != (int *)(piStack_24)) {
      piVar3 = (int *)(piStack_28 + 1);
      do {
        *(unsigned char *)((char *)&local_7c + 0) = 0x26;
        ((SCStr *)((SCStr *)(piVar3 + 1)))->int_release();
        piVar3[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar3);
        *(unsigned char *)((char *)&local_7c + 0) = 0x27;
        if (piVar1 != (int *)0x0) {
          piVar3[-1] = (int)(0);
          *piVar3 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&local_7c + 0) = 0x23;
        piVar1 = (int *)(piVar3 + 2);
        piVar3 = (int *)(piVar3 + 3);
      } while (piVar1 != (int *)(piVar5));
    }
    uVar8 = (uint)(((iStack_20 - (int)piStack_28) / 0xc) * 0xc);
    piVar5 = (int *)(piStack_28);
    if (0xfff < uVar8) {
      piVar5 = (int *)((int *)piStack_28[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)piStack_28 + (-4 - (int)piVar5))) goto LAB_1060bd55;
    }
    thunk_FUN_1148a50e(piVar5,uVar8);
    piStack_28 = (int *)((int *)0x0);
    piStack_24 = (int *)((int *)0x0);
    iStack_20 = (int)(0);
  }
  puVar2 = (undefined4 *)(local_38);
  local_30 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x22;
  puVar9 = (undefined4 *)(local_3c);
  if (local_3c != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar9) != puVar2; puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar8 = (uint)(local_34 - (int)local_3c & 0xffffffe0);
    puVar9 = (undefined4 *)(local_3c);
    if (0xfff < uVar8) {
      puVar9 = (undefined4 *)((undefined4 *)local_3c[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)puVar9))) goto LAB_1060bd55;
    }
    thunk_FUN_1148a50e(puVar9,uVar8);
    local_3c = (undefined4 *)((undefined4 *)0x0);
    local_38 = (undefined4 *)((undefined4 *)0x0);

  }
  piVar5 = (int *)(piStack_44);
  if (piStack_48 != (int *)0x0) {
    if (piStack_48 != (int *)(piStack_44)) {
      piVar3 = (int *)(piStack_48 + 1);
      do {
        *(unsigned char *)((char *)&local_7c + 0) = 0x28;
        ((SCStr *)((SCStr *)(piVar3 + 1)))->int_release();
        piVar3[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar3);
        *(unsigned char *)((char *)&local_7c + 0) = 0x29;
        if (piVar1 != (int *)0x0) {
          piVar3[-1] = (int)(0);
          *piVar3 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&local_7c + 0) = 0x22;
        piVar1 = (int *)(piVar3 + 2);
        piVar3 = (int *)(piVar3 + 3);
      } while (piVar1 != (int *)(piVar5));
    }
    uVar8 = (uint)(((iStack_40 - (int)piStack_48) / 0xc) * 0xc);
    piVar5 = (int *)(piStack_48);
    if (0xfff < uVar8) {
      piVar5 = (int *)((int *)piStack_48[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)piStack_48 + (-4 - (int)piVar5))) goto LAB_1060bd55;
    }
    thunk_FUN_1148a50e(piVar5,uVar8);
    piStack_48 = (int *)((int *)0x0);
    piStack_44 = (int *)((int *)0x0);
    iStack_40 = (int)(0);
  }
  puVar2 = (undefined4 *)(local_58);
  local_50 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x21;
  puVar9 = (undefined4 *)(local_5c);
  if (local_5c != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar9) != puVar2; puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar8 = (uint)(local_54 - (int)local_5c & 0xffffffe0);
    puVar9 = (undefined4 *)(local_5c);
    if (0xfff < uVar8) {
      puVar9 = (undefined4 *)((undefined4 *)local_5c[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)local_5c + (-4 - (int)puVar9))) goto LAB_1060bd55;
    }
    thunk_FUN_1148a50e(puVar9,uVar8);
    local_5c = (undefined4 *)((undefined4 *)0x0);
    local_58 = (undefined4 *)((undefined4 *)0x0);

  }
  piVar5 = (int *)(piStack_64);
  if (piStack_68 != (int *)0x0) {
    if (piStack_68 != (int *)(piStack_64)) {
      piVar3 = (int *)(piStack_68 + 1);
      do {
        *(unsigned char *)((char *)&local_7c + 0) = 0x2a;
        ((SCStr *)((SCStr *)(piVar3 + 1)))->int_release();
        piVar3[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar3);
        *(unsigned char *)((char *)&local_7c + 0) = 0x2b;
        if (piVar1 != (int *)0x0) {
          piVar3[-1] = (int)(0);
          *piVar3 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&local_7c + 0) = 0x21;
        piVar1 = (int *)(piVar3 + 2);
        piVar3 = (int *)(piVar3 + 3);
      } while (piVar1 != (int *)(piVar5));
    }
    uVar8 = (uint)(((iStack_60 - (int)piStack_68) / 0xc) * 0xc);
    piVar5 = (int *)(piStack_68);
    if (0xfff < uVar8) {
      piVar5 = (int *)((int *)piStack_68[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)piStack_68 + (-4 - (int)piVar5))) {
LAB_1060bd55:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar5,uVar8);
    piStack_68 = (int *)((int *)0x0);
    piStack_64 = (int *)((int *)0x0);
    iStack_60 = (int)(0);
  }
  local_70 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_178[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x2c;
  ((SCStr *)((SCStr *)&local_c4))->int_release();
  piVar5 = (int *)(local_c8);

  *(unsigned char *)((char *)&local_7c + 0) = 0x2d;
  if (local_c8 != (int *)0x0) {

    local_c8 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_198[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x2e;
  ((SCStr *)((SCStr *)local_d4))->int_release();
  piVar5 = (int *)(local_d8);
  local_d4[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x2f;
  if (local_d8 != (int *)0x0) {

    local_d8 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 0x30;
  ((SCStr *)((SCStr *)local_78))->int_release();
  local_78[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_1b8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x31;
  ((SCStr *)((SCStr *)local_e4))->int_release();
  piVar5 = (int *)(local_e8);
  local_e4[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x32;
  if (local_e8 != (int *)0x0) {

    local_e8 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  piVar5 = (int *)(local_ac);
  *(unsigned char *)((char *)&local_7c + 0) = 0x33;
  if (local_ac != (int *)0x0) {

    local_ac = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 0x34;
  ((SCStr *)((SCStr *)local_148))->int_release();
  local_148[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_1d8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x35;
  ((SCStr *)((SCStr *)local_f4))->int_release();
  piVar5 = (int *)(local_f8);
  local_f4[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x36;
  if (local_f8 != (int *)0x0) {

    local_f8 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_1f8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x37;
  ((SCStr *)((SCStr *)local_104))->int_release();
  piVar5 = (int *)(local_108);
  local_104[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x38;
  if (local_108 != (int *)0x0) {

    local_108 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 0x39;
  ((SCStr *)((SCStr *)local_8c))->int_release();
  local_8c[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_218[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x3a;
  ((SCStr *)((SCStr *)local_114))->int_release();
  piVar5 = (int *)(local_118);
  local_114[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x3b;
  if (local_118 != (int *)0x0) {

    local_118 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  piVar5 = (int *)(local_b4);
  *(unsigned char *)((char *)&local_7c + 0) = 0x3c;
  if (local_b4 != (int *)0x0) {

    local_b4 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 0x3d;
  ((SCStr *)((SCStr *)local_150))->int_release();
  local_150[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_238[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x3e;
  ((SCStr *)((SCStr *)local_124))->int_release();
  piVar5 = (int *)(local_128);
  local_124[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x3f;
  if (local_128 != (int *)0x0) {

    local_128 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_258[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x40;
  ((SCStr *)((SCStr *)local_134))->int_release();
  piVar5 = (int *)(local_138);
  local_134[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x41;
  if (local_138 != (int *)0x0) {

    local_138 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 0x42;
  ((SCStr *)((SCStr *)local_94))->int_release();
  local_94[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x43;
  ((SCStr *)((SCStr *)&local_c))->int_release();
  local_c = (undefined1 *)((undefined1 *)0x0);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(0x44)));
  ((SCStr *)((SCStr *)local_a0))->int_release();
  local_a0[0] = (undefined1 *)((undefined1 *)0x0);

  if (local_bc != (int *)0x0) {
    (**(code **)(*local_bc + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


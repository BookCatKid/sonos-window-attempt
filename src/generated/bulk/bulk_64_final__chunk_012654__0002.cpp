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
extern int _difftime64(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern int _time64(...);
extern int createPropertyBag(...);
extern int createSCNullAsyncOperation(...);
extern int createSCStringArray(...);
extern int endsWith(...);
extern int getSCHousehold(...);
extern int getSingleton(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int memmove(...);
extern int op_lt(...);
extern int operator_new(...);
extern int substr(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101aa9f0(...);
extern int thunk_FUN_101b5540(...);
extern int thunk_FUN_101b5de0(...);
extern int thunk_FUN_101b94f0(...);
extern int thunk_FUN_101bb8a0(...);
extern int thunk_FUN_101cd1d0(...);
extern int thunk_FUN_101da390(...);
extern int thunk_FUN_101da4a0(...);
extern int thunk_FUN_10295a30(...);
extern int thunk_FUN_102a3ea0(...);
extern int thunk_FUN_102caa30(...);
extern int thunk_FUN_103021f0(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_1033cdf0(...);
extern int thunk_FUN_10342f40(...);
extern int thunk_FUN_10342f60(...);
extern int thunk_FUN_1034cfc0(...);
extern int thunk_FUN_10351370(...);
extern int thunk_FUN_1036e480(...);
extern int thunk_FUN_1055a290(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105a26b0(...);
extern int thunk_FUN_105a29f0(...);
extern int thunk_FUN_105a30b0(...);
extern int thunk_FUN_105ad8f0(...);
extern int thunk_FUN_105ad910(...);
extern int thunk_FUN_105b6d40(...);
extern int thunk_FUN_105bebd0(...);
extern int thunk_FUN_105bf780(...);
extern int thunk_FUN_105c12d0(...);
extern int thunk_FUN_105f5740(...);
extern int thunk_FUN_105f5920(...);
extern int thunk_FUN_105f5a00(...);
extern int thunk_FUN_105fd180(...);
extern int thunk_FUN_105feb30(...);
extern int thunk_FUN_10605020(...);
extern int thunk_FUN_106190a0(...);
extern int thunk_FUN_106243b0(...);
extern int thunk_FUN_106431c0(...);
extern int thunk_FUN_10648010(...);
extern int thunk_FUN_10648af0(...);
extern int thunk_FUN_1065a4d0(...);
extern int thunk_FUN_106ab850(...);
extern int thunk_FUN_106be860(...);
extern int thunk_FUN_106ce800(...);
extern int thunk_FUN_106d83f0(...);
extern int thunk_FUN_106da030(...);
extern int thunk_FUN_106da680(...);
extern int thunk_FUN_106dc530(...);
extern int thunk_FUN_106de0c0(...);
extern int thunk_FUN_106dfa00(...);
extern int thunk_FUN_10708df0(...);
extern int thunk_FUN_10709b20(...);
extern int thunk_FUN_107931b0(...);
extern int thunk_FUN_10793550(...);
extern int thunk_FUN_107d1d20(...);
extern int thunk_FUN_107d1fa0(...);
extern int thunk_FUN_10818140(...);
extern int thunk_FUN_10819ab0(...);
extern int thunk_FUN_108280a0(...);
extern int thunk_FUN_108288d0(...);
extern int thunk_FUN_1082aac0(...);
extern int thunk_FUN_1082d6b0(...);
extern int thunk_FUN_10833170(...);
extern int thunk_FUN_10837820(...);
extern int thunk_FUN_10838010(...);
extern int thunk_FUN_1083d1a0(...);
extern int thunk_FUN_10867e90(...);
extern int thunk_FUN_1086f2f0(...);
extern int thunk_FUN_1087eff0(...);
extern int thunk_FUN_10880e90(...);
extern int thunk_FUN_10882500(...);
extern int thunk_FUN_108836f0(...);
extern int thunk_FUN_1088f670(...);
extern int thunk_FUN_10891890(...);
extern int thunk_FUN_10894570(...);
extern int thunk_FUN_1089f490(...);
extern int thunk_FUN_108b47a0(...);
extern int thunk_FUN_108b5130(...);
extern int thunk_FUN_108b68c0(...);
extern int thunk_FUN_108b8b70(...);
extern int thunk_FUN_108bd500(...);
extern int thunk_FUN_108f8850(...);
extern int thunk_FUN_108f8af0(...);
extern int thunk_FUN_108fab30(...);
extern int thunk_FUN_108fb850(...);
extern int thunk_FUN_108fc3e0(...);
extern int thunk_FUN_10970540(...);
extern int thunk_FUN_10970a30(...);
extern int thunk_FUN_10972da0(...);
extern int thunk_FUN_10988b60(...);
extern int thunk_FUN_109892c0(...);
extern int thunk_FUN_1099d9d0(...);
extern int thunk_FUN_1099e5a0(...);
extern int thunk_FUN_109a46c0(...);
extern int thunk_FUN_109a6790(...);
extern int thunk_FUN_109a85f0(...);
extern int thunk_FUN_109f3c80(...);
extern int thunk_FUN_109f6bf0(...);
extern int thunk_FUN_10a0cd20(...);
extern int thunk_FUN_10a0d470(...);
extern int thunk_FUN_10a4dc00(...);
extern int thunk_FUN_10a504a0(...);
extern int thunk_FUN_10bfc8e0(...);
extern int thunk_FUN_10c2da80(...);
extern int thunk_FUN_10c2f5a0(...);
extern int thunk_FUN_10c5ed70(...);
extern int thunk_FUN_10c5f1d0(...);
extern int thunk_FUN_10c5f430(...);
extern int thunk_FUN_10c5f8a0(...);
extern int thunk_FUN_10c5fc80(...);
extern int thunk_FUN_10c62d50(...);
extern int thunk_FUN_10c94600(...);
extern int thunk_FUN_10c94860(...);
extern int thunk_FUN_10c95170(...);
extern int thunk_FUN_10c96100(...);
extern int thunk_FUN_10c96490(...);
extern int thunk_FUN_10c97140(...);
extern int thunk_FUN_10c97610(...);
extern int thunk_FUN_10c97630(...);
extern int thunk_FUN_10c98710(...);
extern int thunk_FUN_10c98c80(...);
extern int thunk_FUN_10c9a420(...);
extern int thunk_FUN_10c9a470(...);
extern int thunk_FUN_10c9ac30(...);
extern int thunk_FUN_10c9b220(...);
extern int thunk_FUN_10c9b2f0(...);
extern int thunk_FUN_10c9b4c0(...);
extern int thunk_FUN_10c9b9b0(...);
extern int thunk_FUN_10c9c070(...);
extern int thunk_FUN_10c9c0a0(...);
extern int thunk_FUN_10c9c0b0(...);
extern int thunk_FUN_10cb8420(...);
extern int thunk_FUN_10cf2f30(...);
extern int thunk_FUN_10cf34e0(...);
extern int thunk_FUN_10cf3630(...);
extern int thunk_FUN_10cf3780(...);
extern int thunk_FUN_10cf41d0(...);
extern int thunk_FUN_10cf5250(...);
extern int thunk_FUN_10d9e2b0(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10def450(...);
extern int thunk_FUN_10def490(...);
extern int thunk_FUN_10df0fb0(...);
extern int thunk_FUN_10df10f0(...);
extern int thunk_FUN_10df1730(...);
extern int thunk_FUN_10df2df0(...);
extern int thunk_FUN_10df54d0(...);
extern int thunk_FUN_10df5d10(...);
extern int thunk_FUN_10df6f00(...);
extern int thunk_FUN_10df9e30(...);
extern int thunk_FUN_10dfaea0(...);
extern int thunk_FUN_10dfb8f0(...);
extern int thunk_FUN_10dfba00(...);
extern int thunk_FUN_10dfbb10(...);
extern int thunk_FUN_10dfbbe0(...);
extern int thunk_FUN_10dfc5e0(...);
extern int thunk_FUN_10dfcab0(...);
extern int thunk_FUN_10dfcdc0(...);
extern int thunk_FUN_10dfd7b0(...);
extern int thunk_FUN_10dfda60(...);
extern int thunk_FUN_10e09780(...);
extern int thunk_FUN_10e111f0(...);
extern int thunk_FUN_10eaafe0(...);
extern int thunk_FUN_10eab1c0(...);
extern int thunk_FUN_10eac8b0(...);
extern int thunk_FUN_10eac8c0(...);
extern int thunk_FUN_10eacd20(...);
extern int thunk_FUN_10eacd40(...);
extern int thunk_FUN_10eacd60(...);
extern int thunk_FUN_10eacd70(...);
extern int thunk_FUN_10eacd80(...);
extern int thunk_FUN_10eacda0(...);
extern int thunk_FUN_10eace00(...);
extern int thunk_FUN_10eace20(...);
extern int thunk_FUN_10eace60(...);
extern int thunk_FUN_10eace70(...);
extern int thunk_FUN_10ead000(...);
extern int thunk_FUN_10ead100(...);
extern int thunk_FUN_10ead690(...);
extern int thunk_FUN_10ead910(...);
extern int thunk_FUN_10eadd60(...);
extern int thunk_FUN_10eadd90(...);
extern int thunk_FUN_10eae0a0(...);
extern int thunk_FUN_10eae0f0(...);
extern int thunk_FUN_10eae120(...);
extern int thunk_FUN_10eae150(...);
extern int thunk_FUN_10eb0c60(...);
extern int thunk_FUN_10eb0d90(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
extern int thunk_FUN_10eb64f0(...);
extern int thunk_FUN_10eb6cc0(...);
extern int thunk_FUN_10eba400(...);
extern int thunk_FUN_10eba5f0(...);
extern int thunk_FUN_10eba7e0(...);
extern int thunk_FUN_10ebb790(...);
extern int thunk_FUN_10ebb810(...);
extern int thunk_FUN_10ebb8e0(...);
extern int thunk_FUN_10ebba70(...);
extern int thunk_FUN_10ebbab0(...);
extern int thunk_FUN_10ebc060(...);
extern int thunk_FUN_10ebc110(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ebc1e0(...);
extern int thunk_FUN_10ed6430(...);
extern int thunk_FUN_10ee2ec0(...);
extern int thunk_FUN_10ee44b0(...);
extern int thunk_FUN_10ee4590(...);
extern int thunk_FUN_10ee48c0(...);
extern int thunk_FUN_10eeafc0(...);
extern int thunk_FUN_10eeb8b0(...);
extern int thunk_FUN_10f3bf40(...);
extern int thunk_FUN_10f3ca70(...);
extern int thunk_FUN_10f3cc50(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110978c0(...);
extern int thunk_FUN_110f8f90(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_1125cda0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b0c0(...);
extern int DAT_1186d2ee;
extern int DAT_1189dc98;
extern int DAT_118a1c50;
extern int DAT_118bb26c;
extern int DAT_118df208;
extern int DAT_12126b84;
extern int DAT_121a2fdc;
extern int DAT_121a30d4;
extern int DAT_121a30d8;
extern int DAT_121a30e0;
extern int DAT_121a3218;
extern int DAT_121a321c;
extern int DAT_121a326c;
extern int DAT_121a3270;
extern int DAT_121a3294;
extern int DAT_121a3298;
extern int DAT_121a32a0;
extern int DAT_121a32a4;
extern int DAT_121a32a8;
extern int DAT_121a32b0;
extern int DAT_121a32b4;
extern int DAT_121a32c0;
extern int DAT_121a336c;
extern int DAT_121a3384;
extern int DAT_121a3414;
extern int DAT_121a341c;
extern int DAT_121a34b4;
extern int DAT_121a34b8;
extern int DAT_121a3548;
extern int DAT_121a354c;
extern int DAT_121a35b0;
extern int DAT_121a35b4;
extern int DAT_121a35b8;
extern int DAT_121a35bc;
extern int DAT_121a35c4;
extern int DAT_121a35c8;
extern int DAT_121a35cc;
extern int DAT_121a35d0;
extern int DAT_121a35d4;
extern int DAT_121a35d8;
extern int DAT_121a35dc;
extern int DAT_121a35e0;
extern int DAT_121a35e4;
extern int DAT_121a3640;
extern int DAT_121a3644;
extern int DAT_121a3694;
extern int DAT_121a3698;
extern int DAT_121a369c;
extern int DAT_121a36a0;
extern int DAT_121a36a4;
extern int DAT_121a36a8;
extern int DAT_121a36b0;
extern int _DAT_118dad60;
extern int g_lSCObjCount;
extern int ghidra_vftable_RUpdateOpCallback;
extern int ghidra_vftable_RUpnpDPSetAutoplayRoomUUIDAIOOp;
extern int ghidra_vftable_RZPUpdateProgressCB;
extern int ghidra_vftable_SCBondingMemberSelectConfirmSpeakerMovePage;
extern int ghidra_vftable_SCBondingMemberSelectConfirmSpeakerMoveSecondPage;
extern int ghidra_vftable_SCBondingMemberSelectExitPage;
extern int ghidra_vftable_SCBondingMemberSelectFirstSurroundPage;
extern int ghidra_vftable_SCBondingMemberSelectIncompatiblePage;
extern int ghidra_vftable_SCBondingMemberSelectSecondSurroundPage;
extern int ghidra_vftable_SCBondingMemberSelectStereoPairPage;
extern int ghidra_vftable_SCBondingMemberSelectSubPage;
extern int ghidra_vftable_SCBondingMemberSelectSubPrimaryPage;
extern int ghidra_vftable_SCBondingMemberSelectSurroundPrimaryPage;
extern int ghidra_vftable_SCBondingMemberSelectWizard;
extern int ghidra_vftable_SCBusinessWelcomeIntroPage;
extern int ghidra_vftable_SCBusinessWelcomeLoginSubwiz;
extern int ghidra_vftable_SCBusinessWelcomeWizard;
extern int ghidra_vftable_SCChirpAuthenticationAuthFailedErrorPage;
extern int ghidra_vftable_SCChirpAuthenticationAuthRetryOrManualPinPage;
extern int ghidra_vftable_SCChirpAuthenticationAuthRetryPage;
extern int ghidra_vftable_SCChirpAuthenticationButtonPressFailedPage;
extern int ghidra_vftable_SCChirpAuthenticationChirpPinDetectionErrorPage;
extern int ghidra_vftable_SCChirpAuthenticationChirpPinDetectionRetryOrManualPinPage;
extern int ghidra_vftable_SCChirpAuthenticationChirpPinDetectionRetryPage;
extern int ghidra_vftable_SCChirpAuthenticationConnectingProductPage;
extern int ghidra_vftable_SCChirpAuthenticationListenChirpPage;
extern int ghidra_vftable_SCChirpAuthenticationPlayChimePage;
extern int ghidra_vftable_SCChirpAuthenticationReauthorizationPage;
extern int ghidra_vftable_SCChirpAuthenticationReceivingFailedPage;
extern int ghidra_vftable_SCChirpAuthenticationReceivingFailedRetryPage;
extern int ghidra_vftable_SCChirpAuthenticationWizard;
extern int ghidra_vftable_SCClientPinAuthenticationAuthRetryAgainPage;
extern int ghidra_vftable_SCClientPinAuthenticationAuthRetryPage;
extern int ghidra_vftable_SCClientPinAuthenticationButtonPressFailedPage;
extern int ghidra_vftable_SCClientPinAuthenticationButtonPressWaitingPage;
extern int ghidra_vftable_SCClientPinAuthenticationChimingButtonPressFailedPage;
extern int ghidra_vftable_SCClientPinAuthenticationChimingButtonPressWaitingPage;
extern int ghidra_vftable_SCClientPinAuthenticationConnectingProductPage;
extern int ghidra_vftable_SCClientPinAuthenticationIntroPage;
extern int ghidra_vftable_SCClientPinAuthenticationWizard;
extern int ghidra_vftable_SCConditionalElementTree;
extern int ghidra_vftable_SCConditionalElementTreeNoAppendInterface;
extern int ghidra_vftable_SCConnectRecoveryDevicePermissionsSubwiz;
extern int ghidra_vftable_SCConnectRecoveryIntroPage;
extern int ghidra_vftable_SCConnectRecoveryScanningPage;
extern int ghidra_vftable_SCConnectRecoveryWifiConfigPage;
extern int ghidra_vftable_SCConnectRecoveryWizard;
extern int ghidra_vftable_SCDevicePermissionsBluetoothAccessPermissionsPage;
extern int ghidra_vftable_SCDevicePermissionsBluetoothAccessPermissionsSettingsPage;
extern int ghidra_vftable_SCDevicePermissionsBluetoothPage;
extern int ghidra_vftable_SCDevicePermissionsICRLocationAccessPermissionsPage;
extern int ghidra_vftable_SCDevicePermissionsLocationPermissionsPage;
extern int ghidra_vftable_SCDevicePermissionsLocationPermissionsSettingsPage;
extern int ghidra_vftable_SCDevicePermissionsLocationPermissionsTryAgainPage;
extern int ghidra_vftable_SCDevicePermissionsLocationServicesPage;
extern int ghidra_vftable_SCDevicePermissionsMicrophonePermissionsPage;
extern int ghidra_vftable_SCDevicePermissionsMicrophonePermissionsSettingsPage;
extern int ghidra_vftable_SCDevicePermissionsNfcServicesPage;
extern int ghidra_vftable_SCDevicePermissionsWizard;
extern int ghidra_vftable_SCDisplayWizardActionDescriptor;
extern int ghidra_vftable_SCEthernetRemovalAskDevicePage;
extern int ghidra_vftable_SCEthernetRemovalCheckDevicePage;
extern int ghidra_vftable_SCEthernetRemovalInformDevicesPage;
extern int ghidra_vftable_SCEthernetRemovalMissingDevicesPage;
extern int ghidra_vftable_SCEthernetRemovalStillWiredPage;
extern int ghidra_vftable_SCEthernetRemovalSuccessfulPage;
extern int ghidra_vftable_SCEthernetRemovalUnplugDevicePage;
extern int ghidra_vftable_SCFirmwareUpdateErrorPage;
extern int ghidra_vftable_SCFirmwareUpdateIntroPage;
extern int ghidra_vftable_SCFirmwareUpdateUpdatingPage;
extern int ghidra_vftable_SCFirmwareUpdateWizard;
extern int ghidra_vftable_SCFixUnconfiguredAccountLoginSubwiz;
extern int ghidra_vftable_SCFixUnconfiguredAccountTransferSubwiz;
extern int ghidra_vftable_SCFixUnconfiguredConfirmRegistrationEmailPage;
extern int ghidra_vftable_SCFixUnconfiguredErrorPage;
extern int ghidra_vftable_SCFixUnconfiguredExistingEmailMatchPage;
extern int ghidra_vftable_SCFixUnconfiguredFatalVerificationErrorPage;
extern int ghidra_vftable_SCFixUnconfiguredFinishConfigurationPage;
extern int ghidra_vftable_SCFixUnconfiguredFirmwareUpdateSubwiz;
extern int ghidra_vftable_SCFixUnconfiguredHouseholdCustomerIDPage;
extern int ghidra_vftable_SCFixUnconfiguredInsecureTransferDisabledPage;
extern int ghidra_vftable_SCFixUnconfiguredIntroPage;
extern int ghidra_vftable_SCFixUnconfiguredLoginPage;
extern int ghidra_vftable_SCFixUnconfiguredLookUpV1CertPage;
extern int ghidra_vftable_SCFixUnconfiguredNamePortableSubwiz;
extern int ghidra_vftable_SCFixUnconfiguredOutroPage;
extern int ghidra_vftable_SCFixUnconfiguredProductPlacementSubwiz;
extern int ghidra_vftable_SCFixUnconfiguredRegisterProductSubwiz;
extern int ghidra_vftable_SCFixUnconfiguredRoomAllocationSubwiz;
extern int ghidra_vftable_SCFixUnconfiguredSecureAuthenticationSubwiz;
extern int ghidra_vftable_SCFixUnconfiguredSecureExistingPage;
extern int ghidra_vftable_SCFixUnconfiguredSystemIntroPage;
extern int ghidra_vftable_SCFixUnconfiguredUpdateCheckSubwiz;
extern int ghidra_vftable_SCFixUnconfiguredVanishedProductErrorPage;
extern int ghidra_vftable_SCGoogleAssistantPreviewIntroPage;
extern int ghidra_vftable_SCGoogleAssistantPreviewWizard;
extern int ghidra_vftable_SCGoogleAssistantSetupAuthPage;
extern int ghidra_vftable_SCGoogleAssistantSetupChimePage;
extern int ghidra_vftable_SCGoogleAssistantSetupErrorPage;
extern int ghidra_vftable_SCGoogleAssistantSetupIntroPage;
extern int ghidra_vftable_SCGoogleAssistantSetupMusicServicePage;
extern int ghidra_vftable_SCGoogleAssistantSetupRemoveAccountsPage;
extern int ghidra_vftable_SCGoogleAssistantSetupRetrieveAccountsPage;
extern int ghidra_vftable_SCGoogleAssistantSetupSuccessPage;
extern int ghidra_vftable_SCGoogleAssistantSetupTutorialPage;
extern int ghidra_vftable_SCGoogleAssistantSetupWaitingPage;
extern int ghidra_vftable_SCGoogleAssistantSetupWizard;
extern int ghidra_vftable_SCHouseholdSelectionIntroPage;
extern int ghidra_vftable_SCHouseholdSelectionJoinHouseholdSubwiz;
extern int ghidra_vftable_SCHouseholdSelectionSystemPage;
extern int ghidra_vftable_SCHouseholdSelectionSystemSearchPage;
extern int ghidra_vftable_SCHouseholdSelectionUnknownHouseholdPage;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIncompleteWirelessConnectWizard;
extern int ghidra_vftable_SCJoinExistingAutoJoinPage;
extern int ghidra_vftable_SCJoinExistingButtonPage;
extern int ghidra_vftable_SCJoinExistingConnectingPage;
extern int ghidra_vftable_SCJoinExistingNearbyHouseholdPage;
extern int ghidra_vftable_SCJoinExistingNoButtonPage;
extern int ghidra_vftable_SCJoinExistingNoConnectionPage;
extern int ghidra_vftable_SCJoinExistingNoHouseholdPage;
extern int ghidra_vftable_SCJoinExistingNotificationPage;
extern int ghidra_vftable_SCJoinExistingRouterChangedPage;
extern int ghidra_vftable_SCJoinExistingSearchPage;
extern int ghidra_vftable_SCJoinExistingSuccessPage;
extern int ghidra_vftable_SCJoinExistingWifiConfigSubwiz;
extern int ghidra_vftable_SCJoinExistingWizard;
extern int ghidra_vftable_SCJoinExistingWrongProductPage;
extern int ghidra_vftable_SCJoinPreparationConfirmFlowPage;
extern int ghidra_vftable_SCJoinPreparationConfirmFlowPageType;
extern int ghidra_vftable_SCJoinPreparationFetchAccountInfoPage;
extern int ghidra_vftable_SCJoinPreparationFetchAccountInfoPageType;
extern int ghidra_vftable_SCJoinPreparationGetHouseholdInfoFatalErrorPage;
extern int ghidra_vftable_SCJoinPreparationGetHouseholdInfoTimeoutPage;
extern int ghidra_vftable_SCJoinPreparationGetProtectedSettingsPage;
extern int ghidra_vftable_SCJoinPreparationLegacySonosnetAddWarningPage;
extern int ghidra_vftable_SCJoinPreparationLookupV1CertificatePage;
extern int ghidra_vftable_SCJoinPreparationWizard;
extern int ghidra_vftable_SCJoinProductAuthErrorPage;
extern int ghidra_vftable_SCJoinProductAuthErrorPageType;
extern int ghidra_vftable_SCJoinProductChangeNetworkPage;
extern int ghidra_vftable_SCJoinProductChangeNetworkPageType;
extern int ghidra_vftable_SCJoinProductDifferentNetworkWarningPage;
extern int ghidra_vftable_SCJoinProductDifferentNetworkWarningPageType;
extern int ghidra_vftable_SCJoinProductGetScanListPage;
extern int ghidra_vftable_SCJoinProductGetScanListPageType;
extern int ghidra_vftable_SCJoinProductJoinHouseholdPage;
extern int ghidra_vftable_SCJoinProductJoinHouseholdPageType;
extern int ghidra_vftable_SCJoinProductJoinHouseholdSuccessPage;
extern int ghidra_vftable_SCJoinProductJoinHouseholdSuccessPageType;
extern int ghidra_vftable_SCJoinProductJoinHouseholdWaitingPage;
extern int ghidra_vftable_SCJoinProductJoinHouseholdWaitingPageType;
extern int ghidra_vftable_SCJoinProductLegacyApAuthenticationSubwiz;
extern int ghidra_vftable_SCJoinProductLegacyApAuthenticationSubwizType;
extern int ghidra_vftable_SCJoinProductLegacyApJoinNetworkPage;
extern int ghidra_vftable_SCJoinProductLegacyApJoinNetworkPageType;
extern int ghidra_vftable_SCJoinProductLegacyApJoinNetworkSuccessPage;
extern int ghidra_vftable_SCJoinProductLegacyApJoinNetworkSuccessPageType;
extern int ghidra_vftable_SCJoinProductLegacyApNetworkCredentialsSubwiz;
extern int ghidra_vftable_SCJoinProductLegacyApVerifyProductPage;
extern int ghidra_vftable_SCJoinProductLegacyApVerifyProductPageType;
extern int ghidra_vftable_SCJoinProductNetworkCredentialsSubwiz;
extern int ghidra_vftable_SCJoinProductNetworkCredentialsSubwizType;
extern int ghidra_vftable_SCJoinProductRouterErrorPage;
extern int ghidra_vftable_SCJoinProductRouterErrorPageType;
extern int ghidra_vftable_SCJoinProductWizard;
extern int ghidra_vftable_SCLegacyAuthenticationButtonPressPage;
extern int ghidra_vftable_SCLegacyAuthenticationTimeoutPage;
extern int ghidra_vftable_SCLegacyAuthenticationTimeoutPageType;
extern int ghidra_vftable_SCLegacyAuthenticationVerifyProductPage;
extern int ghidra_vftable_SCLegacyAuthenticationWaitingPage;
extern int ghidra_vftable_SCLegacyAuthenticationWaitingPageType;
extern int ghidra_vftable_SCLegacyAuthenticationWizard;
extern int ghidra_vftable_SCLegacyTVSetupIntroPage;
extern int ghidra_vftable_SCLegacyTVSetupIntroPageType;
extern int ghidra_vftable_SCLegacyTVSetupOpticalAudioSetupPage;
extern int ghidra_vftable_SCLegacyTVSetupOpticalCheckPage;
extern int ghidra_vftable_SCLegacyTVSetupOpticalCheckPageType;
extern int ghidra_vftable_SCLegacyTVSetupRemoteControlSetupSubwiz;
extern int ghidra_vftable_SCLegacyTVSetupRemoteControlSetupSubwizType;
extern int ghidra_vftable_SCLegacyTVSetupTOSLinkAutoPlaySetPage;
extern int ghidra_vftable_SCLegacyTVSetupTOSLinkAutoPlaySetPageType;
extern int ghidra_vftable_SCLegacyTVSetupTOSLinkCheckingPage;
extern int ghidra_vftable_SCLegacyTVSetupTOSLinkCheckingPageType;
extern int ghidra_vftable_SCLegacyTVSetupTOSLinkConnectionErrorPage;
extern int ghidra_vftable_SCLegacyTVSetupTOSLinkConnectionErrorPageType;
extern int ghidra_vftable_SCLegacyTVSetupTOSLinkSilenceAutoPlaySetPage;
extern int ghidra_vftable_SCLegacyTVSetupTOSLinkSuccessPage;
extern int ghidra_vftable_SCLegacyTVSetupTOSLinkSuccessPageType;
extern int ghidra_vftable_SCLegacyTVSetupWizard;
extern int ghidra_vftable_SCManualPinAuthenticationAuthRetryPage;
extern int ghidra_vftable_SCManualPinAuthenticationButtonPressFailedPage;
extern int ghidra_vftable_SCManualPinAuthenticationButtonPressWaitingPage;
extern int ghidra_vftable_SCManualPinAuthenticationChimingButtonPressFailedPage;
extern int ghidra_vftable_SCManualPinAuthenticationChimingButtonPressWaitingPage;
extern int ghidra_vftable_SCManualPinAuthenticationConnectingProductPage;
extern int ghidra_vftable_SCManualPinAuthenticationIdentifyProductPage;
extern int ghidra_vftable_SCManualPinAuthenticationLocatePinPage;
extern int ghidra_vftable_SCManualPinAuthenticationLocatePinRetryPage;
extern int ghidra_vftable_SCManualPinAuthenticationPinInputPage;
extern int ghidra_vftable_SCManualPinAuthenticationRetryHandshakePage;
extern int ghidra_vftable_SCManualPinAuthenticationTimedOutAuthRetryPage;
extern int ghidra_vftable_SCManualPinAuthenticationWizard;
extern int ghidra_vftable_SCManualPinAuthenticationWrongPinAuthRetryPage;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCNewWizStateTypeFor;
extern int ghidra_vftable_SCOpPerformAction;
extern int ghidra_vftable_SCSubwizStateFor;
extern int ghidra_vftable_SCSwfObjHTListener;
extern int in_stack_00000018;
extern int in_stack_0000001c;
extern int in_stack_00000020;
extern int in_stack_00000024;
extern undefined1 LAB_107f709d[];
extern undefined1 LAB_10815f94[];
extern undefined1 LAB_1081618f[];
extern undefined1 LAB_1083b1ee[];
extern undefined1 LAB_1085092e[];
extern undefined1 LAB_1085184b[];
extern undefined1 LAB_10851b6c[];
extern undefined1 LAB_10851d9f[];
extern undefined1 LAB_10851f8c[];
extern undefined1 LAB_1085225c[];
extern undefined1 LAB_108529cd[];
extern undefined1 LAB_10867dbc[];
extern undefined1 LAB_1087ba9c[];
extern undefined1 LAB_1088ad1d[];
extern undefined1 LAB_10891a85[];
extern undefined1 LAB_10891adc[];
extern undefined1 LAB_108a929d[];
extern undefined1 LAB_108a98d2[];
extern undefined1 LAB_108a9eee[];
extern undefined1 LAB_108c408d[];
extern undefined1 LAB_108c639e[];
extern undefined1 LAB_108c70c6[];
extern undefined1 LAB_1160cf5d[];
extern undefined1 LAB_1160cfdd[];
extern undefined1 LAB_1160d0cd[];
extern undefined1 LAB_1160d7e9[];
extern undefined1 LAB_1160e217[];
extern undefined1 LAB_1160e267[];
extern undefined1 LAB_1160e2b7[];
extern undefined1 LAB_1160e307[];
extern undefined1 LAB_1160e357[];
extern undefined1 LAB_1160e3a7[];
extern undefined1 LAB_1160e3f7[];
extern undefined1 LAB_1160e447[];
extern undefined1 LAB_1160e4bb[];
extern undefined1 LAB_1160e507[];
extern undefined1 LAB_1160e570[];
extern undefined1 LAB_11610545[];
extern undefined1 LAB_1161074d[];
extern undefined1 LAB_1161078d[];
extern undefined1 LAB_11611750[];
extern undefined1 LAB_11611810[];
extern undefined1 LAB_11611970[];
extern undefined1 LAB_116119a0[];
extern undefined1 LAB_11611c57[];
extern undefined1 LAB_11611cd2[];
extern undefined1 LAB_11611d40[];
extern undefined1 LAB_11612b79[];
extern undefined1 LAB_11612fc0[];
extern undefined1 LAB_11612ff0[];
extern undefined1 LAB_116132d7[];
extern undefined1 LAB_11613327[];
extern undefined1 LAB_11613377[];
extern undefined1 LAB_116133c7[];
extern undefined1 LAB_11613417[];
extern undefined1 LAB_11613467[];
extern undefined1 LAB_116134b7[];
extern undefined1 LAB_11613507[];
extern undefined1 LAB_11613557[];
extern undefined1 LAB_116135a7[];
extern undefined1 LAB_116135f7[];
extern undefined1 LAB_11613647[];
extern undefined1 LAB_11613697[];
extern undefined1 LAB_11613724[];
extern undefined1 LAB_11614d55[];
extern undefined1 LAB_11614d9d[];
extern undefined1 LAB_116160b5[];
extern undefined1 LAB_11616265[];
extern undefined1 LAB_11616e29[];
extern undefined1 LAB_116170f0[];
extern undefined1 LAB_11617120[];
extern undefined1 LAB_11617407[];
extern undefined1 LAB_11617457[];
extern undefined1 LAB_116174a7[];
extern undefined1 LAB_116174f7[];
extern undefined1 LAB_11617547[];
extern undefined1 LAB_11617597[];
extern undefined1 LAB_116175e7[];
extern undefined1 LAB_11617637[];
extern undefined1 LAB_116176c4[];
extern undefined1 LAB_1161883d[];
extern undefined1 LAB_1161977d[];
extern undefined1 LAB_116199e0[];
extern undefined1 LAB_11619a40[];
extern undefined1 LAB_11619c27[];
extern undefined1 LAB_11619dc0[];
extern undefined1 LAB_11619df0[];
extern undefined1 LAB_1161a0d2[];
extern undefined1 LAB_1161a127[];
extern undefined1 LAB_1161a177[];
extern undefined1 LAB_1161a1c7[];
extern undefined1 LAB_1161a262[];
extern undefined1 LAB_1161a71d[];
extern undefined1 LAB_1161a765[];
extern undefined1 LAB_1161b4d9[];
extern undefined1 LAB_1161b880[];
extern undefined1 LAB_1161b8b0[];
extern undefined1 LAB_1161bb97[];
extern undefined1 LAB_1161bbe7[];
extern undefined1 LAB_1161bc37[];
extern undefined1 LAB_1161bc87[];
extern undefined1 LAB_1161bcd7[];
extern undefined1 LAB_1161bd27[];
extern undefined1 LAB_1161bd77[];
extern undefined1 LAB_1161bdc7[];
extern undefined1 LAB_1161be17[];
extern undefined1 LAB_1161be67[];
extern undefined1 LAB_1161beb7[];
extern undefined1 LAB_1161bf44[];
extern undefined1 LAB_1161d9fd[];
extern undefined1 LAB_1161e20b[];
extern undefined1 LAB_1161e42d[];
extern undefined1 LAB_1161e4db[];
extern undefined1 LAB_1161e9c0[];
extern undefined1 LAB_1161f3cd[];
extern undefined1 LAB_1161f417[];
extern undefined1 LAB_1161f467[];
extern undefined1 LAB_1161f4b7[];
extern undefined1 LAB_1161f507[];
extern undefined1 LAB_1161f55f[];
extern undefined1 LAB_1161f5bd[];
extern undefined1 LAB_1161f620[];
extern undefined1 LAB_116209ab[];
extern undefined1 LAB_11620b20[];
extern undefined1 LAB_11620e67[];
extern undefined1 LAB_11620eb7[];
extern undefined1 LAB_11620f07[];
extern undefined1 LAB_11620f86[];
extern undefined1 LAB_1162133d[];
extern undefined1 LAB_116217f4[];
extern undefined1 LAB_11621a0d[];
extern undefined1 LAB_11622600[];
extern undefined1 LAB_11622660[];
extern undefined1 LAB_116226c0[];
extern undefined1 LAB_11622720[];
extern undefined1 LAB_11622780[];
extern undefined1 LAB_116227e0[];
extern undefined1 LAB_11622840[];
extern undefined1 LAB_116228a0[];
extern undefined1 LAB_11622900[];
extern undefined1 LAB_11622960[];
extern undefined1 LAB_11622a20[];
extern undefined1 LAB_11622cc0[];
extern undefined1 LAB_11622f60[];
extern undefined1 LAB_11623080[];
extern undefined1 LAB_11623140[];
extern undefined1 LAB_11623200[];
extern undefined1 LAB_116232c0[];
extern undefined1 LAB_11623440[];
extern undefined1 LAB_11623c90[];
extern undefined1 LAB_11623cc0[];
extern undefined1 LAB_11623cf0[];
extern undefined1 LAB_11623d50[];
extern undefined1 LAB_11623db0[];
extern undefined1 LAB_11623de0[];
extern undefined1 LAB_11623e10[];
extern undefined1 LAB_11623e40[];
extern undefined1 LAB_11623e70[];
extern undefined1 LAB_11623ed0[];
extern undefined1 LAB_11623f30[];
extern undefined1 LAB_11623f60[];
extern undefined1 LAB_11623f90[];
extern undefined1 LAB_11623fc0[];
extern undefined1 LAB_11623ff0[];
extern undefined1 LAB_116243d2[];
extern undefined1 LAB_11624452[];
extern undefined1 LAB_116244a7[];
extern undefined1 LAB_116244f7[];
extern undefined1 LAB_11624547[];
extern undefined1 LAB_11624597[];
extern undefined1 LAB_116245e7[];
extern undefined1 LAB_11624662[];
extern undefined1 LAB_116246b7[];
extern undefined1 LAB_11624707[];
extern undefined1 LAB_11624757[];
extern undefined1 LAB_116247a7[];
extern undefined1 LAB_116247f7[];
extern undefined1 LAB_11624872[];
extern undefined1 LAB_116248c7[];
extern undefined1 LAB_11624942[];
extern undefined1 LAB_116249c2[];
extern undefined1 LAB_11624a42[];
extern undefined1 LAB_11624ac2[];
extern undefined1 LAB_11624b17[];
extern undefined1 LAB_11624b67[];
extern undefined1 LAB_11624be2[];
extern undefined1 LAB_11624c37[];
extern undefined1 LAB_11625a25[];
extern undefined1 LAB_11625c1d[];
extern undefined1 LAB_11625c8d[];
extern undefined1 LAB_11625cd5[];
extern undefined1 LAB_11625d1d[];
extern undefined1 LAB_11625d8d[];
extern undefined1 LAB_11625e98[];
extern undefined1 LAB_11626e8d[];
extern undefined1 LAB_1162734d[];
extern undefined1 LAB_116276dd[];
extern undefined1 LAB_11627725[];
extern undefined1 LAB_11627abb[];
extern undefined1 LAB_11627b80[];
extern undefined1 LAB_11627bb0[];
extern undefined1 LAB_11627e67[];
extern undefined1 LAB_11627ee6[];
extern undefined1 LAB_1162878d[];
extern undefined1 LAB_1162895b[];
extern undefined1 LAB_11628d00[];
extern undefined1 LAB_11628df0[];
extern undefined1 LAB_11628e20[];
extern undefined1 LAB_11628e50[];
extern undefined1 LAB_11628ee0[];
extern undefined1 LAB_11628f10[];
extern undefined1 LAB_11628f40[];
extern undefined1 LAB_116293c7[];
extern undefined1 LAB_11629417[];
extern undefined1 LAB_11629467[];
extern undefined1 LAB_116294b7[];
extern undefined1 LAB_11629507[];
extern undefined1 LAB_11629557[];
extern undefined1 LAB_116295af[];
extern undefined1 LAB_116295f7[];
extern undefined1 LAB_11629647[];
extern undefined1 LAB_11629697[];
extern undefined1 LAB_11629716[];
extern undefined1 LAB_11629ead[];
extern undefined1 LAB_1162aa2d[];
extern undefined1 LAB_1162b02d[];
extern undefined1 LAB_1162b06d[];
extern undefined1 LAB_1162b2b0[];
extern undefined1 LAB_1162b2ed[];
extern undefined1 LAB_1162b32d[];
extern undefined1 LAB_1162b3f0[];
extern undefined1 LAB_1162bb97[];
extern undefined1 LAB_1162bc12[];
extern undefined1 LAB_1162bc67[];
extern undefined1 LAB_1162bcb7[];
extern undefined1 LAB_1162bd07[];
extern undefined1 LAB_1162c57d[];
extern undefined1 LAB_1162cca9[];
extern undefined1 LAB_1162cd20[];
extern undefined1 LAB_1162cd50[];
extern undefined1 LAB_1162d044[];
extern undefined1 LAB_1162d670[];
extern undefined1 LAB_1162daf0[];
extern undefined1 LAB_1162e080[];
extern undefined1 LAB_1162e120[];
extern undefined1 LAB_1162e150[];
extern undefined1 LAB_1162e522[];
extern undefined1 LAB_1162e577[];
extern undefined1 LAB_1162e5c7[];
extern undefined1 LAB_1162e617[];
extern undefined1 LAB_1162e667[];
extern undefined1 LAB_1162e6b7[];
extern undefined1 LAB_1162e707[];
extern undefined1 LAB_1162e757[];
extern undefined1 LAB_1162e7a7[];
extern undefined1 LAB_1162e7f7[];
extern undefined1 LAB_1162e847[];
extern undefined1 LAB_1162e897[];
extern undefined1 LAB_1162e912[];
extern undefined1 LAB_1162e967[];
extern undefined1 LAB_1162e9f4[];
extern undefined1 LAB_1162f735[];
extern undefined1 LAB_116303ad[];
extern undefined1 LAB_11630735[];
extern undefined1 LAB_11630829[];
extern undefined1 LAB_116308bd[];
extern undefined1 LAB_1163091e[];
extern undefined1 LAB_1163097e[];
extern undefined1 LAB_11630bbe[];
extern undefined1 LAB_11630c1e[];
extern undefined1 LAB_11630e59[];
extern undefined1 LAB_116310d0[];
extern undefined1 LAB_11631100[];
extern undefined1 LAB_11631130[];
extern undefined1 LAB_11631160[];
extern undefined1 LAB_11631607[];
extern undefined1 LAB_11631657[];
extern undefined1 LAB_116316a7[];
extern undefined1 LAB_116316f7[];
extern undefined1 LAB_11631747[];
extern undefined1 LAB_11631797[];
extern undefined1 LAB_116317e7[];
extern undefined1 LAB_11631855[];
extern undefined1 LAB_116318f4[];
extern undefined1 LAB_11631ddd[];
extern undefined1 LAB_11632bcd[];
extern undefined1 LAB_11632cb5[];
extern undefined1 LAB_11632d1d[];
extern undefined1 LAB_11632e4d[];
extern undefined1 LAB_11632fad[];
extern undefined1 LAB_1163300e[];
extern undefined1 LAB_1163306e[];
extern undefined1 LAB_116330ce[];
extern undefined1 LAB_1163312e[];
extern undefined1 LAB_1163318e[];
extern undefined1 LAB_116331ee[];
extern undefined1 LAB_1163324e[];
extern undefined1 LAB_116332ae[];
extern undefined1 LAB_1163330e[];
extern undefined1 LAB_1163336e[];
extern undefined1 LAB_1163342e[];
extern undefined1 LAB_1163348e[];
extern undefined1 LAB_116334ee[];
extern undefined1 LAB_11633550[];
extern undefined1 LAB_116335b0[];
extern undefined1 LAB_1163360e[];
extern undefined1 LAB_1163366e[];
extern undefined1 LAB_116336ce[];
extern undefined1 LAB_1163372e[];
extern undefined1 LAB_1163376d[];
extern undefined1 LAB_116337ce[];
extern undefined1 LAB_1163382e[];
extern undefined1 LAB_1163388e[];
extern undefined1 LAB_116338f0[];
extern undefined1 LAB_1163394e[];
extern undefined1 LAB_116339ae[];
extern undefined1 LAB_11633a0e[];
extern undefined1 LAB_11633ace[];
extern undefined1 LAB_11633b2e[];
extern undefined1 LAB_11633b8e[];
extern undefined1 LAB_11633bf7[];
extern undefined1 LAB_11634090[];
extern undefined1 LAB_116340c0[];
extern undefined1 LAB_11634120[];
extern undefined1 LAB_11634150[];
extern undefined1 LAB_11634180[];
extern undefined1 LAB_116341b0[];
extern undefined1 LAB_116341e0[];
extern undefined1 LAB_11634210[];
extern undefined1 LAB_11634240[];
extern undefined1 LAB_11634270[];
extern undefined1 LAB_116342a0[];
extern undefined1 LAB_116342d0[];
extern undefined1 LAB_11634602[];
extern undefined1 LAB_11634782[];
extern undefined1 LAB_116347f0[];
extern undefined1 LAB_11634837[];
extern undefined1 LAB_11634887[];
extern undefined1 LAB_116348d7[];
extern undefined1 LAB_11634927[];
extern undefined1 LAB_1163497f[];
extern undefined1 LAB_116349c7[];
extern undefined1 LAB_11634a17[];
extern undefined1 LAB_11634a92[];
extern undefined1 LAB_11634ae7[];
extern undefined1 LAB_11634b37[];
extern undefined1 LAB_11634b87[];
extern undefined1 LAB_11634bd7[];
extern undefined1 LAB_11634c27[];
extern undefined1 LAB_11634c77[];
extern undefined1 LAB_11634d12[];
extern undefined1 LAB_11635085[];
extern undefined1 LAB_116350e5[];
extern undefined1 LAB_1163538d[];
extern undefined1 LAB_1163548d[];
extern undefined1 LAB_116355ed[];
extern undefined1 LAB_116356ad[];
extern undefined1 LAB_116357ad[];
extern undefined1 LAB_11636725[];
extern undefined1 LAB_116368cd[];
extern undefined1 LAB_116369bd[];
extern undefined1 LAB_11636b55[];
extern undefined1 LAB_11636ef5[];
extern undefined1 LAB_1163703d[];
extern undefined1 LAB_11637095[];
extern undefined1 LAB_1163719e[];
extern undefined1 LAB_1163725e[];
extern undefined1 LAB_1163731e[];
extern undefined1 LAB_116373de[];
extern undefined1 LAB_11637439[];
extern undefined1 LAB_116375d0[];
extern undefined1 LAB_11637600[];
extern undefined1 LAB_11637630[];
extern undefined1 LAB_11637660[];
extern undefined1 LAB_11637690[];
extern undefined1 LAB_116376c0[];
extern undefined1 LAB_11637a57[];
extern undefined1 LAB_11637aa7[];
extern undefined1 LAB_11637af7[];
extern undefined1 LAB_11637b47[];
extern undefined1 LAB_11637bb0[];
extern undefined1 LAB_11637c34[];
extern undefined1 LAB_116380b5[];
extern undefined1 LAB_1163895d[];
extern undefined1 LAB_11638ade[];
extern undefined1 LAB_11638b3e[];
extern undefined1 LAB_11638b9e[];
extern undefined1 LAB_11638bfe[];
extern undefined1 LAB_11638c5e[];
extern undefined1 LAB_11638cbe[];
extern undefined1 LAB_11638d7e[];
extern undefined1 LAB_11638de0[];
extern undefined1 LAB_11638e3e[];
extern undefined1 LAB_11638e9e[];
extern undefined1 LAB_11638f00[];
extern undefined1 LAB_11638f5e[];
extern undefined1 LAB_11638fbe[];
extern undefined1 LAB_1163901e[];
extern undefined1 LAB_1163907e[];
extern undefined1 LAB_1163913e[];
extern undefined1 LAB_11639400[];
extern undefined1 LAB_11639430[];
extern undefined1 LAB_11639460[];
extern undefined1 LAB_11639747[];
extern undefined1 LAB_11639797[];
extern undefined1 LAB_11639812[];
extern undefined1 LAB_11639867[];
extern undefined1 LAB_116398b7[];
extern undefined1 LAB_11639907[];
extern undefined1 LAB_11639957[];
extern undefined1 LAB_116399a7[];
extern undefined1 LAB_11639a10[];
extern undefined1 LAB_1163a335[];
extern undefined1 LAB_1163a805[];
extern undefined1 LAB_1163a86f[];
extern undefined1 LAB_1163a9ed[];
extern undefined1 LAB_1163aa5e[];
extern undefined1 LAB_1163ab95[];
extern undefined1 LAB_1163b40d[];
extern undefined1 LAB_1163b589[];
extern undefined1 LAB_1163ba30[];
extern undefined1 LAB_1163ba60[];
extern undefined1 LAB_1163ba90[];
extern undefined1 LAB_1163bac0[];
extern undefined1 LAB_1163bde7[];
extern undefined1 LAB_1163be37[];
extern undefined1 LAB_1163be87[];
extern undefined1 LAB_1163bed7[];
extern undefined1 LAB_1163bf27[];
extern undefined1 LAB_1163bf77[];
extern undefined1 LAB_1163bfc7[];
extern undefined1 LAB_1163c017[];
extern undefined1 LAB_1163c067[];
extern undefined1 LAB_1163c0bf[];
extern undefined1 LAB_1163c107[];
extern undefined1 LAB_1163c157[];
extern undefined1 LAB_1163c1a7[];
extern undefined1 LAB_1163c234[];
extern undefined1 LAB_1163d73d[];
extern int *stack0x00000004;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std {}
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int getSCHousehold(...); int getSingleton(...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int endsWith(...); int int_addref(...); int int_allocRep(...); int int_release(...); int op_lt(...); int substr(...); };
namespace std { template<class...> struct _Parallelism_allocator { char _pad; _Parallelism_allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct allocator { char _pad; allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct greater { char _pad; greater(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct priority_queue { char _pad; priority_queue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct vector { char _pad; vector(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
typedef void *BLE;
typedef void *CHN;
typedef void *DOWNLOADING;
typedef void *FLASHING;
typedef void *HELLO;
typedef void *REBOOTING;
typedef void *WAC;
typedef void *WARNING;
struct Base { char _pad; Base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DeviceProperties { char _pad; DeviceProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Different { char _pad; Different(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FID_conflict__Tidy { char _pad; FID_conflict__Tidy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Library { char _pad; Library(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Matches { char _pad; Matches(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Multiple { char _pad; Multiple(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Names { char _pad; Names(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct OnlineUpdateSetup { char _pad; OnlineUpdateSetup(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Optical { char _pad; Optical(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Page { char _pad; Page(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Product { char _pad; Product(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Progress { char _pad; Progress(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Release { char _pad; Release(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RoomUUID { char _pad; RoomUUID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Router { char _pad; Router(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIHapticDelegate { char _pad; SCIHapticDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIWifiDelegate { char _pad; SCIWifiDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCJoinPreparationConfirmFlowPage { char _pad; SCJoinPreparationConfirmFlowPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCJoinPreparationFetchAccountInfoPage { char _pad; SCJoinPreparationFetchAccountInfoPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCJoinProductAuthErrorPage { char _pad; SCJoinProductAuthErrorPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCJoinProductChangeNetworkPage { char _pad; SCJoinProductChangeNetworkPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCJoinProductDifferentNetworkWarningPage { char _pad; SCJoinProductDifferentNetworkWarningPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCJoinProductGetScanListPage { char _pad; SCJoinProductGetScanListPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCJoinProductJoinHouseholdPage { char _pad; SCJoinProductJoinHouseholdPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCJoinProductJoinHouseholdSuccessPage { char _pad; SCJoinProductJoinHouseholdSuccessPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCJoinProductJoinHouseholdWaitingPage { char _pad; SCJoinProductJoinHouseholdWaitingPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCJoinProductLegacyApAuthenticationSubwiz { char _pad; SCJoinProductLegacyApAuthenticationSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCJoinProductLegacyApJoinNetworkPage { char _pad; SCJoinProductLegacyApJoinNetworkPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCJoinProductLegacyApJoinNetworkSuccessPage { char _pad; SCJoinProductLegacyApJoinNetworkSuccessPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCJoinProductLegacyApVerifyProductPage { char _pad; SCJoinProductLegacyApVerifyProductPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCJoinProductNetworkCredentialsSubwiz { char _pad; SCJoinProductNetworkCredentialsSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCJoinProductRouterErrorPage { char _pad; SCJoinProductRouterErrorPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLegacyAuthenticationTimeoutPage { char _pad; SCLegacyAuthenticationTimeoutPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLegacyAuthenticationWaitingPage { char _pad; SCLegacyAuthenticationWaitingPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLegacyTVSetupIntroPage { char _pad; SCLegacyTVSetupIntroPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLegacyTVSetupOpticalCheckPage { char _pad; SCLegacyTVSetupOpticalCheckPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLegacyTVSetupRemoteControlSetupSubwiz { char _pad; SCLegacyTVSetupRemoteControlSetupSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLegacyTVSetupTOSLinkAutoPlaySetPage { char _pad; SCLegacyTVSetupTOSLinkAutoPlaySetPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLegacyTVSetupTOSLinkCheckingPage { char _pad; SCLegacyTVSetupTOSLinkCheckingPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLegacyTVSetupTOSLinkConnectionErrorPage { char _pad; SCLegacyTVSetupTOSLinkConnectionErrorPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLegacyTVSetupTOSLinkSuccessPage { char _pad; SCLegacyTVSetupTOSLinkSuccessPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetAutoplayRoomUUID { char _pad; SetAutoplayRoomUUID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SonosNet { char _pad; SonosNet(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Source { char _pad; Source(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Studio { char _pad; Studio(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subwiz { char _pad; Subwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UPnP { char _pad; UPnP(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Update { char _pad; Update(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Visual { char _pad; Visual(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct With { char _pad; With(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; void __thiscall FUN_107cc720(undefined4 param_2,undefined4 param_3,undefined4 param_4); void __thiscall FUN_107cc8d0(int param_2,int param_3,int param_4); void __thiscall FUN_107cc9c0(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 __thiscall FUN_107ccce0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6); undefined4 * __thiscall FUN_107ce440(undefined4 param_2); undefined4 * __thiscall FUN_107ce7e0(undefined4 param_2); undefined4 * __thiscall FUN_107cffb0(byte param_2); undefined4 * __thiscall FUN_107d0470(byte param_2); undefined4 * __thiscall FUN_107d0650(byte param_2); undefined4 * __thiscall FUN_107d0fe0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107d10f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107d11f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107d12d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107d1410(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107d14f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107d1630(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107d1760(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107d1890(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107d19e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107d1b10(undefined4 param_2,undefined4 param_3,undefined4 param_4); void __thiscall FUN_107e53d0(int *param_2); undefined4 * __thiscall FUN_107e6390(undefined4 param_2); undefined4 * __thiscall FUN_107e6600(undefined4 param_2); int * __thiscall FUN_107e6cb0(int *param_2); undefined4 * __thiscall FUN_107e6dd0(byte param_2); undefined4 * __thiscall FUN_107e6e90(byte param_2); undefined4 * __thiscall FUN_107e6ef0(byte param_2); undefined4 * __thiscall FUN_107e7000(byte param_2); undefined4 * __thiscall FUN_107e7130(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107e7220(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107e7380(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_107eace0(undefined4 param_2); undefined4 * __thiscall FUN_107ec480(byte param_2); undefined4 * __thiscall FUN_107ec750(byte param_2); undefined4 * __thiscall FUN_107ec7f0(byte param_2); undefined4 * __thiscall FUN_107ec890(byte param_2); undefined4 * __thiscall FUN_107ec930(byte param_2); undefined4 * __thiscall FUN_107ec9d0(byte param_2); undefined4 * __thiscall FUN_107eca70(byte param_2); undefined4 * __thiscall FUN_107ecb10(byte param_2); undefined4 * __thiscall FUN_107ecbb0(byte param_2); undefined4 * __thiscall FUN_107ecc50(byte param_2); undefined4 * __thiscall FUN_107eccf0(byte param_2); undefined4 * __thiscall FUN_107ecd90(byte param_2); undefined4 * __thiscall FUN_107ece30(byte param_2); undefined4 * __thiscall FUN_107eced0(byte param_2); int __thiscall FUN_107ecf70(byte param_2); undefined4 * __thiscall FUN_107ed1c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107ed2a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107ed380(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107ed460(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107ed540(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107ed620(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107ed700(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107ed7e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107ed8c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107ed9a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107eda80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107edb60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107edc40(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_107edd20(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_108023f0(undefined4 param_2); undefined4 * __thiscall FUN_108032f0(byte param_2); undefined4 * __thiscall FUN_108034d0(byte param_2); undefined4 * __thiscall FUN_10803570(byte param_2); undefined4 * __thiscall FUN_10803610(byte param_2); undefined4 * __thiscall FUN_108036b0(byte param_2); undefined4 * __thiscall FUN_10803750(byte param_2); undefined4 * __thiscall FUN_108037f0(byte param_2); undefined4 * __thiscall FUN_10803890(byte param_2); undefined4 * __thiscall FUN_10803930(byte param_2); int __thiscall FUN_108039d0(byte param_2); undefined4 * __thiscall FUN_10803bc0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10803ca0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10803d80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10803e60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10803f40(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10804020(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10804100(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108041e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108042c0(undefined4 param_2,undefined4 param_3,undefined4 param_4); void __thiscall FUN_10811750(int *param_2); undefined4 * __thiscall FUN_10812030(undefined4 param_2); undefined4 * __thiscall FUN_10812140(undefined4 param_2); undefined4 * __thiscall FUN_10812740(undefined4 param_2); undefined4 * __thiscall FUN_10813110(byte param_2); undefined4 * __thiscall FUN_10813230(byte param_2); undefined4 * __thiscall FUN_10813290(byte param_2); undefined4 * __thiscall FUN_10813330(byte param_2); undefined4 * __thiscall FUN_108133d0(byte param_2); undefined4 * __thiscall FUN_10813470(byte param_2); int __thiscall FUN_10813510(byte param_2); undefined4 * __thiscall FUN_108136f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10813850(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10813930(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10813a10(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10813af0(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 __thiscall FUN_10815df0(undefined4 param_2); undefined4 * __thiscall FUN_10819ab0(undefined4 param_2); undefined4 * __thiscall FUN_1081af40(byte param_2); undefined4 * __thiscall FUN_1081b1b0(byte param_2); undefined4 * __thiscall FUN_1081b250(byte param_2); undefined4 * __thiscall FUN_1081b2f0(byte param_2); undefined4 * __thiscall FUN_1081b390(byte param_2); undefined4 * __thiscall FUN_1081b430(byte param_2); undefined4 * __thiscall FUN_1081b4d0(byte param_2); undefined4 * __thiscall FUN_1081b570(byte param_2); undefined4 * __thiscall FUN_1081b610(byte param_2); undefined4 * __thiscall FUN_1081b6b0(byte param_2); undefined4 * __thiscall FUN_1081b750(byte param_2); undefined4 * __thiscall FUN_1081b7f0(byte param_2); int __thiscall FUN_1081b890(byte param_2); undefined4 * __thiscall FUN_1081bbe0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1081bcc0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1081bda0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1081be80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1081bf60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1081c040(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1081c120(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1081c200(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1081c2e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1081c3c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1081c4a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1081c580(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_1082a010(undefined4 param_2); undefined4 * __thiscall FUN_1082a750(undefined4 param_2); undefined4 * __thiscall FUN_1082a900(undefined4 param_2); undefined4 * __thiscall FUN_1082c140(byte param_2); undefined4 * __thiscall FUN_1082c520(byte param_2); undefined4 * __thiscall FUN_1082c5d0(byte param_2); undefined4 * __thiscall FUN_1082c670(byte param_2); undefined4 * __thiscall FUN_1082c710(byte param_2); void __thiscall FUN_1082cb40(int param_2,int param_3,int param_4); undefined4 * __thiscall FUN_1082fb70(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1082fc70(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1082fd80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1082fe60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1082ff40(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10830020(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10830120(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_10830250(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10838010(undefined4 param_2); undefined4 * __thiscall FUN_108389c0(byte param_2); undefined4 * __thiscall FUN_10838b10(byte param_2); undefined4 * __thiscall FUN_10838bb0(byte param_2); undefined4 * __thiscall FUN_10838f70(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10839050(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10839130(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108392c0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void __thiscall FUN_10839430(char param_2); undefined4 __thiscall FUN_1083b0b0(undefined4 param_2); undefined4 __thiscall FUN_1083e350(int param_2); undefined4 __thiscall FUN_1083e400(undefined4 param_2,undefined4 param_3); int * __thiscall FUN_1083f700(int *param_2); undefined4 * __thiscall FUN_108411f0(undefined4 param_2); undefined4 * __thiscall FUN_10841300(undefined4 param_2); undefined4 * __thiscall FUN_10841410(undefined4 param_2); undefined4 * __thiscall FUN_10841520(undefined4 param_2); undefined4 * __thiscall FUN_10841630(undefined4 param_2); undefined4 * __thiscall FUN_10841740(undefined4 param_2); undefined4 * __thiscall FUN_10841850(undefined4 param_2); undefined4 * __thiscall FUN_10841960(undefined4 param_2); undefined4 * __thiscall FUN_10841a70(undefined4 param_2); undefined4 * __thiscall FUN_10841ba0(undefined4 param_2); undefined4 * __thiscall FUN_10841db0(undefined4 param_2); undefined4 * __thiscall FUN_108426c0(undefined4 param_2); undefined4 * __thiscall FUN_10842f90(undefined4 param_2); undefined4 * __thiscall FUN_10843310(undefined4 param_2); undefined4 * __thiscall FUN_10843520(undefined4 param_2); undefined4 * __thiscall FUN_10843730(undefined4 param_2); undefined4 * __thiscall FUN_10843940(undefined4 param_2); undefined4 * __thiscall FUN_10843e20(undefined4 param_2); int * __thiscall FUN_10846a20(int *param_2); int * __thiscall FUN_10846a90(int *param_2); undefined4 * __thiscall FUN_10847050(byte param_2); undefined4 * __thiscall FUN_10847500(byte param_2); undefined4 * __thiscall FUN_10847560(byte param_2); undefined4 * __thiscall FUN_108475c0(byte param_2); undefined4 * __thiscall FUN_10847620(byte param_2); undefined4 * __thiscall FUN_10847680(byte param_2); undefined4 * __thiscall FUN_108476e0(byte param_2); undefined4 * __thiscall FUN_10847740(byte param_2); undefined4 * __thiscall FUN_108477a0(byte param_2); undefined4 * __thiscall FUN_10847800(byte param_2); undefined4 * __thiscall FUN_10847860(byte param_2); undefined4 * __thiscall FUN_10847900(byte param_2); undefined4 * __thiscall FUN_108479a0(byte param_2); undefined4 * __thiscall FUN_10847ab0(byte param_2); undefined4 * __thiscall FUN_10847ce0(byte param_2); undefined4 * __thiscall FUN_10847d80(byte param_2); undefined4 * __thiscall FUN_10847e20(byte param_2); undefined4 * __thiscall FUN_10847ec0(byte param_2); undefined4 * __thiscall FUN_10847fd0(byte param_2); undefined4 * __thiscall FUN_10848070(byte param_2); undefined4 * __thiscall FUN_10848110(byte param_2); undefined4 * __thiscall FUN_10848220(byte param_2); undefined4 * __thiscall FUN_10848330(byte param_2); undefined4 * __thiscall FUN_108483d0(byte param_2); undefined4 * __thiscall FUN_108484e0(byte param_2); undefined4 * __thiscall FUN_10848580(byte param_2); undefined4 * __thiscall FUN_10848620(byte param_2); undefined4 * __thiscall FUN_108486c0(byte param_2); undefined4 * __thiscall FUN_10848760(byte param_2); undefined4 * __thiscall FUN_10848870(byte param_2); undefined4 * __thiscall FUN_10848920(byte param_2); undefined4 * __thiscall FUN_108489c0(byte param_2); undefined4 * __thiscall FUN_10848f10(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10849070(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108491d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108492d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108493b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108494e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108495c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108496a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10849800(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108498f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108499d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10849ab0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10849ba0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10849c90(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10849df0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10849ef0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1084a050(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1084a1b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1084a310(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1084a470(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1084a560(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1084a660(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1084a7c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1085d9c0(undefined4 param_2); undefined4 * __thiscall FUN_1085de20(byte param_2); undefined4 * __thiscall FUN_1085deb0(byte param_2); int __thiscall FUN_1085df50(byte param_2); undefined4 * __thiscall FUN_1085e080(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1085e160(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10860800(undefined4 param_2); undefined4 * __thiscall FUN_10860d90(undefined4 param_2); int * __thiscall FUN_108622f0(int *param_2); undefined4 * __thiscall FUN_10862530(byte param_2); undefined4 * __thiscall FUN_108627f0(byte param_2); undefined4 * __thiscall FUN_10862900(byte param_2); undefined4 * __thiscall FUN_108629a0(byte param_2); undefined4 * __thiscall FUN_10862a40(byte param_2); undefined4 * __thiscall FUN_10862ae0(byte param_2); undefined4 * __thiscall FUN_10862b80(byte param_2); undefined4 * __thiscall FUN_10862c20(byte param_2); undefined4 * __thiscall FUN_10862d30(byte param_2); undefined4 * __thiscall FUN_10862dd0(byte param_2); undefined4 * __thiscall FUN_10862e70(byte param_2); int __thiscall FUN_10862f10(byte param_2); undefined4 * __thiscall FUN_10863a10(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10863b10(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10863bf0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10863cd0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10863db0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10863e90(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10863f70(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10864060(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10864140(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10864220(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10864300(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 __thiscall FUN_10867c70(undefined4 param_2); void __thiscall FUN_1086f290(undefined4 param_2); undefined4 * __thiscall FUN_10873f00(undefined4 param_2); int __thiscall FUN_108741c0(int param_2); int __thiscall FUN_108742e0(int param_2); undefined4 * __thiscall FUN_108744f0(undefined4 param_2); int * __thiscall FUN_10875b40(int *param_2); undefined4 * __thiscall FUN_10875dc0(byte param_2); undefined4 * __thiscall FUN_10875f10(byte param_2); undefined4 * __thiscall FUN_10876070(byte param_2); undefined4 * __thiscall FUN_10876110(byte param_2); undefined4 * __thiscall FUN_108761b0(byte param_2); undefined4 * __thiscall FUN_10876250(byte param_2); undefined4 * __thiscall FUN_108762f0(byte param_2); undefined4 * __thiscall FUN_10877390(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10877470(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108775d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108776b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10877790(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_1087b960(undefined4 param_2); undefined4 * __thiscall FUN_1087e440(undefined4 param_2); int __thiscall FUN_1087e700(byte param_2); undefined4 * __thiscall FUN_1087e840(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_1087fcb0(undefined4 param_2); undefined4 * __thiscall FUN_10880c80(undefined4 param_2); undefined4 * __thiscall FUN_108828e0(byte param_2); undefined4 * __thiscall FUN_10882bb0(byte param_2); undefined4 * __thiscall FUN_10882c10(byte param_2); undefined4 * __thiscall FUN_10882cb0(byte param_2); undefined4 * __thiscall FUN_10882d50(byte param_2); undefined4 * __thiscall FUN_10882df0(byte param_2); undefined4 * __thiscall FUN_10882e90(byte param_2); undefined4 * __thiscall FUN_10882f30(byte param_2); undefined4 * __thiscall FUN_10882fd0(byte param_2); undefined4 * __thiscall FUN_10883070(byte param_2); undefined4 * __thiscall FUN_10883180(byte param_2); undefined4 * __thiscall FUN_10883220(byte param_2); undefined4 * __thiscall FUN_108832c0(byte param_2); undefined4 * __thiscall FUN_10883360(byte param_2); int __thiscall FUN_10883400(byte param_2); undefined4 * __thiscall FUN_10883630(byte param_2); undefined4 * __thiscall FUN_10883d70(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10883e50(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10883f30(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10884010(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108840f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108841d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108842b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10884390(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10884480(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10884560(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10884640(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10884720(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10884880(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10884960(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 __thiscall FUN_1088aba0(undefined4 param_2); void __thiscall FUN_10891320(int *param_2); undefined4 * __thiscall FUN_10891c80(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_10891d70(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_10892380(undefined4 param_2); undefined4 * __thiscall FUN_108924d0(undefined4 param_2); undefined4 * __thiscall FUN_10892c70(undefined4 param_2); undefined4 * __thiscall FUN_10893aa0(byte param_2); undefined4 * __thiscall FUN_10893c50(byte param_2); undefined4 * __thiscall FUN_10893cf0(byte param_2); undefined4 * __thiscall FUN_10893d90(byte param_2); undefined4 * __thiscall FUN_10893e30(byte param_2); undefined4 * __thiscall FUN_10893ed0(byte param_2); undefined4 * __thiscall FUN_10893f70(byte param_2); undefined4 * __thiscall FUN_10894010(byte param_2); int __thiscall FUN_10894120(byte param_2); undefined4 * __thiscall FUN_108948f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108949d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10894ab0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10894b90(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10894c70(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10894d50(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10894e30(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10895080(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_1089e5e0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1089e6d0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1089e7c0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1089e8b0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1089e9a0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1089ea90(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1089eb80(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1089ec70(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1089ed60(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1089ee50(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1089f030(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1089f120(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1089f210(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1089f380(undefined4 param_2); undefined4 * __thiscall FUN_1089f490(undefined4 param_2); undefined4 * __thiscall FUN_1089f5f0(undefined4 param_2); undefined4 * __thiscall FUN_1089f750(undefined4 param_2); undefined4 * __thiscall FUN_1089f8a0(undefined4 param_2); undefined4 * __thiscall FUN_1089f9f0(undefined4 param_2); undefined4 * __thiscall FUN_1089faf0(undefined4 param_2); undefined4 * __thiscall FUN_1089fba0(undefined4 param_2); undefined4 * __thiscall FUN_1089fcf0(undefined4 param_2); undefined4 * __thiscall FUN_1089fe50(undefined4 param_2); undefined4 * __thiscall FUN_1089ff50(undefined4 param_2); undefined4 * __thiscall FUN_108a0060(undefined4 param_2); undefined4 * __thiscall FUN_108a01c0(undefined4 param_2); undefined4 * __thiscall FUN_108a0310(undefined4 param_2); undefined4 * __thiscall FUN_108a05c0(undefined4 param_2); undefined4 * __thiscall FUN_108a0710(undefined4 param_2); undefined4 * __thiscall FUN_108a0860(undefined4 param_2); undefined4 * __thiscall FUN_108a0960(undefined4 param_2); undefined4 * __thiscall FUN_108a2610(byte param_2); undefined4 * __thiscall FUN_108a2910(byte param_2); undefined4 * __thiscall FUN_108a2970(byte param_2); undefined4 * __thiscall FUN_108a29d0(byte param_2); undefined4 * __thiscall FUN_108a2a70(byte param_2); undefined4 * __thiscall FUN_108a2b70(byte param_2); undefined4 * __thiscall FUN_108a2c10(byte param_2); undefined4 * __thiscall FUN_108a2cb0(byte param_2); undefined4 * __thiscall FUN_108a2dc0(byte param_2); undefined4 * __thiscall FUN_108a2e60(byte param_2); undefined4 * __thiscall FUN_108a2f00(byte param_2); undefined4 * __thiscall FUN_108a2fa0(byte param_2); undefined4 * __thiscall FUN_108a30b0(byte param_2); undefined4 * __thiscall FUN_108a3150(byte param_2); undefined4 * __thiscall FUN_108a31f0(byte param_2); undefined4 * __thiscall FUN_108a3300(byte param_2); undefined4 * __thiscall FUN_108a33a0(byte param_2); int __thiscall FUN_108a3440(byte param_2); undefined4 * __thiscall FUN_108a3780(undefined4 *param_2); undefined4 * __thiscall FUN_108a3eb0(undefined4 *param_2); undefined4 * __thiscall FUN_108a4020(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108a4100(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108a41f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108a42d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108a43b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108a44c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108a45a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108a4680(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108a47e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108a48d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108a49b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108a4a90(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108a4b80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108a4c60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108a4d40(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_108a9f20(undefined4 *param_2); undefined4 * __thiscall FUN_108b48f0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108b4ad0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108b4d60(undefined4 param_2); undefined4 * __thiscall FUN_108b5030(undefined4 param_2); undefined4 * __thiscall FUN_108b5130(undefined4 param_2); undefined4 * __thiscall FUN_108b5b50(byte param_2); undefined4 * __thiscall FUN_108b5c70(byte param_2); undefined4 * __thiscall FUN_108b5d10(byte param_2); undefined4 * __thiscall FUN_108b5db0(byte param_2); undefined4 * __thiscall FUN_108b5ec0(byte param_2); int __thiscall FUN_108b5fd0(byte param_2); undefined4 * __thiscall FUN_108b6510(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108b65f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108b66d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108b67c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108b69e0(undefined4 param_2,undefined4 param_3,undefined4 param_4); void __thiscall FUN_108bc2b0(int *param_2); undefined4 * __thiscall FUN_108bcb20(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108bcc10(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108bcd00(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108bcdf0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108bcee0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108bcfd0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108bd1b0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108bd2a0(undefined4 param_2); undefined4 * __thiscall FUN_108bd400(undefined4 param_2); undefined4 * __thiscall FUN_108bd500(undefined4 param_2); undefined4 * __thiscall FUN_108bd600(undefined4 param_2); undefined4 * __thiscall FUN_108bd700(undefined4 param_2); undefined4 * __thiscall FUN_108bd810(undefined4 param_2); undefined4 * __thiscall FUN_108bd970(undefined4 param_2); undefined4 * __thiscall FUN_108bdad0(undefined4 param_2); undefined4 * __thiscall FUN_108bdc20(undefined4 param_2); undefined4 * __thiscall FUN_108bded0(undefined4 param_2); undefined4 * __thiscall FUN_108bdfd0(undefined4 param_2); undefined4 * __thiscall FUN_108bef20(byte param_2); undefined4 * __thiscall FUN_108bf100(byte param_2); undefined4 * __thiscall FUN_108bf160(byte param_2); undefined4 * __thiscall FUN_108bf230(byte param_2); undefined4 * __thiscall FUN_108bf2d0(byte param_2); undefined4 * __thiscall FUN_108bf450(byte param_2); undefined4 * __thiscall FUN_108bf560(byte param_2); int __thiscall FUN_108bf600(byte param_2); undefined4 * __thiscall FUN_108bf7b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108bf890(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108bf970(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108bfad0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108bfbb0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108bfca0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108bfd80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108bfe60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108bff40(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 __thiscall FUN_108c3f10(undefined4 param_2); undefined4 * __thiscall FUN_108c9180(undefined4 param_2); undefined4 * __thiscall FUN_108c95c0(undefined4 param_2); undefined4 * __thiscall FUN_108cae10(byte param_2); undefined4 * __thiscall FUN_108cb0e0(byte param_2); undefined4 * __thiscall FUN_108cb180(byte param_2); undefined4 * __thiscall FUN_108cb220(byte param_2); undefined4 * __thiscall FUN_108cb2c0(byte param_2); undefined4 * __thiscall FUN_108cb360(byte param_2); undefined4 * __thiscall FUN_108cb400(byte param_2); undefined4 * __thiscall FUN_108cb4a0(byte param_2); undefined4 * __thiscall FUN_108cb540(byte param_2); undefined4 * __thiscall FUN_108cb5e0(byte param_2); undefined4 * __thiscall FUN_108cb680(byte param_2); undefined4 * __thiscall FUN_108cb780(byte param_2); undefined4 * __thiscall FUN_108cb820(byte param_2); int __thiscall FUN_108cb8c0(byte param_2); undefined4 * __thiscall FUN_108cbb10(byte param_2); undefined4 * __thiscall FUN_108cbcb0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108cbd90(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108cbe70(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108cbf50(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108cc030(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108cc110(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108cc1f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108cc2d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108cc3b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108cc490(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108cc580(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108cc660(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108cc740(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108cc820(undefined4 param_2,undefined4 param_3,undefined4 param_4); void __thiscall FUN_108cc970(int *param_2,int param_3,int param_4); };
using namespace std;
void __stdcall FUN_107cc7a0(int param_1,int param_2);
int * __stdcall FUN_107e0210(int *param_1,int *param_2);
void __fastcall FUN_107e1030(int param_1);
void __fastcall FUN_107e10e0(int param_1);
void __fastcall FUN_107e6b40(undefined4 *param_1);
void __fastcall FUN_107ebf00(int param_1);
undefined4 __stdcall FUN_107f6f40(undefined4 param_1);
undefined1 FUN_107f7160(void);
void FUN_107fef90(void);
void FUN_107ff6d0(void);
void __fastcall FUN_10802fe0(int param_1);
undefined1 FUN_1080bd40(void);
void __fastcall FUN_10812e70(int param_1);
undefined4 __stdcall FUN_10816080(undefined4 param_1);
void FUN_108172e0(void);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_1081a710(int *param_1);
void __fastcall FUN_1081aaf0(int param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_1081bb70(int *param_1);
undefined4 * __fastcall FUN_10827f00(undefined4 *param_1);
void __fastcall FUN_1082baf0(int param_1);
void __fastcall FUN_1082d6b0(int *param_1);
void __fastcall FUN_108386c0(undefined4 *param_1);
void __fastcall FUN_1083d110(int param_1);
void __fastcall FUN_1083f590(int param_1);
void __fastcall FUN_10845860(undefined4 *param_1);
void __fastcall FUN_108458d0(undefined4 *param_1);
void __fastcall FUN_10845940(undefined4 *param_1);
void __fastcall FUN_10845c60(undefined4 *param_1);
void __fastcall FUN_10845fc0(undefined4 *param_1);
void __fastcall FUN_10846130(undefined4 *param_1);
void __fastcall FUN_10846200(undefined4 *param_1);
void __fastcall FUN_10846320(undefined4 *param_1);
void __fastcall FUN_10846530(undefined4 *param_1);
undefined4 __stdcall FUN_108507c0(undefined4 param_1);
undefined4 __stdcall FUN_10851640(undefined4 param_1);
undefined4 __stdcall FUN_10851960(undefined4 param_1);
undefined4 __stdcall FUN_10851c90(undefined4 param_1);
undefined4 __stdcall FUN_10851e40(undefined4 param_1);
undefined4 __stdcall FUN_10852050(undefined4 param_1);
undefined4 __stdcall FUN_10852780(undefined4 param_1);
void FUN_10859f20(void);
void FUN_10859f90(void);
void FUN_1085a000(void);
void FUN_1085a0a0(void);
void FUN_1085a110(void);
void FUN_1085a180(void);
void FUN_1085a220(void);
void __stdcall FUN_1085b760(int *param_1);
void __fastcall FUN_1085c890(int param_1);
void FUN_1085c990(void);
void __fastcall FUN_1085dcc0(int param_1);
void __fastcall FUN_108619d0(undefined4 *param_1);
void __fastcall FUN_10861c20(undefined4 *param_1);
void __fastcall FUN_10861e80(undefined4 *param_1);
void __fastcall FUN_10862040(int param_1);
void FUN_1086cd10(void);
void FUN_10872dc0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined1 *param_6);
void FUN_10872f00(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined1 *param_6);
void __fastcall FUN_1087e5d0(int param_1);
void __fastcall FUN_10882090(undefined4 *param_1);
undefined4 * __stdcall FUN_10883be0(undefined4 *param_1);
void __fastcall FUN_1088fe90(int param_1);
void __fastcall FUN_10891080(int param_1);
int * FUN_10891890(void);
void __fastcall FUN_108936d0(undefined4 *param_1);
void __fastcall FUN_108937a0(int param_1);
void __stdcall FUN_10894f20(int *param_1);
bool FUN_108971b0(void);
void FUN_1089d070(void);
void __stdcall FUN_1089d2a0(int *param_1);
void FUN_1089d870(void);
void FUN_1089dcc0(void);
void FUN_1089e310(void);
void __fastcall FUN_108a1880(undefined4 *param_1);
void __fastcall FUN_108a18f0(undefined4 *param_1);
void __fastcall FUN_108a1a70(undefined4 *param_1);
void __fastcall FUN_108a1bd0(undefined4 *param_1);
void __fastcall FUN_108a1d90(undefined4 *param_1);
void __fastcall FUN_108a1f00(undefined4 *param_1);
void __fastcall FUN_108a2070(int param_1);
undefined4 * __stdcall FUN_108a3d10(undefined4 *param_1);
undefined4 __stdcall FUN_108a65d0(undefined4 param_1);
undefined4 __stdcall FUN_108a6810(undefined4 param_1);
undefined4 __stdcall FUN_108a8130(undefined4 param_1);
undefined4 __stdcall FUN_108a8860(undefined4 param_1);
undefined4 __stdcall FUN_108a9790(undefined4 param_1);
undefined4 FUN_108a9eb0(undefined4 param_1);
undefined1 FUN_108b0d10(void);
void FUN_108b1830(void);
void FUN_108b18d0(void);
void FUN_108b19c0(void);
void FUN_108b1ab0(void);
void FUN_108b1fa0(void);
void FUN_108b2860(undefined4 param_1);
void FUN_108b3b90(void);
void FUN_108b4110(int *param_1);
void FUN_108b4320(void);
void __fastcall FUN_108b5770(undefined4 *param_1);
void __fastcall FUN_108b5840(undefined4 *param_1);
void __fastcall FUN_108b5910(int param_1);
undefined4 * __stdcall FUN_108b68c0(undefined4 *param_1);
undefined1 FUN_108b8b70(void);
void __fastcall FUN_108be910(undefined4 *param_1);
void __fastcall FUN_108bebd0(int param_1);
void FUN_108c61e0(void);
void FUN_108c62b0(undefined4 param_1);
void FUN_108c6dd0(void);
void __fastcall FUN_108c6ed0(int param_1);
void __fastcall FUN_108c7570(undefined4 *param_1);
void __fastcall FUN_108ca7f0(undefined4 *param_1);
void __fastcall FUN_108ca950(int param_1);
undefined1 FUN_108d63f0(void);
// Reference entry 107cc720; body size 93 bytes.
#line 1 "ENTRY_107cc720"

void __thiscall Recovered_Bulk::FUN_107cc720(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1160cf5d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if ((undefined4 *)(param_1 + 0xe8) != &param_2) {
    thunk_FUN_10648010(param_2,param_3,param_4);
  }
  thunk_FUN_1036e480(uVar1);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 107cc7a0; body size 77 bytes.
#line 1 "ENTRY_107cc7a0"

void __stdcall FUN_107cc7a0(int param_1,int param_2)

{
  undefined4 uStack_10;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uStack_10 = (undefined4)(0);
    thunk_FUN_107931b0(param_1);
    uStack_10 = (undefined4)(1);
    thunk_FUN_107931b0(param_2);
    thunk_FUN_10c98710(&uStack_10);
    thunk_FUN_10793550();
    thunk_FUN_10c98710(&uStack_10);
    thunk_FUN_10793550();
  }
  return;
}


// Reference entry 107cc8d0; body size 151 bytes.
#line 1 "ENTRY_107cc8d0"

void __thiscall Recovered_Bulk::FUN_107cc8d0(int param_2,int param_3,int param_4)
{
  int param_1 = (int )this;
  char *pcStack_10;
  
  if (param_4 != 0) {
    pcStack_10 = (char *)((char *)0x4);
    thunk_FUN_107931b0(param_4);
    pcStack_10 = (char *)((char *)0x5);
    thunk_FUN_107931b0(param_4);
    thunk_FUN_10c98710(&pcStack_10);
    thunk_FUN_10793550();
    return;
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    pcStack_10 = (char *)((char *)0x4);
    thunk_FUN_107931b0(param_2);
    pcStack_10 = (char *)((char *)0x5);
    thunk_FUN_107931b0(param_3);
    thunk_FUN_10c98710(&pcStack_10);
    thunk_FUN_10793550();
    thunk_FUN_10c98710(&pcStack_10);
    thunk_FUN_10793550();
    return;
  }
  pcStack_10 = (char *)("product is null and failed to add surround candidates");
  thunk_FUN_10302280(param_1 + 0xa8);
  return;
}


// Reference entry 107cc9c0; body size 93 bytes.
#line 1 "ENTRY_107cc9c0"

void __thiscall Recovered_Bulk::FUN_107cc9c0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1160cfdd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if ((undefined4 *)(param_1 + 0x11c) != &param_2) {
    thunk_FUN_10648010(param_2,param_3,param_4);
  }
  thunk_FUN_1036e480(uVar1);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 107ccce0; body size 116 bytes.
#line 1 "ENTRY_107ccce0"

undefined4 __thiscall Recovered_Bulk::FUN_107ccce0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1160d0cd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  local_8 = (undefined4)(0);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_4);
  }
  thunk_FUN_10c62d50(param_1,param_4,param_2,param_3,puVar2,param_5,param_6,uVar1);
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 107ce440; body size 201 bytes.
#line 1 "ENTRY_107ce440"

undefined4 * __thiscall Recovered_Bulk::FUN_107ce440(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1160d7e9);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBondingMemberSelectSubPrimaryPage);
  param_1[4] = (uint)&ghidra_vftable_SCBondingMemberSelectSubPrimaryPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCBondingMemberSelectSubPrimaryPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCBondingMemberSelectSubPrimaryPage;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  local_8 = (undefined4)(2);
  thunk_FUN_10c5ed70(uVar1);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 107ce7e0; body size 127 bytes.
#line 1 "ENTRY_107ce7e0"

undefined4 * __thiscall Recovered_Bulk::FUN_107ce7e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBondingMemberSelectWizard);
  param_1[4] = (uint)&ghidra_vftable_SCBondingMemberSelectWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCBondingMemberSelectWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCBondingMemberSelectWizard;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0xffffffff;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 107cffb0; body size 68 bytes.
#line 1 "ENTRY_107cffb0"

undefined4 * __thiscall Recovered_Bulk::FUN_107cffb0(byte param_2)
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


// Reference entry 107d0470; body size 68 bytes.
#line 1 "ENTRY_107d0470"

undefined4 * __thiscall Recovered_Bulk::FUN_107d0470(byte param_2)
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


// Reference entry 107d0650; body size 68 bytes.
#line 1 "ENTRY_107d0650"

undefined4 * __thiscall Recovered_Bulk::FUN_107d0650(byte param_2)
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


// Reference entry 107d0fe0; body size 207 bytes.
#line 1 "ENTRY_107d0fe0"

undefined4 * __thiscall Recovered_Bulk::FUN_107d0fe0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1160e217);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCBondingMemberSelectConfirmSpeakerMovePage);
    puVar1[4] = (uint)&ghidra_vftable_SCBondingMemberSelectConfirmSpeakerMovePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCBondingMemberSelectConfirmSpeakerMovePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCBondingMemberSelectConfirmSpeakerMovePage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    *(undefined2 *)(puVar1 + 0x3b) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107d10f0; body size 205 bytes.
#line 1 "ENTRY_107d10f0"

undefined4 * __thiscall Recovered_Bulk::FUN_107d10f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1160e267);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCBondingMemberSelectConfirmSpeakerMoveSecondPage);
    puVar1[4] = (uint)&ghidra_vftable_SCBondingMemberSelectConfirmSpeakerMoveSecondPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCBondingMemberSelectConfirmSpeakerMoveSecondPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCBondingMemberSelectConfirmSpeakerMoveSecondPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    *(undefined1 *)(puVar1 + 0x3b) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107d11f0; body size 168 bytes.
#line 1 "ENTRY_107d11f0"

undefined4 * __thiscall Recovered_Bulk::FUN_107d11f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1160e2b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCBondingMemberSelectExitPage);
    puVar1[4] = (uint)&ghidra_vftable_SCBondingMemberSelectExitPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCBondingMemberSelectExitPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCBondingMemberSelectExitPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107d12d0; body size 248 bytes.
#line 1 "ENTRY_107d12d0"

undefined4 * __thiscall Recovered_Bulk::FUN_107d12d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1160e307);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xfc));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCBondingMemberSelectFirstSurroundPage);
    puVar1[4] = (uint)&ghidra_vftable_SCBondingMemberSelectFirstSurroundPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCBondingMemberSelectFirstSurroundPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCBondingMemberSelectFirstSurroundPage;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((int)puVar1 + 0xe2) = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107d1410; body size 168 bytes.
#line 1 "ENTRY_107d1410"

undefined4 * __thiscall Recovered_Bulk::FUN_107d1410(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1160e357);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCBondingMemberSelectIncompatiblePage);
    puVar1[4] = (uint)&ghidra_vftable_SCBondingMemberSelectIncompatiblePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCBondingMemberSelectIncompatiblePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCBondingMemberSelectIncompatiblePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107d14f0; body size 249 bytes.
#line 1 "ENTRY_107d14f0"

undefined4 * __thiscall Recovered_Bulk::FUN_107d14f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1160e3a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0x100));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCBondingMemberSelectSecondSurroundPage);
    puVar1[4] = (uint)&ghidra_vftable_SCBondingMemberSelectSecondSurroundPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCBondingMemberSelectSecondSurroundPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCBondingMemberSelectSecondSurroundPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    puVar1[0x3f] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107d1630; body size 241 bytes.
#line 1 "ENTRY_107d1630"

undefined4 * __thiscall Recovered_Bulk::FUN_107d1630(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1160e3f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xfc));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCBondingMemberSelectStereoPairPage);
    puVar1[4] = (uint)&ghidra_vftable_SCBondingMemberSelectStereoPairPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCBondingMemberSelectStereoPairPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCBondingMemberSelectStereoPairPage;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107d1760; body size 239 bytes.
#line 1 "ENTRY_107d1760"

undefined4 * __thiscall Recovered_Bulk::FUN_107d1760(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1160e447);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xfc));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCBondingMemberSelectSubPage);
    puVar1[4] = (uint)&ghidra_vftable_SCBondingMemberSelectSubPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCBondingMemberSelectSubPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCBondingMemberSelectSubPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107d1890; body size 264 bytes.
#line 1 "ENTRY_107d1890"

undefined4 * __thiscall Recovered_Bulk::FUN_107d1890(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1160e4bb);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x10c));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar3);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCBondingMemberSelectSubPrimaryPage);
    puVar2[4] = (uint)&ghidra_vftable_SCBondingMemberSelectSubPrimaryPage;
    puVar2[0x23] = (uint)&ghidra_vftable_SCBondingMemberSelectSubPrimaryPage;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCBondingMemberSelectSubPrimaryPage;
    *(undefined1 *)(puVar2 + 0x38) = 0;
    puVar2[0x39] = 0;
    puVar2[0x3a] = 0;
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    thunk_FUN_10c5ed70(uVar1);
    puVar2[0x3e] = 0;
    puVar2[0x3f] = 0;
    puVar2[0x40] = 0;
    puVar2[0x41] = 0;
    puVar2[0x42] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107d19e0; body size 239 bytes.
#line 1 "ENTRY_107d19e0"

undefined4 * __thiscall Recovered_Bulk::FUN_107d19e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1160e507);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xfc));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCBondingMemberSelectSurroundPrimaryPage);
    puVar1[4] = (uint)&ghidra_vftable_SCBondingMemberSelectSurroundPrimaryPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCBondingMemberSelectSurroundPrimaryPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCBondingMemberSelectSurroundPrimaryPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107d1b10; body size 263 bytes.
#line 1 "ENTRY_107d1b10"

undefined4 * __thiscall Recovered_Bulk::FUN_107d1b10(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1160e570);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0x108));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCBondingMemberSelectWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCBondingMemberSelectWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCBondingMemberSelectWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCBondingMemberSelectWizard;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3e] = 0;
    puVar1[0x3f] = 0xffffffff;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107e0210; body size 178 bytes.
#line 1 "ENTRY_107e0210"

int * __stdcall FUN_107e0210(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11610545);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_10c94860(&param_2,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
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
  thunk_FUN_10c9b9b0(0);
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 107e1030; body size 138 bytes.
#line 1 "ENTRY_107e1030"

void __fastcall FUN_107e1030(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161074d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_107d1fa0();
    if (*(char *)(param_1 + 0xec) != '\0') {
      thunk_FUN_10ebb8e0("exitTimer",2000);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 107e10e0; body size 138 bytes.
#line 1 "ENTRY_107e10e0"

void __fastcall FUN_107e10e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161078d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_107d1d20();
    if (*(char *)(param_1 + 0xec) != '\0') {
      thunk_FUN_10ebb8e0("exitTimer",2000);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 107e53d0; body size 101 bytes.
#line 1 "ENTRY_107e53d0"

void __thiscall Recovered_Bulk::FUN_107e53d0(int *param_2)
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


// Reference entry 107e6390; body size 213 bytes.
#line 1 "ENTRY_107e6390"

undefined4 * __thiscall Recovered_Bulk::FUN_107e6390(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11611750);
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


// Reference entry 107e6600; body size 213 bytes.
#line 1 "ENTRY_107e6600"

undefined4 * __thiscall Recovered_Bulk::FUN_107e6600(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11611810);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBusinessWelcomeLoginSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCBusinessWelcomeLoginSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCBusinessWelcomeLoginSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCBusinessWelcomeLoginSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 107e6b40; body size 135 bytes.
#line 1 "ENTRY_107e6b40"

void __fastcall FUN_107e6b40(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11611970);
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


// Reference entry 107e6cb0; body size 81 bytes.
#line 1 "ENTRY_107e6cb0"

int * __thiscall Recovered_Bulk::FUN_107e6cb0(int *param_2)
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


// Reference entry 107e6dd0; body size 68 bytes.
#line 1 "ENTRY_107e6dd0"

undefined4 * __thiscall Recovered_Bulk::FUN_107e6dd0(byte param_2)
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


// Reference entry 107e6e90; body size 68 bytes.
#line 1 "ENTRY_107e6e90"

undefined4 * __thiscall Recovered_Bulk::FUN_107e6e90(byte param_2)
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


// Reference entry 107e6ef0; body size 159 bytes.
#line 1 "ENTRY_107e6ef0"

undefined4 * __thiscall Recovered_Bulk::FUN_107e6ef0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116119a0);
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
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 107e7000; body size 68 bytes.
#line 1 "ENTRY_107e7000"

undefined4 * __thiscall Recovered_Bulk::FUN_107e7000(byte param_2)
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


// Reference entry 107e7130; body size 188 bytes.
#line 1 "ENTRY_107e7130"

undefined4 * __thiscall Recovered_Bulk::FUN_107e7130(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11611c57);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCBusinessWelcomeIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCBusinessWelcomeIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCBusinessWelcomeIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCBusinessWelcomeIntroPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107e7220; body size 276 bytes.
#line 1 "ENTRY_107e7220"

undefined4 * __thiscall Recovered_Bulk::FUN_107e7220(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_11611cd2);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCBusinessWelcomeLoginSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCBusinessWelcomeLoginSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCBusinessWelcomeLoginSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCBusinessWelcomeLoginSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107e7380; body size 189 bytes.
#line 1 "ENTRY_107e7380"

undefined4 * __thiscall Recovered_Bulk::FUN_107e7380(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11611d40);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCBusinessWelcomeWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCBusinessWelcomeWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCBusinessWelcomeWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCBusinessWelcomeWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107eace0; body size 199 bytes.
#line 1 "ENTRY_107eace0"

undefined4 * __thiscall Recovered_Bulk::FUN_107eace0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11612b79);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCChirpAuthenticationWizard);
  param_1[4] = (uint)&ghidra_vftable_SCChirpAuthenticationWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCChirpAuthenticationWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCChirpAuthenticationWizard;
  *(undefined1 *)(param_1 + 0x43) = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 107ebf00; body size 186 bytes.
#line 1 "ENTRY_107ebf00"

void __fastcall FUN_107ebf00(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11612fc0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
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


// Reference entry 107ec480; body size 68 bytes.
#line 1 "ENTRY_107ec480"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec480(byte param_2)
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


// Reference entry 107ec750; body size 68 bytes.
#line 1 "ENTRY_107ec750"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec750(byte param_2)
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


// Reference entry 107ec7f0; body size 68 bytes.
#line 1 "ENTRY_107ec7f0"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec7f0(byte param_2)
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


// Reference entry 107ec890; body size 68 bytes.
#line 1 "ENTRY_107ec890"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec890(byte param_2)
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


// Reference entry 107ec930; body size 68 bytes.
#line 1 "ENTRY_107ec930"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec930(byte param_2)
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


// Reference entry 107ec9d0; body size 68 bytes.
#line 1 "ENTRY_107ec9d0"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec9d0(byte param_2)
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


// Reference entry 107eca70; body size 68 bytes.
#line 1 "ENTRY_107eca70"

undefined4 * __thiscall Recovered_Bulk::FUN_107eca70(byte param_2)
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


// Reference entry 107ecb10; body size 68 bytes.
#line 1 "ENTRY_107ecb10"

undefined4 * __thiscall Recovered_Bulk::FUN_107ecb10(byte param_2)
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


// Reference entry 107ecbb0; body size 68 bytes.
#line 1 "ENTRY_107ecbb0"

undefined4 * __thiscall Recovered_Bulk::FUN_107ecbb0(byte param_2)
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


// Reference entry 107ecc50; body size 68 bytes.
#line 1 "ENTRY_107ecc50"

undefined4 * __thiscall Recovered_Bulk::FUN_107ecc50(byte param_2)
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


// Reference entry 107eccf0; body size 68 bytes.
#line 1 "ENTRY_107eccf0"

undefined4 * __thiscall Recovered_Bulk::FUN_107eccf0(byte param_2)
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


// Reference entry 107ecd90; body size 68 bytes.
#line 1 "ENTRY_107ecd90"

undefined4 * __thiscall Recovered_Bulk::FUN_107ecd90(byte param_2)
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


// Reference entry 107ece30; body size 68 bytes.
#line 1 "ENTRY_107ece30"

undefined4 * __thiscall Recovered_Bulk::FUN_107ece30(byte param_2)
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


// Reference entry 107eced0; body size 68 bytes.
#line 1 "ENTRY_107eced0"

undefined4 * __thiscall Recovered_Bulk::FUN_107eced0(byte param_2)
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


// Reference entry 107ecf70; body size 210 bytes.
#line 1 "ENTRY_107ecf70"

int __thiscall Recovered_Bulk::FUN_107ecf70(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11612ff0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
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
    thunk_FUN_1148a50e(param_1,0x110);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 107ed1c0; body size 168 bytes.
#line 1 "ENTRY_107ed1c0"

undefined4 * __thiscall Recovered_Bulk::FUN_107ed1c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116132d7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChirpAuthenticationAuthFailedErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCChirpAuthenticationAuthFailedErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCChirpAuthenticationAuthFailedErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCChirpAuthenticationAuthFailedErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107ed2a0; body size 168 bytes.
#line 1 "ENTRY_107ed2a0"

undefined4 * __thiscall Recovered_Bulk::FUN_107ed2a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11613327);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChirpAuthenticationAuthRetryOrManualPinPage);
    puVar1[4] = (uint)&ghidra_vftable_SCChirpAuthenticationAuthRetryOrManualPinPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCChirpAuthenticationAuthRetryOrManualPinPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCChirpAuthenticationAuthRetryOrManualPinPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107ed380; body size 168 bytes.
#line 1 "ENTRY_107ed380"

undefined4 * __thiscall Recovered_Bulk::FUN_107ed380(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11613377);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChirpAuthenticationAuthRetryPage);
    puVar1[4] = (uint)&ghidra_vftable_SCChirpAuthenticationAuthRetryPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCChirpAuthenticationAuthRetryPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCChirpAuthenticationAuthRetryPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107ed460; body size 168 bytes.
#line 1 "ENTRY_107ed460"

undefined4 * __thiscall Recovered_Bulk::FUN_107ed460(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116133c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChirpAuthenticationButtonPressFailedPage);
    puVar1[4] = (uint)&ghidra_vftable_SCChirpAuthenticationButtonPressFailedPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCChirpAuthenticationButtonPressFailedPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCChirpAuthenticationButtonPressFailedPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107ed540; body size 168 bytes.
#line 1 "ENTRY_107ed540"

undefined4 * __thiscall Recovered_Bulk::FUN_107ed540(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11613417);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChirpAuthenticationChirpPinDetectionErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCChirpAuthenticationChirpPinDetectionErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCChirpAuthenticationChirpPinDetectionErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCChirpAuthenticationChirpPinDetectionErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107ed620; body size 168 bytes.
#line 1 "ENTRY_107ed620"

undefined4 * __thiscall Recovered_Bulk::FUN_107ed620(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11613467);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChirpAuthenticationChirpPinDetectionRetryOrManualPinPage);
    puVar1[4] = (uint)&ghidra_vftable_SCChirpAuthenticationChirpPinDetectionRetryOrManualPinPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCChirpAuthenticationChirpPinDetectionRetryOrManualPinPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCChirpAuthenticationChirpPinDetectionRetryOrManualPinPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107ed700; body size 168 bytes.
#line 1 "ENTRY_107ed700"

undefined4 * __thiscall Recovered_Bulk::FUN_107ed700(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116134b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChirpAuthenticationChirpPinDetectionRetryPage);
    puVar1[4] = (uint)&ghidra_vftable_SCChirpAuthenticationChirpPinDetectionRetryPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCChirpAuthenticationChirpPinDetectionRetryPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCChirpAuthenticationChirpPinDetectionRetryPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107ed7e0; body size 175 bytes.
#line 1 "ENTRY_107ed7e0"

undefined4 * __thiscall Recovered_Bulk::FUN_107ed7e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11613507);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChirpAuthenticationConnectingProductPage);
    puVar1[4] = (uint)&ghidra_vftable_SCChirpAuthenticationConnectingProductPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCChirpAuthenticationConnectingProductPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCChirpAuthenticationConnectingProductPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107ed8c0; body size 178 bytes.
#line 1 "ENTRY_107ed8c0"

undefined4 * __thiscall Recovered_Bulk::FUN_107ed8c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11613557);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChirpAuthenticationListenChirpPage);
    puVar1[4] = (uint)&ghidra_vftable_SCChirpAuthenticationListenChirpPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCChirpAuthenticationListenChirpPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCChirpAuthenticationListenChirpPage;
    puVar1[0x38] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107ed9a0; body size 168 bytes.
#line 1 "ENTRY_107ed9a0"

undefined4 * __thiscall Recovered_Bulk::FUN_107ed9a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116135a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChirpAuthenticationPlayChimePage);
    puVar1[4] = (uint)&ghidra_vftable_SCChirpAuthenticationPlayChimePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCChirpAuthenticationPlayChimePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCChirpAuthenticationPlayChimePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107eda80; body size 168 bytes.
#line 1 "ENTRY_107eda80"

undefined4 * __thiscall Recovered_Bulk::FUN_107eda80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116135f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChirpAuthenticationReauthorizationPage);
    puVar1[4] = (uint)&ghidra_vftable_SCChirpAuthenticationReauthorizationPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCChirpAuthenticationReauthorizationPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCChirpAuthenticationReauthorizationPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107edb60; body size 168 bytes.
#line 1 "ENTRY_107edb60"

undefined4 * __thiscall Recovered_Bulk::FUN_107edb60(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11613647);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChirpAuthenticationReceivingFailedPage);
    puVar1[4] = (uint)&ghidra_vftable_SCChirpAuthenticationReceivingFailedPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCChirpAuthenticationReceivingFailedPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCChirpAuthenticationReceivingFailedPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107edc40; body size 168 bytes.
#line 1 "ENTRY_107edc40"

undefined4 * __thiscall Recovered_Bulk::FUN_107edc40(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11613697);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChirpAuthenticationReceivingFailedRetryPage);
    puVar1[4] = (uint)&ghidra_vftable_SCChirpAuthenticationReceivingFailedRetryPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCChirpAuthenticationReceivingFailedRetryPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCChirpAuthenticationReceivingFailedRetryPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107edd20; body size 258 bytes.
#line 1 "ENTRY_107edd20"

undefined4 * __thiscall Recovered_Bulk::FUN_107edd20(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11613724);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x110));
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCChirpAuthenticationWizard);
    puVar2[4] = (uint)&ghidra_vftable_SCChirpAuthenticationWizard;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChirpAuthenticationWizard);
    puVar2[0x2a] = (uint)&ghidra_vftable_SCChirpAuthenticationWizard;
    *(undefined1 *)(puVar2 + 0x43) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 107f6f40; body size 431 bytes.
#line 1 "ENTRY_107f6f40"

undefined4 __stdcall FUN_107f6f40(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined **local_38;
  undefined4 local_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11614d55);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a2fdc);
  thunk_FUN_105f5920(&local_14);
  local_8 = (undefined4)(0);
  local_14 = (undefined4)(0);
  thunk_FUN_105f5920(&local_14);
  local_38 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_34 = (undefined4)(0);
  iStack_30 = (int)(0);
  uStack_2c = (undefined4)(0);
  iStack_28 = (int)(0);
  local_24 = (undefined4 *)((undefined4 *)0x0);
  local_20 = (undefined4 *)((undefined4 *)0x0);
  local_1c = (int)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(&local_18));
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  local_14 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_14 + 1)) << 8 | (uint)(*piVar3 == 0)));
  piVar3 = (int *)((int *)(*(code *)local_38[2])(local_14,local_58,uVar2));
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0x10))(local_78));
  uVar4 = (undefined4)((**(code **)(*piVar3 + 4))());
  thunk_FUN_105f5a00(uVar4);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  puVar1 = (undefined4 *)(local_20);
  puVar6 = (undefined4 *)(local_24);
  if (local_24 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar6) != puVar1; puVar6 = puVar6 + 8) {
      (**(code **)*puVar6)(0);
    }
    uVar2 = (uint)(local_1c - (int)local_24 & 0xffffffe0);
    puVar6 = (undefined4 *)(local_24);
    if (0xfff < uVar2) {
      puVar6 = (undefined4 *)((undefined4 *)local_24[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)local_24 + (-4 - (int)puVar6))) goto LAB_107f709d;
    }
    thunk_FUN_1148a50e(puVar6,uVar2);
    local_24 = (undefined4 *)((undefined4 *)0x0);
    local_20 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (int)(0);
  }
  if (iStack_30 != 0) {
    uVar2 = (uint)(iStack_28 - iStack_30 & 0xfffffffc);
    iVar5 = (int)(iStack_30);
    if (0xfff < uVar2) {
      iVar5 = (int)(*(int *)(iStack_30 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iStack_30 - iVar5) - 4U) {
LAB_107f709d:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar2);
    iStack_30 = (int)(0);
    uStack_2c = (undefined4)(0);
    iStack_28 = (int)(0);
  }
  local_38 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 107f7160; body size 97 bytes.
#line 1 "ENTRY_107f7160"

undefined1 FUN_107f7160(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11614d9d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10df9e30(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  uVar1 = (undefined1)(thunk_FUN_10df10f0(uVar2));
  thunk_FUN_10def0d0();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 107fef90; body size 203 bytes.
#line 1 "ENTRY_107fef90"

void FUN_107fef90(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116160b5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebbab0(0x4048);
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10dfcab0());
  local_8 = (undefined4)(1);
  cVar1 = (char)(thunk_FUN_10def490(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar3 + 0x10c) = 1;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 107ff6d0; body size 203 bytes.
#line 1 "ENTRY_107ff6d0"

void FUN_107ff6d0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11616265);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebbab0(0x4048);
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10dfcab0());
  local_8 = (undefined4)(1);
  cVar1 = (char)(thunk_FUN_10def490(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar3 + 0x10c) = 1;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108023f0; body size 199 bytes.
#line 1 "ENTRY_108023f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108023f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11616e29);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCClientPinAuthenticationWizard);
  param_1[4] = (uint)&ghidra_vftable_SCClientPinAuthenticationWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCClientPinAuthenticationWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCClientPinAuthenticationWizard;
  *(undefined1 *)(param_1 + 0x43) = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10802fe0; body size 186 bytes.
#line 1 "ENTRY_10802fe0"

void __fastcall FUN_10802fe0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116170f0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
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


// Reference entry 108032f0; body size 68 bytes.
#line 1 "ENTRY_108032f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108032f0(byte param_2)
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


// Reference entry 108034d0; body size 68 bytes.
#line 1 "ENTRY_108034d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108034d0(byte param_2)
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


// Reference entry 10803570; body size 68 bytes.
#line 1 "ENTRY_10803570"

undefined4 * __thiscall Recovered_Bulk::FUN_10803570(byte param_2)
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


// Reference entry 10803610; body size 68 bytes.
#line 1 "ENTRY_10803610"

undefined4 * __thiscall Recovered_Bulk::FUN_10803610(byte param_2)
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


// Reference entry 108036b0; body size 68 bytes.
#line 1 "ENTRY_108036b0"

undefined4 * __thiscall Recovered_Bulk::FUN_108036b0(byte param_2)
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


// Reference entry 10803750; body size 68 bytes.
#line 1 "ENTRY_10803750"

undefined4 * __thiscall Recovered_Bulk::FUN_10803750(byte param_2)
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


// Reference entry 108037f0; body size 68 bytes.
#line 1 "ENTRY_108037f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108037f0(byte param_2)
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


// Reference entry 10803890; body size 68 bytes.
#line 1 "ENTRY_10803890"

undefined4 * __thiscall Recovered_Bulk::FUN_10803890(byte param_2)
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


// Reference entry 10803930; body size 68 bytes.
#line 1 "ENTRY_10803930"

undefined4 * __thiscall Recovered_Bulk::FUN_10803930(byte param_2)
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


// Reference entry 108039d0; body size 210 bytes.
#line 1 "ENTRY_108039d0"

int __thiscall Recovered_Bulk::FUN_108039d0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11617120);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
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
    thunk_FUN_1148a50e(param_1,0x110);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10803bc0; body size 168 bytes.
#line 1 "ENTRY_10803bc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10803bc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11617407);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCClientPinAuthenticationAuthRetryAgainPage);
    puVar1[4] = (uint)&ghidra_vftable_SCClientPinAuthenticationAuthRetryAgainPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCClientPinAuthenticationAuthRetryAgainPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCClientPinAuthenticationAuthRetryAgainPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10803ca0; body size 168 bytes.
#line 1 "ENTRY_10803ca0"

undefined4 * __thiscall Recovered_Bulk::FUN_10803ca0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11617457);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCClientPinAuthenticationAuthRetryPage);
    puVar1[4] = (uint)&ghidra_vftable_SCClientPinAuthenticationAuthRetryPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCClientPinAuthenticationAuthRetryPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCClientPinAuthenticationAuthRetryPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10803d80; body size 168 bytes.
#line 1 "ENTRY_10803d80"

undefined4 * __thiscall Recovered_Bulk::FUN_10803d80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116174a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCClientPinAuthenticationButtonPressFailedPage);
    puVar1[4] = (uint)&ghidra_vftable_SCClientPinAuthenticationButtonPressFailedPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCClientPinAuthenticationButtonPressFailedPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCClientPinAuthenticationButtonPressFailedPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10803e60; body size 168 bytes.
#line 1 "ENTRY_10803e60"

undefined4 * __thiscall Recovered_Bulk::FUN_10803e60(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116174f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCClientPinAuthenticationButtonPressWaitingPage);
    puVar1[4] = (uint)&ghidra_vftable_SCClientPinAuthenticationButtonPressWaitingPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCClientPinAuthenticationButtonPressWaitingPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCClientPinAuthenticationButtonPressWaitingPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10803f40; body size 168 bytes.
#line 1 "ENTRY_10803f40"

undefined4 * __thiscall Recovered_Bulk::FUN_10803f40(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11617547);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCClientPinAuthenticationChimingButtonPressFailedPage);
    puVar1[4] = (uint)&ghidra_vftable_SCClientPinAuthenticationChimingButtonPressFailedPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCClientPinAuthenticationChimingButtonPressFailedPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCClientPinAuthenticationChimingButtonPressFailedPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10804020; body size 168 bytes.
#line 1 "ENTRY_10804020"

undefined4 * __thiscall Recovered_Bulk::FUN_10804020(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11617597);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCClientPinAuthenticationChimingButtonPressWaitingPage);
    puVar1[4] = (uint)&ghidra_vftable_SCClientPinAuthenticationChimingButtonPressWaitingPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCClientPinAuthenticationChimingButtonPressWaitingPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCClientPinAuthenticationChimingButtonPressWaitingPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10804100; body size 175 bytes.
#line 1 "ENTRY_10804100"

undefined4 * __thiscall Recovered_Bulk::FUN_10804100(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116175e7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCClientPinAuthenticationConnectingProductPage);
    puVar1[4] = (uint)&ghidra_vftable_SCClientPinAuthenticationConnectingProductPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCClientPinAuthenticationConnectingProductPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCClientPinAuthenticationConnectingProductPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108041e0; body size 168 bytes.
#line 1 "ENTRY_108041e0"

undefined4 * __thiscall Recovered_Bulk::FUN_108041e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11617637);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCClientPinAuthenticationIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCClientPinAuthenticationIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCClientPinAuthenticationIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCClientPinAuthenticationIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108042c0; body size 258 bytes.
#line 1 "ENTRY_108042c0"

undefined4 * __thiscall Recovered_Bulk::FUN_108042c0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116176c4);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x110));
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCClientPinAuthenticationWizard);
    puVar2[4] = (uint)&ghidra_vftable_SCClientPinAuthenticationWizard;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCClientPinAuthenticationWizard);
    puVar2[0x2a] = (uint)&ghidra_vftable_SCClientPinAuthenticationWizard;
    *(undefined1 *)(puVar2 + 0x43) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1080bd40; body size 97 bytes.
#line 1 "ENTRY_1080bd40"

undefined1 FUN_1080bd40(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161883d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10df9e30(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  uVar1 = (undefined1)(thunk_FUN_10df10f0(uVar2));
  thunk_FUN_10def0d0();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 10811750; body size 437 bytes.
#line 1 "ENTRY_10811750"

void __thiscall Recovered_Bulk::FUN_10811750(int *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161977d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 == '\0') {
    uVar2 = (undefined4)(thunk_FUN_10dfaea0());
    local_8 = (undefined4)(6);
    cVar1 = (char)(thunk_FUN_10def450(uVar2));
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_10def0d0();
    if (cVar1 != '\0') {
      thunk_FUN_10ee48c0();
      thunk_FUN_10ee44b0();
      ExceptionList = (void *)(local_10);
      return;
    }
    uVar2 = (undefined4)(thunk_FUN_10dfcab0());
    local_8 = (undefined4)(7);
    cVar1 = (char)(thunk_FUN_10def490(uVar2));
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_105a1d20();
    thunk_FUN_105a1c80();
    if (cVar1 != '\0') {
      iVar3 = (int)(thunk_FUN_10eb41b0());
      *(undefined1 *)(iVar3 + 0x10c) = 1;
    }
  }
  else {
    thunk_FUN_10ebbab0(0x4048);
    thunk_FUN_10eb41b0();
    uVar2 = (undefined4)(thunk_FUN_10cf34e0(&param_2));
    local_8 = (undefined4)(1);
    thunk_FUN_10351370(uVar2);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    thunk_FUN_10ee48c0(local_18);
    thunk_FUN_10eeafc0(local_18);
    *(undefined1 *)(param_1 + 0xe0) = 1;
    thunk_FUN_10eb41b0();
    iVar3 = (int)(thunk_FUN_10eac8c0());
    if (iVar3 == 2) {
      uVar2 = (undefined4)(15000);
    }
    else {
      uVar2 = (undefined4)(5000);
    }
    thunk_FUN_10ebb8e0("connectingMaxWait",uVar2);
    local_8 = (undefined4)(5);
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
      ExceptionList = (void *)(local_10);
      return;
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10812030; body size 213 bytes.
#line 1 "ENTRY_10812030"

undefined4 * __thiscall Recovered_Bulk::FUN_10812030(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116199e0);
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


// Reference entry 10812140; body size 213 bytes.
#line 1 "ENTRY_10812140"

undefined4 * __thiscall Recovered_Bulk::FUN_10812140(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11619a40);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConnectRecoveryDevicePermissionsSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCConnectRecoveryDevicePermissionsSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCConnectRecoveryDevicePermissionsSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCConnectRecoveryDevicePermissionsSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10812740; body size 227 bytes.
#line 1 "ENTRY_10812740"

undefined4 * __thiscall Recovered_Bulk::FUN_10812740(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11619c27);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConnectRecoveryWizard);
  param_1[4] = (uint)&ghidra_vftable_SCConnectRecoveryWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCConnectRecoveryWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCConnectRecoveryWizard;
  param_1[0x46] = 2;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10812e70; body size 228 bytes.
#line 1 "ENTRY_10812e70"

void __fastcall FUN_10812e70(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11619dc0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x110));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xf8));
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_106da680();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10813110; body size 68 bytes.
#line 1 "ENTRY_10813110"

undefined4 * __thiscall Recovered_Bulk::FUN_10813110(byte param_2)
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


// Reference entry 10813230; body size 68 bytes.
#line 1 "ENTRY_10813230"

undefined4 * __thiscall Recovered_Bulk::FUN_10813230(byte param_2)
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


// Reference entry 10813290; body size 68 bytes.
#line 1 "ENTRY_10813290"

undefined4 * __thiscall Recovered_Bulk::FUN_10813290(byte param_2)
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


// Reference entry 10813330; body size 68 bytes.
#line 1 "ENTRY_10813330"

undefined4 * __thiscall Recovered_Bulk::FUN_10813330(byte param_2)
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


// Reference entry 108133d0; body size 68 bytes.
#line 1 "ENTRY_108133d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108133d0(byte param_2)
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


// Reference entry 10813470; body size 68 bytes.
#line 1 "ENTRY_10813470"

undefined4 * __thiscall Recovered_Bulk::FUN_10813470(byte param_2)
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


// Reference entry 10813510; body size 252 bytes.
#line 1 "ENTRY_10813510"

int __thiscall Recovered_Bulk::FUN_10813510(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11619df0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x110));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xf8));
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x11c);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 108136f0; body size 276 bytes.
#line 1 "ENTRY_108136f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108136f0(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_1161a0d2);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCConnectRecoveryDevicePermissionsSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCConnectRecoveryDevicePermissionsSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCConnectRecoveryDevicePermissionsSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCConnectRecoveryDevicePermissionsSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10813850; body size 175 bytes.
#line 1 "ENTRY_10813850"

undefined4 * __thiscall Recovered_Bulk::FUN_10813850(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161a127);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCConnectRecoveryIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCConnectRecoveryIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCConnectRecoveryIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCConnectRecoveryIntroPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10813930; body size 168 bytes.
#line 1 "ENTRY_10813930"

undefined4 * __thiscall Recovered_Bulk::FUN_10813930(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161a177);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCConnectRecoveryScanningPage);
    puVar1[4] = (uint)&ghidra_vftable_SCConnectRecoveryScanningPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCConnectRecoveryScanningPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCConnectRecoveryScanningPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10813a10; body size 168 bytes.
#line 1 "ENTRY_10813a10"

undefined4 * __thiscall Recovered_Bulk::FUN_10813a10(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161a1c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCConnectRecoveryWifiConfigPage);
    puVar1[4] = (uint)&ghidra_vftable_SCConnectRecoveryWifiConfigPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCConnectRecoveryWifiConfigPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCConnectRecoveryWifiConfigPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10813af0; body size 282 bytes.
#line 1 "ENTRY_10813af0"

undefined4 * __thiscall Recovered_Bulk::FUN_10813af0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161a262);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x11c));
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
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_10eaafe0(puVar2 + 0x3a);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    thunk_FUN_10eab1c0(puVar2 + 0x40);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCConnectRecoveryWizard);
    puVar2[4] = (uint)&ghidra_vftable_SCConnectRecoveryWizard;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCConnectRecoveryWizard);
    puVar2[0x2a] = (uint)&ghidra_vftable_SCConnectRecoveryWizard;
    puVar2[0x46] = 2;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10815df0; body size 519 bytes.
#line 1 "ENTRY_10815df0"

undefined4 __thiscall Recovered_Bulk::FUN_10815df0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
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
  puStack_70 = (undefined1 *)(LAB_1161a71d);
  local_74 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)local_68);
  ExceptionList = (void *)(&local_74);
  local_8 = (undefined4)(DAT_121a30e0);
  thunk_FUN_105f5920(&local_8);
  local_6c = (undefined4)(0);
  local_8 = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  *(unsigned char *)((char *)&local_6c + 0) = 1;
  local_8 = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a30d8);
  *(unsigned char *)((char *)&local_6c + 0) = 2;
  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  puVar8 = (undefined1 *)(local_48);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(4)));
  uVar2 = (undefined1)(thunk_FUN_10eacd70(puVar8,uVar3));
  piVar4 = (int *)((int *)thunk_FUN_106190a0(uVar2,puVar8));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(*(int *)(param_1 + 0x118) == 1,local_68));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(*(int *)(param_1 + 0x118) == 5,local_94));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0x10))(local_b4));
  uVar5 = (undefined4)((**(code **)(*piVar4 + 4))());
  thunk_FUN_105f5a00(uVar5);
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
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar7))) goto LAB_10815f94;
    }
    thunk_FUN_1148a50e(puVar7,uVar3);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar3 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar6 = (int)(iStack_20);
    if (0xfff < uVar3) {
      iVar6 = (int)(*(int *)(iStack_20 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iStack_20 - iVar6) - 4U) {
LAB_10815f94:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar6,uVar3);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_74);
  return (undefined4)(param_2);
}


// Reference entry 10816080; body size 345 bytes.
#line 1 "ENTRY_10816080"

undefined4 __stdcall FUN_10816080(undefined4 param_1)

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
  puStack_c = (undefined1 *)(LAB_1161a765);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a30d4);
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_1081618f;
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
LAB_1081618f:
                    
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


// Reference entry 108172e0; body size 120 bytes.
#line 1 "ENTRY_108172e0"

void FUN_108172e0(void)

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


// Reference entry 10819ab0; body size 229 bytes.
#line 1 "ENTRY_10819ab0"

undefined4 * __thiscall Recovered_Bulk::FUN_10819ab0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161b4d9);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDevicePermissionsWizard);
  param_1[4] = (uint)&ghidra_vftable_SCDevicePermissionsWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCDevicePermissionsWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCDevicePermissionsWizard;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1081a710; body size 81 bytes.
#line 1 "ENTRY_1081a710"

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

void __fastcall FID_conflict__Tidy_1081a710(int *param_1)

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


// Reference entry 1081aaf0; body size 292 bytes.
#line 1 "ENTRY_1081aaf0"

void __fastcall FUN_1081aaf0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161b880);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(*(int *)(param_1 + 0x10c));
  if (iVar1 != 0) {
    uVar4 = (uint)((*(int *)(param_1 + 0x114) - iVar1 >> 2) * 4);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4,DAT_12126b84 ^ (uint)&stack0xfffffffc);
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  piVar2 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar2 + 8))();
  }
  piVar2 = (int *)(*(int **)(param_1 + 0xf8));
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(*piVar2 + 8))();
  }
  piVar2 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(2);
  if (piVar2 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_106da680();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1081af40; body size 68 bytes.
#line 1 "ENTRY_1081af40"

undefined4 * __thiscall Recovered_Bulk::FUN_1081af40(byte param_2)
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


// Reference entry 1081b1b0; body size 68 bytes.
#line 1 "ENTRY_1081b1b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b1b0(byte param_2)
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


// Reference entry 1081b250; body size 68 bytes.
#line 1 "ENTRY_1081b250"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b250(byte param_2)
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


// Reference entry 1081b2f0; body size 68 bytes.
#line 1 "ENTRY_1081b2f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b2f0(byte param_2)
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


// Reference entry 1081b390; body size 68 bytes.
#line 1 "ENTRY_1081b390"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b390(byte param_2)
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


// Reference entry 1081b430; body size 68 bytes.
#line 1 "ENTRY_1081b430"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b430(byte param_2)
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


// Reference entry 1081b4d0; body size 68 bytes.
#line 1 "ENTRY_1081b4d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b4d0(byte param_2)
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


// Reference entry 1081b570; body size 68 bytes.
#line 1 "ENTRY_1081b570"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b570(byte param_2)
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


// Reference entry 1081b610; body size 68 bytes.
#line 1 "ENTRY_1081b610"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b610(byte param_2)
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


// Reference entry 1081b6b0; body size 68 bytes.
#line 1 "ENTRY_1081b6b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b6b0(byte param_2)
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


// Reference entry 1081b750; body size 68 bytes.
#line 1 "ENTRY_1081b750"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b750(byte param_2)
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


// Reference entry 1081b7f0; body size 68 bytes.
#line 1 "ENTRY_1081b7f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b7f0(byte param_2)
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


// Reference entry 1081b890; body size 316 bytes.
#line 1 "ENTRY_1081b890"

int __thiscall Recovered_Bulk::FUN_1081b890(byte param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161b8b0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(*(int *)(param_1 + 0x10c));
  if (iVar1 != 0) {
    uVar4 = (uint)((*(int *)(param_1 + 0x114) - iVar1 >> 2) * 4);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4,DAT_12126b84 ^ (uint)&stack0xfffffffc);
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  piVar2 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar2 + 8))();
  }
  piVar2 = (int *)(*(int **)(param_1 + 0xf8));
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(*piVar2 + 8))();
  }
  piVar2 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(2);
  if (piVar2 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x11c);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 1081bb70; body size 81 bytes.
#line 1 "ENTRY_1081bb70"

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

void __fastcall FID_conflict__Tidy_1081bb70(int *param_1)

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


// Reference entry 1081bbe0; body size 168 bytes.
#line 1 "ENTRY_1081bbe0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081bbe0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161bb97);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDevicePermissionsBluetoothAccessPermissionsPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDevicePermissionsBluetoothAccessPermissionsPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDevicePermissionsBluetoothAccessPermissionsPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDevicePermissionsBluetoothAccessPermissionsPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1081bcc0; body size 168 bytes.
#line 1 "ENTRY_1081bcc0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081bcc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161bbe7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDevicePermissionsBluetoothAccessPermissionsSettingsPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDevicePermissionsBluetoothAccessPermissionsSettingsPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDevicePermissionsBluetoothAccessPermissionsSettingsPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDevicePermissionsBluetoothAccessPermissionsSettingsPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1081bda0; body size 168 bytes.
#line 1 "ENTRY_1081bda0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081bda0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161bc37);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDevicePermissionsBluetoothPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDevicePermissionsBluetoothPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDevicePermissionsBluetoothPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDevicePermissionsBluetoothPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1081be80; body size 168 bytes.
#line 1 "ENTRY_1081be80"

undefined4 * __thiscall Recovered_Bulk::FUN_1081be80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161bc87);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDevicePermissionsICRLocationAccessPermissionsPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDevicePermissionsICRLocationAccessPermissionsPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDevicePermissionsICRLocationAccessPermissionsPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDevicePermissionsICRLocationAccessPermissionsPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1081bf60; body size 168 bytes.
#line 1 "ENTRY_1081bf60"

undefined4 * __thiscall Recovered_Bulk::FUN_1081bf60(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161bcd7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDevicePermissionsLocationPermissionsPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDevicePermissionsLocationPermissionsPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDevicePermissionsLocationPermissionsPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDevicePermissionsLocationPermissionsPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1081c040; body size 168 bytes.
#line 1 "ENTRY_1081c040"

undefined4 * __thiscall Recovered_Bulk::FUN_1081c040(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161bd27);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDevicePermissionsLocationPermissionsSettingsPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDevicePermissionsLocationPermissionsSettingsPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDevicePermissionsLocationPermissionsSettingsPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDevicePermissionsLocationPermissionsSettingsPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1081c120; body size 168 bytes.
#line 1 "ENTRY_1081c120"

undefined4 * __thiscall Recovered_Bulk::FUN_1081c120(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161bd77);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDevicePermissionsLocationPermissionsTryAgainPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDevicePermissionsLocationPermissionsTryAgainPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDevicePermissionsLocationPermissionsTryAgainPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDevicePermissionsLocationPermissionsTryAgainPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1081c200; body size 168 bytes.
#line 1 "ENTRY_1081c200"

undefined4 * __thiscall Recovered_Bulk::FUN_1081c200(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161bdc7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDevicePermissionsLocationServicesPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDevicePermissionsLocationServicesPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDevicePermissionsLocationServicesPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDevicePermissionsLocationServicesPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1081c2e0; body size 168 bytes.
#line 1 "ENTRY_1081c2e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081c2e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161be17);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDevicePermissionsMicrophonePermissionsPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDevicePermissionsMicrophonePermissionsPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDevicePermissionsMicrophonePermissionsPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDevicePermissionsMicrophonePermissionsPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1081c3c0; body size 175 bytes.
#line 1 "ENTRY_1081c3c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081c3c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161be67);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDevicePermissionsMicrophonePermissionsSettingsPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDevicePermissionsMicrophonePermissionsSettingsPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDevicePermissionsMicrophonePermissionsSettingsPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDevicePermissionsMicrophonePermissionsSettingsPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1081c4a0; body size 168 bytes.
#line 1 "ENTRY_1081c4a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081c4a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161beb7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDevicePermissionsNfcServicesPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDevicePermissionsNfcServicesPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDevicePermissionsNfcServicesPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDevicePermissionsNfcServicesPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1081c580; body size 288 bytes.
#line 1 "ENTRY_1081c580"

undefined4 * __thiscall Recovered_Bulk::FUN_1081c580(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161bf44);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x11c));
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCDevicePermissionsWizard);
    puVar2[4] = (uint)&ghidra_vftable_SCDevicePermissionsWizard;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDevicePermissionsWizard);
    puVar2[0x2a] = (uint)&ghidra_vftable_SCDevicePermissionsWizard;
    puVar2[0x43] = 0;
    puVar2[0x44] = 0;
    puVar2[0x45] = 0;
    *(undefined1 *)(puVar2 + 0x46) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10827f00; body size 84 bytes.
#line 1 "ENTRY_10827f00"

undefined4 * __fastcall FUN_10827f00(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1161d9fd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)(0);
  local_8 = (undefined4)(0);
  thunk_FUN_10c5f430(0,0);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1082a010; body size 145 bytes.
#line 1 "ENTRY_1082a010"

undefined4 * __thiscall Recovered_Bulk::FUN_1082a010(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161e20b);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEthernetRemovalAskDevicePage);
  param_1[4] = (uint)&ghidra_vftable_SCEthernetRemovalAskDevicePage;
  param_1[0x23] = (uint)&ghidra_vftable_SCEthernetRemovalAskDevicePage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCEthernetRemovalAskDevicePage;
  param_1[0x38] = 0;
  local_8 = (undefined4)(1);
  thunk_FUN_10c5f430(0,0);
  *(undefined1 *)(param_1 + 0x3b) = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1082a750; body size 130 bytes.
#line 1 "ENTRY_1082a750"

undefined4 * __thiscall Recovered_Bulk::FUN_1082a750(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161e42d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb64f0(param_2);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEthernetRemovalSuccessfulPage);
  param_1[4] = (uint)&ghidra_vftable_SCEthernetRemovalSuccessfulPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCEthernetRemovalSuccessfulPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCEthernetRemovalSuccessfulPage;
  thunk_FUN_10eb41b0(uVar1);
  thunk_FUN_10833170(param_1 + 0x38);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1082a900; body size 145 bytes.
#line 1 "ENTRY_1082a900"

undefined4 * __thiscall Recovered_Bulk::FUN_1082a900(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161e4db);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEthernetRemovalUnplugDevicePage);
  param_1[4] = (uint)&ghidra_vftable_SCEthernetRemovalUnplugDevicePage;
  param_1[0x23] = (uint)&ghidra_vftable_SCEthernetRemovalUnplugDevicePage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCEthernetRemovalUnplugDevicePage;
  param_1[0x38] = 0;
  local_8 = (undefined4)(1);
  thunk_FUN_10c5f430(0,0);
  *(undefined1 *)(param_1 + 0x3b) = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1082baf0; body size 398 bytes.
#line 1 "ENTRY_1082baf0"

void __fastcall FUN_1082baf0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161e9c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_102a3ea0((undefined4 *)(param_1 + 0x134),*(undefined4 *)(*(int *)(param_1 + 0x134) + 4))
  ;
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x134),0x14,uVar2);
  thunk_FUN_102a3ea0((undefined4 *)(param_1 + 300),*(undefined4 *)(*(int *)(param_1 + 300) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 300),0x14);
  thunk_FUN_102a3ea0((undefined4 *)(param_1 + 0x124),*(undefined4 *)(*(int *)(param_1 + 0x124) + 4))
  ;
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x124),0x14);
  thunk_FUN_102a3ea0((undefined4 *)(param_1 + 0x11c),*(undefined4 *)(*(int *)(param_1 + 0x11c) + 4))
  ;
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x11c),0x14);
  thunk_FUN_102a3ea0((undefined4 *)(param_1 + 0x114),*(undefined4 *)(*(int *)(param_1 + 0x114) + 4))
  ;
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x114),0x14);
  thunk_FUN_108288d0((undefined4 *)(param_1 + 0x10c),*(undefined4 *)(*(int *)(param_1 + 0x10c) + 4))
  ;
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x10c),0x1c);
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


// Reference entry 1082c140; body size 68 bytes.
#line 1 "ENTRY_1082c140"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c140(byte param_2)
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


// Reference entry 1082c520; body size 81 bytes.
#line 1 "ENTRY_1082c520"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c520(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1082d6b0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1082c5d0; body size 68 bytes.
#line 1 "ENTRY_1082c5d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c5d0(byte param_2)
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


// Reference entry 1082c670; body size 68 bytes.
#line 1 "ENTRY_1082c670"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c670(byte param_2)
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


// Reference entry 1082c710; body size 68 bytes.
#line 1 "ENTRY_1082c710"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c710(byte param_2)
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


// Reference entry 1082cb40; body size 131 bytes.
#line 1 "ENTRY_1082cb40"

void __thiscall Recovered_Bulk::FUN_1082cb40(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_108280a0(*param_1,param_1[1],param_1);
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
  param_1[1] = param_2 + param_3 * 0xc;
  param_1[2] = param_2 + param_4 * 0xc;
  return;
}


// Reference entry 1082d6b0; body size 117 bytes.
#line 1 "ENTRY_1082d6b0"

void __fastcall FUN_1082d6b0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_108280a0(*param_1,param_1[1],param_1);
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 1082fb70; body size 204 bytes.
#line 1 "ENTRY_1082fb70"

undefined4 * __thiscall Recovered_Bulk::FUN_1082fb70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161f3cd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCEthernetRemovalAskDevicePage);
    puVar1[4] = (uint)&ghidra_vftable_SCEthernetRemovalAskDevicePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCEthernetRemovalAskDevicePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCEthernetRemovalAskDevicePage;
    puVar1[0x38] = 0;
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    thunk_FUN_10c5f430(0,0);
    *(undefined1 *)(puVar1 + 0x3b) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1082fc70; body size 215 bytes.
#line 1 "ENTRY_1082fc70"

undefined4 * __thiscall Recovered_Bulk::FUN_1082fc70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161f417);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCEthernetRemovalCheckDevicePage);
    puVar1[4] = (uint)&ghidra_vftable_SCEthernetRemovalCheckDevicePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCEthernetRemovalCheckDevicePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCEthernetRemovalCheckDevicePage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1082fd80; body size 175 bytes.
#line 1 "ENTRY_1082fd80"

undefined4 * __thiscall Recovered_Bulk::FUN_1082fd80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161f467);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCEthernetRemovalInformDevicesPage);
    puVar1[4] = (uint)&ghidra_vftable_SCEthernetRemovalInformDevicesPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCEthernetRemovalInformDevicesPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCEthernetRemovalInformDevicesPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1082fe60; body size 168 bytes.
#line 1 "ENTRY_1082fe60"

undefined4 * __thiscall Recovered_Bulk::FUN_1082fe60(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161f4b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCEthernetRemovalMissingDevicesPage);
    puVar1[4] = (uint)&ghidra_vftable_SCEthernetRemovalMissingDevicesPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCEthernetRemovalMissingDevicesPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCEthernetRemovalMissingDevicesPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1082ff40; body size 168 bytes.
#line 1 "ENTRY_1082ff40"

undefined4 * __thiscall Recovered_Bulk::FUN_1082ff40(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161f507);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCEthernetRemovalStillWiredPage);
    puVar1[4] = (uint)&ghidra_vftable_SCEthernetRemovalStillWiredPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCEthernetRemovalStillWiredPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCEthernetRemovalStillWiredPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10830020; body size 193 bytes.
#line 1 "ENTRY_10830020"

undefined4 * __thiscall Recovered_Bulk::FUN_10830020(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161f55f);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCEthernetRemovalSuccessfulPage);
    puVar2[4] = (uint)&ghidra_vftable_SCEthernetRemovalSuccessfulPage;
    puVar2[0x23] = (uint)&ghidra_vftable_SCEthernetRemovalSuccessfulPage;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCEthernetRemovalSuccessfulPage;
    thunk_FUN_10eb41b0(uVar1);
    thunk_FUN_10833170(puVar2 + 0x38);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10830120; body size 204 bytes.
#line 1 "ENTRY_10830120"

undefined4 * __thiscall Recovered_Bulk::FUN_10830120(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161f5bd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCEthernetRemovalUnplugDevicePage);
    puVar1[4] = (uint)&ghidra_vftable_SCEthernetRemovalUnplugDevicePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCEthernetRemovalUnplugDevicePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCEthernetRemovalUnplugDevicePage;
    puVar1[0x38] = 0;
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    thunk_FUN_10c5f430(0,0);
    *(undefined1 *)(puVar1 + 0x3b) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10830250; body size 154 bytes.
#line 1 "ENTRY_10830250"

undefined4 __thiscall Recovered_Bulk::FUN_10830250(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1161f620);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  pvVar1 = (void *)(operator_new(0x13c));
  local_8 = (undefined4)(0);
  if (pvVar1 != (void *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_1082aac0(uVar2));
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 10838010; body size 198 bytes.
#line 1 "ENTRY_10838010"

undefined4 * __thiscall Recovered_Bulk::FUN_10838010(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116209ab);
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
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  puVar1 = (undefined4 *)((undefined4 *)0x0);
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(param_1 + 0x3a);
  }
  thunk_FUN_10eaafe0(puVar1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFirmwareUpdateWizard);
  param_1[4] = (uint)&ghidra_vftable_SCFirmwareUpdateWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCFirmwareUpdateWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCFirmwareUpdateWizard;
  param_1[0x40] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x41) = 0x100;
  *(undefined1 *)((int)param_1 + 0x106) = 0;
  param_1[0x42] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108386c0; body size 285 bytes.
#line 1 "ENTRY_108386c0"

void __fastcall FUN_108386c0(undefined4 *param_1)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11620b20);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFirmwareUpdateWizard);
  param_1[4] = (uint)&ghidra_vftable_SCFirmwareUpdateWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCFirmwareUpdateWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCFirmwareUpdateWizard;
  local_14 = (undefined4 *)(param_1);
  piVar3 = (int *)((int *)thunk_FUN_10bfc8e0(uVar2));
  (**(code **)(*piVar3 + 0x1c))();
  iVar4 = (int)(thunk_FUN_110828b0());
  if (iVar4 != 0) {
    local_14 = (undefined4 *)((undefined4 *)0x0);
    thunk_FUN_110978c0(&local_14);
    puVar1 = (undefined4 *)(local_14);
    local_8 = (undefined4)(0);
    if ((local_14 != (undefined4 *)0x0) && (_Memory = local_14 + -4, (int)local_14[-4] < 0xffff)) {
      iVar4 = (int)(thunk_FUN_1123fcd0(_Memory));
      if (iVar4 == 0) {
        puVar1[-2] = 0;
        puVar1[-3] = 0;
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(_Memory);
      }
    }
  }
  piVar3 = (int *)((int *)param_1[0x3e]);
  local_8 = (undefined4)(1);
  if (piVar3 != (int *)0x0) {
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    (**(code **)(*piVar3 + 8))();
  }
  piVar3 = (int *)((int *)param_1[0x3b]);
  local_8 = (undefined4)(2);
  if (piVar3 != (int *)0x0) {
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    (**(code **)(*piVar3 + 8))();
  }
  thunk_FUN_106da680();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108389c0; body size 68 bytes.
#line 1 "ENTRY_108389c0"

undefined4 * __thiscall Recovered_Bulk::FUN_108389c0(byte param_2)
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


// Reference entry 10838b10; body size 68 bytes.
#line 1 "ENTRY_10838b10"

undefined4 * __thiscall Recovered_Bulk::FUN_10838b10(byte param_2)
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


// Reference entry 10838bb0; body size 68 bytes.
#line 1 "ENTRY_10838bb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10838bb0(byte param_2)
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


// Reference entry 10838f70; body size 168 bytes.
#line 1 "ENTRY_10838f70"

undefined4 * __thiscall Recovered_Bulk::FUN_10838f70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11620e67);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFirmwareUpdateErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFirmwareUpdateErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFirmwareUpdateErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFirmwareUpdateErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10839050; body size 168 bytes.
#line 1 "ENTRY_10839050"

undefined4 * __thiscall Recovered_Bulk::FUN_10839050(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11620eb7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFirmwareUpdateIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFirmwareUpdateIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFirmwareUpdateIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFirmwareUpdateIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10839130; body size 312 bytes.
#line 1 "ENTRY_10839130"

undefined4 * __thiscall Recovered_Bulk::FUN_10839130(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11620f07);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0x120));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    puVar1[0x38] = (uint)&ghidra_vftable_RUpdateOpCallback;
    puVar1[0x39] = (uint)&ghidra_vftable_RZPUpdateProgressCB;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFirmwareUpdateUpdatingPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFirmwareUpdateUpdatingPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFirmwareUpdateUpdatingPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFirmwareUpdateUpdatingPage;
    puVar1[0x38] = (uint)&ghidra_vftable_SCFirmwareUpdateUpdatingPage;
    puVar1[0x39] = (uint)&ghidra_vftable_SCFirmwareUpdateUpdatingPage;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0xffffffff;
    puVar1[0x41] = 0xffffffff;
    puVar1[0x42] = 1;
    puVar1[0x43] = 0;
    puVar1[0x44] = 0;
    puVar1[0x45] = 0;
    puVar1[0x47] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108392c0; body size 271 bytes.
#line 1 "ENTRY_108392c0"

undefined4 * __thiscall Recovered_Bulk::FUN_108392c0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11620f86);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0x10c));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    local_8 = (undefined4)(2);
    thunk_FUN_10cf2f30(puVar1 + 0x23);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    thunk_FUN_10eaafe0(puVar1 + 0x3a);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFirmwareUpdateWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCFirmwareUpdateWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFirmwareUpdateWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFirmwareUpdateWizard;
    puVar1[0x40] = 0xffffffff;
    *(undefined2 *)(puVar1 + 0x41) = 0x100;
    *(undefined1 *)((int)puVar1 + 0x106) = 0;
    puVar1[0x42] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10839430; body size 348 bytes.
#line 1 "ENTRY_10839430"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void __thiscall Recovered_Bulk::FUN_10839430(char param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  iVar2 = (int)(thunk_FUN_105a29f0());
  if ((*(uint *)(param_1 + 0x100) & *(uint *)(param_1 + 0x104)) == 0xffffffff) {
    param_2 = (char)('\x01');
    *(int *)(param_1 + 0x100) = iVar2;
    *(int *)(param_1 + 0x104) = iVar2 >> 0x1f;
  }
  if (*(int *)(param_1 + 0xec) == 3) {
    *(double *)(param_1 + 0xf0) = DAT_118a1c50;
    cVar1 = (char)(thunk_FUN_10eba5f0());
    if (cVar1 != '\0') {
      thunk_FUN_10ebba70();
    }
  }
  else {
    cVar1 = (char)(thunk_FUN_10eba5f0());
    if (cVar1 == '\0') {
      thunk_FUN_10ebb8e0("evaluateProgress",15000);
    }
    if (param_2 != '\0') {
      dVar3 = (double)((DAT_118a1c50 - *(double *)(param_1 + 0xf0)) * (double)*(int *)(param_1 + 0x108));
      dVar4 = (double)(dVar3);
      thunk_FUN_1148b0c0();
      dVar4 = (double)((double)*(int *)(param_1 + 0x108) - (dVar4 / DAT_1189dc98) / _DAT_118dad60);
      if (dVar4 < dVar3) {
        thunk_FUN_103021f0(param_1 + 0xa8,2,
                           "increasing pre-reboot duration by 1, because remainingNeededMinutes is %.2f, remainingIdealMinutes is %.2f"
                           ,dVar3,dVar4);
        *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
        return;
      }
      thunk_FUN_103021f0(param_1 + 0xa8,2,
                         "no reason to increase duration, because remainingNeededMinutes is %.2f, remainingIdealMinutes is %.2f"
                         ,dVar3,dVar4);
      return;
    }
  }
  return;
}


// Reference entry 1083b0b0; body size 400 bytes.
#line 1 "ENTRY_1083b0b0"

undefined4 __thiscall Recovered_Bulk::FUN_1083b0b0(undefined4 param_2)
{
  int param_1 = (int )this;
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
  puStack_c = (undefined1 *)(LAB_1162133d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a321c);
  thunk_FUN_105f5920(&local_14);
  local_14 = (undefined4)(DAT_121a3218);
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
  piVar3 = (int *)((int *)thunk_FUN_106190a0(*(char *)(param_1 + 0x106) == '\0',local_54));
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0x10))(local_74,uVar2));
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_1083b1ee;
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
LAB_1083b1ee:
                    
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
  return (undefined4)(param_2);
}


// Reference entry 1083d110; body size 105 bytes.
#line 1 "ENTRY_1083d110"

void __fastcall FUN_1083d110(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116217f4);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x11c) == 0) {
    pvVar2 = (void *)(operator_new(0x30));
    local_8 = (undefined4)(0);
    if (pvVar2 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(thunk_FUN_110f8f90(uVar1));
    }
    *(undefined4 *)(param_1 + 0x11c) = uVar3;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1083e350; body size 136 bytes.
#line 1 "ENTRY_1083e350"

undefined4 __thiscall Recovered_Bulk::FUN_1083e350(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11621a0d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_2 + 8) == 1) {
    thunk_FUN_10302280(param_1 + -0x38,"----- UPnP software update completed",
                       DAT_12126b84 ^ (uint)&stack0xfffffffc);
    uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x2c));
    thunk_FUN_10dfcdc0();
    local_8 = (undefined4)(0);
    uVar1 = (undefined4)(thunk_FUN_10e09780(uVar1));
    thunk_FUN_10ebb790(uVar1);
    thunk_FUN_10def0d0();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 1083e400; body size 148 bytes.
#line 1 "ENTRY_1083e400"

undefined4 __thiscall Recovered_Bulk::FUN_1083e400(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  switch(param_3) {
  default:
    thunk_FUN_10302280(param_1 + -0x3c,"----- Update Progress: HELLO (%d%%)",param_2);
    return (undefined4)(0);
  case 1:
    thunk_FUN_10302280(param_1 + -0x3c,"----- Update Progress: DOWNLOADING... (%d%%)",param_2);
    *(undefined4 *)(param_1 + 0x34) = 2;
    return (undefined4)(0);
  case 2:
    thunk_FUN_10302280(param_1 + -0x3c,"----- Update Progress: FLASHING... (%d%%)",param_2);
    *(undefined4 *)(param_1 + 0x34) = 3;
    return (undefined4)(0);
  case 3:
    thunk_FUN_10302280(param_1 + -0x3c,"----- Update Progress: REBOOTING... (%d%%)",param_2);
    *(undefined4 *)(param_1 + 0x34) = 4;
    return (undefined4)(0);
  }
}


// Reference entry 1083f590; body size 102 bytes.
#line 1 "ENTRY_1083f590"

void __fastcall FUN_1083f590(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  *(undefined4 *)(iVar1 + 0x100) = 0xffffffff;
  thunk_FUN_10eb0d90("updateResultCode",0xffffffff);
  iVar1 = (int)(thunk_FUN_110828b0());
  if (iVar1 != 0) {
    thunk_FUN_10eb0c60("targetBaselineVersion",iVar1 + 0xad1);
  }
  *(undefined4 *)(param_1 + 0xe8) = 2;
  thunk_FUN_10ebbab0(0x20);
  thunk_FUN_10ebb8e0("startFWUpdate",0);
  return;
}


// Reference entry 1083f700; body size 78 bytes.
#line 1 "ENTRY_1083f700"

int * __thiscall Recovered_Bulk::FUN_1083f700(int *param_2)
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


// Reference entry 108411f0; body size 213 bytes.
#line 1 "ENTRY_108411f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108411f0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11622600);
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


// Reference entry 10841300; body size 213 bytes.
#line 1 "ENTRY_10841300"

undefined4 * __thiscall Recovered_Bulk::FUN_10841300(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11622660);
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
      uVar5 = (undefined4)(thunk_FUN_10a4dc00(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10a504a0(uVar3));
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


// Reference entry 10841410; body size 213 bytes.
#line 1 "ENTRY_10841410"

undefined4 * __thiscall Recovered_Bulk::FUN_10841410(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116226c0);
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


// Reference entry 10841520; body size 213 bytes.
#line 1 "ENTRY_10841520"

undefined4 * __thiscall Recovered_Bulk::FUN_10841520(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11622720);
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


// Reference entry 10841630; body size 213 bytes.
#line 1 "ENTRY_10841630"

undefined4 * __thiscall Recovered_Bulk::FUN_10841630(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11622780);
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


// Reference entry 10841740; body size 213 bytes.
#line 1 "ENTRY_10841740"

undefined4 * __thiscall Recovered_Bulk::FUN_10841740(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116227e0);
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


// Reference entry 10841850; body size 213 bytes.
#line 1 "ENTRY_10841850"

undefined4 * __thiscall Recovered_Bulk::FUN_10841850(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11622840);
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


// Reference entry 10841960; body size 213 bytes.
#line 1 "ENTRY_10841960"

undefined4 * __thiscall Recovered_Bulk::FUN_10841960(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116228a0);
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


// Reference entry 10841a70; body size 213 bytes.
#line 1 "ENTRY_10841a70"

undefined4 * __thiscall Recovered_Bulk::FUN_10841a70(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11622900);
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


// Reference entry 10841ba0; body size 213 bytes.
#line 1 "ENTRY_10841ba0"

undefined4 * __thiscall Recovered_Bulk::FUN_10841ba0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11622960);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredAccountLoginSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredAccountLoginSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredAccountLoginSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredAccountLoginSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10841db0; body size 213 bytes.
#line 1 "ENTRY_10841db0"

undefined4 * __thiscall Recovered_Bulk::FUN_10841db0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11622a20);
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
      uVar5 = (undefined4)(thunk_FUN_10a4dc00(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10a504a0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredAccountTransferSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredAccountTransferSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredAccountTransferSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredAccountTransferSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108426c0; body size 213 bytes.
#line 1 "ENTRY_108426c0"

undefined4 * __thiscall Recovered_Bulk::FUN_108426c0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11622cc0);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredFirmwareUpdateSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredFirmwareUpdateSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredFirmwareUpdateSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredFirmwareUpdateSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10842f90; body size 213 bytes.
#line 1 "ENTRY_10842f90"

undefined4 * __thiscall Recovered_Bulk::FUN_10842f90(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11622f60);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredNamePortableSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredNamePortableSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredNamePortableSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredNamePortableSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10843310; body size 213 bytes.
#line 1 "ENTRY_10843310"

undefined4 * __thiscall Recovered_Bulk::FUN_10843310(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11623080);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredProductPlacementSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredProductPlacementSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredProductPlacementSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredProductPlacementSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10843520; body size 213 bytes.
#line 1 "ENTRY_10843520"

undefined4 * __thiscall Recovered_Bulk::FUN_10843520(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11623140);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredRegisterProductSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredRegisterProductSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredRegisterProductSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredRegisterProductSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10843730; body size 213 bytes.
#line 1 "ENTRY_10843730"

undefined4 * __thiscall Recovered_Bulk::FUN_10843730(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11623200);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredRoomAllocationSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredRoomAllocationSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredRoomAllocationSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredRoomAllocationSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10843940; body size 213 bytes.
#line 1 "ENTRY_10843940"

undefined4 * __thiscall Recovered_Bulk::FUN_10843940(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116232c0);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredSecureAuthenticationSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredSecureAuthenticationSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredSecureAuthenticationSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredSecureAuthenticationSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10843e20; body size 213 bytes.
#line 1 "ENTRY_10843e20"

undefined4 * __thiscall Recovered_Bulk::FUN_10843e20(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11623440);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredUpdateCheckSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredUpdateCheckSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredUpdateCheckSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredUpdateCheckSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10845860; body size 76 bytes.
#line 1 "ENTRY_10845860"

void __fastcall FUN_10845860(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11623c90);
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


// Reference entry 108458d0; body size 76 bytes.
#line 1 "ENTRY_108458d0"

void __fastcall FUN_108458d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11623cc0);
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


// Reference entry 10845940; body size 76 bytes.
#line 1 "ENTRY_10845940"

void __fastcall FUN_10845940(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11623cf0);
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


// Reference entry 10845c60; body size 135 bytes.
#line 1 "ENTRY_10845c60"

void __fastcall FUN_10845c60(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11623d50);
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


// Reference entry 10845fc0; body size 135 bytes.
#line 1 "ENTRY_10845fc0"

void __fastcall FUN_10845fc0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11623db0);
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


// Reference entry 10846130; body size 135 bytes.
#line 1 "ENTRY_10846130"

void __fastcall FUN_10846130(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11623de0);
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


// Reference entry 10846200; body size 135 bytes.
#line 1 "ENTRY_10846200"

void __fastcall FUN_10846200(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11623e10);
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


// Reference entry 10846320; body size 135 bytes.
#line 1 "ENTRY_10846320"

void __fastcall FUN_10846320(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11623e40);
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


// Reference entry 10846530; body size 135 bytes.
#line 1 "ENTRY_10846530"

void __fastcall FUN_10846530(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11623e70);
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


// Reference entry 10846a20; body size 81 bytes.
#line 1 "ENTRY_10846a20"

int * __thiscall Recovered_Bulk::FUN_10846a20(int *param_2)
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


// Reference entry 10846a90; body size 81 bytes.
#line 1 "ENTRY_10846a90"

int * __thiscall Recovered_Bulk::FUN_10846a90(int *param_2)
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


// Reference entry 10847050; body size 68 bytes.
#line 1 "ENTRY_10847050"

undefined4 * __thiscall Recovered_Bulk::FUN_10847050(byte param_2)
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


// Reference entry 10847500; body size 68 bytes.
#line 1 "ENTRY_10847500"

undefined4 * __thiscall Recovered_Bulk::FUN_10847500(byte param_2)
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


// Reference entry 10847560; body size 68 bytes.
#line 1 "ENTRY_10847560"

undefined4 * __thiscall Recovered_Bulk::FUN_10847560(byte param_2)
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


// Reference entry 108475c0; body size 68 bytes.
#line 1 "ENTRY_108475c0"

undefined4 * __thiscall Recovered_Bulk::FUN_108475c0(byte param_2)
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


// Reference entry 10847620; body size 68 bytes.
#line 1 "ENTRY_10847620"

undefined4 * __thiscall Recovered_Bulk::FUN_10847620(byte param_2)
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


// Reference entry 10847680; body size 68 bytes.
#line 1 "ENTRY_10847680"

undefined4 * __thiscall Recovered_Bulk::FUN_10847680(byte param_2)
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


// Reference entry 108476e0; body size 68 bytes.
#line 1 "ENTRY_108476e0"

undefined4 * __thiscall Recovered_Bulk::FUN_108476e0(byte param_2)
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


// Reference entry 10847740; body size 68 bytes.
#line 1 "ENTRY_10847740"

undefined4 * __thiscall Recovered_Bulk::FUN_10847740(byte param_2)
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


// Reference entry 108477a0; body size 68 bytes.
#line 1 "ENTRY_108477a0"

undefined4 * __thiscall Recovered_Bulk::FUN_108477a0(byte param_2)
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


// Reference entry 10847800; body size 68 bytes.
#line 1 "ENTRY_10847800"

undefined4 * __thiscall Recovered_Bulk::FUN_10847800(byte param_2)
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


// Reference entry 10847860; body size 68 bytes.
#line 1 "ENTRY_10847860"

undefined4 * __thiscall Recovered_Bulk::FUN_10847860(byte param_2)
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


// Reference entry 10847900; body size 68 bytes.
#line 1 "ENTRY_10847900"

undefined4 * __thiscall Recovered_Bulk::FUN_10847900(byte param_2)
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


// Reference entry 108479a0; body size 159 bytes.
#line 1 "ENTRY_108479a0"

undefined4 * __thiscall Recovered_Bulk::FUN_108479a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11623ed0);
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


// Reference entry 10847ab0; body size 68 bytes.
#line 1 "ENTRY_10847ab0"

undefined4 * __thiscall Recovered_Bulk::FUN_10847ab0(byte param_2)
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


// Reference entry 10847ce0; body size 68 bytes.
#line 1 "ENTRY_10847ce0"

undefined4 * __thiscall Recovered_Bulk::FUN_10847ce0(byte param_2)
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


// Reference entry 10847d80; body size 68 bytes.
#line 1 "ENTRY_10847d80"

undefined4 * __thiscall Recovered_Bulk::FUN_10847d80(byte param_2)
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


// Reference entry 10847e20; body size 68 bytes.
#line 1 "ENTRY_10847e20"

undefined4 * __thiscall Recovered_Bulk::FUN_10847e20(byte param_2)
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


// Reference entry 10847ec0; body size 159 bytes.
#line 1 "ENTRY_10847ec0"

undefined4 * __thiscall Recovered_Bulk::FUN_10847ec0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11623f30);
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
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10847fd0; body size 68 bytes.
#line 1 "ENTRY_10847fd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10847fd0(byte param_2)
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


// Reference entry 10848070; body size 68 bytes.
#line 1 "ENTRY_10848070"

undefined4 * __thiscall Recovered_Bulk::FUN_10848070(byte param_2)
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


// Reference entry 10848110; body size 159 bytes.
#line 1 "ENTRY_10848110"

undefined4 * __thiscall Recovered_Bulk::FUN_10848110(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11623f60);
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
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10848220; body size 159 bytes.
#line 1 "ENTRY_10848220"

undefined4 * __thiscall Recovered_Bulk::FUN_10848220(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11623f90);
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
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10848330; body size 68 bytes.
#line 1 "ENTRY_10848330"

undefined4 * __thiscall Recovered_Bulk::FUN_10848330(byte param_2)
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


// Reference entry 108483d0; body size 159 bytes.
#line 1 "ENTRY_108483d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108483d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11623fc0);
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


// Reference entry 108484e0; body size 68 bytes.
#line 1 "ENTRY_108484e0"

undefined4 * __thiscall Recovered_Bulk::FUN_108484e0(byte param_2)
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


// Reference entry 10848580; body size 68 bytes.
#line 1 "ENTRY_10848580"

undefined4 * __thiscall Recovered_Bulk::FUN_10848580(byte param_2)
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


// Reference entry 10848620; body size 68 bytes.
#line 1 "ENTRY_10848620"

undefined4 * __thiscall Recovered_Bulk::FUN_10848620(byte param_2)
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


// Reference entry 108486c0; body size 68 bytes.
#line 1 "ENTRY_108486c0"

undefined4 * __thiscall Recovered_Bulk::FUN_108486c0(byte param_2)
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


// Reference entry 10848760; body size 159 bytes.
#line 1 "ENTRY_10848760"

undefined4 * __thiscall Recovered_Bulk::FUN_10848760(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11623ff0);
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
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10848870; body size 81 bytes.
#line 1 "ENTRY_10848870"

undefined4 * __thiscall Recovered_Bulk::FUN_10848870(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1036e480();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xec);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10848920; body size 68 bytes.
#line 1 "ENTRY_10848920"

undefined4 * __thiscall Recovered_Bulk::FUN_10848920(byte param_2)
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


// Reference entry 108489c0; body size 68 bytes.
#line 1 "ENTRY_108489c0"

undefined4 * __thiscall Recovered_Bulk::FUN_108489c0(byte param_2)
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


// Reference entry 10848f10; body size 276 bytes.
#line 1 "ENTRY_10848f10"

undefined4 * __thiscall Recovered_Bulk::FUN_10848f10(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_116243d2);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredAccountLoginSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCFixUnconfiguredAccountLoginSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredAccountLoginSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredAccountLoginSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10849070; body size 276 bytes.
#line 1 "ENTRY_10849070"

undefined4 * __thiscall Recovered_Bulk::FUN_10849070(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_11624452);
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
        uVar7 = (undefined4)(thunk_FUN_10a4dc00(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10a504a0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredAccountTransferSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCFixUnconfiguredAccountTransferSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredAccountTransferSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredAccountTransferSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108491d0; body size 198 bytes.
#line 1 "ENTRY_108491d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108491d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116244a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xec));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredConfirmRegistrationEmailPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredConfirmRegistrationEmailPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredConfirmRegistrationEmailPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredConfirmRegistrationEmailPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108492d0; body size 168 bytes.
#line 1 "ENTRY_108492d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108492d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116244f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108493b0; body size 239 bytes.
#line 1 "ENTRY_108493b0"

undefined4 * __thiscall Recovered_Bulk::FUN_108493b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11624547);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xfc));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredExistingEmailMatchPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredExistingEmailMatchPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredExistingEmailMatchPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredExistingEmailMatchPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108494e0; body size 168 bytes.
#line 1 "ENTRY_108494e0"

undefined4 * __thiscall Recovered_Bulk::FUN_108494e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11624597);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredFatalVerificationErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredFatalVerificationErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredFatalVerificationErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredFatalVerificationErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108495c0; body size 168 bytes.
#line 1 "ENTRY_108495c0"

undefined4 * __thiscall Recovered_Bulk::FUN_108495c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116245e7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredFinishConfigurationPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredFinishConfigurationPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredFinishConfigurationPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredFinishConfigurationPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108496a0; body size 276 bytes.
#line 1 "ENTRY_108496a0"

undefined4 * __thiscall Recovered_Bulk::FUN_108496a0(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_11624662);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredFirmwareUpdateSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCFixUnconfiguredFirmwareUpdateSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredFirmwareUpdateSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredFirmwareUpdateSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10849800; body size 188 bytes.
#line 1 "ENTRY_10849800"

undefined4 * __thiscall Recovered_Bulk::FUN_10849800(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116246b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredHouseholdCustomerIDPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredHouseholdCustomerIDPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredHouseholdCustomerIDPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredHouseholdCustomerIDPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108498f0; body size 168 bytes.
#line 1 "ENTRY_108498f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108498f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11624707);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredInsecureTransferDisabledPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredInsecureTransferDisabledPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredInsecureTransferDisabledPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredInsecureTransferDisabledPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108499d0; body size 168 bytes.
#line 1 "ENTRY_108499d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108499d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11624757);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10849ab0; body size 188 bytes.
#line 1 "ENTRY_10849ab0"

undefined4 * __thiscall Recovered_Bulk::FUN_10849ab0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116247a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredLoginPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredLoginPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredLoginPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredLoginPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10849ba0; body size 188 bytes.
#line 1 "ENTRY_10849ba0"

undefined4 * __thiscall Recovered_Bulk::FUN_10849ba0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116247f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredLookUpV1CertPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredLookUpV1CertPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredLookUpV1CertPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredLookUpV1CertPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10849c90; body size 276 bytes.
#line 1 "ENTRY_10849c90"

undefined4 * __thiscall Recovered_Bulk::FUN_10849c90(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_11624872);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredNamePortableSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCFixUnconfiguredNamePortableSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredNamePortableSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredNamePortableSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10849df0; body size 197 bytes.
#line 1 "ENTRY_10849df0"

undefined4 * __thiscall Recovered_Bulk::FUN_10849df0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116248c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xec));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredOutroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredOutroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredOutroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredOutroPage;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10849ef0; body size 276 bytes.
#line 1 "ENTRY_10849ef0"

undefined4 * __thiscall Recovered_Bulk::FUN_10849ef0(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_11624942);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredProductPlacementSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCFixUnconfiguredProductPlacementSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredProductPlacementSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredProductPlacementSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1084a050; body size 276 bytes.
#line 1 "ENTRY_1084a050"

undefined4 * __thiscall Recovered_Bulk::FUN_1084a050(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_116249c2);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredRegisterProductSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCFixUnconfiguredRegisterProductSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredRegisterProductSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredRegisterProductSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1084a1b0; body size 276 bytes.
#line 1 "ENTRY_1084a1b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1084a1b0(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_11624a42);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredRoomAllocationSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCFixUnconfiguredRoomAllocationSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredRoomAllocationSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredRoomAllocationSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1084a310; body size 276 bytes.
#line 1 "ENTRY_1084a310"

undefined4 * __thiscall Recovered_Bulk::FUN_1084a310(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_11624ac2);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredSecureAuthenticationSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCFixUnconfiguredSecureAuthenticationSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredSecureAuthenticationSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredSecureAuthenticationSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1084a470; body size 188 bytes.
#line 1 "ENTRY_1084a470"

undefined4 * __thiscall Recovered_Bulk::FUN_1084a470(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11624b17);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredSecureExistingPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredSecureExistingPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredSecureExistingPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredSecureExistingPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1084a560; body size 198 bytes.
#line 1 "ENTRY_1084a560"

undefined4 * __thiscall Recovered_Bulk::FUN_1084a560(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11624b67);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xec));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredSystemIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredSystemIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredSystemIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredSystemIntroPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1084a660; body size 276 bytes.
#line 1 "ENTRY_1084a660"

undefined4 * __thiscall Recovered_Bulk::FUN_1084a660(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_11624be2);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredUpdateCheckSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCFixUnconfiguredUpdateCheckSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredUpdateCheckSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredUpdateCheckSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1084a7c0; body size 168 bytes.
#line 1 "ENTRY_1084a7c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1084a7c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11624c37);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFixUnconfiguredVanishedProductErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFixUnconfiguredVanishedProductErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFixUnconfiguredVanishedProductErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFixUnconfiguredVanishedProductErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108507c0; body size 448 bytes.
#line 1 "ENTRY_108507c0"

undefined4 __stdcall FUN_108507c0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined **local_38;
  undefined4 local_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11625a25);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a326c);
  thunk_FUN_105f5920(&local_14);
  local_14 = (undefined4)(DAT_121a3270);
  local_8 = (undefined4)(0);
  thunk_FUN_105f5920(&local_14);
  local_38 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_34 = (undefined4)(0);
  iStack_30 = (int)(0);
  uStack_2c = (undefined4)(0);
  iStack_28 = (int)(0);
  local_24 = (undefined4 *)((undefined4 *)0x0);
  local_20 = (undefined4 *)((undefined4 *)0x0);
  local_1c = (int)(0);
  puVar9 = (undefined1 *)(local_58);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  uVar2 = (undefined1)(thunk_FUN_10ead000(puVar9,uVar3));
  piVar4 = (int *)((int *)thunk_FUN_106190a0(uVar2,puVar9));
  piVar5 = (int *)((int *)thunk_FUN_10cf34e0(&local_18));
  local_14 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_14 + 1)) << 8 | (uint)(*piVar5 != 0)));
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(local_14,local_78));
  uVar6 = (undefined4)((**(code **)(*piVar4 + 4))());
  thunk_FUN_105f5a00(uVar6);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  puVar1 = (undefined4 *)(local_20);
  puVar8 = (undefined4 *)(local_24);
  if (local_24 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar3 = (uint)(local_1c - (int)local_24 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_24);
    if (0xfff < uVar3) {
      puVar8 = (undefined4 *)((undefined4 *)local_24[-1]);
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uint)((int)local_24 + (-4 - (int)puVar8))) goto LAB_1085092e;
    }
    thunk_FUN_1148a50e(puVar8,uVar3);
    local_24 = (undefined4 *)((undefined4 *)0x0);
    local_20 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (int)(0);
  }
  if (iStack_30 != 0) {
    uVar3 = (uint)(iStack_28 - iStack_30 & 0xfffffffc);
    iVar7 = (int)(iStack_30);
    if (0xfff < uVar3) {
      iVar7 = (int)(*(int *)(iStack_30 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iStack_30 - iVar7) - 4U) {
LAB_1085092e:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar7,uVar3);
    iStack_30 = (int)(0);
    uStack_2c = (undefined4)(0);
    iStack_28 = (int)(0);
  }
  local_38 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10851640; body size 640 bytes.
#line 1 "ENTRY_10851640"

undefined4 __stdcall FUN_10851640(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  void *local_68;
  undefined1 *puStack_64;
  undefined4 local_60;
  undefined1 local_5c [32];
  int *local_3c;
  int *local_38;
  int *local_34;
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
  
  puVar9 = (undefined1 *)(local_5c);
  local_60 = (undefined4)(0xffffffff);
  puStack_64 = (undefined1 *)(LAB_11625c1d);
  local_68 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_68);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)puVar9);
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(&local_2c));
  local_3c = (int *)((int *)*piVar3);
  local_60 = (undefined4)(0);
  *piVar3 = (int)(0);
  local_34 = (int *)(local_3c);
  if (local_3c == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*local_3c + 0xc))());
  }
  *(unsigned char *)((char *)&local_60 + 0) = 3;
  local_38 = (int *)(piVar3);
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }
  local_8 = (undefined4)(DAT_121a32c0);
  *(unsigned char *)((char *)&local_60 + 0) = 2;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a32a8);
  *(unsigned char *)((char *)&local_60 + 0) = 4;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a32b0);
  *(unsigned char *)((char *)&local_60 + 0) = 5;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a32b4);
  *(unsigned char *)((char *)&local_60 + 0) = 6;
  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  *(unsigned char *)((char *)&local_60 + 0) = 8;
  uVar2 = (undefined1)(thunk_FUN_10c9b4c0(puVar9));
  piVar4 = (int *)((int *)thunk_FUN_106190a0(uVar2,puVar9));
  thunk_FUN_10ebc1e0();
  iVar7 = (int)(*piVar4);
  uVar2 = (undefined1)(thunk_FUN_1083d1a0(local_88));
  piVar4 = (int *)((int *)(**(code **)(iVar7 + 0xc))(uVar2));
  iVar7 = (int)(*piVar4);
  uVar2 = (undefined1)(thunk_FUN_10c9b2f0(local_a8));
  piVar4 = (int *)((int *)(**(code **)(iVar7 + 0xc))(uVar2));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0x10))(local_c8));
  uVar5 = (undefined4)((**(code **)(*piVar4 + 4))());
  thunk_FUN_105f5a00(uVar5);
  puVar1 = (undefined4 *)(local_10);
  local_60 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_60 + 1)) << 8 | (uint)(7)));
  puVar8 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar6 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_14);
    if (0xfff < uVar6) {
      puVar8 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar8))) goto LAB_1085184b;
    }
    thunk_FUN_1148a50e(puVar8,uVar6);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar6 = (uint)((iStack_18 - iStack_20 >> 2) * 4);
    iVar7 = (int)(iStack_20);
    if (0xfff < uVar6) {
      iVar7 = (int)(*(int *)(iStack_20 + -4));
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (iStack_20 - iVar7) - 4U) {
LAB_1085184b:
                    
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
  local_60 = (undefined4)(9);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_68);
  return (undefined4)(param_1);
}


// Reference entry 10851960; body size 641 bytes.
#line 1 "ENTRY_10851960"

undefined4 __stdcall FUN_10851960(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 local_c4 [32];
  undefined1 local_a4 [32];
  void *local_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  int *local_38;
  int *local_34;
  int *local_30;
  undefined **local_2c;
  undefined4 local_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 local_8;
  
  local_7c = (undefined4)(0xffffffff);
  puStack_80 = (undefined1 *)(LAB_11625c8d);
  local_84 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_84);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)local_78);
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(&local_30));
  local_38 = (int *)((int *)*piVar3);
  local_7c = (undefined4)(0);
  *piVar3 = (int)(0);
  if (local_38 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*local_38 + 0xc))());
  }
  *(unsigned char *)((char *)&local_7c + 0) = 3;
  local_34 = (int *)(piVar3);
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  local_8 = (undefined4)(DAT_121a3294);
  *(unsigned char *)((char *)&local_7c + 0) = 2;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a32a0);
  *(unsigned char *)((char *)&local_7c + 0) = 4;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a32b0);
  *(unsigned char *)((char *)&local_7c + 0) = 5;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a32b4);
  *(unsigned char *)((char *)&local_7c + 0) = 6;
  thunk_FUN_105f5920(&local_8);
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_28 = (undefined4)(0);
  iStack_24 = (int)(0);
  uStack_20 = (undefined4)(0);
  iStack_1c = (int)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (int)(0);
  puVar9 = (undefined1 *)(local_58);
  *(unsigned char *)((char *)&local_7c + 0) = 8;
  uVar2 = (undefined1)(thunk_FUN_10c9b4c0(puVar9));
  piVar4 = (int *)((int *)thunk_FUN_106190a0(uVar2,puVar9));
  thunk_FUN_10ebc1e0();
  iVar5 = (int)(*piVar4);
  uVar2 = (undefined1)(thunk_FUN_108fab30(local_78));
  piVar4 = (int *)((int *)(**(code **)(iVar5 + 0xc))(uVar2));
  iVar5 = (int)(thunk_FUN_10eb41c0());
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(*(undefined1 *)(iVar5 + 0x10e),local_a4));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0x10))(local_c4));
  uVar6 = (undefined4)((**(code **)(*piVar4 + 4))());
  thunk_FUN_105f5a00(uVar6);
  puVar1 = (undefined4 *)(local_14);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(7)));
  puVar8 = (undefined4 *)(local_18);
  if (local_18 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar7 = (uint)(local_10 - (int)local_18 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_18);
    if (0xfff < uVar7) {
      puVar8 = (undefined4 *)((undefined4 *)local_18[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_18 + (-4 - (int)puVar8))) goto LAB_10851b6c;
    }
    thunk_FUN_1148a50e(puVar8,uVar7);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (int)(0);
  }
  if (iStack_24 != 0) {
    uVar7 = (uint)((iStack_1c - iStack_24 >> 2) * 4);
    iVar5 = (int)(iStack_24);
    if (0xfff < uVar7) {
      iVar5 = (int)(*(int *)(iStack_24 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_24 - iVar5) - 4U) {
LAB_10851b6c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar7);
    iStack_24 = (int)(0);
    uStack_20 = (undefined4)(0);
    iStack_1c = (int)(0);
  }
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  local_7c = (undefined4)(9);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_84);
  return (undefined4)(param_1);
}


// Reference entry 10851c90; body size 345 bytes.
#line 1 "ENTRY_10851c90"

undefined4 __stdcall FUN_10851c90(undefined4 param_1)

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
  puStack_c = (undefined1 *)(LAB_11625cd5);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a32a4);
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_10851d9f;
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
LAB_10851d9f:
                    
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


// Reference entry 10851e40; body size 414 bytes.
#line 1 "ENTRY_10851e40"

undefined4 __stdcall FUN_10851e40(undefined4 param_1)

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
  puStack_c = (undefined1 *)(LAB_11625d1d);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a32c0);
  thunk_FUN_105f5920(&local_14);
  local_14 = (undefined4)(DAT_121a32b0);
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar8))) goto LAB_10851f8c;
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
LAB_10851f8c:
                    
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


// Reference entry 10852050; body size 641 bytes.
#line 1 "ENTRY_10852050"

undefined4 __stdcall FUN_10852050(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 local_c4 [32];
  undefined1 local_a4 [32];
  void *local_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  int *local_38;
  int *local_34;
  int *local_30;
  undefined **local_2c;
  undefined4 local_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 local_8;
  
  local_7c = (undefined4)(0xffffffff);
  puStack_80 = (undefined1 *)(LAB_11625d8d);
  local_84 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_84);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)local_78);
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(&local_30));
  local_38 = (int *)((int *)*piVar3);
  local_7c = (undefined4)(0);
  *piVar3 = (int)(0);
  if (local_38 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*local_38 + 0xc))());
  }
  *(unsigned char *)((char *)&local_7c + 0) = 3;
  local_34 = (int *)(piVar3);
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  local_8 = (undefined4)(DAT_121a3294);
  *(unsigned char *)((char *)&local_7c + 0) = 2;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a32a0);
  *(unsigned char *)((char *)&local_7c + 0) = 4;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a32b0);
  *(unsigned char *)((char *)&local_7c + 0) = 5;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a32b4);
  *(unsigned char *)((char *)&local_7c + 0) = 6;
  thunk_FUN_105f5920(&local_8);
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_28 = (undefined4)(0);
  iStack_24 = (int)(0);
  uStack_20 = (undefined4)(0);
  iStack_1c = (int)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (int)(0);
  puVar9 = (undefined1 *)(local_58);
  *(unsigned char *)((char *)&local_7c + 0) = 8;
  uVar2 = (undefined1)(thunk_FUN_10c9b4c0(puVar9));
  piVar4 = (int *)((int *)thunk_FUN_106190a0(uVar2,puVar9));
  thunk_FUN_10ebc1e0();
  iVar5 = (int)(*piVar4);
  uVar2 = (undefined1)(thunk_FUN_109a46c0(local_78));
  piVar4 = (int *)((int *)(**(code **)(iVar5 + 0xc))(uVar2));
  iVar5 = (int)(thunk_FUN_10eb41c0());
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(*(undefined1 *)(iVar5 + 0x10e),local_a4));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0x10))(local_c4));
  uVar6 = (undefined4)((**(code **)(*piVar4 + 4))());
  thunk_FUN_105f5a00(uVar6);
  puVar1 = (undefined4 *)(local_14);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(7)));
  puVar8 = (undefined4 *)(local_18);
  if (local_18 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar7 = (uint)(local_10 - (int)local_18 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_18);
    if (0xfff < uVar7) {
      puVar8 = (undefined4 *)((undefined4 *)local_18[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_18 + (-4 - (int)puVar8))) goto LAB_1085225c;
    }
    thunk_FUN_1148a50e(puVar8,uVar7);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (int)(0);
  }
  if (iStack_24 != 0) {
    uVar7 = (uint)((iStack_1c - iStack_24 >> 2) * 4);
    iVar5 = (int)(iStack_24);
    if (0xfff < uVar7) {
      iVar5 = (int)(*(int *)(iStack_24 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_24 - iVar5) - 4U) {
LAB_1085225c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar7);
    iStack_24 = (int)(0);
    uStack_20 = (undefined4)(0);
    iStack_1c = (int)(0);
  }
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  local_7c = (undefined4)(9);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_84);
  return (undefined4)(param_1);
}


// Reference entry 10852780; body size 717 bytes.
#line 1 "ENTRY_10852780"

undefined4 __stdcall FUN_10852780(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  void *local_68;
  undefined1 *puStack_64;
  undefined4 local_60;
  undefined1 local_5c [32];
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  undefined **local_2c;
  undefined4 local_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 local_8;
  
  puVar9 = (undefined1 *)(local_5c);
  local_60 = (undefined4)(0xffffffff);
  puStack_64 = (undefined1 *)(LAB_11625e98);
  local_68 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_68);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)puVar9);
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(&local_30));
  local_3c = (int *)((int *)*piVar3);
  local_60 = (undefined4)(0);
  *piVar3 = (int)(0);
  local_34 = (int *)(local_3c);
  if (local_3c == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*local_3c + 0xc))());
  }
  *(unsigned char *)((char *)&local_60 + 0) = 3;
  local_38 = (int *)(piVar3);
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  local_8 = (undefined4)(DAT_121a32c0);
  *(unsigned char *)((char *)&local_60 + 0) = 2;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a32a8);
  *(unsigned char *)((char *)&local_60 + 0) = 4;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a3298);
  *(unsigned char *)((char *)&local_60 + 0) = 5;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a32b0);
  *(unsigned char *)((char *)&local_60 + 0) = 6;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a32b4);
  *(unsigned char *)((char *)&local_60 + 0) = 7;
  thunk_FUN_105f5920(&local_8);
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_28 = (undefined4)(0);
  iStack_24 = (int)(0);
  uStack_20 = (undefined4)(0);
  iStack_1c = (int)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (int)(0);
  *(unsigned char *)((char *)&local_60 + 0) = 9;
  uVar2 = (undefined1)(thunk_FUN_10c9b4c0(puVar9));
  piVar4 = (int *)((int *)thunk_FUN_106190a0(uVar2,puVar9));
  thunk_FUN_10ebc1e0();
  iVar5 = (int)(*piVar4);
  uVar2 = (undefined1)(thunk_FUN_10eace70(local_88));
  piVar4 = (int *)((int *)(**(code **)(iVar5 + 0xc))(uVar2));
  iVar5 = (int)(thunk_FUN_10ebc1e0());
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(*(undefined1 *)(iVar5 + 0x100),local_a8));
  iVar5 = (int)(*piVar4);
  uVar2 = (undefined1)(thunk_FUN_10c9b2f0(local_c8));
  piVar4 = (int *)((int *)(**(code **)(iVar5 + 0xc))(uVar2));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0x10))(local_e8));
  uVar6 = (undefined4)((**(code **)(*piVar4 + 4))());
  thunk_FUN_105f5a00(uVar6);
  puVar1 = (undefined4 *)(local_14);
  local_60 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_60 + 1)) << 8 | (uint)(8)));
  puVar8 = (undefined4 *)(local_18);
  if (local_18 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar1; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar7 = (uint)(local_10 - (int)local_18 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_18);
    if (0xfff < uVar7) {
      puVar8 = (undefined4 *)((undefined4 *)local_18[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)local_18 + (-4 - (int)puVar8))) goto LAB_108529cd;
    }
    thunk_FUN_1148a50e(puVar8,uVar7);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (int)(0);
  }
  if (iStack_24 != 0) {
    uVar7 = (uint)((iStack_1c - iStack_24 >> 2) * 4);
    iVar5 = (int)(iStack_24);
    if (0xfff < uVar7) {
      iVar5 = (int)(*(int *)(iStack_24 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iStack_24 - iVar5) - 4U) {
LAB_108529cd:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar7);
    iStack_24 = (int)(0);
    uStack_20 = (undefined4)(0);
    iStack_1c = (int)(0);
  }
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  local_60 = (undefined4)(10);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_68);
  return (undefined4)(param_1);
}


// Reference entry 10859f20; body size 81 bytes.
#line 1 "ENTRY_10859f20"

void FUN_10859f20(void)

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


// Reference entry 10859f90; body size 81 bytes.
#line 1 "ENTRY_10859f90"

void FUN_10859f90(void)

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


// Reference entry 1085a000; body size 120 bytes.
#line 1 "ENTRY_1085a000"

void FUN_1085a000(void)

{
  undefined4 *puVar1;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11626e8d);
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


// Reference entry 1085a0a0; body size 81 bytes.
#line 1 "ENTRY_1085a0a0"

void FUN_1085a0a0(void)

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


// Reference entry 1085a110; body size 81 bytes.
#line 1 "ENTRY_1085a110"

void FUN_1085a110(void)

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


// Reference entry 1085a180; body size 120 bytes.
#line 1 "ENTRY_1085a180"

void FUN_1085a180(void)

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


// Reference entry 1085a220; body size 81 bytes.
#line 1 "ENTRY_1085a220"

void FUN_1085a220(void)

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


// Reference entry 1085b760; body size 221 bytes.
#line 1 "ENTRY_1085b760"

void __stdcall FUN_1085b760(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_20 [8];
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162734d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10eb41b0();
    uVar2 = (undefined4)(thunk_FUN_10cf34e0(&param_1));
    local_8 = (undefined4)(1);
    thunk_FUN_10351370(uVar2);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    thunk_FUN_10c5f1d0(local_18);
    puVar3 = (undefined1 *)(local_20);
    thunk_FUN_105bebd0(puVar3);
    thunk_FUN_10e111f0(puVar3);
    thunk_FUN_10c2f5a0();
    thunk_FUN_10c2da80();
    local_8 = (undefined4)(5);
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1085c890; body size 194 bytes.
#line 1 "ENTRY_1085c890"

void __fastcall FUN_1085c890(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_1c [12];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116276dd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10c2f5a0();
    thunk_FUN_10c2da80();
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_105bf780(local_1c));
    if ((undefined4 *)(param_1 + 0xe0) != puVar3) {
      thunk_FUN_1036e480();
      *(undefined4 *)(param_1 + 0xe0) = *puVar3;
      *(undefined4 *)(param_1 + 0xe4) = puVar3[1];
      *(undefined4 *)(param_1 + 0xe8) = puVar3[2];
      *puVar3 = (undefined4)(0);
      puVar3[1] = 0;
      puVar3[2] = 0;
    }
    thunk_FUN_1036e480();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1085c990; body size 162 bytes.
#line 1 "ENTRY_1085c990"

void FUN_1085c990(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11627725);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb41b0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  piVar1 = (int *)((int *)thunk_FUN_10cf34e0(&local_14));
  piVar2 = (int *)((int *)*piVar1);
  local_8 = (undefined4)(0);
  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  uVar3 = (undefined4)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_10ee48c0(0);
  thunk_FUN_10ee2ec0(uVar3);
  local_8 = (undefined4)(4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1085d9c0; body size 165 bytes.
#line 1 "ENTRY_1085d9c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1085d9c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11627abb);
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
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x23);
  }
  thunk_FUN_10d9e2b0(puVar1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantPreviewWizard);
  param_1[4] = (uint)&ghidra_vftable_SCGoogleAssistantPreviewWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCGoogleAssistantPreviewWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCGoogleAssistantPreviewWizard;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1085dcc0; body size 144 bytes.
#line 1 "ENTRY_1085dcc0"

void __fastcall FUN_1085dcc0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11627b80);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0xf8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_106da680();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1085de20; body size 68 bytes.
#line 1 "ENTRY_1085de20"

undefined4 * __thiscall Recovered_Bulk::FUN_1085de20(byte param_2)
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


// Reference entry 1085deb0; body size 68 bytes.
#line 1 "ENTRY_1085deb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1085deb0(byte param_2)
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


// Reference entry 1085df50; body size 168 bytes.
#line 1 "ENTRY_1085df50"

int __thiscall Recovered_Bulk::FUN_1085df50(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11627bb0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0xf8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x100);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 1085e080; body size 168 bytes.
#line 1 "ENTRY_1085e080"

undefined4 * __thiscall Recovered_Bulk::FUN_1085e080(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11627e67);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantPreviewIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCGoogleAssistantPreviewIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCGoogleAssistantPreviewIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCGoogleAssistantPreviewIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1085e160; body size 230 bytes.
#line 1 "ENTRY_1085e160"

undefined4 * __thiscall Recovered_Bulk::FUN_1085e160(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11627ee6);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x100));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar3);
    puVar1 = (undefined4 *)(puVar2 + 0x23);
    local_8 = (undefined4)(2);
    thunk_FUN_10cf2f30(puVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    thunk_FUN_10d9e2b0(puVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantPreviewWizard);
    puVar2[4] = (uint)&ghidra_vftable_SCGoogleAssistantPreviewWizard;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantPreviewWizard);
    puVar2[0x2a] = (uint)&ghidra_vftable_SCGoogleAssistantPreviewWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10860800; body size 122 bytes.
#line 1 "ENTRY_10860800"

undefined4 * __thiscall Recovered_Bulk::FUN_10860800(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162878d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantSetupRetrieveAccountsPage);
  param_1[4] = (uint)&ghidra_vftable_SCGoogleAssistantSetupRetrieveAccountsPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCGoogleAssistantSetupRetrieveAccountsPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCGoogleAssistantSetupRetrieveAccountsPage;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10860d90; body size 174 bytes.
#line 1 "ENTRY_10860d90"

undefined4 * __thiscall Recovered_Bulk::FUN_10860d90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162895b);
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
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x23);
  }
  thunk_FUN_10d9e2b0(puVar1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantSetupWizard);
  param_1[4] = (uint)&ghidra_vftable_SCGoogleAssistantSetupWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCGoogleAssistantSetupWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCGoogleAssistantSetupWizard;
  *(undefined2 *)(param_1 + 0x40) = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108619d0; body size 76 bytes.
#line 1 "ENTRY_108619d0"

void __fastcall FUN_108619d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11628d00);
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


// Reference entry 10861c20; body size 135 bytes.
#line 1 "ENTRY_10861c20"

void __fastcall FUN_10861c20(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11628df0);
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


// Reference entry 10861e80; body size 135 bytes.
#line 1 "ENTRY_10861e80"

void __fastcall FUN_10861e80(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11628e20);
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


// Reference entry 10862040; body size 144 bytes.
#line 1 "ENTRY_10862040"

void __fastcall FUN_10862040(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11628e50);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0xf8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_106da680();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108622f0; body size 81 bytes.
#line 1 "ENTRY_108622f0"

int * __thiscall Recovered_Bulk::FUN_108622f0(int *param_2)
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


// Reference entry 10862530; body size 68 bytes.
#line 1 "ENTRY_10862530"

undefined4 * __thiscall Recovered_Bulk::FUN_10862530(byte param_2)
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


// Reference entry 108627f0; body size 159 bytes.
#line 1 "ENTRY_108627f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108627f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11628ee0);
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


// Reference entry 10862900; body size 68 bytes.
#line 1 "ENTRY_10862900"

undefined4 * __thiscall Recovered_Bulk::FUN_10862900(byte param_2)
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


// Reference entry 108629a0; body size 68 bytes.
#line 1 "ENTRY_108629a0"

undefined4 * __thiscall Recovered_Bulk::FUN_108629a0(byte param_2)
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


// Reference entry 10862a40; body size 68 bytes.
#line 1 "ENTRY_10862a40"

undefined4 * __thiscall Recovered_Bulk::FUN_10862a40(byte param_2)
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


// Reference entry 10862ae0; body size 68 bytes.
#line 1 "ENTRY_10862ae0"

undefined4 * __thiscall Recovered_Bulk::FUN_10862ae0(byte param_2)
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


// Reference entry 10862b80; body size 68 bytes.
#line 1 "ENTRY_10862b80"

undefined4 * __thiscall Recovered_Bulk::FUN_10862b80(byte param_2)
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


// Reference entry 10862c20; body size 159 bytes.
#line 1 "ENTRY_10862c20"

undefined4 * __thiscall Recovered_Bulk::FUN_10862c20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11628f10);
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
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10862d30; body size 68 bytes.
#line 1 "ENTRY_10862d30"

undefined4 * __thiscall Recovered_Bulk::FUN_10862d30(byte param_2)
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


// Reference entry 10862dd0; body size 68 bytes.
#line 1 "ENTRY_10862dd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10862dd0(byte param_2)
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


// Reference entry 10862e70; body size 68 bytes.
#line 1 "ENTRY_10862e70"

undefined4 * __thiscall Recovered_Bulk::FUN_10862e70(byte param_2)
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


// Reference entry 10862f10; body size 168 bytes.
#line 1 "ENTRY_10862f10"

int __thiscall Recovered_Bulk::FUN_10862f10(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11628f40);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0xf8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x104);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10863a10; body size 195 bytes.
#line 1 "ENTRY_10863a10"

undefined4 * __thiscall Recovered_Bulk::FUN_10863a10(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116293c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xec));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantSetupAuthPage);
    puVar1[4] = (uint)&ghidra_vftable_SCGoogleAssistantSetupAuthPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCGoogleAssistantSetupAuthPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCGoogleAssistantSetupAuthPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10863b10; body size 168 bytes.
#line 1 "ENTRY_10863b10"

undefined4 * __thiscall Recovered_Bulk::FUN_10863b10(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11629417);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantSetupChimePage);
    puVar1[4] = (uint)&ghidra_vftable_SCGoogleAssistantSetupChimePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCGoogleAssistantSetupChimePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCGoogleAssistantSetupChimePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10863bf0; body size 168 bytes.
#line 1 "ENTRY_10863bf0"

undefined4 * __thiscall Recovered_Bulk::FUN_10863bf0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11629467);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantSetupErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCGoogleAssistantSetupErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCGoogleAssistantSetupErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCGoogleAssistantSetupErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10863cd0; body size 168 bytes.
#line 1 "ENTRY_10863cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10863cd0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116294b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantSetupIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCGoogleAssistantSetupIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCGoogleAssistantSetupIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCGoogleAssistantSetupIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10863db0; body size 168 bytes.
#line 1 "ENTRY_10863db0"

undefined4 * __thiscall Recovered_Bulk::FUN_10863db0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11629507);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantSetupMusicServicePage);
    puVar1[4] = (uint)&ghidra_vftable_SCGoogleAssistantSetupMusicServicePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCGoogleAssistantSetupMusicServicePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCGoogleAssistantSetupMusicServicePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10863e90; body size 168 bytes.
#line 1 "ENTRY_10863e90"

undefined4 * __thiscall Recovered_Bulk::FUN_10863e90(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11629557);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantSetupRemoveAccountsPage);
    puVar1[4] = (uint)&ghidra_vftable_SCGoogleAssistantSetupRemoveAccountsPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCGoogleAssistantSetupRemoveAccountsPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCGoogleAssistantSetupRemoveAccountsPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10863f70; body size 188 bytes.
#line 1 "ENTRY_10863f70"

undefined4 * __thiscall Recovered_Bulk::FUN_10863f70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116295af);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantSetupRetrieveAccountsPage);
    puVar1[4] = (uint)&ghidra_vftable_SCGoogleAssistantSetupRetrieveAccountsPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCGoogleAssistantSetupRetrieveAccountsPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCGoogleAssistantSetupRetrieveAccountsPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10864060; body size 168 bytes.
#line 1 "ENTRY_10864060"

undefined4 * __thiscall Recovered_Bulk::FUN_10864060(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116295f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantSetupSuccessPage);
    puVar1[4] = (uint)&ghidra_vftable_SCGoogleAssistantSetupSuccessPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCGoogleAssistantSetupSuccessPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCGoogleAssistantSetupSuccessPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10864140; body size 168 bytes.
#line 1 "ENTRY_10864140"

undefined4 * __thiscall Recovered_Bulk::FUN_10864140(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11629647);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantSetupTutorialPage);
    puVar1[4] = (uint)&ghidra_vftable_SCGoogleAssistantSetupTutorialPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCGoogleAssistantSetupTutorialPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCGoogleAssistantSetupTutorialPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10864220; body size 168 bytes.
#line 1 "ENTRY_10864220"

undefined4 * __thiscall Recovered_Bulk::FUN_10864220(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11629697);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantSetupWaitingPage);
    puVar1[4] = (uint)&ghidra_vftable_SCGoogleAssistantSetupWaitingPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCGoogleAssistantSetupWaitingPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCGoogleAssistantSetupWaitingPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10864300; body size 239 bytes.
#line 1 "ENTRY_10864300"

undefined4 * __thiscall Recovered_Bulk::FUN_10864300(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11629716);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x104));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar3);
    puVar1 = (undefined4 *)(puVar2 + 0x23);
    local_8 = (undefined4)(2);
    thunk_FUN_10cf2f30(puVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    thunk_FUN_10d9e2b0(puVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantSetupWizard);
    puVar2[4] = (uint)&ghidra_vftable_SCGoogleAssistantSetupWizard;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantSetupWizard);
    puVar2[0x2a] = (uint)&ghidra_vftable_SCGoogleAssistantSetupWizard;
    *(undefined2 *)(puVar2 + 0x40) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10867c70; body size 414 bytes.
#line 1 "ENTRY_10867c70"

undefined4 __thiscall Recovered_Bulk::FUN_10867c70(undefined4 param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
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
  puStack_c = (undefined1 *)(LAB_11629ead);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  (**(code **)(*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  iVar2 = (int)(thunk_FUN_105ad8f0());
  local_14 = (undefined4)(DAT_121a336c);
  thunk_FUN_105f5920(&local_14);
  local_14 = (undefined4)(DAT_121a3384);
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
  piVar3 = (int *)((int *)thunk_FUN_106190a0(iVar2 == 4,local_54));
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0x10))(local_74));
  uVar4 = (undefined4)((**(code **)(*piVar3 + 4))());
  thunk_FUN_105f5a00(uVar4);
  puVar1 = (undefined4 *)(local_1c);
  puVar6 = (undefined4 *)(local_20);
  if (local_20 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar6) != puVar1; puVar6 = puVar6 + 8) {
      (**(code **)*puVar6)(0);
    }
    uVar5 = (uint)(local_18 - (int)local_20 & 0xffffffe0);
    puVar6 = (undefined4 *)(local_20);
    if (0xfff < uVar5) {
      puVar6 = (undefined4 *)((undefined4 *)local_20[-1]);
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_10867dbc;
    }
    thunk_FUN_1148a50e(puVar6,uVar5);
    local_20 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)((undefined4 *)0x0);
    local_18 = (int)(0);
  }
  if (iStack_2c != 0) {
    uVar5 = (uint)(iStack_24 - iStack_2c & 0xfffffffc);
    iVar2 = (int)(iStack_2c);
    if (0xfff < uVar5) {
      iVar2 = (int)(*(int *)(iStack_2c + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iStack_2c - iVar2) - 4U) {
LAB_10867dbc:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar5);
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


// Reference entry 1086cd10; body size 121 bytes.
#line 1 "ENTRY_1086cd10"

void FUN_1086cd10(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 local_1c [8];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162aa2d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10cf34e0(&local_14));
  local_8 = (undefined4)(0);
  thunk_FUN_10c5f1d0(*puVar2);
  puVar3 = (undefined1 *)(local_1c);
  uVar4 = (undefined4)(0);
  thunk_FUN_10867e90(puVar3,0,uVar1);
  thunk_FUN_10f3bf40(puVar3,uVar4);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1086f290; body size 71 bytes.
#line 1 "ENTRY_1086f290"

void __thiscall Recovered_Bulk::FUN_1086f290(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4));
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      thunk_FUN_1086f2f0(param_2,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x14);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x14);
  return;
}


// Reference entry 10872dc0; body size 174 bytes.
#line 1 "ENTRY_10872dc0"

void FUN_10872dc0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined1 *param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_28 [5];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162b02d);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uVar1 = (undefined1)(*param_6);
  uVar2 = (undefined4)(*param_5);
  uVar3 = (undefined4)(*param_4);
  thunk_FUN_10118c40(param_3);
  local_8 = (undefined4)(0);
  thunk_FUN_10118c40(local_28);
  *(undefined4 *)(param_2 + 0x18) = uVar3;
  *(undefined4 *)(param_2 + 0x1c) = uVar2;
  *(undefined1 *)(param_2 + 0x20) = uVar1;
  if (0xf < local_14) {
    uVar6 = (uint)(local_14 + 1);
    iVar5 = (int)(local_28[0]);
    if (0xfff < uVar6) {
      iVar5 = (int)(*(int *)(local_28[0] + -4));
      uVar6 = (uint)(local_14 + 0x24);
      if (0x1f < (local_28[0] - iVar5) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar6,uVar4);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10872f00; body size 174 bytes.
#line 1 "ENTRY_10872f00"

void FUN_10872f00(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined1 *param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_28 [5];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162b06d);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uVar1 = (undefined1)(*param_6);
  uVar2 = (undefined4)(*param_5);
  uVar3 = (undefined4)(*param_4);
  thunk_FUN_10118c40(param_3);
  local_8 = (undefined4)(0);
  thunk_FUN_10118c40(local_28);
  *(undefined4 *)(param_2 + 0x18) = uVar3;
  *(undefined4 *)(param_2 + 0x1c) = uVar2;
  *(undefined1 *)(param_2 + 0x20) = uVar1;
  if (0xf < local_14) {
    uVar6 = (uint)(local_14 + 1);
    iVar5 = (int)(local_28[0]);
    if (0xfff < uVar6) {
      iVar5 = (int)(*(int *)(local_28[0] + -4));
      uVar6 = (uint)(local_14 + 0x24);
      if (0x1f < (local_28[0] - iVar5) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar6,uVar4);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10873f00; body size 213 bytes.
#line 1 "ENTRY_10873f00"

undefined4 * __thiscall Recovered_Bulk::FUN_10873f00(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_1162b2b0);
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
      uVar5 = (undefined4)(thunk_FUN_1087eff0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10880e90(uVar3));
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


// Reference entry 108741c0; body size 152 bytes.
#line 1 "ENTRY_108741c0"

int __thiscall Recovered_Bulk::FUN_108741c0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined1 in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1162b2ed);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  thunk_FUN_10118c40(&param_2);
  *(undefined4 *)(param_1 + 0x18) = in_stack_0000001c;
  *(undefined4 *)(param_1 + 0x1c) = in_stack_00000020;
  *(undefined1 *)(param_1 + 0x20) = in_stack_00000024;
  if (0xf < in_stack_00000018) {
    uVar3 = (uint)(in_stack_00000018 + 1);
    iVar2 = (int)(param_2);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(param_2 + -4));
      uVar3 = (uint)(in_stack_00000018 + 0x24);
      if (0x1f < (param_2 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3,uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 108742e0; body size 152 bytes.
#line 1 "ENTRY_108742e0"

int __thiscall Recovered_Bulk::FUN_108742e0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined1 in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1162b32d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  thunk_FUN_10118c40(&param_2);
  *(undefined4 *)(param_1 + 0x18) = in_stack_0000001c;
  *(undefined4 *)(param_1 + 0x1c) = in_stack_00000020;
  *(undefined1 *)(param_1 + 0x20) = in_stack_00000024;
  if (0xf < in_stack_00000018) {
    uVar3 = (uint)(in_stack_00000018 + 1);
    iVar2 = (int)(param_2);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(param_2 + -4));
      uVar3 = (uint)(in_stack_00000018 + 0x24);
      if (0x1f < (param_2 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3,uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 108744f0; body size 213 bytes.
#line 1 "ENTRY_108744f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108744f0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_1162b3f0);
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
      uVar5 = (undefined4)(thunk_FUN_1087eff0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10880e90(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHouseholdSelectionJoinHouseholdSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCHouseholdSelectionJoinHouseholdSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCHouseholdSelectionJoinHouseholdSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCHouseholdSelectionJoinHouseholdSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10875b40; body size 88 bytes.
#line 1 "ENTRY_10875b40"

int * __thiscall Recovered_Bulk::FUN_10875b40(int *param_2)
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


// Reference entry 10875dc0; body size 68 bytes.
#line 1 "ENTRY_10875dc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10875dc0(byte param_2)
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


// Reference entry 10875f10; body size 68 bytes.
#line 1 "ENTRY_10875f10"

undefined4 * __thiscall Recovered_Bulk::FUN_10875f10(byte param_2)
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


// Reference entry 10876070; body size 68 bytes.
#line 1 "ENTRY_10876070"

undefined4 * __thiscall Recovered_Bulk::FUN_10876070(byte param_2)
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


// Reference entry 10876110; body size 68 bytes.
#line 1 "ENTRY_10876110"

undefined4 * __thiscall Recovered_Bulk::FUN_10876110(byte param_2)
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


// Reference entry 108761b0; body size 68 bytes.
#line 1 "ENTRY_108761b0"

undefined4 * __thiscall Recovered_Bulk::FUN_108761b0(byte param_2)
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


// Reference entry 10876250; body size 68 bytes.
#line 1 "ENTRY_10876250"

undefined4 * __thiscall Recovered_Bulk::FUN_10876250(byte param_2)
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


// Reference entry 108762f0; body size 68 bytes.
#line 1 "ENTRY_108762f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108762f0(byte param_2)
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


// Reference entry 10877390; body size 168 bytes.
#line 1 "ENTRY_10877390"

undefined4 * __thiscall Recovered_Bulk::FUN_10877390(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162bb97);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCHouseholdSelectionIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCHouseholdSelectionIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCHouseholdSelectionIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCHouseholdSelectionIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10877470; body size 276 bytes.
#line 1 "ENTRY_10877470"

undefined4 * __thiscall Recovered_Bulk::FUN_10877470(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_1162bc12);
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
        uVar7 = (undefined4)(thunk_FUN_1087eff0(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10880e90(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCHouseholdSelectionJoinHouseholdSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCHouseholdSelectionJoinHouseholdSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCHouseholdSelectionJoinHouseholdSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCHouseholdSelectionJoinHouseholdSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108775d0; body size 168 bytes.
#line 1 "ENTRY_108775d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108775d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162bc67);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCHouseholdSelectionSystemPage);
    puVar1[4] = (uint)&ghidra_vftable_SCHouseholdSelectionSystemPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCHouseholdSelectionSystemPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCHouseholdSelectionSystemPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108776b0; body size 178 bytes.
#line 1 "ENTRY_108776b0"

undefined4 * __thiscall Recovered_Bulk::FUN_108776b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162bcb7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCHouseholdSelectionSystemSearchPage);
    puVar1[4] = (uint)&ghidra_vftable_SCHouseholdSelectionSystemSearchPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCHouseholdSelectionSystemSearchPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCHouseholdSelectionSystemSearchPage;
    puVar1[0x38] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10877790; body size 168 bytes.
#line 1 "ENTRY_10877790"

undefined4 * __thiscall Recovered_Bulk::FUN_10877790(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162bd07);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCHouseholdSelectionUnknownHouseholdPage);
    puVar1[4] = (uint)&ghidra_vftable_SCHouseholdSelectionUnknownHouseholdPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCHouseholdSelectionUnknownHouseholdPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCHouseholdSelectionUnknownHouseholdPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1087b960; body size 398 bytes.
#line 1 "ENTRY_1087b960"

undefined4 __thiscall Recovered_Bulk::FUN_1087b960(undefined4 param_2)
{
  int param_1 = (int )this;
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
  puStack_c = (undefined1 *)(LAB_1162c57d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a3414);
  thunk_FUN_105f5920(&local_14);
  local_14 = (undefined4)(DAT_121a341c);
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
  piVar3 = (int *)((int *)thunk_FUN_106190a0(*(undefined1 *)(param_1 + 0x118),local_54));
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0x10))(local_74,uVar2));
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_1087ba9c;
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
LAB_1087ba9c:
                    
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
  return (undefined4)(param_2);
}


// Reference entry 1087e440; body size 192 bytes.
#line 1 "ENTRY_1087e440"

undefined4 * __thiscall Recovered_Bulk::FUN_1087e440(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162cca9);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIncompleteWirelessConnectWizard);
  param_1[4] = (uint)&ghidra_vftable_SCIncompleteWirelessConnectWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCIncompleteWirelessConnectWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCIncompleteWirelessConnectWizard;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1087e5d0; body size 186 bytes.
#line 1 "ENTRY_1087e5d0"

void __fastcall FUN_1087e5d0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1162cd20);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
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


// Reference entry 1087e700; body size 210 bytes.
#line 1 "ENTRY_1087e700"

int __thiscall Recovered_Bulk::FUN_1087e700(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1162cd50);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
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
    thunk_FUN_1148a50e(param_1,0x10c);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 1087e840; body size 251 bytes.
#line 1 "ENTRY_1087e840"

undefined4 * __thiscall Recovered_Bulk::FUN_1087e840(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162d044);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x10c));
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCIncompleteWirelessConnectWizard);
    puVar2[4] = (uint)&ghidra_vftable_SCIncompleteWirelessConnectWizard;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCIncompleteWirelessConnectWizard);
    puVar2[0x2a] = (uint)&ghidra_vftable_SCIncompleteWirelessConnectWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1087fcb0; body size 213 bytes.
#line 1 "ENTRY_1087fcb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1087fcb0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_1162d670);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x124));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_105f5740(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_105fd180(uVar3));
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


// Reference entry 10880c80; body size 213 bytes.
#line 1 "ENTRY_10880c80"

undefined4 * __thiscall Recovered_Bulk::FUN_10880c80(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_1162daf0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x124));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_105f5740(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_105fd180(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinExistingWifiConfigSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCJoinExistingWifiConfigSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCJoinExistingWifiConfigSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCJoinExistingWifiConfigSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10882090; body size 135 bytes.
#line 1 "ENTRY_10882090"

void __fastcall FUN_10882090(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1162e080);
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


// Reference entry 108828e0; body size 68 bytes.
#line 1 "ENTRY_108828e0"

undefined4 * __thiscall Recovered_Bulk::FUN_108828e0(byte param_2)
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


// Reference entry 10882bb0; body size 68 bytes.
#line 1 "ENTRY_10882bb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10882bb0(byte param_2)
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


// Reference entry 10882c10; body size 68 bytes.
#line 1 "ENTRY_10882c10"

undefined4 * __thiscall Recovered_Bulk::FUN_10882c10(byte param_2)
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


// Reference entry 10882cb0; body size 68 bytes.
#line 1 "ENTRY_10882cb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10882cb0(byte param_2)
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


// Reference entry 10882d50; body size 68 bytes.
#line 1 "ENTRY_10882d50"

undefined4 * __thiscall Recovered_Bulk::FUN_10882d50(byte param_2)
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


// Reference entry 10882df0; body size 68 bytes.
#line 1 "ENTRY_10882df0"

undefined4 * __thiscall Recovered_Bulk::FUN_10882df0(byte param_2)
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


// Reference entry 10882e90; body size 68 bytes.
#line 1 "ENTRY_10882e90"

undefined4 * __thiscall Recovered_Bulk::FUN_10882e90(byte param_2)
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


// Reference entry 10882f30; body size 68 bytes.
#line 1 "ENTRY_10882f30"

undefined4 * __thiscall Recovered_Bulk::FUN_10882f30(byte param_2)
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


// Reference entry 10882fd0; body size 68 bytes.
#line 1 "ENTRY_10882fd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10882fd0(byte param_2)
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


// Reference entry 10883070; body size 159 bytes.
#line 1 "ENTRY_10883070"

undefined4 * __thiscall Recovered_Bulk::FUN_10883070(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1162e120);
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
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10883180; body size 68 bytes.
#line 1 "ENTRY_10883180"

undefined4 * __thiscall Recovered_Bulk::FUN_10883180(byte param_2)
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


// Reference entry 10883220; body size 68 bytes.
#line 1 "ENTRY_10883220"

undefined4 * __thiscall Recovered_Bulk::FUN_10883220(byte param_2)
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


// Reference entry 108832c0; body size 68 bytes.
#line 1 "ENTRY_108832c0"

undefined4 * __thiscall Recovered_Bulk::FUN_108832c0(byte param_2)
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


// Reference entry 10883360; body size 68 bytes.
#line 1 "ENTRY_10883360"

undefined4 * __thiscall Recovered_Bulk::FUN_10883360(byte param_2)
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


// Reference entry 10883400; body size 184 bytes.
#line 1 "ENTRY_10883400"

int __thiscall Recovered_Bulk::FUN_10883400(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1162e150);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 0xfc)))->int_release();
  *(undefined4 *)(param_1 + 0xfc) = 0;
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)(param_1 + 0xf8)))->int_release();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x100);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10883630; body size 68 bytes.
#line 1 "ENTRY_10883630"

undefined4 * __thiscall Recovered_Bulk::FUN_10883630(byte param_2)
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


// Reference entry 10883be0; body size 320 bytes.
#line 1 "ENTRY_10883be0"

undefined4 * __stdcall FUN_10883be0(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int *local_20;
  SCStr local_1c [4];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162e522);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uVar5 = (uint)(0);
  local_14 = (uint)(0);
  pvVar2 = (void *)(operator_new(0xb8));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    ((SCStr *)(local_1c))->int_allocRep("");
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    local_14 = (uint)(1);
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("");
    local_8 = (undefined4)(2);
    local_14 = (uint)(3);
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_10cf34e0(&local_20));
    local_8 = (undefined4)(3);
    uVar5 = (uint)(7);
    local_14 = (uint)(7);
    piVar4 = (int *)((int *)thunk_FUN_10f3ca70(*puVar3,4,1,0,&local_18,local_1c,3));
  }
  local_8 = (undefined4)(6);
  *param_1 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar1);
  }
  uVar1 = (uint)(uVar5 | 8);
  if ((uVar5 & 4) != 0) {
    uVar1 = (uint)(uVar5 & 0xfffffffb | 8);
    local_8 = (undefined4)(7);
    local_14 = (uint)(uVar1);
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
  }
  if ((uVar1 & 2) != 0) {
    uVar1 = (uint)(uVar1 & 0xfffffffd);
    local_8 = (undefined4)(8);
    local_14 = (uint)(uVar1);
    ((SCStr *)((SCStr *)&local_18))->int_release();
    local_18 = (undefined4)(0);
  }
  if ((uVar1 & 1) != 0) {
    local_8 = (undefined4)(9);
    ((SCStr *)(local_1c))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10883d70; body size 168 bytes.
#line 1 "ENTRY_10883d70"

undefined4 * __thiscall Recovered_Bulk::FUN_10883d70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162e577);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinExistingAutoJoinPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinExistingAutoJoinPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinExistingAutoJoinPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinExistingAutoJoinPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10883e50; body size 178 bytes.
#line 1 "ENTRY_10883e50"

undefined4 * __thiscall Recovered_Bulk::FUN_10883e50(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162e5c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinExistingButtonPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinExistingButtonPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinExistingButtonPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinExistingButtonPage;
    puVar1[0x38] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10883f30; body size 168 bytes.
#line 1 "ENTRY_10883f30"

undefined4 * __thiscall Recovered_Bulk::FUN_10883f30(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162e617);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinExistingConnectingPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinExistingConnectingPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinExistingConnectingPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinExistingConnectingPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10884010; body size 168 bytes.
#line 1 "ENTRY_10884010"

undefined4 * __thiscall Recovered_Bulk::FUN_10884010(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162e667);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinExistingNearbyHouseholdPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinExistingNearbyHouseholdPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinExistingNearbyHouseholdPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinExistingNearbyHouseholdPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108840f0; body size 168 bytes.
#line 1 "ENTRY_108840f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108840f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162e6b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinExistingNoButtonPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinExistingNoButtonPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinExistingNoButtonPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinExistingNoButtonPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108841d0; body size 168 bytes.
#line 1 "ENTRY_108841d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108841d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162e707);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinExistingNoConnectionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinExistingNoConnectionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinExistingNoConnectionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinExistingNoConnectionPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108842b0; body size 168 bytes.
#line 1 "ENTRY_108842b0"

undefined4 * __thiscall Recovered_Bulk::FUN_108842b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162e757);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinExistingNoHouseholdPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinExistingNoHouseholdPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinExistingNoHouseholdPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinExistingNoHouseholdPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10884390; body size 188 bytes.
#line 1 "ENTRY_10884390"

undefined4 * __thiscall Recovered_Bulk::FUN_10884390(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162e7a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinExistingNotificationPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinExistingNotificationPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinExistingNotificationPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinExistingNotificationPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10884480; body size 168 bytes.
#line 1 "ENTRY_10884480"

undefined4 * __thiscall Recovered_Bulk::FUN_10884480(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162e7f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinExistingRouterChangedPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinExistingRouterChangedPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinExistingRouterChangedPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinExistingRouterChangedPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10884560; body size 178 bytes.
#line 1 "ENTRY_10884560"

undefined4 * __thiscall Recovered_Bulk::FUN_10884560(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162e847);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinExistingSearchPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinExistingSearchPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinExistingSearchPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinExistingSearchPage;
    puVar1[0x38] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10884640; body size 177 bytes.
#line 1 "ENTRY_10884640"

undefined4 * __thiscall Recovered_Bulk::FUN_10884640(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162e897);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinExistingSuccessPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinExistingSuccessPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinExistingSuccessPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinExistingSuccessPage;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10884720; body size 276 bytes.
#line 1 "ENTRY_10884720"

undefined4 * __thiscall Recovered_Bulk::FUN_10884720(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_1162e912);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
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
        uVar7 = (undefined4)(thunk_FUN_105f5740(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_105fd180(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCJoinExistingWifiConfigSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCJoinExistingWifiConfigSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCJoinExistingWifiConfigSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCJoinExistingWifiConfigSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10884880; body size 168 bytes.
#line 1 "ENTRY_10884880"

undefined4 * __thiscall Recovered_Bulk::FUN_10884880(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162e967);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinExistingWrongProductPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinExistingWrongProductPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinExistingWrongProductPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinExistingWrongProductPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10884960; body size 263 bytes.
#line 1 "ENTRY_10884960"

undefined4 * __thiscall Recovered_Bulk::FUN_10884960(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1162e9f4);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0x100));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    local_8 = (undefined4)(2);
    thunk_FUN_10cf2f30(puVar1 + 0x23);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinExistingWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinExistingWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinExistingWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinExistingWizard;
    *(undefined2 *)(puVar1 + 0x3d) = 0;
    ((SCStr *)((SCStr *)(puVar1 + 0x3e)))->int_allocRep("");
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    ((SCStr *)((SCStr *)(puVar1 + 0x3f)))->int_allocRep("");
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1088aba0; body size 472 bytes.
#line 1 "ENTRY_1088aba0"

undefined4 __thiscall Recovered_Bulk::FUN_1088aba0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
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
  puStack_70 = (undefined1 *)(LAB_1162f735);
  local_74 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)local_68);
  ExceptionList = (void *)(&local_74);
  local_8 = (undefined4)(DAT_121a34b8);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a34b4);
  local_6c = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a34b8);
  *(unsigned char *)((char *)&local_6c + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(3)));
  piVar3 = (int *)((int *)thunk_FUN_106190a0(*(undefined1 *)((int)param_1 + 0xf5),local_48));
  iVar6 = (int)(*piVar3);
  (**(code **)(*param_1 + 8))(local_68,uVar2);
  iVar4 = (int)(thunk_FUN_105ad8f0());
  piVar3 = (int *)((int *)(**(code **)(iVar6 + 0xc))(iVar4 == 6));
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0x10))(local_94));
  uVar5 = (undefined4)((**(code **)(*piVar3 + 4))());
  thunk_FUN_105f5a00(uVar5);
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
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar7))) goto LAB_1088ad1d;
    }
    thunk_FUN_1148a50e(puVar7,uVar2);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar2 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar6 = (int)(iStack_20);
    if (0xfff < uVar2) {
      iVar6 = (int)(*(int *)(iStack_20 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iStack_20 - iVar6) - 4U) {
LAB_1088ad1d:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar6,uVar2);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_74);
  return (undefined4)(param_2);
}


// Reference entry 1088f670; body size 138 bytes.
#line 1 "ENTRY_1088f670"

undefined4 FUN_1088f670(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  __time64_t *p_Var3;
  __time64_t _Time1;
  double local_c;
  
  iVar2 = (int)(thunk_FUN_106ab850(&local_c,param_1));
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)));
    if (!bVar1) {
      _Time1 = (__time64_t)(_time64((__time64_t *)0x0));
      p_Var3 = (__time64_t *)((__time64_t *)thunk_FUN_10882500(param_1));
      local_c = (double)(_difftime64(_Time1,*p_Var3));
      if (local_c <= DAT_118df208) {
        return (undefined4)(1);
      }
      thunk_FUN_106be860(param_1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1088fe90; body size 666 bytes.
#line 1 "ENTRY_1088fe90"

void __fastcall FUN_1088fe90(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int *local_20;
  undefined4 local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116303ad);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar3 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar2 == '\0') {
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("wrongButton");
    local_8 = (undefined4)(1);
    uVar3 = (undefined4)(thunk_FUN_10df6f00(&local_14));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    cVar2 = (char)(thunk_FUN_10def450(uVar3));
    thunk_FUN_10def0d0();
    local_8 = (undefined4)(3);
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_8 = (undefined4)(0xffffffff);
    if (cVar2 == '\0') {
      uVar3 = (undefined4)(thunk_FUN_10dfc5e0());
      local_8 = (undefined4)(4);
      cVar2 = (char)(thunk_FUN_10def450(uVar3));
      local_8 = (undefined4)(0xffffffff);
      thunk_FUN_10def0d0();
      if (cVar2 != '\0') {
        ((SCStr *)((SCStr *)&local_14))->int_allocRep("productUdn");
        local_8 = (undefined4)(5);
        thunk_FUN_10df0fb0(&stack0x00000004,&local_14);
        *(unsigned char *)((char *)&local_8 + 0) = 8;
        ((SCStr *)((SCStr *)&local_14))->int_release();
        uVar3 = (undefined4)(0xc);
        local_14 = (int *)((int *)0x0);
        *(unsigned char *)((char *)&local_8 + 0) = 7;
        ((SCStr *)((SCStr *)&stack0x00000004))->substr((uint)&local_1c,7);
        *(unsigned char *)((char *)&local_8 + 0) = 9;
        piVar4 = (int *)((int *)thunk_FUN_1033cdf0(&local_14,&local_1c,0));
        piVar1 = (int *)((int *)*piVar4);
        *(unsigned char *)((char *)&local_8 + 0) = 10;
        *piVar4 = (int)(0);
        if (piVar1 == (int *)0x0) {
          piVar4 = (int *)((int *)0x0);
        }
        else {
          piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar3));
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0xd;
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 8))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0xc;
        uVar3 = (undefined4)(thunk_FUN_10c94600(&local_20,piVar1));
        *(unsigned char *)((char *)&local_8 + 0) = 0xe;
        thunk_FUN_10351370(uVar3);
        *(unsigned char *)((char *)&local_8 + 0) = 0x11;
        if (local_20 != (int *)0x0) {
          (**(code **)(*local_20 + 8))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0x10;
        if (local_18 != 0) {
          thunk_FUN_10eb41b0();
          cVar2 = (char)(thunk_FUN_1088f670(&stack0x00000004));
          if (cVar2 == '\0') {
            thunk_FUN_10eb41b0();
            thunk_FUN_10cf3780(local_18);
            cVar2 = (char)(thunk_FUN_10c9a470());
            if (cVar2 == '\0') {
              thunk_FUN_108836f0(&stack0x00000004);
            }
          }
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0x12;
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 8))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0x13;
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 8))();
        }
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x14)));
        ((SCStr *)((SCStr *)&local_1c))->int_release();
        local_1c = (undefined4)(0);
        local_8 = (undefined4)(0x15);
        ((SCStr *)((SCStr *)&stack0x00000004))->int_release();
      }
    }
    else {
      switch(*(undefined4 *)(param_1 + 0xe0)) {
      case 0:
        *(undefined4 *)(param_1 + 0xe0) = 2;
        ExceptionList = (void *)(local_10);
        return;
      case 1:
        *(undefined4 *)(param_1 + 0xe0) = 0;
        ExceptionList = (void *)(local_10);
        return;
      case 2:
        *(undefined4 *)(param_1 + 0xe0) = 3;
        ExceptionList = (void *)(local_10);
        return;
      case 3:
        *(undefined4 *)(param_1 + 0xe0) = 1;
        ExceptionList = (void *)(local_10);
        return;
      }
    }
    ExceptionList = (void *)(local_10);
    return;
  }
  thunk_FUN_10ebbab0(0x40);
  uVar3 = (undefined4)(0);
  thunk_FUN_10eb41b0(0);
  thunk_FUN_10cf3780(uVar3);
  thunk_FUN_10ebb8e0("timeout",60000);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10891080; body size 528 bytes.
#line 1 "ENTRY_10891080"

void __fastcall FUN_10891080(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11630735);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfda60(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(0);
    *(undefined4 *)(param_1 + 0xe0) = 0;
    thunk_FUN_10eb41b0(0);
    thunk_FUN_10cf3780(uVar2);
    thunk_FUN_10342f60(0x1f);
    thunk_FUN_10ebb8e0("polling",2000);
    thunk_FUN_10ebb8e0("timeout",10000);
    ExceptionList = (void *)(local_10);
    return;
  }
  ((SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("polling");
  local_8 = (undefined4)(1);
  uVar2 = (undefined4)(thunk_FUN_10dfd7b0(&stack0x00000004));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(3);
  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 == '\0') {
    ((SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("timeout");
    local_8 = (undefined4)(4);
    uVar2 = (undefined4)(thunk_FUN_10dfd7b0(&stack0x00000004));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    cVar1 = (char)(thunk_FUN_10def450(uVar2));
    thunk_FUN_10def0d0();
    local_8 = (undefined4)(6);
    ((SCStr *)((SCStr *)&stack0x00000004))->int_release();
    local_8 = (undefined4)(0xffffffff);
    if (cVar1 != '\0') {
      thunk_FUN_10eb41b0();
      uVar2 = (undefined4)(thunk_FUN_10891890());
      *(undefined4 *)(param_1 + 0xe0) = uVar2;
      ExceptionList = (void *)(local_10);
      return;
    }
    uVar2 = (undefined4)(thunk_FUN_10dfbbe0());
    local_8 = (undefined4)(7);
    cVar1 = (char)(thunk_FUN_10def450(uVar2));
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_10def0d0();
    if (cVar1 != '\0') {
      thunk_FUN_10342f40(0x1f);
    }
  }
  else {
    thunk_FUN_10eb41b0();
    iVar3 = (int)(thunk_FUN_10891890());
    *(int *)(param_1 + 0xe0) = iVar3;
    if (iVar3 == 0) {
      thunk_FUN_10ebb8e0("polling",500);
      ExceptionList = (void *)(local_10);
      return;
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10891320; body size 949 bytes.
#line 1 "ENTRY_10891320"

void __thiscall Recovered_Bulk::FUN_10891320(int *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SCLibrary *this_;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *local_34;
  int *local_30;
  int *local_28;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11630829);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar3 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar3));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 == '\0') {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("continue");
    local_8 = (undefined4)(7);
    uVar3 = (undefined4)(thunk_FUN_10df6f00(&param_2));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    cVar1 = (char)(thunk_FUN_10def450(uVar3));
    thunk_FUN_10def0d0();
    local_8 = (undefined4)(9);
    ((SCStr *)((SCStr *)&param_2))->int_release();
    local_8 = (undefined4)(0xffffffff);
    if (cVar1 == '\0') {
      ExceptionList = (void *)(local_10);
      return;
    }
    if (*(char *)(param_1 + 0xe1) != '\0') {
      ExceptionList = (void *)(local_10);
      return;
    }
    *(undefined1 *)(param_1 + 0xe1) = 1;
    uVar3 = (undefined4)(createPropertyBag());
    local_8 = (undefined4)(10);
    thunk_FUN_101aa9f0(uVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("OnlineUpdateSetup");
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    (**(code **)(*local_34 + 0x40))(&param_2,1);
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    ((SCStr *)((SCStr *)&param_2))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    piVar6 = (int *)((int *)thunk_FUN_10cb8420(&local_1c,0,local_34));
    piVar7 = (int *)((int *)*piVar6);
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    *piVar6 = (int)(0);
    if (piVar7 == (int *)0x0) {
      local_28 = (int *)((int *)0x0);
    }
    else {
      local_28 = (int *)((int *)(**(code **)(*piVar7 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x13;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x12;
    piVar6 = (int *)(operator_new(0x1c));
    param_2 = (int *)(piVar6);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      *piVar6 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar6[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      piVar6[2] = 0;
      piVar6[3] = 0;
      *(undefined2 *)(piVar6 + 4) = 0;
      *piVar6 = (int)((int)(uint)&ghidra_vftable_SCDisplayWizardActionDescriptor);
      *(unsigned char *)((char *)&local_8 + 0) = 0x17;
      piVar6[5] = (int)piVar7;
      piVar6[6] = 0;
      if (piVar7 != (int *)0x0) {
        piVar7 = (int *)((int *)(**(code **)(*piVar7 + 0xc))());
        piVar6[6] = (int)piVar7;
        (**(code **)(*piVar7 + 4))();
      }
    }
    piVar7 = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x12;
    local_14 = (int *)((int *)0x0);
    local_18 = (int *)(piVar6);
    if (piVar6 != (int *)0x0) {
      piVar7 = (int *)(piVar6);
      if (*(code **)(*piVar6 + 0xc) != thunk_FUN_101da390) {
        piVar7 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
      }
      local_14 = (int *)(piVar7);
      (**(code **)(*piVar7 + 4))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x18;
    piVar8 = (int *)(operator_new(0x2c));
    param_2 = (int *)(piVar8);
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)((int *)0x0);
    }
    else {
      *piVar8 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar8[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      piVar8[2] = (int)(uint)&ghidra_vftable_SCIActionDelegateCB;
      piVar8[3] = 0;
      piVar8[4] = 0;
      *piVar8 = (int)((int)(uint)&ghidra_vftable_SCOpPerformAction);
      piVar8[2] = (int)(uint)&ghidra_vftable_SCOpPerformAction;
      *(unsigned char *)((char *)&local_8 + 0) = 0x1b;
      piVar8[5] = (int)piVar6;
      piVar8[6] = 0;
      if (piVar6 != (int *)0x0) {
        piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
        piVar8[6] = (int)piVar6;
        (**(code **)(*piVar6 + 4))();
      }
      piVar8[7] = 0;
      piVar8[8] = 0;
      *(undefined1 *)(piVar8 + 9) = 0;
      piVar8[10] = 0;
    }
    piVar6 = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x18;
    local_1c = (int *)((int *)0x0);
    if (piVar8 != (int *)0x0) {
      piVar6 = (int *)(piVar8);
      if (*(code **)(*piVar8 + 0xc) != thunk_FUN_101bb8a0) {
        piVar6 = (int *)((int *)(**(code **)(*piVar8 + 0xc))());
      }
      local_1c = (int *)(piVar6);
      (**(code **)(*piVar6 + 4))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x1c;
    thunk_FUN_10ebb810("displayWizard",piVar8,0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x1d;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x1e;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1f)));
    if (local_28 != (int *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_8 = (undefined4)(0x20);
  }
  else {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep((char *)0x0);
    local_8 = (undefined4)(1);
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_101da4a0(&local_14));
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    (**(code **)(*(int *)*puVar4 + 0x24))(&param_2);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(4);
    ((SCStr *)((SCStr *)&param_2))->int_release();
    puVar4 = (undefined4 *)(&param_2);
    local_8 = (undefined4)(0xffffffff);
    this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    puVar5 = (undefined4 *)((undefined4 *)((SCLibrary *)(this_))->getSCHousehold());
    local_8 = (undefined4)(5);
    uVar2 = (undefined1)((**(code **)(*(int *)*puVar5 + 0x184))(puVar4));
    *(undefined1 *)(param_1 + 0xe0) = uVar2;
    local_8 = (undefined4)(6);
    local_30 = (int *)(param_2);
  }
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10891890; body size 593 bytes.
#line 1 "ENTRY_10891890"

int * FUN_10891890(void)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  uint uVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int **local_20;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116308bd);
  local_10 = (void *)(ExceptionList);
  uVar5 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar6 = (int *)((int *)createSCStringArray());
  local_30 = (int *)((int *)*piVar6);
  local_8 = (undefined4)(0);
  *piVar6 = (int)(0);
  if (local_30 == (int *)0x0) {
    local_2c = (int *)((int *)0x0);
  }
  else {
    local_2c = (int *)((int *)(**(code **)(*local_30 + 0xc))(uVar5));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_105c12d0(&local_28);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  uVar4 = (undefined1)((undefined1)local_8);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  local_18 = (int *)(local_24);
  piVar6 = (int *)(local_24);
  if (local_24 == (int *)0x1) {
    local_3c = (int *)((int *)0x0);
    local_38 = (int *)((int *)0x0);
    local_34 = (int *)((int *)0x0);
    piVar6 = (int *)(*(int **)(*local_28 + 0x28));
    local_14 = (int *)(*(int **)(*local_28 + 0x2c));
    piVar9 = (int *)(local_38);
    if (piVar6 != (int *)(local_14)) {
      uVar5 = (uint)((int)local_14 - (int)piVar6 >> 3);
      if (0x1fffffff < uVar5) {
LAB_10891adc:
        *(unsigned char *)((char *)&local_8 + 0) = uVar4;
                    
        thunk_FUN_1012a2a0();
      }
      uVar1 = (uint)(uVar5 * 8);
      if (uVar1 < 0x1000) {
        if (uVar1 == 0) {
          piVar9 = (int *)((int *)0x0);
        }
        else {
          piVar9 = (int *)(operator_new(uVar1));
        }
      }
      else {
        if (uVar1 + 0x23 <= uVar1) goto LAB_10891adc;
        pvVar7 = (void *)(operator_new(uVar1 + 0x23));
        if (pvVar7 == (void *)0x0) goto LAB_10891a85;
        piVar9 = (int *)((int *)((int)pvVar7 + 0x23U & 0xffffffe0));
        piVar9[-1] = (int)pvVar7;
      }
      piVar3 = (int *)(local_14);
      local_34 = (int *)(piVar9 + uVar5 * 2);
      local_20 = (int **)(&local_3c);
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      local_3c = (int *)(piVar9);
      local_38 = (int *)(piVar9);
      do {
        *piVar9 = (int)(*piVar6);
        piVar2 = (int *)((int *)piVar6[1]);
        piVar9[1] = (int)piVar2;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))();
        }
        piVar9 = (int *)(piVar9 + 2);
        piVar6 = (int *)(piVar6 + 2);
      } while ((int *)(piVar6) != piVar3);
    }
    local_38 = (int *)(piVar9);
    piVar6 = (int *)(local_18);
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    puVar8 = (undefined4 *)((undefined4 *)thunk_FUN_10c94600(&local_18,*local_3c));
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    thunk_FUN_10cf3780(*puVar8);
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    piVar3 = (int *)(local_38);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    uVar4 = (undefined1)((undefined1)local_8);
    piVar9 = (int *)(local_3c);
    if (local_3c != (int *)0x0) {
      for (; (int *)(piVar9) != piVar3; piVar9 = piVar9 + 2) {
        piVar2 = (int *)((int *)piVar9[1]);
        *(unsigned char *)((char *)&local_8 + 0) = 0xb;
        if (piVar2 != (int *)0x0) {
          *piVar9 = (int)(0);
          piVar9[1] = 0;
          (**(code **)(*piVar2 + 8))();
        }
      }
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      uVar5 = (uint)(((int)local_34 - (int)local_3c >> 3) * 8);
      piVar9 = (int *)(local_3c);
      if (0xfff < uVar5) {
        piVar9 = (int *)((int *)local_3c[-1]);
        uVar5 = (uint)(uVar5 + 0x23);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)piVar9))) {
LAB_10891a85:
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(piVar9,uVar5);
      uVar4 = (undefined1)((undefined1)local_8);
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = uVar4;
  thunk_FUN_105b6d40(&local_28,local_28[1]);
  thunk_FUN_1148a50e(local_28,0x34);
  local_8 = (undefined4)(0xc);
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(piVar6);
}


// Reference entry 10891c80; body size 180 bytes.
#line 1 "ENTRY_10891c80"

undefined4 * __thiscall Recovered_Bulk::FUN_10891c80(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163091e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10891d70; body size 180 bytes.
#line 1 "ENTRY_10891d70"

undefined4 * __thiscall Recovered_Bulk::FUN_10891d70(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163097e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10892380; body size 194 bytes.
#line 1 "ENTRY_10892380"

undefined4 * __thiscall Recovered_Bulk::FUN_10892380(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11630bbe);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCJoinPreparationConfirmFlowPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinPreparationConfirmFlowPageType);
  DAT_121a3548 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108924d0; body size 194 bytes.
#line 1 "ENTRY_108924d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108924d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11630c1e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCJoinPreparationFetchAccountInfoPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinPreparationFetchAccountInfoPageType);
  DAT_121a354c = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10892c70; body size 192 bytes.
#line 1 "ENTRY_10892c70"

undefined4 * __thiscall Recovered_Bulk::FUN_10892c70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11630e59);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinPreparationWizard);
  param_1[4] = (uint)&ghidra_vftable_SCJoinPreparationWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCJoinPreparationWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCJoinPreparationWizard;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108936d0; body size 135 bytes.
#line 1 "ENTRY_108936d0"

void __fastcall FUN_108936d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116310d0);
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


// Reference entry 108937a0; body size 186 bytes.
#line 1 "ENTRY_108937a0"

void __fastcall FUN_108937a0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11631100);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
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


// Reference entry 10893aa0; body size 68 bytes.
#line 1 "ENTRY_10893aa0"

undefined4 * __thiscall Recovered_Bulk::FUN_10893aa0(byte param_2)
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


// Reference entry 10893c50; body size 68 bytes.
#line 1 "ENTRY_10893c50"

undefined4 * __thiscall Recovered_Bulk::FUN_10893c50(byte param_2)
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


// Reference entry 10893cf0; body size 68 bytes.
#line 1 "ENTRY_10893cf0"

undefined4 * __thiscall Recovered_Bulk::FUN_10893cf0(byte param_2)
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


// Reference entry 10893d90; body size 68 bytes.
#line 1 "ENTRY_10893d90"

undefined4 * __thiscall Recovered_Bulk::FUN_10893d90(byte param_2)
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


// Reference entry 10893e30; body size 68 bytes.
#line 1 "ENTRY_10893e30"

undefined4 * __thiscall Recovered_Bulk::FUN_10893e30(byte param_2)
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


// Reference entry 10893ed0; body size 68 bytes.
#line 1 "ENTRY_10893ed0"

undefined4 * __thiscall Recovered_Bulk::FUN_10893ed0(byte param_2)
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


// Reference entry 10893f70; body size 68 bytes.
#line 1 "ENTRY_10893f70"

undefined4 * __thiscall Recovered_Bulk::FUN_10893f70(byte param_2)
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


// Reference entry 10894010; body size 159 bytes.
#line 1 "ENTRY_10894010"

undefined4 * __thiscall Recovered_Bulk::FUN_10894010(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11631130);
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
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10894120; body size 210 bytes.
#line 1 "ENTRY_10894120"

int __thiscall Recovered_Bulk::FUN_10894120(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11631160);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
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
    thunk_FUN_1148a50e(param_1,0x10c);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 108948f0; body size 168 bytes.
#line 1 "ENTRY_108948f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108948f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11631607);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinPreparationConfirmFlowPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinPreparationConfirmFlowPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinPreparationConfirmFlowPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinPreparationConfirmFlowPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108949d0; body size 168 bytes.
#line 1 "ENTRY_108949d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108949d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11631657);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinPreparationFetchAccountInfoPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinPreparationFetchAccountInfoPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinPreparationFetchAccountInfoPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinPreparationFetchAccountInfoPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10894ab0; body size 168 bytes.
#line 1 "ENTRY_10894ab0"

undefined4 * __thiscall Recovered_Bulk::FUN_10894ab0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116316a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinPreparationGetHouseholdInfoFatalErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinPreparationGetHouseholdInfoFatalErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinPreparationGetHouseholdInfoFatalErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinPreparationGetHouseholdInfoFatalErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10894b90; body size 168 bytes.
#line 1 "ENTRY_10894b90"

undefined4 * __thiscall Recovered_Bulk::FUN_10894b90(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116316f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinPreparationGetHouseholdInfoTimeoutPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinPreparationGetHouseholdInfoTimeoutPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinPreparationGetHouseholdInfoTimeoutPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinPreparationGetHouseholdInfoTimeoutPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10894c70; body size 168 bytes.
#line 1 "ENTRY_10894c70"

undefined4 * __thiscall Recovered_Bulk::FUN_10894c70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11631747);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinPreparationGetProtectedSettingsPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinPreparationGetProtectedSettingsPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinPreparationGetProtectedSettingsPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinPreparationGetProtectedSettingsPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10894d50; body size 168 bytes.
#line 1 "ENTRY_10894d50"

undefined4 * __thiscall Recovered_Bulk::FUN_10894d50(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11631797);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinPreparationLegacySonosnetAddWarningPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinPreparationLegacySonosnetAddWarningPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinPreparationLegacySonosnetAddWarningPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinPreparationLegacySonosnetAddWarningPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10894e30; body size 188 bytes.
#line 1 "ENTRY_10894e30"

undefined4 * __thiscall Recovered_Bulk::FUN_10894e30(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116317e7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinPreparationLookupV1CertificatePage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinPreparationLookupV1CertificatePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinPreparationLookupV1CertificatePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinPreparationLookupV1CertificatePage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10894f20; body size 270 bytes.
#line 1 "ENTRY_10894f20"

void __stdcall FUN_10894f20(int *param_1)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  undefined4 uVar4;
  SCStr local_38 [4];
  int *local_34;
  undefined1 local_30 [8];
  char local_28 [20];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11631855);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_34 = (int *)(param_1);
  uVar4 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  thunk_FUN_10cf34e0(&local_34);
  local_8 = (undefined4)(0);
  thunk_FUN_10c97630(local_30);
  local_8 = (undefined4)(1);
  if (local_34 != (int *)0x0) {
    (**(code **)(*local_34 + 8))(uVar1);
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_1125cda0(local_28,0x12);
  local_34 = (int *)(operator_new(0x48));
  local_8 = (undefined4)(2);
  bVar3 = (bool)(local_34 == (int *)0x0);
  if (bVar3) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    ((SCStr *)(local_38))->int_allocRep(local_28);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    uVar4 = (undefined4)(1);
    piVar2 = (int *)((int *)thunk_FUN_10295a30(local_38));
  }
  local_8 = (undefined4)(4);
  *param_1 = (int)((int)piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (undefined4)(0xffffffff);
  if (!bVar3) {
    local_8 = (undefined4)(5);
    ((SCStr *)(local_38))->int_release();
  }
  ExceptionList = (void *)(local_10);
  thunk_FUN_1148ac28(uVar4);
  return;
}


// Reference entry 10895080; body size 251 bytes.
#line 1 "ENTRY_10895080"

undefined4 * __thiscall Recovered_Bulk::FUN_10895080(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116318f4);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x10c));
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCJoinPreparationWizard);
    puVar2[4] = (uint)&ghidra_vftable_SCJoinPreparationWizard;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinPreparationWizard);
    puVar2[0x2a] = (uint)&ghidra_vftable_SCJoinPreparationWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108971b0; body size 108 bytes.
#line 1 "ENTRY_108971b0"

bool FUN_108971b0(void)

{
  uint uVar1;
  int iVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11631ddd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10cf34e0(&local_14);
  local_8 = (undefined4)(0);
  iVar2 = (int)(thunk_FUN_10c96100(uVar1));
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (bool)(iVar2 == 1);
}


// Reference entry 1089d070; body size 440 bytes.
#line 1 "ENTRY_1089d070"

void FUN_1089d070(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11632bcd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 == '\0') {
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("bleDiscoveryLastAttempt");
    local_8 = (undefined4)(3);
    uVar2 = (undefined4)(thunk_FUN_10dfba00(&local_14));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    cVar1 = (char)(thunk_FUN_10def450(uVar2));
    thunk_FUN_10def0d0();
    local_8 = (undefined4)(5);
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_8 = (undefined4)(0xffffffff);
    if (cVar1 != '\0') {
      thunk_FUN_10eb41b0();
      thunk_FUN_10cf34e0(&local_18);
      local_8 = (undefined4)(6);
      thunk_FUN_10c97610(&local_14);
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      cVar1 = (char)(thunk_FUN_1034cfc0());
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }
      local_8 = (undefined4)(9);
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 8))();
      }
      local_8 = (undefined4)(0xffffffff);
      if (cVar1 != '\0') {
        ((SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("Product finally discovered over BLE and is connectable");
        puVar4 = (undefined1 *)(&stack0x00000004);
        local_8 = (undefined4)(10);
        uVar2 = (undefined4)(2);
        thunk_FUN_10eb41b0(2,puVar4);
        thunk_FUN_10ead690(uVar2,puVar4);
        local_8 = (undefined4)(0xb);
        ((SCStr *)((SCStr *)&stack0x00000004))->int_release();
      }
    }
  }
  else {
    thunk_FUN_10ebbab0(8);
    thunk_FUN_10eb41b0();
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_10894570(&local_14));
    local_8 = (undefined4)(1);
    thunk_FUN_10ebb810("bleDiscoveryLastAttempt",*puVar3,0);
    local_8 = (undefined4)(2);
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
      ExceptionList = (void *)(local_10);
      return;
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1089d2a0; body size 1184 bytes.
#line 1 "ENTRY_1089d2a0"

void __stdcall FUN_1089d2a0(int *param_1)

{
  int *piVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  SCLibrary *pSVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11632cb5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar5 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar4 = (char)(thunk_FUN_10def450(uVar5));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar4 == '\0') {
    uVar5 = (undefined4)(thunk_FUN_10df54d0());
    local_8 = (undefined4)(0x22);
    cVar4 = (char)(thunk_FUN_10def450(uVar5));
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_10def0d0();
    if (cVar4 == '\0') {
      uVar5 = (undefined4)(thunk_FUN_10dfbbe0());
      local_8 = (undefined4)(0x2b);
      cVar4 = (char)(thunk_FUN_10def450(uVar5));
      local_8 = (undefined4)(0xffffffff);
      thunk_FUN_10def0d0();
      if (cVar4 == '\0') {
        ExceptionList = (void *)(local_10);
        return;
      }
      thunk_FUN_10eb41b0();
      uVar5 = (undefined4)(thunk_FUN_10cf34e0(&local_18));
      local_8 = (undefined4)(0x2c);
      thunk_FUN_10351370(uVar5);
      *(unsigned char *)((char *)&local_8 + 0) = 0x2f;
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 8))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x2e)));
      thunk_FUN_10eb41b0();
      iVar9 = (int)(thunk_FUN_10eac8c0());
      thunk_FUN_10eb41b0();
      cVar4 = (char)(thunk_FUN_10eacd60());
      iVar10 = (int)(thunk_FUN_10c97140());
      if ((iVar9 == 1) || (iVar9 == 3)) {
        bVar2 = (bool)(true);
      }
      else {
        bVar2 = (bool)(false);
      }
      if (((cVar4 != '\0') && (iVar10 == 0)) && (bVar2)) {
        uVar5 = (undefined4)(0);
        thunk_FUN_10eb41b0(0);
        thunk_FUN_10ead910(uVar5);
      }
      local_8 = (undefined4)(0x30);
    }
    else {
      puVar8 = (undefined4 *)((undefined4 *)thunk_FUN_101da4a0(&local_1c));
      local_8 = (undefined4)(0x23);
      uVar5 = (undefined4)((**(code **)(*(int *)*puVar8 + 0x3c))(&param_1));
      *(unsigned char *)((char *)&local_8 + 0) = 0x24;
      thunk_FUN_101cd1d0(uVar5);
      *(unsigned char *)((char *)&local_8 + 0) = 0x27;
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x29;
      if (local_1c != (int *)0x0) {
        (**(code **)(*local_1c + 8))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x28)));
      cVar4 = (char)((**(code **)(*local_24 + 0x68))(0x15180,0));
      if (cVar4 == '\0') {
        (**(code **)(*local_24 + 0x28))();
      }
      local_8 = (undefined4)(0x2a);
    }
    if (local_20 == (int *)0x0) {
      ExceptionList = (void *)(local_10);
      return;
    }
    iVar9 = (int)(*local_20);
  }
  else {
    thunk_FUN_10ebbab0(0x408);
    pSVar6 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    piVar7 = (int *)((int *)(**(code **)(**(int **)(*(int *)(pSVar6 + 0x4c) + 0xe8) + 4))(&local_1c,0xd));
    piVar1 = (int *)((int *)*piVar7);
    local_8 = (undefined4)(1);
    *piVar7 = (int)(0);
    if (piVar1 == (int *)0x0) {
      piVar7 = (int *)((int *)0x0);
    }
    else {
      piVar7 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (piVar1 == (int *)0x0) {
      piVar11 = (int *)((int *)0x0);
      local_18 = (int *)((int *)0x0);
    }
    else {
      ((SCStr *)((SCStr *)&param_1))->int_allocRep("SCIWifiDelegate");
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      puVar8 = (undefined4 *)((undefined4 *)(**(code **)*piVar1)(&local_14,&param_1));
      piVar11 = (int *)((int *)*puVar8);
      *puVar8 = (undefined4)(0);
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      local_18 = (int *)(piVar11);
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      ((SCStr *)((SCStr *)&param_1))->int_release();
      param_1 = (int *)((int *)0x0);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    uVar3 = (undefined1)((undefined1)local_8);
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    if (piVar11 != (int *)0x0) {
      uVar5 = (undefined4)(2);
      thunk_FUN_101b5540(2);
      cVar4 = (char)(thunk_FUN_101b5de0(uVar5));
      uVar3 = (undefined1)((undefined1)local_8);
      if (cVar4 != '\0') {
        uVar5 = (undefined4)((**(code **)(*piVar11 + 0x38))(&param_1));
        *(unsigned char *)((char *)&local_8 + 0) = 0xb;
        thunk_FUN_10eb41b0(uVar5);
        thunk_FUN_10eadd90(uVar5);
        *(unsigned char *)((char *)&local_8 + 0) = 0xc;
        ((SCStr *)((SCStr *)&param_1))->int_release();
        *(unsigned char *)((char *)&local_8 + 0) = 9;
        uVar5 = (undefined4)((**(code **)(*piVar11 + 0x3c))(&param_1));
        *(unsigned char *)((char *)&local_8 + 0) = 0xd;
        thunk_FUN_10eb41b0(uVar5);
        thunk_FUN_10eadd60(uVar5);
        *(unsigned char *)((char *)&local_8 + 0) = 0xe;
        ((SCStr *)((SCStr *)&param_1))->int_release();
        *(unsigned char *)((char *)&local_8 + 0) = 9;
        uVar3 = (undefined1)((undefined1)local_8);
      }
    }
    *(unsigned char *)((char *)&local_8 + 0) = uVar3;
    cVar4 = (char)(thunk_FUN_10eba400("minimumOp"));
    if (cVar4 == '\0') {
      uVar5 = (undefined4)(createSCNullAsyncOperation((int)&param_1));
      *(unsigned char *)((char *)&local_8 + 0) = 0xf;
      thunk_FUN_102caa30(uVar5);
      *(unsigned char *)((char *)&local_8 + 0) = 0x12;
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x11;
      thunk_FUN_10ebb810("minimumOp",piVar1,1);
      *(unsigned char *)((char *)&local_8 + 0) = 0x13;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 9;
    }
    cVar4 = (char)(thunk_FUN_10eba400("timeoutOp"));
    if (cVar4 == '\0') {
      uVar5 = (undefined4)(createSCNullAsyncOperation((int)&param_1));
      *(unsigned char *)((char *)&local_8 + 0) = 0x14;
      thunk_FUN_102caa30(uVar5);
      *(unsigned char *)((char *)&local_8 + 0) = 0x17;
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x16;
      thunk_FUN_10ebb810("timeoutOp",piVar1,1);
      *(unsigned char *)((char *)&local_8 + 0) = 0x18;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 9;
    }
    puVar8 = (undefined4 *)((undefined4 *)thunk_FUN_101da4a0(&local_14));
    *(unsigned char *)((char *)&local_8 + 0) = 0x19;
    uVar5 = (undefined4)((**(code **)(*(int *)*puVar8 + 0x3c))(&param_1));
    *(unsigned char *)((char *)&local_8 + 0) = 0x1a;
    thunk_FUN_101cd1d0(uVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 0x1d;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x1f;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x1e;
    if ((piVar1 != (int *)0x0) && (cVar4 = (**(code **)(*piVar1 + 0x68))(0x15180,0), cVar4 == '\0'))
    {
      (**(code **)(*piVar1 + 0x28))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x20)));
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))();
    }
    local_8 = (undefined4)(0x21);
    if (piVar11 == (int *)0x0) {
      ExceptionList = (void *)(local_10);
      return;
    }
    iVar9 = (int)(*piVar11);
  }
  (**(code **)(iVar9 + 8))();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1089d870; body size 114 bytes.
#line 1 "ENTRY_1089d870"

void FUN_1089d870(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11632d1d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebbab0(8);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1089dcc0; body size 200 bytes.
#line 1 "ENTRY_1089dcc0"

void FUN_1089dcc0(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11632e4d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)(local_14))->int_allocRep("tempWire");
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(thunk_FUN_10df6f00(local_14));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  cVar1 = (char)(thunk_FUN_10def450(uVar3));
  thunk_FUN_10def0d0(uVar2);
  local_8 = (undefined4)(2);
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    ((SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("Product is running out of date software");
    puVar4 = (undefined1 *)(&stack0x00000004);
    local_8 = (undefined4)(3);
    uVar3 = (undefined4)(5);
    thunk_FUN_10eb41b0(5,puVar4);
    thunk_FUN_10ead690(uVar3,puVar4);
    local_8 = (undefined4)(4);
    ((SCStr *)((SCStr *)&stack0x00000004))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1089e310; body size 129 bytes.
#line 1 "ENTRY_1089e310"

void FUN_1089e310(void)

{
  char cVar1;
  int iVar2;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11632fad);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  cVar1 = (char)(thunk_FUN_10eacd60(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if (cVar1 != '\0') {
    iVar2 = (int)(thunk_FUN_10eac8c0());
    if (iVar2 == 3) {
      ((SCStr *)(local_14))->int_allocRep("No use of WAC in SonosNet");
      local_8 = (undefined4)(0);
      thunk_FUN_10ead690(1,local_14);
      local_8 = (undefined4)(1);
      ((SCStr *)(local_14))->int_release();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1089e5e0; body size 180 bytes.
#line 1 "ENTRY_1089e5e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1089e5e0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163300e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089e6d0; body size 180 bytes.
#line 1 "ENTRY_1089e6d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1089e6d0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163306e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089e7c0; body size 180 bytes.
#line 1 "ENTRY_1089e7c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1089e7c0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116330ce);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089e8b0; body size 180 bytes.
#line 1 "ENTRY_1089e8b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1089e8b0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163312e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089e9a0; body size 180 bytes.
#line 1 "ENTRY_1089e9a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1089e9a0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163318e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089ea90; body size 180 bytes.
#line 1 "ENTRY_1089ea90"

undefined4 * __thiscall Recovered_Bulk::FUN_1089ea90(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116331ee);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089eb80; body size 180 bytes.
#line 1 "ENTRY_1089eb80"

undefined4 * __thiscall Recovered_Bulk::FUN_1089eb80(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163324e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089ec70; body size 183 bytes.
#line 1 "ENTRY_1089ec70"

undefined4 * __thiscall Recovered_Bulk::FUN_1089ec70(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116332ae);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  local_8 = (undefined4)(2);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");
  local_8 = (undefined4)(7);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089ed60; body size 180 bytes.
#line 1 "ENTRY_1089ed60"

undefined4 * __thiscall Recovered_Bulk::FUN_1089ed60(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163330e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089ee50; body size 180 bytes.
#line 1 "ENTRY_1089ee50"

undefined4 * __thiscall Recovered_Bulk::FUN_1089ee50(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163336e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089f030; body size 180 bytes.
#line 1 "ENTRY_1089f030"

undefined4 * __thiscall Recovered_Bulk::FUN_1089f030(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163342e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089f120; body size 183 bytes.
#line 1 "ENTRY_1089f120"

undefined4 * __thiscall Recovered_Bulk::FUN_1089f120(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163348e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  local_8 = (undefined4)(2);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");
  local_8 = (undefined4)(7);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089f210; body size 180 bytes.
#line 1 "ENTRY_1089f210"

undefined4 * __thiscall Recovered_Bulk::FUN_1089f210(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116334ee);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089f380; body size 213 bytes.
#line 1 "ENTRY_1089f380"

undefined4 * __thiscall Recovered_Bulk::FUN_1089f380(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11633550);
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


// Reference entry 1089f490; body size 213 bytes.
#line 1 "ENTRY_1089f490"

undefined4 * __thiscall Recovered_Bulk::FUN_1089f490(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116335b0);
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
      uVar5 = (undefined4)(thunk_FUN_108fb850(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_108fc3e0(uVar3));
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


// Reference entry 1089f5f0; body size 194 bytes.
#line 1 "ENTRY_1089f5f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1089f5f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163360e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCJoinProductAuthErrorPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductAuthErrorPageType);
  DAT_121a35b4 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089f750; body size 194 bytes.
#line 1 "ENTRY_1089f750"

undefined4 * __thiscall Recovered_Bulk::FUN_1089f750(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163366e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCJoinProductChangeNetworkPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductChangeNetworkPageType);
  DAT_121a35e0 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089f8a0; body size 194 bytes.
#line 1 "ENTRY_1089f8a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1089f8a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116336ce);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCJoinProductDifferentNetworkWarningPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductDifferentNetworkWarningPageType);
  DAT_121a35dc = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089f9f0; body size 194 bytes.
#line 1 "ENTRY_1089f9f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1089f9f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163372e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCJoinProductGetScanListPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductGetScanListPageType);
  DAT_121a35d0 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089faf0; body size 141 bytes.
#line 1 "ENTRY_1089faf0"

undefined4 * __thiscall Recovered_Bulk::FUN_1089faf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163376d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductJoinHouseholdPage);
  param_1[4] = (uint)&ghidra_vftable_SCJoinProductJoinHouseholdPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCJoinProductJoinHouseholdPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCJoinProductJoinHouseholdPage;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 7;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089fba0; body size 194 bytes.
#line 1 "ENTRY_1089fba0"

undefined4 * __thiscall Recovered_Bulk::FUN_1089fba0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116337ce);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCJoinProductJoinHouseholdPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductJoinHouseholdPageType);
  DAT_121a35d4 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089fcf0; body size 194 bytes.
#line 1 "ENTRY_1089fcf0"

undefined4 * __thiscall Recovered_Bulk::FUN_1089fcf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163382e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCJoinProductJoinHouseholdSuccessPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductJoinHouseholdSuccessPageType);
  DAT_121a35e4 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089fe50; body size 194 bytes.
#line 1 "ENTRY_1089fe50"

undefined4 * __thiscall Recovered_Bulk::FUN_1089fe50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163388e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCJoinProductJoinHouseholdWaitingPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductJoinHouseholdWaitingPageType);
  DAT_121a35d8 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1089ff50; body size 213 bytes.
#line 1 "ENTRY_1089ff50"

undefined4 * __thiscall Recovered_Bulk::FUN_1089ff50(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116338f0);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductLegacyApAuthenticationSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCJoinProductLegacyApAuthenticationSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCJoinProductLegacyApAuthenticationSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCJoinProductLegacyApAuthenticationSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108a0060; body size 197 bytes.
#line 1 "ENTRY_108a0060"

undefined4 * __thiscall Recovered_Bulk::FUN_108a0060(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163394e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCJoinProductLegacyApAuthenticationSubwiz");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  local_8 = (undefined4)(2);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");
  local_8 = (undefined4)(7);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductLegacyApAuthenticationSubwizType);
  DAT_121a35cc = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108a01c0; body size 194 bytes.
#line 1 "ENTRY_108a01c0"

undefined4 * __thiscall Recovered_Bulk::FUN_108a01c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116339ae);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCJoinProductLegacyApJoinNetworkPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductLegacyApJoinNetworkPageType);
  DAT_121a35c4 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108a0310; body size 194 bytes.
#line 1 "ENTRY_108a0310"

undefined4 * __thiscall Recovered_Bulk::FUN_108a0310(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11633a0e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCJoinProductLegacyApJoinNetworkSuccessPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductLegacyApJoinNetworkSuccessPageType);
  DAT_121a35c8 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108a05c0; body size 194 bytes.
#line 1 "ENTRY_108a05c0"

undefined4 * __thiscall Recovered_Bulk::FUN_108a05c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11633ace);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCJoinProductLegacyApVerifyProductPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductLegacyApVerifyProductPageType);
  DAT_121a35bc = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108a0710; body size 197 bytes.
#line 1 "ENTRY_108a0710"

undefined4 * __thiscall Recovered_Bulk::FUN_108a0710(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11633b2e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCJoinProductNetworkCredentialsSubwiz");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  local_8 = (undefined4)(2);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");
  local_8 = (undefined4)(7);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductNetworkCredentialsSubwizType);
  DAT_121a35b0 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108a0860; body size 194 bytes.
#line 1 "ENTRY_108a0860"

undefined4 * __thiscall Recovered_Bulk::FUN_108a0860(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11633b8e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCJoinProductRouterErrorPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductRouterErrorPageType);
  DAT_121a35b8 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108a0960; body size 256 bytes.
#line 1 "ENTRY_108a0960"

undefined4 * __thiscall Recovered_Bulk::FUN_108a0960(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11633bf7);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductWizard);
  param_1[4] = (uint)&ghidra_vftable_SCJoinProductWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCJoinProductWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCJoinProductWizard;
  *(undefined2 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108a1880; body size 76 bytes.
#line 1 "ENTRY_108a1880"

void __fastcall FUN_108a1880(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11634090);
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


// Reference entry 108a18f0; body size 76 bytes.
#line 1 "ENTRY_108a18f0"

void __fastcall FUN_108a18f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116340c0);
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


// Reference entry 108a1a70; body size 123 bytes.
#line 1 "ENTRY_108a1a70"

void __fastcall FUN_108a1a70(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11634120);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0(uVar1);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108a1bd0; body size 135 bytes.
#line 1 "ENTRY_108a1bd0"

void __fastcall FUN_108a1bd0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11634150);
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


// Reference entry 108a1d90; body size 135 bytes.
#line 1 "ENTRY_108a1d90"

void __fastcall FUN_108a1d90(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11634180);
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


// Reference entry 108a1f00; body size 135 bytes.
#line 1 "ENTRY_108a1f00"

void __fastcall FUN_108a1f00(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116341b0);
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


// Reference entry 108a2070; body size 239 bytes.
#line 1 "ENTRY_108a2070"

void __fastcall FUN_108a2070(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116341e0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_1036e480(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  piVar1 = (int *)(*(int **)(param_1 + 0x110));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xf8));
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_106da680();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108a2610; body size 68 bytes.
#line 1 "ENTRY_108a2610"

undefined4 * __thiscall Recovered_Bulk::FUN_108a2610(byte param_2)
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


// Reference entry 108a2910; body size 68 bytes.
#line 1 "ENTRY_108a2910"

undefined4 * __thiscall Recovered_Bulk::FUN_108a2910(byte param_2)
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


// Reference entry 108a2970; body size 68 bytes.
#line 1 "ENTRY_108a2970"

undefined4 * __thiscall Recovered_Bulk::FUN_108a2970(byte param_2)
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


// Reference entry 108a29d0; body size 68 bytes.
#line 1 "ENTRY_108a29d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108a29d0(byte param_2)
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


// Reference entry 108a2a70; body size 147 bytes.
#line 1 "ENTRY_108a2a70"

undefined4 * __thiscall Recovered_Bulk::FUN_108a2a70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11634210);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0(uVar1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108a2b70; body size 68 bytes.
#line 1 "ENTRY_108a2b70"

undefined4 * __thiscall Recovered_Bulk::FUN_108a2b70(byte param_2)
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


// Reference entry 108a2c10; body size 68 bytes.
#line 1 "ENTRY_108a2c10"

undefined4 * __thiscall Recovered_Bulk::FUN_108a2c10(byte param_2)
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


// Reference entry 108a2cb0; body size 159 bytes.
#line 1 "ENTRY_108a2cb0"

undefined4 * __thiscall Recovered_Bulk::FUN_108a2cb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11634240);
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


// Reference entry 108a2dc0; body size 68 bytes.
#line 1 "ENTRY_108a2dc0"

undefined4 * __thiscall Recovered_Bulk::FUN_108a2dc0(byte param_2)
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


// Reference entry 108a2e60; body size 68 bytes.
#line 1 "ENTRY_108a2e60"

undefined4 * __thiscall Recovered_Bulk::FUN_108a2e60(byte param_2)
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


// Reference entry 108a2f00; body size 68 bytes.
#line 1 "ENTRY_108a2f00"

undefined4 * __thiscall Recovered_Bulk::FUN_108a2f00(byte param_2)
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


// Reference entry 108a2fa0; body size 159 bytes.
#line 1 "ENTRY_108a2fa0"

undefined4 * __thiscall Recovered_Bulk::FUN_108a2fa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11634270);
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
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108a30b0; body size 68 bytes.
#line 1 "ENTRY_108a30b0"

undefined4 * __thiscall Recovered_Bulk::FUN_108a30b0(byte param_2)
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


// Reference entry 108a3150; body size 68 bytes.
#line 1 "ENTRY_108a3150"

undefined4 * __thiscall Recovered_Bulk::FUN_108a3150(byte param_2)
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


// Reference entry 108a31f0; body size 159 bytes.
#line 1 "ENTRY_108a31f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108a31f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116342a0);
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
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108a3300; body size 68 bytes.
#line 1 "ENTRY_108a3300"

undefined4 * __thiscall Recovered_Bulk::FUN_108a3300(byte param_2)
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


// Reference entry 108a33a0; body size 68 bytes.
#line 1 "ENTRY_108a33a0"

undefined4 * __thiscall Recovered_Bulk::FUN_108a33a0(byte param_2)
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


// Reference entry 108a3440; body size 263 bytes.
#line 1 "ENTRY_108a3440"

int __thiscall Recovered_Bulk::FUN_108a3440(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116342d0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_1036e480(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  piVar1 = (int *)(*(int **)(param_1 + 0x110));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xf8));
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x128);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 108a3780; body size 416 bytes.
#line 1 "ENTRY_108a3780"

undefined4 * __thiscall Recovered_Bulk::FUN_108a3780(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  undefined1 uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  SCStr local_34 [4];
  int *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11634602);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uVar8 = (uint)(0);
  local_14 = (uint)(0);
  pvVar3 = (void *)(operator_new(0xb8));
  local_8 = (undefined4)(0);
  if (pvVar3 == (void *)0x0) {
    piVar7 = (int *)((int *)0x0);
  }
  else {
    local_18 = (int *)(param_1 + 0x40);
    local_24 = (undefined4)(thunk_FUN_10eacd80(local_34));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    local_14 = (uint)(1);
    local_28 = (undefined4)(thunk_FUN_10eacda0(&local_20));
    local_8 = (undefined4)(2);
    local_14 = (uint)(3);
    local_2c = (undefined4 *)((undefined4 *)thunk_FUN_10cf34e0(&local_30));
    uVar8 = (uint)(7);
    local_8 = (undefined4)(3);
    local_14 = (uint)(7);
    (**(code **)(*param_1 + 8))(uVar2);
    local_1c = (undefined4)(thunk_FUN_105ad910());
    iVar4 = (int)(thunk_FUN_106dc530());
    iVar5 = (int)(thunk_FUN_106243b0());
    if (iVar4 == iVar5) {
      uVar1 = (undefined1)(thunk_FUN_106431c0());
    }
    else {
      uVar1 = (undefined1)(thunk_FUN_10eacd40());
    }
    uVar12 = (undefined4)(3);
    local_1c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_1c + 1)) << 8 | (uint)(uVar1)));
    uVar10 = (undefined4)(local_28);
    uVar11 = (undefined4)(local_24);
    uVar2 = (uint)(thunk_FUN_10eacd20(local_28,local_24,3));
    uVar2 = (uint)(uVar2 & 0xff);
    uVar9 = (undefined4)(local_1c);
    uVar6 = (undefined4)(thunk_FUN_10eac8c0(local_1c,uVar2));
    piVar7 = (int *)((int *)thunk_FUN_10f3ca70(*local_2c,uVar6,uVar9,uVar2,uVar10,uVar11,uVar12));
  }
  local_8 = (undefined4)(6);
  *param_2 = (undefined4)(piVar7);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 4))();
  }
  uVar2 = (uint)(uVar8 | 8);
  if ((uVar8 & 4) != 0) {
    uVar2 = (uint)(uVar8 & 0xfffffffb | 8);
    local_8 = (undefined4)(7);
    local_14 = (uint)(uVar2);
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 8))();
    }
  }
  if ((uVar2 & 2) != 0) {
    uVar2 = (uint)(uVar2 & 0xfffffffd);
    local_8 = (undefined4)(8);
    local_14 = (uint)(uVar2);
    ((SCStr *)((SCStr *)&local_20))->int_release();
    local_20 = (undefined4)(0);
  }
  if ((uVar2 & 1) != 0) {
    local_8 = (undefined4)(9);
    ((SCStr *)(local_34))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 108a3d10; body size 321 bytes.
#line 1 "ENTRY_108a3d10"

undefined4 * __stdcall FUN_108a3d10(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  SCStr local_28 [4];
  int *local_24;
  void *local_20;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11634782);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uVar6 = (uint)(0);
  local_14 = (uint)(0);
  local_20 = (void *)(operator_new(0xb0));
  local_8 = (undefined4)(0);
  if (local_20 == (void *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    uVar2 = (undefined4)(thunk_FUN_10eacd80(local_28));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    local_14 = (uint)(1);
    uVar3 = (undefined4)(thunk_FUN_10eacda0(&local_18));
    local_8 = (undefined4)(2);
    local_14 = (uint)(3);
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_10cf34e0(&local_24));
    uVar6 = (uint)(7);
    local_8 = (undefined4)(3);
    local_14 = (uint)(7);
    piVar5 = (int *)((int *)thunk_FUN_10f3cc50(*puVar4,uVar3,uVar2,3));
  }
  local_8 = (undefined4)(6);
  *param_1 = (undefined4)(piVar5);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))(uVar1);
  }
  uVar1 = (uint)(uVar6 | 8);
  if ((uVar6 & 4) != 0) {
    uVar1 = (uint)(uVar6 & 0xfffffffb | 8);
    local_8 = (undefined4)(7);
    local_14 = (uint)(uVar1);
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))();
    }
  }
  if ((uVar1 & 2) != 0) {
    uVar1 = (uint)(uVar1 & 0xfffffffd);
    local_8 = (undefined4)(8);
    local_14 = (uint)(uVar1);
    ((SCStr *)((SCStr *)&local_18))->int_release();
    local_18 = (undefined4)(0);
  }
  if ((uVar1 & 1) != 0) {
    local_8 = (undefined4)(9);
    ((SCStr *)(local_28))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108a3eb0; body size 287 bytes.
#line 1 "ENTRY_108a3eb0"

undefined4 * __thiscall Recovered_Bulk::FUN_108a3eb0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  undefined1 uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  bool bVar8;
  int *local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116347f0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  bVar8 = (bool)(false);
  local_1c = (undefined4)(0);
  local_18 = (int *)(param_1);
  pvVar3 = (void *)(operator_new(0x108));
  local_8 = (undefined4)(0);
  if (pvVar3 == (void *)0x0) {
    piVar7 = (int *)((int *)0x0);
  }
  else {
    local_24 = (undefined4 *)((undefined4 *)thunk_FUN_10cf34e0(&local_28));
    bVar8 = (bool)(true);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    local_1c = (undefined4)(1);
    (**(code **)(*param_1 + 8))(uVar2);
    local_20 = (undefined4)(thunk_FUN_105ad910());
    iVar4 = (int)(thunk_FUN_106dc530());
    local_14 = (int *)(local_18 + 0x40);
    iVar5 = (int)(thunk_FUN_106243b0());
    if (iVar4 == iVar5) {
      uVar1 = (undefined1)(thunk_FUN_106431c0());
    }
    else {
      uVar1 = (undefined1)(thunk_FUN_10eacd40());
    }
    local_18 = (int *)((int *)((uint)(*(unsigned short *)((char *)&local_18 + 1)) << 8 | (uint)(uVar1)));
    piVar7 = (int *)(local_18);
    uVar6 = (undefined4)(thunk_FUN_10eac8c0(local_18));
    piVar7 = (int *)((int *)thunk_FUN_10eeb8b0(*local_24,uVar6,piVar7));
  }
  local_8 = (undefined4)(2);
  *param_2 = (undefined4)(piVar7);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 4))();
  }
  if (bVar8) {
    local_8 = (undefined4)(3);
    if (local_28 != (int *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 108a4020; body size 168 bytes.
#line 1 "ENTRY_108a4020"

undefined4 * __thiscall Recovered_Bulk::FUN_108a4020(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11634837);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductAuthErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinProductAuthErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinProductAuthErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinProductAuthErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108a4100; body size 185 bytes.
#line 1 "ENTRY_108a4100"

undefined4 * __thiscall Recovered_Bulk::FUN_108a4100(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11634887);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductChangeNetworkPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinProductChangeNetworkPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinProductChangeNetworkPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinProductChangeNetworkPage;
    puVar1[0x38] = 0;
    *(undefined1 *)(puVar1 + 0x39) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108a41f0; body size 168 bytes.
#line 1 "ENTRY_108a41f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108a41f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116348d7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductDifferentNetworkWarningPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinProductDifferentNetworkWarningPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinProductDifferentNetworkWarningPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinProductDifferentNetworkWarningPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108a42d0; body size 168 bytes.
#line 1 "ENTRY_108a42d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108a42d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11634927);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductGetScanListPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinProductGetScanListPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinProductGetScanListPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinProductGetScanListPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108a43b0; body size 207 bytes.
#line 1 "ENTRY_108a43b0"

undefined4 * __thiscall Recovered_Bulk::FUN_108a43b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163497f);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductJoinHouseholdPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinProductJoinHouseholdPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinProductJoinHouseholdPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinProductJoinHouseholdPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    puVar1[0x3b] = 7;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108a44c0; body size 168 bytes.
#line 1 "ENTRY_108a44c0"

undefined4 * __thiscall Recovered_Bulk::FUN_108a44c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116349c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductJoinHouseholdSuccessPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinProductJoinHouseholdSuccessPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinProductJoinHouseholdSuccessPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinProductJoinHouseholdSuccessPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108a45a0; body size 177 bytes.
#line 1 "ENTRY_108a45a0"

undefined4 * __thiscall Recovered_Bulk::FUN_108a45a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11634a17);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductJoinHouseholdWaitingPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinProductJoinHouseholdWaitingPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinProductJoinHouseholdWaitingPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinProductJoinHouseholdWaitingPage;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108a4680; body size 276 bytes.
#line 1 "ENTRY_108a4680"

undefined4 * __thiscall Recovered_Bulk::FUN_108a4680(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_11634a92);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCJoinProductLegacyApAuthenticationSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCJoinProductLegacyApAuthenticationSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCJoinProductLegacyApAuthenticationSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCJoinProductLegacyApAuthenticationSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108a47e0; body size 188 bytes.
#line 1 "ENTRY_108a47e0"

undefined4 * __thiscall Recovered_Bulk::FUN_108a47e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11634ae7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductLegacyApJoinNetworkPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinProductLegacyApJoinNetworkPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinProductLegacyApJoinNetworkPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinProductLegacyApJoinNetworkPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108a48d0; body size 168 bytes.
#line 1 "ENTRY_108a48d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108a48d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11634b37);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductLegacyApJoinNetworkSuccessPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinProductLegacyApJoinNetworkSuccessPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinProductLegacyApJoinNetworkSuccessPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinProductLegacyApJoinNetworkSuccessPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108a49b0; body size 168 bytes.
#line 1 "ENTRY_108a49b0"

undefined4 * __thiscall Recovered_Bulk::FUN_108a49b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11634b87);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_1089f490(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductLegacyApNetworkCredentialsSubwiz);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinProductLegacyApNetworkCredentialsSubwiz;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinProductLegacyApNetworkCredentialsSubwiz;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinProductLegacyApNetworkCredentialsSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108a4a90; body size 188 bytes.
#line 1 "ENTRY_108a4a90"

undefined4 * __thiscall Recovered_Bulk::FUN_108a4a90(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11634bd7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductLegacyApVerifyProductPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinProductLegacyApVerifyProductPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinProductLegacyApVerifyProductPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinProductLegacyApVerifyProductPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108a4b80; body size 168 bytes.
#line 1 "ENTRY_108a4b80"

undefined4 * __thiscall Recovered_Bulk::FUN_108a4b80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11634c27);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_1089f490(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductNetworkCredentialsSubwiz);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinProductNetworkCredentialsSubwiz;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinProductNetworkCredentialsSubwiz;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinProductNetworkCredentialsSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108a4c60; body size 168 bytes.
#line 1 "ENTRY_108a4c60"

undefined4 * __thiscall Recovered_Bulk::FUN_108a4c60(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11634c77);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductRouterErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCJoinProductRouterErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCJoinProductRouterErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCJoinProductRouterErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108a4d40; body size 311 bytes.
#line 1 "ENTRY_108a4d40"

undefined4 * __thiscall Recovered_Bulk::FUN_108a4d40(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11634d12);
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
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_10eaafe0(puVar2 + 0x3a);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    thunk_FUN_10eab1c0(puVar2 + 0x40);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCJoinProductWizard);
    puVar2[4] = (uint)&ghidra_vftable_SCJoinProductWizard;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinProductWizard);
    puVar2[0x2a] = (uint)&ghidra_vftable_SCJoinProductWizard;
    *(undefined2 *)(puVar2 + 0x46) = 0;
    puVar2[0x47] = 0;
    puVar2[0x48] = 0;
    puVar2[0x49] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108a65d0; body size 453 bytes.
#line 1 "ENTRY_108a65d0"

undefined4 __stdcall FUN_108a65d0(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  SCStr *pSVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined1 local_2c [8];
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11635085);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("");
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  thunk_FUN_10eb41c0(uVar4);
  iVar5 = (int)(thunk_FUN_10eac8c0());
  cVar2 = (char)(thunk_FUN_10eacd20());
  if (cVar2 == '\0') {
    cVar2 = (char)(thunk_FUN_10eacd60());
    if ((((cVar2 == '\0') && (iVar5 != 6)) && (iVar5 != 4)) && ((iVar5 != 5 && (iVar5 != 3)))) {
      thunk_FUN_10eb41c0();
      pSVar6 = (SCStr *)((SCStr *)thunk_FUN_10eacda0(&local_18));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pSVar6 != (SCStr *)&local_14) {
        ((SCStr *)((SCStr *)&local_14))->int_release();
        local_14 = (undefined4)(*(undefined4 *)pSVar6);
        ((SCStr *)((SCStr *)&local_14))->int_addref();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      ((SCStr *)((SCStr *)&local_18))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 0;
    }
  }
  thunk_FUN_10eb41c0();
  piVar7 = (int *)((int *)thunk_FUN_10cf34e0(&local_18));
  piVar1 = (int *)((int *)*piVar7);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  *piVar7 = (int)(0);
  local_24 = (int *)(piVar1);
  if (piVar1 == (int *)0x0) {
    local_20 = (int *)((int *)0x0);
  }
  else {
    local_20 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  thunk_FUN_10eb41c0();
  uVar3 = (undefined1)(thunk_FUN_10eace20());
  local_1c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_1c + 1)) << 8 | (uint)(uVar3)));
  thunk_FUN_10c5f1d0(piVar1);
  thunk_FUN_10eb41c0();
  thunk_FUN_10eb41c0();
  thunk_FUN_10eb41c0();
  uVar3 = (undefined1)(thunk_FUN_10eacd60(local_1c,1,&local_14));
  uVar8 = (undefined4)(thunk_FUN_10eac8c0(uVar3));
  uVar8 = (undefined4)(thunk_FUN_10eac8b0(uVar8));
  thunk_FUN_10ed6430(param_1,local_2c,uVar8);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  local_8 = (undefined4)(8);
  ((SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 108a6810; body size 453 bytes.
#line 1 "ENTRY_108a6810"

undefined4 __stdcall FUN_108a6810(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  SCStr *pSVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined1 local_2c [8];
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116350e5);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("");
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  thunk_FUN_10eb41c0(uVar4);
  iVar5 = (int)(thunk_FUN_10eac8c0());
  cVar2 = (char)(thunk_FUN_10eacd20());
  if (cVar2 == '\0') {
    cVar2 = (char)(thunk_FUN_10eacd60());
    if ((((cVar2 == '\0') && (iVar5 != 6)) && (iVar5 != 4)) && ((iVar5 != 5 && (iVar5 != 3)))) {
      thunk_FUN_10eb41c0();
      pSVar6 = (SCStr *)((SCStr *)thunk_FUN_10eacda0(&local_18));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pSVar6 != (SCStr *)&local_14) {
        ((SCStr *)((SCStr *)&local_14))->int_release();
        local_14 = (undefined4)(*(undefined4 *)pSVar6);
        ((SCStr *)((SCStr *)&local_14))->int_addref();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      ((SCStr *)((SCStr *)&local_18))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 0;
    }
  }
  thunk_FUN_10eb41c0();
  piVar7 = (int *)((int *)thunk_FUN_10cf34e0(&local_18));
  piVar1 = (int *)((int *)*piVar7);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  *piVar7 = (int)(0);
  local_24 = (int *)(piVar1);
  if (piVar1 == (int *)0x0) {
    local_20 = (int *)((int *)0x0);
  }
  else {
    local_20 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  thunk_FUN_10eb41c0();
  uVar3 = (undefined1)(thunk_FUN_10eace20());
  local_1c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_1c + 1)) << 8 | (uint)(uVar3)));
  thunk_FUN_10c5f1d0(piVar1);
  thunk_FUN_10eb41c0();
  thunk_FUN_10eb41c0();
  thunk_FUN_10eb41c0();
  uVar3 = (undefined1)(thunk_FUN_10eacd60(local_1c,1,&local_14));
  uVar8 = (undefined4)(thunk_FUN_10eac8c0(uVar3));
  uVar8 = (undefined4)(thunk_FUN_10eac8b0(uVar8));
  thunk_FUN_10ed6430(param_1,local_2c,uVar8);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  local_8 = (undefined4)(8);
  ((SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 108a8130; body size 303 bytes.
#line 1 "ENTRY_108a8130"

undefined4 __stdcall FUN_108a8130(undefined4 param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 local_28 [8];
  int *local_20;
  int *local_1c;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163538d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  thunk_FUN_10eacda0(local_14);
  local_8 = (undefined4)(0);
  thunk_FUN_10eb41c0();
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(&local_18));
  piVar1 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar3 = (int)(0);
  local_20 = (int *)(piVar1);
  if (piVar1 == (int *)0x0) {
    local_1c = (int *)((int *)0x0);
  }
  else {
    local_1c = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  thunk_FUN_10c5f1d0(piVar1);
  thunk_FUN_10eb41c0();
  thunk_FUN_10eb41c0();
  thunk_FUN_10eb41c0();
  uVar2 = (undefined1)(thunk_FUN_10eacd60(0,1,local_14));
  uVar4 = (undefined4)(thunk_FUN_10eac8c0(uVar2));
  uVar4 = (undefined4)(thunk_FUN_10eac8b0(uVar4));
  thunk_FUN_10ed6430(param_1,local_28,uVar4);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  local_8 = (undefined4)(6);
  ((SCStr *)(local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 108a8860; body size 301 bytes.
#line 1 "ENTRY_108a8860"

undefined4 __stdcall FUN_108a8860(undefined4 param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 local_28 [8];
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163548d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(&local_18));
  piVar1 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(0);
  *piVar3 = (int)(0);
  local_20 = (int *)(piVar1);
  if (piVar1 == (int *)0x0) {
    local_1c = (int *)((int *)0x0);
  }
  else {
    local_1c = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  thunk_FUN_10c5f1d0(piVar1);
  thunk_FUN_10eb41c0();
  thunk_FUN_10eb41c0();
  thunk_FUN_10eb41c0();
  uVar2 = (undefined1)(thunk_FUN_10eacd60(0,1,&local_14));
  uVar4 = (undefined4)(thunk_FUN_10eac8c0(uVar2));
  uVar4 = (undefined4)(thunk_FUN_10eac8b0(uVar4));
  thunk_FUN_10ed6430(param_1,local_28,uVar4);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(6);
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 108a9170; body size 329 bytes.
#line 1 "ENTRY_108a9170"

SCStr * __stdcall FUN_108a9170(SCStr *param_1)

{
  char cVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116355ed);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)(**(code **)(**(int **)(*(int *)(pSVar3 + 0x4c) + 0xe8) + 4))(&local_20,0xd,uVar2));
  piVar6 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(0);
  *piVar4 = (int)(0);
  if (piVar6 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (piVar6 == (int *)0x0) {
    local_1c = (int *)((int *)0x0);
    piVar6 = (int *)((int *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCIWifiDelegate");
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    puVar5 = (undefined4 *)((undefined4 *)(**(code **)*piVar6)(&local_18,&local_14));
    piVar6 = (int *)((int *)*puVar5);
    *puVar5 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    local_1c = (int *)(piVar6);
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined4)(0);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  if (piVar6 != (int *)0x0) {
    uVar7 = (undefined4)(2);
    thunk_FUN_101b5540(2);
    cVar1 = (char)(thunk_FUN_101b5de0(uVar7));
    if (cVar1 != '\0') {
      (**(code **)(*piVar6 + 0x38))(param_1);
      local_8 = (undefined4)(10);
      goto LAB_108a929d;
    }
  }
  ((SCStr *)(param_1))->int_allocRep("");
  local_8 = (undefined4)(0xb);
  if (piVar6 == (int *)0x0) {
    ExceptionList = (void *)(local_10);
    return (SCStr *)(param_1);
  }
LAB_108a929d:
  (**(code **)(*piVar6 + 8))();
  ExceptionList = (void *)(local_10);
  return (SCStr *)(param_1);
}


// Reference entry 108a9790; body size 404 bytes.
#line 1 "ENTRY_108a9790"

undefined4 __stdcall FUN_108a9790(undefined4 param_1)

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
  puStack_c = (undefined1 *)(LAB_116356ad);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  thunk_FUN_105f5920(&local_14);
  local_14 = (undefined4)(DAT_121a35d4);
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
  uVar3 = (undefined1)(thunk_FUN_108b8b70(local_54));
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar8))) goto LAB_108a98d2;
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
LAB_108a98d2:
                    
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


// Reference entry 108a9eb0; body size 81 bytes.
#line 1 "ENTRY_108a9eb0"

undefined4 FUN_108a9eb0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_10eac8c0());
  if (iVar2 != 1) {
    iVar2 = (int)(thunk_FUN_10eac8c0());
    if (iVar2 != 2) goto LAB_108a9eee;
  }
  cVar1 = (char)(thunk_FUN_10eacd60());
  if (cVar1 == '\0') {
    thunk_FUN_10eacda0(param_1);
    return (undefined4)(param_1);
  }
LAB_108a9eee:
  thunk_FUN_10eace00(param_1);
  return (undefined4)(param_1);
}


// Reference entry 108a9f20; body size 137 bytes.
#line 1 "ENTRY_108a9f20"

undefined4 * __thiscall Recovered_Bulk::FUN_108a9f20(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116357ad);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  param_2[1] = 0;
  param_2[2] = 0;
  iVar1 = (int)(*(int *)(param_1 + 0x11c));
  iVar2 = (int)(*(int *)(param_1 + 0x120));
  if (iVar1 != iVar2) {
    thunk_FUN_1065a4d0(iVar2 - iVar1 >> 3);
    local_8 = (undefined4)(0);
    uVar3 = (undefined4)(thunk_FUN_10648af0(iVar1,iVar2,*param_2));
    param_2[1] = uVar3;
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 108b0d10; body size 133 bytes.
#line 1 "ENTRY_108b0d10"

undefined1 FUN_108b0d10(void)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11636725);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)(local_14))->int_allocRep("setProperties");
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(thunk_FUN_10dfba00(local_14));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  uVar1 = (undefined1)(thunk_FUN_10df10f0(uVar3));
  thunk_FUN_10def0d0(uVar2);
  local_8 = (undefined4)(2);
  ((SCStr *)(local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 108b1830; body size 120 bytes.
#line 1 "ENTRY_108b1830"

void FUN_108b1830(void)

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


// Reference entry 108b18d0; body size 187 bytes.
#line 1 "ENTRY_108b18d0"

void FUN_108b18d0(void)

{
  int iVar1;
  int iVar2;
  
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
  iVar1 = (int)(thunk_FUN_10eb41b0());
  iVar2 = (int)(thunk_FUN_10ebc1d0());
  *(undefined1 *)(iVar2 + 0x118) = *(undefined1 *)(iVar1 + 0x118);
  thunk_FUN_105a26b0();
  iVar1 = (int)(thunk_FUN_10df2df0());
  if (iVar1 == DAT_121a35b4) {
    iVar1 = (int)(thunk_FUN_10ebc1d0());
    *(undefined1 *)(iVar1 + 0x119) = 1;
  }
  return;
}


// Reference entry 108b19c0; body size 187 bytes.
#line 1 "ENTRY_108b19c0"

void FUN_108b19c0(void)

{
  int iVar1;
  int iVar2;
  
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
  iVar1 = (int)(thunk_FUN_10eb41b0());
  iVar2 = (int)(thunk_FUN_10ebc1d0());
  *(undefined1 *)(iVar2 + 0x118) = *(undefined1 *)(iVar1 + 0x118);
  thunk_FUN_105a26b0();
  iVar1 = (int)(thunk_FUN_10df2df0());
  if (iVar1 == DAT_121a35b4) {
    iVar1 = (int)(thunk_FUN_10ebc1d0());
    *(undefined1 *)(iVar1 + 0x119) = 1;
  }
  return;
}


// Reference entry 108b1ab0; body size 117 bytes.
#line 1 "ENTRY_108b1ab0"

void FUN_108b1ab0(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116368cd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebbab0(0x4048);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108b1fa0; body size 129 bytes.
#line 1 "ENTRY_108b1fa0"

void FUN_108b1fa0(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116369bd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebbab0(0x4048);
    thunk_FUN_10ee48c0();
    thunk_FUN_10ee4590();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108b2860; body size 488 bytes.
#line 1 "ENTRY_108b2860"

void FUN_108b2860(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11636b55);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 == '\0') {
    ((SCStr *)((SCStr *)&param_1))->int_allocRep("success");
    local_8 = (undefined4)(0xc);
    uVar2 = (undefined4)(thunk_FUN_10df5d10(&param_1));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
    cVar1 = (char)(thunk_FUN_10def450(uVar2));
    thunk_FUN_10def0d0();
    local_8 = (undefined4)(0xe);
    ((SCStr *)((SCStr *)&param_1))->int_release();
    param_1 = (undefined4)(0);
    local_8 = (undefined4)(0xffffffff);
    if (cVar1 != '\0') {
      thunk_FUN_10ebb8e0("successWait",1000);
    }
  }
  else {
    thunk_FUN_10eb41b0();
    cVar1 = (char)(thunk_FUN_10eace20());
    if (cVar1 == '\0') {
      pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
      piVar4 = (int *)((int *)(**(code **)(**(int **)(*(int *)(pSVar3 + 0x4c) + 0xe8) + 4))(&local_1c,7));
      piVar6 = (int *)((int *)*piVar4);
      local_8 = (undefined4)(1);
      *piVar4 = (int)(0);
      if (piVar6 == (int *)0x0) {
        piVar4 = (int *)((int *)0x0);
      }
      else {
        piVar4 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
      }
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)((int *)0x0);
        local_18 = (int *)((int *)0x0);
      }
      else {
        ((SCStr *)((SCStr *)&param_1))->int_allocRep("SCIHapticDelegate");
        *(unsigned char *)((char *)&local_8 + 0) = 3;
        puVar5 = (undefined4 *)((undefined4 *)(**(code **)*piVar6)(&local_14,&param_1));
        piVar6 = (int *)((int *)*puVar5);
        *puVar5 = (undefined4)(0);
        *(unsigned char *)((char *)&local_8 + 0) = 5;
        local_18 = (int *)(piVar6);
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 8))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 6;
        ((SCStr *)((SCStr *)&param_1))->int_release();
        param_1 = (undefined4)(0);
      }
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 10;
      if (local_1c != (int *)0x0) {
        (**(code **)(*local_1c + 8))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0x14))(0);
      }
      local_8 = (undefined4)(0xb);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 8))();
        ExceptionList = (void *)(local_10);
        return;
      }
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108b3b90; body size 316 bytes.
#line 1 "ENTRY_108b3b90"

void FUN_108b3b90(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11636ef5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebbab0(0x4000);
    ExceptionList = (void *)(local_10);
    return;
  }
  ((SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("success");
  local_8 = (undefined4)(1);
  uVar2 = (undefined4)(thunk_FUN_10df5d10(&stack0x00000004));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(3);
  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    thunk_FUN_10ebb8e0("successWait",1000);
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10dfbbe0());
  local_8 = (undefined4)(4);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar3 + 0x119) = 1;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108b4110; body size 418 bytes.
#line 1 "ENTRY_108b4110"

void FUN_108b4110(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SCStr local_18 [4];
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163703d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)(local_14))->int_allocRep("tempWire");
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(thunk_FUN_10df6f00(local_14));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  cVar1 = (char)(thunk_FUN_10def450(uVar3));
  thunk_FUN_10def0d0(uVar2);
  local_8 = (undefined4)(2);
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 == '\0') {
    ((SCStr *)(local_14))->int_allocRep("helpButton");
    local_8 = (undefined4)(7);
    uVar3 = (undefined4)(thunk_FUN_10df6f00(local_14));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    cVar1 = (char)(thunk_FUN_10def450(uVar3));
    thunk_FUN_10def0d0();
    local_8 = (undefined4)(9);
    ((SCStr *)(local_14))->int_release();
    local_8 = (undefined4)(0xffffffff);
    if (cVar1 != '\0') {
      ((SCStr *)(local_18))->int_allocRep("joinProduct-routerError");
      local_8 = (undefined4)(10);
      thunk_FUN_10eba7e0(local_18);
      local_8 = (undefined4)(0xb);
      ((SCStr *)(local_18))->int_release();
    }
  }
  else {
    ((SCStr *)((SCStr *)&param_1))->int_allocRep("Router error during join");
    puVar4 = (undefined4 *)(&param_1);
    local_8 = (undefined4)(3);
    uVar3 = (undefined4)(5);
    thunk_FUN_10eb41b0(5,puVar4);
    thunk_FUN_10ead690(uVar3,puVar4);
    local_8 = (undefined4)(4);
    ((SCStr *)((SCStr *)&param_1))->int_release();
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_10eb41b0();
    thunk_FUN_10cf34e0(&param_1);
    local_8 = (undefined4)(5);
    thunk_FUN_10c9c0a0(1);
    local_8 = (undefined4)(6);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))();
      ExceptionList = (void *)(local_10);
      return;
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108b4320; body size 280 bytes.
#line 1 "ENTRY_108b4320"

void FUN_108b4320(void)

{
  uint uVar1;
  int iVar2;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11637095);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb41b0(uVar1);
  thunk_FUN_10cf34e0(&local_14);
  local_8 = (undefined4)(0);
  iVar2 = (int)(thunk_FUN_10c95170());
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(0xffffffff);
  if (iVar2 == 2) {
    thunk_FUN_10eb41b0(uVar1);
    thunk_FUN_10cf34e0(&local_14);
    local_8 = (undefined4)(2);
    thunk_FUN_10c9c0b0(3);
    local_8 = (undefined4)(3);
    local_18 = (int *)(local_14);
  }
  else if (iVar2 == 3) {
    thunk_FUN_10eb41b0(uVar1);
    thunk_FUN_10cf34e0(&local_14);
    local_8 = (undefined4)(4);
    thunk_FUN_10c9c0b0(4);
    local_8 = (undefined4)(5);
    local_18 = (int *)(local_14);
  }
  else {
    thunk_FUN_10eb41b0(uVar1);
    thunk_FUN_10cf34e0(&local_18);
    local_8 = (undefined4)(6);
    thunk_FUN_10c9c0b0(0);
    local_8 = (undefined4)(7);
  }
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108b48f0; body size 180 bytes.
#line 1 "ENTRY_108b48f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108b48f0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163719e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108b4ad0; body size 180 bytes.
#line 1 "ENTRY_108b4ad0"

undefined4 * __thiscall Recovered_Bulk::FUN_108b4ad0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163725e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108b4d60; body size 194 bytes.
#line 1 "ENTRY_108b4d60"

undefined4 * __thiscall Recovered_Bulk::FUN_108b4d60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163731e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCLegacyAuthenticationTimeoutPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationTimeoutPageType);
  DAT_121a3644 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108b5030; body size 194 bytes.
#line 1 "ENTRY_108b5030"

undefined4 * __thiscall Recovered_Bulk::FUN_108b5030(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116373de);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCLegacyAuthenticationWaitingPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationWaitingPageType);
  DAT_121a3640 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108b5130; body size 192 bytes.
#line 1 "ENTRY_108b5130"

undefined4 * __thiscall Recovered_Bulk::FUN_108b5130(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11637439);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationWizard);
  param_1[4] = (uint)&ghidra_vftable_SCLegacyAuthenticationWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCLegacyAuthenticationWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCLegacyAuthenticationWizard;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108b5770; body size 135 bytes.
#line 1 "ENTRY_108b5770"

void __fastcall FUN_108b5770(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116375d0);
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


// Reference entry 108b5840; body size 135 bytes.
#line 1 "ENTRY_108b5840"

void __fastcall FUN_108b5840(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11637600);
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


// Reference entry 108b5910; body size 186 bytes.
#line 1 "ENTRY_108b5910"

void __fastcall FUN_108b5910(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11637630);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
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


// Reference entry 108b5b50; body size 68 bytes.
#line 1 "ENTRY_108b5b50"

undefined4 * __thiscall Recovered_Bulk::FUN_108b5b50(byte param_2)
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


// Reference entry 108b5c70; body size 68 bytes.
#line 1 "ENTRY_108b5c70"

undefined4 * __thiscall Recovered_Bulk::FUN_108b5c70(byte param_2)
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


// Reference entry 108b5d10; body size 68 bytes.
#line 1 "ENTRY_108b5d10"

undefined4 * __thiscall Recovered_Bulk::FUN_108b5d10(byte param_2)
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


// Reference entry 108b5db0; body size 159 bytes.
#line 1 "ENTRY_108b5db0"

undefined4 * __thiscall Recovered_Bulk::FUN_108b5db0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11637660);
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
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108b5ec0; body size 159 bytes.
#line 1 "ENTRY_108b5ec0"

undefined4 * __thiscall Recovered_Bulk::FUN_108b5ec0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11637690);
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


// Reference entry 108b5fd0; body size 210 bytes.
#line 1 "ENTRY_108b5fd0"

int __thiscall Recovered_Bulk::FUN_108b5fd0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116376c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
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
    thunk_FUN_1148a50e(param_1,0x10c);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 108b6510; body size 175 bytes.
#line 1 "ENTRY_108b6510"

undefined4 * __thiscall Recovered_Bulk::FUN_108b6510(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11637a57);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationButtonPressPage);
    puVar1[4] = (uint)&ghidra_vftable_SCLegacyAuthenticationButtonPressPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCLegacyAuthenticationButtonPressPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCLegacyAuthenticationButtonPressPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108b65f0; body size 175 bytes.
#line 1 "ENTRY_108b65f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108b65f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11637aa7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationTimeoutPage);
    puVar1[4] = (uint)&ghidra_vftable_SCLegacyAuthenticationTimeoutPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCLegacyAuthenticationTimeoutPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCLegacyAuthenticationTimeoutPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108b66d0; body size 188 bytes.
#line 1 "ENTRY_108b66d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108b66d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11637af7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationVerifyProductPage);
    puVar1[4] = (uint)&ghidra_vftable_SCLegacyAuthenticationVerifyProductPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCLegacyAuthenticationVerifyProductPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCLegacyAuthenticationVerifyProductPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108b67c0; body size 198 bytes.
#line 1 "ENTRY_108b67c0"

undefined4 * __thiscall Recovered_Bulk::FUN_108b67c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11637b47);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xec));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationWaitingPage);
    puVar1[4] = (uint)&ghidra_vftable_SCLegacyAuthenticationWaitingPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCLegacyAuthenticationWaitingPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCLegacyAuthenticationWaitingPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108b68c0; body size 219 bytes.
#line 1 "ENTRY_108b68c0"

undefined4 * __stdcall FUN_108b68c0(undefined4 *param_1)

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
  puStack_c = (undefined1 *)(LAB_11637bb0);
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


// Reference entry 108b69e0; body size 251 bytes.
#line 1 "ENTRY_108b69e0"

undefined4 * __thiscall Recovered_Bulk::FUN_108b69e0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11637c34);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x10c));
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationWizard);
    puVar2[4] = (uint)&ghidra_vftable_SCLegacyAuthenticationWizard;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationWizard);
    puVar2[0x2a] = (uint)&ghidra_vftable_SCLegacyAuthenticationWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108b8b70; body size 133 bytes.
#line 1 "ENTRY_108b8b70"

undefined1 FUN_108b8b70(void)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116380b5);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)(local_14))->int_allocRep("verifyProduct");
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(thunk_FUN_10dfba00(local_14));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  uVar1 = (undefined1)(thunk_FUN_10df10f0(uVar3));
  thunk_FUN_10def0d0(uVar2);
  local_8 = (undefined4)(2);
  ((SCStr *)(local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 108bc2b0; body size 619 bytes.
#line 1 "ENTRY_108bc2b0"

void __thiscall Recovered_Bulk::FUN_108bc2b0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163895d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar3 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar2 != '\0') {
    thunk_FUN_10ebbab0(8);
    thunk_FUN_10eb41b0();
    piVar4 = (int *)((int *)thunk_FUN_108b68c0(&param_2));
    piVar1 = (int *)((int *)*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)(*(int **)(param_1 + 0xe4));
    local_8 = (undefined4)(1);
    if (piVar4 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined4 *)(param_1 + 0xe4) = 0;
      (**(code **)(*piVar4 + 8))();
    }
    *(int **)(param_1 + 0xe0) = piVar1;
    if (piVar1 == (int *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)((**(code **)(*piVar1 + 0xc))());
    }
    *(undefined4 *)(param_1 + 0xe4) = uVar3;
    local_8 = (undefined4)(2);
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))();
    }
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_10ebb810("verifyProduct",*(undefined4 *)(param_1 + 0xe0),0);
    ExceptionList = (void *)(local_10);
    return;
  }
  ((SCStr *)((SCStr *)&param_2))->int_allocRep("verifyProduct");
  local_8 = (undefined4)(3);
  uVar3 = (undefined4)(thunk_FUN_10dfba00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar2 == '\0') {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("verifyProduct");
    local_8 = (undefined4)(8);
    uVar3 = (undefined4)(thunk_FUN_10dfb8f0(&param_2));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
    cVar2 = (char)(thunk_FUN_10def450(uVar3));
    thunk_FUN_10def0d0();
    local_8 = (undefined4)(10);
    ((SCStr *)((SCStr *)&param_2))->int_release();
    local_8 = (undefined4)(0xffffffff);
    if (cVar2 == '\0') {
      ExceptionList = (void *)(local_10);
      return;
    }
    if ((*(int *)(param_1 + 0xe0) == 0) || (*(int *)(*(int *)(param_1 + 0xe0) + 0x28) != 4)) {
      thunk_FUN_10eb41b0();
      thunk_FUN_10cf34e0(&local_14);
      local_8 = (undefined4)(0xd);
      thunk_FUN_10c9c070(2);
      local_8 = (undefined4)(0xe);
    }
    else {
      thunk_FUN_10eb41b0();
      thunk_FUN_10cf34e0(&param_2);
      local_8 = (undefined4)(0xb);
      thunk_FUN_10c9c070(3);
      local_8 = (undefined4)(0xc);
      local_14 = (int *)(param_2);
    }
  }
  else {
    thunk_FUN_10eb41b0();
    thunk_FUN_10cf34e0(&param_2);
    local_8 = (undefined4)(6);
    thunk_FUN_10c9c070(1);
    local_8 = (undefined4)(7);
    local_14 = (int *)(param_2);
  }
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108bcb20; body size 180 bytes.
#line 1 "ENTRY_108bcb20"

undefined4 * __thiscall Recovered_Bulk::FUN_108bcb20(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11638ade);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108bcc10; body size 180 bytes.
#line 1 "ENTRY_108bcc10"

undefined4 * __thiscall Recovered_Bulk::FUN_108bcc10(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11638b3e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108bcd00; body size 183 bytes.
#line 1 "ENTRY_108bcd00"

undefined4 * __thiscall Recovered_Bulk::FUN_108bcd00(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11638b9e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  local_8 = (undefined4)(2);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");
  local_8 = (undefined4)(7);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108bcdf0; body size 180 bytes.
#line 1 "ENTRY_108bcdf0"

undefined4 * __thiscall Recovered_Bulk::FUN_108bcdf0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11638bfe);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108bcee0; body size 180 bytes.
#line 1 "ENTRY_108bcee0"

undefined4 * __thiscall Recovered_Bulk::FUN_108bcee0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11638c5e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108bcfd0; body size 180 bytes.
#line 1 "ENTRY_108bcfd0"

undefined4 * __thiscall Recovered_Bulk::FUN_108bcfd0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11638cbe);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108bd1b0; body size 180 bytes.
#line 1 "ENTRY_108bd1b0"

undefined4 * __thiscall Recovered_Bulk::FUN_108bd1b0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11638d7e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108bd2a0; body size 213 bytes.
#line 1 "ENTRY_108bd2a0"

undefined4 * __thiscall Recovered_Bulk::FUN_108bd2a0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11638de0);
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
      uVar5 = (undefined4)(thunk_FUN_109f3c80(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109f6bf0(uVar3));
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


// Reference entry 108bd400; body size 194 bytes.
#line 1 "ENTRY_108bd400"

undefined4 * __thiscall Recovered_Bulk::FUN_108bd400(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11638e3e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCLegacyTVSetupIntroPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupIntroPageType);
  DAT_121a3694 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108bd500; body size 137 bytes.
#line 1 "ENTRY_108bd500"

undefined4 * __thiscall Recovered_Bulk::FUN_108bd500(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  param_1[0x38] = (uint)&ghidra_vftable_SCSwfObjHTListener;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupOpticalAudioSetupPage);
  param_1[4] = (uint)&ghidra_vftable_SCLegacyTVSetupOpticalAudioSetupPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCLegacyTVSetupOpticalAudioSetupPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCLegacyTVSetupOpticalAudioSetupPage;
  param_1[0x38] = (uint)&ghidra_vftable_SCLegacyTVSetupOpticalAudioSetupPage;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 108bd600; body size 194 bytes.
#line 1 "ENTRY_108bd600"

undefined4 * __thiscall Recovered_Bulk::FUN_108bd600(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11638e9e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCLegacyTVSetupOpticalCheckPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupOpticalCheckPageType);
  DAT_121a3698 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108bd700; body size 213 bytes.
#line 1 "ENTRY_108bd700"

undefined4 * __thiscall Recovered_Bulk::FUN_108bd700(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11638f00);
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
      uVar5 = (undefined4)(thunk_FUN_109f3c80(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109f6bf0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupRemoteControlSetupSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCLegacyTVSetupRemoteControlSetupSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCLegacyTVSetupRemoteControlSetupSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCLegacyTVSetupRemoteControlSetupSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108bd810; body size 197 bytes.
#line 1 "ENTRY_108bd810"

undefined4 * __thiscall Recovered_Bulk::FUN_108bd810(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11638f5e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCLegacyTVSetupRemoteControlSetupSubwiz");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  local_8 = (undefined4)(2);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");
  local_8 = (undefined4)(7);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupRemoteControlSetupSubwizType);
  DAT_121a36b0 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108bd970; body size 194 bytes.
#line 1 "ENTRY_108bd970"

undefined4 * __thiscall Recovered_Bulk::FUN_108bd970(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11638fbe);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCLegacyTVSetupTOSLinkAutoPlaySetPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkAutoPlaySetPageType);
  DAT_121a36a8 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108bdad0; body size 194 bytes.
#line 1 "ENTRY_108bdad0"

undefined4 * __thiscall Recovered_Bulk::FUN_108bdad0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163901e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCLegacyTVSetupTOSLinkCheckingPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkCheckingPageType);
  DAT_121a369c = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108bdc20; body size 194 bytes.
#line 1 "ENTRY_108bdc20"

undefined4 * __thiscall Recovered_Bulk::FUN_108bdc20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163907e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCLegacyTVSetupTOSLinkConnectionErrorPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkConnectionErrorPageType);
  DAT_121a36a0 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108bded0; body size 194 bytes.
#line 1 "ENTRY_108bded0"

undefined4 * __thiscall Recovered_Bulk::FUN_108bded0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163913e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCLegacyTVSetupTOSLinkSuccessPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSuccessPageType);
  DAT_121a36a4 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108bdfd0; body size 103 bytes.
#line 1 "ENTRY_108bdfd0"

undefined4 * __thiscall Recovered_Bulk::FUN_108bdfd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupWizard);
  param_1[4] = (uint)&ghidra_vftable_SCLegacyTVSetupWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCLegacyTVSetupWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCLegacyTVSetupWizard;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((int)param_1 + 0xf6) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 108be910; body size 187 bytes.
#line 1 "ENTRY_108be910"

void __fastcall FUN_108be910(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11639400);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0x3c]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x3a]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x38] = (uint)&ghidra_vftable_SCSwfObjHTListener;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108bebd0; body size 132 bytes.
#line 1 "ENTRY_108bebd0"

void __fastcall FUN_108bebd0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11639430);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 0xf0)))->int_release();
  *(undefined4 *)(param_1 + 0xf0) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_106da680();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108bef20; body size 68 bytes.
#line 1 "ENTRY_108bef20"

undefined4 * __thiscall Recovered_Bulk::FUN_108bef20(byte param_2)
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


// Reference entry 108bf100; body size 68 bytes.
#line 1 "ENTRY_108bf100"

undefined4 * __thiscall Recovered_Bulk::FUN_108bf100(byte param_2)
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


// Reference entry 108bf160; body size 68 bytes.
#line 1 "ENTRY_108bf160"

undefined4 * __thiscall Recovered_Bulk::FUN_108bf160(byte param_2)
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


// Reference entry 108bf230; body size 68 bytes.
#line 1 "ENTRY_108bf230"

undefined4 * __thiscall Recovered_Bulk::FUN_108bf230(byte param_2)
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


// Reference entry 108bf2d0; body size 68 bytes.
#line 1 "ENTRY_108bf2d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108bf2d0(byte param_2)
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


// Reference entry 108bf450; body size 68 bytes.
#line 1 "ENTRY_108bf450"

undefined4 * __thiscall Recovered_Bulk::FUN_108bf450(byte param_2)
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


// Reference entry 108bf560; body size 68 bytes.
#line 1 "ENTRY_108bf560"

undefined4 * __thiscall Recovered_Bulk::FUN_108bf560(byte param_2)
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


// Reference entry 108bf600; body size 156 bytes.
#line 1 "ENTRY_108bf600"

int __thiscall Recovered_Bulk::FUN_108bf600(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11639460);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 0xf0)))->int_release();
  *(undefined4 *)(param_1 + 0xf0) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf8);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 108bf7b0; body size 168 bytes.
#line 1 "ENTRY_108bf7b0"

undefined4 * __thiscall Recovered_Bulk::FUN_108bf7b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11639747);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCLegacyTVSetupIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCLegacyTVSetupIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCLegacyTVSetupIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108bf890; body size 168 bytes.
#line 1 "ENTRY_108bf890"

undefined4 * __thiscall Recovered_Bulk::FUN_108bf890(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11639797);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupOpticalCheckPage);
    puVar1[4] = (uint)&ghidra_vftable_SCLegacyTVSetupOpticalCheckPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCLegacyTVSetupOpticalCheckPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCLegacyTVSetupOpticalCheckPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108bf970; body size 276 bytes.
#line 1 "ENTRY_108bf970"

undefined4 * __thiscall Recovered_Bulk::FUN_108bf970(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_11639812);
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
        uVar7 = (undefined4)(thunk_FUN_109f3c80(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_109f6bf0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupRemoteControlSetupSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCLegacyTVSetupRemoteControlSetupSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCLegacyTVSetupRemoteControlSetupSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCLegacyTVSetupRemoteControlSetupSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108bfad0; body size 178 bytes.
#line 1 "ENTRY_108bfad0"

undefined4 * __thiscall Recovered_Bulk::FUN_108bfad0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11639867);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xfc));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_108bd500(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkAutoPlaySetPage);
    puVar1[4] = (uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkAutoPlaySetPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkAutoPlaySetPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkAutoPlaySetPage;
    puVar1[0x38] = (uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkAutoPlaySetPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108bfbb0; body size 185 bytes.
#line 1 "ENTRY_108bfbb0"

undefined4 * __thiscall Recovered_Bulk::FUN_108bfbb0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116398b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xfc));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_108bd500(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkCheckingPage);
    puVar1[4] = (uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkCheckingPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkCheckingPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkCheckingPage;
    puVar1[0x38] = (uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkCheckingPage;
    *(undefined1 *)((int)puVar1 + 0xfa) = 1;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108bfca0; body size 168 bytes.
#line 1 "ENTRY_108bfca0"

undefined4 * __thiscall Recovered_Bulk::FUN_108bfca0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11639907);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkConnectionErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkConnectionErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkConnectionErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkConnectionErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108bfd80; body size 178 bytes.
#line 1 "ENTRY_108bfd80"

undefined4 * __thiscall Recovered_Bulk::FUN_108bfd80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11639957);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xfc));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_108bd500(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSilenceAutoPlaySetPage);
    puVar1[4] = (uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSilenceAutoPlaySetPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSilenceAutoPlaySetPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSilenceAutoPlaySetPage;
    puVar1[0x38] = (uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSilenceAutoPlaySetPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108bfe60; body size 168 bytes.
#line 1 "ENTRY_108bfe60"

undefined4 * __thiscall Recovered_Bulk::FUN_108bfe60(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116399a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSuccessPage);
    puVar1[4] = (uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSuccessPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSuccessPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSuccessPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108bff40; body size 239 bytes.
#line 1 "ENTRY_108bff40"

undefined4 * __thiscall Recovered_Bulk::FUN_108bff40(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11639a10);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCLegacyTVSetupWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCLegacyTVSetupWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCLegacyTVSetupWizard;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    *(undefined2 *)(puVar1 + 0x3d) = 0;
    *(undefined1 *)((int)puVar1 + 0xf6) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108c3f10; body size 472 bytes.
#line 1 "ENTRY_108c3f10"

undefined4 __thiscall Recovered_Bulk::FUN_108c3f10(undefined4 param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
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
  puStack_70 = (undefined1 *)(LAB_1163a335);
  local_74 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)local_68);
  ExceptionList = (void *)(&local_74);
  local_8 = (undefined4)(DAT_121a3698);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a3694);
  local_6c = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a369c);
  *(unsigned char *)((char *)&local_6c + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(3)));
  piVar3 = (int *)((int *)thunk_FUN_106190a0(*(undefined1 *)((int)param_1 + 0xf6),local_48));
  iVar6 = (int)(*piVar3);
  (**(code **)(*param_1 + 8))(local_68,uVar2);
  iVar4 = (int)(thunk_FUN_105ad8f0());
  piVar3 = (int *)((int *)(**(code **)(iVar6 + 0xc))(iVar4 == 6));
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0x10))(local_94));
  uVar5 = (undefined4)((**(code **)(*piVar3 + 4))());
  thunk_FUN_105f5a00(uVar5);
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
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar7))) goto LAB_108c408d;
    }
    thunk_FUN_1148a50e(puVar7,uVar2);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar2 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar6 = (int)(iStack_20);
    if (0xfff < uVar2) {
      iVar6 = (int)(*(int *)(iStack_20 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iStack_20 - iVar6) - 4U) {
LAB_108c408d:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar6,uVar2);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_74);
  return (undefined4)(param_2);
}


// Reference entry 108c61e0; body size 160 bytes.
#line 1 "ENTRY_108c61e0"

void FUN_108c61e0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163a805);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eb41b0(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)(*(int **)(iVar2 + 0xe8));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_10ebc1d0();
  thunk_FUN_10cf3780(piVar1);
  local_8 = (undefined4)(4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108c62b0; body size 318 bytes.
#line 1 "ENTRY_108c62b0"

void FUN_108c62b0(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163a86f);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  cVar2 = (char)(thunk_FUN_10df1730(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if (cVar2 != '\0') {
    thunk_FUN_10ebba70("autoDismiss");
  }
  uVar3 = (undefined4)(thunk_FUN_10dfbb10());
  local_8 = (undefined4)(0);
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar2 != '\0') {
    thunk_FUN_10ebb8e0("autoDismiss",600000);
    ExceptionList = (void *)(local_10);
    return;
  }
  ((SCStr *)((SCStr *)&param_1))->int_allocRep("autoDismiss");
  local_8 = (undefined4)(1);
  uVar3 = (undefined4)(thunk_FUN_10dfd7b0(&param_1));
  local_8 = (undefined4)(2);
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  if (cVar2 != '\0') {
    cVar2 = (char)(thunk_FUN_105a30b0());
    if (cVar2 != '\0') {
      bVar1 = (bool)(true);
      goto LAB_108c639e;
    }
  }
  bVar1 = (bool)(false);
LAB_108c639e:
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(3);
  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (undefined4)(0);
  local_8 = (undefined4)(0xffffffff);
  if (bVar1) {
    thunk_FUN_106ce800(0x41c00000);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108c6dd0; body size 122 bytes.
#line 1 "ENTRY_108c6dd0"

void FUN_108c6dd0(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163a9ed);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebb8e0("successWait",2000);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108c6ed0; body size 548 bytes.
#line 1 "ENTRY_108c6ed0"

void __fastcall FUN_108c6ed0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  int *local_20;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163aa5e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eb41b0(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar6 = (int *)(*(int **)(iVar2 + 0xe8));
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
  }
  local_8 = (undefined4)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);
  if (piVar6 == (int *)0x0) {
    local_20 = (int *)((int *)0x0);
  }
  else {
    local_20 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar6 != (int *)0x0) {
    cVar1 = (char)(thunk_FUN_10c9b220());
    if (cVar1 == '\0') {
      cVar1 = (char)(thunk_FUN_10c9a420());
      if (cVar1 != '\0') {
        cVar1 = (char)(thunk_FUN_10c9ac30());
        if (cVar1 == '\0') {
          local_18 = (undefined4 *)(operator_new(0xd7d0));
          *(unsigned char *)((char *)&local_8 + 0) = 4;
          if (local_18 == (undefined4 *)0x0) {
            local_14 = (undefined4 *)((undefined4 *)0x0);
          }
          else {
            local_14 = (undefined4 *)(local_18);
            iVar2 = (int)(thunk_FUN_10c96490());
            uVar3 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x48))());
            uVar11 = (undefined4)(0);
            uVar10 = (undefined4)(0);
            uVar9 = (undefined4)(2000);
            uVar8 = (undefined4)(2000);
            uVar4 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x50))
                              (2000,2000,0,0));
            puVar5 = (undefined4 *)(local_14);
            thunk_FUN_111c0760(uVar3,"urn:schemas-upnp-org:service:DeviceProperties:1",
                               "SetAutoplayRoomUUID",uVar4,uVar8,uVar9,uVar10,uVar11);
            *puVar5 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayRoomUUIDAIOOp);
            puVar5[0x18] = (uint)&ghidra_vftable_RUpnpDPSetAutoplayRoomUUIDAIOOp;
            puVar5[0x11b] = (uint)&ghidra_vftable_RUpnpDPSetAutoplayRoomUUIDAIOOp;
          }
          *(unsigned char *)((char *)&local_8 + 0) = 2;
          puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_10c98c80(&local_18));
          *(unsigned char *)((char *)&local_8 + 0) = 5;
          puVar7 = (undefined1 *)(&DAT_1186d2ee);
          if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
            puVar7 = (undefined1 *)((undefined1 *)*puVar5);
          }
          piVar6 = (int *)((int *)thunk_FUN_1124ffa0("RoomUUID",0));
          (**(code **)(*piVar6 + 0xc))(puVar7);
          piVar6 = (int *)((int *)thunk_FUN_1124ffa0("Source",0));
          (**(code **)(*piVar6 + 0xc))(&DAT_118bb26c);
          *(unsigned char *)((char *)&local_8 + 0) = 6;
          ((SCStr *)((SCStr *)&local_18))->int_release();
          *(unsigned char *)((char *)&local_8 + 0) = 2;
          local_18 = (undefined4 *)(operator_new(0x48));
          *(unsigned char *)((char *)&local_8 + 0) = 7;
          if (local_18 == (undefined4 *)0x0) {
            uVar3 = (undefined4)(0);
          }
          else {
            uVar3 = (undefined4)(thunk_FUN_101b94f0(local_14));
          }
          *(unsigned char *)((char *)&local_8 + 0) = 2;
          thunk_FUN_1055a290(uVar3);
          thunk_FUN_10ebb810("autoPlay",*(undefined4 *)(param_1 + 0xe4),0);
          pcVar12 = (char *)("Optical audio setup: start running autoPlayOp..");
          goto LAB_108c70c6;
        }
      }
    }
  }
  pcVar12 = (char *)("Optical audio setup: failed due to null product");
LAB_108c70c6:
  thunk_FUN_10302280(param_1 + 0xa8,pcVar12);
  local_8 = (undefined4)(8);
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108c7570; body size 178 bytes.
#line 1 "ENTRY_108c7570"

void __fastcall FUN_108c7570(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int **ppiVar4;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163ab95);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("pageVOText");
  ppiVar4 = (int **)(&local_18);
  local_8 = (undefined4)(0);
  (**(code **)*param_1)(ppiVar4,uVar2);
  thunk_FUN_106d83f0(ppiVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  iVar1 = (int)(*local_18);
  uVar3 = (undefined4)(thunk_FUN_10c5fc80());
  (**(code **)(iVar1 + 0x1c))(&local_14,uVar3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  local_8 = (undefined4)(3);
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(0xffffffff);
  (**(code **)*param_1)();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108c9180; body size 125 bytes.
#line 1 "ENTRY_108c9180"

undefined4 * __thiscall Recovered_Bulk::FUN_108c9180(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163b40d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb64f0(param_2);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationPinInputPage);
  param_1[4] = (uint)&ghidra_vftable_SCManualPinAuthenticationPinInputPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCManualPinAuthenticationPinInputPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCManualPinAuthenticationPinInputPage;
  ((SCStr *)((SCStr *)(param_1 + 0x38)))->int_allocRep("");
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108c95c0; body size 199 bytes.
#line 1 "ENTRY_108c95c0"

undefined4 * __thiscall Recovered_Bulk::FUN_108c95c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163b589);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationWizard);
  param_1[4] = (uint)&ghidra_vftable_SCManualPinAuthenticationWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCManualPinAuthenticationWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCManualPinAuthenticationWizard;
  *(undefined1 *)(param_1 + 0x43) = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108ca7f0; body size 123 bytes.
#line 1 "ENTRY_108ca7f0"

void __fastcall FUN_108ca7f0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1163ba30);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0(uVar1);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108ca950; body size 186 bytes.
#line 1 "ENTRY_108ca950"

void __fastcall FUN_108ca950(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1163ba60);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
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


// Reference entry 108cae10; body size 68 bytes.
#line 1 "ENTRY_108cae10"

undefined4 * __thiscall Recovered_Bulk::FUN_108cae10(byte param_2)
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


// Reference entry 108cb0e0; body size 68 bytes.
#line 1 "ENTRY_108cb0e0"

undefined4 * __thiscall Recovered_Bulk::FUN_108cb0e0(byte param_2)
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


// Reference entry 108cb180; body size 68 bytes.
#line 1 "ENTRY_108cb180"

undefined4 * __thiscall Recovered_Bulk::FUN_108cb180(byte param_2)
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


// Reference entry 108cb220; body size 68 bytes.
#line 1 "ENTRY_108cb220"

undefined4 * __thiscall Recovered_Bulk::FUN_108cb220(byte param_2)
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


// Reference entry 108cb2c0; body size 68 bytes.
#line 1 "ENTRY_108cb2c0"

undefined4 * __thiscall Recovered_Bulk::FUN_108cb2c0(byte param_2)
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


// Reference entry 108cb360; body size 68 bytes.
#line 1 "ENTRY_108cb360"

undefined4 * __thiscall Recovered_Bulk::FUN_108cb360(byte param_2)
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


// Reference entry 108cb400; body size 68 bytes.
#line 1 "ENTRY_108cb400"

undefined4 * __thiscall Recovered_Bulk::FUN_108cb400(byte param_2)
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


// Reference entry 108cb4a0; body size 68 bytes.
#line 1 "ENTRY_108cb4a0"

undefined4 * __thiscall Recovered_Bulk::FUN_108cb4a0(byte param_2)
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


// Reference entry 108cb540; body size 68 bytes.
#line 1 "ENTRY_108cb540"

undefined4 * __thiscall Recovered_Bulk::FUN_108cb540(byte param_2)
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


// Reference entry 108cb5e0; body size 68 bytes.
#line 1 "ENTRY_108cb5e0"

undefined4 * __thiscall Recovered_Bulk::FUN_108cb5e0(byte param_2)
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


// Reference entry 108cb680; body size 147 bytes.
#line 1 "ENTRY_108cb680"

undefined4 * __thiscall Recovered_Bulk::FUN_108cb680(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1163ba90);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0(uVar1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe4);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108cb780; body size 68 bytes.
#line 1 "ENTRY_108cb780"

undefined4 * __thiscall Recovered_Bulk::FUN_108cb780(byte param_2)
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


// Reference entry 108cb820; body size 68 bytes.
#line 1 "ENTRY_108cb820"

undefined4 * __thiscall Recovered_Bulk::FUN_108cb820(byte param_2)
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


// Reference entry 108cb8c0; body size 210 bytes.
#line 1 "ENTRY_108cb8c0"

int __thiscall Recovered_Bulk::FUN_108cb8c0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1163bac0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x104));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
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
    thunk_FUN_1148a50e(param_1,0x110);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 108cbb10; body size 68 bytes.
#line 1 "ENTRY_108cbb10"

undefined4 * __thiscall Recovered_Bulk::FUN_108cbb10(byte param_2)
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


// Reference entry 108cbcb0; body size 168 bytes.
#line 1 "ENTRY_108cbcb0"

undefined4 * __thiscall Recovered_Bulk::FUN_108cbcb0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163bde7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationAuthRetryPage);
    puVar1[4] = (uint)&ghidra_vftable_SCManualPinAuthenticationAuthRetryPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCManualPinAuthenticationAuthRetryPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCManualPinAuthenticationAuthRetryPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108cbd90; body size 168 bytes.
#line 1 "ENTRY_108cbd90"

undefined4 * __thiscall Recovered_Bulk::FUN_108cbd90(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163be37);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationButtonPressFailedPage);
    puVar1[4] = (uint)&ghidra_vftable_SCManualPinAuthenticationButtonPressFailedPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCManualPinAuthenticationButtonPressFailedPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCManualPinAuthenticationButtonPressFailedPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108cbe70; body size 168 bytes.
#line 1 "ENTRY_108cbe70"

undefined4 * __thiscall Recovered_Bulk::FUN_108cbe70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163be87);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationButtonPressWaitingPage);
    puVar1[4] = (uint)&ghidra_vftable_SCManualPinAuthenticationButtonPressWaitingPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCManualPinAuthenticationButtonPressWaitingPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCManualPinAuthenticationButtonPressWaitingPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108cbf50; body size 168 bytes.
#line 1 "ENTRY_108cbf50"

undefined4 * __thiscall Recovered_Bulk::FUN_108cbf50(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163bed7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationChimingButtonPressFailedPage);
    puVar1[4] = (uint)&ghidra_vftable_SCManualPinAuthenticationChimingButtonPressFailedPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCManualPinAuthenticationChimingButtonPressFailedPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCManualPinAuthenticationChimingButtonPressFailedPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108cc030; body size 168 bytes.
#line 1 "ENTRY_108cc030"

undefined4 * __thiscall Recovered_Bulk::FUN_108cc030(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163bf27);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationChimingButtonPressWaitingPage);
    puVar1[4] = (uint)&ghidra_vftable_SCManualPinAuthenticationChimingButtonPressWaitingPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCManualPinAuthenticationChimingButtonPressWaitingPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCManualPinAuthenticationChimingButtonPressWaitingPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108cc110; body size 178 bytes.
#line 1 "ENTRY_108cc110"

undefined4 * __thiscall Recovered_Bulk::FUN_108cc110(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163bf77);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationConnectingProductPage);
    puVar1[4] = (uint)&ghidra_vftable_SCManualPinAuthenticationConnectingProductPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCManualPinAuthenticationConnectingProductPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCManualPinAuthenticationConnectingProductPage;
    puVar1[0x38] = 0x3eb;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108cc1f0; body size 168 bytes.
#line 1 "ENTRY_108cc1f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108cc1f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163bfc7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationIdentifyProductPage);
    puVar1[4] = (uint)&ghidra_vftable_SCManualPinAuthenticationIdentifyProductPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCManualPinAuthenticationIdentifyProductPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCManualPinAuthenticationIdentifyProductPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108cc2d0; body size 168 bytes.
#line 1 "ENTRY_108cc2d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108cc2d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163c017);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationLocatePinPage);
    puVar1[4] = (uint)&ghidra_vftable_SCManualPinAuthenticationLocatePinPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCManualPinAuthenticationLocatePinPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCManualPinAuthenticationLocatePinPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108cc3b0; body size 168 bytes.
#line 1 "ENTRY_108cc3b0"

undefined4 * __thiscall Recovered_Bulk::FUN_108cc3b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163c067);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationLocatePinRetryPage);
    puVar1[4] = (uint)&ghidra_vftable_SCManualPinAuthenticationLocatePinRetryPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCManualPinAuthenticationLocatePinRetryPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCManualPinAuthenticationLocatePinRetryPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108cc490; body size 188 bytes.
#line 1 "ENTRY_108cc490"

undefined4 * __thiscall Recovered_Bulk::FUN_108cc490(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163c0bf);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationPinInputPage);
    puVar1[4] = (uint)&ghidra_vftable_SCManualPinAuthenticationPinInputPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCManualPinAuthenticationPinInputPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCManualPinAuthenticationPinInputPage;
    ((SCStr *)((SCStr *)(puVar1 + 0x38)))->int_allocRep("");
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108cc580; body size 168 bytes.
#line 1 "ENTRY_108cc580"

undefined4 * __thiscall Recovered_Bulk::FUN_108cc580(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163c107);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationRetryHandshakePage);
    puVar1[4] = (uint)&ghidra_vftable_SCManualPinAuthenticationRetryHandshakePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCManualPinAuthenticationRetryHandshakePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCManualPinAuthenticationRetryHandshakePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108cc660; body size 168 bytes.
#line 1 "ENTRY_108cc660"

undefined4 * __thiscall Recovered_Bulk::FUN_108cc660(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163c157);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationTimedOutAuthRetryPage);
    puVar1[4] = (uint)&ghidra_vftable_SCManualPinAuthenticationTimedOutAuthRetryPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCManualPinAuthenticationTimedOutAuthRetryPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCManualPinAuthenticationTimedOutAuthRetryPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108cc740; body size 168 bytes.
#line 1 "ENTRY_108cc740"

undefined4 * __thiscall Recovered_Bulk::FUN_108cc740(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163c1a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationWrongPinAuthRetryPage);
    puVar1[4] = (uint)&ghidra_vftable_SCManualPinAuthenticationWrongPinAuthRetryPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCManualPinAuthenticationWrongPinAuthRetryPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCManualPinAuthenticationWrongPinAuthRetryPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108cc820; body size 258 bytes.
#line 1 "ENTRY_108cc820"

undefined4 * __thiscall Recovered_Bulk::FUN_108cc820(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163c234);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x110));
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationWizard);
    puVar2[4] = (uint)&ghidra_vftable_SCManualPinAuthenticationWizard;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationWizard);
    puVar2[0x2a] = (uint)&ghidra_vftable_SCManualPinAuthenticationWizard;
    *(undefined1 *)(puVar2 + 0x43) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108cc970; body size 97 bytes.
#line 1 "ENTRY_108cc970"

void __thiscall Recovered_Bulk::FUN_108cc970(int *param_2,int param_3,int param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)((undefined4 *)*param_1);
  }
  iVar5 = (int)(param_3 - (int)puVar2);
  uVar1 = (uint)(param_1[4] - iVar5);
  uVar4 = (uint)(param_4 - param_3);
  if (uVar1 < (uint)(param_4 - param_3)) {
    uVar4 = (uint)(uVar1);
  }
  puVar2 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)((undefined4 *)*param_1);
  }
  iVar3 = (int)(param_1[4] - uVar4);
  param_1[4] = iVar3;
  memmove((void *)((int)puVar2 + iVar5),(void *)((int)puVar2 + iVar5 + uVar4),(iVar3 - iVar5) + 1);
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)((undefined4 *)*param_1);
  }
  *param_2 = (int)((int)param_1 + iVar5);
  return;
}


// Reference entry 108d63f0; body size 97 bytes.
#line 1 "ENTRY_108d63f0"

undefined1 FUN_108d63f0(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163d73d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10df9e30(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  uVar1 = (undefined1)(thunk_FUN_10df10f0(uVar2));
  thunk_FUN_10def0d0();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


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
extern int createPropertyBag(...);
extern int createSCINetstartGetScanListOp(...);
extern int endsWith(...);
extern int getAppReportingInstance(...);
extern int getSCHousehold(...);
extern int getSingleton(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int op_eq(...);
extern int op_lt(...);
extern int operator_new(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101a2e90(...);
extern int thunk_FUN_101aa9f0(...);
extern int thunk_FUN_101b5540(...);
extern int thunk_FUN_101b5de0(...);
extern int thunk_FUN_101bb8a0(...);
extern int thunk_FUN_101ccf90(...);
extern int thunk_FUN_101da390(...);
extern int thunk_FUN_101da4a0(...);
extern int thunk_FUN_101f4a30(...);
extern int thunk_FUN_1023a9c0(...);
extern int thunk_FUN_10242b80(...);
extern int thunk_FUN_102518f0(...);
extern int thunk_FUN_1025ed70(...);
extern int thunk_FUN_102a3ea0(...);
extern int thunk_FUN_102d20c0(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_10320fd0(...);
extern int thunk_FUN_10351370(...);
extern int thunk_FUN_1037f130(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105ad8f0(...);
extern int thunk_FUN_105bebd0(...);
extern int thunk_FUN_105f5920(...);
extern int thunk_FUN_105f5a00(...);
extern int thunk_FUN_105feb30(...);
extern int thunk_FUN_10605020(...);
extern int thunk_FUN_106190a0(...);
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
extern int thunk_FUN_10818140(...);
extern int thunk_FUN_10819ab0(...);
extern int thunk_FUN_108bcac0(...);
extern int thunk_FUN_108bdfd0(...);
extern int thunk_FUN_108c7440(...);
extern int thunk_FUN_108c7560(...);
extern int thunk_FUN_108df820(...);
extern int thunk_FUN_108e1570(...);
extern int thunk_FUN_108fb850(...);
extern int thunk_FUN_108fc3e0(...);
extern int thunk_FUN_109234a0(...);
extern int thunk_FUN_10929d00(...);
extern int thunk_FUN_10929e90(...);
extern int thunk_FUN_109a6790(...);
extern int thunk_FUN_109a85f0(...);
extern int thunk_FUN_109edf50(...);
extern int thunk_FUN_109eeaf0(...);
extern int thunk_FUN_109f3bb0(...);
extern int thunk_FUN_109f3bc0(...);
extern int thunk_FUN_10c5ed70(...);
extern int thunk_FUN_10c5f1d0(...);
extern int thunk_FUN_10c663b0(...);
extern int thunk_FUN_10c96490(...);
extern int thunk_FUN_10c98710(...);
extern int thunk_FUN_10c98c80(...);
extern int thunk_FUN_10cf2f30(...);
extern int thunk_FUN_10cf34e0(...);
extern int thunk_FUN_10cf3630(...);
extern int thunk_FUN_10cf41d0(...);
extern int thunk_FUN_10cf4ae0(...);
extern int thunk_FUN_10cf5140(...);
extern int thunk_FUN_10cf5250(...);
extern int thunk_FUN_10deee60(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10def450(...);
extern int thunk_FUN_10def490(...);
extern int thunk_FUN_10defb40(...);
extern int thunk_FUN_10df0ec0(...);
extern int thunk_FUN_10df10f0(...);
extern int thunk_FUN_10df6290(...);
extern int thunk_FUN_10df6f00(...);
extern int thunk_FUN_10df7cf0(...);
extern int thunk_FUN_10df7fa0(...);
extern int thunk_FUN_10df9440(...);
extern int thunk_FUN_10df9510(...);
extern int thunk_FUN_10df95e0(...);
extern int thunk_FUN_10df9830(...);
extern int thunk_FUN_10df99d0(...);
extern int thunk_FUN_10df9b50(...);
extern int thunk_FUN_10dfaa00(...);
extern int thunk_FUN_10dfadd0(...);
extern int thunk_FUN_10dfaea0(...);
extern int thunk_FUN_10dfbb10(...);
extern int thunk_FUN_10dfbbe0(...);
extern int thunk_FUN_10dfcab0(...);
extern int thunk_FUN_10dfd7b0(...);
extern int thunk_FUN_10dfe3d0(...);
extern int thunk_FUN_10e0f250(...);
extern int thunk_FUN_10eaafe0(...);
extern int thunk_FUN_10eab1c0(...);
extern int thunk_FUN_10eac590(...);
extern int thunk_FUN_10eac670(...);
extern int thunk_FUN_10eac8a0(...);
extern int thunk_FUN_10eac8c0(...);
extern int thunk_FUN_10eacce0(...);
extern int thunk_FUN_10eacda0(...);
extern int thunk_FUN_10eacdd0(...);
extern int thunk_FUN_10eace00(...);
extern int thunk_FUN_10eace90(...);
extern int thunk_FUN_10ead100(...);
extern int thunk_FUN_10ead150(...);
extern int thunk_FUN_10ead300(...);
extern int thunk_FUN_10ead930(...);
extern int thunk_FUN_10ead960(...);
extern int thunk_FUN_10eae0a0(...);
extern int thunk_FUN_10eae0f0(...);
extern int thunk_FUN_10eae120(...);
extern int thunk_FUN_10eae150(...);
extern int thunk_FUN_10eb0a60(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
extern int thunk_FUN_10eb64f0(...);
extern int thunk_FUN_10eb6cc0(...);
extern int thunk_FUN_10eb9190(...);
extern int thunk_FUN_10eb9590(...);
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
extern int thunk_FUN_10ed7060(...);
extern int thunk_FUN_10edf540(...);
extern int thunk_FUN_10ee2c00(...);
extern int thunk_FUN_10ee2db0(...);
extern int thunk_FUN_10ee3000(...);
extern int thunk_FUN_10ee41a0(...);
extern int thunk_FUN_10ee42f0(...);
extern int thunk_FUN_10ee44b0(...);
extern int thunk_FUN_10ee48c0(...);
extern int thunk_FUN_10ee7f70(...);
extern int thunk_FUN_10eeabd0(...);
extern int thunk_FUN_10eeafc0(...);
extern int thunk_FUN_10eeb270(...);
extern int thunk_FUN_10ef1700(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_11248b40(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_114577b0(...);
extern int thunk_FUN_1148a50e(...);
extern int utf8_rfind(...);
extern int utf8_substr(...);
extern int DAT_1186d2ee;
extern int DAT_118bb26c;
extern int DAT_12126b84;
extern int DAT_121a12a8;
extern int DAT_121a12b0;
extern int DAT_121a378c;
extern int DAT_121a3790;
extern int DAT_121a3798;
extern int DAT_121a379c;
extern int DAT_121a37a0;
extern int DAT_121a37a4;
extern int DAT_121a37a8;
extern int DAT_121a37ac;
extern int DAT_121a37b0;
extern int DAT_121a37b4;
extern int DAT_121a37b8;
extern int DAT_121a37bc;
extern int DAT_121a37c4;
extern int DAT_121a37c8;
extern int DAT_121a37cc;
extern int DAT_121a3820;
extern int DAT_121a3824;
extern int DAT_121a3840;
extern int DAT_121a384c;
extern int DAT_121a3870;
extern int DAT_121a3874;
extern int DAT_121a387c;
extern int DAT_121a38c8;
extern int DAT_121a38d8;
extern int DAT_121a38f4;
extern int DAT_121a394c;
extern int DAT_121a3954;
extern int DAT_121a3958;
extern int DAT_121a395c;
extern int DAT_121a3960;
extern int DAT_121a3964;
extern int DAT_121a3980;
extern int DAT_121a39e0;
extern int DAT_121a39e4;
extern int DAT_121a39e8;
extern int DAT_121a39ec;
extern int DAT_121a39f0;
extern int DAT_121a39f8;
extern int DAT_121a39fc;
extern int DAT_121a3a00;
extern int DAT_121a3a04;
extern int DAT_121a3a14;
extern int DAT_121a3a1c;
extern int Ext_RControlAIOOpCB_vftable;
extern int Ext_RControlAIOOpRefBase_vftable;
extern int Ext_RControlAIOOpRef_vftable;
extern int Ext_RUpnpDPSetAutoplayRoomUUIDAIOOp_vftable;
extern int Ext_SCConditionalElementTreeNoAppendInterface_vftable;
extern int Ext_SCConditionalElementTree_vftable;
extern int Ext_SCDisplayCustomControlActionDescriptor_vftable;
extern int Ext_SCElapsedTimeMeasurement_vftable;
extern int Ext_SCIObjImpl_vftable;
extern int Ext_SCModernTVSetupARCErrorPageType_vftable;
extern int Ext_SCModernTVSetupARCErrorPage_vftable;
extern int Ext_SCModernTVSetupCECErrorPageType_vftable;
extern int Ext_SCModernTVSetupCECErrorPage_vftable;
extern int Ext_SCModernTVSetupCheckAndContinuePageType_vftable;
extern int Ext_SCModernTVSetupCheckAndContinuePage_vftable;
extern int Ext_SCModernTVSetupEntryPageType_vftable;
extern int Ext_SCModernTVSetupEntryPage_vftable;
extern int Ext_SCModernTVSetupHdmiCheckPageType_vftable;
extern int Ext_SCModernTVSetupHdmiCheckPage_vftable;
extern int Ext_SCModernTVSetupHdmiConnectionErrorPageType_vftable;
extern int Ext_SCModernTVSetupHdmiConnectionErrorPage_vftable;
extern int Ext_SCModernTVSetupHdmiPage_vftable;
extern int Ext_SCModernTVSetupHdmiTestSuccessPageType_vftable;
extern int Ext_SCModernTVSetupHdmiTestSuccessPage_vftable;
extern int Ext_SCModernTVSetupHdmiTestingPageType_vftable;
extern int Ext_SCModernTVSetupHdmiTestingPage_vftable;
extern int Ext_SCModernTVSetupHomeIntroPageType_vftable;
extern int Ext_SCModernTVSetupHomeIntroPage_vftable;
extern int Ext_SCModernTVSetupIntroPageType_vftable;
extern int Ext_SCModernTVSetupIntroPage_vftable;
extern int Ext_SCModernTVSetupNeedOpticalAdapterPageType_vftable;
extern int Ext_SCModernTVSetupNeedOpticalAdapterPage_vftable;
extern int Ext_SCModernTVSetupOpticalAdapterPageType_vftable;
extern int Ext_SCModernTVSetupOpticalAdapterPage_vftable;
extern int Ext_SCModernTVSetupOpticalAdatperConnectErrorPage_vftable;
extern int Ext_SCModernTVSetupOpticalSetupSubwizType_vftable;
extern int Ext_SCModernTVSetupOpticalSetupSubwiz_vftable;
extern int Ext_SCModernTVSetupPurchaseAdapterPageType_vftable;
extern int Ext_SCModernTVSetupPurchaseAdapterPage_vftable;
extern int Ext_SCModernTVSetupTryAgainPageType_vftable;
extern int Ext_SCModernTVSetupTryAgainPage_vftable;
extern int Ext_SCModernTVSetupWizard_vftable;
extern int Ext_SCNamePortableSetNamePageType_vftable;
extern int Ext_SCNamePortableSetNamePage_vftable;
extern int Ext_SCNamePortableWizardType_vftable;
extern int Ext_SCNamePortableWizard_vftable;
extern int Ext_SCNetworkCredentialPropagationAuthErrorPage_vftable;
extern int Ext_SCNetworkCredentialPropagationChangeNetworkPage_vftable;
extern int Ext_SCNetworkCredentialPropagationConnectionErrorPage_vftable;
extern int Ext_SCNetworkCredentialPropagationNetworkCredentialsSubwiz_vftable;
extern int Ext_SCNetworkCredentialPropagationPlayerConnectedPage_vftable;
extern int Ext_SCNetworkCredentialPropagationRouterErrorPage_vftable;
extern int Ext_SCNetworkCredentialPropagationSecureAuthenticationSubwiz_vftable;
extern int Ext_SCNetworkCredentialPropagationSsidMismatchErrorPage_vftable;
extern int Ext_SCNetworkCredentialPropagationSystemErrorPage_vftable;
extern int Ext_SCNetworkCredentialPropagationUpdatePlayerPage_vftable;
extern int Ext_SCNetworkCredentialPropagationUpdateSystemPage_vftable;
extern int Ext_SCNetworkCredentialPropagationWizard_vftable;
extern int Ext_SCNetworkCredentialsCustomNetworkPage_vftable;
extern int Ext_SCNetworkCredentialsGetScanListPageType_vftable;
extern int Ext_SCNetworkCredentialsGetScanListPage_vftable;
extern int Ext_SCNetworkCredentialsNetworkSelectionPage_vftable;
extern int Ext_SCNetworkCredentialsPasswordEntryPage_vftable;
extern int Ext_SCNetworkCredentialsWizard_vftable;
extern int Ext_SCNetworkTroubleshootAccountRequiredSubwiz_vftable;
extern int Ext_SCNetworkTroubleshootAppVersionCheckSubwiz_vftable;
extern int Ext_SCNetworkTroubleshootAppleLocalNetworkPermsPage_vftable;
extern int Ext_SCNetworkTroubleshootAskNotSurePageType_vftable;
extern int Ext_SCNetworkTroubleshootAskNotSurePage_vftable;
extern int Ext_SCNetworkTroubleshootAskTurnOffDevicesPage_vftable;
extern int Ext_SCNetworkTroubleshootAskTurnOffRouterPage_vftable;
extern int Ext_SCNetworkTroubleshootAskWiredDevicesPage_vftable;
extern int Ext_SCNetworkTroubleshootCheckingDevicesPage_vftable;
extern int Ext_SCNetworkTroubleshootDevicePermissionsSubwiz_vftable;
extern int Ext_SCNetworkTroubleshootFailConnectPage_vftable;
extern int Ext_SCNetworkTroubleshootInformDevicesPage_vftable;
extern int Ext_SCNetworkTroubleshootIntroPageType_vftable;
extern int Ext_SCNetworkTroubleshootIntroPage_vftable;
extern int Ext_SCNetworkTroubleshootReminderContextPage_vftable;
extern int Ext_SCNetworkTroubleshootSuccessfulPageType_vftable;
extern int Ext_SCNetworkTroubleshootSuccessfulPage_vftable;
extern int Ext_SCNetworkTroubleshootSystemIdSubwizType_vftable;
extern int Ext_SCNetworkTroubleshootSystemIdSubwiz_vftable;
extern int Ext_SCNetworkTroubleshootWifiSettingDisabledPage_vftable;
extern int Ext_SCNetworkTroubleshootWiredLearnMorePage_vftable;
extern int Ext_SCNetworkTroubleshootWizard_vftable;
extern int Ext_SCNewWizPageFor_vftable;
extern int Ext_SCNewWizStateTypeFor_vftable;
extern int Ext_SCNfcAuthenticationAcrIntroPageType_vftable;
extern int Ext_SCNfcAuthenticationAcrScanPageType_vftable;
extern int Ext_SCNfcAuthenticationAcrScanSuccessPageType_vftable;
extern int Ext_SCNfcAuthenticationCancelScanPageType_vftable;
extern int Ext_SCNfcAuthenticationEducationPageType_vftable;
extern int Ext_SCNfcAuthenticationErrorAuthRetryPageType_vftable;
extern int Ext_SCNfcAuthenticationFailedScanPageType_vftable;
extern int Ext_SCNfcAuthenticationIcrIntroPageType_vftable;
extern int Ext_SCNfcAuthenticationIcrScanPageType_vftable;
extern int Ext_SCNfcAuthenticationManualPinRetryPageType_vftable;
extern int Ext_SCNfcAuthenticationScanErrorPageType_vftable;
extern int Ext_SCNfcAuthenticationWizard_vftable;
extern int Ext_SCOpImpl_vftable;
extern int Ext_SCSubwizStateFor_vftable;
extern int g_lSCObjCount;
extern undefined1 LAB_108de088[];
extern undefined1 LAB_108de6c8[];
extern undefined1 LAB_108debfc[];
extern undefined1 LAB_108ded4b[];
extern undefined1 LAB_108ded57[];
extern undefined1 LAB_108deddb[];
extern undefined1 LAB_108ee95c[];
extern undefined1 LAB_108f4f5a[];
extern undefined1 LAB_108fff2d[];
extern undefined1 LAB_1090ea0d[];
extern undefined1 LAB_1090eb8f[];
extern undefined1 LAB_1090ed7c[];
extern undefined1 LAB_1090efcc[];
extern undefined1 LAB_1092396c[];
extern undefined1 LAB_10923c64[];
extern undefined1 LAB_10923efe[];
extern undefined1 LAB_109240ef[];
extern undefined1 LAB_1092432c[];
extern undefined1 LAB_1163d785[];
extern undefined1 LAB_1163e8cd[];
extern undefined1 LAB_1163e948[];
extern undefined1 LAB_1163ea18[];
extern undefined1 LAB_1163eaa8[];
extern undefined1 LAB_1163eb78[];
extern undefined1 LAB_1163ebfd[];
extern undefined1 LAB_1163ecb8[];
extern undefined1 LAB_1163ed15[];
extern undefined1 LAB_1163ed55[];
extern undefined1 LAB_1163edd8[];
extern undefined1 LAB_1163ee3d[];
extern undefined1 LAB_1163ee85[];
extern undefined1 LAB_1163eec5[];
extern undefined1 LAB_1163ef9e[];
extern undefined1 LAB_1163effe[];
extern undefined1 LAB_1163f05e[];
extern undefined1 LAB_1163f0be[];
extern undefined1 LAB_1163f11e[];
extern undefined1 LAB_1163f17e[];
extern undefined1 LAB_1163f1de[];
extern undefined1 LAB_1163f23e[];
extern undefined1 LAB_1163f29e[];
extern undefined1 LAB_1163f2fe[];
extern undefined1 LAB_1163f35e[];
extern undefined1 LAB_1163f3be[];
extern undefined1 LAB_1163f47e[];
extern undefined1 LAB_1163f4de[];
extern undefined1 LAB_1163f53e[];
extern undefined1 LAB_1163f5a0[];
extern undefined1 LAB_1163f5fe[];
extern undefined1 LAB_1163f65e[];
extern undefined1 LAB_1163f6be[];
extern undefined1 LAB_1163f71e[];
extern undefined1 LAB_1163f77e[];
extern undefined1 LAB_1163f7de[];
extern undefined1 LAB_1163f83e[];
extern undefined1 LAB_1163f89e[];
extern undefined1 LAB_1163f8fe[];
extern undefined1 LAB_1163f95e[];
extern undefined1 LAB_1163f9be[];
extern undefined1 LAB_1163fa1e[];
extern undefined1 LAB_1163fae0[];
extern undefined1 LAB_1163fb3e[];
extern undefined1 LAB_1163fb9e[];
extern undefined1 LAB_1163fbfe[];
extern undefined1 LAB_1163fc91[];
extern undefined1 LAB_116401c0[];
extern undefined1 LAB_116401f0[];
extern undefined1 LAB_11640220[];
extern undefined1 LAB_11640507[];
extern undefined1 LAB_11640557[];
extern undefined1 LAB_116405a7[];
extern undefined1 LAB_116405f7[];
extern undefined1 LAB_11640647[];
extern undefined1 LAB_11640697[];
extern undefined1 LAB_116406e7[];
extern undefined1 LAB_11640737[];
extern undefined1 LAB_11640787[];
extern undefined1 LAB_116407d7[];
extern undefined1 LAB_11640827[];
extern undefined1 LAB_11640877[];
extern undefined1 LAB_116408c7[];
extern undefined1 LAB_11640942[];
extern undefined1 LAB_11640997[];
extern undefined1 LAB_116409e7[];
extern undefined1 LAB_11640aac[];
extern undefined1 LAB_11641ddd[];
extern undefined1 LAB_11642c75[];
extern undefined1 LAB_11642cc5[];
extern undefined1 LAB_11642cfd[];
extern undefined1 LAB_11642d3d[];
extern undefined1 LAB_11642d85[];
extern undefined1 LAB_11642dbd[];
extern undefined1 LAB_11642dfd[];
extern undefined1 LAB_116431cd[];
extern undefined1 LAB_11643295[];
extern undefined1 LAB_1164330d[];
extern undefined1 LAB_11643365[];
extern undefined1 LAB_116433fc[];
extern undefined1 LAB_11643464[];
extern undefined1 LAB_1164385e[];
extern undefined1 LAB_116438be[];
extern undefined1 LAB_1164390b[];
extern undefined1 LAB_1164398d[];
extern undefined1 LAB_116439d0[];
extern undefined1 LAB_11643a00[];
extern undefined1 LAB_11643da7[];
extern undefined1 LAB_11643e26[];
extern undefined1 LAB_11644155[];
extern undefined1 LAB_1164436d[];
extern undefined1 LAB_116443bd[];
extern undefined1 LAB_11644405[];
extern undefined1 LAB_1164453e[];
extern undefined1 LAB_116446dd[];
extern undefined1 LAB_1164473e[];
extern undefined1 LAB_11644867[];
extern undefined1 LAB_11644a40[];
extern undefined1 LAB_11644a70[];
extern undefined1 LAB_11644aa0[];
extern undefined1 LAB_11644ad0[];
extern undefined1 LAB_11644b00[];
extern undefined1 LAB_11644b30[];
extern undefined1 LAB_11644e15[];
extern undefined1 LAB_11644e57[];
extern undefined1 LAB_11644eaf[];
extern undefined1 LAB_11644ef7[];
extern undefined1 LAB_11644f47[];
extern undefined1 LAB_11644fe2[];
extern undefined1 LAB_11645485[];
extern undefined1 LAB_11645df5[];
extern undefined1 LAB_116460d5[];
extern undefined1 LAB_1164612d[];
extern undefined1 LAB_116465b0[];
extern undefined1 LAB_11646610[];
extern undefined1 LAB_11646790[];
extern undefined1 LAB_11646910[];
extern undefined1 LAB_11646b57[];
extern undefined1 LAB_11646f00[];
extern undefined1 LAB_11646f30[];
extern undefined1 LAB_11646f60[];
extern undefined1 LAB_11646f90[];
extern undefined1 LAB_11647295[];
extern undefined1 LAB_11647437[];
extern undefined1 LAB_11647487[];
extern undefined1 LAB_116474d7[];
extern undefined1 LAB_11647552[];
extern undefined1 LAB_116475a7[];
extern undefined1 LAB_116475f7[];
extern undefined1 LAB_11647672[];
extern undefined1 LAB_116476c7[];
extern undefined1 LAB_11647717[];
extern undefined1 LAB_11647767[];
extern undefined1 LAB_116477b7[];
extern undefined1 LAB_11647852[];
extern undefined1 LAB_116480c5[];
extern undefined1 LAB_116481bd[];
extern undefined1 LAB_11648205[];
extern undefined1 LAB_1164824d[];
extern undefined1 LAB_116482a5[];
extern undefined1 LAB_11648e9d[];
extern undefined1 LAB_11648fd5[];
extern undefined1 LAB_1164901d[];
extern undefined1 LAB_116490ad[];
extern undefined1 LAB_1164911d[];
extern undefined1 LAB_116495ae[];
extern undefined1 LAB_116498ae[];
extern undefined1 LAB_1164996e[];
extern undefined1 LAB_116499ce[];
extern undefined1 LAB_11649af0[];
extern undefined1 LAB_11649b50[];
extern undefined1 LAB_11649bb0[];
extern undefined1 LAB_11649c10[];
extern undefined1 LAB_11649c70[];
extern undefined1 LAB_11649d30[];
extern undefined1 LAB_11649e4e[];
extern undefined1 LAB_1164a030[];
extern undefined1 LAB_1164a1ae[];
extern undefined1 LAB_1164a26e[];
extern undefined1 LAB_1164a2d0[];
extern undefined1 LAB_1164a32e[];
extern undefined1 LAB_1164a457[];
extern undefined1 LAB_1164a9d0[];
extern undefined1 LAB_1164aa00[];
extern undefined1 LAB_1164aa30[];
extern undefined1 LAB_1164aa60[];
extern undefined1 LAB_1164ade2[];
extern undefined1 LAB_1164ae62[];
extern undefined1 LAB_1164aeb7[];
extern undefined1 LAB_1164af07[];
extern undefined1 LAB_1164af57[];
extern undefined1 LAB_1164afa7[];
extern undefined1 LAB_1164aff7[];
extern undefined1 LAB_1164b047[];
extern undefined1 LAB_1164b0c2[];
extern undefined1 LAB_1164b117[];
extern undefined1 LAB_1164b167[];
extern undefined1 LAB_1164b1b7[];
extern undefined1 LAB_1164b207[];
extern undefined1 LAB_1164b257[];
extern undefined1 LAB_1164b2d2[];
extern undefined1 LAB_1164b327[];
extern undefined1 LAB_1164b377[];
extern undefined1 LAB_1164b411[];
extern undefined1 LAB_1164b592[];
extern undefined1 LAB_1164c09d[];
extern undefined1 LAB_1164c105[];
extern undefined1 LAB_1164c165[];
extern undefined1 LAB_1164c1b5[];
extern undefined1 LAB_1164c205[];
extern undefined1 LAB_1164cfad[];
extern undefined1 LAB_1164cfed[];
extern undefined1 LAB_1164d0ad[];
extern undefined1 LAB_1164d10d[];
extern undefined1 LAB_1164d155[];
extern undefined1 LAB_1164d19d[];
extern undefined1 LAB_1164d1dd[];
extern undefined1 LAB_1164d372[];
extern undefined1 LAB_1164d3cd[];
extern undefined1 LAB_1164d445[];
extern undefined1 LAB_1164d4ae[];
extern undefined1 LAB_1164d56e[];
extern undefined1 LAB_1164d5ce[];
extern undefined1 LAB_1164d68e[];
extern undefined1 LAB_1164d7ae[];
extern undefined1 LAB_1164d80e[];
extern undefined1 LAB_1164d86e[];
extern undefined1 LAB_1164d8ce[];
extern undefined1 LAB_1164d92e[];
extern undefined1 LAB_1164d9ee[];
extern undefined1 LAB_1164da4e[];
extern undefined1 LAB_1164daae[];
extern undefined1 LAB_1164db6e[];
extern undefined1 LAB_1164dbce[];
extern undefined1 LAB_1164dc8e[];
extern undefined1 LAB_1164ddae[];
extern undefined1 LAB_1164de0e[];
extern undefined1 LAB_1164de6e[];
extern undefined1 LAB_1164dece[];
extern undefined1 LAB_1164df2e[];
extern undefined1 LAB_1164dfee[];
extern undefined1 LAB_1164e04e[];
extern undefined1 LAB_1164e0a9[];
extern undefined1 LAB_1164e5d0[];
extern int *stack0x00000004;
extern int *stack0xffffffc4;
extern int *stack0xffffffcc;
extern int *stack0xffffffd0;
extern int *stack0xfffffffc;
extern void *ExceptionList;
typedef void *HDMI;
typedef void *WARNING;
struct DeviceProperties { char _pad; DeviceProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct HDMIGetOp { char _pad; HDMIGetOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Page { char _pad; Page(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RoomUUID { char _pad; RoomUUID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINetstartScanListEntry { char _pad; SCINetstartScanListEntry(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIWifiDelegate { char _pad; SCIWifiDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCModernTVSetupARCErrorPage { char _pad; SCModernTVSetupARCErrorPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCModernTVSetupCECErrorPage { char _pad; SCModernTVSetupCECErrorPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCModernTVSetupCheckAndContinuePage { char _pad; SCModernTVSetupCheckAndContinuePage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCModernTVSetupEntryPage { char _pad; SCModernTVSetupEntryPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCModernTVSetupHdmiCheckPage { char _pad; SCModernTVSetupHdmiCheckPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCModernTVSetupHdmiConnectionErrorPage { char _pad; SCModernTVSetupHdmiConnectionErrorPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCModernTVSetupHdmiTestSuccessPage { char _pad; SCModernTVSetupHdmiTestSuccessPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCModernTVSetupHdmiTestingPage { char _pad; SCModernTVSetupHdmiTestingPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCModernTVSetupHomeIntroPage { char _pad; SCModernTVSetupHomeIntroPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCModernTVSetupIntroPage { char _pad; SCModernTVSetupIntroPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCModernTVSetupNeedOpticalAdapterPage { char _pad; SCModernTVSetupNeedOpticalAdapterPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCModernTVSetupOpticalAdapterPage { char _pad; SCModernTVSetupOpticalAdapterPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCModernTVSetupOpticalSetupSubwiz { char _pad; SCModernTVSetupOpticalSetupSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCModernTVSetupPurchaseAdapterPage { char _pad; SCModernTVSetupPurchaseAdapterPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCModernTVSetupTryAgainPage { char _pad; SCModernTVSetupTryAgainPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNamePortableSetNamePage { char _pad; SCNamePortableSetNamePage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNamePortableWizard { char _pad; SCNamePortableWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNetworkCredentialsGetScanListPage { char _pad; SCNetworkCredentialsGetScanListPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNetworkTroubleshootAskNotSurePage { char _pad; SCNetworkTroubleshootAskNotSurePage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNetworkTroubleshootIntroPage { char _pad; SCNetworkTroubleshootIntroPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNetworkTroubleshootSuccessfulPage { char _pad; SCNetworkTroubleshootSuccessfulPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNetworkTroubleshootSystemIdSubwiz { char _pad; SCNetworkTroubleshootSystemIdSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNfcAuthenticationAcrIntroPage { char _pad; SCNfcAuthenticationAcrIntroPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNfcAuthenticationAcrScanPage { char _pad; SCNfcAuthenticationAcrScanPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNfcAuthenticationAcrScanSuccessPage { char _pad; SCNfcAuthenticationAcrScanSuccessPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNfcAuthenticationCancelScanPage { char _pad; SCNfcAuthenticationCancelScanPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNfcAuthenticationEducationPage { char _pad; SCNfcAuthenticationEducationPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNfcAuthenticationErrorAuthRetryPage { char _pad; SCNfcAuthenticationErrorAuthRetryPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNfcAuthenticationFailedScanPage { char _pad; SCNfcAuthenticationFailedScanPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNfcAuthenticationIcrIntroPage { char _pad; SCNfcAuthenticationIcrIntroPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNfcAuthenticationIcrScanPage { char _pad; SCNfcAuthenticationIcrScanPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNfcAuthenticationManualPinRetryPage { char _pad; SCNfcAuthenticationManualPinRetryPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNfcAuthenticationScanErrorPage { char _pad; SCNfcAuthenticationScanErrorPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetAutoplayRoomUUID { char _pad; SetAutoplayRoomUUID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Source { char _pad; Source(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Status { char _pad; Status(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subwiz { char _pad; Subwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Stub_SCLibrary { Stub_SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int getSCHousehold(...); int getSingleton(...); };
struct Stub_SCStr { Stub_SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int SCStr(...); int endsWith(...); int int_allocRep(...); int int_release(...); int op_eq(...); int op_lt(...); int utf8_rfind(...); int utf8_substr(...); };
struct Recovered_Bulk { char _pad; void __thiscall FUN_108de8e0(int *param_2); void __thiscall FUN_108df140(undefined4 param_2); undefined4 * __thiscall FUN_108dfd80(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108dfe70(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108dff60(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e0050(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e0140(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e0230(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e0320(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e0410(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e0500(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e05f0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e06e0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e07d0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e09b0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e0aa0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e0b90(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e0c80(undefined4 param_2); undefined4 * __thiscall FUN_108e0de0(undefined4 param_2); undefined4 * __thiscall FUN_108e0f30(undefined4 param_2); undefined4 * __thiscall FUN_108e1080(undefined4 param_2); undefined4 * __thiscall FUN_108e11d0(undefined4 param_2); undefined4 * __thiscall FUN_108e1320(undefined4 param_2); undefined4 * __thiscall FUN_108e1470(undefined4 param_2); undefined4 * __thiscall FUN_108e1570(undefined4 param_2); undefined4 * __thiscall FUN_108e1650(undefined4 param_2); undefined4 * __thiscall FUN_108e17a0(undefined4 param_2); undefined4 * __thiscall FUN_108e18f0(undefined4 param_2); undefined4 * __thiscall FUN_108e1a40(undefined4 param_2); undefined4 * __thiscall FUN_108e1b90(undefined4 param_2); undefined4 * __thiscall FUN_108e1ce0(undefined4 param_2); undefined4 * __thiscall FUN_108e1f30(undefined4 param_2); undefined4 * __thiscall FUN_108e2040(undefined4 param_2); undefined4 * __thiscall FUN_108e2190(undefined4 param_2); undefined4 * __thiscall FUN_108e22e0(undefined4 param_2); undefined4 * __thiscall FUN_108e23e0(undefined4 param_2); undefined4 * __thiscall FUN_108e4020(byte param_2); undefined4 * __thiscall FUN_108e4380(byte param_2); undefined4 * __thiscall FUN_108e43e0(byte param_2); undefined4 * __thiscall FUN_108e4480(byte param_2); undefined4 * __thiscall FUN_108e4520(byte param_2); undefined4 * __thiscall FUN_108e45c0(byte param_2); undefined4 * __thiscall FUN_108e46d0(byte param_2); undefined4 * __thiscall FUN_108e47a0(byte param_2); undefined4 * __thiscall FUN_108e4990(byte param_2); undefined4 * __thiscall FUN_108e4aa0(byte param_2); undefined4 * __thiscall FUN_108e4b40(byte param_2); undefined4 * __thiscall FUN_108e4be0(byte param_2); undefined4 * __thiscall FUN_108e4c80(byte param_2); int __thiscall FUN_108e4d20(byte param_2); undefined4 * __thiscall FUN_108e5030(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e5110(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e51f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e52d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e53b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e5490(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e5570(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e5650(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e5730(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e5810(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e58f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e59d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e5ab0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e5b90(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e5cf0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e5dd0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108e5eb0(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 __thiscall FUN_108ee7b0(undefined4 param_2); void __thiscall FUN_108f4dd0(int *param_2); void __thiscall FUN_108f70c0(SCStr *param_2); undefined4 * __thiscall FUN_108f88b0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108f89f0(undefined4 param_2); undefined4 * __thiscall FUN_108f8af0(undefined4 param_2); undefined4 * __thiscall FUN_108f8f70(byte param_2); undefined4 * __thiscall FUN_108f9000(byte param_2); int __thiscall FUN_108f90a0(byte param_2); undefined4 * __thiscall FUN_108f9660(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108f9740(undefined4 param_2,undefined4 param_3,undefined4 param_4); int * __thiscall FUN_108fb1e0(int *param_2); int * __thiscall FUN_108fb390(int *param_2); int * __thiscall FUN_108fb4c0(undefined4 *param_2); undefined4 * __thiscall FUN_108fb9a0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_108fbf90(undefined4 param_2); undefined4 * __thiscall FUN_108fc040(undefined4 param_2); undefined4 * __thiscall FUN_108fc3e0(undefined4 param_2); undefined4 * __thiscall FUN_108fd0c0(byte param_2); undefined4 * __thiscall FUN_108fd1e0(byte param_2); undefined4 * __thiscall FUN_108fd280(byte param_2); undefined4 * __thiscall FUN_108fd390(byte param_2); undefined4 * __thiscall FUN_108fd430(byte param_2); int __thiscall FUN_108fd4d0(byte param_2); undefined4 * __thiscall FUN_108fd9b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108fda90(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108fdb90(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108fdc70(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_108fdd50(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 __thiscall FUN_108ffda0(undefined4 param_2); undefined4 * __thiscall FUN_10906030(undefined4 param_2); undefined4 * __thiscall FUN_10906140(undefined4 param_2); undefined4 * __thiscall FUN_10906650(undefined4 param_2); undefined4 * __thiscall FUN_10906b00(undefined4 param_2); undefined4 * __thiscall FUN_10907260(undefined4 param_2); undefined4 * __thiscall FUN_10908760(byte param_2); undefined4 * __thiscall FUN_109089d0(byte param_2); undefined4 * __thiscall FUN_10908a30(byte param_2); undefined4 * __thiscall FUN_10908a90(byte param_2); undefined4 * __thiscall FUN_10908b30(byte param_2); undefined4 * __thiscall FUN_10908c30(byte param_2); undefined4 * __thiscall FUN_10908cd0(byte param_2); undefined4 * __thiscall FUN_10908d70(byte param_2); undefined4 * __thiscall FUN_10908e10(byte param_2); undefined4 * __thiscall FUN_10908eb0(byte param_2); undefined4 * __thiscall FUN_10908f50(byte param_2); undefined4 * __thiscall FUN_10908ff0(byte param_2); undefined4 * __thiscall FUN_10909090(byte param_2); undefined4 * __thiscall FUN_10909130(byte param_2); int __thiscall FUN_109091d0(byte param_2); undefined4 * __thiscall FUN_10909d50(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10909e30(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10909f20(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1090a000(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1090a160(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1090a240(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1090a320(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1090a480(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1090a560(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1090a640(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1090a730(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1090a810(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10916fa0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_10917720(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_10917900(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_109179f0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_10917cc0(undefined4 param_2); undefined4 * __thiscall FUN_10917dd0(undefined4 param_2); undefined4 * __thiscall FUN_10917ee0(undefined4 param_2); undefined4 * __thiscall FUN_10917ff0(undefined4 param_2); undefined4 * __thiscall FUN_10918100(undefined4 *param_2); undefined4 * __thiscall FUN_109181c0(undefined4 param_2); undefined4 * __thiscall FUN_109183d0(undefined4 param_2); undefined4 * __thiscall FUN_10918780(undefined4 param_2); undefined4 * __thiscall FUN_10918dc0(undefined4 param_2); undefined4 * __thiscall FUN_10919300(undefined4 param_2); undefined4 * __thiscall FUN_109195a0(undefined4 param_2); undefined4 * __thiscall FUN_109196a0(undefined4 param_2); undefined4 * __thiscall FUN_109197b0(undefined4 param_2); undefined4 * __thiscall FUN_10919b50(undefined4 param_2); undefined4 * __thiscall FUN_1091b950(byte param_2); undefined4 * __thiscall FUN_1091bce0(byte param_2); undefined4 * __thiscall FUN_1091bd40(byte param_2); undefined4 * __thiscall FUN_1091bda0(byte param_2); undefined4 * __thiscall FUN_1091be00(byte param_2); undefined4 * __thiscall FUN_1091be60(byte param_2); undefined4 * __thiscall FUN_1091bf00(byte param_2); undefined4 * __thiscall FUN_1091bfa0(byte param_2); undefined4 * __thiscall FUN_1091c040(byte param_2); undefined4 * __thiscall FUN_1091c0e0(byte param_2); undefined4 * __thiscall FUN_1091c180(byte param_2); undefined4 * __thiscall FUN_1091c220(byte param_2); undefined4 * __thiscall FUN_1091c2c0(byte param_2); undefined4 * __thiscall FUN_1091c360(byte param_2); undefined4 * __thiscall FUN_1091c400(byte param_2); undefined4 * __thiscall FUN_1091c4a0(byte param_2); undefined4 * __thiscall FUN_1091c540(byte param_2); undefined4 * __thiscall FUN_1091c650(byte param_2); undefined4 * __thiscall FUN_1091c6f0(byte param_2); undefined4 * __thiscall FUN_1091c790(byte param_2); undefined4 * __thiscall FUN_1091c830(byte param_2); undefined4 * __thiscall FUN_1091c8d0(byte param_2); int __thiscall FUN_1091c970(byte param_2); undefined4 * __thiscall FUN_1091ceb0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1091d010(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1091d170(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1091d250(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1091d330(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1091d410(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1091d4f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1091d5d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1091d6b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1091d810(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1091d8f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1091d9e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1091daf0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1091dbd0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1091dcb0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1091de10(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1091def0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1091e740(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 __thiscall FUN_10923830(undefined4 param_2); void __thiscall FUN_1092a620(int *param_2); undefined4 * __thiscall FUN_1092b870(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1092ba50(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1092bb40(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1092bd20(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1092bff0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1092c0e0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1092c1d0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1092c2c0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1092c3b0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1092c590(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1092c680(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1092c7c0(undefined4 param_2); undefined4 * __thiscall FUN_1092ca60(undefined4 param_2); undefined4 * __thiscall FUN_1092cbb0(undefined4 param_2); undefined4 * __thiscall FUN_1092ce50(undefined4 param_2); undefined4 * __thiscall FUN_1092d240(undefined4 param_2); undefined4 * __thiscall FUN_1092d390(undefined4 param_2); undefined4 * __thiscall FUN_1092d4e0(undefined4 param_2); undefined4 * __thiscall FUN_1092d630(undefined4 param_2); undefined4 * __thiscall FUN_1092d780(undefined4 param_2); undefined4 * __thiscall FUN_1092da20(undefined4 param_2); undefined4 * __thiscall FUN_1092db70(undefined4 param_2); undefined4 * __thiscall FUN_1092dc70(undefined4 param_2); undefined4 * __thiscall FUN_1092f770(byte param_2); undefined4 * __thiscall FUN_1092fad0(byte param_2); undefined4 * __thiscall FUN_1092fb70(byte param_2); undefined4 * __thiscall FUN_1092fc10(byte param_2); undefined4 * __thiscall FUN_1092fcb0(byte param_2); };
using namespace std;
undefined4 FUN_108d6470(void);
void FUN_108ddaa0(void);
void FUN_108ddc60(void);
void FUN_108ddef0(void);
void FUN_108de2a0(void);
void FUN_108de530(void);
void FUN_108deb90(undefined4 param_1);
void FUN_108def40(void);
void FUN_108df040(void);
void FUN_108df470(void);
void FUN_108df610(void);
void FUN_108df710(void);
void __fastcall FUN_108e3730(undefined4 *param_1);
void __fastcall FUN_108e3a80(int param_1);
void FUN_108f5040(void);
void FUN_108f5120(void);
void FUN_108f51d0(void);
void FUN_108f5280(void);
void FUN_108f5360(void);
void FUN_108f5400(void);
void FUN_108f6710(void);
void FUN_108f6940(void);
void FUN_108f6a10(void);
void FUN_108f6c20(void);
void __fastcall FUN_108f6d20(int param_1);
undefined4 * __fastcall FUN_108f8bc0(undefined4 *param_1);
void __fastcall FUN_108f8e10(int param_1);
undefined1 FUN_108fab30(void);
void __fastcall FUN_108fcb40(undefined4 *param_1);
void __fastcall FUN_108fcbb0(int *param_1);
void __fastcall FUN_108fcc90(undefined4 *param_1);
void __fastcall FUN_108fce00(int param_1);
void * FUN_108fd860(uint param_1);
undefined4 __stdcall FUN_108fd8d0(undefined4 param_1);
void FUN_109040e0(void);
void FUN_109050c0(void);
void FUN_10905320(void);
void __fastcall FUN_10907f60(undefined4 *param_1);
void __fastcall FUN_109082f0(int param_1);
bool FUN_10909430(void);
undefined4 __stdcall FUN_1090e340(undefined4 param_1);
SCStr * __stdcall FUN_1090e8e0(SCStr *param_1);
undefined4 __stdcall FUN_1090ea80(undefined4 param_1);
undefined4 __stdcall FUN_1090ec30(undefined4 param_1);
undefined4 __stdcall FUN_1090ee40(undefined4 param_1);
undefined4 FUN_1090f0c0(undefined4 param_1);
void FUN_10914450(void);
void FUN_10914540(void);
void FUN_10914630(void);
void FUN_10914b80(undefined4 param_1);
void FUN_10914eb0(void);
void FUN_10914f60(undefined4 param_1);
void FUN_10915330(int *param_1);
void __fastcall FUN_1091b110(undefined4 *param_1);
void __fastcall FUN_1091b370(int param_1);
undefined4 * __stdcall FUN_1091dfd0(undefined4 *param_1);
undefined4 __stdcall FUN_10923a30(undefined4 param_1);
undefined4 __stdcall FUN_10923d70(undefined4 param_1);
undefined4 __stdcall FUN_10923fe0(undefined4 param_1);
undefined4 __stdcall FUN_10924190(undefined4 param_1);
int __stdcall FUN_10929d00(char param_1);
undefined4 FUN_10929e90(void);
void FUN_1092a190(void);
void FUN_1092a200(void);
void FUN_1092a2a0(void);
void FUN_1092a3c0(void);
void __fastcall FUN_1092a760(int param_1);
void FUN_1092a8d0(void);
void __fastcall FUN_1092a9c0(int param_1);
void __stdcall FUN_1092b260(int *param_1);
void FUN_1092b410(void);
void FUN_1092b500(void);
void __fastcall FUN_1092f2a0(int param_1);
// Reference entry 108d6470; body size 184 bytes.
#line 1 "ENTRY_108d6470"

undefined4 FUN_108d6470(void)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_24 [8];
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163d785);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(&local_14));
  piVar1 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(0);
  *piVar3 = (int)(0);
  local_1c = (int *)(piVar1);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  local_18 = (int *)(piVar3);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 == (int *)0x0) {
    uVar4 = (undefined4)(0);
  }
  else {
    thunk_FUN_10c5f1d0(piVar1);
    puVar5 = (undefined1 *)(local_24);
    thunk_FUN_105bebd0(puVar5);
    uVar4 = (undefined4)(thunk_FUN_10e0f250(puVar5));
  }
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar4);
}


// Reference entry 108ddaa0; body size 353 bytes.
#line 1 "ENTRY_108ddaa0"

void FUN_108ddaa0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163e8cd);
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
  ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("customerCare");
  local_8 = (undefined4)(1);
  uVar2 = (undefined4)(thunk_FUN_10df6f00(&stack0x00000004));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("customerCare");
    local_8 = (undefined4)(4);
    thunk_FUN_10eba7e0(&stack0x00000004);
    local_8 = (undefined4)(5);
    ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_release();
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10dfcab0());
  local_8 = (undefined4)(6);
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


// Reference entry 108ddc60; body size 515 bytes.
#line 1 "ENTRY_108ddc60"

void FUN_108ddc60(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_60 [28];
  undefined1 local_44 [52];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163e948);
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
  ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("tryAgain");
  local_8 = (undefined4)(1);
  uVar2 = (undefined4)(thunk_FUN_10df6f00(&stack0x00000004));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    thunk_FUN_10eb41b0();
    uVar6 = (undefined4)(0x2d);
    uVar5 = (undefined4)(0x14);
    uVar4 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_10eacdd0(0,0x14,0x2d));
    thunk_FUN_10ee48c0(uVar2);
    thunk_FUN_10ee2db0(uVar2,uVar4,uVar5,uVar6);
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10dfaa00());
  local_8 = (undefined4)(4);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(2);
    thunk_FUN_10ee48c0(2);
    thunk_FUN_10ee3000(uVar2);
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10df9440());
  local_8 = (undefined4)(5);
  thunk_FUN_10deee60(uVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  thunk_FUN_10dfcab0();
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  uVar2 = (undefined4)(thunk_FUN_10defb40(local_60,local_44));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  cVar1 = (char)(thunk_FUN_10def490(uVar2));
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar3 + 0x10c) = 1;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108ddef0; body size 754 bytes.
#line 1 "ENTRY_108ddef0"

void FUN_108ddef0(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char cStack00000007;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163ea18);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  uVar3 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar2 != '\0') {
    thunk_FUN_10ebbab0(0x4048);
    thunk_FUN_10ee48c0();
    uVar3 = (undefined4)(thunk_FUN_10ee42f0());
    thunk_FUN_10ebb8e0("buttonPressMaxWait",uVar3);
    ExceptionList = (void *)(local_10);
    return;
  }
  ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("help");
  local_8 = (undefined4)(1);
  uVar3 = (undefined4)(thunk_FUN_10df6f00(&stack0x00000004));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar2 != '\0') {
    ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("authPlusAndSecureAuthentication-buttonPress");
    local_8 = (undefined4)(4);
    thunk_FUN_10eba7e0(&stack0x00000004);
    local_8 = (undefined4)(5);
    ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_release();
    ExceptionList = (void *)(local_10);
    return;
  }
  ((Stub_SCStr *)(local_18))->int_allocRep("buttonPressMaxWait");
  local_8 = (undefined4)(6);
  local_14 = (undefined4)(1);
  uVar3 = (undefined4)(thunk_FUN_10dfd7b0(local_18));
  bVar1 = (bool)(false);
  local_8 = (undefined4)(7);
  local_14 = (undefined4)(3);
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  if (cVar2 == '\0') {
    uVar3 = (undefined4)(thunk_FUN_10df9830());
    bVar1 = (bool)(true);
    local_8 = (undefined4)(8);
    local_14 = (undefined4)(7);
    cVar2 = (char)(thunk_FUN_10def450(uVar3));
    cStack00000007 = (char)('\0');
    if (cVar2 == '\0') goto LAB_108de088;
  }
  cStack00000007 = (char)('\x01');
LAB_108de088:
  if (bVar1) {
    thunk_FUN_10def0d0();
  }
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(9);
  ((Stub_SCStr *)(local_18))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cStack00000007 != '\0') {
    thunk_FUN_10ee48c0();
    thunk_FUN_10eeb270();
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar3 = (undefined4)(thunk_FUN_10dfaa00());
  local_8 = (undefined4)(10);
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar2 != '\0') {
    uVar3 = (undefined4)(0);
    thunk_FUN_10ee48c0(0);
    thunk_FUN_10ee41a0(uVar3);
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar3 = (undefined4)(thunk_FUN_10dfcab0());
  local_8 = (undefined4)(0xb);
  cVar2 = (char)(thunk_FUN_10def490(uVar3));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  if (cVar2 == '\0') {
    uVar3 = (undefined4)(thunk_FUN_10df6290());
    local_8 = (undefined4)(0xc);
    cVar2 = (char)(thunk_FUN_10def450(uVar3));
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_10def0d0();
    if (cVar2 != '\0') {
      uVar3 = (undefined4)(1);
      thunk_FUN_10ee48c0(1);
      thunk_FUN_10ee3000(uVar3);
    }
    ExceptionList = (void *)(local_10);
    return;
  }
  iVar4 = (int)(thunk_FUN_10eb41b0());
  *(undefined1 *)(iVar4 + 0x10c) = 1;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108de2a0; body size 515 bytes.
#line 1 "ENTRY_108de2a0"

void FUN_108de2a0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_60 [28];
  undefined1 local_44 [52];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163eaa8);
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
  ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("tryAgain");
  local_8 = (undefined4)(1);
  uVar2 = (undefined4)(thunk_FUN_10df6f00(&stack0x00000004));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    thunk_FUN_10eb41b0();
    uVar6 = (undefined4)(0x2d);
    uVar5 = (undefined4)(0x14);
    uVar4 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_10eacdd0(0,0x14,0x2d));
    thunk_FUN_10ee48c0(uVar2);
    thunk_FUN_10ee2db0(uVar2,uVar4,uVar5,uVar6);
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10dfaa00());
  local_8 = (undefined4)(4);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(2);
    thunk_FUN_10ee48c0(2);
    thunk_FUN_10ee3000(uVar2);
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10df9440());
  local_8 = (undefined4)(5);
  thunk_FUN_10deee60(uVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  thunk_FUN_10dfcab0();
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  uVar2 = (undefined4)(thunk_FUN_10defb40(local_60,local_44));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  cVar1 = (char)(thunk_FUN_10def490(uVar2));
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar3 + 0x10c) = 1;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108de530; body size 754 bytes.
#line 1 "ENTRY_108de530"

void FUN_108de530(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char cStack00000007;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163eb78);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  uVar3 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar2 != '\0') {
    thunk_FUN_10ebbab0(0x4048);
    thunk_FUN_10ee48c0();
    uVar3 = (undefined4)(thunk_FUN_10ee42f0());
    thunk_FUN_10ebb8e0("buttonPressMaxWait",uVar3);
    ExceptionList = (void *)(local_10);
    return;
  }
  ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("help");
  local_8 = (undefined4)(1);
  uVar3 = (undefined4)(thunk_FUN_10df6f00(&stack0x00000004));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar2 != '\0') {
    ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("authPlusAndSecureAuthentication-buttonPress");
    local_8 = (undefined4)(4);
    thunk_FUN_10eba7e0(&stack0x00000004);
    local_8 = (undefined4)(5);
    ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_release();
    ExceptionList = (void *)(local_10);
    return;
  }
  ((Stub_SCStr *)(local_18))->int_allocRep("buttonPressMaxWait");
  local_8 = (undefined4)(6);
  local_14 = (undefined4)(1);
  uVar3 = (undefined4)(thunk_FUN_10dfd7b0(local_18));
  bVar1 = (bool)(false);
  local_8 = (undefined4)(7);
  local_14 = (undefined4)(3);
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  if (cVar2 == '\0') {
    uVar3 = (undefined4)(thunk_FUN_10df9830());
    bVar1 = (bool)(true);
    local_8 = (undefined4)(8);
    local_14 = (undefined4)(7);
    cVar2 = (char)(thunk_FUN_10def450(uVar3));
    cStack00000007 = (char)('\0');
    if (cVar2 == '\0') goto LAB_108de6c8;
  }
  cStack00000007 = (char)('\x01');
LAB_108de6c8:
  if (bVar1) {
    thunk_FUN_10def0d0();
  }
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(9);
  ((Stub_SCStr *)(local_18))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cStack00000007 != '\0') {
    thunk_FUN_10ee48c0();
    thunk_FUN_10eeb270();
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar3 = (undefined4)(thunk_FUN_10dfaa00());
  local_8 = (undefined4)(10);
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar2 != '\0') {
    uVar3 = (undefined4)(0);
    thunk_FUN_10ee48c0(0);
    thunk_FUN_10ee41a0(uVar3);
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar3 = (undefined4)(thunk_FUN_10dfcab0());
  local_8 = (undefined4)(0xb);
  cVar2 = (char)(thunk_FUN_10def490(uVar3));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  if (cVar2 == '\0') {
    uVar3 = (undefined4)(thunk_FUN_10df6290());
    local_8 = (undefined4)(0xc);
    cVar2 = (char)(thunk_FUN_10def450(uVar3));
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_10def0d0();
    if (cVar2 != '\0') {
      uVar3 = (undefined4)(1);
      thunk_FUN_10ee48c0(1);
      thunk_FUN_10ee3000(uVar3);
    }
    ExceptionList = (void *)(local_10);
    return;
  }
  iVar4 = (int)(thunk_FUN_10eb41b0());
  *(undefined1 *)(iVar4 + 0x10c) = 1;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108de8e0; body size 546 bytes.
#line 1 "ENTRY_108de8e0"

void __thiscall Recovered_Bulk::FUN_108de8e0(int *param_2)
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
  puStack_c = (undefined1 *)(LAB_1163ebfd);
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
    uVar2 = (undefined4)(thunk_FUN_10dfadd0());
    local_8 = (undefined4)(7);
    cVar1 = (char)(thunk_FUN_10def450(uVar2));
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_10def0d0();
    if (cVar1 != '\0') {
      ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep("opResult");
      local_8 = (undefined4)(8);
      uVar2 = (undefined4)(thunk_FUN_10df0ec0(&param_2));
      *(undefined4 *)(param_1 + 0xe0) = uVar2;
      local_8 = (undefined4)(9);
      ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
      ExceptionList = (void *)(local_10);
      return;
    }
    uVar2 = (undefined4)(thunk_FUN_10dfcab0());
    local_8 = (undefined4)(10);
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


// Reference entry 108deb90; body size 753 bytes.
#line 1 "ENTRY_108deb90"

void FUN_108deb90(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163ecb8);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  uVar3 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar2 != '\0') {
    thunk_FUN_10ebbab0(0x4048);
LAB_108debfc:
    thunk_FUN_10eb41b0();
    uVar7 = (undefined4)(0x2d);
    uVar6 = (undefined4)(0x14);
    uVar5 = (undefined4)(8);
    uVar3 = (undefined4)(thunk_FUN_10eacdd0(8,0x14,0x2d));
    thunk_FUN_10ee48c0(uVar3);
    thunk_FUN_10ee2db0(uVar3,uVar5,uVar6,uVar7);
    thunk_FUN_10ebb8e0("identifyProductWait",8000);
    ExceptionList = (void *)(local_10);
    return;
  }
  ((Stub_SCStr *)((SCStr *)&param_1))->int_allocRep("yes");
  local_8 = (undefined4)(1);
  uVar3 = (undefined4)(thunk_FUN_10df6f00(&param_1));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)&param_1))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar2 != '\0') {
    cVar2 = (char)(thunk_FUN_10eba5f0("identifyProductWait"));
    if (cVar2 == '\0') {
      ExceptionList = (void *)(local_10);
      return;
    }
    thunk_FUN_10ebba70("identifyProductWait");
    uVar3 = (undefined4)(1);
LAB_108ded4b:
    thunk_FUN_10ee48c0(uVar3);
    thunk_FUN_10ee3000(uVar3);
    goto LAB_108ded57;
  }
  ((Stub_SCStr *)((SCStr *)&param_1))->int_allocRep("tryAgain");
  local_8 = (undefined4)(4);
  uVar3 = (undefined4)(thunk_FUN_10df6f00(&param_1));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(6);
  ((Stub_SCStr *)((SCStr *)&param_1))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar2 != '\0') goto LAB_108debfc;
  uVar3 = (undefined4)(thunk_FUN_10dfaa00());
  local_8 = (undefined4)(7);
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar2 != '\0') {
    thunk_FUN_10ebba70("identifyProductWait");
    uVar3 = (undefined4)(2);
    goto LAB_108ded4b;
  }
  ((Stub_SCStr *)(local_18))->int_allocRep("identifyProductWait");
  local_8 = (undefined4)(8);
  local_14 = (undefined4)(1);
  uVar3 = (undefined4)(thunk_FUN_10dfd7b0(local_18));
  bVar1 = (bool)(false);
  local_8 = (undefined4)(9);
  local_14 = (undefined4)(3);
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  if (cVar2 == '\0') {
    uVar3 = (undefined4)(thunk_FUN_10df9830());
    bVar1 = (bool)(true);
    local_8 = (undefined4)(10);
    local_14 = (undefined4)(7);
    cVar2 = (char)(thunk_FUN_10def450(uVar3));
    *(uint *)((char *)&param_1 + 3) = '\0';
    if (cVar2 != '\0') goto LAB_108deddb;
  }
  else {
LAB_108deddb:
    *(uint *)((char *)&param_1 + 3) = '\x01';
  }
  if (bVar1) {
    thunk_FUN_10def0d0();
  }
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(0xb);
  ((Stub_SCStr *)(local_18))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (*(uint *)((char *)&param_1 + 3) == '\0') {
    uVar3 = (undefined4)(thunk_FUN_10dfcab0());
    local_8 = (undefined4)(0xc);
    cVar2 = (char)(thunk_FUN_10def490(uVar3));
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_105a1d20();
    thunk_FUN_105a1c80();
    if (cVar2 != '\0') {
      iVar4 = (int)(thunk_FUN_10eb41b0());
      *(undefined1 *)(iVar4 + 0x10c) = 1;
    }
    ExceptionList = (void *)(local_10);
    return;
  }
LAB_108ded57:
  thunk_FUN_10ee48c0();
  thunk_FUN_10eeb270();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108def40; body size 203 bytes.
#line 1 "ENTRY_108def40"

void FUN_108def40(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163ed15);
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


// Reference entry 108df040; body size 203 bytes.
#line 1 "ENTRY_108df040"

void FUN_108df040(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163ed55);
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


// Reference entry 108df140; body size 644 bytes.
#line 1 "ENTRY_108df140"

void __thiscall Recovered_Bulk::FUN_108df140(undefined4 param_2)
{
  int param_1 = (int )this;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_64 [28];
  undefined1 local_48 [52];
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163edd8);
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
  ((Stub_SCStr *)(local_14))->int_allocRep("forward");
  local_8 = (undefined4)(1);
  uVar2 = (undefined4)(thunk_FUN_10df6f00(local_14));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    thunk_FUN_10eb41b0();
    uVar7 = (undefined4)(0x2d);
    uVar6 = (undefined4)(0x14);
    uVar5 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_10eacdd0(0,0x14,0x2d));
    thunk_FUN_10ee48c0(uVar2);
    thunk_FUN_10ee2db0(uVar2,uVar5,uVar6,uVar7);
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10df9510());
  local_8 = (undefined4)(4);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0xe0) != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)(*(undefined1 **)(param_1 + 0xe0));
    }
    thunk_FUN_10ee48c0(puVar4);
    thunk_FUN_10ee2c00(puVar4);
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10df9440());
  local_8 = (undefined4)(5);
  thunk_FUN_10deee60(uVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  thunk_FUN_10dfcab0();
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  uVar2 = (undefined4)(thunk_FUN_10defb40(local_64,local_48));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  cVar1 = (char)(thunk_FUN_10def490(uVar2));
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar3 + 0x10c) = 1;
    ExceptionList = (void *)(local_10);
    return;
  }
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep("pinCode");
  local_8 = (undefined4)(9);
  uVar2 = (undefined4)(thunk_FUN_10df7fa0(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(0xb);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (undefined4)(0);
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    thunk_FUN_108df820();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108df470; body size 322 bytes.
#line 1 "ENTRY_108df470"

void FUN_108df470(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163ee3d);
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
    thunk_FUN_10eeabd0();
    thunk_FUN_10ebb8e0("handshakeMinWait",2000);
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
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10df7cf0());
  local_8 = (undefined4)(2);
  cVar1 = (char)(thunk_FUN_10def490(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(1);
    thunk_FUN_10ee48c0(1);
    thunk_FUN_10ee3000(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108df610; body size 203 bytes.
#line 1 "ENTRY_108df610"

void FUN_108df610(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163ee85);
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


// Reference entry 108df710; body size 203 bytes.
#line 1 "ENTRY_108df710"

void FUN_108df710(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163eec5);
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


// Reference entry 108dfd80; body size 180 bytes.
#line 1 "ENTRY_108dfd80"

undefined4 * __thiscall Recovered_Bulk::FUN_108dfd80(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163ef9e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108dfe70; body size 180 bytes.
#line 1 "ENTRY_108dfe70"

undefined4 * __thiscall Recovered_Bulk::FUN_108dfe70(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163effe);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108dff60; body size 180 bytes.
#line 1 "ENTRY_108dff60"

undefined4 * __thiscall Recovered_Bulk::FUN_108dff60(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f05e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e0050; body size 180 bytes.
#line 1 "ENTRY_108e0050"

undefined4 * __thiscall Recovered_Bulk::FUN_108e0050(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f0be);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e0140; body size 180 bytes.
#line 1 "ENTRY_108e0140"

undefined4 * __thiscall Recovered_Bulk::FUN_108e0140(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f11e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e0230; body size 180 bytes.
#line 1 "ENTRY_108e0230"

undefined4 * __thiscall Recovered_Bulk::FUN_108e0230(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f17e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e0320; body size 180 bytes.
#line 1 "ENTRY_108e0320"

undefined4 * __thiscall Recovered_Bulk::FUN_108e0320(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f1de);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e0410; body size 180 bytes.
#line 1 "ENTRY_108e0410"

undefined4 * __thiscall Recovered_Bulk::FUN_108e0410(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f23e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e0500; body size 180 bytes.
#line 1 "ENTRY_108e0500"

undefined4 * __thiscall Recovered_Bulk::FUN_108e0500(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f29e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e05f0; body size 180 bytes.
#line 1 "ENTRY_108e05f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e05f0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f2fe);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e06e0; body size 180 bytes.
#line 1 "ENTRY_108e06e0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e06e0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f35e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e07d0; body size 180 bytes.
#line 1 "ENTRY_108e07d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e07d0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f3be);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e09b0; body size 183 bytes.
#line 1 "ENTRY_108e09b0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e09b0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f47e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  local_8 = (undefined4)(2);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((Stub_SCStr *)(this_))->endsWith("Subwiz");
  local_8 = (undefined4)(7);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e0aa0; body size 180 bytes.
#line 1 "ENTRY_108e0aa0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e0aa0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f4de);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e0b90; body size 180 bytes.
#line 1 "ENTRY_108e0b90"

undefined4 * __thiscall Recovered_Bulk::FUN_108e0b90(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f53e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e0c80; body size 213 bytes.
#line 1 "ENTRY_108e0c80"

undefined4 * __thiscall Recovered_Bulk::FUN_108e0c80(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_1163f5a0);
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
      uVar5 = (undefined4)(thunk_FUN_108bcac0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_108bdfd0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e0de0; body size 194 bytes.
#line 1 "ENTRY_108e0de0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e0de0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f5fe);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCModernTVSetupARCErrorPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCModernTVSetupARCErrorPageType_vftable);
  DAT_121a37b4 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e0f30; body size 194 bytes.
#line 1 "ENTRY_108e0f30"

undefined4 * __thiscall Recovered_Bulk::FUN_108e0f30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f65e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCModernTVSetupCECErrorPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCModernTVSetupCECErrorPageType_vftable);
  DAT_121a37b0 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e1080; body size 194 bytes.
#line 1 "ENTRY_108e1080"

undefined4 * __thiscall Recovered_Bulk::FUN_108e1080(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f6be);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCModernTVSetupCheckAndContinuePage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCModernTVSetupCheckAndContinuePageType_vftable);
  DAT_121a37b8 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e11d0; body size 194 bytes.
#line 1 "ENTRY_108e11d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e11d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f71e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCModernTVSetupEntryPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCModernTVSetupEntryPageType_vftable);
  DAT_121a37a4 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e1320; body size 194 bytes.
#line 1 "ENTRY_108e1320"

undefined4 * __thiscall Recovered_Bulk::FUN_108e1320(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f77e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCModernTVSetupHdmiCheckPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCModernTVSetupHdmiCheckPageType_vftable);
  DAT_121a37a8 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e1470; body size 194 bytes.
#line 1 "ENTRY_108e1470"

undefined4 * __thiscall Recovered_Bulk::FUN_108e1470(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f7de);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCModernTVSetupHdmiConnectionErrorPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCModernTVSetupHdmiConnectionErrorPageType_vftable);
  DAT_121a37ac = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e1570; body size 107 bytes.
#line 1 "ENTRY_108e1570"

undefined4 * __thiscall Recovered_Bulk::FUN_108e1570(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCModernTVSetupHdmiPage_vftable);
  param_1[4] = (uint)&Ext_SCModernTVSetupHdmiPage_vftable;
  param_1[0x23] = (uint)&Ext_SCModernTVSetupHdmiPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCModernTVSetupHdmiPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 108e1650; body size 194 bytes.
#line 1 "ENTRY_108e1650"

undefined4 * __thiscall Recovered_Bulk::FUN_108e1650(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f83e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCModernTVSetupHdmiTestSuccessPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCModernTVSetupHdmiTestSuccessPageType_vftable);
  DAT_121a37c8 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e17a0; body size 194 bytes.
#line 1 "ENTRY_108e17a0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e17a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f89e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCModernTVSetupHdmiTestingPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCModernTVSetupHdmiTestingPageType_vftable);
  DAT_121a37c4 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e18f0; body size 194 bytes.
#line 1 "ENTRY_108e18f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e18f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f8fe);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCModernTVSetupHomeIntroPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCModernTVSetupHomeIntroPageType_vftable);
  DAT_121a37a0 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e1a40; body size 194 bytes.
#line 1 "ENTRY_108e1a40"

undefined4 * __thiscall Recovered_Bulk::FUN_108e1a40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f95e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCModernTVSetupIntroPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCModernTVSetupIntroPageType_vftable);
  DAT_121a379c = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e1b90; body size 194 bytes.
#line 1 "ENTRY_108e1b90"

undefined4 * __thiscall Recovered_Bulk::FUN_108e1b90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163f9be);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCModernTVSetupNeedOpticalAdapterPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCModernTVSetupNeedOpticalAdapterPageType_vftable);
  DAT_121a378c = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e1ce0; body size 194 bytes.
#line 1 "ENTRY_108e1ce0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e1ce0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163fa1e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCModernTVSetupOpticalAdapterPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCModernTVSetupOpticalAdapterPageType_vftable);
  DAT_121a37cc = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e1f30; body size 213 bytes.
#line 1 "ENTRY_108e1f30"

undefined4 * __thiscall Recovered_Bulk::FUN_108e1f30(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_1163fae0);
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
      uVar5 = (undefined4)(thunk_FUN_108bcac0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_108bdfd0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&Ext_SCModernTVSetupOpticalSetupSubwiz_vftable);
  param_1[4] = (uint)&Ext_SCModernTVSetupOpticalSetupSubwiz_vftable;
  param_1[0x23] = (uint)&Ext_SCModernTVSetupOpticalSetupSubwiz_vftable;
  param_1[0x2a] = (uint)&Ext_SCModernTVSetupOpticalSetupSubwiz_vftable;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e2040; body size 197 bytes.
#line 1 "ENTRY_108e2040"

undefined4 * __thiscall Recovered_Bulk::FUN_108e2040(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163fb3e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCModernTVSetupOpticalSetupSubwiz");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  local_8 = (undefined4)(2);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((Stub_SCStr *)(this_))->endsWith("Subwiz");
  local_8 = (undefined4)(7);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCModernTVSetupOpticalSetupSubwizType_vftable);
  DAT_121a3798 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e2190; body size 194 bytes.
#line 1 "ENTRY_108e2190"

undefined4 * __thiscall Recovered_Bulk::FUN_108e2190(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163fb9e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCModernTVSetupPurchaseAdapterPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCModernTVSetupPurchaseAdapterPageType_vftable);
  DAT_121a3790 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e22e0; body size 194 bytes.
#line 1 "ENTRY_108e22e0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e22e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163fbfe);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCModernTVSetupTryAgainPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCModernTVSetupTryAgainPageType_vftable);
  DAT_121a37bc = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e23e0; body size 270 bytes.
#line 1 "ENTRY_108e23e0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e23e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1163fc91);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCModernTVSetupWizard_vftable);
  param_1[4] = (uint)&Ext_SCModernTVSetupWizard_vftable;
  param_1[0x23] = (uint)&Ext_SCModernTVSetupWizard_vftable;
  param_1[0x2a] = (uint)&Ext_SCModernTVSetupWizard_vftable;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  ((Stub_SCStr *)((SCStr *)(param_1 + 0x3f)))->int_allocRep("");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((Stub_SCStr *)((SCStr *)(param_1 + 0x40)))->int_allocRep("");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((Stub_SCStr *)((SCStr *)(param_1 + 0x41)))->int_allocRep("");
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined1 *)((int)param_1 + 0x115) = 0;
  thunk_FUN_10c5ed70(uVar1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108e3730; body size 135 bytes.
#line 1 "ENTRY_108e3730"

void __fastcall FUN_108e3730(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116401c0);
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
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108e3a80; body size 286 bytes.
#line 1 "ENTRY_108e3a80"

void __fastcall FUN_108e3a80(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116401f0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0x118)))->int_release();
  *(undefined4 *)(param_1 + 0x118) = 0;
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0x104)))->int_release();
  *(undefined4 *)(param_1 + 0x104) = 0;
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0x100)))->int_release();
  *(undefined4 *)(param_1 + 0x100) = 0;
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0xfc)))->int_release();
  *(undefined4 *)(param_1 + 0xfc) = 0;
  local_8 = (undefined4)(4);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0xf8)))->int_release();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 0xf4));
  local_8 = (undefined4)(5);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(6);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_106da680();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108e4020; body size 68 bytes.
#line 1 "ENTRY_108e4020"

undefined4 * __thiscall Recovered_Bulk::FUN_108e4020(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108e4380; body size 68 bytes.
#line 1 "ENTRY_108e4380"

undefined4 * __thiscall Recovered_Bulk::FUN_108e4380(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108e43e0; body size 68 bytes.
#line 1 "ENTRY_108e43e0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e43e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108e4480; body size 68 bytes.
#line 1 "ENTRY_108e4480"

undefined4 * __thiscall Recovered_Bulk::FUN_108e4480(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108e4520; body size 68 bytes.
#line 1 "ENTRY_108e4520"

undefined4 * __thiscall Recovered_Bulk::FUN_108e4520(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108e45c0; body size 68 bytes.
#line 1 "ENTRY_108e45c0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e45c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108e46d0; body size 68 bytes.
#line 1 "ENTRY_108e46d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e46d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108e47a0; body size 68 bytes.
#line 1 "ENTRY_108e47a0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e47a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108e4990; body size 68 bytes.
#line 1 "ENTRY_108e4990"

undefined4 * __thiscall Recovered_Bulk::FUN_108e4990(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108e4aa0; body size 68 bytes.
#line 1 "ENTRY_108e4aa0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e4aa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108e4b40; body size 68 bytes.
#line 1 "ENTRY_108e4b40"

undefined4 * __thiscall Recovered_Bulk::FUN_108e4b40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108e4be0; body size 68 bytes.
#line 1 "ENTRY_108e4be0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e4be0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108e4c80; body size 68 bytes.
#line 1 "ENTRY_108e4c80"

undefined4 * __thiscall Recovered_Bulk::FUN_108e4c80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108e4d20; body size 310 bytes.
#line 1 "ENTRY_108e4d20"

int __thiscall Recovered_Bulk::FUN_108e4d20(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11640220);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0x118)))->int_release();
  *(undefined4 *)(param_1 + 0x118) = 0;
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0x104)))->int_release();
  *(undefined4 *)(param_1 + 0x104) = 0;
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0x100)))->int_release();
  *(undefined4 *)(param_1 + 0x100) = 0;
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0xfc)))->int_release();
  *(undefined4 *)(param_1 + 0xfc) = 0;
  local_8 = (undefined4)(4);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0xf8)))->int_release();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 0xf4));
  local_8 = (undefined4)(5);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(6);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x124);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 108e5030; body size 168 bytes.
#line 1 "ENTRY_108e5030"

undefined4 * __thiscall Recovered_Bulk::FUN_108e5030(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11640507);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCModernTVSetupARCErrorPage_vftable);
    puVar1[4] = (uint)&Ext_SCModernTVSetupARCErrorPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCModernTVSetupARCErrorPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCModernTVSetupARCErrorPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108e5110; body size 168 bytes.
#line 1 "ENTRY_108e5110"

undefined4 * __thiscall Recovered_Bulk::FUN_108e5110(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11640557);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCModernTVSetupCECErrorPage_vftable);
    puVar1[4] = (uint)&Ext_SCModernTVSetupCECErrorPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCModernTVSetupCECErrorPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCModernTVSetupCECErrorPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108e51f0; body size 168 bytes.
#line 1 "ENTRY_108e51f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e51f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116405a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCModernTVSetupCheckAndContinuePage_vftable);
    puVar1[4] = (uint)&Ext_SCModernTVSetupCheckAndContinuePage_vftable;
    puVar1[0x23] = (uint)&Ext_SCModernTVSetupCheckAndContinuePage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCModernTVSetupCheckAndContinuePage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108e52d0; body size 168 bytes.
#line 1 "ENTRY_108e52d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e52d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116405f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCModernTVSetupEntryPage_vftable);
    puVar1[4] = (uint)&Ext_SCModernTVSetupEntryPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCModernTVSetupEntryPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCModernTVSetupEntryPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108e53b0; body size 168 bytes.
#line 1 "ENTRY_108e53b0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e53b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11640647);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_108e1570(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCModernTVSetupHdmiCheckPage_vftable);
    puVar1[4] = (uint)&Ext_SCModernTVSetupHdmiCheckPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCModernTVSetupHdmiCheckPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCModernTVSetupHdmiCheckPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108e5490; body size 168 bytes.
#line 1 "ENTRY_108e5490"

undefined4 * __thiscall Recovered_Bulk::FUN_108e5490(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11640697);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCModernTVSetupHdmiConnectionErrorPage_vftable);
    puVar1[4] = (uint)&Ext_SCModernTVSetupHdmiConnectionErrorPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCModernTVSetupHdmiConnectionErrorPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCModernTVSetupHdmiConnectionErrorPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108e5570; body size 168 bytes.
#line 1 "ENTRY_108e5570"

undefined4 * __thiscall Recovered_Bulk::FUN_108e5570(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116406e7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCModernTVSetupHdmiTestSuccessPage_vftable);
    puVar1[4] = (uint)&Ext_SCModernTVSetupHdmiTestSuccessPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCModernTVSetupHdmiTestSuccessPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCModernTVSetupHdmiTestSuccessPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108e5650; body size 175 bytes.
#line 1 "ENTRY_108e5650"

undefined4 * __thiscall Recovered_Bulk::FUN_108e5650(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11640737);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_108e1570(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCModernTVSetupHdmiTestingPage_vftable);
    puVar1[4] = (uint)&Ext_SCModernTVSetupHdmiTestingPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCModernTVSetupHdmiTestingPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCModernTVSetupHdmiTestingPage_vftable;
    *(undefined1 *)((int)puVar1 + 0xea) = 1;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108e5730; body size 168 bytes.
#line 1 "ENTRY_108e5730"

undefined4 * __thiscall Recovered_Bulk::FUN_108e5730(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11640787);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_108e1570(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCModernTVSetupHomeIntroPage_vftable);
    puVar1[4] = (uint)&Ext_SCModernTVSetupHomeIntroPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCModernTVSetupHomeIntroPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCModernTVSetupHomeIntroPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108e5810; body size 168 bytes.
#line 1 "ENTRY_108e5810"

undefined4 * __thiscall Recovered_Bulk::FUN_108e5810(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116407d7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_108e1570(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCModernTVSetupIntroPage_vftable);
    puVar1[4] = (uint)&Ext_SCModernTVSetupIntroPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCModernTVSetupIntroPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCModernTVSetupIntroPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108e58f0; body size 168 bytes.
#line 1 "ENTRY_108e58f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e58f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11640827);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCModernTVSetupNeedOpticalAdapterPage_vftable);
    puVar1[4] = (uint)&Ext_SCModernTVSetupNeedOpticalAdapterPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCModernTVSetupNeedOpticalAdapterPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCModernTVSetupNeedOpticalAdapterPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108e59d0; body size 168 bytes.
#line 1 "ENTRY_108e59d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e59d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11640877);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_108e1570(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCModernTVSetupOpticalAdapterPage_vftable);
    puVar1[4] = (uint)&Ext_SCModernTVSetupOpticalAdapterPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCModernTVSetupOpticalAdapterPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCModernTVSetupOpticalAdapterPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108e5ab0; body size 168 bytes.
#line 1 "ENTRY_108e5ab0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e5ab0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116408c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCModernTVSetupOpticalAdatperConnectErrorPage_vftable);
    puVar1[4] = (uint)&Ext_SCModernTVSetupOpticalAdatperConnectErrorPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCModernTVSetupOpticalAdatperConnectErrorPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCModernTVSetupOpticalAdatperConnectErrorPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108e5b90; body size 276 bytes.
#line 1 "ENTRY_108e5b90"

undefined4 * __thiscall Recovered_Bulk::FUN_108e5b90(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_11640942);
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
        uVar7 = (undefined4)(thunk_FUN_108bcac0(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_108bdfd0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&Ext_SCModernTVSetupOpticalSetupSubwiz_vftable);
    puVar2[4] = (uint)&Ext_SCModernTVSetupOpticalSetupSubwiz_vftable;
    puVar2[0x23] = (uint)&Ext_SCModernTVSetupOpticalSetupSubwiz_vftable;
    puVar2[0x2a] = (uint)&Ext_SCModernTVSetupOpticalSetupSubwiz_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108e5cf0; body size 168 bytes.
#line 1 "ENTRY_108e5cf0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e5cf0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11640997);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCModernTVSetupPurchaseAdapterPage_vftable);
    puVar1[4] = (uint)&Ext_SCModernTVSetupPurchaseAdapterPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCModernTVSetupPurchaseAdapterPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCModernTVSetupPurchaseAdapterPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108e5dd0; body size 168 bytes.
#line 1 "ENTRY_108e5dd0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e5dd0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116409e7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCModernTVSetupTryAgainPage_vftable);
    puVar1[4] = (uint)&Ext_SCModernTVSetupTryAgainPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCModernTVSetupTryAgainPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCModernTVSetupTryAgainPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108e5eb0; body size 361 bytes.
#line 1 "ENTRY_108e5eb0"

undefined4 * __thiscall Recovered_Bulk::FUN_108e5eb0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11640aac);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0x124));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCModernTVSetupWizard_vftable);
    puVar1[4] = (uint)&Ext_SCModernTVSetupWizard_vftable;
    puVar1[0x23] = (uint)&Ext_SCModernTVSetupWizard_vftable;
    puVar1[0x2a] = (uint)&Ext_SCModernTVSetupWizard_vftable;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((Stub_SCStr *)((SCStr *)(puVar1 + 0x3f)))->int_allocRep("");
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    ((Stub_SCStr *)((SCStr *)(puVar1 + 0x40)))->int_allocRep("");
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    ((Stub_SCStr *)((SCStr *)(puVar1 + 0x41)))->int_allocRep("");
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    puVar1[0x42] = 0;
    puVar1[0x43] = 0;
    *(undefined2 *)(puVar1 + 0x44) = 0;
    *(undefined1 *)((int)puVar1 + 0x115) = 0;
    thunk_FUN_10c5ed70();
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108ee7b0; body size 527 bytes.
#line 1 "ENTRY_108ee7b0"

undefined4 __thiscall Recovered_Bulk::FUN_108ee7b0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
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
  puStack_70 = (undefined1 *)(LAB_11641ddd);
  local_74 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_74);
  (**(code **)(*param_1 + 8))(DAT_12126b84 ^ (uint)local_68);
  iVar2 = (int)(thunk_FUN_105ad8f0());
  local_8 = (undefined4)(DAT_121a37a8);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a37a4);
  local_6c = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a37a0);
  *(unsigned char *)((char *)&local_6c + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a379c);
  *(unsigned char *)((char *)&local_6c + 0) = 2;
  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&Ext_SCConditionalElementTree_vftable);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(4)));
  piVar3 = (int *)((int *)thunk_FUN_106190a0(iVar2 == 6,local_48));
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(iVar2 == 10,local_68));
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(iVar2 == 0xb,local_94));
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0x10))(local_b4));
  uVar4 = (undefined4)((**(code **)(*piVar3 + 4))());
  thunk_FUN_105f5a00(uVar4);
  puVar1 = (undefined4 *)(local_10);
  puVar6 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar6) != puVar1; puVar6 = puVar6 + 8) {
      (**(code **)*puVar6)(0);
    }
    uVar5 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar6 = (undefined4 *)(local_14);
    if (0xfff < uVar5) {
      puVar6 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar6))) goto LAB_108ee95c;
    }
    thunk_FUN_1148a50e(puVar6,uVar5);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar5 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar2 = (int)(iStack_20);
    if (0xfff < uVar5) {
      iVar2 = (int)(*(int *)(iStack_20 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iStack_20 - iVar2) - 4U) {
LAB_108ee95c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar5);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&Ext_SCConditionalElementTreeNoAppendInterface_vftable);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_74);
  return (undefined4)(param_2);
}


// Reference entry 108f4dd0; body size 489 bytes.
#line 1 "ENTRY_108f4dd0"

void __thiscall Recovered_Bulk::FUN_108f4dd0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  undefined1 *puVar10;
  char *pcVar11;
  int *local_28;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11642c75);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  param_1 = (int)(param_1 + 0xa8);
  local_14 = (int)(param_1);
  thunk_FUN_10302280(param_1,"======== HDMI Status =============",uVar3);
  piVar1 = (int *)(param_2);
  if (param_2 == (int *)0x0) {
    thunk_FUN_10302280(param_1,"Error: No result from the HDMIGetOp..",uVar3);
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar4 = (undefined4)((**(code **)(*param_2 + 0x90))(&local_20));
  local_8 = (undefined4)(0);
  thunk_FUN_101ccf90(uVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  uVar3 = (uint)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  local_18 = (uint)(0);
  iVar5 = (int)((**(code **)(*local_28 + 0x14))());
  if (iVar5 != 0) {
    do {
      (**(code **)(*local_28 + 0x1c))(&param_2,uVar3);
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      iVar5 = (int)((**(code **)(*piVar1 + 0x80))(&param_2));
      if (iVar5 == 0) {
        piVar9 = (int *)((int *)&DAT_1186d2ee);
        if (param_2 != (int *)0x0) {
          piVar9 = (int *)(param_2);
        }
        cVar2 = (char)((**(code **)(*piVar1 + 0x3c))(&param_2));
        pcVar7 = (char *)("true");
        if (cVar2 == '\0') {
          pcVar7 = (char *)("false");
        }
        pcVar11 = (char *)("%s : %s");
LAB_108f4f5a:
        thunk_FUN_10302280(local_14,pcVar11,piVar9,pcVar7);
        uVar3 = (uint)(local_18);
      }
      else {
        if (iVar5 == 1) {
          piVar9 = (int *)((int *)&DAT_1186d2ee);
          if (param_2 != (int *)0x0) {
            piVar9 = (int *)(param_2);
          }
          pcVar7 = (char *)((char *)(**(code **)(*piVar1 + 0x24))(&param_2));
          pcVar11 = (char *)("%s : %d");
          goto LAB_108f4f5a;
        }
        if (iVar5 == 3) {
          puVar6 = (undefined4 *)((undefined4 *)(**(code **)(*piVar1 + 0x18))(&local_1c,&param_2));
          *(unsigned char *)((char *)&local_8 + 0) = 5;
          puVar10 = (undefined1 *)(&DAT_1186d2ee);
          if ((undefined1 *)*puVar6 != (undefined1 *)0x0) {
            puVar10 = (undefined1 *)((undefined1 *)*puVar6);
          }
          piVar9 = (int *)((int *)&DAT_1186d2ee);
          if (param_2 != (int *)0x0) {
            piVar9 = (int *)(param_2);
          }
          thunk_FUN_10302280(local_14,"%s : %s",piVar9,puVar10);
          *(unsigned char *)((char *)&local_8 + 0) = 6;
          ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
          local_1c = (undefined4)(0);
        }
      }
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
      uVar3 = (uint)(uVar3 + 1);
      param_2 = (int *)((int *)0x0);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
      local_18 = (uint)(uVar3);
      uVar8 = (uint)((**(code **)(*local_28 + 0x14))());
    } while (uVar3 < uVar8);
  }
  local_8 = (undefined4)(8);
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108f5040; body size 172 bytes.
#line 1 "ENTRY_108f5040"

void FUN_108f5040(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11642cc5);
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
  thunk_FUN_108c7440(piVar1);
  uVar4 = (undefined4)(1);
  thunk_FUN_10ebc1d0(1);
  thunk_FUN_108c7560(uVar4);
  local_8 = (undefined4)(4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108f5120; body size 136 bytes.
#line 1 "ENTRY_108f5120"

void FUN_108f5120(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11642cfd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(undefined4 *)(iVar3 + 0x108) = 2;
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar3 + 0x115) = 1;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108f51d0; body size 136 bytes.
#line 1 "ENTRY_108f51d0"

void FUN_108f51d0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11642d3d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(undefined4 *)(iVar3 + 0x108) = 1;
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar3 + 0x115) = 1;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108f5280; body size 179 bytes.
#line 1 "ENTRY_108f5280"

void FUN_108f5280(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11642d85);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("forward");
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(thunk_FUN_10df6f00(&local_14));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  cVar1 = (char)(thunk_FUN_10def450(uVar3));
  thunk_FUN_10def0d0(uVar2);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    iVar4 = (int)(thunk_FUN_10eb41b0());
    *(undefined4 *)(iVar4 + 0x108) = 0;
    iVar4 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar4 + 0x115) = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108f5360; body size 122 bytes.
#line 1 "ENTRY_108f5360"

void FUN_108f5360(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11642dbd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(undefined4 *)(iVar3 + 0x108) = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108f5400; body size 122 bytes.
#line 1 "ENTRY_108f5400"

void FUN_108f5400(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11642dfd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(undefined4 *)(iVar3 + 0x108) = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108f6710; body size 122 bytes.
#line 1 "ENTRY_108f6710"

void FUN_108f6710(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116431cd);
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


// Reference entry 108f6940; body size 162 bytes.
#line 1 "ENTRY_108f6940"

void FUN_108f6940(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11643295);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("forward");
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(thunk_FUN_10df6f00(&local_14));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  cVar1 = (char)(thunk_FUN_10def450(uVar3));
  thunk_FUN_10def0d0(uVar2);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    iVar4 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar4 + 0x111) = 1;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108f6a10; body size 419 bytes.
#line 1 "ENTRY_108f6a10"

void FUN_108f6a10(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  SCLibrary *pSVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164330d);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("buyAdapter");
  local_8 = (undefined4)(0);
  uVar4 = (undefined4)(thunk_FUN_10df6f00(&local_14));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  cVar2 = (char)(thunk_FUN_10def450(uVar4));
  thunk_FUN_10def0d0(uVar3);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar2 != '\0') {
    pSVar5 = (SCLibrary *)(((Stub_SCLibrary *)(0))->getSingleton());
    piVar6 = (int *)((int *)(**(code **)(*(int *)pSVar5 + 0x3c))(&local_14));
    piVar1 = (int *)((int *)*piVar6);
    local_8 = (undefined4)(3);
    *piVar6 = (int)(0);
    if (piVar1 == (int *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      piVar6 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    uVar4 = (undefined4)(createPropertyBag());
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    thunk_FUN_101aa9f0(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("openAsNewTask");
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    (**(code **)(*local_18 + 0x40))(&stack0x00000004,1);
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("https://www.sonos.com/shop/optical-audio-adaptor.html");
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    puVar7 = (undefined4 *)((undefined4 *)(**(code **)(*piVar1 + 0x18))(&local_20));
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    (**(code **)(*(int *)*puVar7 + 0x18))(&stack0x00000004,local_18);
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_release();
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x11)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(0x12);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108f6c20; body size 162 bytes.
#line 1 "ENTRY_108f6c20"

void FUN_108f6c20(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11643365);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("tryAgain");
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(thunk_FUN_10df6f00(&local_14));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  cVar1 = (char)(thunk_FUN_10def450(uVar3));
  thunk_FUN_10def0d0(uVar2);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    iVar4 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar4 + 0x114) = 1;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108f6d20; body size 739 bytes.
#line 1 "ENTRY_108f6d20"

void __fastcall FUN_108f6d20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *local_28;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116433fc);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(thunk_FUN_10eb41b0(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar5 = (int *)(*(int **)(iVar1 + 0xe8));
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }
  local_8 = (undefined4)(0);
  local_18 = (int *)((int *)0x0);
  if (piVar5 == (int *)0x0) {
    local_28 = (int *)((int *)0x0);
  }
  else {
    local_28 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar5 != (int *)0x0) {
    local_18 = (int *)(operator_new(0xd7d0));
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    if (local_18 == (int *)0x0) {
      local_14 = (int *)((int *)0x0);
    }
    else {
      local_14 = (int *)(local_18);
      iVar1 = (int)(thunk_FUN_10c96490());
      uVar2 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 4 + iVar1) + 0x48))());
      uVar11 = (undefined4)(0);
      uVar10 = (undefined4)(0);
      uVar9 = (undefined4)(2000);
      uVar8 = (undefined4)(2000);
      uVar3 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 4 + iVar1) + 0x50))
                        (2000,2000,0,0));
      piVar5 = (int *)(local_14);
      thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:DeviceProperties:1",
                         "SetAutoplayRoomUUID",uVar3,uVar8,uVar9,uVar10,uVar11);
      *piVar5 = (int)((int)(uint)&Ext_RUpnpDPSetAutoplayRoomUUIDAIOOp_vftable);
      piVar5[0x18] = (int)(uint)&Ext_RUpnpDPSetAutoplayRoomUUIDAIOOp_vftable;
      piVar5[0x11b] = (int)(uint)&Ext_RUpnpDPSetAutoplayRoomUUIDAIOOp_vftable;
    }
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_10c98c80(&local_18));
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)((undefined1 *)*puVar4);
    }
    piVar5 = (int *)((int *)thunk_FUN_1124ffa0("RoomUUID",0));
    (**(code **)(*piVar5 + 0xc))(puVar6);
    piVar5 = (int *)((int *)thunk_FUN_1124ffa0("Source",0));
    (**(code **)(*piVar5 + 0xc))(&DAT_118bb26c);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    piVar5 = (int *)(operator_new(0x48));
    local_18 = (int *)(piVar5);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      *piVar5 = (int)((int)(uint)&Ext_SCIObjImpl_vftable);
      piVar5[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      thunk_FUN_11240650();
      piVar5[2] = (int)(uint)&Ext_RControlAIOOpCB_vftable;
      *piVar5 = (int)((int)(uint)&Ext_SCOpImpl_vftable);
      piVar5[2] = (int)(uint)&Ext_SCOpImpl_vftable;
      piVar5[3] = 0;
      piVar5[4] = 0;
      piVar5[5] = (int)(uint)&Ext_RControlAIOOpRefBase_vftable;
      *(unsigned char *)((char *)&local_8 + 0) = 0xc;
      piVar5[6] = (int)local_14;
      if (local_14 != (int *)0x0) {
        thunk_FUN_1123fce0(local_14 + 1);
      }
      piVar5[7] = 0;
      piVar5[5] = (int)(uint)&Ext_RControlAIOOpRef_vftable;
      piVar5[8] = 0;
      *(undefined2 *)(piVar5 + 9) = 1000;
      piVar5[10] = 0;
      piVar5[0xb] = 0;
      piVar5[0xc] = (int)(uint)&Ext_SCIObjImpl_vftable;
      piVar5[0xd] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      piVar5[0xc] = (int)(uint)&Ext_SCElapsedTimeMeasurement_vftable;
      piVar5[0xe] = 0;
      piVar5[0xf] = 0;
      piVar5[0xf] = 0;
      piVar5[0x10] = 0;
      piVar5[0x11] = 0;
    }
    piVar7 = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (piVar5 != (int *)0x0) {
      piVar7 = (int *)(piVar5);
      if (*(code **)(*piVar5 + 0xc) != thunk_FUN_101bb8a0) {
        piVar7 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
      }
      (**(code **)(*piVar7 + 4))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    thunk_FUN_10ebb810("autoPlay",piVar5,0);
    thunk_FUN_10302280(param_1 + 0xa8,"start running autoPlayOp..");
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xe)));
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))();
    }
  }
  local_8 = (undefined4)(0xf);
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108f70c0; body size 393 bytes.
#line 1 "ENTRY_108f70c0"

void __thiscall Recovered_Bulk::FUN_108f70c0(SCStr *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  char *pcVar6;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = (int)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11643464);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar3 = (int)(thunk_FUN_10eb41b0());
  ((Stub_SCStr *)(local_14))->SCStr((SCStr *)(iVar3 + 0xf8));
  local_8 = (int)(0);
  pvVar4 = (void *)(operator_new(0x48));
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    ((Stub_SCStr *)((SCStr *)&stack0xffffffd0))->SCStr(param_2);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    ((Stub_SCStr *)((SCStr *)&stack0xffffffcc))->SCStr(local_14);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    piVar5 = (int *)((int *)thunk_FUN_10ef1700());
  }
  local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
  if (piVar5 != *(int **)(param_1 + 0xe0)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xe4));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined4 *)(param_1 + 0xe4) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0xe0) = piVar5;
    if (piVar5 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0xe4) = 0;
    }
    else {
      piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
      *(int **)(param_1 + 0xe4) = piVar5;
      (**(code **)(*piVar5 + 4))();
    }
  }
  bVar2 = (bool)(((Stub_SCStr *)(param_2))->op_eq("powercycle"));
  if (bVar2) {
    thunk_FUN_10302280();
    pcVar6 = (char *)("reinitHDMI");
  }
  else {
    bVar2 = (bool)(((Stub_SCStr *)(param_2))->op_eq("status"));
    if (bVar2) {
      thunk_FUN_10302280();
      pcVar6 = (char *)("getHDMIStatus");
    }
    else {
      thunk_FUN_10302280();
      pcVar6 = (char *)("getEDIDStatus");
    }
  }
  thunk_FUN_10ebb810(pcVar6);
  local_8 = (int)(3);
  ((Stub_SCStr *)(local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108f88b0; body size 180 bytes.
#line 1 "ENTRY_108f88b0"

undefined4 * __thiscall Recovered_Bulk::FUN_108f88b0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164385e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108f89f0; body size 194 bytes.
#line 1 "ENTRY_108f89f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108f89f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116438be);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCNamePortableSetNamePage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCNamePortableSetNamePageType_vftable);
  DAT_121a3824 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108f8af0; body size 162 bytes.
#line 1 "ENTRY_108f8af0"

undefined4 * __thiscall Recovered_Bulk::FUN_108f8af0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164390b);
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
  *param_1 = (undefined4)((uint)&Ext_SCNamePortableWizard_vftable);
  param_1[4] = (uint)&Ext_SCNamePortableWizard_vftable;
  param_1[0x23] = (uint)&Ext_SCNamePortableWizard_vftable;
  param_1[0x2a] = (uint)&Ext_SCNamePortableWizard_vftable;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108f8bc0; body size 350 bytes.
#line 1 "ENTRY_108f8bc0"

undefined4 * __fastcall FUN_108f8bc0(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  SCStr *this_;
  SCStr local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164398d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_1c = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCNamePortableWizard");
  local_8 = (undefined4)(0);
  thunk_FUN_106de2c0(&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCNamePortableWizardType_vftable);
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  DAT_121a3820 = (int)(param_1);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("SCNamePortableSetNamePage");
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    thunk_FUN_106de0c0(&local_18,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
    local_18 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    *puVar2 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
    this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
    local_1c = (undefined4)(1);
    bVar1 = (bool)(((Stub_SCStr *)(this_))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((Stub_SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&Ext_SCNamePortableSetNamePageType_vftable);
    DAT_121a3824 = (int)(puVar2);
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_106dfb80(puVar2);
  thunk_FUN_106dfcc0(&DAT_121a12a8,&DAT_121a12b0);
  thunk_FUN_106dfcc0(&DAT_121a384c,&DAT_121a3840);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108f8e10; body size 144 bytes.
#line 1 "ENTRY_108f8e10"

void __fastcall FUN_108f8e10(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116439d0);
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


// Reference entry 108f8f70; body size 68 bytes.
#line 1 "ENTRY_108f8f70"

undefined4 * __thiscall Recovered_Bulk::FUN_108f8f70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108f9000; body size 68 bytes.
#line 1 "ENTRY_108f9000"

undefined4 * __thiscall Recovered_Bulk::FUN_108f9000(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108f90a0; body size 168 bytes.
#line 1 "ENTRY_108f90a0"

int __thiscall Recovered_Bulk::FUN_108f90a0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11643a00);
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


// Reference entry 108f9660; body size 168 bytes.
#line 1 "ENTRY_108f9660"

undefined4 * __thiscall Recovered_Bulk::FUN_108f9660(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11643da7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNamePortableSetNamePage_vftable);
    puVar1[4] = (uint)&Ext_SCNamePortableSetNamePage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNamePortableSetNamePage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNamePortableSetNamePage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108f9740; body size 235 bytes.
#line 1 "ENTRY_108f9740"

undefined4 * __thiscall Recovered_Bulk::FUN_108f9740(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11643e26);
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
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    thunk_FUN_10eaafe0(puVar1 + 0x3a);
    *puVar1 = (undefined4)((uint)&Ext_SCNamePortableWizard_vftable);
    puVar1[4] = (uint)&Ext_SCNamePortableWizard_vftable;
    puVar1[0x23] = (uint)&Ext_SCNamePortableWizard_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNamePortableWizard_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108fab30; body size 133 bytes.
#line 1 "ENTRY_108fab30"

undefined1 FUN_108fab30(void)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11644155);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)(local_14))->int_allocRep("timeout");
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(thunk_FUN_10dfd7b0(local_14));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  uVar1 = (undefined1)(thunk_FUN_10df10f0(uVar3));
  thunk_FUN_10def0d0(uVar2);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)(local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 108fb1e0; body size 248 bytes.
#line 1 "ENTRY_108fb1e0"

int * __thiscall Recovered_Bulk::FUN_108fb1e0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164436d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  piVar4 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2));
  }
  local_8 = (undefined4)(0);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)*param_1);
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(0);
  }
  else {
    ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep("SCINetstartScanListEntry");
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
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  }
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 108fb390; body size 242 bytes.
#line 1 "ENTRY_108fb390"

int * __thiscall Recovered_Bulk::FUN_108fb390(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116443bd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar4 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2));
  }
  local_8 = (undefined4)(0);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)*param_1);
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(0);
  }
  else {
    ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep("SCINetstartScanListEntry");
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
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  }
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 108fb4c0; body size 188 bytes.
#line 1 "ENTRY_108fb4c0"

int * __thiscall Recovered_Bulk::FUN_108fb4c0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11644405);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (int *)(param_1);
  if (param_2 == (undefined4 *)0x0) {
    piVar4 = (int *)((int *)*param_1);
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))(uVar3);
    }
    *param_1 = (int)(0);
  }
  else {
    ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep("SCINetstartScanListEntry");
    local_8 = (undefined4)(0);
    piVar4 = (int *)((int *)(**(code **)*puVar2)(&local_14,&param_2));
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
    local_8 = (undefined4)(3);
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 108fb9a0; body size 180 bytes.
#line 1 "ENTRY_108fb9a0"

undefined4 * __thiscall Recovered_Bulk::FUN_108fb9a0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164453e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108fbf90; body size 129 bytes.
#line 1 "ENTRY_108fbf90"

undefined4 * __thiscall Recovered_Bulk::FUN_108fbf90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116446dd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNetworkCredentialsGetScanListPage_vftable);
  param_1[4] = (uint)&Ext_SCNetworkCredentialsGetScanListPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNetworkCredentialsGetScanListPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNetworkCredentialsGetScanListPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108fc040; body size 194 bytes.
#line 1 "ENTRY_108fc040"

undefined4 * __thiscall Recovered_Bulk::FUN_108fc040(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164473e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCNetworkCredentialsGetScanListPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCNetworkCredentialsGetScanListPageType_vftable);
  DAT_121a3870 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108fc3e0; body size 233 bytes.
#line 1 "ENTRY_108fc3e0"

undefined4 * __thiscall Recovered_Bulk::FUN_108fc3e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11644867);
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
  *param_1 = (undefined4)((uint)&Ext_SCNetworkCredentialsWizard_vftable);
  param_1[4] = (uint)&Ext_SCNetworkCredentialsWizard_vftable;
  param_1[0x23] = (uint)&Ext_SCNetworkCredentialsWizard_vftable;
  param_1[0x2a] = (uint)&Ext_SCNetworkCredentialsWizard_vftable;
  *(undefined2 *)(param_1 + 0x46) = 0;
  *(undefined1 *)((int)param_1 + 0x11a) = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108fcb40; body size 76 bytes.
#line 1 "ENTRY_108fcb40"

void __fastcall FUN_108fcb40(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11644a40);
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


// Reference entry 108fcbb0; body size 68 bytes.
#line 1 "ENTRY_108fcbb0"

void __fastcall FUN_108fcbb0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11644a70);
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


// Reference entry 108fcc90; body size 135 bytes.
#line 1 "ENTRY_108fcc90"

void __fastcall FUN_108fcc90(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11644aa0);
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
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 108fce00; body size 228 bytes.
#line 1 "ENTRY_108fce00"

void __fastcall FUN_108fce00(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11644ad0);
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


// Reference entry 108fd0c0; body size 68 bytes.
#line 1 "ENTRY_108fd0c0"

undefined4 * __thiscall Recovered_Bulk::FUN_108fd0c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108fd1e0; body size 68 bytes.
#line 1 "ENTRY_108fd1e0"

undefined4 * __thiscall Recovered_Bulk::FUN_108fd1e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108fd280; body size 159 bytes.
#line 1 "ENTRY_108fd280"

undefined4 * __thiscall Recovered_Bulk::FUN_108fd280(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11644b00);
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
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xec);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 108fd390; body size 68 bytes.
#line 1 "ENTRY_108fd390"

undefined4 * __thiscall Recovered_Bulk::FUN_108fd390(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108fd430; body size 68 bytes.
#line 1 "ENTRY_108fd430"

undefined4 * __thiscall Recovered_Bulk::FUN_108fd430(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108fd4d0; body size 252 bytes.
#line 1 "ENTRY_108fd4d0"

int __thiscall Recovered_Bulk::FUN_108fd4d0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11644b30);
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


// Reference entry 108fd860; body size 87 bytes.
#line 1 "ENTRY_108fd860"

void * FUN_108fd860(uint param_1)

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


// Reference entry 108fd8d0; body size 173 bytes.
#line 1 "ENTRY_108fd8d0"

undefined4 __stdcall FUN_108fd8d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack_2c;
  SCStr *pSStack_28;
  uint uStack_24;
  undefined4 local_1c;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11644e15);
  local_10 = (void *)(ExceptionList);
  uStack_24 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSStack_28 = (SCStr *)((SCStr *)&local_18);
  uStack_2c = (undefined4)(0x108fd907);
  thunk_FUN_10cf34e0();
  pSStack_28 = (SCStr *)(local_14);
  local_8 = (undefined4)(0);
  uStack_2c = (undefined4)(0x108fd919);
  thunk_FUN_10c98c80();
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    pSStack_28 = (SCStr *)((SCStr *)0x108fd929);
    (**(code **)(*local_18 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  pSStack_28 = (SCStr *)((SCStr *)0x108fd938);
  iVar1 = (int)(thunk_FUN_10eac8c0());
  local_1c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_1c + 1)) << 8 | (uint)(iVar1 == 2)));
  pSStack_28 = (SCStr *)((SCStr *)local_1c);
  ((Stub_SCStr *)((SCStr *)&uStack_2c))->SCStr(local_14);
  createSCINetstartGetScanListOp(param_1);
  local_8 = (undefined4)(4);
  pSStack_28 = (SCStr *)((SCStr *)0x108fd969);
  ((Stub_SCStr *)(local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 108fd9b0; body size 168 bytes.
#line 1 "ENTRY_108fd9b0"

undefined4 * __thiscall Recovered_Bulk::FUN_108fd9b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11644e57);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkCredentialsCustomNetworkPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkCredentialsCustomNetworkPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkCredentialsCustomNetworkPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkCredentialsCustomNetworkPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108fda90; body size 195 bytes.
#line 1 "ENTRY_108fda90"

undefined4 * __thiscall Recovered_Bulk::FUN_108fda90(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11644eaf);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xec));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkCredentialsGetScanListPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkCredentialsGetScanListPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkCredentialsGetScanListPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkCredentialsGetScanListPage_vftable;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    *(undefined1 *)(puVar1 + 0x3a) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108fdb90; body size 168 bytes.
#line 1 "ENTRY_108fdb90"

undefined4 * __thiscall Recovered_Bulk::FUN_108fdb90(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11644ef7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkCredentialsNetworkSelectionPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkCredentialsNetworkSelectionPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkCredentialsNetworkSelectionPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkCredentialsNetworkSelectionPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108fdc70; body size 168 bytes.
#line 1 "ENTRY_108fdc70"

undefined4 * __thiscall Recovered_Bulk::FUN_108fdc70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11644f47);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkCredentialsPasswordEntryPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkCredentialsPasswordEntryPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkCredentialsPasswordEntryPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkCredentialsPasswordEntryPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108fdd50; body size 288 bytes.
#line 1 "ENTRY_108fdd50"

undefined4 * __thiscall Recovered_Bulk::FUN_108fdd50(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11644fe2);
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
    *puVar2 = (undefined4)((uint)&Ext_SCNetworkCredentialsWizard_vftable);
    puVar2[4] = (uint)&Ext_SCNetworkCredentialsWizard_vftable;
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkCredentialsWizard_vftable);
    puVar2[0x2a] = (uint)&Ext_SCNetworkCredentialsWizard_vftable;
    *(undefined2 *)(puVar2 + 0x46) = 0;
    *(undefined1 *)((int)puVar2 + 0x11a) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 108ffda0; body size 488 bytes.
#line 1 "ENTRY_108ffda0"

undefined4 __thiscall Recovered_Bulk::FUN_108ffda0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
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
  puStack_70 = (undefined1 *)(LAB_11645485);
  local_74 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)local_68);
  ExceptionList = (void *)(&local_74);
  local_8 = (undefined4)(DAT_121a3870);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a387c);
  local_6c = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  *(unsigned char *)((char *)&local_6c + 0) = 1;
  if ((*(char *)(param_1 + 0x119) == '\0') || (*(char *)(param_1 + 0x118) == '\0')) {
    uVar5 = (undefined4)(0);
  }
  else {
    uVar5 = (undefined4)(1);
  }
  local_8 = (undefined4)(DAT_121a3874);
  thunk_FUN_105f5920(&local_8);
  if ((*(char *)(param_1 + 0x119) == '\0') || (*(char *)(param_1 + 0x11a) != '\0')) {
    uVar3 = (undefined4)(0);
  }
  else {
    uVar3 = (undefined4)(1);
  }
  local_28 = (undefined **)((uint)&Ext_SCConditionalElementTree_vftable);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(3)));
  piVar4 = (int *)((int *)thunk_FUN_106190a0(uVar3,local_48));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar5,local_68,uVar2));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0x10))(local_94));
  uVar5 = (undefined4)((**(code **)(*piVar4 + 4))());
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
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar7))) goto LAB_108fff2d;
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
LAB_108fff2d:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar6,uVar2);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&Ext_SCConditionalElementTreeNoAppendInterface_vftable);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_74);
  return (undefined4)(param_2);
}


// Reference entry 109040e0; body size 288 bytes.
#line 1 "ENTRY_109040e0"

void FUN_109040e0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11645df5);
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
  ((Stub_SCStr *)(local_14))->int_allocRep("forward");
  local_8 = (undefined4)(1);
  uVar2 = (undefined4)(thunk_FUN_10df6f00(local_14));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar3 + 0x11a) = 1;
    uVar2 = (undefined4)(thunk_FUN_10eb9190(&stack0x00000004,"network"));
    local_8 = (undefined4)(4);
    thunk_FUN_10eb41b0(uVar2);
    thunk_FUN_10ead960(uVar2);
    local_8 = (undefined4)(5);
    ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 109050c0; body size 479 bytes.
#line 1 "ENTRY_109050c0"

void FUN_109050c0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  SCStr *this_;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116460d5);
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
  ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("forward");
  local_8 = (undefined4)(1);
  uVar2 = (undefined4)(thunk_FUN_10df6f00(&stack0x00000004));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 == '\0') {
    uVar2 = (undefined4)(thunk_FUN_10dfbbe0());
    local_8 = (undefined4)(4);
    cVar1 = (char)(thunk_FUN_10def450(uVar2));
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_10def0d0();
    if (cVar1 == '\0') {
      ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("myNetwork");
      local_8 = (undefined4)(7);
      uVar2 = (undefined4)(thunk_FUN_10df6f00(&stack0x00000004));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
      cVar1 = (char)(thunk_FUN_10def450(uVar2));
      thunk_FUN_10def0d0();
      local_8 = (undefined4)(9);
      ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_release();
      local_8 = (undefined4)(0xffffffff);
      if (cVar1 == '\0') {
        ExceptionList = (void *)(local_10);
        return;
      }
      ((Stub_SCStr *)(local_14))->int_allocRep("networkCredentials-networkNotFound");
      local_8 = (undefined4)(10);
      thunk_FUN_10eba7e0(local_14);
      local_8 = (undefined4)(0xb);
      this_ = (SCStr *)(local_14);
    }
    else {
      uVar2 = (undefined4)(thunk_FUN_10eb9590(&stack0x00000004,"ssidPicker"));
      local_8 = (undefined4)(5);
      thunk_FUN_10eb41b0(uVar2);
      thunk_FUN_10ead960(uVar2);
      local_8 = (undefined4)(6);
      this_ = (SCStr *)((SCStr *)&stack0x00000004);
    }
    ((Stub_SCStr *)(this_))->int_release();
    ExceptionList = (void *)(local_10);
    return;
  }
  iVar3 = (int)(thunk_FUN_10eb41b0());
  *(undefined1 *)(iVar3 + 0x11a) = 0;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10905320; body size 238 bytes.
#line 1 "ENTRY_10905320"

void FUN_10905320(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164612d);
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
  uVar2 = (undefined4)(thunk_FUN_10dfbbe0());
  local_8 = (undefined4)(1);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(thunk_FUN_10eb9190(&stack0x00000004,"password"));
    local_8 = (undefined4)(2);
    thunk_FUN_10eb41b0(uVar2);
    thunk_FUN_10ead930(uVar2);
    local_8 = (undefined4)(3);
    ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10906030; body size 213 bytes.
#line 1 "ENTRY_10906030"

undefined4 * __thiscall Recovered_Bulk::FUN_10906030(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116465b0);
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
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10906140; body size 213 bytes.
#line 1 "ENTRY_10906140"

undefined4 * __thiscall Recovered_Bulk::FUN_10906140(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11646610);
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
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10906650; body size 213 bytes.
#line 1 "ENTRY_10906650"

undefined4 * __thiscall Recovered_Bulk::FUN_10906650(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11646790);
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
  *param_1 = (undefined4)((uint)&Ext_SCNetworkCredentialPropagationNetworkCredentialsSubwiz_vftable);
  param_1[4] = (uint)&Ext_SCNetworkCredentialPropagationNetworkCredentialsSubwiz_vftable;
  param_1[0x23] = (uint)&Ext_SCNetworkCredentialPropagationNetworkCredentialsSubwiz_vftable;
  param_1[0x2a] = (uint)&Ext_SCNetworkCredentialPropagationNetworkCredentialsSubwiz_vftable;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10906b00; body size 213 bytes.
#line 1 "ENTRY_10906b00"

undefined4 * __thiscall Recovered_Bulk::FUN_10906b00(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11646910);
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
  *param_1 = (undefined4)((uint)&Ext_SCNetworkCredentialPropagationSecureAuthenticationSubwiz_vftable);
  param_1[4] = (uint)&Ext_SCNetworkCredentialPropagationSecureAuthenticationSubwiz_vftable;
  param_1[0x23] = (uint)&Ext_SCNetworkCredentialPropagationSecureAuthenticationSubwiz_vftable;
  param_1[0x2a] = (uint)&Ext_SCNetworkCredentialPropagationSecureAuthenticationSubwiz_vftable;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10907260; body size 244 bytes.
#line 1 "ENTRY_10907260"

undefined4 * __thiscall Recovered_Bulk::FUN_10907260(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11646b57);
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
  *param_1 = (undefined4)((uint)&Ext_SCNetworkCredentialPropagationWizard_vftable);
  param_1[4] = (uint)&Ext_SCNetworkCredentialPropagationWizard_vftable;
  param_1[0x23] = (uint)&Ext_SCNetworkCredentialPropagationWizard_vftable;
  param_1[0x2a] = (uint)&Ext_SCNetworkCredentialPropagationWizard_vftable;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10907f60; body size 123 bytes.
#line 1 "ENTRY_10907f60"

void __fastcall FUN_10907f60(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11646f00);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = 0;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0(uVar1);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 109082f0; body size 228 bytes.
#line 1 "ENTRY_109082f0"

void __fastcall FUN_109082f0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11646f30);
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


// Reference entry 10908760; body size 68 bytes.
#line 1 "ENTRY_10908760"

undefined4 * __thiscall Recovered_Bulk::FUN_10908760(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 109089d0; body size 68 bytes.
#line 1 "ENTRY_109089d0"

undefined4 * __thiscall Recovered_Bulk::FUN_109089d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10908a30; body size 68 bytes.
#line 1 "ENTRY_10908a30"

undefined4 * __thiscall Recovered_Bulk::FUN_10908a30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10908a90; body size 68 bytes.
#line 1 "ENTRY_10908a90"

undefined4 * __thiscall Recovered_Bulk::FUN_10908a90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10908b30; body size 147 bytes.
#line 1 "ENTRY_10908b30"

undefined4 * __thiscall Recovered_Bulk::FUN_10908b30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11646f60);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = 0;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0(uVar1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10908c30; body size 68 bytes.
#line 1 "ENTRY_10908c30"

undefined4 * __thiscall Recovered_Bulk::FUN_10908c30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10908cd0; body size 68 bytes.
#line 1 "ENTRY_10908cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10908cd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10908d70; body size 68 bytes.
#line 1 "ENTRY_10908d70"

undefined4 * __thiscall Recovered_Bulk::FUN_10908d70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10908e10; body size 68 bytes.
#line 1 "ENTRY_10908e10"

undefined4 * __thiscall Recovered_Bulk::FUN_10908e10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10908eb0; body size 68 bytes.
#line 1 "ENTRY_10908eb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10908eb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10908f50; body size 68 bytes.
#line 1 "ENTRY_10908f50"

undefined4 * __thiscall Recovered_Bulk::FUN_10908f50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10908ff0; body size 68 bytes.
#line 1 "ENTRY_10908ff0"

undefined4 * __thiscall Recovered_Bulk::FUN_10908ff0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10909090; body size 68 bytes.
#line 1 "ENTRY_10909090"

undefined4 * __thiscall Recovered_Bulk::FUN_10909090(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10909130; body size 68 bytes.
#line 1 "ENTRY_10909130"

undefined4 * __thiscall Recovered_Bulk::FUN_10909130(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 109091d0; body size 252 bytes.
#line 1 "ENTRY_109091d0"

int __thiscall Recovered_Bulk::FUN_109091d0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11646f90);
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
    thunk_FUN_1148a50e(param_1,0x124);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10909430; body size 419 bytes.
#line 1 "ENTRY_10909430"

bool FUN_10909430(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  SCLibrary *this_;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puStack_54;
  int **ppiStack_50;
  uint uStack_4c;
  undefined4 *local_3c;
  undefined4 *local_38;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20 [2];
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11647295);
  local_10 = (void *)(ExceptionList);
  uStack_4c = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ppiStack_50 = (int **)(local_20);
  puStack_54 = (undefined4 *)((undefined4 *)0x10909464);
  this_ = (SCLibrary *)(((Stub_SCLibrary *)(0))->getSingleton());
  puStack_54 = (undefined4 *)((undefined4 *)0x1090946b);
  piVar6 = (int *)((int *)((Stub_SCLibrary *)(this_))->getSCHousehold());
  local_30 = (int *)((int *)*piVar6);
  local_8 = (undefined4)(0);
  *piVar6 = (int)(0);
  if (local_30 == (int *)0x0) {
    local_2c = (int *)((int *)0x0);
  }
  else {
    puStack_54 = (undefined4 *)((undefined4 *)0x10909488);
    local_2c = (int *)((int *)(**(code **)(*local_30 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_20[0] != (int *)0x0) {
    puStack_54 = (undefined4 *)((undefined4 *)0x109094a4);
    (**(code **)(*local_20[0] + 8))();
  }
  puStack_54 = (undefined4 *)((undefined4 *)0x9);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_1037f130(&local_3c);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  puVar8 = (undefined4 *)(local_3c);
  if (local_3c != (undefined4 *)(local_38)) {
    do {
      piVar6 = (int *)((int *)puVar8[1]);
      piVar1 = (int *)((int *)*puVar8);
      local_28 = (int *)(piVar1);
      local_24 = (int *)(piVar6);
      if (piVar6 != (int *)0x0) {
        puStack_54 = (undefined4 *)((undefined4 *)0x109094db);
        (**(code **)(*piVar6 + 4))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      puStack_54 = (undefined4 *)((undefined4 *)0x109094e8);
      cVar5 = (char)((**(code **)(*piVar1 + 0x1c))());
      if (cVar5 == '\0') {
        puStack_54 = (undefined4 *)(&local_18);
        uVar7 = (undefined4)(thunk_FUN_10320fd0());
        puStack_54 = (undefined4 *)((undefined4 *)0x0);
        *(unsigned char *)((char *)&local_8 + 0) = 6;
        thunk_FUN_10c663b0(&local_14,uVar7);
        *(unsigned char *)((char *)&local_8 + 0) = 9;
        puStack_54 = (undefined4 *)((undefined4 *)0x10909516);
        ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
        local_18 = (undefined4)(0);
        *(unsigned char *)((char *)&local_8 + 0) = 8;
        ((Stub_SCStr *)((SCStr *)&puStack_54))->SCStr((SCStr *)&local_14);
        thunk_FUN_10ead300();
        *(unsigned char *)((char *)&local_8 + 0) = 10;
        puStack_54 = (undefined4 *)((undefined4 *)0x10909547);
        ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
        local_14 = (undefined4)(0);
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0xb;
      if (piVar6 != (int *)0x0) {
        local_28 = (int *)((int *)0x0);
        local_24 = (int *)((int *)0x0);
        puStack_54 = (undefined4 *)((undefined4 *)0x1090956b);
        (**(code **)(*piVar6 + 8))();
      }
      puVar8 = (undefined4 *)(puVar8 + 2);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    } while (puVar8 != (undefined4 *)(local_38));
  }
  puStack_54 = (undefined4 *)((undefined4 *)0x10909589);
  piVar6 = (int *)((int *)thunk_FUN_10eace90());
  iVar2 = (int)(piVar6[1]);
  iVar3 = (int)(*piVar6);
  iVar4 = (int)(iVar2 - iVar3 >> 0x1f);
  puStack_54 = (undefined4 *)((undefined4 *)0x109095aa);
  thunk_FUN_101f4a30();
  local_8 = (undefined4)(0xc);
  if (local_2c != (int *)0x0) {
    puStack_54 = (undefined4 *)((undefined4 *)0x109095bf);
    (**(code **)(*local_2c + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (bool)((iVar2 - iVar3) / 0x4c + iVar4 == iVar4);
}


// Reference entry 10909d50; body size 168 bytes.
#line 1 "ENTRY_10909d50"

undefined4 * __thiscall Recovered_Bulk::FUN_10909d50(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11647437);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkCredentialPropagationAuthErrorPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkCredentialPropagationAuthErrorPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkCredentialPropagationAuthErrorPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkCredentialPropagationAuthErrorPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10909e30; body size 185 bytes.
#line 1 "ENTRY_10909e30"

undefined4 * __thiscall Recovered_Bulk::FUN_10909e30(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11647487);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkCredentialPropagationChangeNetworkPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkCredentialPropagationChangeNetworkPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkCredentialPropagationChangeNetworkPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkCredentialPropagationChangeNetworkPage_vftable;
    puVar1[0x38] = 0;
    *(undefined1 *)(puVar1 + 0x39) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10909f20; body size 168 bytes.
#line 1 "ENTRY_10909f20"

undefined4 * __thiscall Recovered_Bulk::FUN_10909f20(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116474d7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkCredentialPropagationConnectionErrorPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkCredentialPropagationConnectionErrorPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkCredentialPropagationConnectionErrorPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkCredentialPropagationConnectionErrorPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1090a000; body size 276 bytes.
#line 1 "ENTRY_1090a000"

undefined4 * __thiscall Recovered_Bulk::FUN_1090a000(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_11647552);
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
        uVar7 = (undefined4)(thunk_FUN_108fb850(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_108fc3e0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&Ext_SCNetworkCredentialPropagationNetworkCredentialsSubwiz_vftable);
    puVar2[4] = (uint)&Ext_SCNetworkCredentialPropagationNetworkCredentialsSubwiz_vftable;
    puVar2[0x23] = (uint)&Ext_SCNetworkCredentialPropagationNetworkCredentialsSubwiz_vftable;
    puVar2[0x2a] = (uint)&Ext_SCNetworkCredentialPropagationNetworkCredentialsSubwiz_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1090a160; body size 168 bytes.
#line 1 "ENTRY_1090a160"

undefined4 * __thiscall Recovered_Bulk::FUN_1090a160(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116475a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkCredentialPropagationPlayerConnectedPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkCredentialPropagationPlayerConnectedPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkCredentialPropagationPlayerConnectedPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkCredentialPropagationPlayerConnectedPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1090a240; body size 168 bytes.
#line 1 "ENTRY_1090a240"

undefined4 * __thiscall Recovered_Bulk::FUN_1090a240(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116475f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkCredentialPropagationRouterErrorPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkCredentialPropagationRouterErrorPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkCredentialPropagationRouterErrorPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkCredentialPropagationRouterErrorPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1090a320; body size 276 bytes.
#line 1 "ENTRY_1090a320"

undefined4 * __thiscall Recovered_Bulk::FUN_1090a320(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_11647672);
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
    *puVar2 = (undefined4)((uint)&Ext_SCNetworkCredentialPropagationSecureAuthenticationSubwiz_vftable);
    puVar2[4] = (uint)&Ext_SCNetworkCredentialPropagationSecureAuthenticationSubwiz_vftable;
    puVar2[0x23] = (uint)&Ext_SCNetworkCredentialPropagationSecureAuthenticationSubwiz_vftable;
    puVar2[0x2a] = (uint)&Ext_SCNetworkCredentialPropagationSecureAuthenticationSubwiz_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1090a480; body size 168 bytes.
#line 1 "ENTRY_1090a480"

undefined4 * __thiscall Recovered_Bulk::FUN_1090a480(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116476c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkCredentialPropagationSsidMismatchErrorPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkCredentialPropagationSsidMismatchErrorPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkCredentialPropagationSsidMismatchErrorPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkCredentialPropagationSsidMismatchErrorPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1090a560; body size 168 bytes.
#line 1 "ENTRY_1090a560"

undefined4 * __thiscall Recovered_Bulk::FUN_1090a560(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11647717);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkCredentialPropagationSystemErrorPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkCredentialPropagationSystemErrorPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkCredentialPropagationSystemErrorPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkCredentialPropagationSystemErrorPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1090a640; body size 188 bytes.
#line 1 "ENTRY_1090a640"

undefined4 * __thiscall Recovered_Bulk::FUN_1090a640(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11647767);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkCredentialPropagationUpdatePlayerPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkCredentialPropagationUpdatePlayerPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkCredentialPropagationUpdatePlayerPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkCredentialPropagationUpdatePlayerPage_vftable;
    puVar1[0x38] = 0;
    puVar1[0x39] = 7;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1090a730; body size 175 bytes.
#line 1 "ENTRY_1090a730"

undefined4 * __thiscall Recovered_Bulk::FUN_1090a730(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116477b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkCredentialPropagationUpdateSystemPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkCredentialPropagationUpdateSystemPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkCredentialPropagationUpdateSystemPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkCredentialPropagationUpdateSystemPage_vftable;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1090a810; body size 299 bytes.
#line 1 "ENTRY_1090a810"

undefined4 * __thiscall Recovered_Bulk::FUN_1090a810(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11647852);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x124));
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
    *puVar2 = (undefined4)((uint)&Ext_SCNetworkCredentialPropagationWizard_vftable);
    puVar2[4] = (uint)&Ext_SCNetworkCredentialPropagationWizard_vftable;
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkCredentialPropagationWizard_vftable);
    puVar2[0x2a] = (uint)&Ext_SCNetworkCredentialPropagationWizard_vftable;
    puVar2[0x46] = 0;
    *(undefined1 *)(puVar2 + 0x47) = 0;
    puVar2[0x48] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1090e340; body size 178 bytes.
#line 1 "ENTRY_1090e340"

undefined4 __stdcall FUN_1090e340(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 local_20 [8];
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116480c5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10cf34e0(&local_18));
  local_8 = (undefined4)(0);
  thunk_FUN_10c5f1d0(*puVar1);
  thunk_FUN_10eb41c0();
  uVar2 = (undefined4)(thunk_FUN_10eacda0(&local_14));
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  thunk_FUN_10ed7060(param_1,local_20,uVar2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(3);
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 1090e8e0; body size 329 bytes.
#line 1 "ENTRY_1090e8e0"

SCStr * __stdcall FUN_1090e8e0(SCStr *param_1)

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
  puStack_c = (undefined1 *)(LAB_116481bd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSVar3 = (SCLibrary *)(((Stub_SCLibrary *)(0))->getSingleton());
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
    ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCIWifiDelegate");
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
    ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
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
      goto LAB_1090ea0d;
    }
  }
  ((Stub_SCStr *)(param_1))->int_allocRep("");
  local_8 = (undefined4)(0xb);
  if (piVar6 == (int *)0x0) {
    ExceptionList = (void *)(local_10);
    return (SCStr *)(param_1);
  }
LAB_1090ea0d:
  (**(code **)(*piVar6 + 8))();
  ExceptionList = (void *)(local_10);
  return (SCStr *)(param_1);
}


// Reference entry 1090ea80; body size 345 bytes.
#line 1 "ENTRY_1090ea80"

undefined4 __stdcall FUN_1090ea80(undefined4 param_1)

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
  puStack_c = (undefined1 *)(LAB_11648205);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a38f4);
  thunk_FUN_105f5920(&local_14);
  local_34 = (undefined **)((uint)&Ext_SCConditionalElementTree_vftable);
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_1090eb8f;
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
LAB_1090eb8f:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar2);
    iStack_2c = (int)(0);
    uStack_28 = (undefined4)(0);
    iStack_24 = (int)(0);
  }
  local_34 = (undefined **)((uint)&Ext_SCConditionalElementTreeNoAppendInterface_vftable);
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 1090ec30; body size 414 bytes.
#line 1 "ENTRY_1090ec30"

undefined4 __stdcall FUN_1090ec30(undefined4 param_1)

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
  puStack_c = (undefined1 *)(LAB_1164824d);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a38f4);
  thunk_FUN_105f5920(&local_14);
  local_8 = (undefined4)(0);
  local_14 = (undefined4)(0);
  thunk_FUN_105f5920(&local_14);
  local_34 = (undefined **)((uint)&Ext_SCConditionalElementTree_vftable);
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
  uVar3 = (undefined1)(thunk_FUN_10cf5140(local_54));
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar8))) goto LAB_1090ed7c;
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
LAB_1090ed7c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar7,uVar4);
    iStack_2c = (int)(0);
    uStack_28 = (undefined4)(0);
    iStack_24 = (int)(0);
  }
  local_34 = (undefined **)((uint)&Ext_SCConditionalElementTreeNoAppendInterface_vftable);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 1090ee40; body size 487 bytes.
#line 1 "ENTRY_1090ee40"

undefined4 __stdcall FUN_1090ee40(undefined4 param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
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
  puStack_70 = (undefined1 *)(LAB_116482a5);
  local_74 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)local_68);
  ExceptionList = (void *)(&local_74);
  local_8 = (undefined4)(DAT_121a38c8);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a38d8);
  local_6c = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  *(unsigned char *)((char *)&local_6c + 0) = 1;
  local_8 = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&Ext_SCConditionalElementTree_vftable);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(3)));
  thunk_FUN_10eb41c0(uVar4);
  ppuVar1 = (undefined **)(local_28);
  uVar3 = (undefined1)(thunk_FUN_10cf5140(local_48));
  piVar5 = (int *)((int *)(*(code *)ppuVar1[2])(uVar3));
  iVar6 = (int)(thunk_FUN_10ebc1e0());
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(*(char *)(iVar6 + 0x118) == '\0',local_68));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x10))(local_94));
  uVar7 = (undefined4)((**(code **)(*piVar5 + 4))());
  thunk_FUN_105f5a00(uVar7);
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
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar8))) goto LAB_1090efcc;
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
LAB_1090efcc:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar6,uVar4);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&Ext_SCConditionalElementTreeNoAppendInterface_vftable);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_74);
  return (undefined4)(param_1);
}


// Reference entry 1090f0c0; body size 70 bytes.
#line 1 "ENTRY_1090f0c0"

undefined4 FUN_1090f0c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eac8c0());
  if (iVar1 != 1) {
    iVar1 = (int)(thunk_FUN_10eac8c0());
    if (iVar1 != 2) {
      thunk_FUN_10eace00(param_1);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10eacda0(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10914450; body size 184 bytes.
#line 1 "ENTRY_10914450"

void FUN_10914450(void)

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
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x10c);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead150(iVar1);
  iVar1 = (int)(thunk_FUN_10ebc1d0());
  *(undefined1 *)(iVar1 + 0x118) = 1;
  thunk_FUN_10ee48c0();
  thunk_FUN_10eeb270();
  return;
}


// Reference entry 10914540; body size 187 bytes.
#line 1 "ENTRY_10914540"

void FUN_10914540(void)

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
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0x10c);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10ead150(iVar1);
  iVar1 = (int)(thunk_FUN_10ebc1d0());
  *(undefined1 *)(iVar1 + 0x119) = 1;
  iVar1 = (int)(thunk_FUN_10ebc1d0());
  *(undefined1 *)(iVar1 + 0x11b) = 1;
  return;
}


// Reference entry 10914630; body size 114 bytes.
#line 1 "ENTRY_10914630"

void FUN_10914630(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11648e9d);
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


// Reference entry 10914b80; body size 644 bytes.
#line 1 "ENTRY_10914b80"

void FUN_10914b80(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11648fd5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebbab0(8);
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(int *)(iVar3 + 0x120) = *(int *)(iVar3 + 0x120) + 1;
    ExceptionList = (void *)(local_10);
    return;
  }
  ((Stub_SCStr *)(local_14))->int_allocRep("differentProduct");
  local_8 = (undefined4)(1);
  uVar2 = (undefined4)(thunk_FUN_10df6f00(local_14));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar3 + 0x119) = 1;
    thunk_FUN_10ee48c0();
    cVar1 = (char)(thunk_FUN_10ee7f70());
    if (cVar1 != '\0') {
      uVar2 = (undefined4)(0x80000004);
      thunk_FUN_10ee48c0(0x80000004);
      thunk_FUN_10ee3000(uVar2);
      ExceptionList = (void *)(local_10);
      return;
    }
    uVar2 = (undefined4)(thunk_FUN_10df9b50());
    local_8 = (undefined4)(4);
    thunk_FUN_10ebb790(uVar2);
    thunk_FUN_10def0d0();
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10df95e0());
  local_8 = (undefined4)(5);
  cVar1 = (char)(thunk_FUN_10def490(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(0);
    thunk_FUN_10ee48c0(0);
    thunk_FUN_10ee41a0(uVar2);
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10df99d0());
  local_8 = (undefined4)(6);
  cVar1 = (char)(thunk_FUN_10def490(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  if (cVar1 != '\0') {
    thunk_FUN_10eb41b0();
    thunk_FUN_10eac670();
    ExceptionList = (void *)(local_10);
    return;
  }
  ((Stub_SCStr *)((SCStr *)&param_1))->int_allocRep("troubleshoot");
  local_8 = (undefined4)(7);
  uVar2 = (undefined4)(thunk_FUN_10df6f00(&param_1));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(9);
  ((Stub_SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (undefined4)(0);
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar3 + 0x118) = 0;
    thunk_FUN_10eb41b0();
    thunk_FUN_10eac590();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10914eb0; body size 131 bytes.
#line 1 "ENTRY_10914eb0"

void FUN_10914eb0(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164901d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebbab0(8);
    thunk_FUN_10ebb8e0("minWait",3000);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10914f60; body size 780 bytes.
#line 1 "ENTRY_10914f60"

void FUN_10914f60(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116490ad);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebbab0(0x4008);
    ExceptionList = (void *)(local_10);
    return;
  }
  ((Stub_SCStr *)(local_14))->int_allocRep("differentProduct");
  local_8 = (undefined4)(1);
  uVar2 = (undefined4)(thunk_FUN_10df6f00(local_14));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar3 + 0x119) = 1;
    thunk_FUN_10ee48c0();
    cVar1 = (char)(thunk_FUN_10ee7f70());
    if (cVar1 != '\0') {
      uVar2 = (undefined4)(0x80000004);
      thunk_FUN_10ee48c0(0x80000004);
      thunk_FUN_10ee3000(uVar2);
      ExceptionList = (void *)(local_10);
      return;
    }
    uVar2 = (undefined4)(thunk_FUN_10df9b50());
    local_8 = (undefined4)(4);
    thunk_FUN_10ebb790(uVar2);
    thunk_FUN_10def0d0();
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10df95e0());
  local_8 = (undefined4)(5);
  cVar1 = (char)(thunk_FUN_10def490(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(0);
    thunk_FUN_10ee48c0(0);
    thunk_FUN_10ee41a0(uVar2);
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10df99d0());
  local_8 = (undefined4)(6);
  cVar1 = (char)(thunk_FUN_10def490(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  if (cVar1 != '\0') {
    thunk_FUN_10eb41b0();
    thunk_FUN_10eac670();
    ExceptionList = (void *)(local_10);
    return;
  }
  ((Stub_SCStr *)(local_14))->int_allocRep("moreInfo");
  local_8 = (undefined4)(7);
  uVar2 = (undefined4)(thunk_FUN_10df6f00(local_14));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(9);
  ((Stub_SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    ((Stub_SCStr *)(local_14))->int_allocRep("joinProduct-routerError");
    local_8 = (undefined4)(10);
    thunk_FUN_10eba7e0(local_14);
    local_8 = (undefined4)(0xb);
    ((Stub_SCStr *)(local_14))->int_release();
    ExceptionList = (void *)(local_10);
    return;
  }
  ((Stub_SCStr *)((SCStr *)&param_1))->int_allocRep("done");
  local_8 = (undefined4)(0xc);
  uVar2 = (undefined4)(thunk_FUN_10df6f00(&param_1));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(0xe);
  ((Stub_SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (undefined4)(0);
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar3 + 0x118) = 0;
    thunk_FUN_10eb41b0();
    thunk_FUN_10eac590();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10915330; body size 316 bytes.
#line 1 "ENTRY_10915330"

void FUN_10915330(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164911d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10dfbb10();
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450());
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebbab0();
    ExceptionList = (void *)(local_10);
    return;
  }
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("forward");
  local_8 = (undefined4)(1);
  thunk_FUN_10df6f00();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar1 = (char)(thunk_FUN_10def450());
  thunk_FUN_10def0d0();
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    iVar2 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar2 + 0x118) = 1;
    thunk_FUN_10eb41b0();
    thunk_FUN_10cf34e0();
    local_14 = (undefined1 *)(&stack0xffffffc4);
    local_8 = (undefined4)(4);
    thunk_FUN_10c98710(&stack0xffffffc4);
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    thunk_FUN_10eb41b0();
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    thunk_FUN_10ead300();
    local_8 = (undefined4)(6);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10916fa0; body size 180 bytes.
#line 1 "ENTRY_10916fa0"

undefined4 * __thiscall Recovered_Bulk::FUN_10916fa0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116495ae);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10917720; body size 180 bytes.
#line 1 "ENTRY_10917720"

undefined4 * __thiscall Recovered_Bulk::FUN_10917720(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116498ae);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10917900; body size 180 bytes.
#line 1 "ENTRY_10917900"

undefined4 * __thiscall Recovered_Bulk::FUN_10917900(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164996e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 109179f0; body size 183 bytes.
#line 1 "ENTRY_109179f0"

undefined4 * __thiscall Recovered_Bulk::FUN_109179f0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116499ce);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  local_8 = (undefined4)(2);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((Stub_SCStr *)(this_))->endsWith("Subwiz");
  local_8 = (undefined4)(7);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10917cc0; body size 213 bytes.
#line 1 "ENTRY_10917cc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10917cc0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11649af0);
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
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10917dd0; body size 213 bytes.
#line 1 "ENTRY_10917dd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10917dd0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11649b50);
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
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10917ee0; body size 213 bytes.
#line 1 "ENTRY_10917ee0"

undefined4 * __thiscall Recovered_Bulk::FUN_10917ee0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11649bb0);
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
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10917ff0; body size 213 bytes.
#line 1 "ENTRY_10917ff0"

undefined4 * __thiscall Recovered_Bulk::FUN_10917ff0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11649c10);
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
      uVar5 = (undefined4)(thunk_FUN_109edf50(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109eeaf0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10918100; body size 70 bytes.
#line 1 "ENTRY_10918100"

undefined4 * __thiscall Recovered_Bulk::FUN_10918100(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar2 = (void *)(operator_new(0x14));
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


// Reference entry 109181c0; body size 213 bytes.
#line 1 "ENTRY_109181c0"

undefined4 * __thiscall Recovered_Bulk::FUN_109181c0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11649c70);
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
  *param_1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootAccountRequiredSubwiz_vftable);
  param_1[4] = (uint)&Ext_SCNetworkTroubleshootAccountRequiredSubwiz_vftable;
  param_1[0x23] = (uint)&Ext_SCNetworkTroubleshootAccountRequiredSubwiz_vftable;
  param_1[0x2a] = (uint)&Ext_SCNetworkTroubleshootAccountRequiredSubwiz_vftable;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 109183d0; body size 213 bytes.
#line 1 "ENTRY_109183d0"

undefined4 * __thiscall Recovered_Bulk::FUN_109183d0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11649d30);
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
  *param_1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootAppVersionCheckSubwiz_vftable);
  param_1[4] = (uint)&Ext_SCNetworkTroubleshootAppVersionCheckSubwiz_vftable;
  param_1[0x23] = (uint)&Ext_SCNetworkTroubleshootAppVersionCheckSubwiz_vftable;
  param_1[0x2a] = (uint)&Ext_SCNetworkTroubleshootAppVersionCheckSubwiz_vftable;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10918780; body size 194 bytes.
#line 1 "ENTRY_10918780"

undefined4 * __thiscall Recovered_Bulk::FUN_10918780(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11649e4e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCNetworkTroubleshootAskNotSurePage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootAskNotSurePageType_vftable);
  DAT_121a3964 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10918dc0; body size 213 bytes.
#line 1 "ENTRY_10918dc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10918dc0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_1164a030);
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
  *param_1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootDevicePermissionsSubwiz_vftable);
  param_1[4] = (uint)&Ext_SCNetworkTroubleshootDevicePermissionsSubwiz_vftable;
  param_1[0x23] = (uint)&Ext_SCNetworkTroubleshootDevicePermissionsSubwiz_vftable;
  param_1[0x2a] = (uint)&Ext_SCNetworkTroubleshootDevicePermissionsSubwiz_vftable;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10919300; body size 194 bytes.
#line 1 "ENTRY_10919300"

undefined4 * __thiscall Recovered_Bulk::FUN_10919300(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164a1ae);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCNetworkTroubleshootIntroPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootIntroPageType_vftable);
  DAT_121a394c = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 109195a0; body size 194 bytes.
#line 1 "ENTRY_109195a0"

undefined4 * __thiscall Recovered_Bulk::FUN_109195a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164a26e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCNetworkTroubleshootSuccessfulPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootSuccessfulPageType_vftable);
  DAT_121a3980 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 109196a0; body size 213 bytes.
#line 1 "ENTRY_109196a0"

undefined4 * __thiscall Recovered_Bulk::FUN_109196a0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_1164a2d0);
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
      uVar5 = (undefined4)(thunk_FUN_109edf50(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109eeaf0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootSystemIdSubwiz_vftable);
  param_1[4] = (uint)&Ext_SCNetworkTroubleshootSystemIdSubwiz_vftable;
  param_1[0x23] = (uint)&Ext_SCNetworkTroubleshootSystemIdSubwiz_vftable;
  param_1[0x2a] = (uint)&Ext_SCNetworkTroubleshootSystemIdSubwiz_vftable;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 109197b0; body size 197 bytes.
#line 1 "ENTRY_109197b0"

undefined4 * __thiscall Recovered_Bulk::FUN_109197b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164a32e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCNetworkTroubleshootSystemIdSubwiz");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  local_8 = (undefined4)(2);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((Stub_SCStr *)(this_))->endsWith("Subwiz");
  local_8 = (undefined4)(7);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootSystemIdSubwizType_vftable);
  DAT_121a395c = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10919b50; body size 224 bytes.
#line 1 "ENTRY_10919b50"

undefined4 * __thiscall Recovered_Bulk::FUN_10919b50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164a457);
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
  *param_1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootWizard_vftable);
  param_1[4] = (uint)&Ext_SCNetworkTroubleshootWizard_vftable;
  param_1[0x23] = (uint)&Ext_SCNetworkTroubleshootWizard_vftable;
  param_1[0x2a] = (uint)&Ext_SCNetworkTroubleshootWizard_vftable;
  *(undefined1 *)(param_1 + 0x46) = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1091b110; body size 135 bytes.
#line 1 "ENTRY_1091b110"

void __fastcall FUN_1091b110(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1164a9d0);
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
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1091b370; body size 228 bytes.
#line 1 "ENTRY_1091b370"

void __fastcall FUN_1091b370(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1164aa00);
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


// Reference entry 1091b950; body size 68 bytes.
#line 1 "ENTRY_1091b950"

undefined4 * __thiscall Recovered_Bulk::FUN_1091b950(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091bce0; body size 68 bytes.
#line 1 "ENTRY_1091bce0"

undefined4 * __thiscall Recovered_Bulk::FUN_1091bce0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091bd40; body size 68 bytes.
#line 1 "ENTRY_1091bd40"

undefined4 * __thiscall Recovered_Bulk::FUN_1091bd40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091bda0; body size 68 bytes.
#line 1 "ENTRY_1091bda0"

undefined4 * __thiscall Recovered_Bulk::FUN_1091bda0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091be00; body size 68 bytes.
#line 1 "ENTRY_1091be00"

undefined4 * __thiscall Recovered_Bulk::FUN_1091be00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091be60; body size 68 bytes.
#line 1 "ENTRY_1091be60"

undefined4 * __thiscall Recovered_Bulk::FUN_1091be60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091bf00; body size 68 bytes.
#line 1 "ENTRY_1091bf00"

undefined4 * __thiscall Recovered_Bulk::FUN_1091bf00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091bfa0; body size 68 bytes.
#line 1 "ENTRY_1091bfa0"

undefined4 * __thiscall Recovered_Bulk::FUN_1091bfa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091c040; body size 68 bytes.
#line 1 "ENTRY_1091c040"

undefined4 * __thiscall Recovered_Bulk::FUN_1091c040(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091c0e0; body size 68 bytes.
#line 1 "ENTRY_1091c0e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1091c0e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091c180; body size 68 bytes.
#line 1 "ENTRY_1091c180"

undefined4 * __thiscall Recovered_Bulk::FUN_1091c180(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091c220; body size 68 bytes.
#line 1 "ENTRY_1091c220"

undefined4 * __thiscall Recovered_Bulk::FUN_1091c220(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091c2c0; body size 68 bytes.
#line 1 "ENTRY_1091c2c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1091c2c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091c360; body size 68 bytes.
#line 1 "ENTRY_1091c360"

undefined4 * __thiscall Recovered_Bulk::FUN_1091c360(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091c400; body size 68 bytes.
#line 1 "ENTRY_1091c400"

undefined4 * __thiscall Recovered_Bulk::FUN_1091c400(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091c4a0; body size 68 bytes.
#line 1 "ENTRY_1091c4a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1091c4a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091c540; body size 159 bytes.
#line 1 "ENTRY_1091c540"

undefined4 * __thiscall Recovered_Bulk::FUN_1091c540(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1164aa30);
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
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1091c650; body size 68 bytes.
#line 1 "ENTRY_1091c650"

undefined4 * __thiscall Recovered_Bulk::FUN_1091c650(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091c6f0; body size 68 bytes.
#line 1 "ENTRY_1091c6f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1091c6f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091c790; body size 68 bytes.
#line 1 "ENTRY_1091c790"

undefined4 * __thiscall Recovered_Bulk::FUN_1091c790(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091c830; body size 68 bytes.
#line 1 "ENTRY_1091c830"

undefined4 * __thiscall Recovered_Bulk::FUN_1091c830(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091c8d0; body size 68 bytes.
#line 1 "ENTRY_1091c8d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1091c8d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1091c970; body size 252 bytes.
#line 1 "ENTRY_1091c970"

int __thiscall Recovered_Bulk::FUN_1091c970(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1164aa60);
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


// Reference entry 1091ceb0; body size 276 bytes.
#line 1 "ENTRY_1091ceb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1091ceb0(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_1164ade2);
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
    *puVar2 = (undefined4)((uint)&Ext_SCNetworkTroubleshootAccountRequiredSubwiz_vftable);
    puVar2[4] = (uint)&Ext_SCNetworkTroubleshootAccountRequiredSubwiz_vftable;
    puVar2[0x23] = (uint)&Ext_SCNetworkTroubleshootAccountRequiredSubwiz_vftable;
    puVar2[0x2a] = (uint)&Ext_SCNetworkTroubleshootAccountRequiredSubwiz_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1091d010; body size 276 bytes.
#line 1 "ENTRY_1091d010"

undefined4 * __thiscall Recovered_Bulk::FUN_1091d010(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_1164ae62);
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
    *puVar2 = (undefined4)((uint)&Ext_SCNetworkTroubleshootAppVersionCheckSubwiz_vftable);
    puVar2[4] = (uint)&Ext_SCNetworkTroubleshootAppVersionCheckSubwiz_vftable;
    puVar2[0x23] = (uint)&Ext_SCNetworkTroubleshootAppVersionCheckSubwiz_vftable;
    puVar2[0x2a] = (uint)&Ext_SCNetworkTroubleshootAppVersionCheckSubwiz_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1091d170; body size 175 bytes.
#line 1 "ENTRY_1091d170"

undefined4 * __thiscall Recovered_Bulk::FUN_1091d170(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164aeb7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootAppleLocalNetworkPermsPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkTroubleshootAppleLocalNetworkPermsPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkTroubleshootAppleLocalNetworkPermsPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkTroubleshootAppleLocalNetworkPermsPage_vftable;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1091d250; body size 168 bytes.
#line 1 "ENTRY_1091d250"

undefined4 * __thiscall Recovered_Bulk::FUN_1091d250(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164af07);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootAskNotSurePage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkTroubleshootAskNotSurePage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkTroubleshootAskNotSurePage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkTroubleshootAskNotSurePage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1091d330; body size 168 bytes.
#line 1 "ENTRY_1091d330"

undefined4 * __thiscall Recovered_Bulk::FUN_1091d330(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164af57);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootAskTurnOffDevicesPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkTroubleshootAskTurnOffDevicesPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkTroubleshootAskTurnOffDevicesPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkTroubleshootAskTurnOffDevicesPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1091d410; body size 168 bytes.
#line 1 "ENTRY_1091d410"

undefined4 * __thiscall Recovered_Bulk::FUN_1091d410(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164afa7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootAskTurnOffRouterPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkTroubleshootAskTurnOffRouterPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkTroubleshootAskTurnOffRouterPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkTroubleshootAskTurnOffRouterPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1091d4f0; body size 168 bytes.
#line 1 "ENTRY_1091d4f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1091d4f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164aff7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootAskWiredDevicesPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkTroubleshootAskWiredDevicesPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkTroubleshootAskWiredDevicesPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkTroubleshootAskWiredDevicesPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1091d5d0; body size 175 bytes.
#line 1 "ENTRY_1091d5d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1091d5d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164b047);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootCheckingDevicesPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkTroubleshootCheckingDevicesPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkTroubleshootCheckingDevicesPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkTroubleshootCheckingDevicesPage_vftable;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1091d6b0; body size 276 bytes.
#line 1 "ENTRY_1091d6b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1091d6b0(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_1164b0c2);
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
    *puVar2 = (undefined4)((uint)&Ext_SCNetworkTroubleshootDevicePermissionsSubwiz_vftable);
    puVar2[4] = (uint)&Ext_SCNetworkTroubleshootDevicePermissionsSubwiz_vftable;
    puVar2[0x23] = (uint)&Ext_SCNetworkTroubleshootDevicePermissionsSubwiz_vftable;
    puVar2[0x2a] = (uint)&Ext_SCNetworkTroubleshootDevicePermissionsSubwiz_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1091d810; body size 168 bytes.
#line 1 "ENTRY_1091d810"

undefined4 * __thiscall Recovered_Bulk::FUN_1091d810(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164b117);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootFailConnectPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkTroubleshootFailConnectPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkTroubleshootFailConnectPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkTroubleshootFailConnectPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1091d8f0; body size 187 bytes.
#line 1 "ENTRY_1091d8f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1091d8f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164b167);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootInformDevicesPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkTroubleshootInformDevicesPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkTroubleshootInformDevicesPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkTroubleshootInformDevicesPage_vftable;
    *(undefined2 *)(puVar1 + 0x38) = 0x101;
    puVar1[0x39] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1091d9e0; body size 207 bytes.
#line 1 "ENTRY_1091d9e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1091d9e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164b1b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootIntroPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkTroubleshootIntroPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkTroubleshootIntroPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkTroubleshootIntroPage_vftable;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    puVar1[0x3b] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1091daf0; body size 168 bytes.
#line 1 "ENTRY_1091daf0"

undefined4 * __thiscall Recovered_Bulk::FUN_1091daf0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164b207);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootReminderContextPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkTroubleshootReminderContextPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkTroubleshootReminderContextPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkTroubleshootReminderContextPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1091dbd0; body size 168 bytes.
#line 1 "ENTRY_1091dbd0"

undefined4 * __thiscall Recovered_Bulk::FUN_1091dbd0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164b257);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootSuccessfulPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkTroubleshootSuccessfulPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkTroubleshootSuccessfulPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkTroubleshootSuccessfulPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1091dcb0; body size 276 bytes.
#line 1 "ENTRY_1091dcb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1091dcb0(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_1164b2d2);
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
        uVar7 = (undefined4)(thunk_FUN_109edf50(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_109eeaf0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&Ext_SCNetworkTroubleshootSystemIdSubwiz_vftable);
    puVar2[4] = (uint)&Ext_SCNetworkTroubleshootSystemIdSubwiz_vftable;
    puVar2[0x23] = (uint)&Ext_SCNetworkTroubleshootSystemIdSubwiz_vftable;
    puVar2[0x2a] = (uint)&Ext_SCNetworkTroubleshootSystemIdSubwiz_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1091de10; body size 168 bytes.
#line 1 "ENTRY_1091de10"

undefined4 * __thiscall Recovered_Bulk::FUN_1091de10(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164b327);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootWifiSettingDisabledPage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkTroubleshootWifiSettingDisabledPage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkTroubleshootWifiSettingDisabledPage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkTroubleshootWifiSettingDisabledPage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1091def0; body size 168 bytes.
#line 1 "ENTRY_1091def0"

undefined4 * __thiscall Recovered_Bulk::FUN_1091def0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164b377);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootWiredLearnMorePage_vftable);
    puVar1[4] = (uint)&Ext_SCNetworkTroubleshootWiredLearnMorePage_vftable;
    puVar1[0x23] = (uint)&Ext_SCNetworkTroubleshootWiredLearnMorePage_vftable;
    puVar1[0x2a] = (uint)&Ext_SCNetworkTroubleshootWiredLearnMorePage_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1091dfd0; body size 378 bytes.
#line 1 "ENTRY_1091dfd0"

undefined4 * __stdcall FUN_1091dfd0(undefined4 *param_1)

{
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164b411);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar5 = (uint)(0);
  local_14 = (uint)(0);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101da4a0(&local_24,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
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
      ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep((char *)0x0);
      puVar2 = (undefined4 *)(&local_18);
      local_8 = (undefined4)(9);
      uVar5 = (uint)(2);
    }
    else {
      puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*piVar4 + 0x1c))(&local_1c));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
      uVar5 = (uint)(1);
    }
    local_14 = (uint)(uVar5);
    uVar1 = (undefined1)(thunk_FUN_10929e90());
    piVar4 = (int *)((int *)thunk_FUN_10edf540(0,puVar2,uVar1));
  }
  local_8 = (undefined4)(0xb);
  *param_1 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  if ((uVar5 & 2) != 0) {
    uVar5 = (uint)(uVar5 & 0xfffffffd | 4);
    local_8 = (undefined4)(0xc);
    local_14 = (uint)(uVar5);
    ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
    local_18 = (undefined4)(0);
  }
  if ((uVar5 & 1) != 0) {
    local_8 = (undefined4)(0xd);
    ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(0);
  }
  local_8 = (undefined4)(0xe);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1091e740; body size 279 bytes.
#line 1 "ENTRY_1091e740"

undefined4 * __thiscall Recovered_Bulk::FUN_1091e740(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164b592);
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
    *puVar2 = (undefined4)((uint)&Ext_SCNetworkTroubleshootWizard_vftable);
    puVar2[4] = (uint)&Ext_SCNetworkTroubleshootWizard_vftable;
    *puVar1 = (undefined4)((uint)&Ext_SCNetworkTroubleshootWizard_vftable);
    puVar2[0x2a] = (uint)&Ext_SCNetworkTroubleshootWizard_vftable;
    *(undefined1 *)(puVar2 + 0x46) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10923830; body size 398 bytes.
#line 1 "ENTRY_10923830"

undefined4 __thiscall Recovered_Bulk::FUN_10923830(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_1164c09d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a394c);
  thunk_FUN_105f5920(&local_14);
  local_14 = (undefined4)(DAT_121a3960);
  local_8 = (undefined4)(0);
  thunk_FUN_105f5920(&local_14);
  local_34 = (undefined **)((uint)&Ext_SCConditionalElementTree_vftable);
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_1092396c;
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
LAB_1092396c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar2);
    iStack_2c = (int)(0);
    uStack_28 = (undefined4)(0);
    iStack_24 = (int)(0);
  }
  local_34 = (undefined **)((uint)&Ext_SCConditionalElementTreeNoAppendInterface_vftable);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_2);
}


// Reference entry 10923a30; body size 663 bytes.
#line 1 "ENTRY_10923a30"

undefined4 __stdcall FUN_10923a30(undefined4 param_1)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  void *local_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  undefined1 local_6c [32];
  undefined1 local_4c [32];
  undefined **local_2c;
  undefined4 local_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_70 = (undefined4)(0xffffffff);
  puStack_74 = (undefined1 *)(LAB_1164c105);
  local_78 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_78);
  puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_101da4a0(&local_8,DAT_12126b84 ^ (uint)local_6c));
  local_70 = (undefined4)(0);
  piVar6 = (int *)((int *)(**(code **)(*(int *)*puVar5 + 0x3c))(&local_c));
  iVar10 = (int)(*piVar6);
  local_70 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_70 + 1)) << 8 | (uint)(1)));
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))();
  }
  local_70 = (undefined4)(2);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  local_70 = (undefined4)(0xffffffff);
  iVar7 = (int)(thunk_FUN_10ebc1e0());
  if ((*(char *)(iVar7 + 0xf8) != '\0') ||
     (local_c = (int *)((uint)local_c & 0xffffff00), iVar10 == 0)) {
    local_c = (int *)((int *)((uint)(*(unsigned short *)((char *)&local_c + 1)) << 8 | (uint)(1)));
  }
  thunk_FUN_10eb41c0();
  cVar2 = (char)(thunk_FUN_10929e90());
  local_8 = (int *)(DAT_121a395c);
  thunk_FUN_105f5920(&local_8);
  local_8 = (int *)(DAT_121a3958);
  local_70 = (undefined4)(3);
  thunk_FUN_105f5920(&local_8);
  local_8 = (int *)(DAT_121a3954);
  *(unsigned char *)((char *)&local_70 + 0) = 4;
  thunk_FUN_105f5920(&local_8);
  *(unsigned char *)((char *)&local_70 + 0) = 5;
  thunk_FUN_10eb41c0();
  cVar3 = (char)(thunk_FUN_11248b40(0x15));
  if ((cVar3 == '\0') && (cVar2 == '\0')) {
    uVar8 = (undefined4)(1);
  }
  else {
    uVar8 = (undefined4)(0);
  }
  local_8 = (int *)((int *)0x0);
  thunk_FUN_105f5920(&local_8);
  local_2c = (undefined **)((uint)&Ext_SCConditionalElementTree_vftable);
  local_28 = (undefined4)(0);
  iStack_24 = (int)(0);
  uStack_20 = (undefined4)(0);
  iStack_1c = (int)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (int)(0);
  local_70 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_70 + 1)) << 8 | (uint)(7)));
  piVar6 = (int *)((int *)thunk_FUN_106190a0(local_c,local_4c));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(uVar8,local_6c));
  thunk_FUN_10eb41c0();
  iVar10 = (int)(*piVar6);
  uVar4 = (undefined1)(thunk_FUN_10cf5140(local_98));
  piVar6 = (int *)((int *)(**(code **)(iVar10 + 0xc))(uVar4));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0x10))(local_b8));
  uVar8 = (undefined4)((**(code **)(*piVar6 + 4))());
  thunk_FUN_105f5a00(uVar8);
  puVar1 = (undefined4 *)(local_14);
  puVar5 = (undefined4 *)(local_18);
  if (local_18 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar5) != puVar1; puVar5 = puVar5 + 8) {
      (**(code **)*puVar5)(0);
    }
    uVar9 = (uint)(local_10 - (int)local_18 & 0xffffffe0);
    puVar5 = (undefined4 *)(local_18);
    if (0xfff < uVar9) {
      puVar5 = (undefined4 *)((undefined4 *)local_18[-1]);
      uVar9 = (uint)(uVar9 + 0x23);
      if (0x1f < (uint)((int)local_18 + (-4 - (int)puVar5))) goto LAB_10923c64;
    }
    thunk_FUN_1148a50e(puVar5,uVar9);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (int)(0);
  }
  if (iStack_24 != 0) {
    uVar9 = (uint)(iStack_1c - iStack_24 & 0xfffffffc);
    iVar10 = (int)(iStack_24);
    if (0xfff < uVar9) {
      iVar10 = (int)(*(int *)(iStack_24 + -4));
      uVar9 = (uint)(uVar9 + 0x23);
      if (0x1f < (iStack_24 - iVar10) - 4U) {
LAB_10923c64:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar10,uVar9);
    iStack_24 = (int)(0);
    uStack_20 = (undefined4)(0);
    iStack_1c = (int)(0);
  }
  local_2c = (undefined **)((uint)&Ext_SCConditionalElementTreeNoAppendInterface_vftable);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_78);
  return (undefined4)(param_1);
}


// Reference entry 10923d70; body size 489 bytes.
#line 1 "ENTRY_10923d70"

undefined4 __stdcall FUN_10923d70(undefined4 param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
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
  puStack_70 = (undefined1 *)(LAB_1164c165);
  local_74 = (void *)(ExceptionList);
  uVar5 = (uint)(DAT_12126b84 ^ (uint)local_68);
  ExceptionList = (void *)(&local_74);
  local_8 = (undefined4)(DAT_121a395c);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a3958);
  local_6c = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  *(unsigned char *)((char *)&local_6c + 0) = 1;
  local_8 = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_28 = (undefined **)((uint)&Ext_SCConditionalElementTree_vftable);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(3)));
  thunk_FUN_10ebc1e0(uVar5);
  ppuVar1 = (undefined **)(local_28);
  cVar3 = (char)(thunk_FUN_10eac8a0(local_48));
  piVar6 = (int *)((int *)(*(code *)ppuVar1[2])(cVar3 == '\0'));
  thunk_FUN_10eb41c0();
  iVar8 = (int)(*piVar6);
  uVar4 = (undefined1)(thunk_FUN_10cf5140(local_68));
  piVar6 = (int *)((int *)(**(code **)(iVar8 + 0xc))(uVar4));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0x10))(local_94));
  uVar7 = (undefined4)((**(code **)(*piVar6 + 4))());
  thunk_FUN_105f5a00(uVar7);
  puVar2 = (undefined4 *)(local_10);
  puVar9 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar9) != puVar2; puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar5 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar9 = (undefined4 *)(local_14);
    if (0xfff < uVar5) {
      puVar9 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar9))) goto LAB_10923efe;
    }
    thunk_FUN_1148a50e(puVar9,uVar5);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar5 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar8 = (int)(iStack_20);
    if (0xfff < uVar5) {
      iVar8 = (int)(*(int *)(iStack_20 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iStack_20 - iVar8) - 4U) {
LAB_10923efe:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar8,uVar5);
    iStack_20 = (int)(0);
    uStack_1c = (undefined4)(0);
    iStack_18 = (int)(0);
  }
  local_28 = (undefined **)((uint)&Ext_SCConditionalElementTreeNoAppendInterface_vftable);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_74);
  return (undefined4)(param_1);
}


// Reference entry 10923fe0; body size 345 bytes.
#line 1 "ENTRY_10923fe0"

undefined4 __stdcall FUN_10923fe0(undefined4 param_1)

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
  puStack_c = (undefined1 *)(LAB_1164c1b5);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a395c);
  thunk_FUN_105f5920(&local_14);
  local_34 = (undefined **)((uint)&Ext_SCConditionalElementTree_vftable);
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_109240ef;
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
LAB_109240ef:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar2);
    iStack_2c = (int)(0);
    uStack_28 = (undefined4)(0);
    iStack_24 = (int)(0);
  }
  local_34 = (undefined **)((uint)&Ext_SCConditionalElementTreeNoAppendInterface_vftable);
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10924190; body size 503 bytes.
#line 1 "ENTRY_10924190"

undefined4 __stdcall FUN_10924190(undefined4 param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 local_98 [32];
  void *local_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  undefined1 local_6c [32];
  undefined1 local_4c [32];
  undefined **local_2c;
  undefined4 local_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_70 = (undefined4)(0xffffffff);
  puStack_74 = (undefined1 *)(LAB_1164c205);
  local_78 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_78);
  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)local_6c);
  piVar4 = (int *)((int *)thunk_FUN_10eace90());
  iVar7 = (int)(piVar4[1] - *piVar4 >> 0x1f);
  local_8 = (undefined4)(DAT_121a3960);
  local_c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_c + 1)) << 8 | (uint)((piVar4[1] - *piVar4) / 0x4c + iVar7 == iVar7)));
  thunk_FUN_105f5920(&local_8);
  local_70 = (undefined4)(0);
  local_8 = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a3958);
  *(unsigned char *)((char *)&local_70 + 0) = 1;
  thunk_FUN_105f5920(&local_8);
  local_2c = (undefined **)((uint)&Ext_SCConditionalElementTree_vftable);
  local_28 = (undefined4)(0);
  iStack_24 = (int)(0);
  uStack_20 = (undefined4)(0);
  iStack_1c = (int)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_10 = (int)(0);
  local_70 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_70 + 1)) << 8 | (uint)(3)));
  thunk_FUN_10eb41c0();
  ppuVar1 = (undefined **)(local_2c);
  uVar3 = (undefined1)(thunk_FUN_10cf5140(local_4c));
  piVar4 = (int *)((int *)(*(code *)ppuVar1[2])(uVar3));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(local_c,local_6c));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0x10))(local_98));
  uVar5 = (undefined4)((**(code **)(*piVar4 + 4))());
  thunk_FUN_105f5a00(uVar5);
  puVar2 = (undefined4 *)(local_14);
  puVar8 = (undefined4 *)(local_18);
  if (local_18 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar8) != puVar2; puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar6 = (uint)(local_10 - (int)local_18 & 0xffffffe0);
    puVar8 = (undefined4 *)(local_18);
    if (0xfff < uVar6) {
      puVar8 = (undefined4 *)((undefined4 *)local_18[-1]);
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (uint)((int)local_18 + (-4 - (int)puVar8))) goto LAB_1092432c;
    }
    thunk_FUN_1148a50e(puVar8,uVar6);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (int)(0);
  }
  if (iStack_24 != 0) {
    uVar6 = (uint)(iStack_1c - iStack_24 & 0xfffffffc);
    iVar7 = (int)(iStack_24);
    if (0xfff < uVar6) {
      iVar7 = (int)(*(int *)(iStack_24 + -4));
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (iStack_24 - iVar7) - 4U) {
LAB_1092432c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar7,uVar6);
    iStack_24 = (int)(0);
    uStack_20 = (undefined4)(0);
    iStack_1c = (int)(0);
  }
  local_2c = (undefined **)((uint)&Ext_SCConditionalElementTreeNoAppendInterface_vftable);
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  thunk_FUN_105feb30();
  ExceptionList = (void *)(local_78);
  return (undefined4)(param_1);
}


// Reference entry 10929d00; body size 199 bytes.
#line 1 "ENTRY_10929d00"

int __stdcall FUN_10929d00(char param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  SCStr *this_;
  int iVar6;
  undefined1 local_28 [12];
  int local_1c [2];
  SCStr *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164cfad);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar6 = (int)(0);
  thunk_FUN_109234a0(local_1c);
  local_8 = (undefined4)(0);
  piVar4 = (int *)((int *)thunk_FUN_10eace90(uVar3));
  local_14 = (SCStr *)((SCStr *)piVar4[1]);
  this_ = (SCStr *)((SCStr *)*piVar4);
  if (this_ != (SCStr *)(local_14)) {
    do {
      iVar5 = (int)(thunk_FUN_1025ed70(local_28,this_));
      if (((*(char *)(*(int *)(iVar5 + 8) + 0xd) != '\0') ||
          (bVar1 = ((Stub_SCStr *)(this_))->op_lt((SCStr *)(*(int *)(iVar5 + 8) + 0x10)), bVar1)) &&
         ((param_1 == '\0' ||
          (cVar2 = thunk_FUN_114577b0(*(undefined4 *)(this_ + 0x48)), cVar2 == '\0')))) {
        iVar6 = (int)(iVar6 + 1);
      }
      this_ = (SCStr *)(this_ + 0x4c);
    } while (this_ != (SCStr *)(local_14));
  }
  thunk_FUN_102a3ea0(local_1c,*(undefined4 *)(local_1c[0] + 4));
  thunk_FUN_1148a50e(local_1c[0],0x14);
  ExceptionList = (void *)(local_10);
  return (int)(iVar6);
}


// Reference entry 10929e90; body size 150 bytes.
#line 1 "ENTRY_10929e90"

undefined4 FUN_10929e90(void)

{
  char cVar1;
  undefined4 uVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164cfed);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_1023a9c0(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10242b80(0,0));
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    ExceptionList = (void *)(local_10);
    return (undefined4)(1);
  }
  uVar2 = (undefined4)(thunk_FUN_10eacce0(1));
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar2);
}


// Reference entry 1092a190; body size 81 bytes.
#line 1 "ENTRY_1092a190"

void FUN_1092a190(void)

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


// Reference entry 1092a200; body size 120 bytes.
#line 1 "ENTRY_1092a200"

void FUN_1092a200(void)

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


// Reference entry 1092a2a0; body size 220 bytes.
#line 1 "ENTRY_1092a2a0"

void FUN_1092a2a0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
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
  thunk_FUN_10eb41b0();
  thunk_FUN_10ebc1d0();
  cVar1 = (char)(thunk_FUN_10929e90());
  thunk_FUN_109f3bb0(cVar1 == '\0');
  uVar3 = (undefined4)(1);
  thunk_FUN_10ebc1d0(1);
  thunk_FUN_109f3bc0(uVar3);
  return;
}


// Reference entry 1092a3c0; body size 476 bytes.
#line 1 "ENTRY_1092a3c0"

void FUN_1092a3c0(void)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *local_30;
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164d0ad);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10cf4ae0(1);
  thunk_FUN_10cf4ae0(3);
  thunk_FUN_10cf4ae0(2);
  thunk_FUN_10eb0a60(uVar2);
  ((Stub_SCStr *)((SCStr *)&local_24))->int_allocRep("persistent_devices");
  local_8 = (undefined4)(0);
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_102518f0(&local_30));
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  cVar1 = (char)((**(code **)(*(int *)*puVar3 + 0x18))(&local_24));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)&local_24))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    uVar4 = (undefined4)(getAppReportingInstance());
    local_8 = (undefined4)(4);
    thunk_FUN_102d20c0(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    (**(code **)(*local_28 + 0x6c))(&local_20);
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("troubleshootWizard");
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("/");
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    uVar4 = (undefined4)(thunk_FUN_101a2e90(&local_2c,&local_20,&local_14));
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    thunk_FUN_101a2e90(&local_1c,uVar4,&local_18);
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    ((Stub_SCStr *)((SCStr *)&local_2c))->int_release();
    local_2c = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x12;
    ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
    local_18 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x11;
    (**(code **)(*local_28 + 0x7c))(0,&local_1c);
    *(unsigned char *)((char *)&local_8 + 0) = 0x13;
    ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x14)));
    ((Stub_SCStr *)((SCStr *)&local_20))->int_release();
    local_20 = (undefined4)(0);
    local_8 = (undefined4)(0x15);
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1092a620; body size 252 bytes.
#line 1 "ENTRY_1092a620"

void __thiscall Recovered_Bulk::FUN_1092a620(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  SCLibrary *pSVar4;
  int *piVar5;
  int iVar6;
  undefined1 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164d10d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar3 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar2 = (char)(thunk_FUN_10def450(uVar3));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar2 != '\0') {
    thunk_FUN_10eb41b0();
    pSVar4 = (SCLibrary *)(((Stub_SCLibrary *)(0))->getSingleton());
    piVar5 = (int *)((int *)(**(code **)(*(int *)pSVar4 + 0xd8))(&param_2));
    piVar1 = (int *)((int *)*piVar5);
    local_8 = (undefined4)(1);
    *piVar5 = (int)(0);
    if (piVar1 == (int *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    if ((piVar1 == (int *)0x0) ||
       ((iVar6 = (**(code **)(*piVar1 + 0x14))(), iVar6 != 1 && (iVar6 != 3)))) {
      uVar7 = (undefined1)(0);
    }
    else {
      uVar7 = (undefined1)(1);
    }
    local_8 = (undefined4)(5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();
    }
    *(undefined1 *)(param_1 + 0xe0) = uVar7;
    ExceptionList = (void *)(local_10);
    return;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1092a760; body size 287 bytes.
#line 1 "ENTRY_1092a760"

void __fastcall FUN_1092a760(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164d155);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 == '\0') {
    uVar2 = (undefined4)(thunk_FUN_10dfe3d0());
    local_8 = (undefined4)(1);
    cVar1 = (char)(thunk_FUN_10def450(uVar2));
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_10def0d0();
    if (cVar1 != '\0') {
      thunk_FUN_10eb41b0();
      iVar3 = (int)(thunk_FUN_10929d00(0));
      *(bool *)(param_1 + 0xe0) = iVar3 == 0;
    }
    ExceptionList = (void *)(local_10);
    return;
  }
  thunk_FUN_10eb41b0();
  iVar3 = (int)(thunk_FUN_10929d00(0));
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0xe0) = 1;
    thunk_FUN_10ebb8e0("timeout",2000);
    ExceptionList = (void *)(local_10);
    return;
  }
  thunk_FUN_10ebbab0(4);
  thunk_FUN_10ebb8e0("timeout",120000);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1092a8d0; body size 187 bytes.
#line 1 "ENTRY_1092a8d0"

void FUN_1092a8d0(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164d19d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)(local_14))->int_allocRep("help");
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(thunk_FUN_10df6f00(local_14));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  cVar1 = (char)(thunk_FUN_10def450(uVar3));
  thunk_FUN_10def0d0(uVar2);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("networkTroubleshoot");
    local_8 = (undefined4)(3);
    thunk_FUN_10eba7e0(&stack0x00000004);
    local_8 = (undefined4)(4);
    ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1092a9c0; body size 203 bytes.
#line 1 "ENTRY_1092a9c0"

void __fastcall FUN_1092a9c0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164d1dd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10eb41b0();
    iVar3 = (int)(thunk_FUN_10929d00(0));
    *(bool *)(param_1 + 0xe0) = iVar3 != 0;
    thunk_FUN_10eb41b0();
    piVar4 = (int *)((int *)thunk_FUN_10eace90());
    iVar3 = (int)(piVar4[1] - *piVar4 >> 0x1f);
    *(bool *)(param_1 + 0xe1) = (piVar4[1] - *piVar4) / 0x4c + iVar3 == iVar3;
    thunk_FUN_10eb41b0();
    uVar2 = (undefined4)(thunk_FUN_10929d00(1));
    *(undefined4 *)(param_1 + 0xe4) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1092b260; body size 335 bytes.
#line 1 "ENTRY_1092b260"

void __stdcall FUN_1092b260(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164d372);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("setting");
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(thunk_FUN_10df6f00(&local_14));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  cVar1 = (char)(thunk_FUN_10def450(uVar3));
  thunk_FUN_10def0d0(uVar2);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    param_1 = (int *)(operator_new(0x18));
    if (param_1 == (int *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      *param_1 = (int)((int)(uint)&Ext_SCIObjImpl_vftable);
      param_1[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *param_1 = (int)((int)(uint)&Ext_SCDisplayCustomControlActionDescriptor_vftable);
      param_1[2] = 0x15;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      piVar5 = (int *)(param_1);
    }
    piVar6 = (int *)((int *)0x0);
    local_8 = (undefined4)(0xffffffff);
    local_14 = (int *)((int *)0x0);
    if (piVar5 != (int *)0x0) {
      piVar6 = (int *)(piVar5);
      if (*(code **)(*piVar5 + 0xc) != thunk_FUN_101da390) {
        piVar6 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
      }
      local_14 = (int *)(piVar6);
      (**(code **)(*piVar6 + 4))();
    }
    local_8 = (undefined4)(9);
    puVar4 = (undefined4 *)((undefined4 *)(**(code **)(*piVar5 + 0x34))(&param_1));
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))();
    }
    local_8 = (undefined4)(0xc);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1092b410; body size 187 bytes.
#line 1 "ENTRY_1092b410"

void FUN_1092b410(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164d3cd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)(local_14))->int_allocRep("moreInfo");
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(thunk_FUN_10df6f00(local_14));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  cVar1 = (char)(thunk_FUN_10def450(uVar3));
  thunk_FUN_10def0d0(uVar2);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_allocRep("wifiConfig-wiredTroubleshoot");
    local_8 = (undefined4)(3);
    thunk_FUN_10eba7e0(&stack0x00000004);
    local_8 = (undefined4)(4);
    ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1092b500; body size 404 bytes.
#line 1 "ENTRY_1092b500"

void FUN_1092b500(void)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *local_2c;
  int *local_28;
  int *local_24;
  SCStr local_20 [4];
  SCStr local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164d445);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)(local_1c))->int_allocRep("persistent_devices");
  local_8 = (undefined4)(0);
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_102518f0(&local_24,uVar2));
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  cVar1 = (char)((**(code **)(*(int *)*puVar3 + 0x18))(local_1c));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)(local_1c))->int_release();
  local_8 = (undefined4)(0xffffffff);
  if (cVar1 != '\0') {
    uVar4 = (undefined4)(getAppReportingInstance());
    local_8 = (undefined4)(4);
    thunk_FUN_102d20c0(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    ((Stub_SCStr *)(local_1c))->int_allocRep("");
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    (**(code **)(*local_2c + 0x80))(local_1c);
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    ((Stub_SCStr *)(local_1c))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    (**(code **)(*local_2c + 0x6c))(&local_14);
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    ((Stub_SCStr *)(local_20))->int_allocRep("/");
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    uVar2 = (uint)(((Stub_SCStr *)((SCStr *)&local_14))->utf8_rfind(local_20));
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    ((Stub_SCStr *)(local_20))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    ((Stub_SCStr *)((SCStr *)&local_14))->utf8_substr((uint)&local_18,0);
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    (**(code **)(*local_2c + 0x7c))(0,&local_18,uVar2);
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
    local_18 = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
    ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined4)(0);
    local_8 = (undefined4)(0x10);
    if (local_28 != (int *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1092b870; body size 180 bytes.
#line 1 "ENTRY_1092b870"

undefined4 * __thiscall Recovered_Bulk::FUN_1092b870(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164d4ae);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092ba50; body size 180 bytes.
#line 1 "ENTRY_1092ba50"

undefined4 * __thiscall Recovered_Bulk::FUN_1092ba50(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164d56e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092bb40; body size 180 bytes.
#line 1 "ENTRY_1092bb40"

undefined4 * __thiscall Recovered_Bulk::FUN_1092bb40(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164d5ce);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092bd20; body size 180 bytes.
#line 1 "ENTRY_1092bd20"

undefined4 * __thiscall Recovered_Bulk::FUN_1092bd20(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164d68e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092bff0; body size 180 bytes.
#line 1 "ENTRY_1092bff0"

undefined4 * __thiscall Recovered_Bulk::FUN_1092bff0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164d7ae);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092c0e0; body size 180 bytes.
#line 1 "ENTRY_1092c0e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1092c0e0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164d80e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092c1d0; body size 180 bytes.
#line 1 "ENTRY_1092c1d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1092c1d0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164d86e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092c2c0; body size 180 bytes.
#line 1 "ENTRY_1092c2c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1092c2c0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164d8ce);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092c3b0; body size 180 bytes.
#line 1 "ENTRY_1092c3b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1092c3b0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164d92e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092c590; body size 180 bytes.
#line 1 "ENTRY_1092c590"

undefined4 * __thiscall Recovered_Bulk::FUN_1092c590(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164d9ee);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092c680; body size 180 bytes.
#line 1 "ENTRY_1092c680"

undefined4 * __thiscall Recovered_Bulk::FUN_1092c680(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164da4e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092c7c0; body size 194 bytes.
#line 1 "ENTRY_1092c7c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1092c7c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164daae);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCNfcAuthenticationAcrIntroPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCNfcAuthenticationAcrIntroPageType_vftable);
  DAT_121a39e8 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092ca60; body size 194 bytes.
#line 1 "ENTRY_1092ca60"

undefined4 * __thiscall Recovered_Bulk::FUN_1092ca60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164db6e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCNfcAuthenticationAcrScanPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCNfcAuthenticationAcrScanPageType_vftable);
  DAT_121a39ec = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092cbb0; body size 194 bytes.
#line 1 "ENTRY_1092cbb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1092cbb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164dbce);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCNfcAuthenticationAcrScanSuccessPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCNfcAuthenticationAcrScanSuccessPageType_vftable);
  DAT_121a39f0 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092ce50; body size 194 bytes.
#line 1 "ENTRY_1092ce50"

undefined4 * __thiscall Recovered_Bulk::FUN_1092ce50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164dc8e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCNfcAuthenticationCancelScanPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCNfcAuthenticationCancelScanPageType_vftable);
  DAT_121a39f8 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092d240; body size 194 bytes.
#line 1 "ENTRY_1092d240"

undefined4 * __thiscall Recovered_Bulk::FUN_1092d240(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164ddae);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCNfcAuthenticationEducationPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCNfcAuthenticationEducationPageType_vftable);
  DAT_121a3a00 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092d390; body size 194 bytes.
#line 1 "ENTRY_1092d390"

undefined4 * __thiscall Recovered_Bulk::FUN_1092d390(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164de0e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCNfcAuthenticationErrorAuthRetryPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCNfcAuthenticationErrorAuthRetryPageType_vftable);
  DAT_121a3a14 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092d4e0; body size 194 bytes.
#line 1 "ENTRY_1092d4e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1092d4e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164de6e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCNfcAuthenticationFailedScanPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCNfcAuthenticationFailedScanPageType_vftable);
  DAT_121a3a04 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092d630; body size 194 bytes.
#line 1 "ENTRY_1092d630"

undefined4 * __thiscall Recovered_Bulk::FUN_1092d630(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164dece);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCNfcAuthenticationIcrIntroPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCNfcAuthenticationIcrIntroPageType_vftable);
  DAT_121a39e0 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092d780; body size 194 bytes.
#line 1 "ENTRY_1092d780"

undefined4 * __thiscall Recovered_Bulk::FUN_1092d780(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164df2e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCNfcAuthenticationIcrScanPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCNfcAuthenticationIcrScanPageType_vftable);
  DAT_121a39e4 = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092da20; body size 194 bytes.
#line 1 "ENTRY_1092da20"

undefined4 * __thiscall Recovered_Bulk::FUN_1092da20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164dfee);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCNfcAuthenticationManualPinRetryPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCNfcAuthenticationManualPinRetryPageType_vftable);
  DAT_121a3a1c = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092db70; body size 194 bytes.
#line 1 "ENTRY_1092db70"

undefined4 * __thiscall Recovered_Bulk::FUN_1092db70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164e04e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCNfcAuthenticationScanErrorPage");
  local_8 = (undefined4)(0);
  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((Stub_SCStr *)(this_))->endsWith("Page");
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&Ext_SCNfcAuthenticationScanErrorPageType_vftable);
  DAT_121a39fc = (int)(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092dc70; body size 218 bytes.
#line 1 "ENTRY_1092dc70"

undefined4 * __thiscall Recovered_Bulk::FUN_1092dc70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1164e0a9);
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
  *param_1 = (undefined4)((uint)&Ext_SCNfcAuthenticationWizard_vftable);
  param_1[4] = (uint)&Ext_SCNfcAuthenticationWizard_vftable;
  param_1[0x23] = (uint)&Ext_SCNfcAuthenticationWizard_vftable;
  param_1[0x2a] = (uint)&Ext_SCNfcAuthenticationWizard_vftable;
  param_1[0x43] = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined1 *)((int)param_1 + 0x112) = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1092f2a0; body size 186 bytes.
#line 1 "ENTRY_1092f2a0"

void __fastcall FUN_1092f2a0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1164e5d0);
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


// Reference entry 1092f770; body size 68 bytes.
#line 1 "ENTRY_1092f770"

undefined4 * __thiscall Recovered_Bulk::FUN_1092f770(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1092fad0; body size 68 bytes.
#line 1 "ENTRY_1092fad0"

undefined4 * __thiscall Recovered_Bulk::FUN_1092fad0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1092fb70; body size 68 bytes.
#line 1 "ENTRY_1092fb70"

undefined4 * __thiscall Recovered_Bulk::FUN_1092fb70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1092fc10; body size 68 bytes.
#line 1 "ENTRY_1092fc10"

undefined4 * __thiscall Recovered_Bulk::FUN_1092fc10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1092fcb0; body size 68 bytes.
#line 1 "ENTRY_1092fcb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1092fcb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


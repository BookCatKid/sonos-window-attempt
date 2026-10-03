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
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern __declspec(dllimport) int rand(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101a2bf0(...);
extern int thunk_FUN_101b5540(...);
extern int thunk_FUN_101b5e50(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_102244a0(...);
extern int thunk_FUN_10224630(...);
extern int thunk_FUN_10245f80(...);
extern int thunk_FUN_10247e10(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_10323ac0(...);
extern int thunk_FUN_10342f40(...);
extern int thunk_FUN_10342f60(...);
extern int thunk_FUN_1034dcf0(...);
extern int thunk_FUN_10365150(...);
extern int thunk_FUN_1036e480(...);
extern int thunk_FUN_105a0440(...);
extern int thunk_FUN_105a24b0(...);
extern int thunk_FUN_105a29f0(...);
extern int thunk_FUN_105a2bf0(...);
extern int thunk_FUN_105bb550(...);
extern int thunk_FUN_105bebd0(...);
extern int thunk_FUN_105eda70(...);
extern int thunk_FUN_105ee3e0(...);
extern int thunk_FUN_105ef430(...);
extern int thunk_FUN_105f0080(...);
extern int thunk_FUN_105f5920(...);
extern int thunk_FUN_105f5a00(...);
extern int thunk_FUN_105feb30(...);
extern int thunk_FUN_10605020(...);
extern int thunk_FUN_106190a0(...);
extern int thunk_FUN_1064d7a0(...);
extern int thunk_FUN_106da030(...);
extern int thunk_FUN_106da680(...);
extern int thunk_FUN_106e1380(...);
extern int thunk_FUN_106e3e70(...);
extern int thunk_FUN_106e7280(...);
extern int thunk_FUN_10708df0(...);
extern int thunk_FUN_10709b20(...);
extern int thunk_FUN_107626d0(...);
extern int thunk_FUN_10762e20(...);
extern int thunk_FUN_10786100(...);
extern int thunk_FUN_10818140(...);
extern int thunk_FUN_10819ab0(...);
extern int thunk_FUN_10837820(...);
extern int thunk_FUN_10838010(...);
extern int thunk_FUN_1092b810(...);
extern int thunk_FUN_1092dc70(...);
extern int thunk_FUN_10988b60(...);
extern int thunk_FUN_109892c0(...);
extern int thunk_FUN_10a45490(...);
extern int thunk_FUN_10a47030(...);
extern int thunk_FUN_10a49be0(...);
extern int thunk_FUN_10a4c9a0(...);
extern int thunk_FUN_10a4ca40(...);
extern int thunk_FUN_10a4d3b0(...);
extern int thunk_FUN_10a4d450(...);
extern int thunk_FUN_10a540f0(...);
extern int thunk_FUN_10a54170(...);
extern int thunk_FUN_10a54480(...);
extern int thunk_FUN_10a54750(...);
extern int thunk_FUN_10a547c0(...);
extern int thunk_FUN_10a54830(...);
extern int thunk_FUN_10a75d90(...);
extern int thunk_FUN_10a76b10(...);
extern int thunk_FUN_10a76ed0(...);
extern int thunk_FUN_10af3f70(...);
extern int thunk_FUN_10af47d0(...);
extern int thunk_FUN_10af7ee0(...);
extern int thunk_FUN_10b02df0(...);
extern int thunk_FUN_10b03530(...);
extern int thunk_FUN_10b03580(...);
extern int thunk_FUN_10b04ef0(...);
extern int thunk_FUN_10b059e0(...);
extern int thunk_FUN_10b09a30(...);
extern int thunk_FUN_10b0c670(...);
extern int thunk_FUN_10bd4a00(...);
extern int thunk_FUN_10bed390(...);
extern int thunk_FUN_10bed460(...);
extern int thunk_FUN_10bed510(...);
extern int thunk_FUN_10c5f430(...);
extern int thunk_FUN_10c5f8a0(...);
extern int thunk_FUN_10c62ec0(...);
extern int thunk_FUN_10c94600(...);
extern int thunk_FUN_10c97610(...);
extern int thunk_FUN_10cf2f30(...);
extern int thunk_FUN_10cf34e0(...);
extern int thunk_FUN_10cf41d0(...);
extern int thunk_FUN_10d9e2b0(...);
extern int thunk_FUN_10d9e5c0(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10def450(...);
extern int thunk_FUN_10dfbb10(...);
extern int thunk_FUN_10dfbbe0(...);
extern int thunk_FUN_10dfbe50(...);
extern int thunk_FUN_10e09ee0(...);
extern int thunk_FUN_10e10fd0(...);
extern int thunk_FUN_10e110d0(...);
extern int thunk_FUN_10e111f0(...);
extern int thunk_FUN_10eaafe0(...);
extern int thunk_FUN_10eace60(...);
extern int thunk_FUN_10eae0a0(...);
extern int thunk_FUN_10eae0f0(...);
extern int thunk_FUN_10eae120(...);
extern int thunk_FUN_10eae150(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb64f0(...);
extern int thunk_FUN_10eb6cc0(...);
extern int thunk_FUN_10eba5f0(...);
extern int thunk_FUN_10ebb810(...);
extern int thunk_FUN_10ebb850(...);
extern int thunk_FUN_10ebb890(...);
extern int thunk_FUN_10ebb8e0(...);
extern int thunk_FUN_10ebba70(...);
extern int thunk_FUN_10ebbab0(...);
extern int thunk_FUN_10ebc060(...);
extern int thunk_FUN_10ebc110(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ee0ce0(...);
extern int thunk_FUN_10ee48c0(...);
extern int thunk_FUN_10eea860(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b0c0(...);
extern int DAT_1186d2ee;
extern int DAT_1189dc98;
extern int DAT_118a1c50;
extern int DAT_12119c10;
extern int DAT_12126b84;
extern int DAT_121a4414;
extern int DAT_121a44b8;
extern int DAT_121a44c4;
extern int DAT_121a48cc;
extern int DAT_121a48d0;
extern int DAT_121a4ae8;
extern int DAT_121a4aec;
extern int DAT_121a4af0;
extern int DAT_121a4b0c;
extern int DAT_121a4b14;
extern int _DAT_118dad60;
extern int g_lSCObjCount;
extern int ghidra_vftable_SCAccessibilityTestButtonDefaultPage;
extern int ghidra_vftable_SCAccessibilityTestButtonWithTermationVOTextPage;
extern int ghidra_vftable_SCAccessibilityTestButtonWithVOTextOverridePage;
extern int ghidra_vftable_SCAccessibilityTestFlareDefaultPage;
extern int ghidra_vftable_SCAccessibilityTestFlareWithVODisabledPage;
extern int ghidra_vftable_SCAccessibilityTestFlareWithVOTextOverridePage;
extern int ghidra_vftable_SCAccessibilityTestImageDefaultPage;
extern int ghidra_vftable_SCAccessibilityTestImageWithVOTextPage;
extern int ghidra_vftable_SCAccessibilityTestSelectionPage;
extern int ghidra_vftable_SCAccessibilityTestTextDefaultPage;
extern int ghidra_vftable_SCAccessibilityTestTextWithVODisabledPage;
extern int ghidra_vftable_SCAccessibilityTestTextWithVOTextOverridePage;
extern int ghidra_vftable_SCAccessibilityTestWizard;
extern int ghidra_vftable_SCAccountSecureTransferAccountCreateSubwiz;
extern int ghidra_vftable_SCAccountSecureTransferAccountLoginSubwiz;
extern int ghidra_vftable_SCAccountSecureTransferBeginSystemTransferErrorPage;
extern int ghidra_vftable_SCAccountSecureTransferBeginSystemTransferPage;
extern int ghidra_vftable_SCAccountSecureTransferButtonPressAuthPage;
extern int ghidra_vftable_SCAccountSecureTransferCompletePage;
extern int ghidra_vftable_SCAccountSecureTransferIncompletePage;
extern int ghidra_vftable_SCAccountSecureTransferIntroPage;
extern int ghidra_vftable_SCAccountSecureTransferNetworkErrorPage;
extern int ghidra_vftable_SCAccountSecureTransferNewAccountReadyPage;
extern int ghidra_vftable_SCAccountSecureTransferPrepareSystemPage;
extern int ghidra_vftable_SCAccountSecureTransferProductSelectionPage;
extern int ghidra_vftable_SCAccountSecureTransferRegisterProductSubwiz;
extern int ghidra_vftable_SCAccountSecureTransferWizard;
extern int ghidra_vftable_SCAnimationErrorPage;
extern int ghidra_vftable_SCAnimationIntroPage;
extern int ghidra_vftable_SCAnimationSuccessPage;
extern int ghidra_vftable_SCAnimationWizard;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCAutoApConnectTestConnectPage;
extern int ghidra_vftable_SCAutoApConnectTestIntroPage;
extern int ghidra_vftable_SCAutoApConnectTestProductSelectionPage;
extern int ghidra_vftable_SCBasicAPage;
extern int ghidra_vftable_SCBasicBPage;
extern int ghidra_vftable_SCBasicCPage;
extern int ghidra_vftable_SCBasicWizard;
extern int ghidra_vftable_SCChirpTestErrorPage;
extern int ghidra_vftable_SCChirpTestWizard;
extern int ghidra_vftable_SCConditionalElementTree;
extern int ghidra_vftable_SCConditionalElementTreeNoAppendInterface;
extern int ghidra_vftable_SCCopyTestIntroPage;
extern int ghidra_vftable_SCCopyTestRawStringPage;
extern int ghidra_vftable_SCCopyTestResourceStringPage;
extern int ghidra_vftable_SCCopyTestWizard;
extern int ghidra_vftable_SCDiscoveryAllPage;
extern int ghidra_vftable_SCDiscoveryApFailPage;
extern int ghidra_vftable_SCDiscoveryApFoundPage;
extern int ghidra_vftable_SCDiscoveryApScanPage;
extern int ghidra_vftable_SCDiscoveryBTOnlyPage;
extern int ghidra_vftable_SCDiscoveryHistoryCollectionPage;
extern int ghidra_vftable_SCDiscoveryHistoryDeviceListPage;
extern int ghidra_vftable_SCDiscoveryHistoryDeviceSummaryPage;
extern int ghidra_vftable_SCDiscoveryHistoryHouseholdListPage;
extern int ghidra_vftable_SCDiscoveryHistoryWizard;
extern int ghidra_vftable_SCDiscoverySinglePage;
extern int ghidra_vftable_SCDiscoverySplashPage;
extern int ghidra_vftable_SCDiscoveryWizard;
extern int ghidra_vftable_SCDtlsTestEchoConnectingPage;
extern int ghidra_vftable_SCDtlsTestEchoFailurePage;
extern int ghidra_vftable_SCDtlsTestEchoIntroPage;
extern int ghidra_vftable_SCDtlsTestEchoPlayerChooserPage;
extern int ghidra_vftable_SCDtlsTestEchoProtocolChooserPage;
extern int ghidra_vftable_SCDtlsTestEchoSuccessPage;
extern int ghidra_vftable_SCDtlsTestWizard;
extern int ghidra_vftable_SCFirmwareDownloadCallback;
extern int ghidra_vftable_SCFlareDemoAdvancedProgressPage;
extern int ghidra_vftable_SCFlareDemoAdvancedProgressSetupPage;
extern int ghidra_vftable_SCFlareDemoFirstPage;
extern int ghidra_vftable_SCFlareDemoImageCheckmarkPage;
extern int ghidra_vftable_SCFlareDemoImageProgressPage;
extern int ghidra_vftable_SCFlareDemoImageThinkerPage;
extern int ghidra_vftable_SCFlareDemoImageWiFiPage;
extern int ghidra_vftable_SCFlareDemoSecondPage;
extern int ghidra_vftable_SCFlareDemoSelectionPage;
extern int ghidra_vftable_SCFlareDemoSimpleProgressPage;
extern int ghidra_vftable_SCFlareDemoSpinnerPage;
extern int ghidra_vftable_SCFlareDemoThirdPage;
extern int ghidra_vftable_SCFlareDemoVideoCheckmarkPage;
extern int ghidra_vftable_SCFlareDemoVideoProgressPage;
extern int ghidra_vftable_SCFlareDemoVideoThinkerPage;
extern int ghidra_vftable_SCFlareDemoVideoWiFiPage;
extern int ghidra_vftable_SCFlareDemoWizard;
extern int ghidra_vftable_SCFlutterTestErrorHandlingPage;
extern int ghidra_vftable_SCFlutterTestWizard;
extern int ghidra_vftable_SCGhostBooPage;
extern int ghidra_vftable_SCGhostSneakyPage;
extern int ghidra_vftable_SCGhostWizard;
extern int ghidra_vftable_SCHapticWizard;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCMockActionableListPage;
extern int ghidra_vftable_SCMockButtonFirstPage;
extern int ghidra_vftable_SCMockButtonFourthPage;
extern int ghidra_vftable_SCMockButtonSecondPage;
extern int ghidra_vftable_SCMockButtonSecondaryButtonFirstPage;
extern int ghidra_vftable_SCMockButtonSecondaryButtonSecondPage;
extern int ghidra_vftable_SCMockButtonThirdPage;
extern int ghidra_vftable_SCMockCaptionImageCarouselBarDebugPage;
extern int ghidra_vftable_SCMockCaptionImageCarouselDebugPage;
extern int ghidra_vftable_SCMockCaptionImageDebugPage;
extern int ghidra_vftable_SCMockCheckboxLongItemPage;
extern int ghidra_vftable_SCMockCheckboxShortItemPage;
extern int ghidra_vftable_SCMockDrumPickerPage;
extern int ghidra_vftable_SCMockDrumPickerWithIconsAndSubtextPage;
extern int ghidra_vftable_SCMockDrumPickerWithIconsPage;
extern int ghidra_vftable_SCMockDrumPickerWithSubtextPage;
extern int ghidra_vftable_SCMockFieldAPage;
extern int ghidra_vftable_SCMockFieldBPage;
extern int ghidra_vftable_SCMockListPage;
extern int ghidra_vftable_SCMockListWithIconsOnLeftPage;
extern int ghidra_vftable_SCMockListWithIndicatorsPage;
extern int ghidra_vftable_SCMockMarkdownFirstPage;
extern int ghidra_vftable_SCMockMarkdownInputPage;
extern int ghidra_vftable_SCMockMarkdownOutput2Page;
extern int ghidra_vftable_SCMockMarkdownOutputPage;
extern int ghidra_vftable_SCMockMarkdownSecondPage;
extern int ghidra_vftable_SCMockMarkdownThirdPage;
extern int ghidra_vftable_SCMockMultilinePickerPage;
extern int ghidra_vftable_SCMockRichSelectorPickerPage;
extern int ghidra_vftable_SCMockScrollableActionableListPage;
extern int ghidra_vftable_SCMockScrollableListWithIconsOnLeftInCarouselPage;
extern int ghidra_vftable_SCMockScrollableListWithIconsOnLeftPage;
extern int ghidra_vftable_SCMockSelectProductDebugPage;
extern int ghidra_vftable_SCMockSelectionPage;
extern int ghidra_vftable_SCMockSelectorPickerPage;
extern int ghidra_vftable_SCMockSelectorPickerWithDefaultPage;
extern int ghidra_vftable_SCMockUpdateDebugPage;
extern int ghidra_vftable_SCMolassesFirstPage;
extern int ghidra_vftable_SCMolassesSecondPage;
extern int ghidra_vftable_SCMolassesThirdPage;
extern int ghidra_vftable_SCMolassesWizard;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCNfcTestAbilityNotAvailablePage;
extern int ghidra_vftable_SCNfcTestPermissionPage;
extern int ghidra_vftable_SCNfcTestWizard;
extern int ghidra_vftable_SCNfcUserTestIntroPage;
extern int ghidra_vftable_SCNfcUserTestNfcAuthenticationSubwiz;
extern int ghidra_vftable_SCNfcUserTestOutroPage;
extern int ghidra_vftable_SCNfcUserTestWizard;
extern int ghidra_vftable_SCOffLanUpdateTestApConnectSubwiz;
extern int ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadErrorPage;
extern int ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadPage;
extern int ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadSuccessPage;
extern int ghidra_vftable_SCOffLanUpdateTestFirmwareUpdateSubwiz;
extern int ghidra_vftable_SCOffLanUpdateTestIntroPage;
extern int ghidra_vftable_SCOffLanUpdateTestOutroPage;
extern int ghidra_vftable_SCOffLanUpdateTestPermissionsSubwiz;
extern int ghidra_vftable_SCOffLanUpdateTestProductSelectionPage;
extern int ghidra_vftable_SCOffLanUpdateTestSNSApConnectPage;
extern int ghidra_vftable_SCOffLanUpdateTestSonosApButtonPressConfirmPage;
extern int ghidra_vftable_SCOffLanUpdateTestSonosApButtonPressPage;
extern int ghidra_vftable_SCOffLanUpdateTestSonosApConnectPage;
extern int ghidra_vftable_SCOffLanUpdateTestSonosApWaitingPage;
extern int ghidra_vftable_SCPopupDemoSelectionPage;
extern int ghidra_vftable_SCPopupDemoTest1APage;
extern int ghidra_vftable_SCPopupDemoTest1BPage;
extern int ghidra_vftable_SCPopupDemoTest1CPage;
extern int ghidra_vftable_SCPopupDemoTest2APage;
extern int ghidra_vftable_SCPopupDemoTest3Page;
extern int ghidra_vftable_SCPopupDemoTest4APage;
extern int ghidra_vftable_SCPopupDemoTest4BPage;
extern int ghidra_vftable_SCPopupDemoWizard;
extern int ghidra_vftable_SCProductAssetsCarouselPage;
extern int ghidra_vftable_SCProductAssetsColorListPage;
extern int ghidra_vftable_SCProductAssetsIntroPage;
extern int ghidra_vftable_SCProductAssetsVideoDetailPage;
extern int ghidra_vftable_SCProductAssetsVideoListPage;
extern int ghidra_vftable_SCProductAssetsWizard;
extern int ghidra_vftable_SCSubwizStateFor;
extern int ghidra_vftable_SCVoiceServiceConcurrencyBondingConcurrencyErrorPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyBondingConcurrencyFatalErrorPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyBondingConfirmationPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyConfirmationPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyFatalMissingErrorPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyFatalRemoveErrorPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyHTPrimaryGAPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyHTSurroundsGAPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyIssuePage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyMissingProductPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyRemoveErrorPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyServiceSelectionPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyStereoGAPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyWizard;
extern int ghidra_vftable_SCVoiceServiceLocaleSelectionPage;
extern int ghidra_vftable_SCVoiceServiceLocaleUnsupportedPage;
extern int ghidra_vftable_SCVoiceServiceLocaleWizard;
extern int ghidra_vftable_SCWacConnectIntroPage;
extern int ghidra_vftable_SCWacConnectScanningPage;
extern int ghidra_vftable_SCWacConnectWizard;
extern int ghidra_vftable_SCWiredConnectFindProductPage;
extern int ghidra_vftable_SCWiredConnectIntroPage;
extern int ghidra_vftable_SCWiredConnectWizard;
extern int in_stack_00000038;
extern undefined1 LAB_10a46f6c[];
extern undefined1 LAB_10a5be8e[];
extern undefined1 LAB_10a6464d[];
extern undefined1 LAB_10ab56dc[];
extern undefined1 LAB_10b019c4[];
extern undefined1 LAB_10b078df[];
extern undefined1 LAB_10b07a8f[];
extern undefined1 LAB_1167ce50[];
extern undefined1 LAB_1167d2c7[];
extern undefined1 LAB_1167d317[];
extern undefined1 LAB_1167d367[];
extern undefined1 LAB_1167d3b7[];
extern undefined1 LAB_1167d407[];
extern undefined1 LAB_1167d457[];
extern undefined1 LAB_1167d4a7[];
extern undefined1 LAB_1167d4f7[];
extern undefined1 LAB_1167d56b[];
extern undefined1 LAB_1167d5b7[];
extern undefined1 LAB_1167d607[];
extern undefined1 LAB_1167d66d[];
extern undefined1 LAB_1167d6b7[];
extern undefined1 LAB_1167d744[];
extern undefined1 LAB_116809ed[];
extern undefined1 LAB_11680a2d[];
extern undefined1 LAB_1168149d[];
extern undefined1 LAB_1168182b[];
extern undefined1 LAB_11681930[];
extern undefined1 LAB_11681960[];
extern undefined1 LAB_11681c57[];
extern undefined1 LAB_11681ca7[];
extern undefined1 LAB_11681d26[];
extern undefined1 LAB_11682539[];
extern undefined1 LAB_11682640[];
extern undefined1 LAB_11682670[];
extern undefined1 LAB_116829a1[];
extern undefined1 LAB_11682a51[];
extern undefined1 LAB_11682ab7[];
extern undefined1 LAB_11682b07[];
extern undefined1 LAB_11682b94[];
extern undefined1 LAB_11682e4d[];
extern undefined1 LAB_11683335[];
extern undefined1 LAB_11683509[];
extern undefined1 LAB_11683610[];
extern undefined1 LAB_11683640[];
extern undefined1 LAB_116839d7[];
extern undefined1 LAB_11683a27[];
extern undefined1 LAB_11683ab4[];
extern undefined1 LAB_11683fc5[];
extern undefined1 LAB_11684070[];
extern undefined1 LAB_116840a0[];
extern undefined1 LAB_11684230[];
extern undefined1 LAB_11684260[];
extern undefined1 LAB_116847a0[];
extern undefined1 LAB_11684800[];
extern undefined1 LAB_11684860[];
extern undefined1 LAB_1168489d[];
extern undefined1 LAB_116848dd[];
extern undefined1 LAB_11684940[];
extern undefined1 LAB_11684a00[];
extern undefined1 LAB_11684e80[];
extern undefined1 LAB_11684f39[];
extern undefined1 LAB_11685380[];
extern undefined1 LAB_116853b0[];
extern undefined1 LAB_116853e0[];
extern undefined1 LAB_11685410[];
extern undefined1 LAB_11685440[];
extern undefined1 LAB_116854a0[];
extern undefined1 LAB_116854d0[];
extern undefined1 LAB_11685500[];
extern undefined1 LAB_11685530[];
extern undefined1 LAB_11685560[];
extern undefined1 LAB_11685a52[];
extern undefined1 LAB_11685ad2[];
extern undefined1 LAB_11685b27[];
extern undefined1 LAB_11685b77[];
extern undefined1 LAB_11685bc7[];
extern undefined1 LAB_11685c17[];
extern undefined1 LAB_11685c67[];
extern undefined1 LAB_11685cb7[];
extern undefined1 LAB_11685d07[];
extern undefined1 LAB_11685d57[];
extern undefined1 LAB_11685da7[];
extern undefined1 LAB_11685df7[];
extern undefined1 LAB_11685e72[];
extern undefined1 LAB_11685f04[];
extern undefined1 LAB_11685f40[];
extern undefined1 LAB_11685f70[];
extern undefined1 LAB_11686a8d[];
extern undefined1 LAB_116876dd[];
extern undefined1 LAB_11687e6d[];
extern undefined1 LAB_11688e47[];
extern undefined1 LAB_11688e97[];
extern undefined1 LAB_11688ee7[];
extern undefined1 LAB_11688f37[];
extern undefined1 LAB_11688f87[];
extern undefined1 LAB_11688fd7[];
extern undefined1 LAB_11689027[];
extern undefined1 LAB_11689077[];
extern undefined1 LAB_116890c7[];
extern undefined1 LAB_11689117[];
extern undefined1 LAB_11689167[];
extern undefined1 LAB_116891b7[];
extern undefined1 LAB_11689220[];
extern undefined1 LAB_1168a887[];
extern undefined1 LAB_1168a8d7[];
extern undefined1 LAB_1168a927[];
extern undefined1 LAB_1168a990[];
extern undefined1 LAB_1168b890[];
extern undefined1 LAB_1168b8c0[];
extern undefined1 LAB_1168c077[];
extern undefined1 LAB_1168c0c7[];
extern undefined1 LAB_1168c117[];
extern undefined1 LAB_1168c180[];
extern undefined1 LAB_1168d137[];
extern undefined1 LAB_1168d187[];
extern undefined1 LAB_1168d1d7[];
extern undefined1 LAB_1168d240[];
extern undefined1 LAB_1168dc77[];
extern undefined1 LAB_1168dd50[];
extern undefined1 LAB_1168e27d[];
extern undefined1 LAB_1168e2bd[];
extern undefined1 LAB_1168e2fd[];
extern undefined1 LAB_1168e33d[];
extern undefined1 LAB_1168e37d[];
extern undefined1 LAB_1168e3bd[];
extern undefined1 LAB_1168e74d[];
extern undefined1 LAB_1168e827[];
extern undefined1 LAB_1168e877[];
extern undefined1 LAB_1168e8c7[];
extern undefined1 LAB_1168e930[];
extern undefined1 LAB_1168fa57[];
extern undefined1 LAB_1168faa7[];
extern undefined1 LAB_1168faf7[];
extern undefined1 LAB_1168fb47[];
extern undefined1 LAB_1168fbb0[];
extern undefined1 LAB_11690aed[];
extern undefined1 LAB_1169102d[];
extern undefined1 LAB_11691360[];
extern undefined1 LAB_11691390[];
extern undefined1 LAB_116913c0[];
extern undefined1 LAB_116913f0[];
extern undefined1 LAB_116916d7[];
extern undefined1 LAB_11691727[];
extern undefined1 LAB_11691777[];
extern undefined1 LAB_116917c7[];
extern undefined1 LAB_11691817[];
extern undefined1 LAB_1169186f[];
extern undefined1 LAB_116918b7[];
extern undefined1 LAB_11691920[];
extern undefined1 LAB_11692270[];
extern undefined1 LAB_11692745[];
extern undefined1 LAB_1169283d[];
extern undefined1 LAB_116928dd[];
extern undefined1 LAB_11692f80[];
extern undefined1 LAB_11692fe0[];
extern undefined1 LAB_116933d0[];
extern undefined1 LAB_11693417[];
extern undefined1 LAB_11693467[];
extern undefined1 LAB_116934b7[];
extern undefined1 LAB_11693507[];
extern undefined1 LAB_11693557[];
extern undefined1 LAB_116935a7[];
extern undefined1 LAB_11693610[];
extern undefined1 LAB_116942c5[];
extern undefined1 LAB_11695677[];
extern undefined1 LAB_116956c7[];
extern undefined1 LAB_11695717[];
extern undefined1 LAB_11695767[];
extern undefined1 LAB_116957b7[];
extern undefined1 LAB_11695807[];
extern undefined1 LAB_11695857[];
extern undefined1 LAB_116958a7[];
extern undefined1 LAB_116958f7[];
extern undefined1 LAB_11695947[];
extern undefined1 LAB_11695997[];
extern undefined1 LAB_116959e7[];
extern undefined1 LAB_11695a37[];
extern undefined1 LAB_11695a87[];
extern undefined1 LAB_11695ad7[];
extern undefined1 LAB_11695b27[];
extern undefined1 LAB_11695b90[];
extern undefined1 LAB_1169721d[];
extern undefined1 LAB_11697447[];
extern undefined1 LAB_116974b0[];
extern undefined1 LAB_11697927[];
extern undefined1 LAB_11697977[];
extern undefined1 LAB_116979e0[];
extern undefined1 LAB_11697b15[];
extern undefined1 LAB_11697c7d[];
extern undefined1 LAB_11697db0[];
extern undefined1 LAB_1169a857[];
extern undefined1 LAB_1169a8a7[];
extern undefined1 LAB_1169a8f7[];
extern undefined1 LAB_1169a947[];
extern undefined1 LAB_1169a997[];
extern undefined1 LAB_1169a9e7[];
extern undefined1 LAB_1169aa37[];
extern undefined1 LAB_1169aa87[];
extern undefined1 LAB_1169aad7[];
extern undefined1 LAB_1169ab27[];
extern undefined1 LAB_1169ab77[];
extern undefined1 LAB_1169abc7[];
extern undefined1 LAB_1169ac17[];
extern undefined1 LAB_1169ac67[];
extern undefined1 LAB_1169acb7[];
extern undefined1 LAB_1169ad07[];
extern undefined1 LAB_1169ad57[];
extern undefined1 LAB_1169ada7[];
extern undefined1 LAB_1169adf7[];
extern undefined1 LAB_1169ae47[];
extern undefined1 LAB_1169ae97[];
extern undefined1 LAB_1169aee7[];
extern undefined1 LAB_1169af37[];
extern undefined1 LAB_1169af87[];
extern undefined1 LAB_1169afd7[];
extern undefined1 LAB_1169b027[];
extern undefined1 LAB_1169b077[];
extern undefined1 LAB_1169b0c7[];
extern undefined1 LAB_1169b117[];
extern undefined1 LAB_1169b167[];
extern undefined1 LAB_1169b1b7[];
extern undefined1 LAB_1169b207[];
extern undefined1 LAB_1169b257[];
extern undefined1 LAB_1169b2a7[];
extern undefined1 LAB_1169b2f7[];
extern undefined1 LAB_1169b347[];
extern undefined1 LAB_1169b397[];
extern undefined1 LAB_116a0525[];
extern undefined1 LAB_116a09b7[];
extern undefined1 LAB_116a0a07[];
extern undefined1 LAB_116a0a57[];
extern undefined1 LAB_116a0ac0[];
extern undefined1 LAB_116a17e7[];
extern undefined1 LAB_116a1837[];
extern undefined1 LAB_116a1887[];
extern undefined1 LAB_116a18d7[];
extern undefined1 LAB_116a1927[];
extern undefined1 LAB_116a1977[];
extern undefined1 LAB_116a19c7[];
extern undefined1 LAB_116a1a17[];
extern undefined1 LAB_116a1a80[];
extern undefined1 LAB_116a2c5d[];
extern undefined1 LAB_116a2ecd[];
extern undefined1 LAB_116a325d[];
extern undefined1 LAB_116a329d[];
extern undefined1 LAB_116a33fd[];
extern undefined1 LAB_116a376d[];
extern undefined1 LAB_116a3d2f[];
extern undefined1 LAB_116a3d77[];
extern undefined1 LAB_116a3dc7[];
extern undefined1 LAB_116a3e1f[];
extern undefined1 LAB_116a3e67[];
extern undefined1 LAB_116a3ed0[];
extern undefined1 LAB_116a4aed[];
extern undefined1 LAB_116a4bcd[];
extern undefined1 LAB_116a50f7[];
extern undefined1 LAB_116a51a7[];
extern undefined1 LAB_116a5210[];
extern undefined1 LAB_116a545d[];
extern undefined1 LAB_116a57fd[];
extern undefined1 LAB_116a5abd[];
extern undefined1 LAB_116a5c40[];
extern undefined1 LAB_116a5dc0[];
extern undefined1 LAB_116a5ebd[];
extern undefined1 LAB_116a6030[];
extern undefined1 LAB_116a6090[];
extern undefined1 LAB_116a64f7[];
extern undefined1 LAB_116a6572[];
extern undefined1 LAB_116a65c7[];
extern undefined1 LAB_116a6638[];
extern undefined1 LAB_116a6825[];
extern undefined1 LAB_116a6865[];
extern undefined1 LAB_116a6d8d[];
extern undefined1 LAB_116a6dcd[];
extern undefined1 LAB_116a7370[];
extern undefined1 LAB_116a73d0[];
extern undefined1 LAB_116a7430[];
extern undefined1 LAB_116a7475[];
extern undefined1 LAB_116a74d0[];
extern undefined1 LAB_116a76b0[];
extern undefined1 LAB_116a7830[];
extern undefined1 LAB_116a8030[];
extern undefined1 LAB_116a8090[];
extern undefined1 LAB_116a8492[];
extern undefined1 LAB_116a84e7[];
extern undefined1 LAB_116a8537[];
extern undefined1 LAB_116a8587[];
extern undefined1 LAB_116a8602[];
extern undefined1 LAB_116a8657[];
extern undefined1 LAB_116a86a7[];
extern undefined1 LAB_116a8722[];
extern undefined1 LAB_116a8777[];
extern undefined1 LAB_116a87c7[];
extern undefined1 LAB_116a8817[];
extern undefined1 LAB_116a8867[];
extern undefined1 LAB_116a88b7[];
extern undefined1 LAB_116a8907[];
extern undefined1 LAB_116a8970[];
extern int *stack0x00000004;
extern int *stack0x00000014;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std {}
namespace std { template<class...> struct _Parallelism_allocator { char _pad; _Parallelism_allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct allocator { char _pad; allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct greater { char _pad; greater(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct priority_queue { char _pad; priority_queue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct vector { char _pad; vector(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
typedef void *CHN;
typedef void *WARNING;
struct Base { char _pad; Base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Different { char _pad; Different(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FID_conflict__Tidy { char _pad; FID_conflict__Tidy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Library { char _pad; Library(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Matches { char _pad; Matches(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Multiple { char _pad; Multiple(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Names { char _pad; Names(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Release { char _pad; Release(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Studio { char _pad; Studio(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Visual { char _pad; Visual(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct With { char _pad; With(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; undefined4 * __thiscall FUN_10a22d10(byte param_2); undefined4 * __thiscall FUN_10a22db0(byte param_2); undefined4 * __thiscall FUN_10a22e50(byte param_2); undefined4 * __thiscall FUN_10a22ef0(byte param_2); undefined4 * __thiscall FUN_10a22f90(byte param_2); undefined4 * __thiscall FUN_10a23030(byte param_2); undefined4 * __thiscall FUN_10a230d0(byte param_2); undefined4 * __thiscall FUN_10a23290(byte param_2); undefined4 * __thiscall FUN_10a23330(byte param_2); undefined4 * __thiscall FUN_10a234e0(byte param_2); int __thiscall FUN_10a23590(byte param_2); void __thiscall FUN_10a23910(int *param_2); undefined4 * __thiscall FUN_10a24530(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a24610(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a246f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a247e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a248c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a249a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a24a80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a24b60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a24c40(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a24db0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a24e90(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a24f80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a250d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a251d0(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10a41370(undefined4 param_2); undefined4 * __thiscall FUN_10a41950(byte param_2); undefined4 * __thiscall FUN_10a41a10(byte param_2); undefined4 * __thiscall FUN_10a41ac0(byte param_2); int __thiscall FUN_10a41b60(byte param_2); void __thiscall FUN_10a41ce0(int param_2,int param_3,int param_4); undefined4 * __thiscall FUN_10a41ec0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a41fc0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a420a0(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10a44ae0(undefined4 param_2); undefined4 * __thiscall FUN_10a45120(byte param_2); undefined4 * __thiscall FUN_10a451e0(byte param_2); undefined4 * __thiscall FUN_10a45280(byte param_2); int __thiscall FUN_10a45320(byte param_2); undefined4 * __thiscall FUN_10a458f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a459d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a45ab0(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10a49250(undefined4 param_2); undefined4 * __thiscall FUN_10a49870(byte param_2); undefined4 * __thiscall FUN_10a49930(byte param_2); undefined4 * __thiscall FUN_10a499d0(byte param_2); int __thiscall FUN_10a49a70(byte param_2); undefined4 * __thiscall FUN_10a49f80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a4a060(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a4a140(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10a4cc20(void *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_10a4e980(undefined4 param_2); undefined4 * __thiscall FUN_10a4ea90(undefined4 param_2); undefined4 * __thiscall FUN_10a4eba0(undefined4 param_2); int * __thiscall FUN_10a4ee60(int *param_2); int * __thiscall FUN_10a4ef40(int *param_2); undefined4 * __thiscall FUN_10a4f020(undefined4 param_2); undefined4 * __thiscall FUN_10a4f230(undefined4 param_2); undefined4 * __thiscall FUN_10a50290(undefined4 param_2); undefined4 * __thiscall FUN_10a504a0(undefined4 param_2); int * __thiscall FUN_10a51f30(int *param_2); int * __thiscall FUN_10a52000(int *param_2); undefined4 * __thiscall FUN_10a52670(byte param_2); undefined4 * __thiscall FUN_10a52940(byte param_2); undefined4 * __thiscall FUN_10a529d0(byte param_2); undefined4 * __thiscall FUN_10a52a60(byte param_2); undefined4 * __thiscall FUN_10a52ac0(byte param_2); undefined4 * __thiscall FUN_10a52b20(byte param_2); undefined4 * __thiscall FUN_10a52b80(byte param_2); undefined4 * __thiscall FUN_10a52c20(byte param_2); undefined4 * __thiscall FUN_10a52cc0(byte param_2); undefined4 * __thiscall FUN_10a52d60(byte param_2); undefined4 * __thiscall FUN_10a52e90(byte param_2); undefined4 * __thiscall FUN_10a52fc0(byte param_2); undefined4 * __thiscall FUN_10a53060(byte param_2); undefined4 * __thiscall FUN_10a53100(byte param_2); undefined4 * __thiscall FUN_10a531a0(byte param_2); undefined4 * __thiscall FUN_10a53240(byte param_2); undefined4 * __thiscall FUN_10a532e0(byte param_2); undefined4 * __thiscall FUN_10a53480(byte param_2); undefined4 * __thiscall FUN_10a53590(byte param_2); void __thiscall FUN_10a53ab0(int param_2,int param_3,int param_4); void __thiscall FUN_10a53b20(int param_2,int param_3,int param_4); void __thiscall FUN_10a53bb0(int param_2,int param_3,int param_4); void __thiscall FUN_10a53f50(int *param_2); undefined4 * __thiscall FUN_10a55020(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a55180(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a552e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a553c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a55510(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a55650(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a55730(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a55810(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a558f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a559d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a55ab0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a55bd0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a55cd0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a55e30(undefined4 param_2,undefined4 param_3,undefined4 param_4); void __thiscall FUN_10a56100(undefined4 *param_2,int *param_3); void __thiscall FUN_10a56210(undefined4 *param_2,int *param_3); undefined4 __thiscall FUN_10a5bd50(undefined4 param_2); void __thiscall FUN_10a64520(void *param_2,int param_3,int param_4); undefined4 * __thiscall FUN_10a67810(byte param_2); undefined4 * __thiscall FUN_10a67ab0(byte param_2); undefined4 * __thiscall FUN_10a67b50(byte param_2); undefined4 * __thiscall FUN_10a67bf0(byte param_2); undefined4 * __thiscall FUN_10a67c90(byte param_2); undefined4 * __thiscall FUN_10a67d30(byte param_2); undefined4 * __thiscall FUN_10a67dd0(byte param_2); undefined4 * __thiscall FUN_10a67e70(byte param_2); undefined4 * __thiscall FUN_10a67f10(byte param_2); undefined4 * __thiscall FUN_10a67fb0(byte param_2); undefined4 * __thiscall FUN_10a68050(byte param_2); undefined4 * __thiscall FUN_10a680f0(byte param_2); undefined4 * __thiscall FUN_10a68190(byte param_2); undefined4 * __thiscall FUN_10a68390(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a68470(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a68550(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a68630(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a68710(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a687f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a688d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a689b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a68a90(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a68b70(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a68c50(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a68d30(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a68e10(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10a71f20(byte param_2); undefined4 * __thiscall FUN_10a72010(byte param_2); undefined4 * __thiscall FUN_10a720b0(byte param_2); undefined4 * __thiscall FUN_10a72150(byte param_2); undefined4 * __thiscall FUN_10a72290(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a72370(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a72450(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a72530(undefined4 param_2,undefined4 param_3,undefined4 param_4); int * __thiscall FUN_10a76fd0(int *param_2); int * __thiscall FUN_10a77040(int *param_2); undefined4 * __thiscall FUN_10a772a0(byte param_2); undefined4 * __thiscall FUN_10a774d0(byte param_2); undefined4 * __thiscall FUN_10a77570(byte param_2); void __thiscall FUN_10a77840(int param_2,int param_3,int param_4); undefined4 * __thiscall FUN_10a78450(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a78560(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a78640(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_10a78720(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10a7dc50(byte param_2); undefined4 * __thiscall FUN_10a7dd40(byte param_2); undefined4 * __thiscall FUN_10a7dde0(byte param_2); undefined4 * __thiscall FUN_10a7de80(byte param_2); undefined4 * __thiscall FUN_10a7dfc0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a7e0a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a7e180(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a7e260(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10a80ef0(byte param_2); undefined4 * __thiscall FUN_10a80fb0(byte param_2); undefined4 * __thiscall FUN_10a81220(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a81460(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 __thiscall FUN_10a837e0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); undefined4 __thiscall FUN_10a83870(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5); undefined4 __thiscall FUN_10a83900(undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5); undefined4 __thiscall FUN_10a83990(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6); undefined4 __thiscall FUN_10a83a20(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 param_7); undefined4 __thiscall FUN_10a83ac0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8); undefined4 __thiscall FUN_10a84650(undefined4 param_2,undefined4 *param_3); undefined4 * __thiscall FUN_10a84950(byte param_2); undefined4 * __thiscall FUN_10a84a40(byte param_2); undefined4 * __thiscall FUN_10a84ae0(byte param_2); undefined4 * __thiscall FUN_10a84b80(byte param_2); undefined4 * __thiscall FUN_10a84cc0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a84da0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a84e80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a84f60(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10a89fc0(byte param_2); undefined4 * __thiscall FUN_10a8a0e0(byte param_2); undefined4 * __thiscall FUN_10a8a180(byte param_2); undefined4 * __thiscall FUN_10a8a220(byte param_2); undefined4 * __thiscall FUN_10a8a2c0(byte param_2); undefined4 * __thiscall FUN_10a8a500(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a8a5e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a8a6c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a8a7a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a8a880(undefined4 param_2,undefined4 param_3,undefined4 param_4); void __thiscall FUN_10a90d40(int param_2,int *param_3); undefined4 * __thiscall FUN_10a91d60(undefined4 param_2); undefined4 * __thiscall FUN_10a92dd0(byte param_2); undefined4 * __thiscall FUN_10a92f80(byte param_2); undefined4 * __thiscall FUN_10a93020(byte param_2); undefined4 * __thiscall FUN_10a930c0(byte param_2); undefined4 * __thiscall FUN_10a93160(byte param_2); undefined4 * __thiscall FUN_10a93270(byte param_2); undefined4 * __thiscall FUN_10a93320(byte param_2); undefined4 * __thiscall FUN_10a93430(byte param_2); int __thiscall FUN_10a934d0(byte param_2); undefined4 * __thiscall FUN_10a935f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a936d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a937b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a93890(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a93980(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a93a80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a93b70(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a93c50(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10a97940(undefined4 *param_2); undefined4 * __thiscall FUN_10a9bd30(byte param_2); undefined4 * __thiscall FUN_10a9beb0(byte param_2); undefined4 * __thiscall FUN_10a9bf50(byte param_2); undefined4 * __thiscall FUN_10a9bff0(byte param_2); undefined4 * __thiscall FUN_10a9c090(byte param_2); undefined4 * __thiscall FUN_10a9c1b0(byte param_2); undefined4 * __thiscall FUN_10a9c250(byte param_2); undefined4 * __thiscall FUN_10a9c970(undefined4 *param_2); undefined4 * __thiscall FUN_10a9ca80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a9cb60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a9cc40(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a9cd20(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a9ce70(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a9cf50(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10a9d030(undefined4 param_2,undefined4 param_3,undefined4 param_4); void __thiscall FUN_10aa2750(int *param_2); undefined4 * __thiscall FUN_10aa6830(byte param_2); undefined4 * __thiscall FUN_10aa6b90(byte param_2); undefined4 * __thiscall FUN_10aa6c30(byte param_2); undefined4 * __thiscall FUN_10aa6cd0(byte param_2); undefined4 * __thiscall FUN_10aa6d70(byte param_2); undefined4 * __thiscall FUN_10aa6e10(byte param_2); undefined4 * __thiscall FUN_10aa6eb0(byte param_2); undefined4 * __thiscall FUN_10aa6f50(byte param_2); undefined4 * __thiscall FUN_10aa6ff0(byte param_2); undefined4 * __thiscall FUN_10aa7090(byte param_2); undefined4 * __thiscall FUN_10aa7130(byte param_2); undefined4 * __thiscall FUN_10aa71d0(byte param_2); undefined4 * __thiscall FUN_10aa7270(byte param_2); undefined4 * __thiscall FUN_10aa7310(byte param_2); undefined4 * __thiscall FUN_10aa73b0(byte param_2); undefined4 * __thiscall FUN_10aa7450(byte param_2); undefined4 * __thiscall FUN_10aa74f0(byte param_2); undefined4 * __thiscall FUN_10aa7740(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aa7870(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aa7950(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aa7a30(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aa7b10(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aa7bf0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aa7cd0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aa7db0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aa7e90(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aa7f70(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aa8050(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aa8130(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aa8210(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aa82f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aa83d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aa84b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aa8590(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void __thiscall FUN_10aa8680(char param_2); undefined4 * __thiscall FUN_10ab34a0(byte param_2); undefined4 * __thiscall FUN_10ab3530(byte param_2); undefined4 * __thiscall FUN_10ab3650(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ab3730(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10ab4440(undefined4 param_2); undefined4 * __thiscall FUN_10ab4950(byte param_2); undefined4 * __thiscall FUN_10ab4a10(byte param_2); undefined4 * __thiscall FUN_10ab4ab0(byte param_2); undefined4 * __thiscall FUN_10ab4be0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ab4cc0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ab4da0(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 __thiscall FUN_10ab5570(undefined4 param_2); undefined4 * __thiscall FUN_10ab6230(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10abf1a0(byte param_2); undefined4 * __thiscall FUN_10abf8f0(byte param_2); undefined4 * __thiscall FUN_10abf990(byte param_2); undefined4 * __thiscall FUN_10abfa30(byte param_2); undefined4 * __thiscall FUN_10abfad0(byte param_2); undefined4 * __thiscall FUN_10abfb70(byte param_2); undefined4 * __thiscall FUN_10abfc10(byte param_2); undefined4 * __thiscall FUN_10abfcb0(byte param_2); undefined4 * __thiscall FUN_10abfd50(byte param_2); undefined4 * __thiscall FUN_10abfdf0(byte param_2); undefined4 * __thiscall FUN_10abfe90(byte param_2); undefined4 * __thiscall FUN_10abff30(byte param_2); undefined4 * __thiscall FUN_10abffd0(byte param_2); undefined4 * __thiscall FUN_10ac0070(byte param_2); undefined4 * __thiscall FUN_10ac0110(byte param_2); undefined4 * __thiscall FUN_10ac01b0(byte param_2); undefined4 * __thiscall FUN_10ac0250(byte param_2); undefined4 * __thiscall FUN_10ac02f0(byte param_2); undefined4 * __thiscall FUN_10ac0390(byte param_2); undefined4 * __thiscall FUN_10ac0430(byte param_2); undefined4 * __thiscall FUN_10ac04d0(byte param_2); undefined4 * __thiscall FUN_10ac0570(byte param_2); undefined4 * __thiscall FUN_10ac0610(byte param_2); undefined4 * __thiscall FUN_10ac06b0(byte param_2); undefined4 * __thiscall FUN_10ac0750(byte param_2); undefined4 * __thiscall FUN_10ac07f0(byte param_2); undefined4 * __thiscall FUN_10ac0890(byte param_2); undefined4 * __thiscall FUN_10ac0930(byte param_2); undefined4 * __thiscall FUN_10ac09d0(byte param_2); undefined4 * __thiscall FUN_10ac0a70(byte param_2); undefined4 * __thiscall FUN_10ac0b10(byte param_2); undefined4 * __thiscall FUN_10ac0bb0(byte param_2); undefined4 * __thiscall FUN_10ac0c50(byte param_2); undefined4 * __thiscall FUN_10ac0cf0(byte param_2); undefined4 * __thiscall FUN_10ac0d90(byte param_2); undefined4 * __thiscall FUN_10ac0e30(byte param_2); undefined4 * __thiscall FUN_10ac0ed0(byte param_2); undefined4 * __thiscall FUN_10ac0f70(byte param_2); undefined4 * __thiscall FUN_10ac1180(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac1260(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac1340(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac1420(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac1500(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac15e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac16c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac17a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac1880(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac1960(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac1a40(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac1b20(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac1c00(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac1ce0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac1dc0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac1ea0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac1f80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac2060(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac2140(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac2220(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac2300(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac23e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac24c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac25a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac2680(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac2760(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac2840(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac2920(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac2a00(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac2ae0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac2bc0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac2ca0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac2d80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac2e60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac2f40(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac3020(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ac3100(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ae6d30(byte param_2); undefined4 * __thiscall FUN_10ae6e20(byte param_2); undefined4 * __thiscall FUN_10ae6ec0(byte param_2); undefined4 * __thiscall FUN_10ae6f60(byte param_2); undefined4 * __thiscall FUN_10ae70a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ae7180(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ae7260(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10ae7340(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10aeafb0(byte param_2); undefined4 * __thiscall FUN_10aeb190(byte param_2); undefined4 * __thiscall FUN_10aeb230(byte param_2); undefined4 * __thiscall FUN_10aeb2d0(byte param_2); undefined4 * __thiscall FUN_10aeb370(byte param_2); undefined4 * __thiscall FUN_10aeb410(byte param_2); undefined4 * __thiscall FUN_10aeb4b0(byte param_2); undefined4 * __thiscall FUN_10aeb550(byte param_2); undefined4 * __thiscall FUN_10aeb5f0(byte param_2); undefined4 * __thiscall FUN_10aeb7a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aeb880(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aeb960(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aeba40(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aebb20(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aebc00(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aebce0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aebdc0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10aebea0(undefined4 param_2,undefined4 param_3,undefined4 param_4); int * __thiscall FUN_10af3870(int *param_2); int * __thiscall FUN_10af47d0(int *param_2,int *param_3); int * __thiscall FUN_10af4a00(int *param_2,int *param_3); int * __thiscall FUN_10af5a00(int *param_2); undefined4 * __thiscall FUN_10af5be0(undefined4 param_2); undefined4 * __thiscall FUN_10af6020(undefined4 param_2); int __thiscall FUN_10af6f20(int *param_2); undefined4 * __thiscall FUN_10af7420(byte param_2); undefined4 * __thiscall FUN_10af7670(byte param_2); undefined4 * __thiscall FUN_10af7710(byte param_2); undefined4 * __thiscall FUN_10af77b0(byte param_2); undefined4 * __thiscall FUN_10af7850(byte param_2); undefined4 * __thiscall FUN_10af78f0(byte param_2); undefined4 * __thiscall FUN_10af8610(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10af8700(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10af87e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10af88c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10af89b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10af8a90(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10b00090(byte param_2); undefined4 * __thiscall FUN_10b00180(byte param_2); undefined4 * __thiscall FUN_10b00350(byte param_2); undefined4 * __thiscall FUN_10b00490(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b00680(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b00760(undefined4 param_2,undefined4 param_3,undefined4 param_4); int * __thiscall FUN_10b02ec0(int *param_2,int *param_3); void __thiscall FUN_10b034d0(undefined4 param_2); int * __thiscall FUN_10b03580(int *param_2,int *param_3); void __thiscall FUN_10b03bc0(int *param_2,int *param_3); undefined4 * __thiscall FUN_10b03ff0(undefined4 param_2); undefined4 * __thiscall FUN_10b04560(undefined4 param_2); undefined4 * __thiscall FUN_10b048c0(undefined4 param_2); undefined4 * __thiscall FUN_10b05270(byte param_2); undefined4 * __thiscall FUN_10b05360(byte param_2); undefined4 * __thiscall FUN_10b05470(byte param_2); undefined4 * __thiscall FUN_10b05510(byte param_2); undefined4 * __thiscall FUN_10b055b0(byte param_2); int __thiscall FUN_10b05650(byte param_2); void __thiscall FUN_10b05820(int param_2,int param_3,int param_4); void __thiscall FUN_10b05c80(int param_2); void __thiscall FUN_10b05d20(int *param_2); undefined4 * __thiscall FUN_10b06590(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b06670(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b067d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b068b0(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 __thiscall FUN_10b09930(undefined4 param_2,undefined4 *param_3); void __thiscall FUN_10b09dd0(undefined4 *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_10b0ac60(undefined4 param_2); undefined4 * __thiscall FUN_10b0ad70(undefined4 param_2); undefined4 * __thiscall FUN_10b0ae80(undefined4 param_2); undefined4 * __thiscall FUN_10b0afb0(undefined4 *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_10b0b150(undefined4 param_2); undefined4 * __thiscall FUN_10b0b770(undefined4 param_2); undefined4 * __thiscall FUN_10b0bc20(undefined4 param_2); undefined4 * __thiscall FUN_10b0e280(byte param_2); undefined4 * __thiscall FUN_10b0e580(byte param_2); undefined4 * __thiscall FUN_10b0e5e0(byte param_2); undefined4 * __thiscall FUN_10b0e640(byte param_2); undefined4 * __thiscall FUN_10b0e6f0(byte param_2); undefined4 * __thiscall FUN_10b0e790(byte param_2); undefined4 * __thiscall FUN_10b0e830(byte param_2); undefined4 * __thiscall FUN_10b0e8d0(byte param_2); undefined4 * __thiscall FUN_10b0e970(byte param_2); undefined4 * __thiscall FUN_10b0ea10(byte param_2); undefined4 * __thiscall FUN_10b0eab0(byte param_2); undefined4 * __thiscall FUN_10b0eb50(byte param_2); undefined4 * __thiscall FUN_10b0ebf0(byte param_2); undefined4 * __thiscall FUN_10b0eca0(byte param_2); undefined4 * __thiscall FUN_10b0ed40(byte param_2); undefined4 * __thiscall FUN_10b0ede0(byte param_2); undefined4 * __thiscall FUN_10b0ee80(byte param_2); undefined4 * __thiscall FUN_10b0ef90(byte param_2); undefined4 * __thiscall FUN_10b0f740(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b0f8a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b0f980(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b0fa80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b0fb60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b0fcc0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b0fda0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b0fe80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b0ffe0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b100e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b101d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b102b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b10390(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b10490(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_10b10570(undefined4 param_2,undefined4 param_3,undefined4 param_4); };
using namespace std;
void FUN_10a3d070(void);
void __fastcall FUN_10a3d0f0(int *param_1);
void FUN_10a40780(void);
void __fastcall FUN_10a417c0(int param_1);
void __fastcall FUN_10a44f60(int param_1);
void __stdcall FUN_10a45490(undefined4 *param_1);
void __stdcall FUN_10a456c0(undefined4 *param_1);
undefined4 __stdcall FUN_10a46e30(undefined4 param_1);
void __stdcall FUN_10a48c60(int *param_1);
void __fastcall FUN_10a496b0(int param_1);
void __stdcall FUN_10a4c400(int *param_1);
void FUN_10a4c9a0(undefined4 *param_1,undefined4 *param_2);
void FUN_10a4ca40(undefined4 *param_1,undefined4 *param_2);
void FUN_10a4d8d0(undefined4 param_1,undefined4 *param_2);
void FUN_10a4d940(undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_10a512a0(undefined4 *param_1);
void __fastcall FUN_10a51310(undefined4 *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10a51480(int *param_1);
void __fastcall FUN_10a51600(undefined4 *param_1);
void __fastcall FUN_10a516f0(undefined4 *param_1);
void __fastcall FUN_10a51970(undefined4 *param_1);
void __fastcall FUN_10a51ad0(undefined4 *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10a54080(int *param_1);
void __fastcall FUN_10a540f0(int *param_1);
void __fastcall FUN_10a54170(int *param_1);
void * FUN_10a54750(uint param_1);
void * FUN_10a547c0(uint param_1);
void * FUN_10a54830(uint param_1);
void __fastcall FUN_10a548c0(int param_1);
void __fastcall FUN_10a54920(int param_1);
int __fastcall FUN_10a61720(int param_1);
void FUN_10a63b00(void);
void __fastcall FUN_10a76940(undefined4 *param_1);
void __fastcall FUN_10a76a00(undefined4 *param_1);
void __fastcall FUN_10a76a70(undefined4 *param_1);
void __fastcall FUN_10a76b10(int *param_1);
void __fastcall FUN_10a77a10(int *param_1);
void __fastcall FUN_10a92930(undefined4 *param_1);
void __fastcall FUN_10a92a70(undefined4 *param_1);
void FUN_10a99a50(void);
void FUN_10a99e40(void);
void FUN_10a9a180(void);
void __fastcall FUN_10a9b8f0(undefined4 *param_1);
void __fastcall FUN_10aa2800(int param_1);
void FUN_10ab2e30(void);
void FUN_10ab5fe0(void);
int __fastcall FUN_10ae5e70(int param_1);
void FUN_10af3560(void);
int * __fastcall FUN_10af7240(int *param_1);
void __fastcall FUN_10afec30(int param_1);
void __fastcall FUN_10afef40(int param_1);
undefined4 __stdcall FUN_10b01760(undefined4 param_1);
void __fastcall FUN_10b04ef0(int *param_1);
void __fastcall FUN_10b05080(int param_1);
void __fastcall FUN_10b05d90(int *param_1);
undefined4 __stdcall FUN_10b077d0(undefined4 param_1);
undefined4 __stdcall FUN_10b07980(undefined4 param_1);
void __fastcall FUN_10b0db80(undefined4 *param_1);
int * __fastcall FUN_10b0df40(int *param_1);
// Reference entry 10a22d10; body size 68 bytes.
#line 1 "ENTRY_10a22d10"

undefined4 * __thiscall Recovered_Bulk::FUN_10a22d10(byte param_2)
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


// Reference entry 10a22db0; body size 68 bytes.
#line 1 "ENTRY_10a22db0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a22db0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10a22e50; body size 68 bytes.
#line 1 "ENTRY_10a22e50"

undefined4 * __thiscall Recovered_Bulk::FUN_10a22e50(byte param_2)
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


// Reference entry 10a22ef0; body size 68 bytes.
#line 1 "ENTRY_10a22ef0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a22ef0(byte param_2)
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


// Reference entry 10a22f90; body size 68 bytes.
#line 1 "ENTRY_10a22f90"

undefined4 * __thiscall Recovered_Bulk::FUN_10a22f90(byte param_2)
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


// Reference entry 10a23030; body size 68 bytes.
#line 1 "ENTRY_10a23030"

undefined4 * __thiscall Recovered_Bulk::FUN_10a23030(byte param_2)
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


// Reference entry 10a230d0; body size 68 bytes.
#line 1 "ENTRY_10a230d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a230d0(byte param_2)
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


// Reference entry 10a23290; body size 68 bytes.
#line 1 "ENTRY_10a23290"

undefined4 * __thiscall Recovered_Bulk::FUN_10a23290(byte param_2)
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


// Reference entry 10a23330; body size 68 bytes.
#line 1 "ENTRY_10a23330"

undefined4 * __thiscall Recovered_Bulk::FUN_10a23330(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10a234e0; body size 81 bytes.
#line 1 "ENTRY_10a234e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a234e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_101a2bf0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10a23590; body size 179 bytes.
#line 1 "ENTRY_10a23590"

int __thiscall Recovered_Bulk::FUN_10a23590(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1167ce50);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10365150(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  piVar1 = (int *)(*(int **)(param_1 + 0xf8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(*piVar1 + 8))();
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
    thunk_FUN_1148a50e(param_1,0x144);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10a23910; body size 123 bytes.
#line 1 "ENTRY_10a23910"

void __thiscall Recovered_Bulk::FUN_10a23910(int *param_2)
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
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = (int)(*param_2);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = (int)(0);
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// Reference entry 10a24530; body size 168 bytes.
#line 1 "ENTRY_10a24530"

undefined4 * __thiscall Recovered_Bulk::FUN_10a24530(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1167d2c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceConcurrencyBondingConcurrencyErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyBondingConcurrencyErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyBondingConcurrencyErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyBondingConcurrencyErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a24610; body size 168 bytes.
#line 1 "ENTRY_10a24610"

undefined4 * __thiscall Recovered_Bulk::FUN_10a24610(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1167d317);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceConcurrencyBondingConcurrencyFatalErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyBondingConcurrencyFatalErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyBondingConcurrencyFatalErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyBondingConcurrencyFatalErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a246f0; body size 188 bytes.
#line 1 "ENTRY_10a246f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a246f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1167d367);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceConcurrencyBondingConfirmationPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyBondingConfirmationPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyBondingConfirmationPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyBondingConfirmationPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a247e0; body size 168 bytes.
#line 1 "ENTRY_10a247e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a247e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1167d3b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceConcurrencyConfirmationPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyConfirmationPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyConfirmationPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyConfirmationPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a248c0; body size 168 bytes.
#line 1 "ENTRY_10a248c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a248c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1167d407);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceConcurrencyFatalMissingErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyFatalMissingErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyFatalMissingErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyFatalMissingErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a249a0; body size 168 bytes.
#line 1 "ENTRY_10a249a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a249a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1167d457);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceConcurrencyFatalRemoveErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyFatalRemoveErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyFatalRemoveErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyFatalRemoveErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a24a80; body size 175 bytes.
#line 1 "ENTRY_10a24a80"

undefined4 * __thiscall Recovered_Bulk::FUN_10a24a80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1167d4a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceConcurrencyHTPrimaryGAPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyHTPrimaryGAPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyHTPrimaryGAPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyHTPrimaryGAPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a24b60; body size 175 bytes.
#line 1 "ENTRY_10a24b60"

undefined4 * __thiscall Recovered_Bulk::FUN_10a24b60(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1167d4f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceConcurrencyHTSurroundsGAPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyHTSurroundsGAPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyHTSurroundsGAPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyHTSurroundsGAPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a24c40; body size 287 bytes.
#line 1 "ENTRY_10a24c40"

undefined4 * __thiscall Recovered_Bulk::FUN_10a24c40(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1167d56b);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0x144));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceConcurrencyIssuePage);
    puVar1[4] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyIssuePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyIssuePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyIssuePage;
    puVar1[0x38] = 0;
    *(undefined1 *)(puVar1 + 0x39) = 0;
    *(undefined2 *)((int)puVar1 + 0xe6) = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    thunk_FUN_10c5f8a0(&DAT_1186d2ee);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    thunk_FUN_10bd4a00(1,0);
    puVar1[0x4f] = 0;
    puVar1[0x50] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a24db0; body size 168 bytes.
#line 1 "ENTRY_10a24db0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a24db0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1167d5b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceConcurrencyMissingProductPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyMissingProductPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyMissingProductPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyMissingProductPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a24e90; body size 185 bytes.
#line 1 "ENTRY_10a24e90"

undefined4 * __thiscall Recovered_Bulk::FUN_10a24e90(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1167d607);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceConcurrencyRemoveErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyRemoveErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyRemoveErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyRemoveErrorPage;
    puVar1[0x38] = 0;
    *(undefined1 *)(puVar1 + 0x39) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a24f80; body size 257 bytes.
#line 1 "ENTRY_10a24f80"

undefined4 * __thiscall Recovered_Bulk::FUN_10a24f80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1167d66d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0x130));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceConcurrencyServiceSelectionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyServiceSelectionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyServiceSelectionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyServiceSelectionPage;
    uVar3 = (uint)(rand());
    uVar3 = (uint)(uVar3 & 0x80000001);
    bVar4 = (bool)(uVar3 == 0);
    if ((int)uVar3 < 0) {
      bVar4 = (bool)((uVar3 - 1 | 0xfffffffe) == 0xffffffff);
    }
    *(undefined4 *)((int)puVar1 + 0xe1) = 0;
    *(bool *)(puVar1 + 0x38) = bVar4;
    *(undefined1 *)((int)puVar1 + 0xe5) = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    thunk_FUN_10bd4a00(1,0);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a250d0; body size 205 bytes.
#line 1 "ENTRY_10a250d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a250d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1167d6b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceConcurrencyStereoGAPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyStereoGAPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyStereoGAPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyStereoGAPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a251d0; body size 256 bytes.
#line 1 "ENTRY_10a251d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a251d0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1167d744);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x144));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar3);
    puVar1 = (undefined4 *)(puVar2 + 0x23);
    local_8 = (undefined4)(2);
    thunk_FUN_10cf2f30(puVar1);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    thunk_FUN_10d9e2b0(puVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceConcurrencyWizard);
    puVar2[4] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyWizard;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceConcurrencyWizard);
    puVar2[0x2a] = (uint)&ghidra_vftable_SCVoiceServiceConcurrencyWizard;
    thunk_FUN_10bd4a00(1,0);
    *(undefined1 *)(puVar2 + 0x50) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a3d070; body size 96 bytes.
#line 1 "ENTRY_10a3d070"

void FUN_10a3d070(void)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116809ed);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  thunk_FUN_1064d7a0(&stack0x00000004);
  thunk_FUN_10bed460();
  thunk_FUN_1036e480(uVar1);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10a3d0f0; body size 125 bytes.
#line 1 "ENTRY_10a3d0f0"

void __fastcall FUN_10a3d0f0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11680a2d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (int *)(param_1);
  iVar1 = (int)(thunk_FUN_10d9e5c0(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  param_1[0x43] = iVar1;
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10cf34e0(&local_14));
  local_8 = (undefined4)(0);
  thunk_FUN_10bed390(*puVar2);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10a40780; body size 121 bytes.
#line 1 "ENTRY_10a40780"

void FUN_10a40780(void)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_2c [24];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168149d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_105a24b0(local_2c);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(thunk_FUN_10786100(uVar2));
  uVar1 = (undefined1)(thunk_FUN_105a2bf0(uVar3));
  local_14 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_14 + 1)) << 8 | (uint)(uVar1)));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_105a0440();
  thunk_FUN_10bed510(local_14);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10a41370; body size 165 bytes.
#line 1 "ENTRY_10a41370"

undefined4 * __thiscall Recovered_Bulk::FUN_10a41370(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168182b);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceLocaleWizard);
  param_1[4] = (uint)&ghidra_vftable_SCVoiceServiceLocaleWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCVoiceServiceLocaleWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCVoiceServiceLocaleWizard;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10a417c0; body size 144 bytes.
#line 1 "ENTRY_10a417c0"

void __fastcall FUN_10a417c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11681930);
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


// Reference entry 10a41950; body size 68 bytes.
#line 1 "ENTRY_10a41950"

undefined4 * __thiscall Recovered_Bulk::FUN_10a41950(byte param_2)
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


// Reference entry 10a41a10; body size 81 bytes.
#line 1 "ENTRY_10a41a10"

undefined4 * __thiscall Recovered_Bulk::FUN_10a41a10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10247e10();
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


// Reference entry 10a41ac0; body size 68 bytes.
#line 1 "ENTRY_10a41ac0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a41ac0(byte param_2)
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


// Reference entry 10a41b60; body size 168 bytes.
#line 1 "ENTRY_10a41b60"

int __thiscall Recovered_Bulk::FUN_10a41b60(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11681960);
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


// Reference entry 10a41ce0; body size 104 bytes.
#line 1 "ENTRY_10a41ce0"

void __thiscall Recovered_Bulk::FUN_10a41ce0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10245f80(*param_1,param_1[1],param_1);
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


// Reference entry 10a41ec0; body size 198 bytes.
#line 1 "ENTRY_10a41ec0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a41ec0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11681c57);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xec));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceLocaleSelectionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVoiceServiceLocaleSelectionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVoiceServiceLocaleSelectionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVoiceServiceLocaleSelectionPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a41fc0; body size 168 bytes.
#line 1 "ENTRY_10a41fc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a41fc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11681ca7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceLocaleUnsupportedPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVoiceServiceLocaleUnsupportedPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVoiceServiceLocaleUnsupportedPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVoiceServiceLocaleUnsupportedPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a420a0; body size 230 bytes.
#line 1 "ENTRY_10a420a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a420a0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11681d26);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceLocaleWizard);
    puVar2[4] = (uint)&ghidra_vftable_SCVoiceServiceLocaleWizard;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceLocaleWizard);
    puVar2[0x2a] = (uint)&ghidra_vftable_SCVoiceServiceLocaleWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a44ae0; body size 192 bytes.
#line 1 "ENTRY_10a44ae0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a44ae0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11682539);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWacConnectWizard);
  param_1[4] = (uint)&ghidra_vftable_SCWacConnectWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCWacConnectWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCWacConnectWizard;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10a44f60; body size 186 bytes.
#line 1 "ENTRY_10a44f60"

void __fastcall FUN_10a44f60(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11682640);
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


// Reference entry 10a45120; body size 68 bytes.
#line 1 "ENTRY_10a45120"

undefined4 * __thiscall Recovered_Bulk::FUN_10a45120(byte param_2)
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


// Reference entry 10a451e0; body size 68 bytes.
#line 1 "ENTRY_10a451e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a451e0(byte param_2)
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


// Reference entry 10a45280; body size 68 bytes.
#line 1 "ENTRY_10a45280"

undefined4 * __thiscall Recovered_Bulk::FUN_10a45280(byte param_2)
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


// Reference entry 10a45320; body size 210 bytes.
#line 1 "ENTRY_10a45320"

int __thiscall Recovered_Bulk::FUN_10a45320(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11682670);
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


// Reference entry 10a45490; body size 442 bytes.
#line 1 "ENTRY_10a45490"

void __stdcall FUN_10a45490(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  bool bVar4;
  undefined1 auStack_e8 [32];
  undefined4 uStack_c8;
  int *piStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_98;
  int *local_6c;
  int *local_68;
  int *local_40;
  undefined1 local_3c [36];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116829a1);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uStack_98 = (undefined4)(0x10a454d8);
  thunk_FUN_10cf34e0();
  local_8 = (undefined4)(0);
  uStack_98 = (undefined4)(0x10a454e6);
  piVar1 = (int *)((int *)thunk_FUN_10c97610());
  piVar3 = (int *)((int *)*piVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar1 = (int)(0);
  if (piVar3 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_68 != (int *)0x0) {
    (**(code **)(*local_68 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (local_6c != (int *)0x0) {
    (**(code **)(*local_6c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  uStack_98 = (undefined4)(0x10a45534);
  pvVar2 = (void *)(operator_new(0x1a8));
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  bVar4 = (bool)(pvVar2 == (void *)0x0);
  if (bVar4) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    uStack_bc = (undefined4)(5000);
    uStack_c0 = (undefined4)(0x14);
    piStack_c4 = (int *)((int *)0x10a45553);
    thunk_FUN_105ee3e0();
    uStack_bc = (undefined4)(0x10a4555b);
    thunk_FUN_10224630();
    uStack_98 = (undefined4)(1000);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    uStack_c8 = (undefined4)(0x10a45580);
    piStack_c4 = (int *)(piVar3);
    thunk_FUN_105eda70();
    local_8 = (undefined4)(9);
    thunk_FUN_105f0080(auStack_e8,local_3c);
    thunk_FUN_102244a0();
    piStack_c4 = (int *)((int *)0x10a455af);
    piVar3 = (int *)((int *)thunk_FUN_10e09ee0());
  }
  local_8 = (undefined4)(0xb);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  if (!bVar4) {
    if (local_40 != (int *)0x0) {
      uStack_98 = (undefined4)(0x10a455ed);
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if ((!bVar4) && (local_18 != (int *)0x0)) {
    uStack_98 = (undefined4)(0x10a45611);
    (**(code **)(*local_18 + 0x10))();
    local_18 = (int *)((int *)0x0);
  }
  local_8 = (undefined4)(0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10a456c0; body size 442 bytes.
#line 1 "ENTRY_10a456c0"

void __stdcall FUN_10a456c0(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  bool bVar4;
  undefined1 auStack_e8 [32];
  undefined4 uStack_c8;
  int *piStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_98;
  int *local_6c;
  int *local_68;
  int *local_40;
  undefined1 local_3c [36];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11682a51);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uStack_98 = (undefined4)(0x10a45708);
  thunk_FUN_10cf34e0();
  local_8 = (undefined4)(0);
  uStack_98 = (undefined4)(0x10a45716);
  piVar1 = (int *)((int *)thunk_FUN_10c97610());
  piVar3 = (int *)((int *)*piVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar1 = (int)(0);
  if (piVar3 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_68 != (int *)0x0) {
    (**(code **)(*local_68 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (local_6c != (int *)0x0) {
    (**(code **)(*local_6c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  uStack_98 = (undefined4)(0x10a45764);
  pvVar2 = (void *)(operator_new(0x1a8));
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  bVar4 = (bool)(pvVar2 == (void *)0x0);
  if (bVar4) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    uStack_bc = (undefined4)(5000);
    uStack_c0 = (undefined4)(2);
    piStack_c4 = (int *)((int *)0x10a45783);
    thunk_FUN_105ee3e0();
    uStack_bc = (undefined4)(0x10a4578b);
    thunk_FUN_10224630();
    uStack_98 = (undefined4)(1000);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    uStack_c8 = (undefined4)(0x10a457b0);
    piStack_c4 = (int *)(piVar3);
    thunk_FUN_105eda70();
    local_8 = (undefined4)(9);
    thunk_FUN_105f0080(auStack_e8,local_3c);
    thunk_FUN_102244a0();
    piStack_c4 = (int *)((int *)0x10a457df);
    piVar3 = (int *)((int *)thunk_FUN_10e09ee0());
  }
  local_8 = (undefined4)(0xb);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  if (!bVar4) {
    if (local_40 != (int *)0x0) {
      uStack_98 = (undefined4)(0x10a4581d);
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if ((!bVar4) && (local_18 != (int *)0x0)) {
    uStack_98 = (undefined4)(0x10a45841);
    (**(code **)(*local_18 + 0x10))();
    local_18 = (int *)((int *)0x0);
  }
  local_8 = (undefined4)(0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10a458f0; body size 168 bytes.
#line 1 "ENTRY_10a458f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a458f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11682ab7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWacConnectIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCWacConnectIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCWacConnectIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCWacConnectIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a459d0; body size 168 bytes.
#line 1 "ENTRY_10a459d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a459d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11682b07);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWacConnectScanningPage);
    puVar1[4] = (uint)&ghidra_vftable_SCWacConnectScanningPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCWacConnectScanningPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCWacConnectScanningPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a45ab0; body size 251 bytes.
#line 1 "ENTRY_10a45ab0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a45ab0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11682b94);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWacConnectWizard);
    puVar2[4] = (uint)&ghidra_vftable_SCWacConnectWizard;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWacConnectWizard);
    puVar2[0x2a] = (uint)&ghidra_vftable_SCWacConnectWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a46e30; body size 398 bytes.
#line 1 "ENTRY_10a46e30"

undefined4 __stdcall FUN_10a46e30(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
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
  puStack_c = (undefined1 *)(LAB_11682e4d);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a4414);
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
  puVar8 = (undefined1 *)(local_54);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  uVar2 = (undefined1)(thunk_FUN_10a47030(puVar8,uVar3));
  piVar4 = (int *)((int *)thunk_FUN_106190a0(uVar2,puVar8));
  piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0x10))(local_74));
  uVar5 = (undefined4)((**(code **)(*piVar4 + 4))());
  thunk_FUN_105f5a00(uVar5);
  puVar1 = (undefined4 *)(local_1c);
  puVar7 = (undefined4 *)(local_20);
  if (local_20 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar7) != puVar1; puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar3 = (uint)(local_18 - (int)local_20 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_20);
    if (0xfff < uVar3) {
      puVar7 = (undefined4 *)((undefined4 *)local_20[-1]);
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar7))) goto LAB_10a46f6c;
    }
    thunk_FUN_1148a50e(puVar7,uVar3);
    local_20 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)((undefined4 *)0x0);
    local_18 = (int)(0);
  }
  if (iStack_2c != 0) {
    uVar3 = (uint)(iStack_24 - iStack_2c & 0xfffffffc);
    iVar6 = (int)(iStack_2c);
    if (0xfff < uVar3) {
      iVar6 = (int)(*(int *)(iStack_2c + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iStack_2c - iVar6) - 4U) {
LAB_10a46f6c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar6,uVar3);
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


// Reference entry 10a48c60; body size 191 bytes.
#line 1 "ENTRY_10a48c60"

void __stdcall FUN_10a48c60(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11683335);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebbab0(8);
    thunk_FUN_10ebb8e0("minimum",2000);
    thunk_FUN_10eb41b0();
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_10a45490(&param_1));
    local_8 = (undefined4)(1);
    thunk_FUN_10ebb810("detectProductOnLAN",*puVar3,0);
    local_8 = (undefined4)(2);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10a49250; body size 192 bytes.
#line 1 "ENTRY_10a49250"

undefined4 * __thiscall Recovered_Bulk::FUN_10a49250(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11683509);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWiredConnectWizard);
  param_1[4] = (uint)&ghidra_vftable_SCWiredConnectWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCWiredConnectWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCWiredConnectWizard;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10a496b0; body size 186 bytes.
#line 1 "ENTRY_10a496b0"

void __fastcall FUN_10a496b0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11683610);
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


// Reference entry 10a49870; body size 68 bytes.
#line 1 "ENTRY_10a49870"

undefined4 * __thiscall Recovered_Bulk::FUN_10a49870(byte param_2)
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


// Reference entry 10a49930; body size 68 bytes.
#line 1 "ENTRY_10a49930"

undefined4 * __thiscall Recovered_Bulk::FUN_10a49930(byte param_2)
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


// Reference entry 10a499d0; body size 68 bytes.
#line 1 "ENTRY_10a499d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a499d0(byte param_2)
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


// Reference entry 10a49a70; body size 210 bytes.
#line 1 "ENTRY_10a49a70"

int __thiscall Recovered_Bulk::FUN_10a49a70(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11683640);
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


// Reference entry 10a49f80; body size 168 bytes.
#line 1 "ENTRY_10a49f80"

undefined4 * __thiscall Recovered_Bulk::FUN_10a49f80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116839d7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWiredConnectFindProductPage);
    puVar1[4] = (uint)&ghidra_vftable_SCWiredConnectFindProductPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCWiredConnectFindProductPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCWiredConnectFindProductPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a4a060; body size 168 bytes.
#line 1 "ENTRY_10a4a060"

undefined4 * __thiscall Recovered_Bulk::FUN_10a4a060(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11683a27);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWiredConnectIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCWiredConnectIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCWiredConnectIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCWiredConnectIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a4a140; body size 251 bytes.
#line 1 "ENTRY_10a4a140"

undefined4 * __thiscall Recovered_Bulk::FUN_10a4a140(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11683ab4);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWiredConnectWizard);
    puVar2[4] = (uint)&ghidra_vftable_SCWiredConnectWizard;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWiredConnectWizard);
    puVar2[0x2a] = (uint)&ghidra_vftable_SCWiredConnectWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a4c400; body size 174 bytes.
#line 1 "ENTRY_10a4c400"

void __stdcall FUN_10a4c400(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11683fc5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebbab0(8);
    thunk_FUN_10eb41b0();
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_10a49be0(&param_1));
    local_8 = (undefined4)(1);
    thunk_FUN_10ebb810("findProduct",*puVar3,0);
    local_8 = (undefined4)(2);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10a4c9a0; body size 111 bytes.
#line 1 "ENTRY_10a4c9a0"

void FUN_10a4c9a0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11684070);
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


// Reference entry 10a4ca40; body size 111 bytes.
#line 1 "ENTRY_10a4ca40"

void FUN_10a4ca40(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116840a0);
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


// Reference entry 10a4cc20; body size 267 bytes.
#line 1 "ENTRY_10a4cc20"

undefined4 * __thiscall Recovered_Bulk::FUN_10a4cc20(void *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Src;
  int iVar4;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  
  iVar3 = (int)(*param_1);
  iVar4 = (int)(param_1[1] - iVar3 >> 2);
  if (iVar4 == 0x3fffffff) {
                    
    thunk_FUN_10a54480();
  }
  uVar5 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar5 >> 1) < uVar5) {
    uVar5 = (uint)(0x3fffffff);
  }
  else {
    uVar5 = (uint)((uVar5 >> 1) + uVar5);
    if (uVar5 < uVar1) {
      uVar5 = (uint)(uVar1);
    }
  }
  _Dst = (void *)((void *)thunk_FUN_10a54750(uVar5));
  puVar2 = (undefined4 *)((undefined4 *)((int)_Dst + ((int)param_2 - iVar3 >> 2) * 4));
  *puVar2 = (undefined4)(*param_3);
  _Src = (void *)((void *)*param_1);
  if (param_2 == (void *)param_1[1]) {
    memmove(_Dst,_Src,param_1[1] - (int)_Src);
  }
  else {
    memmove(_Dst,_Src,(int)param_2 - (int)_Src);
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
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)_Dst + uVar1 * 4);
  param_1[2] = (int)((int)_Dst + uVar5 * 4);
  return (undefined4 *)(puVar2);
}


// Reference entry 10a4d8d0; body size 84 bytes.
#line 1 "ENTRY_10a4d8d0"

void FUN_10a4d8d0(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11684230);
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


// Reference entry 10a4d940; body size 84 bytes.
#line 1 "ENTRY_10a4d940"

void FUN_10a4d940(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11684260);
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


// Reference entry 10a4e980; body size 213 bytes.
#line 1 "ENTRY_10a4e980"

undefined4 * __thiscall Recovered_Bulk::FUN_10a4e980(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116847a0);
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


// Reference entry 10a4ea90; body size 213 bytes.
#line 1 "ENTRY_10a4ea90"

undefined4 * __thiscall Recovered_Bulk::FUN_10a4ea90(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11684800);
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


// Reference entry 10a4eba0; body size 213 bytes.
#line 1 "ENTRY_10a4eba0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a4eba0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11684860);
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


// Reference entry 10a4ee60; body size 148 bytes.
#line 1 "ENTRY_10a4ee60"

int * __thiscall Recovered_Bulk::FUN_10a4ee60(int *param_2)
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
  puStack_c = (undefined1 *)(LAB_1168489d);
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
    iVar3 = (int)(thunk_FUN_10a547c0(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = iVar3;
    param_1[2] = iVar3 + iVar5 * 8;
    local_8 = (undefined4)(0);
    iVar4 = (int)(thunk_FUN_10a4d3b0(iVar4,iVar1,iVar3,param_1,uVar2));
    param_1[1] = iVar4;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 10a4ef40; body size 148 bytes.
#line 1 "ENTRY_10a4ef40"

int * __thiscall Recovered_Bulk::FUN_10a4ef40(int *param_2)
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
  puStack_c = (undefined1 *)(LAB_116848dd);
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
    iVar3 = (int)(thunk_FUN_10a54830(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = iVar3;
    param_1[2] = iVar3 + iVar5 * 8;
    local_8 = (undefined4)(0);
    iVar4 = (int)(thunk_FUN_10a4d450(iVar4,iVar1,iVar3,param_1,uVar2));
    param_1[1] = iVar4;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 10a4f020; body size 213 bytes.
#line 1 "ENTRY_10a4f020"

undefined4 * __thiscall Recovered_Bulk::FUN_10a4f020(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11684940);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountSecureTransferAccountCreateSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAccountSecureTransferAccountCreateSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAccountSecureTransferAccountCreateSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAccountSecureTransferAccountCreateSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4f230; body size 213 bytes.
#line 1 "ENTRY_10a4f230"

undefined4 * __thiscall Recovered_Bulk::FUN_10a4f230(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11684a00);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountSecureTransferAccountLoginSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAccountSecureTransferAccountLoginSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAccountSecureTransferAccountLoginSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAccountSecureTransferAccountLoginSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10a50290; body size 213 bytes.
#line 1 "ENTRY_10a50290"

undefined4 * __thiscall Recovered_Bulk::FUN_10a50290(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11684e80);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountSecureTransferRegisterProductSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCAccountSecureTransferRegisterProductSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCAccountSecureTransferRegisterProductSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAccountSecureTransferRegisterProductSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10a504a0; body size 244 bytes.
#line 1 "ENTRY_10a504a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a504a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11684f39);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountSecureTransferWizard);
  param_1[4] = (uint)&ghidra_vftable_SCAccountSecureTransferWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCAccountSecureTransferWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCAccountSecureTransferWizard;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined2 *)(param_1 + 0x44) = 1;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10a512a0; body size 76 bytes.
#line 1 "ENTRY_10a512a0"

void __fastcall FUN_10a512a0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11685380);
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


// Reference entry 10a51310; body size 76 bytes.
#line 1 "ENTRY_10a51310"

void __fastcall FUN_10a51310(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116853b0);
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


// Reference entry 10a51480; body size 81 bytes.
#line 1 "ENTRY_10a51480"

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

void __fastcall FID_conflict__Tidy_10a51480(int *param_1)

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


// Reference entry 10a51600; body size 156 bytes.
#line 1 "ENTRY_10a51600"

void __fastcall FUN_10a51600(undefined4 *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116853e0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10a540f0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  param_1[0x38] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[0x3a]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
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


// Reference entry 10a516f0; body size 156 bytes.
#line 1 "ENTRY_10a516f0"

void __fastcall FUN_10a516f0(undefined4 *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11685410);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10a54170(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  param_1[0x38] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[0x3a]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
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


// Reference entry 10a51970; body size 241 bytes.
#line 1 "ENTRY_10a51970"

void __fastcall FUN_10a51970(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11685440);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(param_1[0x3b]);
  if (iVar1 != 0) {
    uVar4 = (uint)((param_1[0x3d] - iVar1 >> 2) * 4);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4,DAT_12126b84 ^ (uint)&stack0xfffffffc);
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
  }
  piVar2 = (int *)((int *)param_1[0x39]);
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10a51ad0; body size 137 bytes.
#line 1 "ENTRY_10a51ad0"

void __fastcall FUN_10a51ad0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(param_1[0x38]);
  if (iVar1 != 0) {
    uVar3 = (uint)(param_1[0x3a] - iVar1 & 0xfffffffc);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 10a51f30; body size 81 bytes.
#line 1 "ENTRY_10a51f30"

int * __thiscall Recovered_Bulk::FUN_10a51f30(int *param_2)
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


// Reference entry 10a52000; body size 81 bytes.
#line 1 "ENTRY_10a52000"

int * __thiscall Recovered_Bulk::FUN_10a52000(int *param_2)
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


// Reference entry 10a52670; body size 68 bytes.
#line 1 "ENTRY_10a52670"

undefined4 * __thiscall Recovered_Bulk::FUN_10a52670(byte param_2)
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


// Reference entry 10a52940; body size 106 bytes.
#line 1 "ENTRY_10a52940"

undefined4 * __thiscall Recovered_Bulk::FUN_10a52940(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116854a0);
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


// Reference entry 10a529d0; body size 106 bytes.
#line 1 "ENTRY_10a529d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a529d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116854d0);
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


// Reference entry 10a52a60; body size 68 bytes.
#line 1 "ENTRY_10a52a60"

undefined4 * __thiscall Recovered_Bulk::FUN_10a52a60(byte param_2)
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


// Reference entry 10a52ac0; body size 68 bytes.
#line 1 "ENTRY_10a52ac0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a52ac0(byte param_2)
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


// Reference entry 10a52b20; body size 68 bytes.
#line 1 "ENTRY_10a52b20"

undefined4 * __thiscall Recovered_Bulk::FUN_10a52b20(byte param_2)
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


// Reference entry 10a52b80; body size 68 bytes.
#line 1 "ENTRY_10a52b80"

undefined4 * __thiscall Recovered_Bulk::FUN_10a52b80(byte param_2)
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


// Reference entry 10a52c20; body size 68 bytes.
#line 1 "ENTRY_10a52c20"

undefined4 * __thiscall Recovered_Bulk::FUN_10a52c20(byte param_2)
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


// Reference entry 10a52cc0; body size 68 bytes.
#line 1 "ENTRY_10a52cc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a52cc0(byte param_2)
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


// Reference entry 10a52d60; body size 180 bytes.
#line 1 "ENTRY_10a52d60"

undefined4 * __thiscall Recovered_Bulk::FUN_10a52d60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11685500);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10a540f0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  param_1[0x38] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[0x3a]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x104);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10a52e90; body size 180 bytes.
#line 1 "ENTRY_10a52e90"

undefined4 * __thiscall Recovered_Bulk::FUN_10a52e90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11685530);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10a54170(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  param_1[0x38] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[0x3a]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
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


// Reference entry 10a52fc0; body size 68 bytes.
#line 1 "ENTRY_10a52fc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a52fc0(byte param_2)
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


// Reference entry 10a53060; body size 68 bytes.
#line 1 "ENTRY_10a53060"

undefined4 * __thiscall Recovered_Bulk::FUN_10a53060(byte param_2)
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


// Reference entry 10a53100; body size 68 bytes.
#line 1 "ENTRY_10a53100"

undefined4 * __thiscall Recovered_Bulk::FUN_10a53100(byte param_2)
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


// Reference entry 10a531a0; body size 68 bytes.
#line 1 "ENTRY_10a531a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a531a0(byte param_2)
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


// Reference entry 10a53240; body size 68 bytes.
#line 1 "ENTRY_10a53240"

undefined4 * __thiscall Recovered_Bulk::FUN_10a53240(byte param_2)
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


// Reference entry 10a532e0; body size 265 bytes.
#line 1 "ENTRY_10a532e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a532e0(byte param_2)
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
  puStack_c = (undefined1 *)(LAB_11685560);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(param_1[0x3b]);
  if (iVar1 != 0) {
    uVar5 = (uint)((param_1[0x3d] - iVar1 >> 2) * 4);
    iVar4 = (int)(iVar1);
    if (0xfff < uVar5) {
      iVar4 = (int)(*(int *)(iVar1 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar1 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar5,uVar3);
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
  }
  piVar2 = (int *)((int *)param_1[0x39]);
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf8,uVar3);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10a53480; body size 163 bytes.
#line 1 "ENTRY_10a53480"

undefined4 * __thiscall Recovered_Bulk::FUN_10a53480(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(param_1[0x38]);
  if (iVar1 != 0) {
    uVar3 = (uint)(param_1[0x3a] - iVar1 & 0xfffffffc);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
  }
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


// Reference entry 10a53590; body size 68 bytes.
#line 1 "ENTRY_10a53590"

undefined4 * __thiscall Recovered_Bulk::FUN_10a53590(byte param_2)
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


// Reference entry 10a53ab0; body size 89 bytes.
#line 1 "ENTRY_10a53ab0"

void __thiscall Recovered_Bulk::FUN_10a53ab0(int param_2,int param_3,int param_4)
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


// Reference entry 10a53b20; body size 104 bytes.
#line 1 "ENTRY_10a53b20"

void __thiscall Recovered_Bulk::FUN_10a53b20(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10a4c9a0(*param_1,param_1[1],param_1);
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


// Reference entry 10a53bb0; body size 104 bytes.
#line 1 "ENTRY_10a53bb0"

void __thiscall Recovered_Bulk::FUN_10a53bb0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10a4ca40(*param_1,param_1[1],param_1);
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


// Reference entry 10a53f50; body size 123 bytes.
#line 1 "ENTRY_10a53f50"

void __thiscall Recovered_Bulk::FUN_10a53f50(int *param_2)
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
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = (int)(*param_2);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = (int)(0);
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// Reference entry 10a54080; body size 81 bytes.
#line 1 "ENTRY_10a54080"

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

void __fastcall FID_conflict__Tidy_10a54080(int *param_1)

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


// Reference entry 10a540f0; body size 96 bytes.
#line 1 "ENTRY_10a540f0"

void __fastcall FUN_10a540f0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10a4c9a0(*param_1,param_1[1],param_1);
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


// Reference entry 10a54170; body size 96 bytes.
#line 1 "ENTRY_10a54170"

void __fastcall FUN_10a54170(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10a4ca40(*param_1,param_1[1],param_1);
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


// Reference entry 10a54750; body size 87 bytes.
#line 1 "ENTRY_10a54750"

void * FUN_10a54750(uint param_1)

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


// Reference entry 10a547c0; body size 87 bytes.
#line 1 "ENTRY_10a547c0"

void * FUN_10a547c0(uint param_1)

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


// Reference entry 10a54830; body size 87 bytes.
#line 1 "ENTRY_10a54830"

void * FUN_10a54830(uint param_1)

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


// Reference entry 10a548c0; body size 67 bytes.
#line 1 "ENTRY_10a548c0"

void __fastcall FUN_10a548c0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc));
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0xc));
  if (puVar3 != *(undefined4 **)(param_1 + 0x10)) {
    do {
      cVar2 = (char)((**(code **)(*(int *)*puVar3 + 0x1c))());
      if (cVar2 != '\0') {
        (**(code **)(*(int *)*puVar3 + 0x18))();
      }
      puVar3 = (undefined4 *)(puVar3 + 2);
    } while (puVar3 != *(undefined4 **)(param_1 + 0x10));
  }
  thunk_FUN_10a4c9a0(*puVar1,*(undefined4 *)(param_1 + 0x10),puVar1);
  *(undefined4 *)(param_1 + 0x10) = *puVar1;
  return;
}


// Reference entry 10a54920; body size 67 bytes.
#line 1 "ENTRY_10a54920"

void __fastcall FUN_10a54920(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc));
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0xc));
  if (puVar3 != *(undefined4 **)(param_1 + 0x10)) {
    do {
      cVar2 = (char)((**(code **)(*(int *)*puVar3 + 0x1c))());
      if (cVar2 != '\0') {
        (**(code **)(*(int *)*puVar3 + 0x18))();
      }
      puVar3 = (undefined4 *)(puVar3 + 2);
    } while (puVar3 != *(undefined4 **)(param_1 + 0x10));
  }
  thunk_FUN_10a4ca40(*puVar1,*(undefined4 *)(param_1 + 0x10),puVar1);
  *(undefined4 *)(param_1 + 0x10) = *puVar1;
  return;
}


// Reference entry 10a55020; body size 276 bytes.
#line 1 "ENTRY_10a55020"

undefined4 * __thiscall Recovered_Bulk::FUN_10a55020(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_11685a52);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAccountSecureTransferAccountCreateSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAccountSecureTransferAccountCreateSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAccountSecureTransferAccountCreateSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAccountSecureTransferAccountCreateSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a55180; body size 276 bytes.
#line 1 "ENTRY_10a55180"

undefined4 * __thiscall Recovered_Bulk::FUN_10a55180(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_11685ad2);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAccountSecureTransferAccountLoginSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAccountSecureTransferAccountLoginSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAccountSecureTransferAccountLoginSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAccountSecureTransferAccountLoginSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a552e0; body size 168 bytes.
#line 1 "ENTRY_10a552e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a552e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11685b27);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccountSecureTransferBeginSystemTransferErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccountSecureTransferBeginSystemTransferErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccountSecureTransferBeginSystemTransferErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccountSecureTransferBeginSystemTransferErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a553c0; body size 269 bytes.
#line 1 "ENTRY_10a553c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a553c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11685b77);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0x104));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    puVar1[0x38] = (uint)&ghidra_vftable_SCIOpCBDelegate;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccountSecureTransferBeginSystemTransferPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccountSecureTransferBeginSystemTransferPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccountSecureTransferBeginSystemTransferPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccountSecureTransferBeginSystemTransferPage;
    puVar1[0x38] = (uint)&ghidra_vftable_SCAccountSecureTransferBeginSystemTransferPage;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    puVar1[0x3f] = 0;
    *(undefined1 *)(puVar1 + 0x40) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a55510; body size 252 bytes.
#line 1 "ENTRY_10a55510"

undefined4 * __thiscall Recovered_Bulk::FUN_10a55510(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11685bc7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xfc));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    puVar1[0x38] = (uint)&ghidra_vftable_SCIOpCBDelegate;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccountSecureTransferButtonPressAuthPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccountSecureTransferButtonPressAuthPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccountSecureTransferButtonPressAuthPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccountSecureTransferButtonPressAuthPage;
    puVar1[0x38] = (uint)&ghidra_vftable_SCAccountSecureTransferButtonPressAuthPage;
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


// Reference entry 10a55650; body size 168 bytes.
#line 1 "ENTRY_10a55650"

undefined4 * __thiscall Recovered_Bulk::FUN_10a55650(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11685c17);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccountSecureTransferCompletePage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccountSecureTransferCompletePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccountSecureTransferCompletePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccountSecureTransferCompletePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a55730; body size 168 bytes.
#line 1 "ENTRY_10a55730"

undefined4 * __thiscall Recovered_Bulk::FUN_10a55730(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11685c67);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccountSecureTransferIncompletePage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccountSecureTransferIncompletePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccountSecureTransferIncompletePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccountSecureTransferIncompletePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a55810; body size 168 bytes.
#line 1 "ENTRY_10a55810"

undefined4 * __thiscall Recovered_Bulk::FUN_10a55810(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11685cb7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccountSecureTransferIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccountSecureTransferIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccountSecureTransferIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccountSecureTransferIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a558f0; body size 168 bytes.
#line 1 "ENTRY_10a558f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a558f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11685d07);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccountSecureTransferNetworkErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccountSecureTransferNetworkErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccountSecureTransferNetworkErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccountSecureTransferNetworkErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a559d0; body size 168 bytes.
#line 1 "ENTRY_10a559d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a559d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11685d57);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccountSecureTransferNewAccountReadyPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccountSecureTransferNewAccountReadyPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccountSecureTransferNewAccountReadyPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccountSecureTransferNewAccountReadyPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a55ab0; body size 229 bytes.
#line 1 "ENTRY_10a55ab0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a55ab0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11685da7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccountSecureTransferPrepareSystemPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccountSecureTransferPrepareSystemPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccountSecureTransferPrepareSystemPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccountSecureTransferPrepareSystemPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    *(undefined1 *)(puVar1 + 0x3a) = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a55bd0; body size 198 bytes.
#line 1 "ENTRY_10a55bd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a55bd0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11685df7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xec));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccountSecureTransferProductSelectionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccountSecureTransferProductSelectionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccountSecureTransferProductSelectionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccountSecureTransferProductSelectionPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a55cd0; body size 276 bytes.
#line 1 "ENTRY_10a55cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a55cd0(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_11685e72);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAccountSecureTransferRegisterProductSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCAccountSecureTransferRegisterProductSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCAccountSecureTransferRegisterProductSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCAccountSecureTransferRegisterProductSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a55e30; body size 323 bytes.
#line 1 "ENTRY_10a55e30"

undefined4 * __thiscall Recovered_Bulk::FUN_10a55e30(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11685f04);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0x120));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    local_8 = (undefined4)(2);
    thunk_FUN_10cf2f30(puVar1 + 0x23);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccountSecureTransferWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCAccountSecureTransferWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccountSecureTransferWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccountSecureTransferWizard;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    puVar1[0x42] = 0;
    puVar1[0x43] = 0;
    *(undefined2 *)(puVar1 + 0x44) = 1;
    puVar1[0x45] = 0;
    puVar1[0x46] = 0;
    puVar1[0x47] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a56100; body size 206 bytes.
#line 1 "ENTRY_10a56100"

void __thiscall Recovered_Bulk::FUN_10a56100(undefined4 *param_2,int *param_3)
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
  puStack_c = (undefined1 *)(LAB_11685f40);
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


// Reference entry 10a56210; body size 206 bytes.
#line 1 "ENTRY_10a56210"

void __thiscall Recovered_Bulk::FUN_10a56210(undefined4 *param_2,int *param_3)
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
  puStack_c = (undefined1 *)(LAB_11685f70);
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


// Reference entry 10a5bd50; body size 400 bytes.
#line 1 "ENTRY_10a5bd50"

undefined4 __thiscall Recovered_Bulk::FUN_10a5bd50(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_11686a8d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a44b8);
  thunk_FUN_105f5920(&local_14);
  local_14 = (undefined4)(DAT_121a44c4);
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
  piVar3 = (int *)((int *)thunk_FUN_106190a0(*(char *)(param_1 + 0x110) == '\0',local_54));
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_10a5be8e;
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
LAB_10a5be8e:
                    
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


// Reference entry 10a61720; body size 311 bytes.
#line 1 "ENTRY_10a61720"

int __fastcall FUN_10a61720(int param_1)

{
  int *piVar1;
  int *piVar2;
  void **ppvVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116876dd);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_18 = (int *)(*(int **)(param_1 + 0xf4));
  iVar6 = (int)(0);
  piVar1 = (int *)(*(int **)(param_1 + 0xf8));
  local_14 = (int)(0);
  ppvVar3 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar3, (int *)(local_18) != piVar1); local_18 = local_18 + 1) {
    local_8 = (undefined4)(0xffffffff);
    piVar7 = (int *)((int *)0x0);
    if ((int *)*local_18 != (int *)0x0) {
      piVar7 = (int *)((int *)(**(code **)(*(int *)*local_18 + 0xc))(uVar4));
      (**(code **)(*piVar7 + 4))();
    }
    local_8 = (undefined4)(0);
    piVar5 = (int *)((int *)thunk_FUN_1034dcf0(&local_1c));
    piVar2 = (int *)((int *)*piVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    *piVar5 = (int)(0);
    if (piVar2 == (int *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      piVar5 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if ((piVar2 != (int *)0x0) && (iVar6 = thunk_FUN_10323ac0(), iVar6 == 4)) {
      local_14 = (int)(local_14 + 1);
    }
    iVar6 = (int)(local_14);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();
    }
    local_8 = (undefined4)(6);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))();
    }
    ppvVar3 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return (int)(iVar6);
}


// Reference entry 10a63b00; body size 76 bytes.
#line 1 "ENTRY_10a63b00"

void FUN_10a63b00(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_10eb41b0());
  if (*(char *)(iVar2 + 0x111) == '\0') {
    thunk_FUN_10ebc1d0();
    cVar1 = (char)(thunk_FUN_10eace60());
    if (cVar1 == '\0') {
      iVar2 = (int)(thunk_FUN_10eb41b0());
      *(undefined1 *)(iVar2 + 0x111) = 0;
      return;
    }
  }
  iVar2 = (int)(thunk_FUN_10eb41b0());
  *(undefined1 *)(iVar2 + 0x111) = 1;
  return;
}


// Reference entry 10a64520; body size 342 bytes.
#line 1 "ENTRY_10a64520"

void __thiscall Recovered_Bulk::FUN_10a64520(void *param_2,int param_3,int param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  size_t _Size;
  int iVar7;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = (int)(param_3);
  pvVar6 = (void *)(param_2);
  puStack_c = (undefined1 *)(LAB_11687e6d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + 0xf4));
  local_8 = (undefined4)(0);
  if ((void **)piVar1 != &param_2) {
    iVar3 = (int)(*piVar1);
    uVar5 = (uint)(param_3 - (int)param_2 >> 2);
    uVar4 = (uint)(*(int *)(param_1 + 0xfc) - iVar3 >> 2);
    if (uVar4 < uVar5) {
      if (0x3fffffff < uVar5) {
                    
        thunk_FUN_10a54480(DAT_12126b84 ^ (uint)&stack0xfffffffc);
      }
      if (0x3fffffff - (uVar4 >> 1) < uVar4) {
        local_14 = (uint)(0x3fffffff);
      }
      else {
        local_14 = (uint)((uVar4 >> 1) + uVar4);
        if (local_14 < uVar5) {
          local_14 = (uint)(uVar5);
        }
      }
      if (iVar3 != 0) {
        uVar4 = (uint)(uVar4 * 4);
        iVar7 = (int)(iVar3);
        if (0xfff < uVar4) {
          iVar7 = (int)(*(int *)(iVar3 + -4));
          uVar4 = (uint)(uVar4 + 0x23);
          if (0x1f < (iVar3 - iVar7) - 4U) goto LAB_10a6464d;
        }
        thunk_FUN_1148a50e(iVar7,uVar4);
        *piVar1 = (int)(0);
        *(undefined4 *)(param_1 + 0xf8) = 0;
        *(undefined4 *)(param_1 + 0xfc) = 0;
      }
      iVar3 = (int)(thunk_FUN_10a54750(local_14));
      *piVar1 = (int)(iVar3);
      *(int *)(param_1 + 0xf8) = iVar3;
      *(uint *)(param_1 + 0xfc) = iVar3 + local_14 * 4;
    }
    _Dst = (void *)((void *)*piVar1);
    _Size = (size_t)(iVar2 - (int)pvVar6);
    memmove(_Dst,pvVar6,_Size);
    *(size_t *)(param_1 + 0xf8) = _Size + (int)_Dst;
  }
  if (param_2 != (void *)0x0) {
    uVar4 = (uint)(param_4 - (int)param_2 & 0xfffffffc);
    pvVar6 = (void *)(param_2);
    if (0xfff < uVar4) {
      pvVar6 = (void *)(*(void **)((int)param_2 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar6))) {
LAB_10a6464d:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(pvVar6,uVar4);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10a67810; body size 68 bytes.
#line 1 "ENTRY_10a67810"

undefined4 * __thiscall Recovered_Bulk::FUN_10a67810(byte param_2)
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


// Reference entry 10a67ab0; body size 68 bytes.
#line 1 "ENTRY_10a67ab0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a67ab0(byte param_2)
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


// Reference entry 10a67b50; body size 68 bytes.
#line 1 "ENTRY_10a67b50"

undefined4 * __thiscall Recovered_Bulk::FUN_10a67b50(byte param_2)
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


// Reference entry 10a67bf0; body size 68 bytes.
#line 1 "ENTRY_10a67bf0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a67bf0(byte param_2)
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


// Reference entry 10a67c90; body size 68 bytes.
#line 1 "ENTRY_10a67c90"

undefined4 * __thiscall Recovered_Bulk::FUN_10a67c90(byte param_2)
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


// Reference entry 10a67d30; body size 68 bytes.
#line 1 "ENTRY_10a67d30"

undefined4 * __thiscall Recovered_Bulk::FUN_10a67d30(byte param_2)
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


// Reference entry 10a67dd0; body size 68 bytes.
#line 1 "ENTRY_10a67dd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a67dd0(byte param_2)
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


// Reference entry 10a67e70; body size 68 bytes.
#line 1 "ENTRY_10a67e70"

undefined4 * __thiscall Recovered_Bulk::FUN_10a67e70(byte param_2)
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


// Reference entry 10a67f10; body size 68 bytes.
#line 1 "ENTRY_10a67f10"

undefined4 * __thiscall Recovered_Bulk::FUN_10a67f10(byte param_2)
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


// Reference entry 10a67fb0; body size 68 bytes.
#line 1 "ENTRY_10a67fb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a67fb0(byte param_2)
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


// Reference entry 10a68050; body size 68 bytes.
#line 1 "ENTRY_10a68050"

undefined4 * __thiscall Recovered_Bulk::FUN_10a68050(byte param_2)
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


// Reference entry 10a680f0; body size 68 bytes.
#line 1 "ENTRY_10a680f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a680f0(byte param_2)
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


// Reference entry 10a68190; body size 68 bytes.
#line 1 "ENTRY_10a68190"

undefined4 * __thiscall Recovered_Bulk::FUN_10a68190(byte param_2)
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


// Reference entry 10a68390; body size 168 bytes.
#line 1 "ENTRY_10a68390"

undefined4 * __thiscall Recovered_Bulk::FUN_10a68390(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11688e47);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccessibilityTestButtonDefaultPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccessibilityTestButtonDefaultPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccessibilityTestButtonDefaultPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccessibilityTestButtonDefaultPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a68470; body size 168 bytes.
#line 1 "ENTRY_10a68470"

undefined4 * __thiscall Recovered_Bulk::FUN_10a68470(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11688e97);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccessibilityTestButtonWithTermationVOTextPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccessibilityTestButtonWithTermationVOTextPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccessibilityTestButtonWithTermationVOTextPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccessibilityTestButtonWithTermationVOTextPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a68550; body size 168 bytes.
#line 1 "ENTRY_10a68550"

undefined4 * __thiscall Recovered_Bulk::FUN_10a68550(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11688ee7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccessibilityTestButtonWithVOTextOverridePage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccessibilityTestButtonWithVOTextOverridePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccessibilityTestButtonWithVOTextOverridePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccessibilityTestButtonWithVOTextOverridePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a68630; body size 168 bytes.
#line 1 "ENTRY_10a68630"

undefined4 * __thiscall Recovered_Bulk::FUN_10a68630(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11688f37);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccessibilityTestFlareDefaultPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccessibilityTestFlareDefaultPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccessibilityTestFlareDefaultPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccessibilityTestFlareDefaultPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a68710; body size 168 bytes.
#line 1 "ENTRY_10a68710"

undefined4 * __thiscall Recovered_Bulk::FUN_10a68710(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11688f87);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccessibilityTestFlareWithVODisabledPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccessibilityTestFlareWithVODisabledPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccessibilityTestFlareWithVODisabledPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccessibilityTestFlareWithVODisabledPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a687f0; body size 168 bytes.
#line 1 "ENTRY_10a687f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a687f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11688fd7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccessibilityTestFlareWithVOTextOverridePage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccessibilityTestFlareWithVOTextOverridePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccessibilityTestFlareWithVOTextOverridePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccessibilityTestFlareWithVOTextOverridePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a688d0; body size 168 bytes.
#line 1 "ENTRY_10a688d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a688d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11689027);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccessibilityTestImageDefaultPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccessibilityTestImageDefaultPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccessibilityTestImageDefaultPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccessibilityTestImageDefaultPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a689b0; body size 168 bytes.
#line 1 "ENTRY_10a689b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a689b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11689077);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccessibilityTestImageWithVOTextPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccessibilityTestImageWithVOTextPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccessibilityTestImageWithVOTextPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccessibilityTestImageWithVOTextPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a68a90; body size 168 bytes.
#line 1 "ENTRY_10a68a90"

undefined4 * __thiscall Recovered_Bulk::FUN_10a68a90(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116890c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccessibilityTestSelectionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccessibilityTestSelectionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccessibilityTestSelectionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccessibilityTestSelectionPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a68b70; body size 168 bytes.
#line 1 "ENTRY_10a68b70"

undefined4 * __thiscall Recovered_Bulk::FUN_10a68b70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11689117);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccessibilityTestTextDefaultPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccessibilityTestTextDefaultPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccessibilityTestTextDefaultPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccessibilityTestTextDefaultPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a68c50; body size 168 bytes.
#line 1 "ENTRY_10a68c50"

undefined4 * __thiscall Recovered_Bulk::FUN_10a68c50(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11689167);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccessibilityTestTextWithVODisabledPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccessibilityTestTextWithVODisabledPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccessibilityTestTextWithVODisabledPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccessibilityTestTextWithVODisabledPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a68d30; body size 168 bytes.
#line 1 "ENTRY_10a68d30"

undefined4 * __thiscall Recovered_Bulk::FUN_10a68d30(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116891b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccessibilityTestTextWithVOTextOverridePage);
    puVar1[4] = (uint)&ghidra_vftable_SCAccessibilityTestTextWithVOTextOverridePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccessibilityTestTextWithVOTextOverridePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccessibilityTestTextWithVOTextOverridePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a68e10; body size 189 bytes.
#line 1 "ENTRY_10a68e10"

undefined4 * __thiscall Recovered_Bulk::FUN_10a68e10(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11689220);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAccessibilityTestWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCAccessibilityTestWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAccessibilityTestWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAccessibilityTestWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a71f20; body size 68 bytes.
#line 1 "ENTRY_10a71f20"

undefined4 * __thiscall Recovered_Bulk::FUN_10a71f20(byte param_2)
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


// Reference entry 10a72010; body size 68 bytes.
#line 1 "ENTRY_10a72010"

undefined4 * __thiscall Recovered_Bulk::FUN_10a72010(byte param_2)
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


// Reference entry 10a720b0; body size 68 bytes.
#line 1 "ENTRY_10a720b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a720b0(byte param_2)
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


// Reference entry 10a72150; body size 68 bytes.
#line 1 "ENTRY_10a72150"

undefined4 * __thiscall Recovered_Bulk::FUN_10a72150(byte param_2)
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


// Reference entry 10a72290; body size 168 bytes.
#line 1 "ENTRY_10a72290"

undefined4 * __thiscall Recovered_Bulk::FUN_10a72290(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168a887);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAnimationErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAnimationErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAnimationErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAnimationErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a72370; body size 168 bytes.
#line 1 "ENTRY_10a72370"

undefined4 * __thiscall Recovered_Bulk::FUN_10a72370(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168a8d7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAnimationIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAnimationIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAnimationIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAnimationIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a72450; body size 168 bytes.
#line 1 "ENTRY_10a72450"

undefined4 * __thiscall Recovered_Bulk::FUN_10a72450(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168a927);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAnimationSuccessPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAnimationSuccessPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAnimationSuccessPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAnimationSuccessPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a72530; body size 189 bytes.
#line 1 "ENTRY_10a72530"

undefined4 * __thiscall Recovered_Bulk::FUN_10a72530(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168a990);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAnimationWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCAnimationWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAnimationWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAnimationWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a76940; body size 76 bytes.
#line 1 "ENTRY_10a76940"

void __fastcall FUN_10a76940(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  iVar1 = (int)(param_1[3]);
  iVar2 = (int)(param_1[2]);
  if (iVar2 != iVar1) {
    do {
      thunk_FUN_10a76ed0();
      iVar2 = (int)(iVar2 + 0x18);
    } while (iVar2 != iVar1);
    iVar2 = (int)(param_1[2]);
  }
  param_1[3] = iVar2;
  thunk_FUN_10a76b10();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10a76a00; body size 76 bytes.
#line 1 "ENTRY_10a76a00"

void __fastcall FUN_10a76a00(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168b890);
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


// Reference entry 10a76a70; body size 76 bytes.
#line 1 "ENTRY_10a76a70"

void __fastcall FUN_10a76a70(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168b8c0);
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


// Reference entry 10a76b10; body size 127 bytes.
#line 1 "ENTRY_10a76b10"

void __fastcall FUN_10a76b10(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(*param_1);
  if (iVar2 != 0) {
    iVar3 = (int)(param_1[1]);
    if (iVar2 != iVar3) {
      do {
        thunk_FUN_10a76ed0();
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


// Reference entry 10a76fd0; body size 81 bytes.
#line 1 "ENTRY_10a76fd0"

int * __thiscall Recovered_Bulk::FUN_10a76fd0(int *param_2)
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


// Reference entry 10a77040; body size 81 bytes.
#line 1 "ENTRY_10a77040"

int * __thiscall Recovered_Bulk::FUN_10a77040(int *param_2)
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


// Reference entry 10a772a0; body size 68 bytes.
#line 1 "ENTRY_10a772a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a772a0(byte param_2)
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


// Reference entry 10a774d0; body size 68 bytes.
#line 1 "ENTRY_10a774d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a774d0(byte param_2)
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


// Reference entry 10a77570; body size 68 bytes.
#line 1 "ENTRY_10a77570"

undefined4 * __thiscall Recovered_Bulk::FUN_10a77570(byte param_2)
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


// Reference entry 10a77840; body size 141 bytes.
#line 1 "ENTRY_10a77840"

void __thiscall Recovered_Bulk::FUN_10a77840(int param_2,int param_3,int param_4)
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
        thunk_FUN_10a76ed0();
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


// Reference entry 10a77a10; body size 127 bytes.
#line 1 "ENTRY_10a77a10"

void __fastcall FUN_10a77a10(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(*param_1);
  if (iVar2 != 0) {
    iVar3 = (int)(param_1[1]);
    if (iVar2 != iVar3) {
      do {
        thunk_FUN_10a76ed0();
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


// Reference entry 10a78450; body size 207 bytes.
#line 1 "ENTRY_10a78450"

undefined4 * __thiscall Recovered_Bulk::FUN_10a78450(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168c077);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAutoApConnectTestConnectPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAutoApConnectTestConnectPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAutoApConnectTestConnectPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAutoApConnectTestConnectPage;
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


// Reference entry 10a78560; body size 168 bytes.
#line 1 "ENTRY_10a78560"

undefined4 * __thiscall Recovered_Bulk::FUN_10a78560(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168c0c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAutoApConnectTestIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAutoApConnectTestIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAutoApConnectTestIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAutoApConnectTestIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a78640; body size 168 bytes.
#line 1 "ENTRY_10a78640"

undefined4 * __thiscall Recovered_Bulk::FUN_10a78640(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168c117);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAutoApConnectTestProductSelectionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCAutoApConnectTestProductSelectionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCAutoApConnectTestProductSelectionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCAutoApConnectTestProductSelectionPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a78720; body size 154 bytes.
#line 1 "ENTRY_10a78720"

undefined4 __thiscall Recovered_Bulk::FUN_10a78720(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168c180);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  pvVar1 = (void *)(operator_new(0x100));
  local_8 = (undefined4)(0);
  if (pvVar1 != (void *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_10a75d90(uVar2));
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 10a7dc50; body size 68 bytes.
#line 1 "ENTRY_10a7dc50"

undefined4 * __thiscall Recovered_Bulk::FUN_10a7dc50(byte param_2)
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


// Reference entry 10a7dd40; body size 68 bytes.
#line 1 "ENTRY_10a7dd40"

undefined4 * __thiscall Recovered_Bulk::FUN_10a7dd40(byte param_2)
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


// Reference entry 10a7dde0; body size 68 bytes.
#line 1 "ENTRY_10a7dde0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a7dde0(byte param_2)
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


// Reference entry 10a7de80; body size 68 bytes.
#line 1 "ENTRY_10a7de80"

undefined4 * __thiscall Recovered_Bulk::FUN_10a7de80(byte param_2)
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


// Reference entry 10a7dfc0; body size 168 bytes.
#line 1 "ENTRY_10a7dfc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a7dfc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168d137);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCBasicAPage);
    puVar1[4] = (uint)&ghidra_vftable_SCBasicAPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCBasicAPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCBasicAPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a7e0a0; body size 168 bytes.
#line 1 "ENTRY_10a7e0a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a7e0a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168d187);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCBasicBPage);
    puVar1[4] = (uint)&ghidra_vftable_SCBasicBPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCBasicBPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCBasicBPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a7e180; body size 168 bytes.
#line 1 "ENTRY_10a7e180"

undefined4 * __thiscall Recovered_Bulk::FUN_10a7e180(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168d1d7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCBasicCPage);
    puVar1[4] = (uint)&ghidra_vftable_SCBasicCPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCBasicCPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCBasicCPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a7e260; body size 189 bytes.
#line 1 "ENTRY_10a7e260"

undefined4 * __thiscall Recovered_Bulk::FUN_10a7e260(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168d240);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCBasicWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCBasicWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCBasicWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCBasicWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a80ef0; body size 68 bytes.
#line 1 "ENTRY_10a80ef0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a80ef0(byte param_2)
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


// Reference entry 10a80fb0; body size 68 bytes.
#line 1 "ENTRY_10a80fb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a80fb0(byte param_2)
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


// Reference entry 10a81220; body size 168 bytes.
#line 1 "ENTRY_10a81220"

undefined4 * __thiscall Recovered_Bulk::FUN_10a81220(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168dc77);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChirpTestErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCChirpTestErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCChirpTestErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCChirpTestErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a81460; body size 189 bytes.
#line 1 "ENTRY_10a81460"

undefined4 * __thiscall Recovered_Bulk::FUN_10a81460(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168dd50);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChirpTestWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCChirpTestWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCChirpTestWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCChirpTestWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a837e0; body size 109 bytes.
#line 1 "ENTRY_10a837e0"

undefined4 __thiscall Recovered_Bulk::FUN_10a837e0(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168e27d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  local_8 = (undefined4)(0);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_4);
  }
  thunk_FUN_10c62ec0(param_1,param_2,param_3,puVar2,uVar1);
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10a83870; body size 112 bytes.
#line 1 "ENTRY_10a83870"

undefined4 __thiscall Recovered_Bulk::FUN_10a83870(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168e2bd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  local_8 = (undefined4)(0);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_4);
  }
  thunk_FUN_10c62ec0(param_1,param_2,param_3,puVar2,param_5,uVar1);
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10a83900; body size 112 bytes.
#line 1 "ENTRY_10a83900"

undefined4 __thiscall Recovered_Bulk::FUN_10a83900(undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168e2fd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  local_8 = (undefined4)(0);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_3);
  }
  thunk_FUN_10c62ec0(param_1,param_2,puVar2,param_4,param_5,uVar1);
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10a83990; body size 115 bytes.
#line 1 "ENTRY_10a83990"

undefined4 __thiscall Recovered_Bulk::FUN_10a83990(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168e33d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  local_8 = (undefined4)(0);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_4);
  }
  thunk_FUN_10c62ec0(param_1,param_2,param_3,puVar2,param_5,param_6,uVar1);
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10a83a20; body size 118 bytes.
#line 1 "ENTRY_10a83a20"

undefined4 __thiscall Recovered_Bulk::FUN_10a83a20(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 param_7)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168e37d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  local_8 = (undefined4)(0);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_5 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_5);
  }
  thunk_FUN_10c62ec0(param_1,param_2,param_3,param_4,puVar2,param_6,param_7,uVar1);
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10a83ac0; body size 121 bytes.
#line 1 "ENTRY_10a83ac0"

undefined4 __thiscall Recovered_Bulk::FUN_10a83ac0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168e3bd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  local_8 = (undefined4)(0);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_6 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_6);
  }
  thunk_FUN_10c62ec0(param_1,param_2,param_3,param_4,param_5,puVar2,param_7,param_8,uVar1);
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10a84650; body size 106 bytes.
#line 1 "ENTRY_10a84650"

undefined4 __thiscall Recovered_Bulk::FUN_10a84650(undefined4 param_2,undefined4 *param_3)
{
  undefined4 param_1 = (undefined4 )this;
  uint uVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168e74d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  local_8 = (undefined4)(0);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_3);
  }
  thunk_FUN_10c62ec0(param_1,param_2,puVar2,uVar1);
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10a84950; body size 68 bytes.
#line 1 "ENTRY_10a84950"

undefined4 * __thiscall Recovered_Bulk::FUN_10a84950(byte param_2)
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


// Reference entry 10a84a40; body size 68 bytes.
#line 1 "ENTRY_10a84a40"

undefined4 * __thiscall Recovered_Bulk::FUN_10a84a40(byte param_2)
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


// Reference entry 10a84ae0; body size 68 bytes.
#line 1 "ENTRY_10a84ae0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a84ae0(byte param_2)
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


// Reference entry 10a84b80; body size 68 bytes.
#line 1 "ENTRY_10a84b80"

undefined4 * __thiscall Recovered_Bulk::FUN_10a84b80(byte param_2)
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


// Reference entry 10a84cc0; body size 168 bytes.
#line 1 "ENTRY_10a84cc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a84cc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168e827);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCCopyTestIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCCopyTestIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCCopyTestIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCCopyTestIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a84da0; body size 168 bytes.
#line 1 "ENTRY_10a84da0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a84da0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168e877);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCCopyTestRawStringPage);
    puVar1[4] = (uint)&ghidra_vftable_SCCopyTestRawStringPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCCopyTestRawStringPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCCopyTestRawStringPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a84e80; body size 168 bytes.
#line 1 "ENTRY_10a84e80"

undefined4 * __thiscall Recovered_Bulk::FUN_10a84e80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168e8c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCCopyTestResourceStringPage);
    puVar1[4] = (uint)&ghidra_vftable_SCCopyTestResourceStringPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCCopyTestResourceStringPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCCopyTestResourceStringPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a84f60; body size 189 bytes.
#line 1 "ENTRY_10a84f60"

undefined4 * __thiscall Recovered_Bulk::FUN_10a84f60(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168e930);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCCopyTestWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCCopyTestWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCCopyTestWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCCopyTestWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a89fc0; body size 68 bytes.
#line 1 "ENTRY_10a89fc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a89fc0(byte param_2)
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


// Reference entry 10a8a0e0; body size 68 bytes.
#line 1 "ENTRY_10a8a0e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a8a0e0(byte param_2)
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


// Reference entry 10a8a180; body size 68 bytes.
#line 1 "ENTRY_10a8a180"

undefined4 * __thiscall Recovered_Bulk::FUN_10a8a180(byte param_2)
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


// Reference entry 10a8a220; body size 68 bytes.
#line 1 "ENTRY_10a8a220"

undefined4 * __thiscall Recovered_Bulk::FUN_10a8a220(byte param_2)
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


// Reference entry 10a8a2c0; body size 68 bytes.
#line 1 "ENTRY_10a8a2c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a8a2c0(byte param_2)
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


// Reference entry 10a8a500; body size 168 bytes.
#line 1 "ENTRY_10a8a500"

undefined4 * __thiscall Recovered_Bulk::FUN_10a8a500(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168fa57);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDiscoveryHistoryCollectionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDiscoveryHistoryCollectionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDiscoveryHistoryCollectionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDiscoveryHistoryCollectionPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a8a5e0; body size 168 bytes.
#line 1 "ENTRY_10a8a5e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a8a5e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168faa7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDiscoveryHistoryDeviceListPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDiscoveryHistoryDeviceListPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDiscoveryHistoryDeviceListPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDiscoveryHistoryDeviceListPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a8a6c0; body size 168 bytes.
#line 1 "ENTRY_10a8a6c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a8a6c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168faf7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDiscoveryHistoryDeviceSummaryPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDiscoveryHistoryDeviceSummaryPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDiscoveryHistoryDeviceSummaryPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDiscoveryHistoryDeviceSummaryPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a8a7a0; body size 168 bytes.
#line 1 "ENTRY_10a8a7a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a8a7a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168fb47);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDiscoveryHistoryHouseholdListPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDiscoveryHistoryHouseholdListPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDiscoveryHistoryHouseholdListPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDiscoveryHistoryHouseholdListPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a8a880; body size 233 bytes.
#line 1 "ENTRY_10a8a880"

undefined4 * __thiscall Recovered_Bulk::FUN_10a8a880(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1168fbb0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDiscoveryHistoryWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCDiscoveryHistoryWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDiscoveryHistoryWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDiscoveryHistoryWizard;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a90d40; body size 168 bytes.
#line 1 "ENTRY_10a90d40"

void __thiscall Recovered_Bulk::FUN_10a90d40(int param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11690aed);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if (param_2 != *(int *)(param_1 + 0xe8)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xec));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(undefined4 *)(param_1 + 0xec) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    *(int *)(param_1 + 0xe8) = param_2;
    *(int **)(param_1 + 0xec) = param_3;
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


// Reference entry 10a91d60; body size 122 bytes.
#line 1 "ENTRY_10a91d60"

undefined4 * __thiscall Recovered_Bulk::FUN_10a91d60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169102d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDiscoverySinglePage);
  param_1[4] = (uint)&ghidra_vftable_SCDiscoverySinglePage;
  param_1[0x23] = (uint)&ghidra_vftable_SCDiscoverySinglePage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCDiscoverySinglePage;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10a92930; body size 135 bytes.
#line 1 "ENTRY_10a92930"

void __fastcall FUN_10a92930(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11691360);
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


// Reference entry 10a92a70; body size 135 bytes.
#line 1 "ENTRY_10a92a70"

void __fastcall FUN_10a92a70(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11691390);
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


// Reference entry 10a92dd0; body size 68 bytes.
#line 1 "ENTRY_10a92dd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a92dd0(byte param_2)
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


// Reference entry 10a92f80; body size 68 bytes.
#line 1 "ENTRY_10a92f80"

undefined4 * __thiscall Recovered_Bulk::FUN_10a92f80(byte param_2)
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


// Reference entry 10a93020; body size 68 bytes.
#line 1 "ENTRY_10a93020"

undefined4 * __thiscall Recovered_Bulk::FUN_10a93020(byte param_2)
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


// Reference entry 10a930c0; body size 68 bytes.
#line 1 "ENTRY_10a930c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a930c0(byte param_2)
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


// Reference entry 10a93160; body size 159 bytes.
#line 1 "ENTRY_10a93160"

undefined4 * __thiscall Recovered_Bulk::FUN_10a93160(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116913c0);
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


// Reference entry 10a93270; body size 81 bytes.
#line 1 "ENTRY_10a93270"

undefined4 * __thiscall Recovered_Bulk::FUN_10a93270(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_105bb550();
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


// Reference entry 10a93320; body size 159 bytes.
#line 1 "ENTRY_10a93320"

undefined4 * __thiscall Recovered_Bulk::FUN_10a93320(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116913f0);
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


// Reference entry 10a93430; body size 68 bytes.
#line 1 "ENTRY_10a93430"

undefined4 * __thiscall Recovered_Bulk::FUN_10a93430(byte param_2)
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


// Reference entry 10a934d0; body size 76 bytes.
#line 1 "ENTRY_10a934d0"

int __thiscall Recovered_Bulk::FUN_10a934d0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x11c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0xf8));
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x120);
  }
  return (int)(param_1);
}


// Reference entry 10a935f0; body size 168 bytes.
#line 1 "ENTRY_10a935f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a935f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116916d7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDiscoveryAllPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDiscoveryAllPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDiscoveryAllPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDiscoveryAllPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a936d0; body size 168 bytes.
#line 1 "ENTRY_10a936d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a936d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11691727);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDiscoveryApFailPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDiscoveryApFailPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDiscoveryApFailPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDiscoveryApFailPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a937b0; body size 168 bytes.
#line 1 "ENTRY_10a937b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a937b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11691777);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDiscoveryApFoundPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDiscoveryApFoundPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDiscoveryApFoundPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDiscoveryApFoundPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a93890; body size 188 bytes.
#line 1 "ENTRY_10a93890"

undefined4 * __thiscall Recovered_Bulk::FUN_10a93890(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116917c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDiscoveryApScanPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDiscoveryApScanPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDiscoveryApScanPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDiscoveryApScanPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a93980; body size 198 bytes.
#line 1 "ENTRY_10a93980"

undefined4 * __thiscall Recovered_Bulk::FUN_10a93980(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11691817);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xec));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDiscoveryBTOnlyPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDiscoveryBTOnlyPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDiscoveryBTOnlyPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDiscoveryBTOnlyPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a93a80; body size 188 bytes.
#line 1 "ENTRY_10a93a80"

undefined4 * __thiscall Recovered_Bulk::FUN_10a93a80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169186f);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDiscoverySinglePage);
    puVar1[4] = (uint)&ghidra_vftable_SCDiscoverySinglePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDiscoverySinglePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDiscoverySinglePage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a93b70; body size 168 bytes.
#line 1 "ENTRY_10a93b70"

undefined4 * __thiscall Recovered_Bulk::FUN_10a93b70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116918b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDiscoverySplashPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDiscoverySplashPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDiscoverySplashPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDiscoverySplashPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a93c50; body size 233 bytes.
#line 1 "ENTRY_10a93c50"

undefined4 * __thiscall Recovered_Bulk::FUN_10a93c50(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11691920);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0x120));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDiscoveryWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCDiscoveryWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDiscoveryWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDiscoveryWizard;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x47] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a97940; body size 106 bytes.
#line 1 "ENTRY_10a97940"

undefined4 * __thiscall Recovered_Bulk::FUN_10a97940(undefined4 *param_2)
{
  int param_1 = (int )this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11692270);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[0xd] = 0;
  local_8 = (undefined4)(0);
  thunk_FUN_105ef430(param_1 + 0xe8);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10a99a50; body size 190 bytes.
#line 1 "ENTRY_10a99a50"

void FUN_10a99a50(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11692745);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10342f60(0x1f);
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10dfbbe0());
  local_8 = (undefined4)(1);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10342f40(0x1f);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10a99e40; body size 306 bytes.
#line 1 "ENTRY_10a99e40"

void FUN_10a99e40(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169283d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10342f60(0x1f);
    thunk_FUN_10ebb890(5000,5000);
    ExceptionList = (void *)(local_10);
    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10dfbe50());
  local_8 = (undefined4)(1);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10342f40(0x1f);
    thunk_FUN_10342f60(0x1f);
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


// Reference entry 10a9a180; body size 97 bytes.
#line 1 "ENTRY_10a9a180"

void FUN_10a9a180(void)

{
  uint uVar1;
  int *in_stack_00000038;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116928dd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  thunk_FUN_105ef430(&stack0x00000004);
  if (in_stack_00000038 != (int *)0x0) {
    (**(code **)(*in_stack_00000038 + 0x10))(in_stack_00000038 != (int *)&stack0x00000014,uVar1);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10a9b8f0; body size 146 bytes.
#line 1 "ENTRY_10a9b8f0"

void __fastcall FUN_10a9b8f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11692f80);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0x40]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_105bb550();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10a9bd30; body size 68 bytes.
#line 1 "ENTRY_10a9bd30"

undefined4 * __thiscall Recovered_Bulk::FUN_10a9bd30(byte param_2)
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


// Reference entry 10a9beb0; body size 68 bytes.
#line 1 "ENTRY_10a9beb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a9beb0(byte param_2)
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


// Reference entry 10a9bf50; body size 68 bytes.
#line 1 "ENTRY_10a9bf50"

undefined4 * __thiscall Recovered_Bulk::FUN_10a9bf50(byte param_2)
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


// Reference entry 10a9bff0; body size 68 bytes.
#line 1 "ENTRY_10a9bff0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a9bff0(byte param_2)
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


// Reference entry 10a9c090; body size 170 bytes.
#line 1 "ENTRY_10a9c090"

undefined4 * __thiscall Recovered_Bulk::FUN_10a9c090(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11692fe0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0x40]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_105bb550();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10a9c1b0; body size 68 bytes.
#line 1 "ENTRY_10a9c1b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10a9c1b0(byte param_2)
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


// Reference entry 10a9c250; body size 68 bytes.
#line 1 "ENTRY_10a9c250"

undefined4 * __thiscall Recovered_Bulk::FUN_10a9c250(byte param_2)
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


// Reference entry 10a9c970; body size 209 bytes.
#line 1 "ENTRY_10a9c970"

undefined4 * __thiscall Recovered_Bulk::FUN_10a9c970(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  bool bVar4;
  int *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116933d0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  bVar4 = (bool)(false);
  pvVar2 = (void *)(operator_new(0x110));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    local_1c = (int *)(*(int **)(param_1 + 0xec));
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 4))(uVar1);
    }
    bVar4 = (bool)(true);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    piVar3 = (int *)((int *)thunk_FUN_10ee0ce0(local_1c,*(undefined4 *)(param_1 + 0xe8)));
  }
  local_8 = (undefined4)(2);
  *param_2 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  if ((bVar4) && (local_8 = 3, local_1c != (int *)0x0)) {
    (**(code **)(*local_1c + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10a9ca80; body size 168 bytes.
#line 1 "ENTRY_10a9ca80"

undefined4 * __thiscall Recovered_Bulk::FUN_10a9ca80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11693417);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDtlsTestEchoConnectingPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDtlsTestEchoConnectingPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDtlsTestEchoConnectingPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDtlsTestEchoConnectingPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a9cb60; body size 168 bytes.
#line 1 "ENTRY_10a9cb60"

undefined4 * __thiscall Recovered_Bulk::FUN_10a9cb60(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11693467);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDtlsTestEchoFailurePage);
    puVar1[4] = (uint)&ghidra_vftable_SCDtlsTestEchoFailurePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDtlsTestEchoFailurePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDtlsTestEchoFailurePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a9cc40; body size 168 bytes.
#line 1 "ENTRY_10a9cc40"

undefined4 * __thiscall Recovered_Bulk::FUN_10a9cc40(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116934b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDtlsTestEchoIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDtlsTestEchoIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDtlsTestEchoIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDtlsTestEchoIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a9cd20; body size 262 bytes.
#line 1 "ENTRY_10a9cd20"

undefined4 * __thiscall Recovered_Bulk::FUN_10a9cd20(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11693507);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0x108));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDtlsTestEchoPlayerChooserPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDtlsTestEchoPlayerChooserPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDtlsTestEchoPlayerChooserPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDtlsTestEchoPlayerChooserPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0x78;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a9ce70; body size 168 bytes.
#line 1 "ENTRY_10a9ce70"

undefined4 * __thiscall Recovered_Bulk::FUN_10a9ce70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11693557);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDtlsTestEchoProtocolChooserPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDtlsTestEchoProtocolChooserPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDtlsTestEchoProtocolChooserPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDtlsTestEchoProtocolChooserPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a9cf50; body size 168 bytes.
#line 1 "ENTRY_10a9cf50"

undefined4 * __thiscall Recovered_Bulk::FUN_10a9cf50(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116935a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDtlsTestEchoSuccessPage);
    puVar1[4] = (uint)&ghidra_vftable_SCDtlsTestEchoSuccessPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDtlsTestEchoSuccessPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDtlsTestEchoSuccessPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10a9d030; body size 243 bytes.
#line 1 "ENTRY_10a9d030"

undefined4 * __thiscall Recovered_Bulk::FUN_10a9d030(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11693610);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xfc));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCDtlsTestWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCDtlsTestWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCDtlsTestWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCDtlsTestWizard;
    puVar1[0x3a] = 1;
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


// Reference entry 10aa2750; body size 101 bytes.
#line 1 "ENTRY_10aa2750"

void __thiscall Recovered_Bulk::FUN_10aa2750(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0xec)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xf0));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xec) = 0;
      *(undefined4 *)(param_1 + 0xf0) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0xec) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0xf0) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  return;
}


// Reference entry 10aa2800; body size 278 bytes.
#line 1 "ENTRY_10aa2800"

void __fastcall FUN_10aa2800(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116942c5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if (*(int *)(param_1 + 0xe8) == 1) {
    uVar3 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(4);
    if (*(int *)(param_1 + 0xe8) == 2) {
      uVar3 = (undefined4)(1);
    }
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  piVar2 = (int *)((int *)thunk_FUN_10c94600(&local_14,piVar1));
  piVar4 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *piVar2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  uVar9 = (undefined4)(0);
  uVar8 = (undefined4)(0);
  uVar7 = (undefined4)(0);
  uVar6 = (undefined4)(0);
  uVar5 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  thunk_FUN_10ee48c0(piVar4,uVar3,0,0,0,0,0);
  thunk_FUN_10eea860(piVar4,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
    ExceptionList = (void *)(local_10);
    return;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10aa6830; body size 68 bytes.
#line 1 "ENTRY_10aa6830"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa6830(byte param_2)
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


// Reference entry 10aa6b90; body size 68 bytes.
#line 1 "ENTRY_10aa6b90"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa6b90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10aa6c30; body size 68 bytes.
#line 1 "ENTRY_10aa6c30"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa6c30(byte param_2)
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


// Reference entry 10aa6cd0; body size 68 bytes.
#line 1 "ENTRY_10aa6cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa6cd0(byte param_2)
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


// Reference entry 10aa6d70; body size 68 bytes.
#line 1 "ENTRY_10aa6d70"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa6d70(byte param_2)
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


// Reference entry 10aa6e10; body size 68 bytes.
#line 1 "ENTRY_10aa6e10"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa6e10(byte param_2)
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


// Reference entry 10aa6eb0; body size 68 bytes.
#line 1 "ENTRY_10aa6eb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa6eb0(byte param_2)
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


// Reference entry 10aa6f50; body size 68 bytes.
#line 1 "ENTRY_10aa6f50"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa6f50(byte param_2)
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


// Reference entry 10aa6ff0; body size 68 bytes.
#line 1 "ENTRY_10aa6ff0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa6ff0(byte param_2)
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


// Reference entry 10aa7090; body size 68 bytes.
#line 1 "ENTRY_10aa7090"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa7090(byte param_2)
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


// Reference entry 10aa7130; body size 68 bytes.
#line 1 "ENTRY_10aa7130"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa7130(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10aa71d0; body size 68 bytes.
#line 1 "ENTRY_10aa71d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa71d0(byte param_2)
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


// Reference entry 10aa7270; body size 68 bytes.
#line 1 "ENTRY_10aa7270"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa7270(byte param_2)
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


// Reference entry 10aa7310; body size 68 bytes.
#line 1 "ENTRY_10aa7310"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa7310(byte param_2)
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


// Reference entry 10aa73b0; body size 68 bytes.
#line 1 "ENTRY_10aa73b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa73b0(byte param_2)
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


// Reference entry 10aa7450; body size 68 bytes.
#line 1 "ENTRY_10aa7450"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa7450(byte param_2)
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


// Reference entry 10aa74f0; body size 68 bytes.
#line 1 "ENTRY_10aa74f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa74f0(byte param_2)
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


// Reference entry 10aa7740; body size 234 bytes.
#line 1 "ENTRY_10aa7740"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa7740(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11695677);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0x108));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlareDemoAdvancedProgressPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFlareDemoAdvancedProgressPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlareDemoAdvancedProgressPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlareDemoAdvancedProgressPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = DAT_12119c10;
    puVar1[0x3e] = 0xffffffff;
    puVar1[0x3f] = 0xffffffff;
    puVar1[0x40] = 0xffffffff;
    puVar1[0x41] = 0xffffffff;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aa7870; body size 168 bytes.
#line 1 "ENTRY_10aa7870"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa7870(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116956c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlareDemoAdvancedProgressSetupPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFlareDemoAdvancedProgressSetupPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlareDemoAdvancedProgressSetupPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlareDemoAdvancedProgressSetupPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aa7950; body size 175 bytes.
#line 1 "ENTRY_10aa7950"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa7950(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11695717);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlareDemoFirstPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFlareDemoFirstPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlareDemoFirstPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlareDemoFirstPage;
    *(undefined1 *)(puVar1 + 0x38) = 1;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aa7a30; body size 168 bytes.
#line 1 "ENTRY_10aa7a30"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa7a30(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11695767);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlareDemoImageCheckmarkPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFlareDemoImageCheckmarkPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlareDemoImageCheckmarkPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlareDemoImageCheckmarkPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aa7b10; body size 168 bytes.
#line 1 "ENTRY_10aa7b10"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa7b10(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116957b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlareDemoImageProgressPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFlareDemoImageProgressPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlareDemoImageProgressPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlareDemoImageProgressPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aa7bf0; body size 168 bytes.
#line 1 "ENTRY_10aa7bf0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa7bf0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11695807);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlareDemoImageThinkerPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFlareDemoImageThinkerPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlareDemoImageThinkerPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlareDemoImageThinkerPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aa7cd0; body size 168 bytes.
#line 1 "ENTRY_10aa7cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa7cd0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11695857);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlareDemoImageWiFiPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFlareDemoImageWiFiPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlareDemoImageWiFiPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlareDemoImageWiFiPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aa7db0; body size 175 bytes.
#line 1 "ENTRY_10aa7db0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa7db0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116958a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlareDemoSecondPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFlareDemoSecondPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlareDemoSecondPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlareDemoSecondPage;
    *(undefined1 *)(puVar1 + 0x38) = 1;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aa7e90; body size 168 bytes.
#line 1 "ENTRY_10aa7e90"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa7e90(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116958f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlareDemoSelectionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFlareDemoSelectionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlareDemoSelectionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlareDemoSelectionPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aa7f70; body size 179 bytes.
#line 1 "ENTRY_10aa7f70"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa7f70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11695947);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlareDemoSimpleProgressPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFlareDemoSimpleProgressPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlareDemoSimpleProgressPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlareDemoSimpleProgressPage;
    *(undefined8 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aa8050; body size 168 bytes.
#line 1 "ENTRY_10aa8050"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa8050(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11695997);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlareDemoSpinnerPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFlareDemoSpinnerPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlareDemoSpinnerPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlareDemoSpinnerPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aa8130; body size 168 bytes.
#line 1 "ENTRY_10aa8130"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa8130(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116959e7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlareDemoThirdPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFlareDemoThirdPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlareDemoThirdPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlareDemoThirdPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aa8210; body size 168 bytes.
#line 1 "ENTRY_10aa8210"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa8210(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11695a37);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlareDemoVideoCheckmarkPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFlareDemoVideoCheckmarkPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlareDemoVideoCheckmarkPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlareDemoVideoCheckmarkPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aa82f0; body size 168 bytes.
#line 1 "ENTRY_10aa82f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa82f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11695a87);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlareDemoVideoProgressPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFlareDemoVideoProgressPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlareDemoVideoProgressPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlareDemoVideoProgressPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aa83d0; body size 168 bytes.
#line 1 "ENTRY_10aa83d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa83d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11695ad7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlareDemoVideoThinkerPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFlareDemoVideoThinkerPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlareDemoVideoThinkerPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlareDemoVideoThinkerPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aa84b0; body size 168 bytes.
#line 1 "ENTRY_10aa84b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa84b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11695b27);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlareDemoVideoWiFiPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFlareDemoVideoWiFiPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlareDemoVideoWiFiPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlareDemoVideoWiFiPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aa8590; body size 189 bytes.
#line 1 "ENTRY_10aa8590"

undefined4 * __thiscall Recovered_Bulk::FUN_10aa8590(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11695b90);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlareDemoWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCFlareDemoWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlareDemoWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlareDemoWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aa8680; body size 374 bytes.
#line 1 "ENTRY_10aa8680"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void __thiscall Recovered_Bulk::FUN_10aa8680(char param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  iVar2 = (int)(thunk_FUN_105a29f0());
  if ((*(uint *)(param_1 + 0xf8) & *(uint *)(param_1 + 0xfc)) == 0xffffffff) {
    param_2 = (char)('\x01');
    *(int *)(param_1 + 0xf8) = iVar2;
    *(int *)(param_1 + 0xfc) = iVar2 >> 0x1f;
  }
  if (DAT_118a1c50 < *(double *)(param_1 + 0xe0) || DAT_118a1c50 == *(double *)(param_1 + 0xe0)) {
    *(double *)(param_1 + 0xe0) = DAT_118a1c50;
    cVar1 = (char)(thunk_FUN_10eba5f0());
    if (cVar1 != '\0') {
      thunk_FUN_10ebba70();
    }
    if ((*(uint *)(param_1 + 0x100) & *(uint *)(param_1 + 0x104)) == 0xffffffff) {
      *(int *)(param_1 + 0x100) = iVar2;
      *(int *)(param_1 + 0x104) = iVar2 >> 0x1f;
    }
  }
  else {
    cVar1 = (char)(thunk_FUN_10eba5f0());
    if (cVar1 == '\0') {
      thunk_FUN_10ebb8e0("evaluateProgress",15000);
    }
    if (param_2 != '\0') {
      dVar3 = (double)((DAT_118a1c50 - *(double *)(param_1 + 0xe0)) * (double)*(int *)(param_1 + 0xf0));
      dVar4 = (double)(dVar3);
      thunk_FUN_1148b0c0();
      dVar4 = (double)((double)*(int *)(param_1 + 0xf0) - (dVar4 / DAT_1189dc98) / _DAT_118dad60);
      if (dVar4 < dVar3) {
        thunk_FUN_10302280(param_1 + 0xa8,
                           "increasing duration by 1, because remainingNeededMinutes is %.2f, remainingIdealMinutes is %.2f"
                           ,dVar3,dVar4);
        *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
        return;
      }
      thunk_FUN_10302280(param_1 + 0xa8,
                         "no reason to increase duration, because remainingNeededMinutes is %.2f, remainingIdealMinutes is %.2f"
                         ,dVar3,dVar4);
      return;
    }
  }
  return;
}


// Reference entry 10ab2e30; body size 122 bytes.
#line 1 "ENTRY_10ab2e30"

void FUN_10ab2e30(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169721d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebb8e0("spinning",5000);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10ab34a0; body size 68 bytes.
#line 1 "ENTRY_10ab34a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ab34a0(byte param_2)
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


// Reference entry 10ab3530; body size 68 bytes.
#line 1 "ENTRY_10ab3530"

undefined4 * __thiscall Recovered_Bulk::FUN_10ab3530(byte param_2)
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


// Reference entry 10ab3650; body size 168 bytes.
#line 1 "ENTRY_10ab3650"

undefined4 * __thiscall Recovered_Bulk::FUN_10ab3650(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11697447);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlutterTestErrorHandlingPage);
    puVar1[4] = (uint)&ghidra_vftable_SCFlutterTestErrorHandlingPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlutterTestErrorHandlingPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlutterTestErrorHandlingPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ab3730; body size 189 bytes.
#line 1 "ENTRY_10ab3730"

undefined4 * __thiscall Recovered_Bulk::FUN_10ab3730(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116974b0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCFlutterTestWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCFlutterTestWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCFlutterTestWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCFlutterTestWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ab4440; body size 66 bytes.
#line 1 "ENTRY_10ab4440"

undefined4 * __thiscall Recovered_Bulk::FUN_10ab4440(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCGhostWizard);
  param_1[4] = (uint)&ghidra_vftable_SCGhostWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCGhostWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCGhostWizard;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 10ab4950; body size 68 bytes.
#line 1 "ENTRY_10ab4950"

undefined4 * __thiscall Recovered_Bulk::FUN_10ab4950(byte param_2)
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


// Reference entry 10ab4a10; body size 68 bytes.
#line 1 "ENTRY_10ab4a10"

undefined4 * __thiscall Recovered_Bulk::FUN_10ab4a10(byte param_2)
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


// Reference entry 10ab4ab0; body size 68 bytes.
#line 1 "ENTRY_10ab4ab0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ab4ab0(byte param_2)
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


// Reference entry 10ab4be0; body size 168 bytes.
#line 1 "ENTRY_10ab4be0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ab4be0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11697927);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCGhostBooPage);
    puVar1[4] = (uint)&ghidra_vftable_SCGhostBooPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCGhostBooPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCGhostBooPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ab4cc0; body size 168 bytes.
#line 1 "ENTRY_10ab4cc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ab4cc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11697977);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCGhostSneakyPage);
    puVar1[4] = (uint)&ghidra_vftable_SCGhostSneakyPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCGhostSneakyPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCGhostSneakyPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ab4da0; body size 198 bytes.
#line 1 "ENTRY_10ab4da0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ab4da0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116979e0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xec));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCGhostWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCGhostWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCGhostWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCGhostWizard;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ab5570; body size 455 bytes.
#line 1 "ENTRY_10ab5570"

undefined4 __thiscall Recovered_Bulk::FUN_10ab5570(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
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
  puStack_70 = (undefined1 *)(LAB_11697b15);
  local_74 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)local_68);
  ExceptionList = (void *)(&local_74);
  local_8 = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a48d0);
  local_6c = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a48cc);
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
  piVar3 = (int *)((int *)thunk_FUN_106190a0(*(undefined1 *)(param_1 + 0xe8),local_48));
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(*(undefined1 *)(param_1 + 0xe9),local_68,uVar2));
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0x10))(local_94));
  uVar4 = (undefined4)((**(code **)(*piVar3 + 4))());
  thunk_FUN_105f5a00(uVar4);
  puVar1 = (undefined4 *)(local_10);
  puVar6 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar6) != puVar1; puVar6 = puVar6 + 8) {
      (**(code **)*puVar6)(0);
    }
    uVar2 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar6 = (undefined4 *)(local_14);
    if (0xfff < uVar2) {
      puVar6 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar6))) goto LAB_10ab56dc;
    }
    thunk_FUN_1148a50e(puVar6,uVar2);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar2 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar5 = (int)(iStack_20);
    if (0xfff < uVar2) {
      iVar5 = (int)(*(int *)(iStack_20 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iStack_20 - iVar5) - 4U) {
LAB_10ab56dc:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar2);
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


// Reference entry 10ab5fe0; body size 119 bytes.
#line 1 "ENTRY_10ab5fe0"

void FUN_10ab5fe0(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11697c7d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebb8e0("throwErrorAndDismiss",0);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10ab6230; body size 189 bytes.
#line 1 "ENTRY_10ab6230"

undefined4 * __thiscall Recovered_Bulk::FUN_10ab6230(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11697db0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCHapticWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCHapticWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCHapticWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCHapticWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10abf1a0; body size 68 bytes.
#line 1 "ENTRY_10abf1a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10abf1a0(byte param_2)
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


// Reference entry 10abf8f0; body size 68 bytes.
#line 1 "ENTRY_10abf8f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10abf8f0(byte param_2)
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


// Reference entry 10abf990; body size 68 bytes.
#line 1 "ENTRY_10abf990"

undefined4 * __thiscall Recovered_Bulk::FUN_10abf990(byte param_2)
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


// Reference entry 10abfa30; body size 68 bytes.
#line 1 "ENTRY_10abfa30"

undefined4 * __thiscall Recovered_Bulk::FUN_10abfa30(byte param_2)
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


// Reference entry 10abfad0; body size 68 bytes.
#line 1 "ENTRY_10abfad0"

undefined4 * __thiscall Recovered_Bulk::FUN_10abfad0(byte param_2)
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


// Reference entry 10abfb70; body size 68 bytes.
#line 1 "ENTRY_10abfb70"

undefined4 * __thiscall Recovered_Bulk::FUN_10abfb70(byte param_2)
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


// Reference entry 10abfc10; body size 68 bytes.
#line 1 "ENTRY_10abfc10"

undefined4 * __thiscall Recovered_Bulk::FUN_10abfc10(byte param_2)
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


// Reference entry 10abfcb0; body size 68 bytes.
#line 1 "ENTRY_10abfcb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10abfcb0(byte param_2)
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


// Reference entry 10abfd50; body size 68 bytes.
#line 1 "ENTRY_10abfd50"

undefined4 * __thiscall Recovered_Bulk::FUN_10abfd50(byte param_2)
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


// Reference entry 10abfdf0; body size 68 bytes.
#line 1 "ENTRY_10abfdf0"

undefined4 * __thiscall Recovered_Bulk::FUN_10abfdf0(byte param_2)
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


// Reference entry 10abfe90; body size 68 bytes.
#line 1 "ENTRY_10abfe90"

undefined4 * __thiscall Recovered_Bulk::FUN_10abfe90(byte param_2)
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


// Reference entry 10abff30; body size 68 bytes.
#line 1 "ENTRY_10abff30"

undefined4 * __thiscall Recovered_Bulk::FUN_10abff30(byte param_2)
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


// Reference entry 10abffd0; body size 68 bytes.
#line 1 "ENTRY_10abffd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10abffd0(byte param_2)
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


// Reference entry 10ac0070; body size 68 bytes.
#line 1 "ENTRY_10ac0070"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0070(byte param_2)
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


// Reference entry 10ac0110; body size 68 bytes.
#line 1 "ENTRY_10ac0110"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0110(byte param_2)
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


// Reference entry 10ac01b0; body size 68 bytes.
#line 1 "ENTRY_10ac01b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac01b0(byte param_2)
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


// Reference entry 10ac0250; body size 68 bytes.
#line 1 "ENTRY_10ac0250"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0250(byte param_2)
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


// Reference entry 10ac02f0; body size 68 bytes.
#line 1 "ENTRY_10ac02f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac02f0(byte param_2)
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


// Reference entry 10ac0390; body size 68 bytes.
#line 1 "ENTRY_10ac0390"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0390(byte param_2)
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


// Reference entry 10ac0430; body size 68 bytes.
#line 1 "ENTRY_10ac0430"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0430(byte param_2)
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


// Reference entry 10ac04d0; body size 68 bytes.
#line 1 "ENTRY_10ac04d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac04d0(byte param_2)
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


// Reference entry 10ac0570; body size 68 bytes.
#line 1 "ENTRY_10ac0570"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0570(byte param_2)
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


// Reference entry 10ac0610; body size 68 bytes.
#line 1 "ENTRY_10ac0610"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0610(byte param_2)
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


// Reference entry 10ac06b0; body size 68 bytes.
#line 1 "ENTRY_10ac06b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac06b0(byte param_2)
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


// Reference entry 10ac0750; body size 68 bytes.
#line 1 "ENTRY_10ac0750"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0750(byte param_2)
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


// Reference entry 10ac07f0; body size 68 bytes.
#line 1 "ENTRY_10ac07f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac07f0(byte param_2)
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


// Reference entry 10ac0890; body size 68 bytes.
#line 1 "ENTRY_10ac0890"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0890(byte param_2)
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


// Reference entry 10ac0930; body size 68 bytes.
#line 1 "ENTRY_10ac0930"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0930(byte param_2)
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


// Reference entry 10ac09d0; body size 68 bytes.
#line 1 "ENTRY_10ac09d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac09d0(byte param_2)
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


// Reference entry 10ac0a70; body size 68 bytes.
#line 1 "ENTRY_10ac0a70"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0a70(byte param_2)
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


// Reference entry 10ac0b10; body size 68 bytes.
#line 1 "ENTRY_10ac0b10"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0b10(byte param_2)
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


// Reference entry 10ac0bb0; body size 68 bytes.
#line 1 "ENTRY_10ac0bb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0bb0(byte param_2)
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


// Reference entry 10ac0c50; body size 68 bytes.
#line 1 "ENTRY_10ac0c50"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0c50(byte param_2)
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


// Reference entry 10ac0cf0; body size 68 bytes.
#line 1 "ENTRY_10ac0cf0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0cf0(byte param_2)
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


// Reference entry 10ac0d90; body size 68 bytes.
#line 1 "ENTRY_10ac0d90"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0d90(byte param_2)
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


// Reference entry 10ac0e30; body size 68 bytes.
#line 1 "ENTRY_10ac0e30"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0e30(byte param_2)
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


// Reference entry 10ac0ed0; body size 68 bytes.
#line 1 "ENTRY_10ac0ed0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0ed0(byte param_2)
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


// Reference entry 10ac0f70; body size 68 bytes.
#line 1 "ENTRY_10ac0f70"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac0f70(byte param_2)
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


// Reference entry 10ac1180; body size 168 bytes.
#line 1 "ENTRY_10ac1180"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac1180(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169a857);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockActionableListPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockActionableListPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockActionableListPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockActionableListPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac1260; body size 168 bytes.
#line 1 "ENTRY_10ac1260"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac1260(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169a8a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockButtonFirstPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockButtonFirstPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockButtonFirstPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockButtonFirstPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac1340; body size 168 bytes.
#line 1 "ENTRY_10ac1340"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac1340(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169a8f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockButtonFourthPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockButtonFourthPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockButtonFourthPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockButtonFourthPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac1420; body size 168 bytes.
#line 1 "ENTRY_10ac1420"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac1420(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169a947);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockButtonSecondPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockButtonSecondPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockButtonSecondPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockButtonSecondPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac1500; body size 168 bytes.
#line 1 "ENTRY_10ac1500"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac1500(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169a997);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockButtonSecondaryButtonFirstPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockButtonSecondaryButtonFirstPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockButtonSecondaryButtonFirstPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockButtonSecondaryButtonFirstPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac15e0; body size 168 bytes.
#line 1 "ENTRY_10ac15e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac15e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169a9e7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockButtonSecondaryButtonSecondPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockButtonSecondaryButtonSecondPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockButtonSecondaryButtonSecondPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockButtonSecondaryButtonSecondPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac16c0; body size 168 bytes.
#line 1 "ENTRY_10ac16c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac16c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169aa37);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockButtonThirdPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockButtonThirdPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockButtonThirdPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockButtonThirdPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac17a0; body size 168 bytes.
#line 1 "ENTRY_10ac17a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac17a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169aa87);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockCaptionImageCarouselBarDebugPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockCaptionImageCarouselBarDebugPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockCaptionImageCarouselBarDebugPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockCaptionImageCarouselBarDebugPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac1880; body size 168 bytes.
#line 1 "ENTRY_10ac1880"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac1880(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169aad7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockCaptionImageCarouselDebugPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockCaptionImageCarouselDebugPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockCaptionImageCarouselDebugPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockCaptionImageCarouselDebugPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac1960; body size 168 bytes.
#line 1 "ENTRY_10ac1960"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac1960(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169ab27);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockCaptionImageDebugPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockCaptionImageDebugPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockCaptionImageDebugPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockCaptionImageDebugPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac1a40; body size 168 bytes.
#line 1 "ENTRY_10ac1a40"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac1a40(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169ab77);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockCheckboxLongItemPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockCheckboxLongItemPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockCheckboxLongItemPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockCheckboxLongItemPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac1b20; body size 168 bytes.
#line 1 "ENTRY_10ac1b20"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac1b20(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169abc7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockCheckboxShortItemPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockCheckboxShortItemPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockCheckboxShortItemPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockCheckboxShortItemPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac1c00; body size 168 bytes.
#line 1 "ENTRY_10ac1c00"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac1c00(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169ac17);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockDrumPickerPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockDrumPickerPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockDrumPickerPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockDrumPickerPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac1ce0; body size 168 bytes.
#line 1 "ENTRY_10ac1ce0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac1ce0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169ac67);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockDrumPickerWithIconsAndSubtextPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockDrumPickerWithIconsAndSubtextPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockDrumPickerWithIconsAndSubtextPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockDrumPickerWithIconsAndSubtextPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac1dc0; body size 168 bytes.
#line 1 "ENTRY_10ac1dc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac1dc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169acb7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockDrumPickerWithIconsPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockDrumPickerWithIconsPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockDrumPickerWithIconsPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockDrumPickerWithIconsPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac1ea0; body size 168 bytes.
#line 1 "ENTRY_10ac1ea0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac1ea0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169ad07);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockDrumPickerWithSubtextPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockDrumPickerWithSubtextPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockDrumPickerWithSubtextPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockDrumPickerWithSubtextPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac1f80; body size 168 bytes.
#line 1 "ENTRY_10ac1f80"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac1f80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169ad57);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockFieldAPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockFieldAPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockFieldAPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockFieldAPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac2060; body size 168 bytes.
#line 1 "ENTRY_10ac2060"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac2060(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169ada7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockFieldBPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockFieldBPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockFieldBPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockFieldBPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac2140; body size 168 bytes.
#line 1 "ENTRY_10ac2140"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac2140(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169adf7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockListPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockListPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockListPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockListPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac2220; body size 168 bytes.
#line 1 "ENTRY_10ac2220"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac2220(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169ae47);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockListWithIconsOnLeftPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockListWithIconsOnLeftPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockListWithIconsOnLeftPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockListWithIconsOnLeftPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac2300; body size 168 bytes.
#line 1 "ENTRY_10ac2300"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac2300(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169ae97);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockListWithIndicatorsPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockListWithIndicatorsPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockListWithIndicatorsPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockListWithIndicatorsPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac23e0; body size 168 bytes.
#line 1 "ENTRY_10ac23e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac23e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169aee7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockMarkdownFirstPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockMarkdownFirstPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockMarkdownFirstPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockMarkdownFirstPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac24c0; body size 168 bytes.
#line 1 "ENTRY_10ac24c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac24c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169af37);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockMarkdownInputPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockMarkdownInputPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockMarkdownInputPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockMarkdownInputPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac25a0; body size 168 bytes.
#line 1 "ENTRY_10ac25a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac25a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169af87);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockMarkdownOutput2Page);
    puVar1[4] = (uint)&ghidra_vftable_SCMockMarkdownOutput2Page;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockMarkdownOutput2Page;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockMarkdownOutput2Page;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac2680; body size 168 bytes.
#line 1 "ENTRY_10ac2680"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac2680(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169afd7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockMarkdownOutputPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockMarkdownOutputPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockMarkdownOutputPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockMarkdownOutputPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac2760; body size 168 bytes.
#line 1 "ENTRY_10ac2760"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac2760(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169b027);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockMarkdownSecondPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockMarkdownSecondPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockMarkdownSecondPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockMarkdownSecondPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac2840; body size 168 bytes.
#line 1 "ENTRY_10ac2840"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac2840(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169b077);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockMarkdownThirdPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockMarkdownThirdPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockMarkdownThirdPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockMarkdownThirdPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac2920; body size 168 bytes.
#line 1 "ENTRY_10ac2920"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac2920(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169b0c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockMultilinePickerPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockMultilinePickerPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockMultilinePickerPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockMultilinePickerPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac2a00; body size 168 bytes.
#line 1 "ENTRY_10ac2a00"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac2a00(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169b117);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockRichSelectorPickerPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockRichSelectorPickerPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockRichSelectorPickerPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockRichSelectorPickerPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac2ae0; body size 168 bytes.
#line 1 "ENTRY_10ac2ae0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac2ae0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169b167);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockScrollableActionableListPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockScrollableActionableListPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockScrollableActionableListPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockScrollableActionableListPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac2bc0; body size 168 bytes.
#line 1 "ENTRY_10ac2bc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac2bc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169b1b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockScrollableListWithIconsOnLeftInCarouselPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockScrollableListWithIconsOnLeftInCarouselPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockScrollableListWithIconsOnLeftInCarouselPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockScrollableListWithIconsOnLeftInCarouselPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac2ca0; body size 168 bytes.
#line 1 "ENTRY_10ac2ca0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac2ca0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169b207);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockScrollableListWithIconsOnLeftPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockScrollableListWithIconsOnLeftPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockScrollableListWithIconsOnLeftPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockScrollableListWithIconsOnLeftPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac2d80; body size 168 bytes.
#line 1 "ENTRY_10ac2d80"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac2d80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169b257);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockSelectProductDebugPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockSelectProductDebugPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockSelectProductDebugPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockSelectProductDebugPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac2e60; body size 168 bytes.
#line 1 "ENTRY_10ac2e60"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac2e60(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169b2a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockSelectionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockSelectionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockSelectionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockSelectionPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac2f40; body size 168 bytes.
#line 1 "ENTRY_10ac2f40"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac2f40(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169b2f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockSelectorPickerPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockSelectorPickerPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockSelectorPickerPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockSelectorPickerPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac3020; body size 168 bytes.
#line 1 "ENTRY_10ac3020"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac3020(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169b347);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockSelectorPickerWithDefaultPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockSelectorPickerWithDefaultPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockSelectorPickerWithDefaultPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockSelectorPickerWithDefaultPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ac3100; body size 178 bytes.
#line 1 "ENTRY_10ac3100"

undefined4 * __thiscall Recovered_Bulk::FUN_10ac3100(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1169b397);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMockUpdateDebugPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMockUpdateDebugPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMockUpdateDebugPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMockUpdateDebugPage;
    puVar1[0x38] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ae5e70; body size 195 bytes.
#line 1 "ENTRY_10ae5e70"

int __fastcall FUN_10ae5e70(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a0525);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10ebb850(10000));
    ExceptionList = (void *)(local_10);
    return (int)(iVar3);
  }
  uVar2 = (undefined4)(thunk_FUN_10dfbe50());
  local_8 = (undefined4)(1);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  iVar3 = (int)(thunk_FUN_10def0d0());
  if (cVar1 != '\0') {
    iVar4 = (int)(*(int *)(param_1 + 0xe0) + 1);
    iVar3 = (int)(iVar4 / 3);
    *(int *)(param_1 + 0xe0) = iVar4 % 3;
  }
  ExceptionList = (void *)(local_10);
  return (int)(iVar3);
}


// Reference entry 10ae6d30; body size 68 bytes.
#line 1 "ENTRY_10ae6d30"

undefined4 * __thiscall Recovered_Bulk::FUN_10ae6d30(byte param_2)
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


// Reference entry 10ae6e20; body size 68 bytes.
#line 1 "ENTRY_10ae6e20"

undefined4 * __thiscall Recovered_Bulk::FUN_10ae6e20(byte param_2)
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


// Reference entry 10ae6ec0; body size 68 bytes.
#line 1 "ENTRY_10ae6ec0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ae6ec0(byte param_2)
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


// Reference entry 10ae6f60; body size 68 bytes.
#line 1 "ENTRY_10ae6f60"

undefined4 * __thiscall Recovered_Bulk::FUN_10ae6f60(byte param_2)
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


// Reference entry 10ae70a0; body size 168 bytes.
#line 1 "ENTRY_10ae70a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ae70a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a09b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMolassesFirstPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMolassesFirstPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMolassesFirstPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMolassesFirstPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ae7180; body size 168 bytes.
#line 1 "ENTRY_10ae7180"

undefined4 * __thiscall Recovered_Bulk::FUN_10ae7180(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a0a07);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMolassesSecondPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMolassesSecondPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMolassesSecondPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMolassesSecondPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ae7260; body size 168 bytes.
#line 1 "ENTRY_10ae7260"

undefined4 * __thiscall Recovered_Bulk::FUN_10ae7260(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a0a57);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMolassesThirdPage);
    puVar1[4] = (uint)&ghidra_vftable_SCMolassesThirdPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMolassesThirdPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMolassesThirdPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ae7340; body size 189 bytes.
#line 1 "ENTRY_10ae7340"

undefined4 * __thiscall Recovered_Bulk::FUN_10ae7340(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a0ac0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMolassesWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCMolassesWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCMolassesWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCMolassesWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aeafb0; body size 68 bytes.
#line 1 "ENTRY_10aeafb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aeafb0(byte param_2)
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


// Reference entry 10aeb190; body size 68 bytes.
#line 1 "ENTRY_10aeb190"

undefined4 * __thiscall Recovered_Bulk::FUN_10aeb190(byte param_2)
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


// Reference entry 10aeb230; body size 68 bytes.
#line 1 "ENTRY_10aeb230"

undefined4 * __thiscall Recovered_Bulk::FUN_10aeb230(byte param_2)
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


// Reference entry 10aeb2d0; body size 68 bytes.
#line 1 "ENTRY_10aeb2d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aeb2d0(byte param_2)
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


// Reference entry 10aeb370; body size 68 bytes.
#line 1 "ENTRY_10aeb370"

undefined4 * __thiscall Recovered_Bulk::FUN_10aeb370(byte param_2)
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


// Reference entry 10aeb410; body size 68 bytes.
#line 1 "ENTRY_10aeb410"

undefined4 * __thiscall Recovered_Bulk::FUN_10aeb410(byte param_2)
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


// Reference entry 10aeb4b0; body size 68 bytes.
#line 1 "ENTRY_10aeb4b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aeb4b0(byte param_2)
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


// Reference entry 10aeb550; body size 68 bytes.
#line 1 "ENTRY_10aeb550"

undefined4 * __thiscall Recovered_Bulk::FUN_10aeb550(byte param_2)
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


// Reference entry 10aeb5f0; body size 68 bytes.
#line 1 "ENTRY_10aeb5f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aeb5f0(byte param_2)
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


// Reference entry 10aeb7a0; body size 168 bytes.
#line 1 "ENTRY_10aeb7a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aeb7a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a17e7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCPopupDemoSelectionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCPopupDemoSelectionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCPopupDemoSelectionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCPopupDemoSelectionPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aeb880; body size 168 bytes.
#line 1 "ENTRY_10aeb880"

undefined4 * __thiscall Recovered_Bulk::FUN_10aeb880(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a1837);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCPopupDemoTest1APage);
    puVar1[4] = (uint)&ghidra_vftable_SCPopupDemoTest1APage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCPopupDemoTest1APage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCPopupDemoTest1APage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aeb960; body size 168 bytes.
#line 1 "ENTRY_10aeb960"

undefined4 * __thiscall Recovered_Bulk::FUN_10aeb960(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a1887);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCPopupDemoTest1BPage);
    puVar1[4] = (uint)&ghidra_vftable_SCPopupDemoTest1BPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCPopupDemoTest1BPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCPopupDemoTest1BPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aeba40; body size 168 bytes.
#line 1 "ENTRY_10aeba40"

undefined4 * __thiscall Recovered_Bulk::FUN_10aeba40(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a18d7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCPopupDemoTest1CPage);
    puVar1[4] = (uint)&ghidra_vftable_SCPopupDemoTest1CPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCPopupDemoTest1CPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCPopupDemoTest1CPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aebb20; body size 168 bytes.
#line 1 "ENTRY_10aebb20"

undefined4 * __thiscall Recovered_Bulk::FUN_10aebb20(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a1927);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCPopupDemoTest2APage);
    puVar1[4] = (uint)&ghidra_vftable_SCPopupDemoTest2APage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCPopupDemoTest2APage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCPopupDemoTest2APage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aebc00; body size 168 bytes.
#line 1 "ENTRY_10aebc00"

undefined4 * __thiscall Recovered_Bulk::FUN_10aebc00(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a1977);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCPopupDemoTest3Page);
    puVar1[4] = (uint)&ghidra_vftable_SCPopupDemoTest3Page;
    puVar1[0x23] = (uint)&ghidra_vftable_SCPopupDemoTest3Page;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCPopupDemoTest3Page;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aebce0; body size 168 bytes.
#line 1 "ENTRY_10aebce0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aebce0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a19c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCPopupDemoTest4APage);
    puVar1[4] = (uint)&ghidra_vftable_SCPopupDemoTest4APage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCPopupDemoTest4APage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCPopupDemoTest4APage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aebdc0; body size 168 bytes.
#line 1 "ENTRY_10aebdc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aebdc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a1a17);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCPopupDemoTest4BPage);
    puVar1[4] = (uint)&ghidra_vftable_SCPopupDemoTest4BPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCPopupDemoTest4BPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCPopupDemoTest4BPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10aebea0; body size 189 bytes.
#line 1 "ENTRY_10aebea0"

undefined4 * __thiscall Recovered_Bulk::FUN_10aebea0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a1a80);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCPopupDemoWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCPopupDemoWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCPopupDemoWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCPopupDemoWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10af3560; body size 65 bytes.
#line 1 "ENTRY_10af3560"

void FUN_10af3560(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(1);
  uVar1 = (undefined4)(0x10);
  thunk_FUN_105bebd0(0x10,1);
  thunk_FUN_10e110d0(uVar1,uVar2);
  uVar2 = (undefined4)(1);
  uVar1 = (undefined4)(0x17);
  thunk_FUN_105bebd0(0x17,1);
  thunk_FUN_10e110d0(uVar1,uVar2);
  uVar2 = (undefined4)(2);
  uVar1 = (undefined4)(0x13);
  thunk_FUN_105bebd0(0x13,2);
  thunk_FUN_10e110d0(uVar1,uVar2);
  uVar2 = (undefined4)(0xc);
  uVar1 = (undefined4)(0x23);
  thunk_FUN_105bebd0(0x23,0xc);
  thunk_FUN_10e110d0(uVar1,uVar2);
  return;
}


// Reference entry 10af3870; body size 220 bytes.
#line 1 "ENTRY_10af3870"

int * __thiscall Recovered_Bulk::FUN_10af3870(int *param_2)
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
  puStack_c = (undefined1 *)(LAB_116a2c5d);
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
  uVar8 = (undefined4)(thunk_FUN_10af3f70(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
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


// Reference entry 10af47d0; body size 73 bytes.
#line 1 "ENTRY_10af47d0"

int * __thiscall Recovered_Bulk::FUN_10af47d0(int *param_2,int *param_3)
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


// Reference entry 10af4a00; body size 214 bytes.
#line 1 "ENTRY_10af4a00"

int * __thiscall Recovered_Bulk::FUN_10af4a00(int *param_2,int *param_3)
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
  puStack_c = (undefined1 *)(LAB_116a2ecd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10af47d0(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
  if (param_1[1] != 0xaaaaaaa) {
    uVar1 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x18));
    puVar3[4] = *param_3;
    puVar3[5] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_10af7ee0(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);
}


// Reference entry 10af5a00; body size 220 bytes.
#line 1 "ENTRY_10af5a00"

int * __thiscall Recovered_Bulk::FUN_10af5a00(int *param_2)
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
  puStack_c = (undefined1 *)(LAB_116a325d);
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
  uVar8 = (undefined4)(thunk_FUN_10af3f70(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
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


// Reference entry 10af5be0; body size 124 bytes.
#line 1 "ENTRY_10af5be0"

undefined4 * __thiscall Recovered_Bulk::FUN_10af5be0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a329d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb64f0(param_2);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCProductAssetsCarouselPage);
  param_1[4] = (uint)&ghidra_vftable_SCProductAssetsCarouselPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCProductAssetsCarouselPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCProductAssetsCarouselPage;
  thunk_FUN_10c5f430(0,0);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10af6020; body size 124 bytes.
#line 1 "ENTRY_10af6020"

undefined4 * __thiscall Recovered_Bulk::FUN_10af6020(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a33fd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb64f0(param_2);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCProductAssetsVideoDetailPage);
  param_1[4] = (uint)&ghidra_vftable_SCProductAssetsVideoDetailPage;
  param_1[0x23] = (uint)&ghidra_vftable_SCProductAssetsVideoDetailPage;
  param_1[0x2a] = (uint)&ghidra_vftable_SCProductAssetsVideoDetailPage;
  thunk_FUN_10c5f430(0,0);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10af6f20; body size 181 bytes.
#line 1 "ENTRY_10af6f20"

int __thiscall Recovered_Bulk::FUN_10af6f20(int *param_2)
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
  puStack_c = (undefined1 *)(LAB_116a376d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10af47d0(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
    if (param_1[1] == 0xaaaaaaa) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x18));
    puVar3[4] = *param_2;
    puVar3[5] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_10af7ee0(local_24,local_20,puVar3));
  }
  ExceptionList = (void *)(local_10);
  return (int)(local_1c + 0x14);
}


// Reference entry 10af7240; body size 116 bytes.
#line 1 "ENTRY_10af7240"

int * __fastcall FUN_10af7240(int *param_1)

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


// Reference entry 10af7420; body size 68 bytes.
#line 1 "ENTRY_10af7420"

undefined4 * __thiscall Recovered_Bulk::FUN_10af7420(byte param_2)
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


// Reference entry 10af7670; body size 68 bytes.
#line 1 "ENTRY_10af7670"

undefined4 * __thiscall Recovered_Bulk::FUN_10af7670(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10af7710; body size 68 bytes.
#line 1 "ENTRY_10af7710"

undefined4 * __thiscall Recovered_Bulk::FUN_10af7710(byte param_2)
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


// Reference entry 10af77b0; body size 68 bytes.
#line 1 "ENTRY_10af77b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10af77b0(byte param_2)
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


// Reference entry 10af7850; body size 68 bytes.
#line 1 "ENTRY_10af7850"

undefined4 * __thiscall Recovered_Bulk::FUN_10af7850(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10af78f0; body size 68 bytes.
#line 1 "ENTRY_10af78f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10af78f0(byte param_2)
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


// Reference entry 10af8610; body size 187 bytes.
#line 1 "ENTRY_10af8610"

undefined4 * __thiscall Recovered_Bulk::FUN_10af8610(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a3d2f);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCProductAssetsCarouselPage);
    puVar1[4] = (uint)&ghidra_vftable_SCProductAssetsCarouselPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCProductAssetsCarouselPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCProductAssetsCarouselPage;
    thunk_FUN_10c5f430(0,0);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10af8700; body size 168 bytes.
#line 1 "ENTRY_10af8700"

undefined4 * __thiscall Recovered_Bulk::FUN_10af8700(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a3d77);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCProductAssetsColorListPage);
    puVar1[4] = (uint)&ghidra_vftable_SCProductAssetsColorListPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCProductAssetsColorListPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCProductAssetsColorListPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10af87e0; body size 168 bytes.
#line 1 "ENTRY_10af87e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10af87e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a3dc7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCProductAssetsIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCProductAssetsIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCProductAssetsIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCProductAssetsIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10af88c0; body size 187 bytes.
#line 1 "ENTRY_10af88c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10af88c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a3e1f);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCProductAssetsVideoDetailPage);
    puVar1[4] = (uint)&ghidra_vftable_SCProductAssetsVideoDetailPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCProductAssetsVideoDetailPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCProductAssetsVideoDetailPage;
    thunk_FUN_10c5f430(0,0);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10af89b0; body size 168 bytes.
#line 1 "ENTRY_10af89b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10af89b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a3e67);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCProductAssetsVideoListPage);
    puVar1[4] = (uint)&ghidra_vftable_SCProductAssetsVideoListPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCProductAssetsVideoListPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCProductAssetsVideoListPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10af8a90; body size 219 bytes.
#line 1 "ENTRY_10af8a90"

undefined4 * __thiscall Recovered_Bulk::FUN_10af8a90(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a3ed0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCProductAssetsWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCProductAssetsWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCProductAssetsWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCProductAssetsWizard;
    puVar1[0x3a] = 1;
    puVar1[0x3b] = 1;
    puVar1[0x3c] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10afec30; body size 190 bytes.
#line 1 "ENTRY_10afec30"

void __fastcall FUN_10afec30(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a4aed);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    thunk_FUN_10c5f430(*(undefined4 *)(iVar3 + 0xe8),*(undefined4 *)(iVar3 + 0xec));
    puVar5 = (undefined4 *)((undefined4 *)(param_1 + 0xe0));
    *(undefined4 *)(param_1 + 0xe4) = local_14;
    *puVar5 = (undefined4)(local_18);
    thunk_FUN_10ebbab0(2);
    puVar4 = (undefined4 *)(puVar5);
    thunk_FUN_105bebd0(puVar5);
    cVar1 = (char)(thunk_FUN_10e10fd0(puVar4));
    if (cVar1 == '\0') {
      thunk_FUN_105bebd0(puVar5);
      thunk_FUN_10e111f0(puVar5);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10afef40; body size 190 bytes.
#line 1 "ENTRY_10afef40"

void __fastcall FUN_10afef40(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a4bcd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    thunk_FUN_10c5f430(*(undefined4 *)(iVar3 + 0xe8),*(undefined4 *)(iVar3 + 0xec));
    puVar5 = (undefined4 *)((undefined4 *)(param_1 + 0xe0));
    *(undefined4 *)(param_1 + 0xe4) = local_14;
    *puVar5 = (undefined4)(local_18);
    thunk_FUN_10ebbab0(2);
    puVar4 = (undefined4 *)(puVar5);
    thunk_FUN_105bebd0(puVar5);
    cVar1 = (char)(thunk_FUN_10e10fd0(puVar4));
    if (cVar1 == '\0') {
      thunk_FUN_105bebd0(puVar5);
      thunk_FUN_10e111f0(puVar5);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b00090; body size 68 bytes.
#line 1 "ENTRY_10b00090"

undefined4 * __thiscall Recovered_Bulk::FUN_10b00090(byte param_2)
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


// Reference entry 10b00180; body size 68 bytes.
#line 1 "ENTRY_10b00180"

undefined4 * __thiscall Recovered_Bulk::FUN_10b00180(byte param_2)
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


// Reference entry 10b00350; body size 68 bytes.
#line 1 "ENTRY_10b00350"

undefined4 * __thiscall Recovered_Bulk::FUN_10b00350(byte param_2)
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


// Reference entry 10b00490; body size 168 bytes.
#line 1 "ENTRY_10b00490"

undefined4 * __thiscall Recovered_Bulk::FUN_10b00490(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a50f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNfcTestAbilityNotAvailablePage);
    puVar1[4] = (uint)&ghidra_vftable_SCNfcTestAbilityNotAvailablePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCNfcTestAbilityNotAvailablePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCNfcTestAbilityNotAvailablePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b00680; body size 168 bytes.
#line 1 "ENTRY_10b00680"

undefined4 * __thiscall Recovered_Bulk::FUN_10b00680(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a51a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNfcTestPermissionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCNfcTestPermissionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCNfcTestPermissionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCNfcTestPermissionPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b00760; body size 189 bytes.
#line 1 "ENTRY_10b00760"

undefined4 * __thiscall Recovered_Bulk::FUN_10b00760(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a5210);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNfcTestWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCNfcTestWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCNfcTestWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCNfcTestWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b01760; body size 703 bytes.
#line 1 "ENTRY_10b01760"

undefined4 __stdcall FUN_10b01760(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
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
  puStack_70 = (undefined1 *)(LAB_116a545d);
  local_74 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_74);
  thunk_FUN_101b5540(DAT_12126b84 ^ (uint)local_68);
  local_8 = (undefined4)(DAT_121a4af0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a4ae8);
  local_6c = (undefined4)(0);
  thunk_FUN_105f5920(&local_8);
  local_8 = (undefined4)(DAT_121a4aec);
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
  piVar3 = (int *)((int *)thunk_FUN_106190a0(0,local_68));
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0x10))(local_94));
  local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalElementTree);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_24 = (undefined4)(0);
  iStack_20 = (int)(0);
  uStack_1c = (undefined4)(0);
  iStack_18 = (int)(0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (int)(0);
  local_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_6c + 1)) << 8 | (uint)(4)));
  uVar4 = (undefined4)((**(code **)(*piVar3 + 4))());
  uVar2 = (undefined1)(thunk_FUN_101b5e50(5));
  piVar3 = (int *)((int *)thunk_FUN_106190a0(uVar2,uVar4));
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0x10))(local_b4));
  uVar4 = (undefined4)((**(code **)(*piVar3 + 4))());
  thunk_FUN_105f5a00(uVar4);
  puVar1 = (undefined4 *)(local_10);
  puVar7 = (undefined4 *)(local_14);
  if (local_14 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar7) != puVar1; puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar5 = (uint)(local_c - (int)local_14 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_14);
    if (0xfff < uVar5) {
      puVar7 = (undefined4 *)((undefined4 *)local_14[-1]);
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar7))) goto LAB_10b019c4;
    }
    thunk_FUN_1148a50e(puVar7,uVar5);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (int)(0);
  }
  if (iStack_20 != 0) {
    uVar5 = (uint)(iStack_18 - iStack_20 & 0xfffffffc);
    iVar6 = (int)(iStack_20);
    if (0xfff < uVar5) {
      iVar6 = (int)(*(int *)(iStack_20 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iStack_20 - iVar6) - 4U) goto LAB_10b019c4;
    }
    thunk_FUN_1148a50e(iVar6,uVar5);
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
    uVar5 = (uint)(local_2c - (int)local_34 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_34);
    if (0xfff < uVar5) {
      puVar7 = (undefined4 *)((undefined4 *)local_34[-1]);
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (uint)((int)local_34 + (-4 - (int)puVar7))) goto LAB_10b019c4;
    }
    thunk_FUN_1148a50e(puVar7,uVar5);
    local_34 = (undefined4 *)((undefined4 *)0x0);
    local_30 = (undefined4 *)((undefined4 *)0x0);
    local_2c = (int)(0);
  }
  if (iStack_40 != 0) {
    uVar5 = (uint)(iStack_38 - iStack_40 & 0xfffffffc);
    iVar6 = (int)(iStack_40);
    if (0xfff < uVar5) {
      iVar6 = (int)(*(int *)(iStack_40 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iStack_40 - iVar6) - 4U) {
LAB_10b019c4:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar6,uVar5);
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


// Reference entry 10b02ec0; body size 216 bytes.
#line 1 "ENTRY_10b02ec0"

int * __thiscall Recovered_Bulk::FUN_10b02ec0(int *param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a57fd);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar4 = (undefined8 *)((undefined8 *)thunk_FUN_10b03580(local_1c,param_3));
  iVar6 = (int)(*(int *)(puVar4 + 1));
  uVar1 = (undefined8)(*puVar4);
  if ((*(char *)(iVar6 + 0xd) == '\0') && (*(int *)(iVar6 + 0x10) <= *param_3)) {
    *param_2 = (int)(iVar6);
    *(undefined1 *)(param_2 + 1) = 0;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
  if (param_1[1] != 0xccccccc) {
    uVar2 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar5 = (undefined4 *)(operator_new(0x14));
    puVar5[4] = *param_3;
    uStack_24 = (undefined4)((undefined4)((ulonglong)uVar1 >> 0x20));
    *puVar5 = (undefined4)(uVar2);
    local_28 = (undefined4)((undefined4)uVar1);
    puVar5[1] = uVar2;
    puVar5[2] = uVar2;
    *(undefined2 *)(puVar5 + 3) = 0;
    iVar6 = (int)(thunk_FUN_10b059e0(local_28,uStack_24,puVar5));
    *param_2 = (int)(iVar6);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar3);
}


// Reference entry 10b034d0; body size 71 bytes.
#line 1 "ENTRY_10b034d0"

void __thiscall Recovered_Bulk::FUN_10b034d0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4));
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      thunk_FUN_10b03530(param_2,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x14);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x14);
  return;
}


// Reference entry 10b03580; body size 73 bytes.
#line 1 "ENTRY_10b03580"

int * __thiscall Recovered_Bulk::FUN_10b03580(int *param_2,int *param_3)
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


// Reference entry 10b03bc0; body size 192 bytes.
#line 1 "ENTRY_10b03bc0"

void __thiscall Recovered_Bulk::FUN_10b03bc0(int *param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a5abd);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar4 = (undefined8 *)((undefined8 *)thunk_FUN_10b03580(local_1c,param_3));
  iVar6 = (int)(*(int *)(puVar4 + 1));
  uVar1 = (undefined8)(*puVar4);
  if ((*(char *)(iVar6 + 0xd) == '\0') && (*(int *)(iVar6 + 0x10) <= *param_3)) {
    uVar7 = (undefined1)(0);
  }
  else {
    if (param_1[1] == 0xccccccc) {
                    
      thunk_FUN_101d7220(uVar3);
    }
    uVar2 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar5 = (undefined4 *)(operator_new(0x14));
    puVar5[4] = *param_3;
    uStack_24 = (undefined4)((undefined4)((ulonglong)uVar1 >> 0x20));
    *puVar5 = (undefined4)(uVar2);
    local_28 = (undefined4)((undefined4)uVar1);
    puVar5[1] = uVar2;
    puVar5[2] = uVar2;
    *(undefined2 *)(puVar5 + 3) = 0;
    iVar6 = (int)(thunk_FUN_10b059e0(local_28,uStack_24,puVar5));
    uVar7 = (undefined1)(1);
  }
  *param_2 = (int)(iVar6);
  *(undefined1 *)(param_2 + 1) = uVar7;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b03ff0; body size 213 bytes.
#line 1 "ENTRY_10b03ff0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b03ff0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116a5c40);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x114));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1092b810(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_1092dc70(uVar3));
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


// Reference entry 10b04560; body size 213 bytes.
#line 1 "ENTRY_10b04560"

undefined4 * __thiscall Recovered_Bulk::FUN_10b04560(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116a5dc0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x114));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1092b810(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_1092dc70(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcUserTestNfcAuthenticationSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCNfcUserTestNfcAuthenticationSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCNfcUserTestNfcAuthenticationSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNfcUserTestNfcAuthenticationSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b048c0; body size 172 bytes.
#line 1 "ENTRY_10b048c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b048c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a5ebd);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcUserTestWizard);
  param_1[4] = (uint)&ghidra_vftable_SCNfcUserTestWizard;
  param_1[0x23] = (uint)&ghidra_vftable_SCNfcUserTestWizard;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNfcUserTestWizard;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b04ef0; body size 117 bytes.
#line 1 "ENTRY_10b04ef0"

void __fastcall FUN_10b04ef0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10b02df0(*param_1,param_1[1],param_1);
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


// Reference entry 10b05080; body size 113 bytes.
#line 1 "ENTRY_10b05080"

void __fastcall FUN_10b05080(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a6030);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10b04ef0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_106da680();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b05270; body size 68 bytes.
#line 1 "ENTRY_10b05270"

undefined4 * __thiscall Recovered_Bulk::FUN_10b05270(byte param_2)
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


// Reference entry 10b05360; body size 68 bytes.
#line 1 "ENTRY_10b05360"

undefined4 * __thiscall Recovered_Bulk::FUN_10b05360(byte param_2)
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


// Reference entry 10b05470; body size 68 bytes.
#line 1 "ENTRY_10b05470"

undefined4 * __thiscall Recovered_Bulk::FUN_10b05470(byte param_2)
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


// Reference entry 10b05510; body size 68 bytes.
#line 1 "ENTRY_10b05510"

undefined4 * __thiscall Recovered_Bulk::FUN_10b05510(byte param_2)
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


// Reference entry 10b055b0; body size 68 bytes.
#line 1 "ENTRY_10b055b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b055b0(byte param_2)
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


// Reference entry 10b05650; body size 137 bytes.
#line 1 "ENTRY_10b05650"

int __thiscall Recovered_Bulk::FUN_10b05650(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a6090);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10b04ef0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  local_8 = (undefined4)(0);
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


// Reference entry 10b05820; body size 131 bytes.
#line 1 "ENTRY_10b05820"

void __thiscall Recovered_Bulk::FUN_10b05820(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10b02df0(*param_1,param_1[1],param_1);
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


// Reference entry 10b05c80; body size 79 bytes.
#line 1 "ENTRY_10b05c80"

void __thiscall Recovered_Bulk::FUN_10b05c80(int param_2)
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


// Reference entry 10b05d20; body size 83 bytes.
#line 1 "ENTRY_10b05d20"

void __thiscall Recovered_Bulk::FUN_10b05d20(int *param_2)
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


// Reference entry 10b05d90; body size 117 bytes.
#line 1 "ENTRY_10b05d90"

void __fastcall FUN_10b05d90(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10b02df0(*param_1,param_1[1],param_1);
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


// Reference entry 10b06590; body size 168 bytes.
#line 1 "ENTRY_10b06590"

undefined4 * __thiscall Recovered_Bulk::FUN_10b06590(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a64f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNfcUserTestIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCNfcUserTestIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCNfcUserTestIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCNfcUserTestIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b06670; body size 276 bytes.
#line 1 "ENTRY_10b06670"

undefined4 * __thiscall Recovered_Bulk::FUN_10b06670(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_116a6572);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x114));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_1092b810(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_1092dc70(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNfcUserTestNfcAuthenticationSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCNfcUserTestNfcAuthenticationSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCNfcUserTestNfcAuthenticationSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCNfcUserTestNfcAuthenticationSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b067d0; body size 168 bytes.
#line 1 "ENTRY_10b067d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b067d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a65c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNfcUserTestOutroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCNfcUserTestOutroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCNfcUserTestOutroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCNfcUserTestOutroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b068b0; body size 251 bytes.
#line 1 "ENTRY_10b068b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b068b0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a6638);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0x104));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    local_8 = (undefined4)(2);
    thunk_FUN_10cf2f30(puVar1 + 0x23);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNfcUserTestWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCNfcUserTestWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCNfcUserTestWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCNfcUserTestWizard;
    *(undefined1 *)(puVar1 + 0x3d) = 0;
    puVar1[0x3e] = 0;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b077d0; body size 345 bytes.
#line 1 "ENTRY_10b077d0"

undefined4 __stdcall FUN_10b077d0(undefined4 param_1)

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
  puStack_c = (undefined1 *)(LAB_116a6825);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a4b0c);
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_10b078df;
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
LAB_10b078df:
                    
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


// Reference entry 10b07980; body size 345 bytes.
#line 1 "ENTRY_10b07980"

undefined4 __stdcall FUN_10b07980(undefined4 param_1)

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
  puStack_c = (undefined1 *)(LAB_116a6865);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a4b14);
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_10b07a8f;
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
LAB_10b07a8f:
                    
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


// Reference entry 10b09930; body size 196 bytes.
#line 1 "ENTRY_10b09930"

undefined4 __thiscall Recovered_Bulk::FUN_10b09930(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a6d8d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar3 = (undefined8 *)((undefined8 *)thunk_FUN_10b09a30(local_1c,param_2,param_3));
  uVar1 = (undefined8)(*puVar3);
  local_28 = (undefined4)((undefined4)uVar1);
  if ((char)*(undefined4 *)(puVar3 + 1) != '\0') {
    ExceptionList = (void *)(local_10);
    return (undefined4)(local_28);
  }
  if (param_1[1] != 0xccccccc) {
    uVar5 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar4 = (undefined4 *)(operator_new(0x14));
    puVar4[4] = *param_3;
    uStack_24 = (undefined4)((undefined4)((ulonglong)uVar1 >> 0x20));
    *puVar4 = (undefined4)(uVar5);
    puVar4[1] = uVar5;
    puVar4[2] = uVar5;
    *(undefined2 *)(puVar4 + 3) = 0;
    uVar5 = (undefined4)(thunk_FUN_106e7280(local_28,uStack_24,puVar4));
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar5);
  }
                    
  thunk_FUN_101d7220(uVar2);
}


// Reference entry 10b09dd0; body size 222 bytes.
#line 1 "ENTRY_10b09dd0"

void __thiscall Recovered_Bulk::FUN_10b09dd0(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  void **ppvVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined1 local_30 [12];
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a6dcd);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  uVar1 = (undefined4)(*param_1);
  ppvVar3 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  do {
    ExceptionList = (void *)(ppvVar3);
    if (param_2 == (undefined4 *)(param_3)) {
      ExceptionList = (void *)(local_10);
      return;
    }
    puVar5 = (undefined8 *)((undefined8 *)thunk_FUN_10b09a30(local_30,uVar1,param_2));
    local_24 = (undefined8)(*puVar5);
    local_1c = (undefined4)(*(undefined4 *)(puVar5 + 1));
    if ((char)local_1c == '\0') {
      if (param_1[1] == 0xccccccc) {
                    
        thunk_FUN_101d7220(uVar4);
      }
      uVar2 = (undefined4)(*param_1);
      local_8 = (undefined4)(0);
      local_14 = (undefined4)(0);
      local_18 = (undefined4 *)(param_1);
      puVar6 = (undefined4 *)(operator_new(0x14));
      local_8 = (undefined4)(0xffffffff);
      local_14 = (undefined4)(0);
      puVar6[4] = *param_2;
      *puVar6 = (undefined4)(uVar2);
      puVar6[1] = uVar2;
      puVar6[2] = uVar2;
      *(undefined2 *)(puVar6 + 3) = 0;
      thunk_FUN_106e7280((undefined4)local_24,*(uint *)((char *)&local_24 + 4),puVar6);
    }
    param_2 = (undefined4 *)(param_2 + 1);
    ppvVar3 = (void **)(ExceptionList);
  } while( true );
}


// Reference entry 10b0ac60; body size 213 bytes.
#line 1 "ENTRY_10b0ac60"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0ac60(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116a7370);
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


// Reference entry 10b0ad70; body size 213 bytes.
#line 1 "ENTRY_10b0ad70"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0ad70(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116a73d0);
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


// Reference entry 10b0ae80; body size 213 bytes.
#line 1 "ENTRY_10b0ae80"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0ae80(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116a7430);
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


// Reference entry 10b0afb0; body size 265 bytes.
#line 1 "ENTRY_10b0afb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0afb0(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined1 local_3c [12];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  void *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = (int)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a7475);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4 *)(param_3);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  local_1c = (undefined4 *)(param_1);
  local_18 = (void *)(operator_new(0x14));
  *(void **)local_18 = (void *)(local_18);
  *(void **)((int)local_18 + 4) = local_18;
  *(void **)((int)local_18 + 8) = local_18;
  *(undefined2 *)((int)local_18 + 0xc) = 0x101;
  *param_1 = (undefined4)(local_18);
  local_8 = (int)(0);
  if (param_2 != (undefined4 *)(param_3)) {
    do {
      puVar3 = (undefined8 *)((undefined8 *)thunk_FUN_10b09a30(local_3c,local_18,param_2));
      local_30 = (undefined8)(*puVar3);
      local_28 = (undefined4)(*(undefined4 *)(puVar3 + 1));
      if ((char)local_28 == '\0') {
        if (param_1[1] == 0xccccccc) {
                    
          thunk_FUN_101d7220(uVar2);
        }
        uVar1 = (undefined4)(*param_1);
        *(unsigned char *)((char *)&local_8 + 0) = 1;
        local_20 = (undefined4)(0);
        local_24 = (undefined4 *)(param_1);
        puVar4 = (undefined4 *)(operator_new(0x14));
        local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
        local_20 = (undefined4)(0);
        puVar4[4] = *param_2;
        *puVar4 = (undefined4)(uVar1);
        puVar4[1] = uVar1;
        puVar4[2] = uVar1;
        *(undefined2 *)(puVar4 + 3) = 0;
        thunk_FUN_106e7280((undefined4)local_30,*(uint *)((char *)&local_30 + 4),puVar4);
        param_3 = (undefined4 *)(local_14);
      }
      param_2 = (undefined4 *)(param_2 + 1);
    } while (param_2 != (undefined4 *)(param_3));
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b0b150; body size 213 bytes.
#line 1 "ENTRY_10b0b150"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0b150(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116a74d0);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOffLanUpdateTestApConnectSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCOffLanUpdateTestApConnectSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCOffLanUpdateTestApConnectSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCOffLanUpdateTestApConnectSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b0b770; body size 213 bytes.
#line 1 "ENTRY_10b0b770"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0b770(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116a76b0);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareUpdateSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareUpdateSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareUpdateSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareUpdateSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b0bc20; body size 213 bytes.
#line 1 "ENTRY_10b0bc20"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0bc20(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116a7830);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOffLanUpdateTestPermissionsSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCOffLanUpdateTestPermissionsSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCOffLanUpdateTestPermissionsSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCOffLanUpdateTestPermissionsSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b0db80; body size 135 bytes.
#line 1 "ENTRY_10b0db80"

void __fastcall FUN_10b0db80(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116a8030);
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


// Reference entry 10b0df40; body size 116 bytes.
#line 1 "ENTRY_10b0df40"

int * __fastcall FUN_10b0df40(int *param_1)

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


// Reference entry 10b0e280; body size 68 bytes.
#line 1 "ENTRY_10b0e280"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0e280(byte param_2)
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


// Reference entry 10b0e580; body size 68 bytes.
#line 1 "ENTRY_10b0e580"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0e580(byte param_2)
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


// Reference entry 10b0e5e0; body size 68 bytes.
#line 1 "ENTRY_10b0e5e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0e5e0(byte param_2)
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


// Reference entry 10b0e640; body size 68 bytes.
#line 1 "ENTRY_10b0e640"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0e640(byte param_2)
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


// Reference entry 10b0e6f0; body size 68 bytes.
#line 1 "ENTRY_10b0e6f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0e6f0(byte param_2)
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


// Reference entry 10b0e790; body size 68 bytes.
#line 1 "ENTRY_10b0e790"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0e790(byte param_2)
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


// Reference entry 10b0e830; body size 68 bytes.
#line 1 "ENTRY_10b0e830"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0e830(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b0e8d0; body size 68 bytes.
#line 1 "ENTRY_10b0e8d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0e8d0(byte param_2)
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


// Reference entry 10b0e970; body size 68 bytes.
#line 1 "ENTRY_10b0e970"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0e970(byte param_2)
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


// Reference entry 10b0ea10; body size 68 bytes.
#line 1 "ENTRY_10b0ea10"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0ea10(byte param_2)
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


// Reference entry 10b0eab0; body size 68 bytes.
#line 1 "ENTRY_10b0eab0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0eab0(byte param_2)
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


// Reference entry 10b0eb50; body size 68 bytes.
#line 1 "ENTRY_10b0eb50"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0eb50(byte param_2)
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


// Reference entry 10b0ebf0; body size 81 bytes.
#line 1 "ENTRY_10b0ebf0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0ebf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_105bb550();
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


// Reference entry 10b0eca0; body size 68 bytes.
#line 1 "ENTRY_10b0eca0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0eca0(byte param_2)
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


// Reference entry 10b0ed40; body size 68 bytes.
#line 1 "ENTRY_10b0ed40"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0ed40(byte param_2)
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


// Reference entry 10b0ede0; body size 68 bytes.
#line 1 "ENTRY_10b0ede0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0ede0(byte param_2)
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


// Reference entry 10b0ee80; body size 159 bytes.
#line 1 "ENTRY_10b0ee80"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0ee80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116a8090);
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


// Reference entry 10b0ef90; body size 68 bytes.
#line 1 "ENTRY_10b0ef90"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0ef90(byte param_2)
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


// Reference entry 10b0f740; body size 276 bytes.
#line 1 "ENTRY_10b0f740"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0f740(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_116a8492);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOffLanUpdateTestApConnectSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCOffLanUpdateTestApConnectSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCOffLanUpdateTestApConnectSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCOffLanUpdateTestApConnectSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b0f8a0; body size 168 bytes.
#line 1 "ENTRY_10b0f8a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0f8a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a84e7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b0f980; body size 195 bytes.
#line 1 "ENTRY_10b0f980"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0f980(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a8537);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    puVar1[0x38] = (uint)&ghidra_vftable_SCFirmwareDownloadCallback;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadPage);
    puVar1[4] = (uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadPage;
    puVar1[0x38] = (uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadPage;
    *(undefined1 *)(puVar1 + 0x39) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b0fa80; body size 168 bytes.
#line 1 "ENTRY_10b0fa80"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0fa80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a8587);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadSuccessPage);
    puVar1[4] = (uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadSuccessPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadSuccessPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadSuccessPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b0fb60; body size 276 bytes.
#line 1 "ENTRY_10b0fb60"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0fb60(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_116a8602);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareUpdateSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareUpdateSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareUpdateSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCOffLanUpdateTestFirmwareUpdateSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b0fcc0; body size 168 bytes.
#line 1 "ENTRY_10b0fcc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0fcc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a8657);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOffLanUpdateTestIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCOffLanUpdateTestIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCOffLanUpdateTestIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCOffLanUpdateTestIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b0fda0; body size 168 bytes.
#line 1 "ENTRY_10b0fda0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0fda0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a86a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOffLanUpdateTestOutroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCOffLanUpdateTestOutroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCOffLanUpdateTestOutroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCOffLanUpdateTestOutroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b0fe80; body size 276 bytes.
#line 1 "ENTRY_10b0fe80"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0fe80(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_116a8722);
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
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOffLanUpdateTestPermissionsSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCOffLanUpdateTestPermissionsSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCOffLanUpdateTestPermissionsSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCOffLanUpdateTestPermissionsSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b0ffe0; body size 198 bytes.
#line 1 "ENTRY_10b0ffe0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0ffe0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a8777);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xec));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOffLanUpdateTestProductSelectionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCOffLanUpdateTestProductSelectionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCOffLanUpdateTestProductSelectionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCOffLanUpdateTestProductSelectionPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b100e0; body size 184 bytes.
#line 1 "ENTRY_10b100e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b100e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a87c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOffLanUpdateTestSNSApConnectPage);
    puVar1[4] = (uint)&ghidra_vftable_SCOffLanUpdateTestSNSApConnectPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCOffLanUpdateTestSNSApConnectPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCOffLanUpdateTestSNSApConnectPage;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((int)puVar1 + 0xe2) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b101d0; body size 168 bytes.
#line 1 "ENTRY_10b101d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b101d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a8817);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOffLanUpdateTestSonosApButtonPressConfirmPage);
    puVar1[4] = (uint)&ghidra_vftable_SCOffLanUpdateTestSonosApButtonPressConfirmPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCOffLanUpdateTestSonosApButtonPressConfirmPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCOffLanUpdateTestSonosApButtonPressConfirmPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b102b0; body size 168 bytes.
#line 1 "ENTRY_10b102b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b102b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a8867);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOffLanUpdateTestSonosApButtonPressPage);
    puVar1[4] = (uint)&ghidra_vftable_SCOffLanUpdateTestSonosApButtonPressPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCOffLanUpdateTestSonosApButtonPressPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCOffLanUpdateTestSonosApButtonPressPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b10390; body size 204 bytes.
#line 1 "ENTRY_10b10390"

undefined4 * __thiscall Recovered_Bulk::FUN_10b10390(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a88b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xec));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOffLanUpdateTestSonosApConnectPage);
    puVar1[4] = (uint)&ghidra_vftable_SCOffLanUpdateTestSonosApConnectPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCOffLanUpdateTestSonosApConnectPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCOffLanUpdateTestSonosApConnectPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    *(undefined1 *)((int)puVar1 + 0xea) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b10490; body size 168 bytes.
#line 1 "ENTRY_10b10490"

undefined4 * __thiscall Recovered_Bulk::FUN_10b10490(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a8907);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOffLanUpdateTestSonosApWaitingPage);
    puVar1[4] = (uint)&ghidra_vftable_SCOffLanUpdateTestSonosApWaitingPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCOffLanUpdateTestSonosApWaitingPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCOffLanUpdateTestSonosApWaitingPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b10570; body size 154 bytes.
#line 1 "ENTRY_10b10570"

undefined4 __thiscall Recovered_Bulk::FUN_10b10570(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a8970);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  pvVar1 = (void *)(operator_new(0x150));
  local_8 = (undefined4)(0);
  if (pvVar1 != (void *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_10b0c670(uVar2));
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


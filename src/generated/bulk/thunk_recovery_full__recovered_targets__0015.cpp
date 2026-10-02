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
extern int _CxxThrowException(...);
extern int _Xlength_error(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern int int_release(...);
extern int memmove(...);
extern int op_lt(...);
extern int operator_new(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_102bce30(...);
extern int thunk_FUN_103316a0(...);
extern int thunk_FUN_10352990(...);
extern int thunk_FUN_1036e270(...);
extern int thunk_FUN_103cf4f0(...);
extern int thunk_FUN_10405e20(...);
extern int thunk_FUN_10475400(...);
extern int thunk_FUN_1064d7a0(...);
extern int thunk_FUN_106da030(...);
extern int thunk_FUN_106dbf00(...);
extern int thunk_FUN_106dd300(...);
extern int thunk_FUN_10a1e530(...);
extern int thunk_FUN_10a1f920(...);
extern int thunk_FUN_10a21a10(...);
extern int thunk_FUN_10a4cc20(...);
extern int thunk_FUN_10a4d3b0(...);
extern int thunk_FUN_10a4d450(...);
extern int thunk_FUN_10a4edc0(...);
extern int thunk_FUN_10a54480(...);
extern int thunk_FUN_10a54750(...);
extern int thunk_FUN_10a547c0(...);
extern int thunk_FUN_10a54830(...);
extern int thunk_FUN_10a76ed0(...);
extern int thunk_FUN_10bcef80(...);
extern int thunk_FUN_10bd9ba0(...);
extern int thunk_FUN_10be0520(...);
extern int thunk_FUN_10eb4020(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
extern int thunk_FUN_10eb4cc0(...);
extern int thunk_FUN_10eb4d80(...);
extern int thunk_FUN_10eb4e80(...);
extern int thunk_FUN_10eb64f0(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ebc1e0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_11262400(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_11d330dc;
extern int DAT_12119c10;
extern int DAT_12126b84;
extern int DAT_121a4098;
extern int DAT_121a409c;
extern int DAT_121a40a0;
extern int DAT_121a40a4;
extern int DAT_121a40a8;
extern int DAT_121a40ac;
extern int DAT_121a40f4;
extern int DAT_121a40f8;
extern int DAT_121a40fc;
extern int DAT_121a4100;
extern int DAT_121a4104;
extern int DAT_121a4108;
extern int DAT_121a410c;
extern int DAT_121a4110;
extern int DAT_121a4114;
extern int DAT_121a4164;
extern int DAT_121a4168;
extern int DAT_121a416c;
extern int DAT_121a4170;
extern int DAT_121a4174;
extern int DAT_121a41c0;
extern int DAT_121a41c4;
extern int DAT_121a41c8;
extern int DAT_121a41cc;
extern int DAT_121a41d0;
extern int DAT_121a41d4;
extern int DAT_121a41d8;
extern int DAT_121a41dc;
extern int DAT_121a41e0;
extern int DAT_121a41e4;
extern int DAT_121a41e8;
extern int DAT_121a41ec;
extern int DAT_121a4238;
extern int DAT_121a423c;
extern int DAT_121a4240;
extern int DAT_121a4244;
extern int DAT_121a4290;
extern int DAT_121a4294;
extern int DAT_121a4298;
extern int DAT_121a429c;
extern int DAT_121a42e4;
extern int DAT_121a42e8;
extern int DAT_121a42ec;
extern int DAT_121a42f0;
extern int DAT_121a42f4;
extern int DAT_121a42f8;
extern int DAT_121a4344;
extern int DAT_121a4348;
extern int DAT_121a434c;
extern int DAT_121a4350;
extern int DAT_121a4354;
extern int DAT_121a4358;
extern int DAT_121a435c;
extern int DAT_121a4360;
extern int DAT_121a4364;
extern int DAT_121a4368;
extern int DAT_121a436c;
extern int DAT_121a4370;
extern int DAT_121a4374;
extern int DAT_121a4378;
extern int DAT_121a43c8;
extern int DAT_121a43cc;
extern int DAT_121a43d0;
extern int DAT_121a4414;
extern int DAT_121a4418;
extern int DAT_121a441c;
extern int DAT_121a4468;
extern int DAT_121a446c;
extern int DAT_121a4470;
extern int DAT_121a44b4;
extern int DAT_121a44b8;
extern int DAT_121a44bc;
extern int DAT_121a44c0;
extern int DAT_121a44c4;
extern int DAT_121a44c8;
extern int DAT_121a44cc;
extern int DAT_121a44d0;
extern int DAT_121a44d4;
extern int DAT_121a44d8;
extern int DAT_121a44dc;
extern int DAT_121a44e0;
extern int DAT_121a44e4;
extern int DAT_121a44e8;
extern int DAT_121a453c;
extern int DAT_121a4540;
extern int DAT_121a4544;
extern int DAT_121a4548;
extern int DAT_121a454c;
extern int DAT_121a4550;
extern int DAT_121a4554;
extern int DAT_121a4558;
extern int DAT_121a455c;
extern int DAT_121a4560;
extern int DAT_121a4564;
extern int DAT_121a4568;
extern int DAT_121a456c;
extern int DAT_121a45b8;
extern int DAT_121a45bc;
extern int DAT_121a45c0;
extern int DAT_121a45c4;
extern int DAT_121a45dc;
extern int DAT_121a45e0;
extern int DAT_121a45e4;
extern int DAT_121a45e8;
extern int DAT_121a4664;
extern int DAT_121a4668;
extern int DAT_121a466c;
extern int DAT_121a4670;
extern int DAT_121a4688;
extern int DAT_121a468c;
extern int DAT_121a4690;
extern int DAT_121a46d4;
extern int DAT_121a46d8;
extern int DAT_121a46dc;
extern int DAT_121a46e0;
extern int DAT_121a46f8;
extern int DAT_121a46fc;
extern int DAT_121a4700;
extern int DAT_121a4704;
extern int DAT_121a4708;
extern int DAT_121a4754;
extern int DAT_121a4758;
extern int DAT_121a475c;
extern int DAT_121a4760;
extern int DAT_121a4764;
extern int DAT_121a4768;
extern int DAT_121a476c;
extern int DAT_121a4770;
extern int DAT_121a47c0;
extern int DAT_121a47c4;
extern int DAT_121a47c8;
extern int DAT_121a47cc;
extern int DAT_121a47d0;
extern int DAT_121a47d4;
extern int DAT_121a47d8;
extern int DAT_121a4824;
extern int DAT_121a4828;
extern int DAT_121a482c;
extern int DAT_121a4830;
extern int DAT_121a4834;
extern int DAT_121a4838;
extern int DAT_121a483c;
extern int DAT_121a4840;
extern int DAT_121a4844;
extern int DAT_121a4848;
extern int DAT_121a484c;
extern int DAT_121a4850;
extern int DAT_121a4854;
extern int DAT_121a4858;
extern int DAT_121a485c;
extern int DAT_121a4860;
extern int DAT_121a4864;
extern int DAT_121a48b4;
extern int DAT_121a48b8;
extern int DAT_121a48cc;
extern int DAT_121a48d0;
extern int DAT_121a48d4;
extern int DAT_121a48f4;
extern int DAT_121a490c;
extern int DAT_121a4910;
extern int DAT_121a4914;
extern int DAT_121a4918;
extern int DAT_121a491c;
extern int DAT_121a4920;
extern int DAT_121a4924;
extern int DAT_121a4928;
extern int DAT_121a492c;
extern int DAT_121a4930;
extern int DAT_121a4934;
extern int DAT_121a4938;
extern int DAT_121a493c;
extern int DAT_121a4940;
extern int DAT_121a4944;
extern int DAT_121a4948;
extern int DAT_121a494c;
extern int DAT_121a4950;
extern int DAT_121a4954;
extern int DAT_121a4958;
extern int DAT_121a495c;
extern int DAT_121a4960;
extern int DAT_121a4964;
extern int DAT_121a4968;
extern int DAT_121a496c;
extern int DAT_121a4970;
extern int DAT_121a4974;
extern int DAT_121a4978;
extern int DAT_121a497c;
extern int DAT_121a4980;
extern int DAT_121a4984;
extern int DAT_121a4988;
extern int DAT_121a498c;
extern int DAT_121a4990;
extern int DAT_121a4994;
extern int DAT_121a4998;
extern int DAT_121a499c;
extern int Ext_RControlAIOOpCB_vftable;
extern int Ext_RControlAIOOpImpl_vftable;
extern int Ext_RControlAIOOpRefBase_vftable;
extern int Ext_RControlAIOOpRef_vftable;
extern int Ext_RDateTime_vftable;
extern int Ext_RUpnpAsyncIOOperation_vftable;
extern int Ext_RUpnpHTCCommitLearnedIRCodesAIOOp_vftable;
extern int Ext_RUpnpHTCIdentifyIRRemoteAIOOp_vftable;
extern int Ext_RUpnpHTCIsRemoteConfiguredAIOOp_vftable;
extern int Ext_RUpnpHTCLearnIRCodeAIOOp_vftable;
extern int Ext_RZPUpdateProgressCB_vftable;
extern int Ext_SCAccessibilityTestButtonDefaultPage_vftable;
extern int Ext_SCAccessibilityTestButtonWithTermationVOTextPage_vftable;
extern int Ext_SCAccessibilityTestButtonWithVOTextOverridePage_vftable;
extern int Ext_SCAccessibilityTestFlareDefaultPage_vftable;
extern int Ext_SCAccessibilityTestFlareWithVODisabledPage_vftable;
extern int Ext_SCAccessibilityTestFlareWithVOTextOverridePage_vftable;
extern int Ext_SCAccessibilityTestImageDefaultPage_vftable;
extern int Ext_SCAccessibilityTestImageWithVOTextPage_vftable;
extern int Ext_SCAccessibilityTestSelectionPage_vftable;
extern int Ext_SCAccessibilityTestTextDefaultPage_vftable;
extern int Ext_SCAccessibilityTestTextWithVODisabledPage_vftable;
extern int Ext_SCAccessibilityTestTextWithVOTextOverridePage_vftable;
extern int Ext_SCAccessibilityTestWizard_vftable;
extern int Ext_SCAccountSecureTransferBeginSystemTransferErrorPage_vftable;
extern int Ext_SCAccountSecureTransferBeginSystemTransferPage_vftable;
extern int Ext_SCAccountSecureTransferButtonPressAuthPage_vftable;
extern int Ext_SCAccountSecureTransferCompletePage_vftable;
extern int Ext_SCAccountSecureTransferIncompletePage_vftable;
extern int Ext_SCAccountSecureTransferIntroPage_vftable;
extern int Ext_SCAccountSecureTransferNetworkErrorPage_vftable;
extern int Ext_SCAccountSecureTransferNewAccountReadyPage_vftable;
extern int Ext_SCAccountSecureTransferPrepareSystemPage_vftable;
extern int Ext_SCAccountSecureTransferProductSelectionPage_vftable;
extern int Ext_SCAnimationErrorPage_vftable;
extern int Ext_SCAnimationIntroPage_vftable;
extern int Ext_SCAnimationSuccessPage_vftable;
extern int Ext_SCAnimationWizard_vftable;
extern int Ext_SCArray_vftable;
extern int Ext_SCAutoApConnectTestConnectPage_vftable;
extern int Ext_SCAutoApConnectTestIntroPage_vftable;
extern int Ext_SCAutoApConnectTestProductSelectionPage_vftable;
extern int Ext_SCBasicAPage_vftable;
extern int Ext_SCBasicBPage_vftable;
extern int Ext_SCBasicCPage_vftable;
extern int Ext_SCChirpTestErrorPage_vftable;
extern int Ext_SCChirpTestWizard_vftable;
extern int Ext_SCCopyTestIntroPage_vftable;
extern int Ext_SCCopyTestRawStringPage_vftable;
extern int Ext_SCCopyTestResourceStringPage_vftable;
extern int Ext_SCCopyTestWizard_vftable;
extern int Ext_SCDiscoveryAllPage_vftable;
extern int Ext_SCDiscoveryApFailPage_vftable;
extern int Ext_SCDiscoveryApFoundPage_vftable;
extern int Ext_SCDiscoveryApScanPage_vftable;
extern int Ext_SCDiscoveryBTOnlyPage_vftable;
extern int Ext_SCDiscoveryHistoryCollectionPage_vftable;
extern int Ext_SCDiscoveryHistoryDeviceListPage_vftable;
extern int Ext_SCDiscoveryHistoryDeviceSummaryPage_vftable;
extern int Ext_SCDiscoveryHistoryHouseholdListPage_vftable;
extern int Ext_SCDiscoveryHistoryWizard_vftable;
extern int Ext_SCDiscoverySplashPage_vftable;
extern int Ext_SCDiscoveryWizard_vftable;
extern int Ext_SCDtlsTestEchoConnectingPage_vftable;
extern int Ext_SCDtlsTestEchoFailurePage_vftable;
extern int Ext_SCDtlsTestEchoIntroPage_vftable;
extern int Ext_SCDtlsTestEchoPlayerChooserPage_vftable;
extern int Ext_SCDtlsTestEchoProtocolChooserPage_vftable;
extern int Ext_SCDtlsTestEchoSuccessPage_vftable;
extern int Ext_SCDtlsTestWizard_vftable;
extern int Ext_SCFlareDemoAdvancedProgressPage_vftable;
extern int Ext_SCFlareDemoAdvancedProgressSetupPage_vftable;
extern int Ext_SCFlareDemoFirstPage_vftable;
extern int Ext_SCFlareDemoImageCheckmarkPage_vftable;
extern int Ext_SCFlareDemoImageProgressPage_vftable;
extern int Ext_SCFlareDemoImageThinkerPage_vftable;
extern int Ext_SCFlareDemoImageWiFiPage_vftable;
extern int Ext_SCFlareDemoSecondPage_vftable;
extern int Ext_SCFlareDemoSelectionPage_vftable;
extern int Ext_SCFlareDemoSimpleProgressPage_vftable;
extern int Ext_SCFlareDemoSpinnerPage_vftable;
extern int Ext_SCFlareDemoThirdPage_vftable;
extern int Ext_SCFlareDemoVideoCheckmarkPage_vftable;
extern int Ext_SCFlareDemoVideoProgressPage_vftable;
extern int Ext_SCFlareDemoVideoThinkerPage_vftable;
extern int Ext_SCFlareDemoVideoWiFiPage_vftable;
extern int Ext_SCFlareDemoWizard_vftable;
extern int Ext_SCFlutterTestErrorHandlingPage_vftable;
extern int Ext_SCFlutterTestWizard_vftable;
extern int Ext_SCGhostBooPage_vftable;
extern int Ext_SCGhostSneakyPage_vftable;
extern int Ext_SCHapticWizardType_vftable;
extern int Ext_SCHapticWizard_vftable;
extern int Ext_SCIObjImpl_vftable;
extern int Ext_SCIObj_vftable;
extern int Ext_SCIOpCBDelegate_vftable;
extern int Ext_SCIOpHTControlCommitLearnedIRCodes_vftable;
extern int Ext_SCIOpHTControlIdentifyIRRemote_vftable;
extern int Ext_SCIOpHTControlIsRemoteConfigured_vftable;
extern int Ext_SCIOpHTControlLearnIRCode_vftable;
extern int Ext_SCMockActionableListPage_vftable;
extern int Ext_SCMockButtonFirstPage_vftable;
extern int Ext_SCMockButtonFourthPage_vftable;
extern int Ext_SCMockButtonSecondPage_vftable;
extern int Ext_SCMockButtonSecondaryButtonFirstPage_vftable;
extern int Ext_SCMockButtonSecondaryButtonSecondPage_vftable;
extern int Ext_SCMockButtonThirdPage_vftable;
extern int Ext_SCMockCaptionImageCarouselBarDebugPage_vftable;
extern int Ext_SCMockCaptionImageCarouselDebugPage_vftable;
extern int Ext_SCMockCaptionImageDebugPage_vftable;
extern int Ext_SCMockCheckboxLongItemPage_vftable;
extern int Ext_SCMockCheckboxShortItemPage_vftable;
extern int Ext_SCMockDrumPickerPage_vftable;
extern int Ext_SCMockDrumPickerWithIconsAndSubtextPage_vftable;
extern int Ext_SCMockDrumPickerWithIconsPage_vftable;
extern int Ext_SCMockDrumPickerWithSubtextPage_vftable;
extern int Ext_SCMockFieldAPage_vftable;
extern int Ext_SCMockFieldBPage_vftable;
extern int Ext_SCMockListPage_vftable;
extern int Ext_SCMockListWithIconsOnLeftPage_vftable;
extern int Ext_SCMockListWithIndicatorsPage_vftable;
extern int Ext_SCMockMarkdownFirstPage_vftable;
extern int Ext_SCMockMarkdownInputPage_vftable;
extern int Ext_SCMockMarkdownOutput2Page_vftable;
extern int Ext_SCMockMarkdownOutputPage_vftable;
extern int Ext_SCMockMarkdownSecondPage_vftable;
extern int Ext_SCMockMarkdownThirdPage_vftable;
extern int Ext_SCMockMultilinePickerPage_vftable;
extern int Ext_SCMockRichSelectorPickerPage_vftable;
extern int Ext_SCMockScrollableActionableListPage_vftable;
extern int Ext_SCMockScrollableListWithIconsOnLeftInCarouselPage_vftable;
extern int Ext_SCMockScrollableListWithIconsOnLeftPage_vftable;
extern int Ext_SCMockSelectProductDebugPage_vftable;
extern int Ext_SCMockSelectionPage_vftable;
extern int Ext_SCMockSelectorPickerPage_vftable;
extern int Ext_SCMockSelectorPickerWithDefaultPage_vftable;
extern int Ext_SCMockUpdateDebugPage_vftable;
extern int Ext_SCNewWizPageFor_vftable;
extern int Ext_SCNewWizPage_vftable;
extern int Ext_SCNewWizStateTypeFor_vftable;
extern int Ext_SCNewWizStateType_vftable;
extern int Ext_SCNewWizType_vftable;
extern int Ext_SCOpHTControlCommitLearnedIRCodes_vftable;
extern int Ext_SCOpHTControlIdentifyIRRemote_vftable;
extern int Ext_SCOpHTControlIsRemoteConfigured_vftable;
extern int Ext_SCOpHTControlLearnIRCode_vftable;
extern int Ext_SCOpImpl_vftable;
extern int Ext_SCSonosVoiceTutorialIntroPage_vftable;
extern int Ext_SCSonosVoiceTutorialOutroPage_vftable;
extern int Ext_SCSonosVoiceTutorialResponsePage_vftable;
extern int Ext_SCSonosVoiceTutorialTimeoutPage_vftable;
extern int Ext_SCSubwizStateFor_vftable;
extern int Ext_SCSubwizState_vftable;
extern int Ext_SCSystemConfigFinishHouseholdConfigPage_vftable;
extern int Ext_SCSystemConfigFinishProductConfigPage_vftable;
extern int Ext_SCSystemConfigOutroFailurePage_vftable;
extern int Ext_SCSystemConfigOutroPage_vftable;
extern int Ext_SCSystemConfigTempWireInstructionsPage_vftable;
extern int Ext_SCSystemIdIntroPage_vftable;
extern int Ext_SCSystemIdSystemSearchFailurePage_vftable;
extern int Ext_SCSystemIdSystemSearchPage_vftable;
extern int Ext_SCTVRemoteControlGetRemotePage_vftable;
extern int Ext_SCTVRemoteControlIntroPage_vftable;
extern int Ext_SCTVRemoteControlPressVolumePage_vftable;
extern int Ext_SCTVRemoteControlSettingsIntroPage_vftable;
extern int Ext_SCTVRemoteControlSetupErrorPage_vftable;
extern int Ext_SCTVRemoteControlSetupSuccessCheckmarkPage_vftable;
extern int Ext_SCTVRemoteControlSetupSuccessPage_vftable;
extern int Ext_SCTVRemoteControlSignalDetectedPage_vftable;
extern int Ext_SCTVRemoteControlSignalNotDetectedPage_vftable;
extern int Ext_SCTVRemoteControlSignalNotRecognizedPage_vftable;
extern int Ext_SCTVSetupOutroPage_vftable;
extern int Ext_SCTVSetupWizard_vftable;
extern int Ext_SCUpdateCheckErrorPage_vftable;
extern int Ext_SCUpdateCheckIntroPage_vftable;
extern int Ext_SCUpdateCheckRetryPage_vftable;
extern int Ext_SCUpdateSystemUpdateAvailablePage_vftable;
extern int Ext_SCUpdateSystemUpdateCheckErrorPage_vftable;
extern int Ext_SCUpdateSystemUpdateCheckPage_vftable;
extern int Ext_SCUpdateSystemUpdateErrorPage_vftable;
extern int Ext_SCUpdateSystemUpdatePage_vftable;
extern int Ext_SCVoiceServiceConcurrencyBondingConcurrencyErrorPage_vftable;
extern int Ext_SCVoiceServiceConcurrencyBondingConcurrencyFatalErrorPage_vftable;
extern int Ext_SCVoiceServiceConcurrencyBondingConfirmationPage_vftable;
extern int Ext_SCVoiceServiceConcurrencyConfirmationPage_vftable;
extern int Ext_SCVoiceServiceConcurrencyFatalMissingErrorPage_vftable;
extern int Ext_SCVoiceServiceConcurrencyFatalRemoveErrorPage_vftable;
extern int Ext_SCVoiceServiceConcurrencyHTPrimaryGAPage_vftable;
extern int Ext_SCVoiceServiceConcurrencyHTSurroundsGAPage_vftable;
extern int Ext_SCVoiceServiceConcurrencyMissingProductPage_vftable;
extern int Ext_SCVoiceServiceConcurrencyRemoveErrorPage_vftable;
extern int Ext_SCVoiceServiceConcurrencyStereoGAPage_vftable;
extern int Ext_SCVoiceServiceLocaleSelectionPage_vftable;
extern int Ext_SCVoiceServiceLocaleUnsupportedPage_vftable;
extern int Ext_SCWacConnectIntroPage_vftable;
extern int Ext_SCWacConnectScanningPage_vftable;
extern int Ext_SCWiredConnectFindProductPage_vftable;
extern int Ext_SCWiredConnectIntroPage_vftable;
extern int g_lSCObjCount;
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_115e0ff0[];
extern undefined1 LAB_115e1020[];
extern undefined1 LAB_116752e0[];
extern undefined1 LAB_11675310[];
extern undefined1 LAB_11675340[];
extern undefined1 LAB_11675370[];
extern int *stack0xfffffffc;
extern void *ExceptionList;
typedef void *E9;
typedef void *WARNING;
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct HTControl { char _pad; HTControl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct IdentifyIRRemote { char _pad; IdentifyIRRemote(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct LearnIRCode { char _pad; LearnIRCode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpDevicePost { char _pad; SCIOpDevicePost(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpHTControlCommitLearnedIRCodes { char _pad; SCIOpHTControlCommitLearnedIRCodes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpHTControlIdentifyIRRemote { char _pad; SCIOpHTControlIdentifyIRRemote(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpHTControlIsRemoteConfigured { char _pad; SCIOpHTControlIsRemoteConfigured(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpHTControlLearnIRCode { char _pad; SCIOpHTControlLearnIRCode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Stub_SCStr { Stub_SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int SCStr(...); int int_release(...); int op_lt(...); };
struct Stub_std { Stub_std(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int _Xlength_error(...); };
using namespace std;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109d8e50(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109d8fc0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109d9110(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109d9470(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109d95c0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9d10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9d40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9d50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9d70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9d80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9ec0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9ef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9f20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9f40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9f70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9f90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9fe0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109da010(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109da030(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109da060(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109da210(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_109da220(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109da230(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109dbde0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_109de720(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_109de740(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e0330(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e0340(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e0350(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e0360(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e0370(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e0380(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109e0390(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109e05b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109e05c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109e05d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_109e05e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109e14d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109e14e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e14f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e1520(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e15a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e15b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e15c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e15d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e15e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e15f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e1600(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e1610(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109e1630(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109e2360(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109e24b0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109e2640(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109e2790(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109e2af0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e36a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e36d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e36e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e36f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3700(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3710(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3720(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3730(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3740(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e37b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e37e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3810(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3840(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3870(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3890(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e38c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e39d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e39f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3a20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3a40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3a70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3a90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3ac0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3ae0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3b10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3b30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3b60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_109e9440(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_109ea2a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109ec390(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109ec3a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109ec3b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109ec3c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109ec3d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109ec3e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109ec3f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109ec400(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109ec410(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109ec420(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109ec430(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109ec440(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109ec460(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109ec470(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109ec480(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109ec490(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109ec4a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109ec4b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109edc10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109edc20(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_109edd10(SCStr *param_1,undefined4 param_2,SCStr *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109edd40(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_109edd60(SCStr *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_109eded0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109edf00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109edf10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109edf20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109edf30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109edf40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109edf60(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109ee480(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109ee490(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109ee6f0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109ee840(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109ee990(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef030(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef060(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef070(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef090(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef0a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef0e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef110(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef130(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef160(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef1b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef270(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_109efc80(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_109f0590(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f2e60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f2e70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f2e80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f2e90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f2ea0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_109f2eb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_109f2ec0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f2ed0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f2ef0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f2f00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f2f10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f2f20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3bd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3be0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3bf0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3c00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3c10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3c20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3c30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3c40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3c50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3c60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3c70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_109f3c90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_109f3ca0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_109f3cb0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_109f3cc0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f3e80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f3f40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f3f70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f3fa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f3fd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109f4000(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f5120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f5140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f5160(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f5180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall
FUN_109f5240(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall
FUN_109f5390(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f5430(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f5440(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f5450(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f5460(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109f5a30(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109f5b80(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109f6110(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109f62a0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109f6410(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109f6560(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109f66b0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109f6800(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109f6950(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_109f6aa0(undefined4 *param_1,undefined4 param_2);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_109f7710(undefined4 *param_1);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_109f7720(undefined4 *param_1);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_109f7740(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7800(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7810(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7820(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7830(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7840(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7850(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7870(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7880(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7890(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f81a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f81d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8200(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8230(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8240(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8250(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8270(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8290(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f82b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f82d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f82f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8320(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8340(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8370(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f84f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8600(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f86d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f86f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8720(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8740(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8790(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f87c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f87e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8810(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8830(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8860(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8880(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f8c20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f8c30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f8c40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f8c50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f8c60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a00510(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a00520(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10a008e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10a00930(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a04570(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a04580(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a04590(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a045a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a045b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a045c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a045d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a045e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a045f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a04600(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a04610(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a04620(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a04640(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a04650(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10a05c40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10a05c50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10a05c60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10a05c70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a080d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a080e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a080f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a08100(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a08790(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a087c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a087f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a08820(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a08850(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a08880(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a088b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a088e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a08c40(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a08c50(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a08c60(int param_1,undefined1 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10a08cb0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a08cd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a08ce0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a08cf0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a08d10(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a09670(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a097d0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09b70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09ba0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09bb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09bc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09bd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09c00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09c30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09c60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09c80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09cb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09d80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a0c3e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a0c3f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a0c400(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a0c410(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a0c420(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a0c430(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10a0c440(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a0c460(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a0c470(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a0c480(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a0c490(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a0cce0(int param_1,undefined1 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a0ccf0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a0cd00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a0cd10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a0cd30(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a0d050(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a0d1b0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a0d310(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a0d8d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a0d900(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a0d910(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a0d920(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a0d9e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a0dab0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a0db80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a11d60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a11d70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a11d80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a11d90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a11db0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a11dc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a11dd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10a11df0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a12630(int param_1,undefined1 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a12640(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a126c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a126e0(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a12700(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a12800(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a12890(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a128c0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a128d0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a128e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a12aa0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10a12b50(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12b70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12b80(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12d00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12d10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12d20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12d30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12d40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12e30(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12e50(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12e70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12e80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12e90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12ea0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12eb0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12ec0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12ed0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12ee0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a12f00(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a13400(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a13460(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a13470(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a13500(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a13510(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a13530(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a13540(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a13590(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a13750(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a138a0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a139f0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a13b50(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a13ca0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14430(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14460(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14470(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14480(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14490(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a144a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14660(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14690(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a146b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a146e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a147b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a147d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14800(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14820(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14850(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a14980(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10a14990(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10a14b20(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10a14c60(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a14c70(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a14c80(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a14c90(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a15490(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a154f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a15510(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a15520(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a15530(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a15540(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a15550(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a15560(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a15570(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a15580(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a15820(int *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a15890(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a158a0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10a15910(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a16170(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10a161c0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a16210(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10a1adc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10a1add0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1c860(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1c870(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1c880(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1c890(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1c8a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1c8b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a1c8d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a1c8e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a1c8f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a1c900(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1d040(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1d050(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e410(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a1e420(int param_1,undefined1 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a1e430(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a1e440(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a1e450(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a1e460(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a1e470(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10a1e480(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a1e490(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a1e4b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a1e4d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a1e4f0(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a1e510(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e680(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a1e690(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a1e6a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10a1e760(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10a1e830(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e860(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e870(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a1e880(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a1e8a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a1e8b0(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e8e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e8f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e900(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e910(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e920(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e930(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e940(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e950(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e960(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e970(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e980(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e990(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e9a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e9b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e9c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e9d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e9f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1ea00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1ea10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a1eac0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a1f740(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a1f760(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a1f780(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a1f900(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a1fa40(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a1fb90(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a1fce0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a1fe40(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a1ff90(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a200e0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a20230(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a20380(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a206f0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a20840(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a20ba0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21d30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21d60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21db0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21e00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21e50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21ea0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21ef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21f40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21f90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a220c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a22110(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a22490(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10a224e0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10a22750(int *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10a22770(int *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a237c0(uint *param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a238a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a238b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a239b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a239c0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a23a00(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a23a40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a23a50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10a23a60(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10a25310(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a33e80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a33e90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a35ea0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10a35f00(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10a3c6b0(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c6d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c6e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c6f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c700(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c710(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c720(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c730(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c740(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c750(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c760(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c770(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c780(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c790(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c7a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a3d040(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a3d050(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10a3d060(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a3f3b0(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a40720(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a40730(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a40750(int param_1,undefined1 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a40760(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a40770(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a40820(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a40d90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a40da0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a40db0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a40dd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a40de0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a40e00(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a410b0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a41220(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a416b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a416e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a416f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a41750(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a41770(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a417a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10a41ca0(int *param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a41d70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall
FUN_10a41e50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall
FUN_10a41e70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a41e90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a41ea0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a41eb0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a43be0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a43bf0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a43c00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a43c20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a43c30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a445e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a445f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a44610(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a44840(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a44990(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a44e50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a44e80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a44e90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a44ec0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a44ef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a44f10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a44f40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a487c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a487d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a487e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a48800(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a48810(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a48d50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a48d60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a48d80(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a48fb0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a49100(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a495c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a495f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a49600(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a49610(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a49640(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a49660(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a49690(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4c370(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4c380(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4c390(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a4c3b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a4c3c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4c770(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4c790(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4c7b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4c7d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4c7f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4c810(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte FUN_10a4c830(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a4c850(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a4c860(int *param_1,void *param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10a4c960(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a4c990(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a4cba0(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d190(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d1a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10a4d1b0(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10a4d230(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a4d2b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a4d2c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d2d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10a4d2e0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall
FUN_10a4d310(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall
FUN_10a4d330(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d350(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d360(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d370(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10a4d380(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10a4d4f0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d660(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d670(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d680(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d690(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a4d6a0(int *param_1,void *param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a4d7a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10a4d9b0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a4d9c0(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4da90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4daa0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dab0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dac0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dad0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dae0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4daf0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dba0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dbb0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dbc0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dbd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dbe0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dbf0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dc10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dc20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dc30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a4dc40(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4e8c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4e910(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4e960(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a4ecb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a4ecd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a4ecf0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a4ed00(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a4ed10(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a4ed20(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4ed30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4ed50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4ed70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a4ed90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a4eda0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a4edb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4ee40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4ef20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4f000(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a4f440(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a4f590(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a4f750(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a4f900(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a4fa50(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a4fba0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a4fcf0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a4fe40(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a4ff90(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a50120(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a511a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51240(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51380(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a513b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a513e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51410(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51510(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a515b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a517e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51830(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51880(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a518b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a518d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51920(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51ba0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10a51ed0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10a51fa0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10a52070(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10a52120(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10a52280(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10a522a0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10a522c0(int *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10a522d0(int *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a522e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a522f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a52300(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a52310(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a52320(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a52330(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a52340(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10a52350(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10a52360(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a52370(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10a52390(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a523a0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10a523c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a53960(int *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a53990(int *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a539c0(int *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10a539f0(int *param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10a53a30(int *param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10a53a70(int *param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a53c40(int *param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a53d10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a53d20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a53d30(int *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a53e40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53e90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53ea0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53eb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53ec0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53ed0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53ee0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53ef0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53f00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53f10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53f20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53f30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53f40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a53ff0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a54000(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a54010(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a54020(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a54030(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a54040(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10a541f0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a54360(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall
FUN_10a54390(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall
FUN_10a543b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10a543d0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall
FUN_10a54400(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall
FUN_10a54420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a54440(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a54450(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a54460(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a54470(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a548a0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a548b0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a54980(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a54990(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a549a0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10a55fd0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a560e0(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a560f0(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10a5c890(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10a5c8b0(int param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10a5d770(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a615d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a615e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a615f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61600(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61610(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61620(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61630(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61640(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61650(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61660(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61670(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61680(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61690(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a616a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a616b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a616c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a616d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a616e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a616f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a61700(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10a61710(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a618c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a618d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a618e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a618f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a61900(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a61910(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a61920(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10a61940(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10a61960(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a61980(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10a61a70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61a80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61a90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61aa0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61ab0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61ac0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61ad0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a64290(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a642a0(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a64370(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a643a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a644f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64500(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64510(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a64890(int param_1,undefined1 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a648a0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a648b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a648c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a648d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a648e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a648f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64900(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64910(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64920(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64930(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64940(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64950(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64960(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64970(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a64990(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a65520(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a65670(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a657c0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a65910(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a65a60(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a65bb0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a65d00(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a65e50(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a65fa0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a660f0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a66240(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a66390(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a664e0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67050(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a670b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a670e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67100(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67110(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67190(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a671e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67230(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67280(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a672d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67320(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67350(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67370(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a673c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a673f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67410(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67440(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67460(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a674b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a70ff0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71000(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71010(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71020(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71030(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71040(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71050(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71060(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71070(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71080(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71090(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a710a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a710b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a711c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a711d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a711e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a71200(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a71520(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a71670(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a717c0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a71910(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71cb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71ce0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71cf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71d00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71d10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71d40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71d60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71d90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71db0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71de0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a741a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a741b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a741c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a741d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a742e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a74300(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a74470(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10a74490(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a74500(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a74c70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a74c80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a74c90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a74ec0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a75240(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a75250(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a75260(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a75270(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a75280(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a75290(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a752a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a752b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a75410(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a75420(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a75430(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a75480(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a757d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a757f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a75840(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a75860(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a75870(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a75880(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a758a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a758c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a75950(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a75970(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a75af0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a75c40(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a769a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a769d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a769e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a76c90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a76cb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a76ce0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a76d00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10a770b0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10a77110(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10a77170(int *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10a77190(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a771a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a771b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10a777f0(int *param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a77930(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a77940(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a77950(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a77960(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a77970(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a77980(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a77990(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a779f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a77a00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10a77db0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a783b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10a78830(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10a78850(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10a79e80(SCStr *param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10a7a930(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10a7a950(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10a7bfb0(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a7bfd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a7bfe0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a7bff0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a7c000(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10a7c020(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a7c040(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a7c050(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10a7c060(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a7c0b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a7c0c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a7ca90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7cbf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7cc20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a7cea0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a7cec0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a7ced0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a7cef0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a7cf00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a7cf10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a7cf30(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a7d250(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a7d3a0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a7d4f0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7d9e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7da10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7da20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7da30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7da40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7da70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7da90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7dac0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7dae0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7db10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a80340(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a80350(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a80360(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a80370(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a803d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a803e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10a80400(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a80420(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a80650(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a809b0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a80ca0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a80cb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a80cc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a80cf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a80df0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a82f60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a82f70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a82f80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a83b60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a83b70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a83b80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a83ba0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a83ec0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a84010(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a84160(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a842b0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a846e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a84710(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a84720(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a84730(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a84740(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a84770(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a84790(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a847c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a847e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a84810(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a87e40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a87e50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a87e60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a87e70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a88a60(int *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10a88b20(int *param_1,int *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a88bc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a88bd0(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a88c30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a88c40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a88c50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a88c60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a88c70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a88c90(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a890d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a890f0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a89100(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a89120(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a89270(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a893c0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a89510(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a89660(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89b40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89b70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89b80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89b90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89ba0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89bb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89be0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89c00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89c30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89c50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89c80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89ca0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89cd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10a89e30(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10a89eb0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a89ed0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a89ee0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a8a4e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a8a4f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a8a9b0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10a8a9c0(int *param_1,int *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10a90600(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10a90620(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90640(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90650(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90660(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90670(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90680(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a906a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a906b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90d30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90f40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90f50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90f60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90f70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90f80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90f90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90fa0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a90fc0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a916a0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a917f0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a91940(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a91a90(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a91bf0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a91f00(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a92050(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a927d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a927e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a927f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92800(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92810(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92820(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92830(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92840(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92870(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92890(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a928c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a928e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92910(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a929e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92a50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92b20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92b40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92b70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10a92c80(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a99920(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a99930(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a99940(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a99950(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a99960(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a99970(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a99980(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a99990(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a999b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a999c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a9a200(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a9a210(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a9a220(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a9a230(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a9a240(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a9a250(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a9a270(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a9a8a0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a9a9f0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a9ab40(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a9ac90(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a9ae50(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a9afa0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10a9b0f0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b770(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b7a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b7b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b7c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b7d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b7e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b7f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b800(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b830(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b850(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b880(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b8a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b8d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b9b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b9d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9ba00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9ba20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9ba50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10a9bbf0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a9f830(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10a9faf0(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10a9fb10(int param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10a9fdd0(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa1440(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa1450(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa1460(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa1470(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa1480(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa1490(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa14a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10aa18b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10aa18c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10aa2710(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2960(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2970(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2980(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2990(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa29a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa29b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa29c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa29d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa29e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa29f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2a00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2a10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2a20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2a30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2a40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2a50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aa2a70(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aa39c0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aa3b60(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aa3cb0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aa3e00(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aa3f50(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aa40a0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aa41f0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aa4340(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aa4490(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aa45e0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aa4740(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aa4890(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aa49e0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aa4b30(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aa4c80(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aa4dd0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aa4f20(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5e10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5e40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5e50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5e60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5e70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5e80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5e90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5ea0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5eb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5ec0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5ed0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5ee0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5ef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5f00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5f10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5f20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5f30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5f40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5f70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5f90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5fc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5fe0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6010(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6030(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6060(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa60b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa60d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6100(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6150(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa61a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa61c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa61f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6210(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6240(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6290(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa62b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa62e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6300(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6330(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6350(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6380(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa63a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa63d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa63f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6420(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2480(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2490(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab24a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab24b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab24c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab24d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab24e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab24f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2500(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2510(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2520(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2530(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2540(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2550(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2560(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2570(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2580(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2ed0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab2ef0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab3030(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab3180(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab3360(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab3390(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab33a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab33d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab3ef0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab3f00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab3f40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab3f50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab3f70(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab41a0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab42f0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab4780(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab47b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab47c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab47d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab4800(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab4820(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab4850(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab5f50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab5f60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab5f70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10ab5fc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10ab5fd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab6090(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab6190(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6370(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab63a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab63b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab63c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab63d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab63e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab63f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6400(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6410(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6420(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6430(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6440(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6450(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6460(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6470(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6480(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6490(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab64a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab64b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab64c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab64d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab64e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab64f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6500(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6510(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6520(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6530(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6540(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6550(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6560(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6570(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6580(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6590(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab65a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab65b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab65c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab65d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab65e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab6600(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab8900(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab8a50(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab8ba0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab8cf0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab8e40(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab8f90(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab90e0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab9230(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab9380(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab94d0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab9620(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab9770(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab98c0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab9a10(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab9b60(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab9cb0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab9e00(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ab9f50(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aba0a0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aba1f0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aba340(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aba490(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aba5e0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aba730(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aba880(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10aba9d0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10abab20(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10abac70(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10abadc0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10abaf10(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10abb060(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10abb1b0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10abb300(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10abb450(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10abb5a0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10abb6f0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10abb840(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abda90(undefined4 *param_1);
// Reference entry 109d8e50; body size 25 bytes.
#line 1 "ENTRY_109d8e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109d8e50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109d8fc0; body size 64 bytes.
#line 1 "ENTRY_109d8fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109d8fc0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSonosVoiceTutorialIntroPage_vftable);
  param_1[4] = (uint)&Ext_SCSonosVoiceTutorialIntroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSonosVoiceTutorialIntroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSonosVoiceTutorialIntroPage_vftable;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109d9110; body size 57 bytes.
#line 1 "ENTRY_109d9110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109d9110(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSonosVoiceTutorialOutroPage_vftable);
  param_1[4] = (uint)&Ext_SCSonosVoiceTutorialOutroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSonosVoiceTutorialOutroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSonosVoiceTutorialOutroPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109d9470; body size 64 bytes.
#line 1 "ENTRY_109d9470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109d9470(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSonosVoiceTutorialResponsePage_vftable);
  param_1[4] = (uint)&Ext_SCSonosVoiceTutorialResponsePage_vftable;
  param_1[0x23] = (uint)&Ext_SCSonosVoiceTutorialResponsePage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSonosVoiceTutorialResponsePage_vftable;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109d95c0; body size 57 bytes.
#line 1 "ENTRY_109d95c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109d95c0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSonosVoiceTutorialTimeoutPage_vftable);
  param_1[4] = (uint)&Ext_SCSonosVoiceTutorialTimeoutPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSonosVoiceTutorialTimeoutPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSonosVoiceTutorialTimeoutPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109d9d10; body size 38 bytes.
#line 1 "ENTRY_109d9d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9d10(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109d9d40; body size 11 bytes.
#line 1 "ENTRY_109d9d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9d40(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109d9d50; body size 11 bytes.
#line 1 "ENTRY_109d9d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9d50(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109d9d70; body size 11 bytes.
#line 1 "ENTRY_109d9d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9d70(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109d9d80; body size 11 bytes.
#line 1 "ENTRY_109d9d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9d80(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109d9ec0; body size 38 bytes.
#line 1 "ENTRY_109d9ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9ec0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109d9ef0; body size 38 bytes.
#line 1 "ENTRY_109d9ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9ef0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109d9f20; body size 21 bytes.
#line 1 "ENTRY_109d9f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9f20(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a40a0 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109d9f40; body size 38 bytes.
#line 1 "ENTRY_109d9f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9f40(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109d9f70; body size 21 bytes.
#line 1 "ENTRY_109d9f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9f70(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a40ac = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109d9f90; body size 38 bytes.
#line 1 "ENTRY_109d9f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9f90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109d9fe0; body size 38 bytes.
#line 1 "ENTRY_109d9fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9fe0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109da010; body size 21 bytes.
#line 1 "ENTRY_109da010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109da010(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a40a4 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109da030; body size 38 bytes.
#line 1 "ENTRY_109da030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109da030(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109da060; body size 21 bytes.
#line 1 "ENTRY_109da060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109da060(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a40a8 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109da210; body size 3 bytes.
#line 1 "ENTRY_109da210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109da210(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 109da220; body size 7 bytes.
#line 1 "ENTRY_109da220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_109da220(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 109da230; body size 3 bytes.
#line 1 "ENTRY_109da230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109da230(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 109dbde0; body size 9 bytes.
#line 1 "ENTRY_109dbde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109dbde0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 109de720; body size 23 bytes.
#line 1 "ENTRY_109de720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __thiscall FUN_109de720(int param_1,SCStr *param_2)

{
  ((Stub_SCStr *)(param_2))->SCStr((SCStr *)(param_1 + 0x104));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 109de740; body size 23 bytes.
#line 1 "ENTRY_109de740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __thiscall FUN_109de740(int param_1,SCStr *param_2)

{
  ((Stub_SCStr *)(param_2))->SCStr((SCStr *)(param_1 + 0x100));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 109e0330; body size 6 bytes.
#line 1 "ENTRY_109e0330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e0330(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a40a0);
}


// Reference entry 109e0340; body size 6 bytes.
#line 1 "ENTRY_109e0340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e0340(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a40ac);
}


// Reference entry 109e0350; body size 6 bytes.
#line 1 "ENTRY_109e0350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e0350(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a409c);
}


// Reference entry 109e0360; body size 6 bytes.
#line 1 "ENTRY_109e0360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e0360(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a40a4);
}


// Reference entry 109e0370; body size 6 bytes.
#line 1 "ENTRY_109e0370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e0370(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a40a8);
}


// Reference entry 109e0380; body size 6 bytes.
#line 1 "ENTRY_109e0380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e0380(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4098);
}


// Reference entry 109e0390; body size 5 bytes.
#line 1 "ENTRY_109e0390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109e0390(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109e05b0; body size 5 bytes.
#line 1 "ENTRY_109e05b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109e05b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109e05c0; body size 5 bytes.
#line 1 "ENTRY_109e05c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109e05c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109e05d0; body size 5 bytes.
#line 1 "ENTRY_109e05d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109e05d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109e05e0; body size 6 bytes.
#line 1 "ENTRY_109e05e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_109e05e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpDevicePost");
}


// Reference entry 109e14d0; body size 3 bytes.
#line 1 "ENTRY_109e14d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109e14d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 109e14e0; body size 3 bytes.
#line 1 "ENTRY_109e14e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109e14e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 109e14f0; body size 28 bytes.
#line 1 "ENTRY_109e14f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e14f0(undefined4 *param_1)

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


// Reference entry 109e1520; body size 20 bytes.
#line 1 "ENTRY_109e1520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e1520(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 109e15a0; body size 6 bytes.
#line 1 "ENTRY_109e15a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e15a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a40f4);
}


// Reference entry 109e15b0; body size 6 bytes.
#line 1 "ENTRY_109e15b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e15b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4100);
}


// Reference entry 109e15c0; body size 6 bytes.
#line 1 "ENTRY_109e15c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e15c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4104);
}


// Reference entry 109e15d0; body size 6 bytes.
#line 1 "ENTRY_109e15d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e15d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a410c);
}


// Reference entry 109e15e0; body size 6 bytes.
#line 1 "ENTRY_109e15e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e15e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4108);
}


// Reference entry 109e15f0; body size 6 bytes.
#line 1 "ENTRY_109e15f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e15f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a40fc);
}


// Reference entry 109e1600; body size 6 bytes.
#line 1 "ENTRY_109e1600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e1600(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4110);
}


// Reference entry 109e1610; body size 6 bytes.
#line 1 "ENTRY_109e1610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e1610(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a40f8);
}


// Reference entry 109e1630; body size 57 bytes.
#line 1 "ENTRY_109e1630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109e1630(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109e2360; body size 57 bytes.
#line 1 "ENTRY_109e2360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109e2360(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSystemConfigFinishHouseholdConfigPage_vftable);
  param_1[4] = (uint)&Ext_SCSystemConfigFinishHouseholdConfigPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSystemConfigFinishHouseholdConfigPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSystemConfigFinishHouseholdConfigPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109e24b0; body size 104 bytes.
#line 1 "ENTRY_109e24b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109e24b0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSystemConfigFinishProductConfigPage_vftable);
  param_1[4] = (uint)&Ext_SCSystemConfigFinishProductConfigPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSystemConfigFinishProductConfigPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSystemConfigFinishProductConfigPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109e2640; body size 57 bytes.
#line 1 "ENTRY_109e2640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109e2640(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSystemConfigOutroFailurePage_vftable);
  param_1[4] = (uint)&Ext_SCSystemConfigOutroFailurePage_vftable;
  param_1[0x23] = (uint)&Ext_SCSystemConfigOutroFailurePage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSystemConfigOutroFailurePage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109e2790; body size 64 bytes.
#line 1 "ENTRY_109e2790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109e2790(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSystemConfigOutroPage_vftable);
  param_1[4] = (uint)&Ext_SCSystemConfigOutroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSystemConfigOutroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSystemConfigOutroPage_vftable;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109e2af0; body size 57 bytes.
#line 1 "ENTRY_109e2af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109e2af0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSystemConfigTempWireInstructionsPage_vftable);
  param_1[4] = (uint)&Ext_SCSystemConfigTempWireInstructionsPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSystemConfigTempWireInstructionsPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSystemConfigTempWireInstructionsPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109e36a0; body size 38 bytes.
#line 1 "ENTRY_109e36a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e36a0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109e36d0; body size 11 bytes.
#line 1 "ENTRY_109e36d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e36d0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109e36e0; body size 11 bytes.
#line 1 "ENTRY_109e36e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e36e0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109e36f0; body size 11 bytes.
#line 1 "ENTRY_109e36f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e36f0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109e3700; body size 11 bytes.
#line 1 "ENTRY_109e3700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3700(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109e3710; body size 11 bytes.
#line 1 "ENTRY_109e3710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3710(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109e3720; body size 11 bytes.
#line 1 "ENTRY_109e3720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3720(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109e3730; body size 11 bytes.
#line 1 "ENTRY_109e3730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3730(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109e3740; body size 11 bytes.
#line 1 "ENTRY_109e3740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3740(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109e37b0; body size 38 bytes.
#line 1 "ENTRY_109e37b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e37b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109e37e0; body size 38 bytes.
#line 1 "ENTRY_109e37e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e37e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109e3810; body size 38 bytes.
#line 1 "ENTRY_109e3810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3810(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109e3840; body size 38 bytes.
#line 1 "ENTRY_109e3840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3840(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109e3870; body size 21 bytes.
#line 1 "ENTRY_109e3870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3870(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a40f4 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109e3890; body size 38 bytes.
#line 1 "ENTRY_109e3890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3890(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109e38c0; body size 21 bytes.
#line 1 "ENTRY_109e38c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e38c0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4100 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109e39d0; body size 21 bytes.
#line 1 "ENTRY_109e39d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e39d0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4104 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109e39f0; body size 38 bytes.
#line 1 "ENTRY_109e39f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e39f0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109e3a20; body size 21 bytes.
#line 1 "ENTRY_109e3a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3a20(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a410c = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109e3a40; body size 38 bytes.
#line 1 "ENTRY_109e3a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3a40(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109e3a70; body size 21 bytes.
#line 1 "ENTRY_109e3a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3a70(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4108 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109e3a90; body size 38 bytes.
#line 1 "ENTRY_109e3a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3a90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109e3ac0; body size 21 bytes.
#line 1 "ENTRY_109e3ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3ac0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a40fc = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109e3ae0; body size 38 bytes.
#line 1 "ENTRY_109e3ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3ae0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109e3b10; body size 21 bytes.
#line 1 "ENTRY_109e3b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3b10(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4110 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109e3b30; body size 38 bytes.
#line 1 "ENTRY_109e3b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3b30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109e3b60; body size 21 bytes.
#line 1 "ENTRY_109e3b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3b60(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a40f8 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109e9440; body size 23 bytes.
#line 1 "ENTRY_109e9440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __thiscall FUN_109e9440(int param_1,SCStr *param_2)

{
  ((Stub_SCStr *)(param_2))->SCStr((SCStr *)(param_1 + 0x104));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 109ea2a0; body size 7 bytes.
#line 1 "ENTRY_109ea2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_109ea2a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x100));
}


// Reference entry 109ec390; body size 6 bytes.
#line 1 "ENTRY_109ec390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109ec390(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a40f4);
}


// Reference entry 109ec3a0; body size 6 bytes.
#line 1 "ENTRY_109ec3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109ec3a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4100);
}


// Reference entry 109ec3b0; body size 6 bytes.
#line 1 "ENTRY_109ec3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109ec3b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4104);
}


// Reference entry 109ec3c0; body size 6 bytes.
#line 1 "ENTRY_109ec3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109ec3c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a410c);
}


// Reference entry 109ec3d0; body size 6 bytes.
#line 1 "ENTRY_109ec3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109ec3d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4108);
}


// Reference entry 109ec3e0; body size 6 bytes.
#line 1 "ENTRY_109ec3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109ec3e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a40fc);
}


// Reference entry 109ec3f0; body size 6 bytes.
#line 1 "ENTRY_109ec3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109ec3f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4110);
}


// Reference entry 109ec400; body size 6 bytes.
#line 1 "ENTRY_109ec400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109ec400(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a40f8);
}


// Reference entry 109ec410; body size 6 bytes.
#line 1 "ENTRY_109ec410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109ec410(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4114);
}


// Reference entry 109ec420; body size 5 bytes.
#line 1 "ENTRY_109ec420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109ec420(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109ec430; body size 5 bytes.
#line 1 "ENTRY_109ec430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109ec430(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109ec440; body size 5 bytes.
#line 1 "ENTRY_109ec440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109ec440(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109ec460; body size 5 bytes.
#line 1 "ENTRY_109ec460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109ec460(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109ec470; body size 5 bytes.
#line 1 "ENTRY_109ec470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109ec470(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109ec480; body size 5 bytes.
#line 1 "ENTRY_109ec480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109ec480(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109ec490; body size 5 bytes.
#line 1 "ENTRY_109ec490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109ec490(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109ec4a0; body size 5 bytes.
#line 1 "ENTRY_109ec4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109ec4a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109ec4b0; body size 5 bytes.
#line 1 "ENTRY_109ec4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109ec4b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109edc10; body size 3 bytes.
#line 1 "ENTRY_109edc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109edc10(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 109edc20; body size 22 bytes.
#line 1 "ENTRY_109edc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109edc20(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109edd10; body size 31 bytes.
#line 1 "ENTRY_109edd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __thiscall FUN_109edd10(SCStr *param_1,undefined4 param_2,SCStr *param_3)

{
  ((Stub_SCStr *)(param_1))->SCStr(param_3);
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_1);
}


// Reference entry 109edd40; body size 22 bytes.
#line 1 "ENTRY_109edd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109edd40(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109edd60; body size 33 bytes.
#line 1 "ENTRY_109edd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __thiscall FUN_109edd60(SCStr *param_1,undefined4 *param_2)

{
  ((Stub_SCStr *)(param_1))->SCStr((SCStr *)*param_2);
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_1);
}


// Reference entry 109eded0; body size 27 bytes.
#line 1 "ENTRY_109eded0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_109eded0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((Stub_SCStr *)(param_2))->SCStr((SCStr *)*param_4);
  *(undefined4 *)(param_2 + 4) = 0;
  return;
}


// Reference entry 109edf00; body size 5 bytes.
#line 1 "ENTRY_109edf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109edf00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 109edf10; body size 6 bytes.
#line 1 "ENTRY_109edf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109edf10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4170);
}


// Reference entry 109edf20; body size 6 bytes.
#line 1 "ENTRY_109edf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109edf20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4164);
}


// Reference entry 109edf30; body size 6 bytes.
#line 1 "ENTRY_109edf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109edf30(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a416c);
}


// Reference entry 109edf40; body size 6 bytes.
#line 1 "ENTRY_109edf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109edf40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4168);
}


// Reference entry 109edf60; body size 57 bytes.
#line 1 "ENTRY_109edf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109edf60(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109ee480; body size 11 bytes.
#line 1 "ENTRY_109ee480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109ee480(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109ee490; body size 52 bytes.
#line 1 "ENTRY_109ee490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109ee490(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109ee6f0; body size 57 bytes.
#line 1 "ENTRY_109ee6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109ee6f0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSystemIdIntroPage_vftable);
  param_1[4] = (uint)&Ext_SCSystemIdIntroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSystemIdIntroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSystemIdIntroPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109ee840; body size 57 bytes.
#line 1 "ENTRY_109ee840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109ee840(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSystemIdSystemSearchFailurePage_vftable);
  param_1[4] = (uint)&Ext_SCSystemIdSystemSearchFailurePage_vftable;
  param_1[0x23] = (uint)&Ext_SCSystemIdSystemSearchFailurePage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSystemIdSystemSearchFailurePage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109ee990; body size 77 bytes.
#line 1 "ENTRY_109ee990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109ee990(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSystemIdSystemSearchPage_vftable);
  param_1[4] = (uint)&Ext_SCSystemIdSystemSearchPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSystemIdSystemSearchPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSystemIdSystemSearchPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109ef030; body size 38 bytes.
#line 1 "ENTRY_109ef030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef030(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109ef060; body size 11 bytes.
#line 1 "ENTRY_109ef060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef060(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109ef070; body size 11 bytes.
#line 1 "ENTRY_109ef070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef070(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109ef080; body size 11 bytes.
#line 1 "ENTRY_109ef080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef080(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109ef090; body size 11 bytes.
#line 1 "ENTRY_109ef090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef090(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109ef0a0; body size 38 bytes.
#line 1 "ENTRY_109ef0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef0a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109ef0e0; body size 38 bytes.
#line 1 "ENTRY_109ef0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef0e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109ef110; body size 21 bytes.
#line 1 "ENTRY_109ef110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef110(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4170 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109ef130; body size 38 bytes.
#line 1 "ENTRY_109ef130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef130(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109ef160; body size 21 bytes.
#line 1 "ENTRY_109ef160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef160(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4164 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109ef180; body size 38 bytes.
#line 1 "ENTRY_109ef180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef180(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109ef1b0; body size 21 bytes.
#line 1 "ENTRY_109ef1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef1b0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a416c = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109ef270; body size 21 bytes.
#line 1 "ENTRY_109ef270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef270(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4168 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109efc80; body size 13 bytes.
#line 1 "ENTRY_109efc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_109efc80(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 109f0590; body size 11 bytes.
#line 1 "ENTRY_109f0590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_109f0590(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 109f2e60; body size 6 bytes.
#line 1 "ENTRY_109f2e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f2e60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4170);
}


// Reference entry 109f2e70; body size 6 bytes.
#line 1 "ENTRY_109f2e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f2e70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4164);
}


// Reference entry 109f2e80; body size 6 bytes.
#line 1 "ENTRY_109f2e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f2e80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a416c);
}


// Reference entry 109f2e90; body size 6 bytes.
#line 1 "ENTRY_109f2e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f2e90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4168);
}


// Reference entry 109f2ea0; body size 6 bytes.
#line 1 "ENTRY_109f2ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f2ea0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4174);
}


// Reference entry 109f2eb0; body size 7 bytes.
#line 1 "ENTRY_109f2eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_109f2eb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x118));
}


// Reference entry 109f2ec0; body size 7 bytes.
#line 1 "ENTRY_109f2ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_109f2ec0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x119));
}


// Reference entry 109f2ed0; body size 5 bytes.
#line 1 "ENTRY_109f2ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f2ed0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109f2ef0; body size 5 bytes.
#line 1 "ENTRY_109f2ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f2ef0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109f2f00; body size 5 bytes.
#line 1 "ENTRY_109f2f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f2f00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109f2f10; body size 5 bytes.
#line 1 "ENTRY_109f2f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f2f10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109f2f20; body size 5 bytes.
#line 1 "ENTRY_109f2f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f2f20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109f3bd0; body size 6 bytes.
#line 1 "ENTRY_109f3bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3bd0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41c0);
}


// Reference entry 109f3be0; body size 6 bytes.
#line 1 "ENTRY_109f3be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3be0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41e8);
}


// Reference entry 109f3bf0; body size 6 bytes.
#line 1 "ENTRY_109f3bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3bf0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41d8);
}


// Reference entry 109f3c00; body size 6 bytes.
#line 1 "ENTRY_109f3c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3c00(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41c4);
}


// Reference entry 109f3c10; body size 6 bytes.
#line 1 "ENTRY_109f3c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3c10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41ec);
}


// Reference entry 109f3c20; body size 6 bytes.
#line 1 "ENTRY_109f3c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3c20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41e4);
}


// Reference entry 109f3c30; body size 6 bytes.
#line 1 "ENTRY_109f3c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3c30(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41dc);
}


// Reference entry 109f3c40; body size 6 bytes.
#line 1 "ENTRY_109f3c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3c40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41e0);
}


// Reference entry 109f3c50; body size 6 bytes.
#line 1 "ENTRY_109f3c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3c50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41d4);
}


// Reference entry 109f3c60; body size 6 bytes.
#line 1 "ENTRY_109f3c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3c60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41cc);
}


// Reference entry 109f3c70; body size 6 bytes.
#line 1 "ENTRY_109f3c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3c70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41c8);
}


// Reference entry 109f3c90; body size 6 bytes.
#line 1 "ENTRY_109f3c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_109f3c90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpHTControlCommitLearnedIRCodes");
}


// Reference entry 109f3ca0; body size 6 bytes.
#line 1 "ENTRY_109f3ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_109f3ca0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpHTControlIdentifyIRRemote");
}


// Reference entry 109f3cb0; body size 6 bytes.
#line 1 "ENTRY_109f3cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_109f3cb0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpHTControlIsRemoteConfigured");
}


// Reference entry 109f3cc0; body size 6 bytes.
#line 1 "ENTRY_109f3cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_109f3cc0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpHTControlLearnIRCode");
}


// Reference entry 109f3e80; body size 28 bytes.
#line 1 "ENTRY_109f3e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f3e80(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRef_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f3f40; body size 27 bytes.
#line 1 "ENTRY_109f3f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f3f40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f3f70; body size 27 bytes.
#line 1 "ENTRY_109f3f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f3f70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f3fa0; body size 27 bytes.
#line 1 "ENTRY_109f3fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f3fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f3fd0; body size 27 bytes.
#line 1 "ENTRY_109f3fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f3fd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f4000; body size 57 bytes.
#line 1 "ENTRY_109f4000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109f4000(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f5120; body size 16 bytes.
#line 1 "ENTRY_109f5120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f5120(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f5140; body size 16 bytes.
#line 1 "ENTRY_109f5140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f5140(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f5160; body size 16 bytes.
#line 1 "ENTRY_109f5160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f5160(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f5180; body size 16 bytes.
#line 1 "ENTRY_109f5180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f5180(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f5240; body size 127 bytes.
#line 1 "ENTRY_109f5240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall
FUN_109f5240(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)

{
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:HTControl:1","IdentifyIRRemote",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&Ext_RUpnpHTCIdentifyIRRemoteAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpHTCIdentifyIRRemoteAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpHTCIdentifyIRRemoteAIOOp_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f5390; body size 127 bytes.
#line 1 "ENTRY_109f5390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall
FUN_109f5390(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)

{
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:HTControl:1","LearnIRCode",uVar3,param_3,
                     param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&Ext_RUpnpHTCLearnIRCodeAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpHTCLearnIRCodeAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpHTCLearnIRCodeAIOOp_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f5430; body size 9 bytes.
#line 1 "ENTRY_109f5430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f5430(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIOpHTControlCommitLearnedIRCodes_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f5440; body size 9 bytes.
#line 1 "ENTRY_109f5440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f5440(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIOpHTControlIdentifyIRRemote_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f5450; body size 9 bytes.
#line 1 "ENTRY_109f5450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f5450(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIOpHTControlIsRemoteConfigured_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f5460; body size 9 bytes.
#line 1 "ENTRY_109f5460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f5460(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIOpHTControlLearnIRCode_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f5a30; body size 57 bytes.
#line 1 "ENTRY_109f5a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109f5a30(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCTVRemoteControlGetRemotePage_vftable);
  param_1[4] = (uint)&Ext_SCTVRemoteControlGetRemotePage_vftable;
  param_1[0x23] = (uint)&Ext_SCTVRemoteControlGetRemotePage_vftable;
  param_1[0x2a] = (uint)&Ext_SCTVRemoteControlGetRemotePage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f5b80; body size 57 bytes.
#line 1 "ENTRY_109f5b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109f5b80(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCTVRemoteControlIntroPage_vftable);
  param_1[4] = (uint)&Ext_SCTVRemoteControlIntroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCTVRemoteControlIntroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCTVRemoteControlIntroPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f6110; body size 104 bytes.
#line 1 "ENTRY_109f6110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109f6110(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCTVRemoteControlPressVolumePage_vftable);
  param_1[4] = (uint)&Ext_SCTVRemoteControlPressVolumePage_vftable;
  param_1[0x23] = (uint)&Ext_SCTVRemoteControlPressVolumePage_vftable;
  param_1[0x2a] = (uint)&Ext_SCTVRemoteControlPressVolumePage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f62a0; body size 86 bytes.
#line 1 "ENTRY_109f62a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109f62a0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCTVRemoteControlSettingsIntroPage_vftable);
  param_1[4] = (uint)&Ext_SCTVRemoteControlSettingsIntroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCTVRemoteControlSettingsIntroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCTVRemoteControlSettingsIntroPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f6410; body size 57 bytes.
#line 1 "ENTRY_109f6410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109f6410(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCTVRemoteControlSetupErrorPage_vftable);
  param_1[4] = (uint)&Ext_SCTVRemoteControlSetupErrorPage_vftable;
  param_1[0x23] = (uint)&Ext_SCTVRemoteControlSetupErrorPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCTVRemoteControlSetupErrorPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f6560; body size 57 bytes.
#line 1 "ENTRY_109f6560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109f6560(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCTVRemoteControlSetupSuccessCheckmarkPage_vftable);
  param_1[4] = (uint)&Ext_SCTVRemoteControlSetupSuccessCheckmarkPage_vftable;
  param_1[0x23] = (uint)&Ext_SCTVRemoteControlSetupSuccessCheckmarkPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCTVRemoteControlSetupSuccessCheckmarkPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f66b0; body size 57 bytes.
#line 1 "ENTRY_109f66b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109f66b0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCTVRemoteControlSetupSuccessPage_vftable);
  param_1[4] = (uint)&Ext_SCTVRemoteControlSetupSuccessPage_vftable;
  param_1[0x23] = (uint)&Ext_SCTVRemoteControlSetupSuccessPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCTVRemoteControlSetupSuccessPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f6800; body size 57 bytes.
#line 1 "ENTRY_109f6800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109f6800(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCTVRemoteControlSignalDetectedPage_vftable);
  param_1[4] = (uint)&Ext_SCTVRemoteControlSignalDetectedPage_vftable;
  param_1[0x23] = (uint)&Ext_SCTVRemoteControlSignalDetectedPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCTVRemoteControlSignalDetectedPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f6950; body size 57 bytes.
#line 1 "ENTRY_109f6950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109f6950(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCTVRemoteControlSignalNotDetectedPage_vftable);
  param_1[4] = (uint)&Ext_SCTVRemoteControlSignalNotDetectedPage_vftable;
  param_1[0x23] = (uint)&Ext_SCTVRemoteControlSignalNotDetectedPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCTVRemoteControlSignalNotDetectedPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f6aa0; body size 57 bytes.
#line 1 "ENTRY_109f6aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_109f6aa0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCTVRemoteControlSignalNotRecognizedPage_vftable);
  param_1[4] = (uint)&Ext_SCTVRemoteControlSignalNotRecognizedPage_vftable;
  param_1[0x23] = (uint)&Ext_SCTVRemoteControlSignalNotRecognizedPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCTVRemoteControlSignalNotRecognizedPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 109f7710; body size 11 bytes.
#line 1 "ENTRY_109f7710"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7710(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRef_vftable);
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114f5ce0);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRefBase_vftable);
  if ((int *)param_1[1] != (int *)0x0) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if ((puVar1 != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f7720; body size 11 bytes.
#line 1 "ENTRY_109f7720"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7720(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRef_vftable);
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114f5ce0);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRefBase_vftable);
  if ((int *)param_1[1] != (int *)0x0) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if ((puVar1 != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f7740; body size 11 bytes.
#line 1 "ENTRY_109f7740"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7740(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRef_vftable);
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114f5ce0);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRefBase_vftable);
  if ((int *)param_1[1] != (int *)0x0) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if ((puVar1 != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f7800; body size 11 bytes.
#line 1 "ENTRY_109f7800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7800(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f7810; body size 11 bytes.
#line 1 "ENTRY_109f7810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7810(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f7820; body size 11 bytes.
#line 1 "ENTRY_109f7820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7820(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f7830; body size 11 bytes.
#line 1 "ENTRY_109f7830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7830(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f7840; body size 11 bytes.
#line 1 "ENTRY_109f7840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7840(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f7850; body size 11 bytes.
#line 1 "ENTRY_109f7850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7850(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f7870; body size 11 bytes.
#line 1 "ENTRY_109f7870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7870(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f7880; body size 11 bytes.
#line 1 "ENTRY_109f7880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7880(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f7890; body size 11 bytes.
#line 1 "ENTRY_109f7890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7890(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f8170; body size 28 bytes.
#line 1 "ENTRY_109f8170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8170(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_RUpnpHTCCommitLearnedIRCodesAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpHTCCommitLearnedIRCodesAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpHTCCommitLearnedIRCodesAIOOp_vftable;
  *param_1 = (undefined4)((uint)&Ext_RUpnpAsyncIOOperation_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpAsyncIOOperation_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpAsyncIOOperation_vftable;
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpImpl_vftable);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 109f81a0; body size 28 bytes.
#line 1 "ENTRY_109f81a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f81a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_RUpnpHTCIdentifyIRRemoteAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpHTCIdentifyIRRemoteAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpHTCIdentifyIRRemoteAIOOp_vftable;
  *param_1 = (undefined4)((uint)&Ext_RUpnpAsyncIOOperation_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpAsyncIOOperation_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpAsyncIOOperation_vftable;
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpImpl_vftable);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 109f81d0; body size 28 bytes.
#line 1 "ENTRY_109f81d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f81d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_RUpnpHTCIsRemoteConfiguredAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpHTCIsRemoteConfiguredAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpHTCIsRemoteConfiguredAIOOp_vftable;
  *param_1 = (undefined4)((uint)&Ext_RUpnpAsyncIOOperation_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpAsyncIOOperation_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpAsyncIOOperation_vftable;
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpImpl_vftable);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 109f8200; body size 28 bytes.
#line 1 "ENTRY_109f8200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8200(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_RUpnpHTCLearnIRCodeAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpHTCLearnIRCodeAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpHTCLearnIRCodeAIOOp_vftable;
  *param_1 = (undefined4)((uint)&Ext_RUpnpAsyncIOOperation_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpAsyncIOOperation_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpAsyncIOOperation_vftable;
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpImpl_vftable);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 109f8230; body size 7 bytes.
#line 1 "ENTRY_109f8230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8230(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 109f8240; body size 7 bytes.
#line 1 "ENTRY_109f8240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8240(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 109f8250; body size 7 bytes.
#line 1 "ENTRY_109f8250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8250(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 109f8260; body size 7 bytes.
#line 1 "ENTRY_109f8260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 109f8270; body size 18 bytes.
#line 1 "ENTRY_109f8270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8270(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCOpHTControlCommitLearnedIRCodes_vftable);
  param_1[2] = (uint)&Ext_SCOpHTControlCommitLearnedIRCodes_vftable;
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116752e0);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCOpImpl_vftable);
  param_1[2] = (uint)&Ext_SCOpImpl_vftable;
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if (piVar1 != (int *)0x0) {
      param_1[3] = 0;
      param_1[4] = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    param_1[3] = 0;
    param_1[4] = 0;
  }
  param_1[0xc] = (uint)&Ext_SCIObjImpl_vftable;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xc] = (uint)&Ext_SCIObj_vftable;
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = 0;
  uStack_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRef_vftable;
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);
  uStack_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (uint)&Ext_RControlAIOOpCB_vftable;
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f8290; body size 18 bytes.
#line 1 "ENTRY_109f8290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8290(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCOpHTControlIdentifyIRRemote_vftable);
  param_1[2] = (uint)&Ext_SCOpHTControlIdentifyIRRemote_vftable;
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11675310);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCOpImpl_vftable);
  param_1[2] = (uint)&Ext_SCOpImpl_vftable;
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if (piVar1 != (int *)0x0) {
      param_1[3] = 0;
      param_1[4] = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    param_1[3] = 0;
    param_1[4] = 0;
  }
  param_1[0xc] = (uint)&Ext_SCIObjImpl_vftable;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xc] = (uint)&Ext_SCIObj_vftable;
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = 0;
  uStack_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRef_vftable;
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);
  uStack_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (uint)&Ext_RControlAIOOpCB_vftable;
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f82b0; body size 18 bytes.
#line 1 "ENTRY_109f82b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f82b0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCOpHTControlIsRemoteConfigured_vftable);
  param_1[2] = (uint)&Ext_SCOpHTControlIsRemoteConfigured_vftable;
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11675340);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCOpImpl_vftable);
  param_1[2] = (uint)&Ext_SCOpImpl_vftable;
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if (piVar1 != (int *)0x0) {
      param_1[3] = 0;
      param_1[4] = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    param_1[3] = 0;
    param_1[4] = 0;
  }
  param_1[0xc] = (uint)&Ext_SCIObjImpl_vftable;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xc] = (uint)&Ext_SCIObj_vftable;
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = 0;
  uStack_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRef_vftable;
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);
  uStack_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (uint)&Ext_RControlAIOOpCB_vftable;
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f82d0; body size 18 bytes.
#line 1 "ENTRY_109f82d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f82d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCOpHTControlLearnIRCode_vftable);
  param_1[2] = (uint)&Ext_SCOpHTControlLearnIRCode_vftable;
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11675370);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCOpImpl_vftable);
  param_1[2] = (uint)&Ext_SCOpImpl_vftable;
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if (piVar1 != (int *)0x0) {
      param_1[3] = 0;
      param_1[4] = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    param_1[3] = 0;
    param_1[4] = 0;
  }
  param_1[0xc] = (uint)&Ext_SCIObjImpl_vftable;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xc] = (uint)&Ext_SCIObj_vftable;
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = 0;
  uStack_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRef_vftable;
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);
  uStack_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (uint)&Ext_RControlAIOOpCB_vftable;
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f82f0; body size 38 bytes.
#line 1 "ENTRY_109f82f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f82f0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109f8320; body size 21 bytes.
#line 1 "ENTRY_109f8320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8320(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a41c0 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f8340; body size 38 bytes.
#line 1 "ENTRY_109f8340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8340(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109f8370; body size 21 bytes.
#line 1 "ENTRY_109f8370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8370(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a41e8 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f84f0; body size 21 bytes.
#line 1 "ENTRY_109f84f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f84f0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a41d8 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f8600; body size 21 bytes.
#line 1 "ENTRY_109f8600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8600(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a41c4 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f86d0; body size 21 bytes.
#line 1 "ENTRY_109f86d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f86d0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a41ec = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f86f0; body size 38 bytes.
#line 1 "ENTRY_109f86f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f86f0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109f8720; body size 21 bytes.
#line 1 "ENTRY_109f8720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8720(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a41e4 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f8740; body size 38 bytes.
#line 1 "ENTRY_109f8740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8740(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109f8790; body size 38 bytes.
#line 1 "ENTRY_109f8790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8790(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109f87c0; body size 21 bytes.
#line 1 "ENTRY_109f87c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f87c0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a41e0 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f87e0; body size 38 bytes.
#line 1 "ENTRY_109f87e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f87e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109f8810; body size 21 bytes.
#line 1 "ENTRY_109f8810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8810(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a41d4 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f8830; body size 38 bytes.
#line 1 "ENTRY_109f8830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8830(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109f8860; body size 21 bytes.
#line 1 "ENTRY_109f8860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8860(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a41cc = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 109f8880; body size 38 bytes.
#line 1 "ENTRY_109f8880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8880(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 109f8c20; body size 4 bytes.
#line 1 "ENTRY_109f8c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f8c20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 109f8c30; body size 3 bytes.
#line 1 "ENTRY_109f8c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f8c30(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 109f8c40; body size 3 bytes.
#line 1 "ENTRY_109f8c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f8c40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 109f8c50; body size 4 bytes.
#line 1 "ENTRY_109f8c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f8c50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 109f8c60; body size 3 bytes.
#line 1 "ENTRY_109f8c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f8c60(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a00510; body size 7 bytes.
#line 1 "ENTRY_10a00510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a00510(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xf4));
}


// Reference entry 10a00520; body size 7 bytes.
#line 1 "ENTRY_10a00520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a00520(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xf8));
}


// Reference entry 10a008e0; body size 7 bytes.
#line 1 "ENTRY_10a008e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10a008e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0xfc));
}


// Reference entry 10a00930; body size 7 bytes.
#line 1 "ENTRY_10a00930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10a00930(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0xd7d0));
}


// Reference entry 10a04570; body size 6 bytes.
#line 1 "ENTRY_10a04570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a04570(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41c0);
}


// Reference entry 10a04580; body size 6 bytes.
#line 1 "ENTRY_10a04580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a04580(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41e8);
}


// Reference entry 10a04590; body size 6 bytes.
#line 1 "ENTRY_10a04590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a04590(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41d8);
}


// Reference entry 10a045a0; body size 6 bytes.
#line 1 "ENTRY_10a045a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a045a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41c4);
}


// Reference entry 10a045b0; body size 6 bytes.
#line 1 "ENTRY_10a045b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a045b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41ec);
}


// Reference entry 10a045c0; body size 6 bytes.
#line 1 "ENTRY_10a045c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a045c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41e4);
}


// Reference entry 10a045d0; body size 6 bytes.
#line 1 "ENTRY_10a045d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a045d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41dc);
}


// Reference entry 10a045e0; body size 6 bytes.
#line 1 "ENTRY_10a045e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a045e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41e0);
}


// Reference entry 10a045f0; body size 6 bytes.
#line 1 "ENTRY_10a045f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a045f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41d4);
}


// Reference entry 10a04600; body size 6 bytes.
#line 1 "ENTRY_10a04600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a04600(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41cc);
}


// Reference entry 10a04610; body size 6 bytes.
#line 1 "ENTRY_10a04610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a04610(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41c8);
}


// Reference entry 10a04620; body size 6 bytes.
#line 1 "ENTRY_10a04620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a04620(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a41d0);
}


// Reference entry 10a04640; body size 5 bytes.
#line 1 "ENTRY_10a04640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a04640(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a04650; body size 5 bytes.
#line 1 "ENTRY_10a04650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a04650(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a05c40; body size 6 bytes.
#line 1 "ENTRY_10a05c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10a05c40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpHTControlCommitLearnedIRCodes");
}


// Reference entry 10a05c50; body size 6 bytes.
#line 1 "ENTRY_10a05c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10a05c50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpHTControlIdentifyIRRemote");
}


// Reference entry 10a05c60; body size 6 bytes.
#line 1 "ENTRY_10a05c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10a05c60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpHTControlIsRemoteConfigured");
}


// Reference entry 10a05c70; body size 6 bytes.
#line 1 "ENTRY_10a05c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10a05c70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpHTControlLearnIRCode");
}


// Reference entry 10a080d0; body size 3 bytes.
#line 1 "ENTRY_10a080d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a080d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a080e0; body size 3 bytes.
#line 1 "ENTRY_10a080e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a080e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a080f0; body size 3 bytes.
#line 1 "ENTRY_10a080f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a080f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a08100; body size 3 bytes.
#line 1 "ENTRY_10a08100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a08100(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a08790; body size 28 bytes.
#line 1 "ENTRY_10a08790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a08790(undefined4 *param_1)

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


// Reference entry 10a087c0; body size 28 bytes.
#line 1 "ENTRY_10a087c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a087c0(undefined4 *param_1)

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


// Reference entry 10a087f0; body size 28 bytes.
#line 1 "ENTRY_10a087f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a087f0(undefined4 *param_1)

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


// Reference entry 10a08820; body size 28 bytes.
#line 1 "ENTRY_10a08820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a08820(undefined4 *param_1)

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


// Reference entry 10a08850; body size 28 bytes.
#line 1 "ENTRY_10a08850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a08850(undefined4 *param_1)

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


// Reference entry 10a08880; body size 28 bytes.
#line 1 "ENTRY_10a08880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a08880(undefined4 *param_1)

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


// Reference entry 10a088b0; body size 28 bytes.
#line 1 "ENTRY_10a088b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a088b0(undefined4 *param_1)

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


// Reference entry 10a088e0; body size 28 bytes.
#line 1 "ENTRY_10a088e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a088e0(undefined4 *param_1)

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


// Reference entry 10a08c40; body size 13 bytes.
#line 1 "ENTRY_10a08c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a08c40(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf4) = param_2;
  return;
}


// Reference entry 10a08c50; body size 13 bytes.
#line 1 "ENTRY_10a08c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a08c50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf8) = param_2;
  return;
}


// Reference entry 10a08c60; body size 13 bytes.
#line 1 "ENTRY_10a08c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a08c60(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xfc) = param_2;
  return;
}


// Reference entry 10a08cb0; body size 26 bytes.
#line 1 "ENTRY_10a08cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __thiscall FUN_10a08cb0(int *param_1,int *param_2)

{
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10a08cd0; body size 6 bytes.
#line 1 "ENTRY_10a08cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a08cd0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4240);
}


// Reference entry 10a08ce0; body size 6 bytes.
#line 1 "ENTRY_10a08ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a08ce0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a423c);
}


// Reference entry 10a08cf0; body size 6 bytes.
#line 1 "ENTRY_10a08cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a08cf0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4244);
}


// Reference entry 10a08d10; body size 57 bytes.
#line 1 "ENTRY_10a08d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a08d10(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a09670; body size 77 bytes.
#line 1 "ENTRY_10a09670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a09670(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCTVSetupOutroPage_vftable);
  param_1[4] = (uint)&Ext_SCTVSetupOutroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCTVSetupOutroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCTVSetupOutroPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a097d0; body size 96 bytes.
#line 1 "ENTRY_10a097d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a097d0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCTVSetupWizard_vftable);
  param_1[4] = (uint)&Ext_SCTVSetupWizard_vftable;
  param_1[0x23] = (uint)&Ext_SCTVSetupWizard_vftable;
  param_1[0x2a] = (uint)&Ext_SCTVSetupWizard_vftable;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a09b70; body size 38 bytes.
#line 1 "ENTRY_10a09b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a09b70(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a09ba0; body size 11 bytes.
#line 1 "ENTRY_10a09ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a09ba0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a09bb0; body size 11 bytes.
#line 1 "ENTRY_10a09bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a09bb0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a09bc0; body size 11 bytes.
#line 1 "ENTRY_10a09bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a09bc0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a09bd0; body size 38 bytes.
#line 1 "ENTRY_10a09bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a09bd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10a09c00; body size 38 bytes.
#line 1 "ENTRY_10a09c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a09c00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10a09c30; body size 38 bytes.
#line 1 "ENTRY_10a09c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a09c30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10a09c60; body size 21 bytes.
#line 1 "ENTRY_10a09c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a09c60(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4240 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a09c80; body size 38 bytes.
#line 1 "ENTRY_10a09c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a09c80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10a09cb0; body size 21 bytes.
#line 1 "ENTRY_10a09cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a09cb0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a423c = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a09d80; body size 21 bytes.
#line 1 "ENTRY_10a09d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a09d80(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4244 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a0c3e0; body size 6 bytes.
#line 1 "ENTRY_10a0c3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a0c3e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4240);
}


// Reference entry 10a0c3f0; body size 6 bytes.
#line 1 "ENTRY_10a0c3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a0c3f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a423c);
}


// Reference entry 10a0c400; body size 6 bytes.
#line 1 "ENTRY_10a0c400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a0c400(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4244);
}


// Reference entry 10a0c410; body size 6 bytes.
#line 1 "ENTRY_10a0c410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a0c410(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4238);
}


// Reference entry 10a0c420; body size 5 bytes.
#line 1 "ENTRY_10a0c420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a0c420(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10a0c430; body size 5 bytes.
#line 1 "ENTRY_10a0c430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a0c430(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10a0c440; body size 7 bytes.
#line 1 "ENTRY_10a0c440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10a0c440(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0xf4));
}


// Reference entry 10a0c460; body size 5 bytes.
#line 1 "ENTRY_10a0c460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a0c460(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a0c470; body size 5 bytes.
#line 1 "ENTRY_10a0c470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a0c470(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a0c480; body size 5 bytes.
#line 1 "ENTRY_10a0c480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a0c480(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a0c490; body size 5 bytes.
#line 1 "ENTRY_10a0c490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a0c490(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a0cce0; body size 13 bytes.
#line 1 "ENTRY_10a0cce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a0cce0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xf4) = param_2;
  return;
}


// Reference entry 10a0ccf0; body size 6 bytes.
#line 1 "ENTRY_10a0ccf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a0ccf0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4298);
}


// Reference entry 10a0cd00; body size 6 bytes.
#line 1 "ENTRY_10a0cd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a0cd00(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4290);
}


// Reference entry 10a0cd10; body size 6 bytes.
#line 1 "ENTRY_10a0cd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a0cd10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4294);
}


// Reference entry 10a0cd30; body size 57 bytes.
#line 1 "ENTRY_10a0cd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a0cd30(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a0d050; body size 77 bytes.
#line 1 "ENTRY_10a0d050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a0d050(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCUpdateCheckErrorPage_vftable);
  param_1[4] = (uint)&Ext_SCUpdateCheckErrorPage_vftable;
  param_1[0x23] = (uint)&Ext_SCUpdateCheckErrorPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCUpdateCheckErrorPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a0d1b0; body size 77 bytes.
#line 1 "ENTRY_10a0d1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a0d1b0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCUpdateCheckIntroPage_vftable);
  param_1[4] = (uint)&Ext_SCUpdateCheckIntroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCUpdateCheckIntroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCUpdateCheckIntroPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a0d310; body size 77 bytes.
#line 1 "ENTRY_10a0d310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a0d310(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCUpdateCheckRetryPage_vftable);
  param_1[4] = (uint)&Ext_SCUpdateCheckRetryPage_vftable;
  param_1[0x23] = (uint)&Ext_SCUpdateCheckRetryPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCUpdateCheckRetryPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a0d8d0; body size 38 bytes.
#line 1 "ENTRY_10a0d8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a0d8d0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a0d900; body size 11 bytes.
#line 1 "ENTRY_10a0d900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a0d900(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a0d910; body size 11 bytes.
#line 1 "ENTRY_10a0d910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a0d910(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a0d920; body size 11 bytes.
#line 1 "ENTRY_10a0d920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a0d920(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a0d9e0; body size 21 bytes.
#line 1 "ENTRY_10a0d9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a0d9e0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4298 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a0dab0; body size 21 bytes.
#line 1 "ENTRY_10a0dab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a0dab0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4290 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a0db80; body size 21 bytes.
#line 1 "ENTRY_10a0db80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a0db80(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4294 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a11d60; body size 6 bytes.
#line 1 "ENTRY_10a11d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a11d60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4298);
}


// Reference entry 10a11d70; body size 6 bytes.
#line 1 "ENTRY_10a11d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a11d70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4290);
}


// Reference entry 10a11d80; body size 6 bytes.
#line 1 "ENTRY_10a11d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a11d80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4294);
}


// Reference entry 10a11d90; body size 6 bytes.
#line 1 "ENTRY_10a11d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a11d90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a429c);
}


// Reference entry 10a11db0; body size 7 bytes.
#line 1 "ENTRY_10a11db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a11db0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x104));
}


// Reference entry 10a11dc0; body size 5 bytes.
#line 1 "ENTRY_10a11dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a11dc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a11dd0; body size 5 bytes.
#line 1 "ENTRY_10a11dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a11dd0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a11df0; body size 7 bytes.
#line 1 "ENTRY_10a11df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10a11df0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10a12630; body size 13 bytes.
#line 1 "ENTRY_10a12630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a12630(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x100) = param_2;
  return;
}


// Reference entry 10a12640; body size 13 bytes.
#line 1 "ENTRY_10a12640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a12640(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x104) = param_2;
  return;
}


// Reference entry 10a126c0; body size 18 bytes.
#line 1 "ENTRY_10a126c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a126c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a126e0; body size 22 bytes.
#line 1 "ENTRY_10a126e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a126e0(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a12700; body size 18 bytes.
#line 1 "ENTRY_10a12700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a12700(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a12800; body size 22 bytes.
#line 1 "ENTRY_10a12800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a12800(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a12890; body size 28 bytes.
#line 1 "ENTRY_10a12890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a12890(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x4e8));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10a128c0; body size 13 bytes.
#line 1 "ENTRY_10a128c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a128c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10a128d0; body size 13 bytes.
#line 1 "ENTRY_10a128d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a128d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10a128e0; body size 3 bytes.
#line 1 "ENTRY_10a128e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a128e0(void)

{
  return;
}


// Reference entry 10a12aa0; body size 18 bytes.
#line 1 "ENTRY_10a12aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a12aa0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x4e8);
  return;
}


// Reference entry 10a12b50; body size 22 bytes.
#line 1 "ENTRY_10a12b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10a12b50(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0x342da8) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 * 0x4e8);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException(auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 10a12b70; body size 5 bytes.
#line 1 "ENTRY_10a12b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12b70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a12b80; body size 37 bytes.
#line 1 "ENTRY_10a12b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12b80(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((Stub_SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10a12d00; body size 5 bytes.
#line 1 "ENTRY_10a12d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12d00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a12d10; body size 5 bytes.
#line 1 "ENTRY_10a12d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12d10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a12d20; body size 5 bytes.
#line 1 "ENTRY_10a12d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12d20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a12d30; body size 5 bytes.
#line 1 "ENTRY_10a12d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12d30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a12d40; body size 5 bytes.
#line 1 "ENTRY_10a12d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12d40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a12e30; body size 15 bytes.
#line 1 "ENTRY_10a12e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12e30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10a12e50; body size 15 bytes.
#line 1 "ENTRY_10a12e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12e50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10a12e70; body size 5 bytes.
#line 1 "ENTRY_10a12e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12e70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a12e80; body size 5 bytes.
#line 1 "ENTRY_10a12e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12e80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a12e90; body size 5 bytes.
#line 1 "ENTRY_10a12e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12e90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a12ea0; body size 6 bytes.
#line 1 "ENTRY_10a12ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12ea0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a42f0);
}


// Reference entry 10a12eb0; body size 6 bytes.
#line 1 "ENTRY_10a12eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12eb0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a42ec);
}


// Reference entry 10a12ec0; body size 6 bytes.
#line 1 "ENTRY_10a12ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12ec0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a42e8);
}


// Reference entry 10a12ed0; body size 6 bytes.
#line 1 "ENTRY_10a12ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12ed0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a42f8);
}


// Reference entry 10a12ee0; body size 6 bytes.
#line 1 "ENTRY_10a12ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12ee0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a42f4);
}


// Reference entry 10a12f00; body size 57 bytes.
#line 1 "ENTRY_10a12f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a12f00(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a13400; body size 18 bytes.
#line 1 "ENTRY_10a13400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a13400(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a13460; body size 11 bytes.
#line 1 "ENTRY_10a13460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a13460(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a13470; body size 11 bytes.
#line 1 "ENTRY_10a13470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a13470(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a13500; body size 11 bytes.
#line 1 "ENTRY_10a13500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a13500(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a13510; body size 16 bytes.
#line 1 "ENTRY_10a13510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a13510(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a13530; body size 3 bytes.
#line 1 "ENTRY_10a13530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a13530(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a13540; body size 55 bytes.
#line 1 "ENTRY_10a13540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a13540(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x4e8));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a13590; body size 11 bytes.
#line 1 "ENTRY_10a13590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a13590(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_RZPUpdateProgressCB_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a13750; body size 57 bytes.
#line 1 "ENTRY_10a13750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a13750(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCUpdateSystemUpdateAvailablePage_vftable);
  param_1[4] = (uint)&Ext_SCUpdateSystemUpdateAvailablePage_vftable;
  param_1[0x23] = (uint)&Ext_SCUpdateSystemUpdateAvailablePage_vftable;
  param_1[0x2a] = (uint)&Ext_SCUpdateSystemUpdateAvailablePage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a138a0; body size 57 bytes.
#line 1 "ENTRY_10a138a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a138a0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCUpdateSystemUpdateCheckErrorPage_vftable);
  param_1[4] = (uint)&Ext_SCUpdateSystemUpdateCheckErrorPage_vftable;
  param_1[0x23] = (uint)&Ext_SCUpdateSystemUpdateCheckErrorPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCUpdateSystemUpdateCheckErrorPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a139f0; body size 77 bytes.
#line 1 "ENTRY_10a139f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a139f0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCUpdateSystemUpdateCheckPage_vftable);
  param_1[4] = (uint)&Ext_SCUpdateSystemUpdateCheckPage_vftable;
  param_1[0x23] = (uint)&Ext_SCUpdateSystemUpdateCheckPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCUpdateSystemUpdateCheckPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a13b50; body size 57 bytes.
#line 1 "ENTRY_10a13b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a13b50(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCUpdateSystemUpdateErrorPage_vftable);
  param_1[4] = (uint)&Ext_SCUpdateSystemUpdateErrorPage_vftable;
  param_1[0x23] = (uint)&Ext_SCUpdateSystemUpdateErrorPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCUpdateSystemUpdateErrorPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a13ca0; body size 133 bytes.
#line 1 "ENTRY_10a13ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a13ca0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCUpdateSystemUpdatePage_vftable);
  param_1[4] = (uint)&Ext_SCUpdateSystemUpdatePage_vftable;
  param_1[0x23] = (uint)&Ext_SCUpdateSystemUpdatePage_vftable;
  param_1[0x2a] = (uint)&Ext_SCUpdateSystemUpdatePage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0xffffffff;
  param_1[0x3f] = 0xffffffff;
  param_1[0x40] = 1;
  *(undefined2 *)(param_1 + 0x41) = 0;
  *(undefined1 *)((int)param_1 + 0x106) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a14430; body size 38 bytes.
#line 1 "ENTRY_10a14430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a14430(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a14460; body size 11 bytes.
#line 1 "ENTRY_10a14460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a14460(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a14470; body size 11 bytes.
#line 1 "ENTRY_10a14470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a14470(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a14480; body size 11 bytes.
#line 1 "ENTRY_10a14480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a14480(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a14490; body size 11 bytes.
#line 1 "ENTRY_10a14490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a14490(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a144a0; body size 11 bytes.
#line 1 "ENTRY_10a144a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a144a0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a14660; body size 38 bytes.
#line 1 "ENTRY_10a14660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a14660(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a14690; body size 21 bytes.
#line 1 "ENTRY_10a14690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a14690(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a42f0 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a146b0; body size 38 bytes.
#line 1 "ENTRY_10a146b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a146b0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a146e0; body size 21 bytes.
#line 1 "ENTRY_10a146e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a146e0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a42ec = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a147b0; body size 21 bytes.
#line 1 "ENTRY_10a147b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a147b0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a42e8 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a147d0; body size 38 bytes.
#line 1 "ENTRY_10a147d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a147d0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a14800; body size 21 bytes.
#line 1 "ENTRY_10a14800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a14800(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a42f8 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a14820; body size 38 bytes.
#line 1 "ENTRY_10a14820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a14820(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a14850; body size 21 bytes.
#line 1 "ENTRY_10a14850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a14850(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a42f4 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a14980; body size 5 bytes.
#line 1 "ENTRY_10a14980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a14980(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a14990; body size 286 bytes.
#line 1 "ENTRY_10a14990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __thiscall FUN_10a14990(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar2 = (int)(0x19);
  iVar4 = (int)(param_2 - param_1);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  puVar3 = (undefined1 *)((undefined1 *)(param_1 + 8));
  do {
    *puVar3 = (undefined1)(puVar3[iVar4]);
    iVar2 = (int)(iVar2 + -1);
    puVar3 = (undefined1 *)(puVar3 + 1);
  } while (iVar2 != 0);
  iVar2 = (int)(0x41);
  puVar3 = (undefined1 *)((undefined1 *)(param_1 + 0x21));
  do {
    *puVar3 = (undefined1)(puVar3[iVar4]);
    iVar2 = (int)(iVar2 + -1);
    puVar3 = (undefined1 *)(puVar3 + 1);
  } while (iVar2 != 0);
  iVar2 = (int)(0x401);
  puVar3 = (undefined1 *)((undefined1 *)(param_1 + 0x62));
  do {
    *puVar3 = (undefined1)(puVar3[iVar4]);
    iVar2 = (int)(iVar2 + -1);
    puVar3 = (undefined1 *)(puVar3 + 1);
  } while (iVar2 != 0);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x464));
  iVar2 = (int)(0x41);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x468);
  *(undefined4 *)(param_1 + 0x464) = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x46c));
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_2 + 0x470);
  *(undefined4 *)(param_1 + 0x46c) = uVar1;
  *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_2 + 0x474);
  puVar3 = (undefined1 *)((undefined1 *)(param_1 + 0x478));
  do {
    *puVar3 = (undefined1)(puVar3[iVar4]);
    iVar2 = (int)(iVar2 + -1);
    puVar3 = (undefined1 *)(puVar3 + 1);
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_2 + 0x4bc);
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_2 + 0x4c0);
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_2 + 0x4c4);
  *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_2 + 0x4c8);
  *(undefined1 *)(param_1 + 0x4cc) = *(undefined1 *)(param_2 + 0x4cc);
  *(undefined1 *)(param_1 + 0x4cd) = *(undefined1 *)(param_2 + 0x4cd);
  *(undefined1 *)(param_1 + 0x4ce) = *(undefined1 *)(param_2 + 0x4ce);
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x4d0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10a14b20; body size 14 bytes.
#line 1 "ENTRY_10a14b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __thiscall FUN_10a14b20(int *param_1,int *param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10a14c60; body size 7 bytes.
#line 1 "ENTRY_10a14c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10a14c60(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10a14c70; body size 6 bytes.
#line 1 "ENTRY_10a14c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a14c70(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10a14c80; body size 6 bytes.
#line 1 "ENTRY_10a14c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a14c80(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10a14c90; body size 6 bytes.
#line 1 "ENTRY_10a14c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a14c90(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10a15490; body size 34 bytes.
#line 1 "ENTRY_10a15490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a15490(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x4e8));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10a154f0; body size 14 bytes.
#line 1 "ENTRY_10a154f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a154f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x342da7) {
    return;
  }
                    
  ((Stub_std *)("map/set too long"))->_Xlength_error();
}


// Reference entry 10a15510; body size 3 bytes.
#line 1 "ENTRY_10a15510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a15510(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a15520; body size 3 bytes.
#line 1 "ENTRY_10a15520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a15520(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a15530; body size 3 bytes.
#line 1 "ENTRY_10a15530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a15530(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a15540; body size 3 bytes.
#line 1 "ENTRY_10a15540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a15540(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a15550; body size 3 bytes.
#line 1 "ENTRY_10a15550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a15550(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a15560; body size 3 bytes.
#line 1 "ENTRY_10a15560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a15560(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a15570; body size 3 bytes.
#line 1 "ENTRY_10a15570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a15570(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a15580; body size 3 bytes.
#line 1 "ENTRY_10a15580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a15580(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a15820; body size 79 bytes.
#line 1 "ENTRY_10a15820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a15820(int *param_1,int param_2)

{
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


// Reference entry 10a15890; body size 11 bytes.
#line 1 "ENTRY_10a15890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a15890(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10a158a0; body size 83 bytes.
#line 1 "ENTRY_10a158a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a158a0(int *param_1,int *param_2)

{
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


// Reference entry 10a15910; body size 90 bytes.
#line 1 "ENTRY_10a15910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10a15910(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x342da8) {
    param_1 = (uint)(param_1 * 0x4e8);
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


// Reference entry 10a16170; body size 55 bytes.
#line 1 "ENTRY_10a16170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a16170(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x4e8);
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


// Reference entry 10a161c0; body size 58 bytes.
#line 1 "ENTRY_10a161c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10a161c0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x4e8);
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


// Reference entry 10a16210; body size 11 bytes.
#line 1 "ENTRY_10a16210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a16210(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10a1adc0; body size 7 bytes.
#line 1 "ENTRY_10a1adc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10a1adc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0xf5));
}


// Reference entry 10a1add0; body size 7 bytes.
#line 1 "ENTRY_10a1add0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10a1add0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0xf4));
}


// Reference entry 10a1c860; body size 6 bytes.
#line 1 "ENTRY_10a1c860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1c860(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a42f0);
}


// Reference entry 10a1c870; body size 6 bytes.
#line 1 "ENTRY_10a1c870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1c870(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a42ec);
}


// Reference entry 10a1c880; body size 6 bytes.
#line 1 "ENTRY_10a1c880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1c880(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a42e8);
}


// Reference entry 10a1c890; body size 6 bytes.
#line 1 "ENTRY_10a1c890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1c890(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a42f8);
}


// Reference entry 10a1c8a0; body size 6 bytes.
#line 1 "ENTRY_10a1c8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1c8a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a42f4);
}


// Reference entry 10a1c8b0; body size 6 bytes.
#line 1 "ENTRY_10a1c8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1c8b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a42e4);
}


// Reference entry 10a1c8d0; body size 7 bytes.
#line 1 "ENTRY_10a1c8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a1c8d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xf8));
}


// Reference entry 10a1c8e0; body size 7 bytes.
#line 1 "ENTRY_10a1c8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a1c8e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xfc));
}


// Reference entry 10a1c8f0; body size 5 bytes.
#line 1 "ENTRY_10a1c8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a1c8f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a1c900; body size 5 bytes.
#line 1 "ENTRY_10a1c900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a1c900(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a1d040; body size 6 bytes.
#line 1 "ENTRY_10a1d040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1d040(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x342da7);
}


// Reference entry 10a1d050; body size 6 bytes.
#line 1 "ENTRY_10a1d050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1d050(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x342da7);
}


// Reference entry 10a1e410; body size 5 bytes.
#line 1 "ENTRY_10a1e410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e410(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a1e420; body size 13 bytes.
#line 1 "ENTRY_10a1e420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a1e420(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xf5) = param_2;
  return;
}


// Reference entry 10a1e430; body size 13 bytes.
#line 1 "ENTRY_10a1e430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a1e430(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf8) = param_2;
  return;
}


// Reference entry 10a1e440; body size 13 bytes.
#line 1 "ENTRY_10a1e440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a1e440(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xfc) = param_2;
  return;
}


// Reference entry 10a1e450; body size 7 bytes.
#line 1 "ENTRY_10a1e450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a1e450(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x4bc));
}


// Reference entry 10a1e460; body size 4 bytes.
#line 1 "ENTRY_10a1e460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a1e460(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 8);
}


// Reference entry 10a1e470; body size 7 bytes.
#line 1 "ENTRY_10a1e470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a1e470(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x4c8));
}


// Reference entry 10a1e480; body size 7 bytes.
#line 1 "ENTRY_10a1e480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10a1e480(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x4cd));
}


// Reference entry 10a1e490; body size 25 bytes.
#line 1 "ENTRY_10a1e490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a1e490(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a1e4b0; body size 25 bytes.
#line 1 "ENTRY_10a1e4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a1e4b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a1e4d0; body size 25 bytes.
#line 1 "ENTRY_10a1e4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a1e4d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a1e4f0; body size 23 bytes.
#line 1 "ENTRY_10a1e4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a1e4f0(int param_1,undefined4 param_2)

{
  thunk_FUN_10475400(param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x1c;
  return;
}


// Reference entry 10a1e510; body size 18 bytes.
#line 1 "ENTRY_10a1e510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a1e510(int param_1,undefined4 *param_2)

{
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10a1e680; body size 7 bytes.
#line 1 "ENTRY_10a1e680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e680(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a1e690; body size 3 bytes.
#line 1 "ENTRY_10a1e690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a1e690(void)

{
  return;
}


// Reference entry 10a1e6a0; body size 3 bytes.
#line 1 "ENTRY_10a1e6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a1e6a0(void)

{
  return;
}


// Reference entry 10a1e760; body size 38 bytes.
#line 1 "ENTRY_10a1e760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10a1e760(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10a1e830; body size 36 bytes.
#line 1 "ENTRY_10a1e830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10a1e830(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10a1e860; body size 5 bytes.
#line 1 "ENTRY_10a1e860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e860(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a1e870; body size 5 bytes.
#line 1 "ENTRY_10a1e870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e870(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a1e880; body size 14 bytes.
#line 1 "ENTRY_10a1e880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a1e880(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10475400(param_3);
  return;
}


// Reference entry 10a1e8a0; body size 13 bytes.
#line 1 "ENTRY_10a1e8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a1e8a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10a1e8b0; body size 36 bytes.
#line 1 "ENTRY_10a1e8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a1e8b0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10a1e530(puVar1,param_2);
  return;
}


// Reference entry 10a1e8e0; body size 5 bytes.
#line 1 "ENTRY_10a1e8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e8e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a1e8f0; body size 5 bytes.
#line 1 "ENTRY_10a1e8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e8f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a1e900; body size 5 bytes.
#line 1 "ENTRY_10a1e900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e900(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a1e910; body size 6 bytes.
#line 1 "ENTRY_10a1e910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e910(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4374);
}


// Reference entry 10a1e920; body size 6 bytes.
#line 1 "ENTRY_10a1e920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e920(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4378);
}


// Reference entry 10a1e930; body size 6 bytes.
#line 1 "ENTRY_10a1e930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e930(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4360);
}


// Reference entry 10a1e940; body size 6 bytes.
#line 1 "ENTRY_10a1e940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e940(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a434c);
}


// Reference entry 10a1e950; body size 6 bytes.
#line 1 "ENTRY_10a1e950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e950(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a436c);
}


// Reference entry 10a1e960; body size 6 bytes.
#line 1 "ENTRY_10a1e960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e960(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4370);
}


// Reference entry 10a1e970; body size 6 bytes.
#line 1 "ENTRY_10a1e970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e970(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4354);
}


// Reference entry 10a1e980; body size 6 bytes.
#line 1 "ENTRY_10a1e980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e980(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4358);
}


// Reference entry 10a1e990; body size 6 bytes.
#line 1 "ENTRY_10a1e990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e990(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4348);
}


// Reference entry 10a1e9a0; body size 6 bytes.
#line 1 "ENTRY_10a1e9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e9a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4368);
}


// Reference entry 10a1e9b0; body size 6 bytes.
#line 1 "ENTRY_10a1e9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e9b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4364);
}


// Reference entry 10a1e9c0; body size 6 bytes.
#line 1 "ENTRY_10a1e9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e9c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4350);
}


// Reference entry 10a1e9d0; body size 6 bytes.
#line 1 "ENTRY_10a1e9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e9d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a435c);
}


// Reference entry 10a1e9f0; body size 5 bytes.
#line 1 "ENTRY_10a1e9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e9f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a1ea00; body size 5 bytes.
#line 1 "ENTRY_10a1ea00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1ea00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a1ea10; body size 5 bytes.
#line 1 "ENTRY_10a1ea10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1ea10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a1eac0; body size 57 bytes.
#line 1 "ENTRY_10a1eac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a1eac0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a1f740; body size 21 bytes.
#line 1 "ENTRY_10a1f740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a1f740(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a1f760; body size 23 bytes.
#line 1 "ENTRY_10a1f760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a1f760(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a1f780; body size 3 bytes.
#line 1 "ENTRY_10a1f780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a1f780(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a1f900; body size 23 bytes.
#line 1 "ENTRY_10a1f900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a1f900(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a1fa40; body size 57 bytes.
#line 1 "ENTRY_10a1fa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a1fa40(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCVoiceServiceConcurrencyBondingConcurrencyErrorPage_vftable);
  param_1[4] = (uint)&Ext_SCVoiceServiceConcurrencyBondingConcurrencyErrorPage_vftable;
  param_1[0x23] = (uint)&Ext_SCVoiceServiceConcurrencyBondingConcurrencyErrorPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCVoiceServiceConcurrencyBondingConcurrencyErrorPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a1fb90; body size 57 bytes.
#line 1 "ENTRY_10a1fb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a1fb90(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCVoiceServiceConcurrencyBondingConcurrencyFatalErrorPage_vftable);
  param_1[4] = (uint)&Ext_SCVoiceServiceConcurrencyBondingConcurrencyFatalErrorPage_vftable;
  param_1[0x23] = (uint)&Ext_SCVoiceServiceConcurrencyBondingConcurrencyFatalErrorPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCVoiceServiceConcurrencyBondingConcurrencyFatalErrorPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a1fce0; body size 77 bytes.
#line 1 "ENTRY_10a1fce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a1fce0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCVoiceServiceConcurrencyBondingConfirmationPage_vftable);
  param_1[4] = (uint)&Ext_SCVoiceServiceConcurrencyBondingConfirmationPage_vftable;
  param_1[0x23] = (uint)&Ext_SCVoiceServiceConcurrencyBondingConfirmationPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCVoiceServiceConcurrencyBondingConfirmationPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a1fe40; body size 57 bytes.
#line 1 "ENTRY_10a1fe40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a1fe40(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCVoiceServiceConcurrencyConfirmationPage_vftable);
  param_1[4] = (uint)&Ext_SCVoiceServiceConcurrencyConfirmationPage_vftable;
  param_1[0x23] = (uint)&Ext_SCVoiceServiceConcurrencyConfirmationPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCVoiceServiceConcurrencyConfirmationPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a1ff90; body size 57 bytes.
#line 1 "ENTRY_10a1ff90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a1ff90(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCVoiceServiceConcurrencyFatalMissingErrorPage_vftable);
  param_1[4] = (uint)&Ext_SCVoiceServiceConcurrencyFatalMissingErrorPage_vftable;
  param_1[0x23] = (uint)&Ext_SCVoiceServiceConcurrencyFatalMissingErrorPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCVoiceServiceConcurrencyFatalMissingErrorPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a200e0; body size 57 bytes.
#line 1 "ENTRY_10a200e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a200e0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCVoiceServiceConcurrencyFatalRemoveErrorPage_vftable);
  param_1[4] = (uint)&Ext_SCVoiceServiceConcurrencyFatalRemoveErrorPage_vftable;
  param_1[0x23] = (uint)&Ext_SCVoiceServiceConcurrencyFatalRemoveErrorPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCVoiceServiceConcurrencyFatalRemoveErrorPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a20230; body size 64 bytes.
#line 1 "ENTRY_10a20230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a20230(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCVoiceServiceConcurrencyHTPrimaryGAPage_vftable);
  param_1[4] = (uint)&Ext_SCVoiceServiceConcurrencyHTPrimaryGAPage_vftable;
  param_1[0x23] = (uint)&Ext_SCVoiceServiceConcurrencyHTPrimaryGAPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCVoiceServiceConcurrencyHTPrimaryGAPage_vftable;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a20380; body size 64 bytes.
#line 1 "ENTRY_10a20380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a20380(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCVoiceServiceConcurrencyHTSurroundsGAPage_vftable);
  param_1[4] = (uint)&Ext_SCVoiceServiceConcurrencyHTSurroundsGAPage_vftable;
  param_1[0x23] = (uint)&Ext_SCVoiceServiceConcurrencyHTSurroundsGAPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCVoiceServiceConcurrencyHTSurroundsGAPage_vftable;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a206f0; body size 57 bytes.
#line 1 "ENTRY_10a206f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a206f0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCVoiceServiceConcurrencyMissingProductPage_vftable);
  param_1[4] = (uint)&Ext_SCVoiceServiceConcurrencyMissingProductPage_vftable;
  param_1[0x23] = (uint)&Ext_SCVoiceServiceConcurrencyMissingProductPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCVoiceServiceConcurrencyMissingProductPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a20840; body size 74 bytes.
#line 1 "ENTRY_10a20840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a20840(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCVoiceServiceConcurrencyRemoveErrorPage_vftable);
  param_1[4] = (uint)&Ext_SCVoiceServiceConcurrencyRemoveErrorPage_vftable;
  param_1[0x23] = (uint)&Ext_SCVoiceServiceConcurrencyRemoveErrorPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCVoiceServiceConcurrencyRemoveErrorPage_vftable;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a20ba0; body size 94 bytes.
#line 1 "ENTRY_10a20ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a20ba0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCVoiceServiceConcurrencyStereoGAPage_vftable);
  param_1[4] = (uint)&Ext_SCVoiceServiceConcurrencyStereoGAPage_vftable;
  param_1[0x23] = (uint)&Ext_SCVoiceServiceConcurrencyStereoGAPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCVoiceServiceConcurrencyStereoGAPage_vftable;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a21d30; body size 16 bytes.
#line 1 "ENTRY_10a21d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21d30(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  piVar2 = (int *)((int *)*param_1);
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar1 = (int)(*piVar2);
  if (iVar1 != 0) {
    uVar4 = (uint)(piVar2[2] - iVar1 & 0xfffffffc);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4);
    *piVar2 = (int)(0);
    piVar2[1] = 0;
    piVar2[2] = 0;
  }
  return;
}


// Reference entry 10a21d60; body size 38 bytes.
#line 1 "ENTRY_10a21d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21d60(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a21db0; body size 38 bytes.
#line 1 "ENTRY_10a21db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21db0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a21e00; body size 38 bytes.
#line 1 "ENTRY_10a21e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21e00(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a21e50; body size 38 bytes.
#line 1 "ENTRY_10a21e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21e50(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a21ea0; body size 38 bytes.
#line 1 "ENTRY_10a21ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21ea0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a21ef0; body size 38 bytes.
#line 1 "ENTRY_10a21ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21ef0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a21f40; body size 38 bytes.
#line 1 "ENTRY_10a21f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21f40(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a21f90; body size 38 bytes.
#line 1 "ENTRY_10a21f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21f90(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a220c0; body size 38 bytes.
#line 1 "ENTRY_10a220c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a220c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a22110; body size 38 bytes.
#line 1 "ENTRY_10a22110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a22110(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a22490; body size 60 bytes.
#line 1 "ENTRY_10a22490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a22490(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)(param_2)) {
    thunk_FUN_1036e270();
    *param_1 = (undefined4)(*param_2);
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a224e0; body size 132 bytes.
#line 1 "ENTRY_10a224e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __thiscall FUN_10a224e0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 != (int *)(param_2)) {
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
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10a22750; body size 21 bytes.
#line 1 "ENTRY_10a22750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __thiscall FUN_10a22750(int *param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 0x1c);
}


// Reference entry 10a22770; body size 12 bytes.
#line 1 "ENTRY_10a22770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __thiscall FUN_10a22770(int *param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 4);
}


// Reference entry 10a237c0; body size 137 bytes.
#line 1 "ENTRY_10a237c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a237c0(uint *param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x924924a) {
    param_2 = (uint)(param_2 * 0x1c);
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


// Reference entry 10a238a0; body size 3 bytes.
#line 1 "ENTRY_10a238a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a238a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a238b0; body size 3 bytes.
#line 1 "ENTRY_10a238b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a238b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a239b0; body size 6 bytes.
#line 1 "ENTRY_10a239b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a239b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10a239c0; body size 43 bytes.
#line 1 "ENTRY_10a239c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a239c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = (undefined4)(0);
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// Reference entry 10a23a00; body size 43 bytes.
#line 1 "ENTRY_10a23a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a23a00(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = (undefined4)(0);
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// Reference entry 10a23a40; body size 3 bytes.
#line 1 "ENTRY_10a23a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a23a40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a23a50; body size 4 bytes.
#line 1 "ENTRY_10a23a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a23a50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10a23a60; body size 97 bytes.
#line 1 "ENTRY_10a23a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10a23a60(uint param_1)

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


// Reference entry 10a25310; body size 20 bytes.
#line 1 "ENTRY_10a25310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __thiscall FUN_10a25310(int param_1,undefined4 param_2)

{
  thunk_FUN_1064d7a0(param_1 + 0x34);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_2);
}


// Reference entry 10a33e80; body size 7 bytes.
#line 1 "ENTRY_10a33e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a33e80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x11c));
}


// Reference entry 10a33e90; body size 4 bytes.
#line 1 "ENTRY_10a33e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a33e90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10a35ea0; body size 4 bytes.
#line 1 "ENTRY_10a35ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a35ea0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xc));
}


// Reference entry 10a35f00; body size 20 bytes.
#line 1 "ENTRY_10a35f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __thiscall FUN_10a35f00(int param_1,undefined4 param_2)

{
  thunk_FUN_10a1f920(param_1 + 0x10);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_2);
}


// Reference entry 10a3c6b0; body size 23 bytes.
#line 1 "ENTRY_10a3c6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __thiscall FUN_10a3c6b0(int param_1,undefined4 param_2)

{
  thunk_FUN_10a21a10(param_1 + 0x100);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_2);
}


// Reference entry 10a3c6d0; body size 6 bytes.
#line 1 "ENTRY_10a3c6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c6d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4374);
}


// Reference entry 10a3c6e0; body size 6 bytes.
#line 1 "ENTRY_10a3c6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c6e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4378);
}


// Reference entry 10a3c6f0; body size 6 bytes.
#line 1 "ENTRY_10a3c6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c6f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4360);
}


// Reference entry 10a3c700; body size 6 bytes.
#line 1 "ENTRY_10a3c700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c700(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a434c);
}


// Reference entry 10a3c710; body size 6 bytes.
#line 1 "ENTRY_10a3c710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c710(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a436c);
}


// Reference entry 10a3c720; body size 6 bytes.
#line 1 "ENTRY_10a3c720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c720(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4370);
}


// Reference entry 10a3c730; body size 6 bytes.
#line 1 "ENTRY_10a3c730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c730(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4354);
}


// Reference entry 10a3c740; body size 6 bytes.
#line 1 "ENTRY_10a3c740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c740(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4358);
}


// Reference entry 10a3c750; body size 6 bytes.
#line 1 "ENTRY_10a3c750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c750(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4348);
}


// Reference entry 10a3c760; body size 6 bytes.
#line 1 "ENTRY_10a3c760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c760(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4368);
}


// Reference entry 10a3c770; body size 6 bytes.
#line 1 "ENTRY_10a3c770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c770(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4364);
}


// Reference entry 10a3c780; body size 6 bytes.
#line 1 "ENTRY_10a3c780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c780(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4350);
}


// Reference entry 10a3c790; body size 6 bytes.
#line 1 "ENTRY_10a3c790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c790(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a435c);
}


// Reference entry 10a3c7a0; body size 6 bytes.
#line 1 "ENTRY_10a3c7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c7a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4344);
}


// Reference entry 10a3d040; body size 5 bytes.
#line 1 "ENTRY_10a3d040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a3d040(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a3d050; body size 5 bytes.
#line 1 "ENTRY_10a3d050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a3d050(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a3d060; body size 11 bytes.
#line 1 "ENTRY_10a3d060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10a3d060(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x11c) != 0);
}


// Reference entry 10a3f3b0; body size 36 bytes.
#line 1 "ENTRY_10a3f3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a3f3b0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10a1e530(puVar1,param_2);
  return;
}


// Reference entry 10a40720; body size 5 bytes.
#line 1 "ENTRY_10a40720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a40720(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a40730; body size 5 bytes.
#line 1 "ENTRY_10a40730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a40730(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a40750; body size 13 bytes.
#line 1 "ENTRY_10a40750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a40750(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x140) = param_2;
  return;
}


// Reference entry 10a40760; body size 11 bytes.
#line 1 "ENTRY_10a40760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a40760(int param_1,undefined4 *param_2)

{
  void *_Src;
  size_t _Size;
  undefined4 *puVar1;
  void *_Dst;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0x100));
  _Dst = (void *)(*(void **)(param_1 + 0x110));
  *(void **)(param_1 + 0x114) = _Dst;
  _Src = (void *)((void *)*param_2);
  _Size = (size_t)(param_2[1] - (int)_Src);
  if ((uint)(*(int *)(param_1 + 0x118) - (int)_Dst >> 2) < (uint)((int)_Size >> 2)) {
    thunk_FUN_10bd9ba0((int)_Size >> 2);
    _Dst = (void *)(*(void **)(param_1 + 0x110));
  }
  memmove(_Dst,_Src,_Size);
  *(size_t *)(param_1 + 0x114) = _Size + (int)_Dst;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined2 *)(param_1 + 0x121) = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  thunk_FUN_10352990(*puVar1,*(undefined4 *)(param_1 + 0x104),puVar1);
  *(undefined4 *)(param_1 + 0x104) = *puVar1;
  thunk_FUN_10be0520();
  return;
}


// Reference entry 10a40770; body size 9 bytes.
#line 1 "ENTRY_10a40770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a40770(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10a40820; body size 18 bytes.
#line 1 "ENTRY_10a40820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a40820(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = (undefined4)(param_3);
  param_1[1] = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a40d90; body size 5 bytes.
#line 1 "ENTRY_10a40d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a40d90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a40da0; body size 6 bytes.
#line 1 "ENTRY_10a40da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a40da0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a43cc);
}


// Reference entry 10a40db0; body size 6 bytes.
#line 1 "ENTRY_10a40db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a40db0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a43d0);
}


// Reference entry 10a40dd0; body size 5 bytes.
#line 1 "ENTRY_10a40dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a40dd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a40de0; body size 18 bytes.
#line 1 "ENTRY_10a40de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a40de0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = (undefined4)(param_3);
  param_1[1] = param_2;
  return;
}


// Reference entry 10a40e00; body size 57 bytes.
#line 1 "ENTRY_10a40e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a40e00(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a410b0; body size 87 bytes.
#line 1 "ENTRY_10a410b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a410b0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCVoiceServiceLocaleSelectionPage_vftable);
  param_1[4] = (uint)&Ext_SCVoiceServiceLocaleSelectionPage_vftable;
  param_1[0x23] = (uint)&Ext_SCVoiceServiceLocaleSelectionPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCVoiceServiceLocaleSelectionPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a41220; body size 57 bytes.
#line 1 "ENTRY_10a41220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a41220(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCVoiceServiceLocaleUnsupportedPage_vftable);
  param_1[4] = (uint)&Ext_SCVoiceServiceLocaleUnsupportedPage_vftable;
  param_1[0x23] = (uint)&Ext_SCVoiceServiceLocaleUnsupportedPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCVoiceServiceLocaleUnsupportedPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a416b0; body size 38 bytes.
#line 1 "ENTRY_10a416b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a416b0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a416e0; body size 11 bytes.
#line 1 "ENTRY_10a416e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a416e0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a416f0; body size 11 bytes.
#line 1 "ENTRY_10a416f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a416f0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a41750; body size 21 bytes.
#line 1 "ENTRY_10a41750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a41750(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a43cc = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a41770; body size 38 bytes.
#line 1 "ENTRY_10a41770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a41770(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a417a0; body size 21 bytes.
#line 1 "ENTRY_10a417a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a417a0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a43d0 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a41ca0; body size 49 bytes.
#line 1 "ENTRY_10a41ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __thiscall FUN_10a41ca0(int *param_1,uint param_2)

{
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


// Reference entry 10a41d70; body size 3 bytes.
#line 1 "ENTRY_10a41d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a41d70(void)

{
  return;
}


// Reference entry 10a41e50; body size 24 bytes.
#line 1 "ENTRY_10a41e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall
FUN_10a41e50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_103316a0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10a41e70; body size 24 bytes.
#line 1 "ENTRY_10a41e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall
FUN_10a41e70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_103316a0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10a41e90; body size 3 bytes.
#line 1 "ENTRY_10a41e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a41e90(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a41ea0; body size 4 bytes.
#line 1 "ENTRY_10a41ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a41ea0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10a41eb0; body size 9 bytes.
#line 1 "ENTRY_10a41eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a41eb0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10a43be0; body size 6 bytes.
#line 1 "ENTRY_10a43be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a43be0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a43cc);
}


// Reference entry 10a43bf0; body size 6 bytes.
#line 1 "ENTRY_10a43bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a43bf0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a43d0);
}


// Reference entry 10a43c00; body size 6 bytes.
#line 1 "ENTRY_10a43c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a43c00(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a43c8);
}


// Reference entry 10a43c20; body size 5 bytes.
#line 1 "ENTRY_10a43c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a43c20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a43c30; body size 5 bytes.
#line 1 "ENTRY_10a43c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a43c30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a445e0; body size 6 bytes.
#line 1 "ENTRY_10a445e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a445e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4414);
}


// Reference entry 10a445f0; body size 6 bytes.
#line 1 "ENTRY_10a445f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a445f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4418);
}


// Reference entry 10a44610; body size 57 bytes.
#line 1 "ENTRY_10a44610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a44610(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a44840; body size 57 bytes.
#line 1 "ENTRY_10a44840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a44840(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCWacConnectIntroPage_vftable);
  param_1[4] = (uint)&Ext_SCWacConnectIntroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCWacConnectIntroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCWacConnectIntroPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a44990; body size 57 bytes.
#line 1 "ENTRY_10a44990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a44990(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCWacConnectScanningPage_vftable);
  param_1[4] = (uint)&Ext_SCWacConnectScanningPage_vftable;
  param_1[0x23] = (uint)&Ext_SCWacConnectScanningPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCWacConnectScanningPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a44e50; body size 38 bytes.
#line 1 "ENTRY_10a44e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a44e50(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a44e80; body size 11 bytes.
#line 1 "ENTRY_10a44e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a44e80(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a44e90; body size 11 bytes.
#line 1 "ENTRY_10a44e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a44e90(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a44ec0; body size 38 bytes.
#line 1 "ENTRY_10a44ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a44ec0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a44ef0; body size 21 bytes.
#line 1 "ENTRY_10a44ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a44ef0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4414 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a44f10; body size 38 bytes.
#line 1 "ENTRY_10a44f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a44f10(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a44f40; body size 21 bytes.
#line 1 "ENTRY_10a44f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a44f40(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4418 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a487c0; body size 6 bytes.
#line 1 "ENTRY_10a487c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a487c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4414);
}


// Reference entry 10a487d0; body size 6 bytes.
#line 1 "ENTRY_10a487d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a487d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4418);
}


// Reference entry 10a487e0; body size 6 bytes.
#line 1 "ENTRY_10a487e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a487e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a441c);
}


// Reference entry 10a48800; body size 5 bytes.
#line 1 "ENTRY_10a48800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a48800(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a48810; body size 5 bytes.
#line 1 "ENTRY_10a48810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a48810(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a48d50; body size 6 bytes.
#line 1 "ENTRY_10a48d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a48d50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a446c);
}


// Reference entry 10a48d60; body size 6 bytes.
#line 1 "ENTRY_10a48d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a48d60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4468);
}


// Reference entry 10a48d80; body size 57 bytes.
#line 1 "ENTRY_10a48d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a48d80(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a48fb0; body size 57 bytes.
#line 1 "ENTRY_10a48fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a48fb0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCWiredConnectFindProductPage_vftable);
  param_1[4] = (uint)&Ext_SCWiredConnectFindProductPage_vftable;
  param_1[0x23] = (uint)&Ext_SCWiredConnectFindProductPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCWiredConnectFindProductPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a49100; body size 57 bytes.
#line 1 "ENTRY_10a49100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a49100(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCWiredConnectIntroPage_vftable);
  param_1[4] = (uint)&Ext_SCWiredConnectIntroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCWiredConnectIntroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCWiredConnectIntroPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a495c0; body size 38 bytes.
#line 1 "ENTRY_10a495c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a495c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a495f0; body size 11 bytes.
#line 1 "ENTRY_10a495f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a495f0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a49600; body size 11 bytes.
#line 1 "ENTRY_10a49600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a49600(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a49610; body size 38 bytes.
#line 1 "ENTRY_10a49610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a49610(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a49640; body size 21 bytes.
#line 1 "ENTRY_10a49640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a49640(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a446c = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a49660; body size 38 bytes.
#line 1 "ENTRY_10a49660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a49660(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a49690; body size 21 bytes.
#line 1 "ENTRY_10a49690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a49690(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4468 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a4c370; body size 6 bytes.
#line 1 "ENTRY_10a4c370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4c370(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a446c);
}


// Reference entry 10a4c380; body size 6 bytes.
#line 1 "ENTRY_10a4c380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4c380(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4468);
}


// Reference entry 10a4c390; body size 6 bytes.
#line 1 "ENTRY_10a4c390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4c390(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4470);
}


// Reference entry 10a4c3b0; body size 5 bytes.
#line 1 "ENTRY_10a4c3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a4c3b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a4c3c0; body size 5 bytes.
#line 1 "ENTRY_10a4c3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a4c3c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a4c770; body size 25 bytes.
#line 1 "ENTRY_10a4c770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4c770(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4c790; body size 25 bytes.
#line 1 "ENTRY_10a4c790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4c790(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4c7b0; body size 25 bytes.
#line 1 "ENTRY_10a4c7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4c7b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4c7d0; body size 25 bytes.
#line 1 "ENTRY_10a4c7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4c7d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4c7f0; body size 25 bytes.
#line 1 "ENTRY_10a4c7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4c7f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4c810; body size 25 bytes.
#line 1 "ENTRY_10a4c810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4c810(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4c830; body size 19 bytes.
#line 1 "ENTRY_10a4c830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte FUN_10a4c830(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = (byte)(thunk_FUN_10405e20(param_1,param_2));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte)(bVar1 ^ 1);
}


// Reference entry 10a4c850; body size 3 bytes.
#line 1 "ENTRY_10a4c850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a4c850(void)

{
  return;
}


// Reference entry 10a4c860; body size 203 bytes.
#line 1 "ENTRY_10a4c860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a4c860(int *param_1,void *param_2,int param_3)

{
  void *_Dst;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  
  _Size = (size_t)(param_3 - (int)param_2);
  uVar2 = (uint)((int)_Size >> 2);
  _Dst = (void *)((void *)*param_1);
  uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
  if (uVar1 < uVar2) {
    if (0x3fffffff < uVar2) {
                    
      thunk_FUN_10a54480();
    }
    if (0x3fffffff - (uVar1 >> 1) < uVar1) {
      uVar3 = (uint)(0x3fffffff);
    }
    else {
      uVar3 = (uint)((uVar1 >> 1) + uVar1);
      if (uVar3 < uVar2) {
        uVar3 = (uint)(uVar2);
      }
    }
    if (_Dst != (void *)0x0) {
      uVar1 = (uint)(uVar1 * 4);
      pvVar4 = (void *)(_Dst);
      if (0xfff < uVar1) {
        pvVar4 = (void *)(*(void **)((int)_Dst + -4));
        uVar1 = (uint)(uVar1 + 0x23);
        if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar4))) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(pvVar4,uVar1);
      *param_1 = (int)(0);
      param_1[1] = 0;
      param_1[2] = 0;
    }
    _Dst = (void *)((void *)thunk_FUN_10a54750(uVar3));
    *param_1 = (int)((int)_Dst);
    param_1[1] = (int)_Dst;
    param_1[2] = (int)((int)_Dst + uVar3 * 4);
  }
  memmove(_Dst,param_2,_Size);
  param_1[1] = _Size + (int)_Dst;
  return;
}


// Reference entry 10a4c960; body size 33 bytes.
#line 1 "ENTRY_10a4c960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10a4c960(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10a4c990; body size 3 bytes.
#line 1 "ENTRY_10a4c990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a4c990(void)

{
  return;
}


// Reference entry 10a4cba0; body size 18 bytes.
#line 1 "ENTRY_10a4cba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a4cba0(int param_1,undefined4 *param_2)

{
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10a4d170; body size 7 bytes.
#line 1 "ENTRY_10a4d170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d170(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a4d180; body size 7 bytes.
#line 1 "ENTRY_10a4d180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d180(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a4d190; body size 7 bytes.
#line 1 "ENTRY_10a4d190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d190(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a4d1a0; body size 7 bytes.
#line 1 "ENTRY_10a4d1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d1a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a4d1b0; body size 92 bytes.
#line 1 "ENTRY_10a4d1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10a4d1b0(int *param_1,int *param_2,int *param_3)

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


// Reference entry 10a4d230; body size 92 bytes.
#line 1 "ENTRY_10a4d230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10a4d230(int *param_1,int *param_2,int *param_3)

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


// Reference entry 10a4d2b0; body size 3 bytes.
#line 1 "ENTRY_10a4d2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a4d2b0(void)

{
  return;
}


// Reference entry 10a4d2c0; body size 3 bytes.
#line 1 "ENTRY_10a4d2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a4d2c0(void)

{
  return;
}


// Reference entry 10a4d2d0; body size 5 bytes.
#line 1 "ENTRY_10a4d2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d2d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4d2e0; body size 38 bytes.
#line 1 "ENTRY_10a4d2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10a4d2e0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10a4d310; body size 24 bytes.
#line 1 "ENTRY_10a4d310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall
FUN_10a4d310(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_10a4d3b0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10a4d330; body size 24 bytes.
#line 1 "ENTRY_10a4d330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall
FUN_10a4d330(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_10a4d450(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10a4d350; body size 5 bytes.
#line 1 "ENTRY_10a4d350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d350(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4d360; body size 5 bytes.
#line 1 "ENTRY_10a4d360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d360(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4d370; body size 5 bytes.
#line 1 "ENTRY_10a4d370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d370(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4d380; body size 36 bytes.
#line 1 "ENTRY_10a4d380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10a4d380(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10a4d4f0; body size 36 bytes.
#line 1 "ENTRY_10a4d4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10a4d4f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10a4d660; body size 5 bytes.
#line 1 "ENTRY_10a4d660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d660(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4d670; body size 5 bytes.
#line 1 "ENTRY_10a4d670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d670(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4d680; body size 5 bytes.
#line 1 "ENTRY_10a4d680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d680(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4d690; body size 5 bytes.
#line 1 "ENTRY_10a4d690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d690(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4d6a0; body size 203 bytes.
#line 1 "ENTRY_10a4d6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a4d6a0(int *param_1,void *param_2,int param_3)

{
  void *_Dst;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  
  _Size = (size_t)(param_3 - (int)param_2);
  uVar2 = (uint)((int)_Size >> 2);
  _Dst = (void *)((void *)*param_1);
  uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
  if (uVar1 < uVar2) {
    if (0x3fffffff < uVar2) {
                    
      thunk_FUN_10a54480();
    }
    if (0x3fffffff - (uVar1 >> 1) < uVar1) {
      uVar3 = (uint)(0x3fffffff);
    }
    else {
      uVar3 = (uint)((uVar1 >> 1) + uVar1);
      if (uVar3 < uVar2) {
        uVar3 = (uint)(uVar2);
      }
    }
    if (_Dst != (void *)0x0) {
      uVar1 = (uint)(uVar1 * 4);
      pvVar4 = (void *)(_Dst);
      if (0xfff < uVar1) {
        pvVar4 = (void *)(*(void **)((int)_Dst + -4));
        uVar1 = (uint)(uVar1 + 0x23);
        if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar4))) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(pvVar4,uVar1);
      *param_1 = (int)(0);
      param_1[1] = 0;
      param_1[2] = 0;
    }
    _Dst = (void *)((void *)thunk_FUN_10a54750(uVar3));
    *param_1 = (int)((int)_Dst);
    param_1[1] = (int)_Dst;
    param_1[2] = (int)((int)_Dst + uVar3 * 4);
  }
  memmove(_Dst,param_2,_Size);
  param_1[1] = _Size + (int)_Dst;
  return;
}


// Reference entry 10a4d7a0; body size 13 bytes.
#line 1 "ENTRY_10a4d7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a4d7a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10a4d9b0; body size 12 bytes.
#line 1 "ENTRY_10a4d9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10a4d9b0(int param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 - param_1 >> 2);
}


// Reference entry 10a4d9c0; body size 36 bytes.
#line 1 "ENTRY_10a4d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a4d9c0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10a4cc20(puVar1,param_2);
  return;
}


// Reference entry 10a4da90; body size 5 bytes.
#line 1 "ENTRY_10a4da90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4da90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4daa0; body size 5 bytes.
#line 1 "ENTRY_10a4daa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4daa0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4dab0; body size 5 bytes.
#line 1 "ENTRY_10a4dab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dab0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4dac0; body size 5 bytes.
#line 1 "ENTRY_10a4dac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dac0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4dad0; body size 5 bytes.
#line 1 "ENTRY_10a4dad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dad0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4dae0; body size 5 bytes.
#line 1 "ENTRY_10a4dae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dae0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4daf0; body size 5 bytes.
#line 1 "ENTRY_10a4daf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4daf0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4db00; body size 5 bytes.
#line 1 "ENTRY_10a4db00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4db10; body size 5 bytes.
#line 1 "ENTRY_10a4db10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4db20; body size 5 bytes.
#line 1 "ENTRY_10a4db20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4db30; body size 6 bytes.
#line 1 "ENTRY_10a4db30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db30(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44c8);
}


// Reference entry 10a4db40; body size 6 bytes.
#line 1 "ENTRY_10a4db40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44c0);
}


// Reference entry 10a4db50; body size 6 bytes.
#line 1 "ENTRY_10a4db50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44dc);
}


// Reference entry 10a4db60; body size 6 bytes.
#line 1 "ENTRY_10a4db60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44d8);
}


// Reference entry 10a4db70; body size 6 bytes.
#line 1 "ENTRY_10a4db70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44d4);
}


// Reference entry 10a4db80; body size 6 bytes.
#line 1 "ENTRY_10a4db80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44e4);
}


// Reference entry 10a4db90; body size 6 bytes.
#line 1 "ENTRY_10a4db90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44e8);
}


// Reference entry 10a4dba0; body size 6 bytes.
#line 1 "ENTRY_10a4dba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dba0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44b8);
}


// Reference entry 10a4dbb0; body size 6 bytes.
#line 1 "ENTRY_10a4dbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dbb0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44bc);
}


// Reference entry 10a4dbc0; body size 6 bytes.
#line 1 "ENTRY_10a4dbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dbc0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44c4);
}


// Reference entry 10a4dbd0; body size 6 bytes.
#line 1 "ENTRY_10a4dbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dbd0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44cc);
}


// Reference entry 10a4dbe0; body size 6 bytes.
#line 1 "ENTRY_10a4dbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dbe0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44d0);
}


// Reference entry 10a4dbf0; body size 6 bytes.
#line 1 "ENTRY_10a4dbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dbf0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44e0);
}


// Reference entry 10a4dc10; body size 5 bytes.
#line 1 "ENTRY_10a4dc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dc10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4dc20; body size 5 bytes.
#line 1 "ENTRY_10a4dc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dc20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4dc30; body size 5 bytes.
#line 1 "ENTRY_10a4dc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dc30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4dc40; body size 57 bytes.
#line 1 "ENTRY_10a4dc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a4dc40(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4e8c0; body size 16 bytes.
#line 1 "ENTRY_10a4e8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4e8c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4e910; body size 16 bytes.
#line 1 "ENTRY_10a4e910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4e910(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4e960; body size 16 bytes.
#line 1 "ENTRY_10a4e960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4e960(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4ecb0; body size 21 bytes.
#line 1 "ENTRY_10a4ecb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a4ecb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4ecd0; body size 21 bytes.
#line 1 "ENTRY_10a4ecd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a4ecd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4ecf0; body size 11 bytes.
#line 1 "ENTRY_10a4ecf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a4ecf0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4ed00; body size 11 bytes.
#line 1 "ENTRY_10a4ed00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a4ed00(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4ed10; body size 11 bytes.
#line 1 "ENTRY_10a4ed10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a4ed10(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4ed20; body size 11 bytes.
#line 1 "ENTRY_10a4ed20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a4ed20(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4ed30; body size 23 bytes.
#line 1 "ENTRY_10a4ed30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4ed30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4ed50; body size 23 bytes.
#line 1 "ENTRY_10a4ed50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4ed50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4ed70; body size 23 bytes.
#line 1 "ENTRY_10a4ed70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4ed70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4ed90; body size 3 bytes.
#line 1 "ENTRY_10a4ed90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a4ed90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4eda0; body size 3 bytes.
#line 1 "ENTRY_10a4eda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a4eda0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4edb0; body size 3 bytes.
#line 1 "ENTRY_10a4edb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a4edb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a4ee40; body size 23 bytes.
#line 1 "ENTRY_10a4ee40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4ee40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4ef20; body size 23 bytes.
#line 1 "ENTRY_10a4ef20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4ef20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4f000; body size 23 bytes.
#line 1 "ENTRY_10a4f000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4f000(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4f440; body size 57 bytes.
#line 1 "ENTRY_10a4f440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a4f440(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccountSecureTransferBeginSystemTransferErrorPage_vftable);
  param_1[4] = (uint)&Ext_SCAccountSecureTransferBeginSystemTransferErrorPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccountSecureTransferBeginSystemTransferErrorPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccountSecureTransferBeginSystemTransferErrorPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4f590; body size 154 bytes.
#line 1 "ENTRY_10a4f590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a4f590(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  param_1[0x38] = (uint)&Ext_SCIOpCBDelegate_vftable;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *param_1 = (undefined4)((uint)&Ext_SCAccountSecureTransferBeginSystemTransferPage_vftable);
  param_1[4] = (uint)&Ext_SCAccountSecureTransferBeginSystemTransferPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccountSecureTransferBeginSystemTransferPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccountSecureTransferBeginSystemTransferPage_vftable;
  param_1[0x38] = (uint)&Ext_SCAccountSecureTransferBeginSystemTransferPage_vftable;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4f750; body size 137 bytes.
#line 1 "ENTRY_10a4f750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a4f750(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  param_1[0x38] = (uint)&Ext_SCIOpCBDelegate_vftable;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *param_1 = (undefined4)((uint)&Ext_SCAccountSecureTransferButtonPressAuthPage_vftable);
  param_1[4] = (uint)&Ext_SCAccountSecureTransferButtonPressAuthPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccountSecureTransferButtonPressAuthPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccountSecureTransferButtonPressAuthPage_vftable;
  param_1[0x38] = (uint)&Ext_SCAccountSecureTransferButtonPressAuthPage_vftable;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4f900; body size 57 bytes.
#line 1 "ENTRY_10a4f900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a4f900(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccountSecureTransferCompletePage_vftable);
  param_1[4] = (uint)&Ext_SCAccountSecureTransferCompletePage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccountSecureTransferCompletePage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccountSecureTransferCompletePage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4fa50; body size 57 bytes.
#line 1 "ENTRY_10a4fa50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a4fa50(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccountSecureTransferIncompletePage_vftable);
  param_1[4] = (uint)&Ext_SCAccountSecureTransferIncompletePage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccountSecureTransferIncompletePage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccountSecureTransferIncompletePage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4fba0; body size 57 bytes.
#line 1 "ENTRY_10a4fba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a4fba0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccountSecureTransferIntroPage_vftable);
  param_1[4] = (uint)&Ext_SCAccountSecureTransferIntroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccountSecureTransferIntroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccountSecureTransferIntroPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4fcf0; body size 57 bytes.
#line 1 "ENTRY_10a4fcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a4fcf0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccountSecureTransferNetworkErrorPage_vftable);
  param_1[4] = (uint)&Ext_SCAccountSecureTransferNetworkErrorPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccountSecureTransferNetworkErrorPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccountSecureTransferNetworkErrorPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4fe40; body size 57 bytes.
#line 1 "ENTRY_10a4fe40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a4fe40(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccountSecureTransferNewAccountReadyPage_vftable);
  param_1[4] = (uint)&Ext_SCAccountSecureTransferNewAccountReadyPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccountSecureTransferNewAccountReadyPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccountSecureTransferNewAccountReadyPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a4ff90; body size 114 bytes.
#line 1 "ENTRY_10a4ff90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a4ff90(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccountSecureTransferPrepareSystemPage_vftable);
  param_1[4] = (uint)&Ext_SCAccountSecureTransferPrepareSystemPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccountSecureTransferPrepareSystemPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccountSecureTransferPrepareSystemPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a50120; body size 87 bytes.
#line 1 "ENTRY_10a50120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a50120(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccountSecureTransferProductSelectionPage_vftable);
  param_1[4] = (uint)&Ext_SCAccountSecureTransferProductSelectionPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccountSecureTransferProductSelectionPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccountSecureTransferProductSelectionPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a511a0; body size 38 bytes.
#line 1 "ENTRY_10a511a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a511a0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a51240; body size 11 bytes.
#line 1 "ENTRY_10a51240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51240(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a51380; body size 38 bytes.
#line 1 "ENTRY_10a51380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51380(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10a513b0; body size 38 bytes.
#line 1 "ENTRY_10a513b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a513b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10a513e0; body size 38 bytes.
#line 1 "ENTRY_10a513e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a513e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10a51410; body size 16 bytes.
#line 1 "ENTRY_10a51410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51410(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar2 = (int)(*piVar1);
  if (iVar2 != 0) {
    uVar4 = (uint)(piVar1[2] - iVar2 & 0xfffffffc);
    iVar3 = (int)(iVar2);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar2 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar2 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4);
    *piVar1 = (int)(0);
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  return;
}


// Reference entry 10a51510; body size 38 bytes.
#line 1 "ENTRY_10a51510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51510(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10a51560; body size 38 bytes.
#line 1 "ENTRY_10a51560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51560(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10a515b0; body size 38 bytes.
#line 1 "ENTRY_10a515b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a515b0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a517e0; body size 38 bytes.
#line 1 "ENTRY_10a517e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a517e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a51830; body size 38 bytes.
#line 1 "ENTRY_10a51830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51830(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a51880; body size 38 bytes.
#line 1 "ENTRY_10a51880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51880(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a518b0; body size 21 bytes.
#line 1 "ENTRY_10a518b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a518b0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a44b8 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a518d0; body size 38 bytes.
#line 1 "ENTRY_10a518d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a518d0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a51920; body size 38 bytes.
#line 1 "ENTRY_10a51920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51920(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a51ba0; body size 38 bytes.
#line 1 "ENTRY_10a51ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10a51ed0; body size 65 bytes.
#line 1 "ENTRY_10a51ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __thiscall FUN_10a51ed0(int *param_1,int *param_2)

{
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


// Reference entry 10a51fa0; body size 65 bytes.
#line 1 "ENTRY_10a51fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __thiscall FUN_10a51fa0(int *param_1,int *param_2)

{
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


// Reference entry 10a52070; body size 132 bytes.
#line 1 "ENTRY_10a52070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __thiscall FUN_10a52070(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 != (int *)(param_2)) {
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
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10a52120; body size 218 bytes.
#line 1 "ENTRY_10a52120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __thiscall FUN_10a52120(int *param_1,int *param_2)

{
  void *_Src;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  
  if (param_1 != (int *)(param_2)) {
    _Src = (void *)((void *)*param_2);
    _Size = (size_t)(param_2[1] - (int)_Src);
    _Dst = (void *)((void *)*param_1);
    uVar2 = (uint)((int)_Size >> 2);
    uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
    if (uVar1 < uVar2) {
      if (0x3fffffff < uVar2) {
                    
        thunk_FUN_10a54480();
      }
      if (0x3fffffff - (uVar1 >> 1) < uVar1) {
        uVar3 = (uint)(0x3fffffff);
      }
      else {
        uVar3 = (uint)((uVar1 >> 1) + uVar1);
        if (uVar3 < uVar2) {
          uVar3 = (uint)(uVar2);
        }
      }
      if (_Dst != (void *)0x0) {
        uVar1 = (uint)(uVar1 * 4);
        pvVar4 = (void *)(_Dst);
        if (0xfff < uVar1) {
          pvVar4 = (void *)(*(void **)((int)_Dst + -4));
          uVar1 = (uint)(uVar1 + 0x23);
          if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar4))) {
                    
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1148a50e(pvVar4,uVar1);
        *param_1 = (int)(0);
        param_1[1] = 0;
        param_1[2] = 0;
      }
      _Dst = (void *)((void *)thunk_FUN_10a54750(uVar3));
      *param_1 = (int)((int)_Dst);
      param_1[1] = (int)_Dst;
      param_1[2] = (int)((int)_Dst + uVar3 * 4);
    }
    memmove(_Dst,_Src,_Size);
    param_1[1] = _Size + (int)_Dst;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10a52280; body size 14 bytes.
#line 1 "ENTRY_10a52280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __thiscall FUN_10a52280(int *param_1,int *param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10a522a0; body size 14 bytes.
#line 1 "ENTRY_10a522a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __thiscall FUN_10a522a0(int *param_1,int *param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10a522c0; body size 12 bytes.
#line 1 "ENTRY_10a522c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __thiscall FUN_10a522c0(int *param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 4);
}


// Reference entry 10a522d0; body size 12 bytes.
#line 1 "ENTRY_10a522d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __thiscall FUN_10a522d0(int *param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 4);
}


// Reference entry 10a522e0; body size 3 bytes.
#line 1 "ENTRY_10a522e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a522e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a522f0; body size 3 bytes.
#line 1 "ENTRY_10a522f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a522f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a52300; body size 3 bytes.
#line 1 "ENTRY_10a52300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a52300(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a52310; body size 3 bytes.
#line 1 "ENTRY_10a52310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a52310(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a52320; body size 3 bytes.
#line 1 "ENTRY_10a52320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a52320(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a52330; body size 3 bytes.
#line 1 "ENTRY_10a52330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a52330(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a52340; body size 3 bytes.
#line 1 "ENTRY_10a52340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a52340(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a52350; body size 6 bytes.
#line 1 "ENTRY_10a52350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10a52350(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10a52360; body size 6 bytes.
#line 1 "ENTRY_10a52360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10a52360(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10a52370; body size 16 bytes.
#line 1 "ENTRY_10a52370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a52370(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 8);
  return;
}


// Reference entry 10a52390; body size 6 bytes.
#line 1 "ENTRY_10a52390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10a52390(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10a523a0; body size 16 bytes.
#line 1 "ENTRY_10a523a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a523a0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 8);
  return;
}


// Reference entry 10a523c0; body size 6 bytes.
#line 1 "ENTRY_10a523c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10a523c0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10a53960; body size 30 bytes.
#line 1 "ENTRY_10a53960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a53960(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10a54750(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = iVar1;
  param_1[2] = iVar1 + param_2 * 4;
  return;
}


// Reference entry 10a53990; body size 30 bytes.
#line 1 "ENTRY_10a53990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a53990(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10a547c0(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = iVar1;
  param_1[2] = iVar1 + param_2 * 8;
  return;
}


// Reference entry 10a539c0; body size 30 bytes.
#line 1 "ENTRY_10a539c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a539c0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10a54830(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = iVar1;
  param_1[2] = iVar1 + param_2 * 8;
  return;
}


// Reference entry 10a539f0; body size 49 bytes.
#line 1 "ENTRY_10a539f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __thiscall FUN_10a539f0(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 2);
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x3fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10a53a30; body size 49 bytes.
#line 1 "ENTRY_10a53a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __thiscall FUN_10a53a30(int *param_1,uint param_2)

{
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


// Reference entry 10a53a70; body size 49 bytes.
#line 1 "ENTRY_10a53a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __thiscall FUN_10a53a70(int *param_1,uint param_2)

{
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


// Reference entry 10a53c40; body size 159 bytes.
#line 1 "ENTRY_10a53c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a53c40(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_2) {
                    
    thunk_FUN_10a54480();
  }
  iVar1 = (int)(*param_1);
  uVar3 = (uint)(param_1[2] - iVar1 >> 2);
  if (0x3fffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = (uint)(0x3fffffff);
  }
  else {
    uVar4 = (uint)((uVar3 >> 1) + uVar3);
    if (uVar4 < param_2) {
      uVar4 = (uint)(param_2);
    }
  }
  if (iVar1 != 0) {
    uVar3 = (uint)(uVar3 * 4);
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
  iVar1 = (int)(thunk_FUN_10a54750(uVar4));
  *param_1 = (int)(iVar1);
  param_1[1] = iVar1;
  param_1[2] = iVar1 + uVar4 * 4;
  return;
}


// Reference entry 10a53d10; body size 3 bytes.
#line 1 "ENTRY_10a53d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a53d10(void)

{
  return;
}


// Reference entry 10a53d20; body size 3 bytes.
#line 1 "ENTRY_10a53d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a53d20(void)

{
  return;
}


// Reference entry 10a53d30; body size 208 bytes.
#line 1 "ENTRY_10a53d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a53d30(int *param_1,undefined4 *param_2)

{
  void *_Src;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  size_t _Size;
  void *pvVar4;
  
  _Src = (void *)((void *)*param_2);
  _Size = (size_t)(param_2[1] - (int)_Src);
  uVar2 = (uint)((int)_Size >> 2);
  _Dst = (void *)((void *)*param_1);
  uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
  if (uVar1 < uVar2) {
    if (0x3fffffff < uVar2) {
                    
      thunk_FUN_10a54480();
    }
    if (0x3fffffff - (uVar1 >> 1) < uVar1) {
      uVar3 = (uint)(0x3fffffff);
    }
    else {
      uVar3 = (uint)((uVar1 >> 1) + uVar1);
      if (uVar3 < uVar2) {
        uVar3 = (uint)(uVar2);
      }
    }
    if (_Dst != (void *)0x0) {
      uVar1 = (uint)(uVar1 * 4);
      pvVar4 = (void *)(_Dst);
      if (0xfff < uVar1) {
        pvVar4 = (void *)(*(void **)((int)_Dst + -4));
        uVar1 = (uint)(uVar1 + 0x23);
        if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar4))) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(pvVar4,uVar1);
      *param_1 = (int)(0);
      param_1[1] = 0;
      param_1[2] = 0;
    }
    _Dst = (void *)((void *)thunk_FUN_10a54750(uVar3));
    *param_1 = (int)((int)_Dst);
    param_1[1] = (int)_Dst;
    param_1[2] = (int)((int)_Dst + uVar3 * 4);
  }
  memmove(_Dst,_Src,_Size);
  param_1[1] = (int)_Dst + _Size;
  return;
}


// Reference entry 10a53e40; body size 3 bytes.
#line 1 "ENTRY_10a53e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a53e40(void)

{
  return;
}


// Reference entry 10a53e90; body size 3 bytes.
#line 1 "ENTRY_10a53e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53e90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a53ea0; body size 3 bytes.
#line 1 "ENTRY_10a53ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53ea0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a53eb0; body size 3 bytes.
#line 1 "ENTRY_10a53eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53eb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a53ec0; body size 3 bytes.
#line 1 "ENTRY_10a53ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53ec0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a53ed0; body size 3 bytes.
#line 1 "ENTRY_10a53ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53ed0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a53ee0; body size 3 bytes.
#line 1 "ENTRY_10a53ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53ee0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a53ef0; body size 3 bytes.
#line 1 "ENTRY_10a53ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53ef0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a53f00; body size 3 bytes.
#line 1 "ENTRY_10a53f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53f00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a53f10; body size 3 bytes.
#line 1 "ENTRY_10a53f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53f10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a53f20; body size 3 bytes.
#line 1 "ENTRY_10a53f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53f20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a53f30; body size 3 bytes.
#line 1 "ENTRY_10a53f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53f30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a53f40; body size 3 bytes.
#line 1 "ENTRY_10a53f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53f40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a53ff0; body size 3 bytes.
#line 1 "ENTRY_10a53ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a53ff0(void)

{
  return;
}


// Reference entry 10a54000; body size 3 bytes.
#line 1 "ENTRY_10a54000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a54000(void)

{
  return;
}


// Reference entry 10a54010; body size 3 bytes.
#line 1 "ENTRY_10a54010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a54010(void)

{
  return;
}


// Reference entry 10a54020; body size 6 bytes.
#line 1 "ENTRY_10a54020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a54020(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10a54030; body size 6 bytes.
#line 1 "ENTRY_10a54030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a54030(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10a54040; body size 43 bytes.
#line 1 "ENTRY_10a54040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a54040(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = (undefined4)(0);
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// Reference entry 10a541f0; body size 38 bytes.
#line 1 "ENTRY_10a541f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10a541f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10a54360; body size 27 bytes.
#line 1 "ENTRY_10a54360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a54360(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10a54390; body size 24 bytes.
#line 1 "ENTRY_10a54390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall
FUN_10a54390(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_10a4d3b0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10a543b0; body size 24 bytes.
#line 1 "ENTRY_10a543b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall
FUN_10a543b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_10a4d450(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10a543d0; body size 27 bytes.
#line 1 "ENTRY_10a543d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10a543d0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10a54400; body size 24 bytes.
#line 1 "ENTRY_10a54400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall
FUN_10a54400(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_10a4d3b0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10a54420; body size 24 bytes.
#line 1 "ENTRY_10a54420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall
FUN_10a54420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_10a4d450(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10a54440; body size 3 bytes.
#line 1 "ENTRY_10a54440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a54440(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a54450; body size 3 bytes.
#line 1 "ENTRY_10a54450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a54450(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a54460; body size 4 bytes.
#line 1 "ENTRY_10a54460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a54460(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10a54470; body size 4 bytes.
#line 1 "ENTRY_10a54470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a54470(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10a548a0; body size 11 bytes.
#line 1 "ENTRY_10a548a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a548a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10a548b0; body size 11 bytes.
#line 1 "ENTRY_10a548b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a548b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10a54980; body size 9 bytes.
#line 1 "ENTRY_10a54980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a54980(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10a54990; body size 9 bytes.
#line 1 "ENTRY_10a54990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a54990(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10a549a0; body size 9 bytes.
#line 1 "ENTRY_10a549a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a549a0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10a55fd0; body size 61 bytes.
#line 1 "ENTRY_10a55fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10a55fd0(int param_1,int param_2)

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


// Reference entry 10a560e0; body size 12 bytes.
#line 1 "ENTRY_10a560e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a560e0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10a560f0; body size 12 bytes.
#line 1 "ENTRY_10a560f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a560f0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10a5c890; body size 23 bytes.
#line 1 "ENTRY_10a5c890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __thiscall FUN_10a5c890(int param_1,undefined4 param_2)

{
  thunk_FUN_10a4edc0(param_1 + 0xf4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_2);
}


// Reference entry 10a5c8b0; body size 28 bytes.
#line 1 "ENTRY_10a5c8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __thiscall FUN_10a5c8b0(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x118));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10a5d770; body size 23 bytes.
#line 1 "ENTRY_10a5d770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __thiscall FUN_10a5d770(int param_1,SCStr *param_2)

{
  ((Stub_SCStr *)(param_2))->SCStr((SCStr *)(param_1 + 0x108));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10a615d0; body size 6 bytes.
#line 1 "ENTRY_10a615d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a615d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44c8);
}


// Reference entry 10a615e0; body size 6 bytes.
#line 1 "ENTRY_10a615e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a615e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44c0);
}


// Reference entry 10a615f0; body size 6 bytes.
#line 1 "ENTRY_10a615f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a615f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44dc);
}


// Reference entry 10a61600; body size 6 bytes.
#line 1 "ENTRY_10a61600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61600(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44d8);
}


// Reference entry 10a61610; body size 6 bytes.
#line 1 "ENTRY_10a61610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61610(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44d4);
}


// Reference entry 10a61620; body size 6 bytes.
#line 1 "ENTRY_10a61620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61620(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44e4);
}


// Reference entry 10a61630; body size 6 bytes.
#line 1 "ENTRY_10a61630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61630(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44e8);
}


// Reference entry 10a61640; body size 6 bytes.
#line 1 "ENTRY_10a61640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61640(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44b8);
}


// Reference entry 10a61650; body size 6 bytes.
#line 1 "ENTRY_10a61650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61650(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44bc);
}


// Reference entry 10a61660; body size 6 bytes.
#line 1 "ENTRY_10a61660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61660(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44c4);
}


// Reference entry 10a61670; body size 6 bytes.
#line 1 "ENTRY_10a61670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61670(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44cc);
}


// Reference entry 10a61680; body size 6 bytes.
#line 1 "ENTRY_10a61680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61680(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44d0);
}


// Reference entry 10a61690; body size 6 bytes.
#line 1 "ENTRY_10a61690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61690(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44e0);
}


// Reference entry 10a616a0; body size 6 bytes.
#line 1 "ENTRY_10a616a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a616a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a44b4);
}


// Reference entry 10a616b0; body size 5 bytes.
#line 1 "ENTRY_10a616b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a616b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10a616c0; body size 5 bytes.
#line 1 "ENTRY_10a616c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a616c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10a616d0; body size 5 bytes.
#line 1 "ENTRY_10a616d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a616d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10a616e0; body size 5 bytes.
#line 1 "ENTRY_10a616e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a616e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10a616f0; body size 5 bytes.
#line 1 "ENTRY_10a616f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a616f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10a61700; body size 5 bytes.
#line 1 "ENTRY_10a61700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a61700(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10a61710; body size 7 bytes.
#line 1 "ENTRY_10a61710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10a61710(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x111));
}


// Reference entry 10a618c0; body size 5 bytes.
#line 1 "ENTRY_10a618c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a618c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a618d0; body size 5 bytes.
#line 1 "ENTRY_10a618d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a618d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a618e0; body size 5 bytes.
#line 1 "ENTRY_10a618e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a618e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a618f0; body size 5 bytes.
#line 1 "ENTRY_10a618f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a618f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a61900; body size 5 bytes.
#line 1 "ENTRY_10a61900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a61900(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a61910; body size 5 bytes.
#line 1 "ENTRY_10a61910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a61910(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a61920; body size 25 bytes.
#line 1 "ENTRY_10a61920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a61920(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0xf4));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)(iVar1 >> 10)) << 8 | (uint)(*(int *)(param_1 + 0x114) < iVar1 >> 2)));
}


// Reference entry 10a61940; body size 18 bytes.
#line 1 "ENTRY_10a61940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10a61940(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106dbf00(DAT_121a44dc));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(2 < iVar1);
}


// Reference entry 10a61960; body size 18 bytes.
#line 1 "ENTRY_10a61960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10a61960(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106dbf00(DAT_121a44bc));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(2 < iVar1);
}


// Reference entry 10a61980; body size 7 bytes.
#line 1 "ENTRY_10a61980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a61980(int param_1)

{
  *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
  return;
}


// Reference entry 10a61a70; body size 7 bytes.
#line 1 "ENTRY_10a61a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10a61a70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x110));
}


// Reference entry 10a61a80; body size 6 bytes.
#line 1 "ENTRY_10a61a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61a80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10a61a90; body size 6 bytes.
#line 1 "ENTRY_10a61a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61a90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10a61aa0; body size 6 bytes.
#line 1 "ENTRY_10a61aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61aa0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10a61ab0; body size 6 bytes.
#line 1 "ENTRY_10a61ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61ab0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10a61ac0; body size 6 bytes.
#line 1 "ENTRY_10a61ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61ac0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10a61ad0; body size 6 bytes.
#line 1 "ENTRY_10a61ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61ad0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10a64290; body size 3 bytes.
#line 1 "ENTRY_10a64290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a64290(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a642a0; body size 36 bytes.
#line 1 "ENTRY_10a642a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a642a0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10a4cc20(puVar1,param_2);
  return;
}


// Reference entry 10a64370; body size 28 bytes.
#line 1 "ENTRY_10a64370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a64370(undefined4 *param_1)

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


// Reference entry 10a643a0; body size 28 bytes.
#line 1 "ENTRY_10a643a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a643a0(undefined4 *param_1)

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


// Reference entry 10a644f0; body size 5 bytes.
#line 1 "ENTRY_10a644f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a644f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a64500; body size 5 bytes.
#line 1 "ENTRY_10a64500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64500(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a64510; body size 5 bytes.
#line 1 "ENTRY_10a64510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64510(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a64890; body size 13 bytes.
#line 1 "ENTRY_10a64890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a64890(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x111) = param_2;
  return;
}


// Reference entry 10a648a0; body size 9 bytes.
#line 1 "ENTRY_10a648a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a648a0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10a648b0; body size 9 bytes.
#line 1 "ENTRY_10a648b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a648b0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10a648c0; body size 6 bytes.
#line 1 "ENTRY_10a648c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a648c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4558);
}


// Reference entry 10a648d0; body size 6 bytes.
#line 1 "ENTRY_10a648d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a648d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4560);
}


// Reference entry 10a648e0; body size 6 bytes.
#line 1 "ENTRY_10a648e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a648e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a455c);
}


// Reference entry 10a648f0; body size 6 bytes.
#line 1 "ENTRY_10a648f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a648f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a454c);
}


// Reference entry 10a64900; body size 6 bytes.
#line 1 "ENTRY_10a64900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64900(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4554);
}


// Reference entry 10a64910; body size 6 bytes.
#line 1 "ENTRY_10a64910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64910(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4550);
}


// Reference entry 10a64920; body size 6 bytes.
#line 1 "ENTRY_10a64920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64920(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4564);
}


// Reference entry 10a64930; body size 6 bytes.
#line 1 "ENTRY_10a64930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64930(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4568);
}


// Reference entry 10a64940; body size 6 bytes.
#line 1 "ENTRY_10a64940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64940(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a453c);
}


// Reference entry 10a64950; body size 6 bytes.
#line 1 "ENTRY_10a64950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64950(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4540);
}


// Reference entry 10a64960; body size 6 bytes.
#line 1 "ENTRY_10a64960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64960(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4548);
}


// Reference entry 10a64970; body size 6 bytes.
#line 1 "ENTRY_10a64970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64970(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4544);
}


// Reference entry 10a64990; body size 57 bytes.
#line 1 "ENTRY_10a64990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a64990(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a65520; body size 57 bytes.
#line 1 "ENTRY_10a65520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a65520(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccessibilityTestButtonDefaultPage_vftable);
  param_1[4] = (uint)&Ext_SCAccessibilityTestButtonDefaultPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccessibilityTestButtonDefaultPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccessibilityTestButtonDefaultPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a65670; body size 57 bytes.
#line 1 "ENTRY_10a65670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a65670(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccessibilityTestButtonWithTermationVOTextPage_vftable);
  param_1[4] = (uint)&Ext_SCAccessibilityTestButtonWithTermationVOTextPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccessibilityTestButtonWithTermationVOTextPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccessibilityTestButtonWithTermationVOTextPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a657c0; body size 57 bytes.
#line 1 "ENTRY_10a657c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a657c0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccessibilityTestButtonWithVOTextOverridePage_vftable);
  param_1[4] = (uint)&Ext_SCAccessibilityTestButtonWithVOTextOverridePage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccessibilityTestButtonWithVOTextOverridePage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccessibilityTestButtonWithVOTextOverridePage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a65910; body size 57 bytes.
#line 1 "ENTRY_10a65910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a65910(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccessibilityTestFlareDefaultPage_vftable);
  param_1[4] = (uint)&Ext_SCAccessibilityTestFlareDefaultPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccessibilityTestFlareDefaultPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccessibilityTestFlareDefaultPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a65a60; body size 57 bytes.
#line 1 "ENTRY_10a65a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a65a60(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccessibilityTestFlareWithVODisabledPage_vftable);
  param_1[4] = (uint)&Ext_SCAccessibilityTestFlareWithVODisabledPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccessibilityTestFlareWithVODisabledPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccessibilityTestFlareWithVODisabledPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a65bb0; body size 57 bytes.
#line 1 "ENTRY_10a65bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a65bb0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccessibilityTestFlareWithVOTextOverridePage_vftable);
  param_1[4] = (uint)&Ext_SCAccessibilityTestFlareWithVOTextOverridePage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccessibilityTestFlareWithVOTextOverridePage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccessibilityTestFlareWithVOTextOverridePage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a65d00; body size 57 bytes.
#line 1 "ENTRY_10a65d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a65d00(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccessibilityTestImageDefaultPage_vftable);
  param_1[4] = (uint)&Ext_SCAccessibilityTestImageDefaultPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccessibilityTestImageDefaultPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccessibilityTestImageDefaultPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a65e50; body size 57 bytes.
#line 1 "ENTRY_10a65e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a65e50(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccessibilityTestImageWithVOTextPage_vftable);
  param_1[4] = (uint)&Ext_SCAccessibilityTestImageWithVOTextPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccessibilityTestImageWithVOTextPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccessibilityTestImageWithVOTextPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a65fa0; body size 57 bytes.
#line 1 "ENTRY_10a65fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a65fa0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccessibilityTestSelectionPage_vftable);
  param_1[4] = (uint)&Ext_SCAccessibilityTestSelectionPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccessibilityTestSelectionPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccessibilityTestSelectionPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a660f0; body size 57 bytes.
#line 1 "ENTRY_10a660f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a660f0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccessibilityTestTextDefaultPage_vftable);
  param_1[4] = (uint)&Ext_SCAccessibilityTestTextDefaultPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccessibilityTestTextDefaultPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccessibilityTestTextDefaultPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a66240; body size 57 bytes.
#line 1 "ENTRY_10a66240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a66240(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccessibilityTestTextWithVODisabledPage_vftable);
  param_1[4] = (uint)&Ext_SCAccessibilityTestTextWithVODisabledPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccessibilityTestTextWithVODisabledPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccessibilityTestTextWithVODisabledPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a66390; body size 57 bytes.
#line 1 "ENTRY_10a66390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a66390(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccessibilityTestTextWithVOTextOverridePage_vftable);
  param_1[4] = (uint)&Ext_SCAccessibilityTestTextWithVOTextOverridePage_vftable;
  param_1[0x23] = (uint)&Ext_SCAccessibilityTestTextWithVOTextOverridePage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccessibilityTestTextWithVOTextOverridePage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a664e0; body size 57 bytes.
#line 1 "ENTRY_10a664e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a664e0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAccessibilityTestWizard_vftable);
  param_1[4] = (uint)&Ext_SCAccessibilityTestWizard_vftable;
  param_1[0x23] = (uint)&Ext_SCAccessibilityTestWizard_vftable;
  param_1[0x2a] = (uint)&Ext_SCAccessibilityTestWizard_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a67050; body size 38 bytes.
#line 1 "ENTRY_10a67050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67050(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a67080; body size 11 bytes.
#line 1 "ENTRY_10a67080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67080(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a670b0; body size 11 bytes.
#line 1 "ENTRY_10a670b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a670b0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a670e0; body size 11 bytes.
#line 1 "ENTRY_10a670e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a670e0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a67100; body size 11 bytes.
#line 1 "ENTRY_10a67100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67100(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a67110; body size 11 bytes.
#line 1 "ENTRY_10a67110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67110(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a67140; body size 38 bytes.
#line 1 "ENTRY_10a67140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67140(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a67170; body size 21 bytes.
#line 1 "ENTRY_10a67170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67170(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4558 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a67190; body size 38 bytes.
#line 1 "ENTRY_10a67190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67190(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a671e0; body size 38 bytes.
#line 1 "ENTRY_10a671e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a671e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a67230; body size 38 bytes.
#line 1 "ENTRY_10a67230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67230(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a67260; body size 21 bytes.
#line 1 "ENTRY_10a67260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67260(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a454c = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a67280; body size 38 bytes.
#line 1 "ENTRY_10a67280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67280(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a672d0; body size 38 bytes.
#line 1 "ENTRY_10a672d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a672d0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a67320; body size 38 bytes.
#line 1 "ENTRY_10a67320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67320(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a67350; body size 21 bytes.
#line 1 "ENTRY_10a67350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67350(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4564 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a67370; body size 38 bytes.
#line 1 "ENTRY_10a67370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67370(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a673c0; body size 38 bytes.
#line 1 "ENTRY_10a673c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a673c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a673f0; body size 21 bytes.
#line 1 "ENTRY_10a673f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a673f0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a453c = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a67410; body size 38 bytes.
#line 1 "ENTRY_10a67410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67410(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a67440; body size 21 bytes.
#line 1 "ENTRY_10a67440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67440(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4540 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a67460; body size 38 bytes.
#line 1 "ENTRY_10a67460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67460(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a674b0; body size 38 bytes.
#line 1 "ENTRY_10a674b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a674b0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a70ff0; body size 6 bytes.
#line 1 "ENTRY_10a70ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a70ff0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4558);
}


// Reference entry 10a71000; body size 6 bytes.
#line 1 "ENTRY_10a71000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71000(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4560);
}


// Reference entry 10a71010; body size 6 bytes.
#line 1 "ENTRY_10a71010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71010(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a455c);
}


// Reference entry 10a71020; body size 6 bytes.
#line 1 "ENTRY_10a71020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71020(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a454c);
}


// Reference entry 10a71030; body size 6 bytes.
#line 1 "ENTRY_10a71030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71030(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4554);
}


// Reference entry 10a71040; body size 6 bytes.
#line 1 "ENTRY_10a71040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71040(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4550);
}


// Reference entry 10a71050; body size 6 bytes.
#line 1 "ENTRY_10a71050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71050(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4564);
}


// Reference entry 10a71060; body size 6 bytes.
#line 1 "ENTRY_10a71060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71060(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4568);
}


// Reference entry 10a71070; body size 6 bytes.
#line 1 "ENTRY_10a71070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71070(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a453c);
}


// Reference entry 10a71080; body size 6 bytes.
#line 1 "ENTRY_10a71080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71080(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4540);
}


// Reference entry 10a71090; body size 6 bytes.
#line 1 "ENTRY_10a71090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71090(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4548);
}


// Reference entry 10a710a0; body size 6 bytes.
#line 1 "ENTRY_10a710a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a710a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4544);
}


// Reference entry 10a710b0; body size 6 bytes.
#line 1 "ENTRY_10a710b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a710b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a456c);
}


// Reference entry 10a711c0; body size 6 bytes.
#line 1 "ENTRY_10a711c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a711c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a45c0);
}


// Reference entry 10a711d0; body size 6 bytes.
#line 1 "ENTRY_10a711d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a711d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a45b8);
}


// Reference entry 10a711e0; body size 6 bytes.
#line 1 "ENTRY_10a711e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a711e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a45bc);
}


// Reference entry 10a71200; body size 57 bytes.
#line 1 "ENTRY_10a71200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a71200(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a71520; body size 57 bytes.
#line 1 "ENTRY_10a71520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a71520(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAnimationErrorPage_vftable);
  param_1[4] = (uint)&Ext_SCAnimationErrorPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAnimationErrorPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAnimationErrorPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a71670; body size 57 bytes.
#line 1 "ENTRY_10a71670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a71670(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAnimationIntroPage_vftable);
  param_1[4] = (uint)&Ext_SCAnimationIntroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAnimationIntroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAnimationIntroPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a717c0; body size 57 bytes.
#line 1 "ENTRY_10a717c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a717c0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAnimationSuccessPage_vftable);
  param_1[4] = (uint)&Ext_SCAnimationSuccessPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAnimationSuccessPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAnimationSuccessPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a71910; body size 57 bytes.
#line 1 "ENTRY_10a71910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a71910(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAnimationWizard_vftable);
  param_1[4] = (uint)&Ext_SCAnimationWizard_vftable;
  param_1[0x23] = (uint)&Ext_SCAnimationWizard_vftable;
  param_1[0x2a] = (uint)&Ext_SCAnimationWizard_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a71cb0; body size 38 bytes.
#line 1 "ENTRY_10a71cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a71cb0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a71ce0; body size 11 bytes.
#line 1 "ENTRY_10a71ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a71ce0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a71cf0; body size 11 bytes.
#line 1 "ENTRY_10a71cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a71cf0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a71d00; body size 11 bytes.
#line 1 "ENTRY_10a71d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a71d00(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a71d10; body size 38 bytes.
#line 1 "ENTRY_10a71d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a71d10(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a71d40; body size 21 bytes.
#line 1 "ENTRY_10a71d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a71d40(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a45c0 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a71d60; body size 38 bytes.
#line 1 "ENTRY_10a71d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a71d60(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a71d90; body size 21 bytes.
#line 1 "ENTRY_10a71d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a71d90(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a45b8 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a71db0; body size 38 bytes.
#line 1 "ENTRY_10a71db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a71db0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a71de0; body size 21 bytes.
#line 1 "ENTRY_10a71de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a71de0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a45bc = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a741a0; body size 6 bytes.
#line 1 "ENTRY_10a741a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a741a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a45c0);
}


// Reference entry 10a741b0; body size 6 bytes.
#line 1 "ENTRY_10a741b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a741b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a45b8);
}


// Reference entry 10a741c0; body size 6 bytes.
#line 1 "ENTRY_10a741c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a741c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a45bc);
}


// Reference entry 10a741d0; body size 6 bytes.
#line 1 "ENTRY_10a741d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a741d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a45c4);
}


// Reference entry 10a742e0; body size 25 bytes.
#line 1 "ENTRY_10a742e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a742e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a74300; body size 22 bytes.
#line 1 "ENTRY_10a74300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a74300(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a74470; body size 22 bytes.
#line 1 "ENTRY_10a74470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a74470(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a74490; body size 83 bytes.
#line 1 "ENTRY_10a74490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __thiscall FUN_10a74490(int *param_1,int *param_2)

{
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10a74500; body size 33 bytes.
#line 1 "ENTRY_10a74500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a74500(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    thunk_FUN_10a76ed0();
  }
  return;
}


// Reference entry 10a74c70; body size 7 bytes.
#line 1 "ENTRY_10a74c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a74c70(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a74c80; body size 3 bytes.
#line 1 "ENTRY_10a74c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a74c80(void)

{
  return;
}


// Reference entry 10a74c90; body size 5 bytes.
#line 1 "ENTRY_10a74c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a74c90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a74ec0; body size 5 bytes.
#line 1 "ENTRY_10a74ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a74ec0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a75240; body size 5 bytes.
#line 1 "ENTRY_10a75240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a75240(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a75250; body size 5 bytes.
#line 1 "ENTRY_10a75250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a75250(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a75260; body size 5 bytes.
#line 1 "ENTRY_10a75260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a75260(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a75270; body size 5 bytes.
#line 1 "ENTRY_10a75270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a75270(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a75280; body size 5 bytes.
#line 1 "ENTRY_10a75280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a75280(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a75290; body size 6 bytes.
#line 1 "ENTRY_10a75290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a75290(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a45e4);
}


// Reference entry 10a752a0; body size 6 bytes.
#line 1 "ENTRY_10a752a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a752a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a45e0);
}


// Reference entry 10a752b0; body size 6 bytes.
#line 1 "ENTRY_10a752b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a752b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a45e8);
}


// Reference entry 10a75410; body size 5 bytes.
#line 1 "ENTRY_10a75410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a75410(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a75420; body size 5 bytes.
#line 1 "ENTRY_10a75420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a75420(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a75430; body size 54 bytes.
#line 1 "ENTRY_10a75430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a75430(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&Ext_SCArray_vftable);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a75480; body size 57 bytes.
#line 1 "ENTRY_10a75480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a75480(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a757d0; body size 16 bytes.
#line 1 "ENTRY_10a757d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a757d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a757f0; body size 16 bytes.
#line 1 "ENTRY_10a757f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a757f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a75840; body size 16 bytes.
#line 1 "ENTRY_10a75840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a75840(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a75860; body size 9 bytes.
#line 1 "ENTRY_10a75860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a75860(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a75870; body size 9 bytes.
#line 1 "ENTRY_10a75870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a75870(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a75880; body size 21 bytes.
#line 1 "ENTRY_10a75880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a75880(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a758a0; body size 23 bytes.
#line 1 "ENTRY_10a758a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a758a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a758c0; body size 3 bytes.
#line 1 "ENTRY_10a758c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a758c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a75950; body size 23 bytes.
#line 1 "ENTRY_10a75950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a75950(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a75970; body size 96 bytes.
#line 1 "ENTRY_10a75970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a75970(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAutoApConnectTestConnectPage_vftable);
  param_1[4] = (uint)&Ext_SCAutoApConnectTestConnectPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAutoApConnectTestConnectPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAutoApConnectTestConnectPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined2 *)(param_1 + 0x3b) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a75af0; body size 57 bytes.
#line 1 "ENTRY_10a75af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a75af0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAutoApConnectTestIntroPage_vftable);
  param_1[4] = (uint)&Ext_SCAutoApConnectTestIntroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAutoApConnectTestIntroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAutoApConnectTestIntroPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a75c40; body size 57 bytes.
#line 1 "ENTRY_10a75c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a75c40(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAutoApConnectTestProductSelectionPage_vftable);
  param_1[4] = (uint)&Ext_SCAutoApConnectTestProductSelectionPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAutoApConnectTestProductSelectionPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAutoApConnectTestProductSelectionPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a769a0; body size 38 bytes.
#line 1 "ENTRY_10a769a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a769a0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a769d0; body size 11 bytes.
#line 1 "ENTRY_10a769d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a769d0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a769e0; body size 11 bytes.
#line 1 "ENTRY_10a769e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a769e0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a76c90; body size 21 bytes.
#line 1 "ENTRY_10a76c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a76c90(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a45e4 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a76cb0; body size 38 bytes.
#line 1 "ENTRY_10a76cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a76cb0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a76ce0; body size 21 bytes.
#line 1 "ENTRY_10a76ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a76ce0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a45e0 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a76d00; body size 38 bytes.
#line 1 "ENTRY_10a76d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a76d00(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a770b0; body size 67 bytes.
#line 1 "ENTRY_10a770b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __thiscall FUN_10a770b0(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_10246290(param_1,*(undefined4 *)(iVar1 + 4));
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


// Reference entry 10a77110; body size 67 bytes.
#line 1 "ENTRY_10a77110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __thiscall FUN_10a77110(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_10246290(param_1,*(undefined4 *)(iVar1 + 4));
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


// Reference entry 10a77170; body size 15 bytes.
#line 1 "ENTRY_10a77170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __thiscall FUN_10a77170(int *param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 0x18);
}


// Reference entry 10a77190; body size 7 bytes.
#line 1 "ENTRY_10a77190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10a77190(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10a771a0; body size 3 bytes.
#line 1 "ENTRY_10a771a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a771a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a771b0; body size 3 bytes.
#line 1 "ENTRY_10a771b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a771b0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a777f0; body size 63 bytes.
#line 1 "ENTRY_10a777f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __thiscall FUN_10a777f0(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x18);
  if (0xaaaaaaa - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0xaaaaaaa);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10a77930; body size 5 bytes.
#line 1 "ENTRY_10a77930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a77930(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a77940; body size 3 bytes.
#line 1 "ENTRY_10a77940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a77940(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a77950; body size 3 bytes.
#line 1 "ENTRY_10a77950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a77950(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a77960; body size 3 bytes.
#line 1 "ENTRY_10a77960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a77960(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a77970; body size 3 bytes.
#line 1 "ENTRY_10a77970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a77970(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a77980; body size 3 bytes.
#line 1 "ENTRY_10a77980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a77980(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a77990; body size 3 bytes.
#line 1 "ENTRY_10a77990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a77990(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a779f0; body size 3 bytes.
#line 1 "ENTRY_10a779f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a779f0(void)

{
  return;
}


// Reference entry 10a77a00; body size 6 bytes.
#line 1 "ENTRY_10a77a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a77a00(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10a77db0; body size 90 bytes.
#line 1 "ENTRY_10a77db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10a77db0(uint param_1)

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


// Reference entry 10a783b0; body size 23 bytes.
#line 1 "ENTRY_10a783b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a783b0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[2] - *param_1) / 0x18);
}


// Reference entry 10a78830; body size 16 bytes.
#line 1 "ENTRY_10a78830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __thiscall FUN_10a78830(int param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(param_1 + 8) + param_2 * 0x18);
}


// Reference entry 10a78850; body size 23 bytes.
#line 1 "ENTRY_10a78850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __thiscall FUN_10a78850(int param_1,SCStr *param_2)

{
  ((Stub_SCStr *)(param_2))->SCStr((SCStr *)(param_1 + 0xf0));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10a79e80; body size 17 bytes.
#line 1 "ENTRY_10a79e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __thiscall FUN_10a79e80(SCStr *param_1,SCStr *param_2)

{
  ((Stub_SCStr *)(param_2))->SCStr(param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10a7a930; body size 23 bytes.
#line 1 "ENTRY_10a7a930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __thiscall FUN_10a7a930(int param_1,SCStr *param_2)

{
  ((Stub_SCStr *)(param_2))->SCStr((SCStr *)(param_1 + 0xe8));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10a7a950; body size 20 bytes.
#line 1 "ENTRY_10a7a950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __thiscall FUN_10a7a950(int param_1,undefined4 param_2)

{
  thunk_FUN_103cf4f0(param_1 + 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_2);
}


// Reference entry 10a7bfb0; body size 23 bytes.
#line 1 "ENTRY_10a7bfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __thiscall FUN_10a7bfb0(int param_1,SCStr *param_2)

{
  ((Stub_SCStr *)(param_2))->SCStr((SCStr *)(param_1 + 0xf4));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10a7bfd0; body size 6 bytes.
#line 1 "ENTRY_10a7bfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a7bfd0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a45e4);
}


// Reference entry 10a7bfe0; body size 6 bytes.
#line 1 "ENTRY_10a7bfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a7bfe0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a45e0);
}


// Reference entry 10a7bff0; body size 6 bytes.
#line 1 "ENTRY_10a7bff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a7bff0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a45e8);
}


// Reference entry 10a7c000; body size 6 bytes.
#line 1 "ENTRY_10a7c000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a7c000(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a45dc);
}


// Reference entry 10a7c020; body size 23 bytes.
#line 1 "ENTRY_10a7c020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __thiscall FUN_10a7c020(int param_1,SCStr *param_2)

{
  ((Stub_SCStr *)(param_2))->SCStr((SCStr *)(param_1 + 0xec));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10a7c040; body size 5 bytes.
#line 1 "ENTRY_10a7c040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a7c040(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a7c050; body size 5 bytes.
#line 1 "ENTRY_10a7c050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a7c050(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a7c060; body size 4 bytes.
#line 1 "ENTRY_10a7c060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10a7c060(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 4));
}


// Reference entry 10a7c0b0; body size 6 bytes.
#line 1 "ENTRY_10a7c0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a7c0b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 10a7c0c0; body size 6 bytes.
#line 1 "ENTRY_10a7c0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a7c0c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 10a7ca90; body size 3 bytes.
#line 1 "ENTRY_10a7ca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a7ca90(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10a7cbf0; body size 28 bytes.
#line 1 "ENTRY_10a7cbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7cbf0(undefined4 *param_1)

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


// Reference entry 10a7cc20; body size 28 bytes.
#line 1 "ENTRY_10a7cc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7cc20(undefined4 *param_1)

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


// Reference entry 10a7cea0; body size 24 bytes.
#line 1 "ENTRY_10a7cea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a7cea0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x18);
}


// Reference entry 10a7cec0; body size 4 bytes.
#line 1 "ENTRY_10a7cec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a7cec0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10a7ced0; body size 23 bytes.
#line 1 "ENTRY_10a7ced0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a7ced0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[1] - *param_1) / 0x18);
}


// Reference entry 10a7cef0; body size 6 bytes.
#line 1 "ENTRY_10a7cef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a7cef0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4664);
}


// Reference entry 10a7cf00; body size 6 bytes.
#line 1 "ENTRY_10a7cf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a7cf00(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4668);
}


// Reference entry 10a7cf10; body size 6 bytes.
#line 1 "ENTRY_10a7cf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a7cf10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a466c);
}


// Reference entry 10a7cf30; body size 57 bytes.
#line 1 "ENTRY_10a7cf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a7cf30(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a7d250; body size 57 bytes.
#line 1 "ENTRY_10a7d250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a7d250(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCBasicAPage_vftable);
  param_1[4] = (uint)&Ext_SCBasicAPage_vftable;
  param_1[0x23] = (uint)&Ext_SCBasicAPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCBasicAPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a7d3a0; body size 57 bytes.
#line 1 "ENTRY_10a7d3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a7d3a0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCBasicBPage_vftable);
  param_1[4] = (uint)&Ext_SCBasicBPage_vftable;
  param_1[0x23] = (uint)&Ext_SCBasicBPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCBasicBPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a7d4f0; body size 57 bytes.
#line 1 "ENTRY_10a7d4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a7d4f0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCBasicCPage_vftable);
  param_1[4] = (uint)&Ext_SCBasicCPage_vftable;
  param_1[0x23] = (uint)&Ext_SCBasicCPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCBasicCPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a7d9e0; body size 38 bytes.
#line 1 "ENTRY_10a7d9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7d9e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a7da10; body size 11 bytes.
#line 1 "ENTRY_10a7da10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7da10(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a7da20; body size 11 bytes.
#line 1 "ENTRY_10a7da20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7da20(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a7da30; body size 11 bytes.
#line 1 "ENTRY_10a7da30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7da30(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a7da40; body size 38 bytes.
#line 1 "ENTRY_10a7da40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7da40(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a7da70; body size 21 bytes.
#line 1 "ENTRY_10a7da70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7da70(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4664 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a7da90; body size 38 bytes.
#line 1 "ENTRY_10a7da90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7da90(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a7dac0; body size 21 bytes.
#line 1 "ENTRY_10a7dac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7dac0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4668 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a7dae0; body size 38 bytes.
#line 1 "ENTRY_10a7dae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7dae0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a7db10; body size 21 bytes.
#line 1 "ENTRY_10a7db10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7db10(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a466c = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a80340; body size 6 bytes.
#line 1 "ENTRY_10a80340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a80340(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4664);
}


// Reference entry 10a80350; body size 6 bytes.
#line 1 "ENTRY_10a80350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a80350(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4668);
}


// Reference entry 10a80360; body size 6 bytes.
#line 1 "ENTRY_10a80360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a80360(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a466c);
}


// Reference entry 10a80370; body size 6 bytes.
#line 1 "ENTRY_10a80370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a80370(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4670);
}


// Reference entry 10a803d0; body size 6 bytes.
#line 1 "ENTRY_10a803d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a803d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a468c);
}


// Reference entry 10a803e0; body size 6 bytes.
#line 1 "ENTRY_10a803e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a803e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4688);
}


// Reference entry 10a80400; body size 16 bytes.
#line 1 "ENTRY_10a80400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10a80400(int *param_1,int *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = (int *)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10a80420; body size 57 bytes.
#line 1 "ENTRY_10a80420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a80420(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a80650; body size 57 bytes.
#line 1 "ENTRY_10a80650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a80650(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCChirpTestErrorPage_vftable);
  param_1[4] = (uint)&Ext_SCChirpTestErrorPage_vftable;
  param_1[0x23] = (uint)&Ext_SCChirpTestErrorPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCChirpTestErrorPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a809b0; body size 57 bytes.
#line 1 "ENTRY_10a809b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a809b0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCChirpTestWizard_vftable);
  param_1[4] = (uint)&Ext_SCChirpTestWizard_vftable;
  param_1[0x23] = (uint)&Ext_SCChirpTestWizard_vftable;
  param_1[0x2a] = (uint)&Ext_SCChirpTestWizard_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a80ca0; body size 11 bytes.
#line 1 "ENTRY_10a80ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a80ca0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a80cb0; body size 11 bytes.
#line 1 "ENTRY_10a80cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a80cb0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a80cc0; body size 38 bytes.
#line 1 "ENTRY_10a80cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a80cc0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a80cf0; body size 21 bytes.
#line 1 "ENTRY_10a80cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a80cf0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a468c = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a80df0; body size 21 bytes.
#line 1 "ENTRY_10a80df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a80df0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4688 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a82f60; body size 6 bytes.
#line 1 "ENTRY_10a82f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a82f60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a468c);
}


// Reference entry 10a82f70; body size 6 bytes.
#line 1 "ENTRY_10a82f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a82f70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4688);
}


// Reference entry 10a82f80; body size 6 bytes.
#line 1 "ENTRY_10a82f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a82f80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4690);
}


// Reference entry 10a83b60; body size 6 bytes.
#line 1 "ENTRY_10a83b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a83b60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a46d4);
}


// Reference entry 10a83b70; body size 6 bytes.
#line 1 "ENTRY_10a83b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a83b70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a46d8);
}


// Reference entry 10a83b80; body size 6 bytes.
#line 1 "ENTRY_10a83b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a83b80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a46dc);
}


// Reference entry 10a83ba0; body size 57 bytes.
#line 1 "ENTRY_10a83ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a83ba0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a83ec0; body size 57 bytes.
#line 1 "ENTRY_10a83ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a83ec0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCCopyTestIntroPage_vftable);
  param_1[4] = (uint)&Ext_SCCopyTestIntroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCCopyTestIntroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCCopyTestIntroPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a84010; body size 57 bytes.
#line 1 "ENTRY_10a84010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a84010(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCCopyTestRawStringPage_vftable);
  param_1[4] = (uint)&Ext_SCCopyTestRawStringPage_vftable;
  param_1[0x23] = (uint)&Ext_SCCopyTestRawStringPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCCopyTestRawStringPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a84160; body size 57 bytes.
#line 1 "ENTRY_10a84160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a84160(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCCopyTestResourceStringPage_vftable);
  param_1[4] = (uint)&Ext_SCCopyTestResourceStringPage_vftable;
  param_1[0x23] = (uint)&Ext_SCCopyTestResourceStringPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCCopyTestResourceStringPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a842b0; body size 57 bytes.
#line 1 "ENTRY_10a842b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a842b0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCCopyTestWizard_vftable);
  param_1[4] = (uint)&Ext_SCCopyTestWizard_vftable;
  param_1[0x23] = (uint)&Ext_SCCopyTestWizard_vftable;
  param_1[0x2a] = (uint)&Ext_SCCopyTestWizard_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a846e0; body size 38 bytes.
#line 1 "ENTRY_10a846e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a846e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a84710; body size 11 bytes.
#line 1 "ENTRY_10a84710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a84710(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a84720; body size 11 bytes.
#line 1 "ENTRY_10a84720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a84720(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a84730; body size 11 bytes.
#line 1 "ENTRY_10a84730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a84730(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a84740; body size 38 bytes.
#line 1 "ENTRY_10a84740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a84740(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a84770; body size 21 bytes.
#line 1 "ENTRY_10a84770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a84770(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a46d4 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a84790; body size 38 bytes.
#line 1 "ENTRY_10a84790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a84790(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a847c0; body size 21 bytes.
#line 1 "ENTRY_10a847c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a847c0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a46d8 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a847e0; body size 38 bytes.
#line 1 "ENTRY_10a847e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a847e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a84810; body size 21 bytes.
#line 1 "ENTRY_10a84810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a84810(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a46dc = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a87e40; body size 6 bytes.
#line 1 "ENTRY_10a87e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a87e40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a46d4);
}


// Reference entry 10a87e50; body size 6 bytes.
#line 1 "ENTRY_10a87e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a87e50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a46d8);
}


// Reference entry 10a87e60; body size 6 bytes.
#line 1 "ENTRY_10a87e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a87e60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a46dc);
}


// Reference entry 10a87e70; body size 6 bytes.
#line 1 "ENTRY_10a87e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a87e70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a46e0);
}


// Reference entry 10a88a60; body size 152 bytes.
#line 1 "ENTRY_10a88a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a88a60(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  puVar7 = (undefined4 *)(puVar1);
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    uVar2 = (uint)(param_2[5]);
    puVar5 = (undefined4 *)(puVar1);
    puVar6 = (undefined4 *)((undefined4 *)puVar1[1]);
    do {
      puVar7 = (undefined4 *)(puVar6);
      puVar6 = (undefined4 *)(param_2);
      if (0xf < uVar2) {
        puVar6 = (undefined4 *)((undefined4 *)*param_2);
      }
      puVar4 = (undefined4 *)(puVar7 + 4);
      if (0xf < (uint)puVar7[9]) {
        puVar4 = (undefined4 *)((undefined4 *)puVar7[4]);
      }
      iVar3 = (int)(thunk_FUN_102bce30(puVar4,puVar7[8],puVar6,param_2[4]));
      if (iVar3 < 0) {
        puVar6 = (undefined4 *)((undefined4 *)puVar7[2]);
        puVar7 = (undefined4 *)(puVar5);
      }
      else {
        puVar6 = (undefined4 *)((undefined4 *)*puVar7);
      }
      puVar5 = (undefined4 *)(puVar7);
    } while (*(char *)((int)puVar6 + 0xd) == '\0');
  }
  if (*(char *)((int)puVar7 + 0xd) == '\0') {
    puVar6 = (undefined4 *)(puVar7 + 4);
    if (0xf < (uint)puVar7[9]) {
      puVar6 = (undefined4 *)((undefined4 *)puVar7[4]);
    }
    puVar5 = (undefined4 *)(param_2);
    if (0xf < (uint)param_2[5]) {
      puVar5 = (undefined4 *)((undefined4 *)*param_2);
    }
    iVar3 = (int)(thunk_FUN_102bce30(puVar5,param_2[4],puVar6,puVar7[8]));
    if (-1 < iVar3) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(puVar7);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(puVar1);
}


// Reference entry 10a88b20; body size 127 bytes.
#line 1 "ENTRY_10a88b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __thiscall FUN_10a88b20(int *param_1,int *param_2,undefined4 *param_3)

{
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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10a88bc0; body size 5 bytes.
#line 1 "ENTRY_10a88bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a88bc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a88bd0; body size 68 bytes.
#line 1 "ENTRY_10a88bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a88bd0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar1 = (int)(param_1 + 0x10);
    if (0xf < *(uint *)(param_1 + 0x24)) {
      iVar1 = (int)(*(int *)(param_1 + 0x10));
    }
    puVar2 = (undefined4 *)(param_2);
    if (0xf < (uint)param_2[5]) {
      puVar2 = (undefined4 *)((undefined4 *)*param_2);
    }
    iVar1 = (int)(thunk_FUN_102bce30(puVar2,param_2[4],iVar1,*(undefined4 *)(param_1 + 0x20)));
    if (-1 < iVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10a88c30; body size 5 bytes.
#line 1 "ENTRY_10a88c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a88c30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a88c40; body size 6 bytes.
#line 1 "ENTRY_10a88c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a88c40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a46fc);
}


// Reference entry 10a88c50; body size 6 bytes.
#line 1 "ENTRY_10a88c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a88c50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4704);
}


// Reference entry 10a88c60; body size 6 bytes.
#line 1 "ENTRY_10a88c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a88c60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4708);
}


// Reference entry 10a88c70; body size 6 bytes.
#line 1 "ENTRY_10a88c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a88c70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4700);
}


// Reference entry 10a88c90; body size 57 bytes.
#line 1 "ENTRY_10a88c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a88c90(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a890d0; body size 16 bytes.
#line 1 "ENTRY_10a890d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a890d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a890f0; body size 11 bytes.
#line 1 "ENTRY_10a890f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a890f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a89100; body size 24 bytes.
#line 1 "ENTRY_10a89100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a89100(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_11262400(param_2);
  *param_1 = (undefined4)((uint)&Ext_RDateTime_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a89120; body size 57 bytes.
#line 1 "ENTRY_10a89120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a89120(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDiscoveryHistoryCollectionPage_vftable);
  param_1[4] = (uint)&Ext_SCDiscoveryHistoryCollectionPage_vftable;
  param_1[0x23] = (uint)&Ext_SCDiscoveryHistoryCollectionPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCDiscoveryHistoryCollectionPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a89270; body size 57 bytes.
#line 1 "ENTRY_10a89270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a89270(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDiscoveryHistoryDeviceListPage_vftable);
  param_1[4] = (uint)&Ext_SCDiscoveryHistoryDeviceListPage_vftable;
  param_1[0x23] = (uint)&Ext_SCDiscoveryHistoryDeviceListPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCDiscoveryHistoryDeviceListPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a893c0; body size 57 bytes.
#line 1 "ENTRY_10a893c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a893c0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDiscoveryHistoryDeviceSummaryPage_vftable);
  param_1[4] = (uint)&Ext_SCDiscoveryHistoryDeviceSummaryPage_vftable;
  param_1[0x23] = (uint)&Ext_SCDiscoveryHistoryDeviceSummaryPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCDiscoveryHistoryDeviceSummaryPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a89510; body size 57 bytes.
#line 1 "ENTRY_10a89510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a89510(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDiscoveryHistoryHouseholdListPage_vftable);
  param_1[4] = (uint)&Ext_SCDiscoveryHistoryHouseholdListPage_vftable;
  param_1[0x23] = (uint)&Ext_SCDiscoveryHistoryHouseholdListPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCDiscoveryHistoryHouseholdListPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a89660; body size 97 bytes.
#line 1 "ENTRY_10a89660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a89660(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDiscoveryHistoryWizard_vftable);
  param_1[4] = (uint)&Ext_SCDiscoveryHistoryWizard_vftable;
  param_1[0x23] = (uint)&Ext_SCDiscoveryHistoryWizard_vftable;
  param_1[0x2a] = (uint)&Ext_SCDiscoveryHistoryWizard_vftable;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a89b40; body size 38 bytes.
#line 1 "ENTRY_10a89b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89b40(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a89b70; body size 11 bytes.
#line 1 "ENTRY_10a89b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89b70(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a89b80; body size 11 bytes.
#line 1 "ENTRY_10a89b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89b80(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a89b90; body size 11 bytes.
#line 1 "ENTRY_10a89b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89b90(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a89ba0; body size 11 bytes.
#line 1 "ENTRY_10a89ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89ba0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a89bb0; body size 38 bytes.
#line 1 "ENTRY_10a89bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89bb0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a89be0; body size 21 bytes.
#line 1 "ENTRY_10a89be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89be0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a46fc = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a89c00; body size 38 bytes.
#line 1 "ENTRY_10a89c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89c00(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a89c30; body size 21 bytes.
#line 1 "ENTRY_10a89c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89c30(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4704 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a89c50; body size 38 bytes.
#line 1 "ENTRY_10a89c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89c50(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a89c80; body size 21 bytes.
#line 1 "ENTRY_10a89c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89c80(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4708 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a89ca0; body size 38 bytes.
#line 1 "ENTRY_10a89ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89ca0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a89cd0; body size 21 bytes.
#line 1 "ENTRY_10a89cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89cd0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4700 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a89e30; body size 65 bytes.
#line 1 "ENTRY_10a89e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __thiscall FUN_10a89e30(int *param_1,int *param_2)

{
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


// Reference entry 10a89eb0; body size 14 bytes.
#line 1 "ENTRY_10a89eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __thiscall FUN_10a89eb0(int *param_1,int *param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10a89ed0; body size 6 bytes.
#line 1 "ENTRY_10a89ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a89ed0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10a89ee0; body size 6 bytes.
#line 1 "ENTRY_10a89ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a89ee0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10a8a4e0; body size 3 bytes.
#line 1 "ENTRY_10a8a4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a8a4e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a8a4f0; body size 3 bytes.
#line 1 "ENTRY_10a8a4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a8a4f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a8a9b0; body size 11 bytes.
#line 1 "ENTRY_10a8a9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a8a9b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10a8a9c0; body size 168 bytes.
#line 1 "ENTRY_10a8a9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10a8a9c0(int *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  puVar7 = (undefined4 *)(puVar1);
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    uVar2 = (uint)(param_3[5]);
    puVar5 = (undefined4 *)(puVar1);
    puVar6 = (undefined4 *)((undefined4 *)puVar1[1]);
    do {
      puVar7 = (undefined4 *)(puVar6);
      puVar6 = (undefined4 *)(param_3);
      if (0xf < uVar2) {
        puVar6 = (undefined4 *)((undefined4 *)*param_3);
      }
      puVar4 = (undefined4 *)(puVar7 + 4);
      if (0xf < (uint)puVar7[9]) {
        puVar4 = (undefined4 *)((undefined4 *)puVar7[4]);
      }
      iVar3 = (int)(thunk_FUN_102bce30(puVar4,puVar7[8],puVar6,param_3[4]));
      if (iVar3 < 0) {
        puVar6 = (undefined4 *)((undefined4 *)puVar7[2]);
        puVar7 = (undefined4 *)(puVar5);
      }
      else {
        puVar6 = (undefined4 *)((undefined4 *)*puVar7);
      }
      puVar5 = (undefined4 *)(puVar7);
    } while (*(char *)((int)puVar6 + 0xd) == '\0');
  }
  if (*(char *)((int)puVar7 + 0xd) == '\0') {
    puVar6 = (undefined4 *)(puVar7 + 4);
    if (0xf < (uint)puVar7[9]) {
      puVar6 = (undefined4 *)((undefined4 *)puVar7[4]);
    }
    puVar5 = (undefined4 *)(param_3);
    if (0xf < (uint)param_3[5]) {
      puVar5 = (undefined4 *)((undefined4 *)*param_3);
    }
    iVar3 = (int)(thunk_FUN_102bce30(puVar5,param_3[4],puVar6,puVar7[8]));
    if (-1 < iVar3) {
      *param_2 = (int)((int)puVar7);
      return;
    }
  }
  *param_2 = (int)((int)puVar1);
  return;
}


// Reference entry 10a90600; body size 23 bytes.
#line 1 "ENTRY_10a90600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __thiscall FUN_10a90600(int param_1,SCStr *param_2)

{
  ((Stub_SCStr *)(param_2))->SCStr((SCStr *)(param_1 + 0xf4));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10a90620; body size 23 bytes.
#line 1 "ENTRY_10a90620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __thiscall FUN_10a90620(int param_1,SCStr *param_2)

{
  ((Stub_SCStr *)(param_2))->SCStr((SCStr *)(param_1 + 0xf0));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10a90640; body size 6 bytes.
#line 1 "ENTRY_10a90640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90640(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a46fc);
}


// Reference entry 10a90650; body size 6 bytes.
#line 1 "ENTRY_10a90650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90650(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4704);
}


// Reference entry 10a90660; body size 6 bytes.
#line 1 "ENTRY_10a90660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90660(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4708);
}


// Reference entry 10a90670; body size 6 bytes.
#line 1 "ENTRY_10a90670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90670(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4700);
}


// Reference entry 10a90680; body size 6 bytes.
#line 1 "ENTRY_10a90680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90680(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a46f8);
}


// Reference entry 10a906a0; body size 5 bytes.
#line 1 "ENTRY_10a906a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a906a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a906b0; body size 5 bytes.
#line 1 "ENTRY_10a906b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a906b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a90d30; body size 5 bytes.
#line 1 "ENTRY_10a90d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90d30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10a90f40; body size 6 bytes.
#line 1 "ENTRY_10a90f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90f40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a476c);
}


// Reference entry 10a90f50; body size 6 bytes.
#line 1 "ENTRY_10a90f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90f50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4764);
}


// Reference entry 10a90f60; body size 6 bytes.
#line 1 "ENTRY_10a90f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90f60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4760);
}


// Reference entry 10a90f70; body size 6 bytes.
#line 1 "ENTRY_10a90f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90f70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a475c);
}


// Reference entry 10a90f80; body size 6 bytes.
#line 1 "ENTRY_10a90f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90f80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4770);
}


// Reference entry 10a90f90; body size 6 bytes.
#line 1 "ENTRY_10a90f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90f90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4768);
}


// Reference entry 10a90fa0; body size 6 bytes.
#line 1 "ENTRY_10a90fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90fa0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4758);
}


// Reference entry 10a90fc0; body size 57 bytes.
#line 1 "ENTRY_10a90fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a90fc0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a916a0; body size 57 bytes.
#line 1 "ENTRY_10a916a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a916a0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDiscoveryAllPage_vftable);
  param_1[4] = (uint)&Ext_SCDiscoveryAllPage_vftable;
  param_1[0x23] = (uint)&Ext_SCDiscoveryAllPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCDiscoveryAllPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a917f0; body size 57 bytes.
#line 1 "ENTRY_10a917f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a917f0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDiscoveryApFailPage_vftable);
  param_1[4] = (uint)&Ext_SCDiscoveryApFailPage_vftable;
  param_1[0x23] = (uint)&Ext_SCDiscoveryApFailPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCDiscoveryApFailPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a91940; body size 57 bytes.
#line 1 "ENTRY_10a91940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a91940(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDiscoveryApFoundPage_vftable);
  param_1[4] = (uint)&Ext_SCDiscoveryApFoundPage_vftable;
  param_1[0x23] = (uint)&Ext_SCDiscoveryApFoundPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCDiscoveryApFoundPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a91a90; body size 77 bytes.
#line 1 "ENTRY_10a91a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a91a90(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDiscoveryApScanPage_vftable);
  param_1[4] = (uint)&Ext_SCDiscoveryApScanPage_vftable;
  param_1[0x23] = (uint)&Ext_SCDiscoveryApScanPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCDiscoveryApScanPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a91bf0; body size 87 bytes.
#line 1 "ENTRY_10a91bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a91bf0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDiscoveryBTOnlyPage_vftable);
  param_1[4] = (uint)&Ext_SCDiscoveryBTOnlyPage_vftable;
  param_1[0x23] = (uint)&Ext_SCDiscoveryBTOnlyPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCDiscoveryBTOnlyPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a91f00; body size 57 bytes.
#line 1 "ENTRY_10a91f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a91f00(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDiscoverySplashPage_vftable);
  param_1[4] = (uint)&Ext_SCDiscoverySplashPage_vftable;
  param_1[0x23] = (uint)&Ext_SCDiscoverySplashPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCDiscoverySplashPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a92050; body size 97 bytes.
#line 1 "ENTRY_10a92050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a92050(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDiscoveryWizard_vftable);
  param_1[4] = (uint)&Ext_SCDiscoveryWizard_vftable;
  param_1[0x23] = (uint)&Ext_SCDiscoveryWizard_vftable;
  param_1[0x2a] = (uint)&Ext_SCDiscoveryWizard_vftable;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x47] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a927d0; body size 11 bytes.
#line 1 "ENTRY_10a927d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a927d0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a927e0; body size 11 bytes.
#line 1 "ENTRY_10a927e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a927e0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a927f0; body size 11 bytes.
#line 1 "ENTRY_10a927f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a927f0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a92800; body size 11 bytes.
#line 1 "ENTRY_10a92800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92800(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a92810; body size 11 bytes.
#line 1 "ENTRY_10a92810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92810(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a92820; body size 11 bytes.
#line 1 "ENTRY_10a92820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92820(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a92830; body size 11 bytes.
#line 1 "ENTRY_10a92830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92830(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a92840; body size 38 bytes.
#line 1 "ENTRY_10a92840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92840(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a92870; body size 21 bytes.
#line 1 "ENTRY_10a92870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92870(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a476c = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a92890; body size 38 bytes.
#line 1 "ENTRY_10a92890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92890(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a928c0; body size 21 bytes.
#line 1 "ENTRY_10a928c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a928c0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4764 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a928e0; body size 38 bytes.
#line 1 "ENTRY_10a928e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a928e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a92910; body size 21 bytes.
#line 1 "ENTRY_10a92910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92910(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4760 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a929e0; body size 21 bytes.
#line 1 "ENTRY_10a929e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a929e0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a475c = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a92a50; body size 21 bytes.
#line 1 "ENTRY_10a92a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92a50(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4770 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a92b20; body size 21 bytes.
#line 1 "ENTRY_10a92b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92b20(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4768 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a92b40; body size 38 bytes.
#line 1 "ENTRY_10a92b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92b40(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a92b70; body size 21 bytes.
#line 1 "ENTRY_10a92b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92b70(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4758 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a92c80; body size 7 bytes.
#line 1 "ENTRY_10a92c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10a92c80(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10a99920; body size 6 bytes.
#line 1 "ENTRY_10a99920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a99920(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a476c);
}


// Reference entry 10a99930; body size 6 bytes.
#line 1 "ENTRY_10a99930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a99930(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4764);
}


// Reference entry 10a99940; body size 6 bytes.
#line 1 "ENTRY_10a99940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a99940(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4760);
}


// Reference entry 10a99950; body size 6 bytes.
#line 1 "ENTRY_10a99950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a99950(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a475c);
}


// Reference entry 10a99960; body size 6 bytes.
#line 1 "ENTRY_10a99960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a99960(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4770);
}


// Reference entry 10a99970; body size 6 bytes.
#line 1 "ENTRY_10a99970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a99970(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4768);
}


// Reference entry 10a99980; body size 6 bytes.
#line 1 "ENTRY_10a99980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a99980(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4758);
}


// Reference entry 10a99990; body size 6 bytes.
#line 1 "ENTRY_10a99990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a99990(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4754);
}


// Reference entry 10a999b0; body size 5 bytes.
#line 1 "ENTRY_10a999b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a999b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a999c0; body size 5 bytes.
#line 1 "ENTRY_10a999c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a999c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10a9a200; body size 6 bytes.
#line 1 "ENTRY_10a9a200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a9a200(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a47cc);
}


// Reference entry 10a9a210; body size 6 bytes.
#line 1 "ENTRY_10a9a210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a9a210(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a47d4);
}


// Reference entry 10a9a220; body size 6 bytes.
#line 1 "ENTRY_10a9a220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a9a220(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a47c0);
}


// Reference entry 10a9a230; body size 6 bytes.
#line 1 "ENTRY_10a9a230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a9a230(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a47c8);
}


// Reference entry 10a9a240; body size 6 bytes.
#line 1 "ENTRY_10a9a240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a9a240(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a47c4);
}


// Reference entry 10a9a250; body size 6 bytes.
#line 1 "ENTRY_10a9a250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a9a250(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a47d0);
}


// Reference entry 10a9a270; body size 57 bytes.
#line 1 "ENTRY_10a9a270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a9a270(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a9a8a0; body size 57 bytes.
#line 1 "ENTRY_10a9a8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a9a8a0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDtlsTestEchoConnectingPage_vftable);
  param_1[4] = (uint)&Ext_SCDtlsTestEchoConnectingPage_vftable;
  param_1[0x23] = (uint)&Ext_SCDtlsTestEchoConnectingPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCDtlsTestEchoConnectingPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a9a9f0; body size 57 bytes.
#line 1 "ENTRY_10a9a9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a9a9f0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDtlsTestEchoFailurePage_vftable);
  param_1[4] = (uint)&Ext_SCDtlsTestEchoFailurePage_vftable;
  param_1[0x23] = (uint)&Ext_SCDtlsTestEchoFailurePage_vftable;
  param_1[0x2a] = (uint)&Ext_SCDtlsTestEchoFailurePage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a9ab40; body size 57 bytes.
#line 1 "ENTRY_10a9ab40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a9ab40(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDtlsTestEchoIntroPage_vftable);
  param_1[4] = (uint)&Ext_SCDtlsTestEchoIntroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCDtlsTestEchoIntroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCDtlsTestEchoIntroPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a9ac90; body size 147 bytes.
#line 1 "ENTRY_10a9ac90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a9ac90(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDtlsTestEchoPlayerChooserPage_vftable);
  param_1[4] = (uint)&Ext_SCDtlsTestEchoPlayerChooserPage_vftable;
  param_1[0x23] = (uint)&Ext_SCDtlsTestEchoPlayerChooserPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCDtlsTestEchoPlayerChooserPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0x78;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a9ae50; body size 57 bytes.
#line 1 "ENTRY_10a9ae50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a9ae50(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDtlsTestEchoProtocolChooserPage_vftable);
  param_1[4] = (uint)&Ext_SCDtlsTestEchoProtocolChooserPage_vftable;
  param_1[0x23] = (uint)&Ext_SCDtlsTestEchoProtocolChooserPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCDtlsTestEchoProtocolChooserPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a9afa0; body size 57 bytes.
#line 1 "ENTRY_10a9afa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a9afa0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDtlsTestEchoSuccessPage_vftable);
  param_1[4] = (uint)&Ext_SCDtlsTestEchoSuccessPage_vftable;
  param_1[0x23] = (uint)&Ext_SCDtlsTestEchoSuccessPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCDtlsTestEchoSuccessPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a9b0f0; body size 107 bytes.
#line 1 "ENTRY_10a9b0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10a9b0f0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCDtlsTestWizard_vftable);
  param_1[4] = (uint)&Ext_SCDtlsTestWizard_vftable;
  param_1[0x23] = (uint)&Ext_SCDtlsTestWizard_vftable;
  param_1[0x2a] = (uint)&Ext_SCDtlsTestWizard_vftable;
  param_1[0x3a] = 1;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10a9b770; body size 38 bytes.
#line 1 "ENTRY_10a9b770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b770(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a9b7a0; body size 11 bytes.
#line 1 "ENTRY_10a9b7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b7a0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a9b7b0; body size 11 bytes.
#line 1 "ENTRY_10a9b7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b7b0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a9b7c0; body size 11 bytes.
#line 1 "ENTRY_10a9b7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b7c0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a9b7d0; body size 11 bytes.
#line 1 "ENTRY_10a9b7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b7d0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a9b7e0; body size 11 bytes.
#line 1 "ENTRY_10a9b7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b7e0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a9b7f0; body size 11 bytes.
#line 1 "ENTRY_10a9b7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b7f0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a9b800; body size 38 bytes.
#line 1 "ENTRY_10a9b800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b800(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a9b830; body size 21 bytes.
#line 1 "ENTRY_10a9b830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b830(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a47cc = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a9b850; body size 38 bytes.
#line 1 "ENTRY_10a9b850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b850(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a9b880; body size 21 bytes.
#line 1 "ENTRY_10a9b880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b880(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a47d4 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a9b8a0; body size 38 bytes.
#line 1 "ENTRY_10a9b8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b8a0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a9b8d0; body size 21 bytes.
#line 1 "ENTRY_10a9b8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b8d0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a47c0 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a9b9b0; body size 21 bytes.
#line 1 "ENTRY_10a9b9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b9b0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a47c8 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a9b9d0; body size 38 bytes.
#line 1 "ENTRY_10a9b9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b9d0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a9ba00; body size 21 bytes.
#line 1 "ENTRY_10a9ba00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9ba00(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a47c4 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a9ba20; body size 38 bytes.
#line 1 "ENTRY_10a9ba20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9ba20(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10a9ba50; body size 21 bytes.
#line 1 "ENTRY_10a9ba50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9ba50(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a47d0 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10a9bbf0; body size 14 bytes.
#line 1 "ENTRY_10a9bbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __thiscall FUN_10a9bbf0(int *param_1,int *param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10a9f830; body size 7 bytes.
#line 1 "ENTRY_10a9f830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a9f830(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xe8));
}


// Reference entry 10a9faf0; body size 23 bytes.
#line 1 "ENTRY_10a9faf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __thiscall FUN_10a9faf0(int param_1,SCStr *param_2)

{
  ((Stub_SCStr *)(param_2))->SCStr((SCStr *)(param_1 + 0xf4));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10a9fb10; body size 28 bytes.
#line 1 "ENTRY_10a9fb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __thiscall FUN_10a9fb10(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10a9fdd0; body size 23 bytes.
#line 1 "ENTRY_10a9fdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __thiscall FUN_10a9fdd0(int param_1,SCStr *param_2)

{
  ((Stub_SCStr *)(param_2))->SCStr((SCStr *)(param_1 + 0xf8));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10aa1440; body size 6 bytes.
#line 1 "ENTRY_10aa1440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa1440(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a47cc);
}


// Reference entry 10aa1450; body size 6 bytes.
#line 1 "ENTRY_10aa1450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa1450(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a47d4);
}


// Reference entry 10aa1460; body size 6 bytes.
#line 1 "ENTRY_10aa1460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa1460(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a47c0);
}


// Reference entry 10aa1470; body size 6 bytes.
#line 1 "ENTRY_10aa1470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa1470(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a47c8);
}


// Reference entry 10aa1480; body size 6 bytes.
#line 1 "ENTRY_10aa1480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa1480(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a47c4);
}


// Reference entry 10aa1490; body size 6 bytes.
#line 1 "ENTRY_10aa1490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa1490(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a47d0);
}


// Reference entry 10aa14a0; body size 6 bytes.
#line 1 "ENTRY_10aa14a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa14a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a47d8);
}


// Reference entry 10aa18b0; body size 5 bytes.
#line 1 "ENTRY_10aa18b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10aa18b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10aa18c0; body size 5 bytes.
#line 1 "ENTRY_10aa18c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10aa18c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10aa2710; body size 13 bytes.
#line 1 "ENTRY_10aa2710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __thiscall FUN_10aa2710(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xe8) = param_2;
  return;
}


// Reference entry 10aa2960; body size 6 bytes.
#line 1 "ENTRY_10aa2960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2960(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4864);
}


// Reference entry 10aa2970; body size 6 bytes.
#line 1 "ENTRY_10aa2970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2970(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4860);
}


// Reference entry 10aa2980; body size 6 bytes.
#line 1 "ENTRY_10aa2980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2980(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a482c);
}


// Reference entry 10aa2990; body size 6 bytes.
#line 1 "ENTRY_10aa2990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2990(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4858);
}


// Reference entry 10aa29a0; body size 6 bytes.
#line 1 "ENTRY_10aa29a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa29a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4850);
}


// Reference entry 10aa29b0; body size 6 bytes.
#line 1 "ENTRY_10aa29b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa29b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4854);
}


// Reference entry 10aa29c0; body size 6 bytes.
#line 1 "ENTRY_10aa29c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa29c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a484c);
}


// Reference entry 10aa29d0; body size 6 bytes.
#line 1 "ENTRY_10aa29d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa29d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4830);
}


// Reference entry 10aa29e0; body size 6 bytes.
#line 1 "ENTRY_10aa29e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa29e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4828);
}


// Reference entry 10aa29f0; body size 6 bytes.
#line 1 "ENTRY_10aa29f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa29f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a485c);
}


// Reference entry 10aa2a00; body size 6 bytes.
#line 1 "ENTRY_10aa2a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2a00(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4838);
}


// Reference entry 10aa2a10; body size 6 bytes.
#line 1 "ENTRY_10aa2a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2a10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4834);
}


// Reference entry 10aa2a20; body size 6 bytes.
#line 1 "ENTRY_10aa2a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2a20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4848);
}


// Reference entry 10aa2a30; body size 6 bytes.
#line 1 "ENTRY_10aa2a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2a30(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4840);
}


// Reference entry 10aa2a40; body size 6 bytes.
#line 1 "ENTRY_10aa2a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2a40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4844);
}


// Reference entry 10aa2a50; body size 6 bytes.
#line 1 "ENTRY_10aa2a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2a50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a483c);
}


// Reference entry 10aa2a70; body size 57 bytes.
#line 1 "ENTRY_10aa2a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aa2a70(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aa39c0; body size 118 bytes.
#line 1 "ENTRY_10aa39c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aa39c0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlareDemoAdvancedProgressPage_vftable);
  param_1[4] = (uint)&Ext_SCFlareDemoAdvancedProgressPage_vftable;
  param_1[0x23] = (uint)&Ext_SCFlareDemoAdvancedProgressPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlareDemoAdvancedProgressPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = DAT_12119c10;
  param_1[0x3e] = 0xffffffff;
  param_1[0x3f] = 0xffffffff;
  param_1[0x40] = 0xffffffff;
  param_1[0x41] = 0xffffffff;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aa3b60; body size 57 bytes.
#line 1 "ENTRY_10aa3b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aa3b60(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlareDemoAdvancedProgressSetupPage_vftable);
  param_1[4] = (uint)&Ext_SCFlareDemoAdvancedProgressSetupPage_vftable;
  param_1[0x23] = (uint)&Ext_SCFlareDemoAdvancedProgressSetupPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlareDemoAdvancedProgressSetupPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aa3cb0; body size 64 bytes.
#line 1 "ENTRY_10aa3cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aa3cb0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlareDemoFirstPage_vftable);
  param_1[4] = (uint)&Ext_SCFlareDemoFirstPage_vftable;
  param_1[0x23] = (uint)&Ext_SCFlareDemoFirstPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlareDemoFirstPage_vftable;
  *(undefined1 *)(param_1 + 0x38) = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aa3e00; body size 57 bytes.
#line 1 "ENTRY_10aa3e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aa3e00(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlareDemoImageCheckmarkPage_vftable);
  param_1[4] = (uint)&Ext_SCFlareDemoImageCheckmarkPage_vftable;
  param_1[0x23] = (uint)&Ext_SCFlareDemoImageCheckmarkPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlareDemoImageCheckmarkPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aa3f50; body size 57 bytes.
#line 1 "ENTRY_10aa3f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aa3f50(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlareDemoImageProgressPage_vftable);
  param_1[4] = (uint)&Ext_SCFlareDemoImageProgressPage_vftable;
  param_1[0x23] = (uint)&Ext_SCFlareDemoImageProgressPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlareDemoImageProgressPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aa40a0; body size 57 bytes.
#line 1 "ENTRY_10aa40a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aa40a0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlareDemoImageThinkerPage_vftable);
  param_1[4] = (uint)&Ext_SCFlareDemoImageThinkerPage_vftable;
  param_1[0x23] = (uint)&Ext_SCFlareDemoImageThinkerPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlareDemoImageThinkerPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aa41f0; body size 57 bytes.
#line 1 "ENTRY_10aa41f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aa41f0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlareDemoImageWiFiPage_vftable);
  param_1[4] = (uint)&Ext_SCFlareDemoImageWiFiPage_vftable;
  param_1[0x23] = (uint)&Ext_SCFlareDemoImageWiFiPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlareDemoImageWiFiPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aa4340; body size 64 bytes.
#line 1 "ENTRY_10aa4340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aa4340(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlareDemoSecondPage_vftable);
  param_1[4] = (uint)&Ext_SCFlareDemoSecondPage_vftable;
  param_1[0x23] = (uint)&Ext_SCFlareDemoSecondPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlareDemoSecondPage_vftable;
  *(undefined1 *)(param_1 + 0x38) = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aa4490; body size 57 bytes.
#line 1 "ENTRY_10aa4490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aa4490(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlareDemoSelectionPage_vftable);
  param_1[4] = (uint)&Ext_SCFlareDemoSelectionPage_vftable;
  param_1[0x23] = (uint)&Ext_SCFlareDemoSelectionPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlareDemoSelectionPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aa45e0; body size 68 bytes.
#line 1 "ENTRY_10aa45e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aa45e0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlareDemoSimpleProgressPage_vftable);
  param_1[4] = (uint)&Ext_SCFlareDemoSimpleProgressPage_vftable;
  param_1[0x23] = (uint)&Ext_SCFlareDemoSimpleProgressPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlareDemoSimpleProgressPage_vftable;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aa4740; body size 57 bytes.
#line 1 "ENTRY_10aa4740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aa4740(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlareDemoSpinnerPage_vftable);
  param_1[4] = (uint)&Ext_SCFlareDemoSpinnerPage_vftable;
  param_1[0x23] = (uint)&Ext_SCFlareDemoSpinnerPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlareDemoSpinnerPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aa4890; body size 57 bytes.
#line 1 "ENTRY_10aa4890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aa4890(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlareDemoThirdPage_vftable);
  param_1[4] = (uint)&Ext_SCFlareDemoThirdPage_vftable;
  param_1[0x23] = (uint)&Ext_SCFlareDemoThirdPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlareDemoThirdPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aa49e0; body size 57 bytes.
#line 1 "ENTRY_10aa49e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aa49e0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlareDemoVideoCheckmarkPage_vftable);
  param_1[4] = (uint)&Ext_SCFlareDemoVideoCheckmarkPage_vftable;
  param_1[0x23] = (uint)&Ext_SCFlareDemoVideoCheckmarkPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlareDemoVideoCheckmarkPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aa4b30; body size 57 bytes.
#line 1 "ENTRY_10aa4b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aa4b30(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlareDemoVideoProgressPage_vftable);
  param_1[4] = (uint)&Ext_SCFlareDemoVideoProgressPage_vftable;
  param_1[0x23] = (uint)&Ext_SCFlareDemoVideoProgressPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlareDemoVideoProgressPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aa4c80; body size 57 bytes.
#line 1 "ENTRY_10aa4c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aa4c80(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlareDemoVideoThinkerPage_vftable);
  param_1[4] = (uint)&Ext_SCFlareDemoVideoThinkerPage_vftable;
  param_1[0x23] = (uint)&Ext_SCFlareDemoVideoThinkerPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlareDemoVideoThinkerPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aa4dd0; body size 57 bytes.
#line 1 "ENTRY_10aa4dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aa4dd0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlareDemoVideoWiFiPage_vftable);
  param_1[4] = (uint)&Ext_SCFlareDemoVideoWiFiPage_vftable;
  param_1[0x23] = (uint)&Ext_SCFlareDemoVideoWiFiPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlareDemoVideoWiFiPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aa4f20; body size 57 bytes.
#line 1 "ENTRY_10aa4f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aa4f20(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlareDemoWizard_vftable);
  param_1[4] = (uint)&Ext_SCFlareDemoWizard_vftable;
  param_1[0x23] = (uint)&Ext_SCFlareDemoWizard_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlareDemoWizard_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aa5e10; body size 38 bytes.
#line 1 "ENTRY_10aa5e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5e10(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10aa5e40; body size 11 bytes.
#line 1 "ENTRY_10aa5e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5e40(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa5e50; body size 11 bytes.
#line 1 "ENTRY_10aa5e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5e50(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa5e60; body size 11 bytes.
#line 1 "ENTRY_10aa5e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5e60(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa5e70; body size 11 bytes.
#line 1 "ENTRY_10aa5e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5e70(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa5e80; body size 11 bytes.
#line 1 "ENTRY_10aa5e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5e80(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa5e90; body size 11 bytes.
#line 1 "ENTRY_10aa5e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5e90(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa5ea0; body size 11 bytes.
#line 1 "ENTRY_10aa5ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5ea0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa5eb0; body size 11 bytes.
#line 1 "ENTRY_10aa5eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5eb0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa5ec0; body size 11 bytes.
#line 1 "ENTRY_10aa5ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5ec0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa5ed0; body size 11 bytes.
#line 1 "ENTRY_10aa5ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5ed0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa5ee0; body size 11 bytes.
#line 1 "ENTRY_10aa5ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5ee0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa5ef0; body size 11 bytes.
#line 1 "ENTRY_10aa5ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5ef0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa5f00; body size 11 bytes.
#line 1 "ENTRY_10aa5f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5f00(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa5f10; body size 11 bytes.
#line 1 "ENTRY_10aa5f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5f10(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa5f20; body size 11 bytes.
#line 1 "ENTRY_10aa5f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5f20(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa5f30; body size 11 bytes.
#line 1 "ENTRY_10aa5f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5f30(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa5f40; body size 38 bytes.
#line 1 "ENTRY_10aa5f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5f40(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10aa5f70; body size 21 bytes.
#line 1 "ENTRY_10aa5f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5f70(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4864 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa5f90; body size 38 bytes.
#line 1 "ENTRY_10aa5f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5f90(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10aa5fc0; body size 21 bytes.
#line 1 "ENTRY_10aa5fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5fc0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4860 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa5fe0; body size 38 bytes.
#line 1 "ENTRY_10aa5fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5fe0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10aa6010; body size 21 bytes.
#line 1 "ENTRY_10aa6010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6010(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a482c = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa6030; body size 38 bytes.
#line 1 "ENTRY_10aa6030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6030(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10aa6060; body size 21 bytes.
#line 1 "ENTRY_10aa6060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6060(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4858 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa6080; body size 38 bytes.
#line 1 "ENTRY_10aa6080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6080(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10aa60b0; body size 21 bytes.
#line 1 "ENTRY_10aa60b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa60b0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4850 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa60d0; body size 38 bytes.
#line 1 "ENTRY_10aa60d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa60d0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10aa6100; body size 21 bytes.
#line 1 "ENTRY_10aa6100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6100(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4854 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa6120; body size 38 bytes.
#line 1 "ENTRY_10aa6120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6120(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10aa6150; body size 21 bytes.
#line 1 "ENTRY_10aa6150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6150(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a484c = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa6170; body size 38 bytes.
#line 1 "ENTRY_10aa6170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6170(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10aa61a0; body size 21 bytes.
#line 1 "ENTRY_10aa61a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa61a0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4830 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa61c0; body size 38 bytes.
#line 1 "ENTRY_10aa61c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa61c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10aa61f0; body size 21 bytes.
#line 1 "ENTRY_10aa61f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa61f0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4828 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa6210; body size 38 bytes.
#line 1 "ENTRY_10aa6210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6210(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10aa6240; body size 21 bytes.
#line 1 "ENTRY_10aa6240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6240(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a485c = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa6260; body size 38 bytes.
#line 1 "ENTRY_10aa6260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6260(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10aa6290; body size 21 bytes.
#line 1 "ENTRY_10aa6290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6290(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4838 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa62b0; body size 38 bytes.
#line 1 "ENTRY_10aa62b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa62b0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10aa62e0; body size 21 bytes.
#line 1 "ENTRY_10aa62e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa62e0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4834 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa6300; body size 38 bytes.
#line 1 "ENTRY_10aa6300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6300(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10aa6330; body size 21 bytes.
#line 1 "ENTRY_10aa6330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6330(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4848 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa6350; body size 38 bytes.
#line 1 "ENTRY_10aa6350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6350(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10aa6380; body size 21 bytes.
#line 1 "ENTRY_10aa6380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6380(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4840 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa63a0; body size 38 bytes.
#line 1 "ENTRY_10aa63a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa63a0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10aa63d0; body size 21 bytes.
#line 1 "ENTRY_10aa63d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa63d0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4844 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10aa63f0; body size 38 bytes.
#line 1 "ENTRY_10aa63f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa63f0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10aa6420; body size 21 bytes.
#line 1 "ENTRY_10aa6420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6420(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a483c = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10ab2480; body size 6 bytes.
#line 1 "ENTRY_10ab2480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2480(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4864);
}


// Reference entry 10ab2490; body size 6 bytes.
#line 1 "ENTRY_10ab2490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2490(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4860);
}


// Reference entry 10ab24a0; body size 6 bytes.
#line 1 "ENTRY_10ab24a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab24a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a482c);
}


// Reference entry 10ab24b0; body size 6 bytes.
#line 1 "ENTRY_10ab24b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab24b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4858);
}


// Reference entry 10ab24c0; body size 6 bytes.
#line 1 "ENTRY_10ab24c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab24c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4850);
}


// Reference entry 10ab24d0; body size 6 bytes.
#line 1 "ENTRY_10ab24d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab24d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4854);
}


// Reference entry 10ab24e0; body size 6 bytes.
#line 1 "ENTRY_10ab24e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab24e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a484c);
}


// Reference entry 10ab24f0; body size 6 bytes.
#line 1 "ENTRY_10ab24f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab24f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4830);
}


// Reference entry 10ab2500; body size 6 bytes.
#line 1 "ENTRY_10ab2500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2500(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4828);
}


// Reference entry 10ab2510; body size 6 bytes.
#line 1 "ENTRY_10ab2510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2510(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a485c);
}


// Reference entry 10ab2520; body size 6 bytes.
#line 1 "ENTRY_10ab2520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2520(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4838);
}


// Reference entry 10ab2530; body size 6 bytes.
#line 1 "ENTRY_10ab2530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2530(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4834);
}


// Reference entry 10ab2540; body size 6 bytes.
#line 1 "ENTRY_10ab2540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2540(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4848);
}


// Reference entry 10ab2550; body size 6 bytes.
#line 1 "ENTRY_10ab2550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2550(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4840);
}


// Reference entry 10ab2560; body size 6 bytes.
#line 1 "ENTRY_10ab2560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2560(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4844);
}


// Reference entry 10ab2570; body size 6 bytes.
#line 1 "ENTRY_10ab2570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2570(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a483c);
}


// Reference entry 10ab2580; body size 6 bytes.
#line 1 "ENTRY_10ab2580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2580(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4824);
}


// Reference entry 10ab2ed0; body size 6 bytes.
#line 1 "ENTRY_10ab2ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2ed0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a48b4);
}


// Reference entry 10ab2ef0; body size 57 bytes.
#line 1 "ENTRY_10ab2ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab2ef0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab3030; body size 57 bytes.
#line 1 "ENTRY_10ab3030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab3030(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlutterTestErrorHandlingPage_vftable);
  param_1[4] = (uint)&Ext_SCFlutterTestErrorHandlingPage_vftable;
  param_1[0x23] = (uint)&Ext_SCFlutterTestErrorHandlingPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlutterTestErrorHandlingPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab3180; body size 57 bytes.
#line 1 "ENTRY_10ab3180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab3180(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCFlutterTestWizard_vftable);
  param_1[4] = (uint)&Ext_SCFlutterTestWizard_vftable;
  param_1[0x23] = (uint)&Ext_SCFlutterTestWizard_vftable;
  param_1[0x2a] = (uint)&Ext_SCFlutterTestWizard_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab3360; body size 38 bytes.
#line 1 "ENTRY_10ab3360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab3360(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10ab3390; body size 11 bytes.
#line 1 "ENTRY_10ab3390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab3390(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10ab33a0; body size 38 bytes.
#line 1 "ENTRY_10ab33a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab33a0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10ab33d0; body size 21 bytes.
#line 1 "ENTRY_10ab33d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab33d0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a48b4 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10ab3ef0; body size 6 bytes.
#line 1 "ENTRY_10ab3ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab3ef0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a48b4);
}


// Reference entry 10ab3f00; body size 6 bytes.
#line 1 "ENTRY_10ab3f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab3f00(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a48b8);
}


// Reference entry 10ab3f40; body size 6 bytes.
#line 1 "ENTRY_10ab3f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab3f40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a48cc);
}


// Reference entry 10ab3f50; body size 6 bytes.
#line 1 "ENTRY_10ab3f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab3f50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a48d0);
}


// Reference entry 10ab3f70; body size 57 bytes.
#line 1 "ENTRY_10ab3f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab3f70(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab41a0; body size 57 bytes.
#line 1 "ENTRY_10ab41a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab41a0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCGhostBooPage_vftable);
  param_1[4] = (uint)&Ext_SCGhostBooPage_vftable;
  param_1[0x23] = (uint)&Ext_SCGhostBooPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCGhostBooPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab42f0; body size 57 bytes.
#line 1 "ENTRY_10ab42f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab42f0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCGhostSneakyPage_vftable);
  param_1[4] = (uint)&Ext_SCGhostSneakyPage_vftable;
  param_1[0x23] = (uint)&Ext_SCGhostSneakyPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCGhostSneakyPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab4780; body size 38 bytes.
#line 1 "ENTRY_10ab4780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab4780(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10ab47b0; body size 11 bytes.
#line 1 "ENTRY_10ab47b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab47b0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10ab47c0; body size 11 bytes.
#line 1 "ENTRY_10ab47c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab47c0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10ab47d0; body size 38 bytes.
#line 1 "ENTRY_10ab47d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab47d0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10ab4800; body size 21 bytes.
#line 1 "ENTRY_10ab4800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab4800(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a48cc = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10ab4820; body size 38 bytes.
#line 1 "ENTRY_10ab4820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab4820(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


// Reference entry 10ab4850; body size 21 bytes.
#line 1 "ENTRY_10ab4850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab4850(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a48d0 = (int)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateTypeFor_vftable);
  puStack_c = (undefined1 *)(LAB_115e0ff0);
  pvStack_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizStateType_vftable);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10ab5f50; body size 6 bytes.
#line 1 "ENTRY_10ab5f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab5f50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a48cc);
}


// Reference entry 10ab5f60; body size 6 bytes.
#line 1 "ENTRY_10ab5f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab5f60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a48d0);
}


// Reference entry 10ab5f70; body size 6 bytes.
#line 1 "ENTRY_10ab5f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab5f70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a48d4);
}


// Reference entry 10ab5fc0; body size 7 bytes.
#line 1 "ENTRY_10ab5fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10ab5fc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0xe9));
}


// Reference entry 10ab5fd0; body size 7 bytes.
#line 1 "ENTRY_10ab5fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10ab5fd0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0xe8));
}


// Reference entry 10ab6090; body size 57 bytes.
#line 1 "ENTRY_10ab6090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab6090(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCHapticWizard_vftable);
  param_1[4] = (uint)&Ext_SCHapticWizard_vftable;
  param_1[0x23] = (uint)&Ext_SCHapticWizard_vftable;
  param_1[0x2a] = (uint)&Ext_SCHapticWizard_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab6190; body size 11 bytes.
#line 1 "ENTRY_10ab6190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab6190(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCHapticWizardType_vftable);
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115e1020);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  piVar1 = (int *)(param_1 + 4);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizType_vftable);
  thunk_FUN_10246290(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x18,uVar2);
  thunk_FUN_106dd300(param_1 + 2,*(undefined4 *)(param_1[2] + 4));
  thunk_FUN_1148a50e(param_1[2],0x18);
  uStack_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10ab6370; body size 6 bytes.
#line 1 "ENTRY_10ab6370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6370(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a48f4);
}


// Reference entry 10ab63a0; body size 6 bytes.
#line 1 "ENTRY_10ab63a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab63a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4938);
}


// Reference entry 10ab63b0; body size 6 bytes.
#line 1 "ENTRY_10ab63b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab63b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4974);
}


// Reference entry 10ab63c0; body size 6 bytes.
#line 1 "ENTRY_10ab63c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab63c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4980);
}


// Reference entry 10ab63d0; body size 6 bytes.
#line 1 "ENTRY_10ab63d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab63d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4978);
}


// Reference entry 10ab63e0; body size 6 bytes.
#line 1 "ENTRY_10ab63e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab63e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4984);
}


// Reference entry 10ab63f0; body size 6 bytes.
#line 1 "ENTRY_10ab63f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab63f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4988);
}


// Reference entry 10ab6400; body size 6 bytes.
#line 1 "ENTRY_10ab6400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6400(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a497c);
}


// Reference entry 10ab6410; body size 6 bytes.
#line 1 "ENTRY_10ab6410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6410(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a499c);
}


// Reference entry 10ab6420; body size 6 bytes.
#line 1 "ENTRY_10ab6420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6420(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4998);
}


// Reference entry 10ab6430; body size 6 bytes.
#line 1 "ENTRY_10ab6430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6430(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4994);
}


// Reference entry 10ab6440; body size 6 bytes.
#line 1 "ENTRY_10ab6440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6440(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4990);
}


// Reference entry 10ab6450; body size 6 bytes.
#line 1 "ENTRY_10ab6450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6450(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a498c);
}


// Reference entry 10ab6460; body size 6 bytes.
#line 1 "ENTRY_10ab6460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6460(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4918);
}


// Reference entry 10ab6470; body size 6 bytes.
#line 1 "ENTRY_10ab6470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6470(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4924);
}


// Reference entry 10ab6480; body size 6 bytes.
#line 1 "ENTRY_10ab6480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6480(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4920);
}


// Reference entry 10ab6490; body size 6 bytes.
#line 1 "ENTRY_10ab6490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6490(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a491c);
}


// Reference entry 10ab64a0; body size 6 bytes.
#line 1 "ENTRY_10ab64a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab64a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4910);
}


// Reference entry 10ab64b0; body size 6 bytes.
#line 1 "ENTRY_10ab64b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab64b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4914);
}


// Reference entry 10ab64c0; body size 6 bytes.
#line 1 "ENTRY_10ab64c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab64c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4940);
}


// Reference entry 10ab64d0; body size 6 bytes.
#line 1 "ENTRY_10ab64d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab64d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4944);
}


// Reference entry 10ab64e0; body size 6 bytes.
#line 1 "ENTRY_10ab64e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab64e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4948);
}


// Reference entry 10ab64f0; body size 6 bytes.
#line 1 "ENTRY_10ab64f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab64f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4968);
}


// Reference entry 10ab6500; body size 6 bytes.
#line 1 "ENTRY_10ab6500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6500(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a495c);
}


// Reference entry 10ab6510; body size 6 bytes.
#line 1 "ENTRY_10ab6510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6510(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4964);
}


// Reference entry 10ab6520; body size 6 bytes.
#line 1 "ENTRY_10ab6520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6520(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4960);
}


// Reference entry 10ab6530; body size 6 bytes.
#line 1 "ENTRY_10ab6530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6530(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a496c);
}


// Reference entry 10ab6540; body size 6 bytes.
#line 1 "ENTRY_10ab6540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6540(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4970);
}


// Reference entry 10ab6550; body size 6 bytes.
#line 1 "ENTRY_10ab6550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6550(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4934);
}


// Reference entry 10ab6560; body size 6 bytes.
#line 1 "ENTRY_10ab6560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6560(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4930);
}


// Reference entry 10ab6570; body size 6 bytes.
#line 1 "ENTRY_10ab6570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6570(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a493c);
}


// Reference entry 10ab6580; body size 6 bytes.
#line 1 "ENTRY_10ab6580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6580(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4950);
}


// Reference entry 10ab6590; body size 6 bytes.
#line 1 "ENTRY_10ab6590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6590(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a494c);
}


// Reference entry 10ab65a0; body size 6 bytes.
#line 1 "ENTRY_10ab65a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab65a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4958);
}


// Reference entry 10ab65b0; body size 6 bytes.
#line 1 "ENTRY_10ab65b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab65b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a490c);
}


// Reference entry 10ab65c0; body size 6 bytes.
#line 1 "ENTRY_10ab65c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab65c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4928);
}


// Reference entry 10ab65d0; body size 6 bytes.
#line 1 "ENTRY_10ab65d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab65d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a492c);
}


// Reference entry 10ab65e0; body size 6 bytes.
#line 1 "ENTRY_10ab65e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab65e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a4954);
}


// Reference entry 10ab6600; body size 57 bytes.
#line 1 "ENTRY_10ab6600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab6600(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab8900; body size 57 bytes.
#line 1 "ENTRY_10ab8900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab8900(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockActionableListPage_vftable);
  param_1[4] = (uint)&Ext_SCMockActionableListPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockActionableListPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockActionableListPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab8a50; body size 57 bytes.
#line 1 "ENTRY_10ab8a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab8a50(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockButtonFirstPage_vftable);
  param_1[4] = (uint)&Ext_SCMockButtonFirstPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockButtonFirstPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockButtonFirstPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab8ba0; body size 57 bytes.
#line 1 "ENTRY_10ab8ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab8ba0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockButtonFourthPage_vftable);
  param_1[4] = (uint)&Ext_SCMockButtonFourthPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockButtonFourthPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockButtonFourthPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab8cf0; body size 57 bytes.
#line 1 "ENTRY_10ab8cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab8cf0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockButtonSecondPage_vftable);
  param_1[4] = (uint)&Ext_SCMockButtonSecondPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockButtonSecondPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockButtonSecondPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab8e40; body size 57 bytes.
#line 1 "ENTRY_10ab8e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab8e40(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockButtonSecondaryButtonFirstPage_vftable);
  param_1[4] = (uint)&Ext_SCMockButtonSecondaryButtonFirstPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockButtonSecondaryButtonFirstPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockButtonSecondaryButtonFirstPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab8f90; body size 57 bytes.
#line 1 "ENTRY_10ab8f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab8f90(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockButtonSecondaryButtonSecondPage_vftable);
  param_1[4] = (uint)&Ext_SCMockButtonSecondaryButtonSecondPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockButtonSecondaryButtonSecondPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockButtonSecondaryButtonSecondPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab90e0; body size 57 bytes.
#line 1 "ENTRY_10ab90e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab90e0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockButtonThirdPage_vftable);
  param_1[4] = (uint)&Ext_SCMockButtonThirdPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockButtonThirdPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockButtonThirdPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab9230; body size 57 bytes.
#line 1 "ENTRY_10ab9230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab9230(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockCaptionImageCarouselBarDebugPage_vftable);
  param_1[4] = (uint)&Ext_SCMockCaptionImageCarouselBarDebugPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockCaptionImageCarouselBarDebugPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockCaptionImageCarouselBarDebugPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab9380; body size 57 bytes.
#line 1 "ENTRY_10ab9380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab9380(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockCaptionImageCarouselDebugPage_vftable);
  param_1[4] = (uint)&Ext_SCMockCaptionImageCarouselDebugPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockCaptionImageCarouselDebugPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockCaptionImageCarouselDebugPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab94d0; body size 57 bytes.
#line 1 "ENTRY_10ab94d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab94d0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockCaptionImageDebugPage_vftable);
  param_1[4] = (uint)&Ext_SCMockCaptionImageDebugPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockCaptionImageDebugPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockCaptionImageDebugPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab9620; body size 57 bytes.
#line 1 "ENTRY_10ab9620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab9620(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockCheckboxLongItemPage_vftable);
  param_1[4] = (uint)&Ext_SCMockCheckboxLongItemPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockCheckboxLongItemPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockCheckboxLongItemPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab9770; body size 57 bytes.
#line 1 "ENTRY_10ab9770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab9770(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockCheckboxShortItemPage_vftable);
  param_1[4] = (uint)&Ext_SCMockCheckboxShortItemPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockCheckboxShortItemPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockCheckboxShortItemPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab98c0; body size 57 bytes.
#line 1 "ENTRY_10ab98c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab98c0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockDrumPickerPage_vftable);
  param_1[4] = (uint)&Ext_SCMockDrumPickerPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockDrumPickerPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockDrumPickerPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab9a10; body size 57 bytes.
#line 1 "ENTRY_10ab9a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab9a10(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockDrumPickerWithIconsAndSubtextPage_vftable);
  param_1[4] = (uint)&Ext_SCMockDrumPickerWithIconsAndSubtextPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockDrumPickerWithIconsAndSubtextPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockDrumPickerWithIconsAndSubtextPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab9b60; body size 57 bytes.
#line 1 "ENTRY_10ab9b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab9b60(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockDrumPickerWithIconsPage_vftable);
  param_1[4] = (uint)&Ext_SCMockDrumPickerWithIconsPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockDrumPickerWithIconsPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockDrumPickerWithIconsPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab9cb0; body size 57 bytes.
#line 1 "ENTRY_10ab9cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab9cb0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockDrumPickerWithSubtextPage_vftable);
  param_1[4] = (uint)&Ext_SCMockDrumPickerWithSubtextPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockDrumPickerWithSubtextPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockDrumPickerWithSubtextPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab9e00; body size 57 bytes.
#line 1 "ENTRY_10ab9e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab9e00(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockFieldAPage_vftable);
  param_1[4] = (uint)&Ext_SCMockFieldAPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockFieldAPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockFieldAPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ab9f50; body size 57 bytes.
#line 1 "ENTRY_10ab9f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10ab9f50(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockFieldBPage_vftable);
  param_1[4] = (uint)&Ext_SCMockFieldBPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockFieldBPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockFieldBPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aba0a0; body size 57 bytes.
#line 1 "ENTRY_10aba0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aba0a0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockListPage_vftable);
  param_1[4] = (uint)&Ext_SCMockListPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockListPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockListPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aba1f0; body size 57 bytes.
#line 1 "ENTRY_10aba1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aba1f0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockListWithIconsOnLeftPage_vftable);
  param_1[4] = (uint)&Ext_SCMockListWithIconsOnLeftPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockListWithIconsOnLeftPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockListWithIconsOnLeftPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aba340; body size 57 bytes.
#line 1 "ENTRY_10aba340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aba340(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockListWithIndicatorsPage_vftable);
  param_1[4] = (uint)&Ext_SCMockListWithIndicatorsPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockListWithIndicatorsPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockListWithIndicatorsPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aba490; body size 57 bytes.
#line 1 "ENTRY_10aba490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aba490(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockMarkdownFirstPage_vftable);
  param_1[4] = (uint)&Ext_SCMockMarkdownFirstPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockMarkdownFirstPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockMarkdownFirstPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aba5e0; body size 57 bytes.
#line 1 "ENTRY_10aba5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aba5e0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockMarkdownInputPage_vftable);
  param_1[4] = (uint)&Ext_SCMockMarkdownInputPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockMarkdownInputPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockMarkdownInputPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aba730; body size 57 bytes.
#line 1 "ENTRY_10aba730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aba730(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockMarkdownOutput2Page_vftable);
  param_1[4] = (uint)&Ext_SCMockMarkdownOutput2Page_vftable;
  param_1[0x23] = (uint)&Ext_SCMockMarkdownOutput2Page_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockMarkdownOutput2Page_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aba880; body size 57 bytes.
#line 1 "ENTRY_10aba880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aba880(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockMarkdownOutputPage_vftable);
  param_1[4] = (uint)&Ext_SCMockMarkdownOutputPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockMarkdownOutputPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockMarkdownOutputPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10aba9d0; body size 57 bytes.
#line 1 "ENTRY_10aba9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10aba9d0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockMarkdownSecondPage_vftable);
  param_1[4] = (uint)&Ext_SCMockMarkdownSecondPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockMarkdownSecondPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockMarkdownSecondPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10abab20; body size 57 bytes.
#line 1 "ENTRY_10abab20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10abab20(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockMarkdownThirdPage_vftable);
  param_1[4] = (uint)&Ext_SCMockMarkdownThirdPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockMarkdownThirdPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockMarkdownThirdPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10abac70; body size 57 bytes.
#line 1 "ENTRY_10abac70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10abac70(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockMultilinePickerPage_vftable);
  param_1[4] = (uint)&Ext_SCMockMultilinePickerPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockMultilinePickerPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockMultilinePickerPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10abadc0; body size 57 bytes.
#line 1 "ENTRY_10abadc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10abadc0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockRichSelectorPickerPage_vftable);
  param_1[4] = (uint)&Ext_SCMockRichSelectorPickerPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockRichSelectorPickerPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockRichSelectorPickerPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10abaf10; body size 57 bytes.
#line 1 "ENTRY_10abaf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10abaf10(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockScrollableActionableListPage_vftable);
  param_1[4] = (uint)&Ext_SCMockScrollableActionableListPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockScrollableActionableListPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockScrollableActionableListPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10abb060; body size 57 bytes.
#line 1 "ENTRY_10abb060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10abb060(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockScrollableListWithIconsOnLeftInCarouselPage_vftable);
  param_1[4] = (uint)&Ext_SCMockScrollableListWithIconsOnLeftInCarouselPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockScrollableListWithIconsOnLeftInCarouselPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockScrollableListWithIconsOnLeftInCarouselPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10abb1b0; body size 57 bytes.
#line 1 "ENTRY_10abb1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10abb1b0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockScrollableListWithIconsOnLeftPage_vftable);
  param_1[4] = (uint)&Ext_SCMockScrollableListWithIconsOnLeftPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockScrollableListWithIconsOnLeftPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockScrollableListWithIconsOnLeftPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10abb300; body size 57 bytes.
#line 1 "ENTRY_10abb300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10abb300(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockSelectProductDebugPage_vftable);
  param_1[4] = (uint)&Ext_SCMockSelectProductDebugPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockSelectProductDebugPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockSelectProductDebugPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10abb450; body size 57 bytes.
#line 1 "ENTRY_10abb450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10abb450(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockSelectionPage_vftable);
  param_1[4] = (uint)&Ext_SCMockSelectionPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockSelectionPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockSelectionPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10abb5a0; body size 57 bytes.
#line 1 "ENTRY_10abb5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10abb5a0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockSelectorPickerPage_vftable);
  param_1[4] = (uint)&Ext_SCMockSelectorPickerPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockSelectorPickerPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockSelectorPickerPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10abb6f0; body size 57 bytes.
#line 1 "ENTRY_10abb6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10abb6f0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockSelectorPickerWithDefaultPage_vftable);
  param_1[4] = (uint)&Ext_SCMockSelectorPickerWithDefaultPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockSelectorPickerWithDefaultPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockSelectorPickerWithDefaultPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10abb840; body size 67 bytes.
#line 1 "ENTRY_10abb840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __thiscall FUN_10abb840(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCMockUpdateDebugPage_vftable);
  param_1[4] = (uint)&Ext_SCMockUpdateDebugPage_vftable;
  param_1[0x23] = (uint)&Ext_SCMockUpdateDebugPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCMockUpdateDebugPage_vftable;
  param_1[0x38] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10abda90; body size 38 bytes.
#line 1 "ENTRY_10abda90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abda90(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPage_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPage_vftable;
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


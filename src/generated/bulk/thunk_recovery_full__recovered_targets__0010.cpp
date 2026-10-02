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
extern int _Xbad_function_call(...);
extern int _Xlength_error(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern int ceil(...);
extern int getSingleton(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int op_eq(...);
extern int operator_new(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_102bce30(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105a7950(...);
extern int thunk_FUN_105b71f0(...);
extern int thunk_FUN_105b7bd0(...);
extern int thunk_FUN_105b8a70(...);
extern int thunk_FUN_105b9d30(...);
extern int thunk_FUN_105bc210(...);
extern int thunk_FUN_105ca4f0(...);
extern int thunk_FUN_105cb470(...);
extern int thunk_FUN_105ccc10(...);
extern int thunk_FUN_105f3290(...);
extern int thunk_FUN_105f34e0(...);
extern int thunk_FUN_105f36d0(...);
extern int thunk_FUN_105f38c0(...);
extern int thunk_FUN_105f4090(...);
extern int thunk_FUN_105f4340(...);
extern int thunk_FUN_105f4630(...);
extern int thunk_FUN_105f46f0(...);
extern int thunk_FUN_105f47b0(...);
extern int thunk_FUN_105f4a20(...);
extern int thunk_FUN_105f5a00(...);
extern int thunk_FUN_105f5df0(...);
extern int thunk_FUN_105f60e0(...);
extern int thunk_FUN_10604d60(...);
extern int thunk_FUN_10604dd0(...);
extern int thunk_FUN_10604e40(...);
extern int thunk_FUN_10604eb0(...);
extern int thunk_FUN_10604f20(...);
extern int thunk_FUN_10623fa0(...);
extern int thunk_FUN_10648010(...);
extern int thunk_FUN_106d83f0(...);
extern int thunk_FUN_106da030(...);
extern int thunk_FUN_109e1620(...);
extern int thunk_FUN_10bcef80(...);
extern int thunk_FUN_10dd1260(...);
extern int thunk_FUN_10dd3190(...);
extern int thunk_FUN_10dd31f0(...);
extern int thunk_FUN_10eac8d0(...);
extern int thunk_FUN_10eb4020(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
extern int thunk_FUN_10eb4cc0(...);
extern int thunk_FUN_10eb4d80(...);
extern int thunk_FUN_10eb4e80(...);
extern int thunk_FUN_10eb64f0(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ebc1e0(...);
extern int thunk_FUN_10ec7200(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_111c05a0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11248b40(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1124f2e0(...);
extern int thunk_FUN_1124f320(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_1125b030(...);
extern int thunk_FUN_11261760(...);
extern int thunk_FUN_11261e50(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11882ff0;
extern int DAT_11884800;
extern int DAT_1188f3d4;
extern int DAT_11d330dc;
extern int DAT_12126b84;
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
extern int DAT_121a2238;
extern int DAT_121a223c;
extern int DAT_121a2240;
extern int DAT_121a2244;
extern int DAT_121a2248;
extern int DAT_121a2294;
extern int DAT_121a2298;
extern int DAT_121a229c;
extern int DAT_121a22a0;
extern int DAT_121a22a4;
extern int DAT_121a22a8;
extern int DAT_121a22ac;
extern int DAT_121a22b0;
extern int DAT_121a22b4;
extern int DAT_121a22b8;
extern int DAT_121a22bc;
extern int DAT_121a22c0;
extern int DAT_121a22c4;
extern int DAT_121a22c8;
extern int DAT_121a22cc;
extern int DAT_121a22d0;
extern int DAT_121a22d4;
extern int DAT_121a22d8;
extern int DAT_121a22dc;
extern int DAT_121a22e0;
extern int DAT_121a22e4;
extern int DAT_121a22e8;
extern int DAT_121a22ec;
extern int DAT_121a22f0;
extern int DAT_121a22f4;
extern int DAT_121a22f8;
extern int DAT_121a22fc;
extern int DAT_121a2300;
extern int DAT_121a2304;
extern int DAT_121a2308;
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
extern int Ext_RControlAIOOpCB_vftable;
extern int Ext_RControlAIOOpImpl_vftable;
extern int Ext_RControlAIOOpRefBase_vftable;
extern int Ext_RControlAIOOpRef_vftable;
extern int Ext_RFileTransferDownloadAIOOp_vftable;
extern int Ext_RUpnpAISetAudioInputAttributesAIOOp_vftable;
extern int Ext_RUpnpAISetLineInLevelAIOOp_vftable;
extern int Ext_RUpnpAVTSetPlayModeAIOOp_vftable;
extern int Ext_RUpnpAsyncIOOperation_vftable;
extern int Ext_RUpnpDPGetZoneAttributesAIOOp_vftable;
extern int Ext_RUpnpDPSetAutoplayRoomUUIDAIOOp_vftable;
extern int Ext_RUpnpDPSetAutoplayVolumeAIOOp_vftable;
extern int Ext_RUpnpDPSetUseAutoplayVolumeAIOOp_vftable;
extern int Ext_RUpnpHTCSetIRRepeaterStateAIOOp_vftable;
extern int Ext_RUpnpHTCSetLEDFeedbackStateAIOOp_vftable;
extern int Ext_RUpnpRCSetOutputFixedAIOOp_vftable;
extern int Ext_RUpnpRCSetRoomCalibrationStatusAIOOp_vftable;
extern int Ext_SCAddProductAddAnotherProductPage_vftable;
extern int Ext_SCAddProductConnectionLastResortPage_vftable;
extern int Ext_SCAddProductContinueConfigurationPage_vftable;
extern int Ext_SCAddProductDeactivatedErrorPage_vftable;
extern int Ext_SCAddProductDefaultIntroPage_vftable;
extern int Ext_SCAddProductFatalVerificationErrorPage_vftable;
extern int Ext_SCAddProductFinishConfigurationPage_vftable;
extern int Ext_SCAddProductLegacyOnlyPage_vftable;
extern int Ext_SCAddProductNotificationIntroPage_vftable;
extern int Ext_SCAddProductOutroFailurePage_vftable;
extern int Ext_SCAddProductOutroPage_vftable;
extern int Ext_SCAddProductSelectionIntroPage_vftable;
extern int Ext_SCAddProductTempWireInstructionsPage_vftable;
extern int Ext_SCAddProductVanishedProductErrorPage_vftable;
extern int Ext_SCArray_vftable;
extern int Ext_SCAssetSet_vftable;
extern int Ext_SCAudioCompressionSelectAction_vftable;
extern int Ext_SCChangeEmailWizard_vftable;
extern int Ext_SCChickenExitAction_vftable;
extern int Ext_SCConditionalElementTreeIfChainInterface_vftable;
extern int Ext_SCConditionalElementTreeNoAppendInterface_vftable;
extern int Ext_SCConditionalElementTree_vftable;
extern int Ext_SCConditionalVectorBuilderTreeIfChainInterface_vftable;
extern int Ext_SCConditionalVectorBuilderTree_vftable;
extern int Ext_SCEventSubscriptionImpl_EventSink_vftable;
extern int Ext_SCFactoryResetAction_vftable;
extern int Ext_SCFileTransferDownloadOp_vftable;
extern int Ext_SCForgetHouseholdAction_vftable;
extern int Ext_SCHideOfflineDeviceSupport_vftable;
extern int Ext_SCHouseholdEventSink_vftable;
extern int Ext_SCIActionDelegate_vftable;
extern int Ext_SCIHouseholdManager_vftable;
extern int Ext_SCIObjImpl_vftable;
extern int Ext_SCIObj_vftable;
extern int Ext_SCIOpCBDelegate_vftable;
extern int Ext_SCIOpRenderingControlSetRoomCalibrationStatus_vftable;
extern int Ext_SCIResource_vftable;
extern int Ext_SCIncrementHHSwgenAndOnlineUpdateWizardAction_vftable;
extern int Ext_SCLegacyWelcomeLoginWizardAction_vftable;
extern int Ext_SCMenuSelectSettingActionBase_vftable;
extern int Ext_SCNewWizControllerFor_vftable;
extern int Ext_SCNewWizPageFor_vftable;
extern int Ext_SCNewWizPage_vftable;
extern int Ext_SCNewWizStateTypeFor_vftable;
extern int Ext_SCNewWizStateType_vftable;
extern int Ext_SCOpFileDownload_vftable;
extern int Ext_SCOpImpl_vftable;
extern int Ext_SCOpPerformQueue_vftable;
extern int Ext_SCResetDismissedServicesAction_vftable;
extern int Ext_SCSearchHistoryToggleAction_vftable;
extern int Ext_SCSetupFileUploadHelper_SCFileTransferUploadOp_vftable;
extern int Ext_SCSetupFileUploadHelper_SetupFileTransferUploadOp;
extern int Ext_SCStaleSessionToggleAction_vftable;
extern int Ext_SCSubmitDiagsWizardDonePage_vftable;
extern int Ext_SCSubmitDiagsWizardErrorPage_vftable;
extern int Ext_SCSubmitDiagsWizardIntroPage_vftable;
extern int Ext_SCSubmitDiagsWizardSubmittingPage_vftable;
extern int Ext_SCSubmitDiagsWizard_vftable;
extern int Ext_SCSubwizStateFor_vftable;
extern int Ext_SCSubwizState_vftable;
extern int Ext_SCSwgenDowngradeProductCheckRunningLegacySWPage_vftable;
extern int Ext_SCSwgenDowngradeProductConnectingProductPage_vftable;
extern int Ext_SCSwgenDowngradeProductFirmwareDowngradeIntroPage_vftable;
extern int Ext_SCSwgenDowngradeProductFirmwareDowngradingPage_vftable;
extern int Ext_SCSwgenDowngradeProductIntroPage_vftable;
extern int Ext_SCSwgenDowngradeProductJoinProductFailurePage_vftable;
extern int Ext_SCSwgenDowngradeProductOptionsPage_vftable;
extern int Ext_SCSwgenDowngradeProductOutroPage_vftable;
extern int Ext_SCSwgenDowngradeProductSearchingPage_vftable;
extern int Ext_SCSwgenDowngradeProductSearchingRetryPage_vftable;
extern int Ext_SCSwgenDowngradeProductSelectionPage_vftable;
extern int Ext_SCTimerUser_vftable;
extern int Ext_SCToggleBooleanSettingActionBase_vftable;
extern int Ext_SCWifiConfigAskNetworkModifiedPage_vftable;
extern int Ext_SCWifiConfigAskUnplugEthernetPage_vftable;
extern int Ext_SCWifiConfigInformWiredConnectionPage_vftable;
extern int Ext_SCWifiConfigPlayerOutOfDatePage_vftable;
extern int Ext_SCWifiConfigSetupCardNoNetworkPage_vftable;
extern int Ext_SCWifiConfigSetupCardNothingFoundPage_vftable;
extern int Ext_SCWifiConfigStartOpenApPage_vftable;
extern int Ext_SCWifiConfigSuccessPage_vftable;
extern int Ext_SCWifiConfigWrongHHIDPage_vftable;
extern int Ext_SCWizard_vftable;
extern int Ext_SetupFileTransferUploadOp_vftable;
extern int g_lSCObjCount;
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_115aab40[];
extern undefined1 LAB_115ab32f[];
extern undefined1 LAB_115afdb0[];
extern undefined1 LAB_115b0050[];
extern undefined1 LAB_115b9c50[];
extern undefined1 LAB_115e0ff0[];
extern undefined1 LAB_11728460[];
extern int *stack0x00000000;
extern int *stack0xfffffffc;
extern void *ExceptionList;
typedef void *E9;
typedef void *SCORDS;
typedef void *WARNING;
struct AVTransport { char _pad; AVTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Clearing { char _pad; Clearing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Destructor { char _pad; Destructor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DeviceProperties { char _pad; DeviceProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Entering { char _pad; Entering(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct HTControl { char _pad; HTControl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RenderingControl { char _pad; RenderingControl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIClipboardDelegate { char _pad; SCIClipboardDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIHapticDelegate { char _pad; SCIHapticDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIHouseholdManager { char _pad; SCIHouseholdManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpRenderingControlSetRoomCalibrationStatus { char _pad; SCIOpRenderingControlSetRoomCalibrationStatus(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIResource { char _pad; SCIResource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIStringFromListSettingsProperty { char _pad; SCIStringFromListSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetAutoplayVolume { char _pad; SetAutoplayVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetIRRepeaterState { char _pad; SetIRRepeaterState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetLEDFeedbackState { char _pad; SetLEDFeedbackState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetPlayMode { char _pad; SetPlayMode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetRoomCalibrationStatus { char _pad; SetRoomCalibrationStatus(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetUseAutoplayVolume { char _pad; SetUseAutoplayVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetupFileTransferUploadOp { char _pad; SetupFileTransferUploadOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Uploading { char _pad; Uploading(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Wizard { char _pad; Wizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Stub_SCLibrary { Stub_SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int getSingleton(...); };
struct Stub_SCStr { Stub_SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int SCStr(...); int int_allocRep(...); int int_release(...); int op_eq(...); };
struct Stub_std { Stub_std(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int _Xbad_function_call(...); int _Xlength_error(...); };
struct Recovered_Bulk { char _pad; /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b17e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105b25b0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105b25e0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105b2e20(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105b2e40(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105b2e60(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105b2ec0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105b2ed0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105b33f0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b6020(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b6160(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105b6290(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b62b0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b6310(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105b71b0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b8190(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b8290(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b82a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b8330(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b8380(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b83a0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b83c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b83d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b83e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b8410(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_105b84c0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b84f0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_105b85f0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b8760(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b9160(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b9200(int param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b9260(int param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_105ba5e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105ba640(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105bad10(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_105bad40(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_105bad80(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105bb380(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105bb440(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105bb4b0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105bb7a0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105bb860(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105bc490(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105bc4a0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105bd040(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105bd050(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105bd070(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105c2ed0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105c2ef0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105c2f70(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105c2ff0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105c3070(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105c30f0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105c31f0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105c3210(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105c3230(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105c3250(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105c37f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105c9cc0(undefined4 *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105c9fc0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105ca040(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105ca060(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105ca160(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105ca450(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105ce290(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105ce2b0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105ce2d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105ce2e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105ce9b0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105cebc0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105cec60(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105ced00(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105ceda0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105ceee0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105cfb50(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105d48a0(undefined2 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105d48b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_105d48c0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105d49e0(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105d4a20(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105d4a40(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_105d6c90(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_105d6cd0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105d8be0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105dc1d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_105dd510(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105e77b0(undefined4 param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105ed300(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105ed310(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_105ef920(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f2000(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f21d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f21e0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f21f0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f2200(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f2410(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f2460(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f24b0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f2500(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f2550(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f25a0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f25f0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f2640(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f2c90(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f2cb0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f2cd0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f3170(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f31a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f31c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f31e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f3d90(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f3f60(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f50f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f5130(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f5170(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f51b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f5830(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f5890(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f5c30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f5c90(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f5ff0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f6420(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f8d00(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f8d20(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f8d40(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f8d60(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f8d80(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f8da0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f8dc0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f8de0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f8e20(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f8e60(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f8ea0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f8ee0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f8f20(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f8f60(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f91d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f9210(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f9340(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f94a0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f9600(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f9760(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f9890(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f9a40(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_105f9dc0(undefined1 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105faa60(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105fabb0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105fb540(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105fbc90(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105fc560(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105fc6b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105fc9b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105fcb00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105fe9e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10601330(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10603ca0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10603cd0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10603d00(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10603d30(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10603d60(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10603d90(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10603e40(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10603e90(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10603ed0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10603f10(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10603f50(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10604a20(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10604a40(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10604a60(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10604b50(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10604b70(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10604b90(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10604bb0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10604bd0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10604bf0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10604c10(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10604c30(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10604c50(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10604c70(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10610c40(SCStr *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10610e70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10619710(undefined4 param_2,char param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10619780(undefined4 param_2,char param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106197f0(undefined4 param_2,char param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1061c270(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1061c2b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1061c2f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1061c330(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1061c5b0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1061c5c0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1061c5d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1061c5f0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1061cad0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1061e3d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1061e7f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1061e850(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1061e9b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1061eb00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1061ec50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10623c00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10623c40(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10624400(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10626fd0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10626fe0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10626ff0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10627010(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106270d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10627bf0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10628120(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106286e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10628830(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10628f70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106292d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10629630(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10629780(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10629ae0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10629c30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10629f90(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1062ddc0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1062de40(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1062de90(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10630990(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10633d80(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1063a6d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10647440(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10647450(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10647460(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10647b80(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10647be0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106497d0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10649850(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1064d580(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1064d5e0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1064d9f0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1064dc60(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1064ebc0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1064ed10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1064ee60(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1064efb0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1064f340(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1064f490(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10650030(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10650540(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106506c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10650810(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106513d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10651560(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106518c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10653f20(SCStr *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106541b0(undefined4 *param_2); };
using namespace std;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b1030(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b1070(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b1080(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b1090(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b10a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b10e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_105b10f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b1100(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b1240(int param_1,undefined4 *param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b1280(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b12c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b1580(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b1630(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b1640(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105b1650(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105b1660(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b1be0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105b1ef0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105b1f20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105b1fb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105b2340(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105b2370(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105b23b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b2440(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105b2450(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105b2460(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105b2470(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b2480(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b2490(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105b2d10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105b2d20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b2d80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b2d90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105b2da0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105b2db0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b33e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b3da0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b3dc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_105b4370(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105b4880(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b5080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105b5230(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105b5260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105b5290(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b5f80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b5fa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b5fc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b5fe0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b6000(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b6120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b6140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b6180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b62d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b62f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b6340(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b6350(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b6370(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b6390(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b63a0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b63b0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b63c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b63d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b63e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b6530(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b6f70(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b6f90(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b6fb0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105b7050(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7070(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7090(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b70a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b70b0(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_105b7110(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b7190(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b71d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b71e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7470(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7480(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7490(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b74a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b74b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b74c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b74d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b74e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b74f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7500(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7510(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b7520(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7890(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b78b0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b78d0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b78f0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7960(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7970(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7980(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7990(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b79a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b79b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b79c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b79d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b79e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b79f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7a00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7a10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7a20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7a30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7a40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7e40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7e50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7e60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7e70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7e80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7e90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b7ea0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b7eb0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b7f60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b7f90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b8340(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b8360(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b83f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b8430(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b8450(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b8470(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b8480(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b8490(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b84a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b84b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b8550(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b85a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b8740(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b8860(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b8880(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b91d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b9960(undefined4 *param_1);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_105b9980(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ba420(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105ba600(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105ba610(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105ba620(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105ba630(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_105ba660(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105bac90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105bacc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105baee0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105baf00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105baf10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105baf90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bafa0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bafb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bafc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bafd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bafe0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105baff0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bb000(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bb010(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bb020(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bb030(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bb040(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bb050(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bb060(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bb070(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bb080(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bb090(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bb0a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bb0b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bb0c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bb0d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bb0e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105bb3f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105bb400(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bb410(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105bb420(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105bb430(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105bc120(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105bc190(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105bc280(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bc480(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105bc8d0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105bc8e0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 FUN_105bc8f0(float param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105bce10(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105bce60(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105bceb0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105bcf00(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bd060(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bd3e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105bd540(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_105be8b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_105be8f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_105be9e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105beb90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_105bed30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_105bef70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105bef90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_105beff0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105bfde0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_105c0230(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_105c0240(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105c02f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105c0300(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105c0310(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105c0320(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105c0330(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105c0340(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105c0350(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c0490(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105c0ba0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105c2220(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105c2240(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105c29f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105c3300(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105c3320(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105c3780(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105c3eb0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c43e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105c43f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105c4400(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c4410(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105c4420(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c4430(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105c4440(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c4450(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105c4460(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c4470(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105c4480(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c4490(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c44a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c44b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c44c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c44d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c5840(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c5850(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c5860(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c5870(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c9b50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c9b60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c9b70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c9b80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105c9b90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105c9ba0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105c9bd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105c9c00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105c9c30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105c9c60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105c9ca0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105ca4c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105caf40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105caf50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105caf60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105caf70(int param_1,int param_2,int param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105cb6e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105cc410(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105cc8e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ccf10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105cd270(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105cd310(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105cd840(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105cd850(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105cd860(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105cd870(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105cd880(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105cd8a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105cd8b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_105cd8d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_105cd8e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_105cd8f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105cda50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105cda60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105cda80(int param_1,int param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdbe0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdc10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdc40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdc70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdca0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdcd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdd00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdd30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cddf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cde20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdf10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdf40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105ce0d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105ce1b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105ce2f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105ce310(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105ce320(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105ce440(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cfc80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cfce0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cffd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105d0000(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105d0010(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105d0f40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105d24b0(undefined4 *param_1);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_105d2500(undefined4 *param_1);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_105d2540(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d2fe0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3010(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3040(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3070(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d30a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d30d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3100(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3130(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3160(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3190(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d31c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d31f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3340(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d37e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3800(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3810(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3e10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3ef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d4190(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105d48d0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d48e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d48f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105d4900(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d4910(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d4920(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105d4930(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105d4940(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105d4950(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d4960(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d4970(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d4980(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d4990(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d49a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d49b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d49c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d49d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d6ee0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d6ef0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d6f00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d6f10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d6f20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d6f30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105d6f50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105d6f60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d6f70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d6f80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105d7540(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105d7550(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105d8630(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105d87a0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105d8810(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105d8eb0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105d8ec0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d8ee0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105da410(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105dc110(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105dc130(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105dc220(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105dd580(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105dd5c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_105dd6a0(SCStr *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105de470(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105de480(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_105e2b50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_105e37f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_105e3800(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_105e3810(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105e3f20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105e3f30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105e3f40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105e3f50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105e66d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105e66e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105e66f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105e6700(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105e6710(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105e6d50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105e6d80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105e6db0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105e6de0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105e6e10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105e6e40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105e6e70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105e6ea0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105e6ec0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105e6ee0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105e70e0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105e7100(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105e7120(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105e7140(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105e7160(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105e7180(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105e71a0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105e71c0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105e76d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105e7790(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105e77a0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105e9f80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_105ea0f0(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_105ea160(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ea7b0(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_105ea850(SCStr *param_1,SCStr *param_2,SCStr *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_105ea890(SCStr *param_1,SCStr *param_2,SCStr *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ea8d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ea8e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105eb3d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105ebaf0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_105ebb40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_105ebb60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_105ebbf0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ebc50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ebc70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ebd00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ebd20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105ebd30(undefined4 *param_1,SCStr *param_2,SCStr *param_3,SCStr *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ebdc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ebde0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ebe70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ebe90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ebee0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ebf00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ebf90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_105ec110(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_105ec180(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ec7d0(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ec8b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ec8d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ec960(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105eec80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105eed20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105eeed0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ef090(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ef110(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ef210(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_105f1e50(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105f2120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f22e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f2300(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f2320(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f2340(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f2360(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f2440(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f2490(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f24e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f2530(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f2580(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f25d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f2620(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f2a70(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f2aa0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f2ad0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f3d30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f3d40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f3d50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f3d60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f3d70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f3d80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f4040(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f4050(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f4060(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f4070(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f4080(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4be0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4c00(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4c20(undefined4 param_1,undefined4 *param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4ce0(undefined4 param_1,undefined4 *param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4d60(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4d80(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4da0(undefined4 param_1,undefined4 *param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f5020(undefined4 param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f5030(undefined4 param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f5040(undefined4 param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f5050(undefined4 param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f52b0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f52d0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f52f0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5310(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5330(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5350(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5370(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5390(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f53b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f53c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f53d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f53e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f53f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5400(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5410(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5420(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5430(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5440(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5450(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5460(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5470(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5480(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5490(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f54a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f54b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f54c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f54d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f54e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f54f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5500(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5510(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5520(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5530(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5540(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5550(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5560(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5570(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5580(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5590(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f55a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f55b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f55c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f55d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f55e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f55f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5600(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5610(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5620(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5630(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5640(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5650(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5660(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5670(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5680(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5690(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f56a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f56b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f56c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f56d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f56e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f56f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5700(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5710(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5720(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5730(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5750(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_105f5760(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5770(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5780(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5790(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f57a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f57b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f57c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f57d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f57e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f57f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5800(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5810(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105f5820(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f5ba0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f5bf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f5c00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f5c10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f5c20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f5fa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f6390(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f6400(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f6410(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f7dc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f8e00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f8e40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f8e80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f8ec0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f8f00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f8f40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f8f80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105f8fa0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105f8fb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105f8fc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105f8fd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105f8fe0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f9320(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f9480(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f95e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f9740(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f9870(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105febc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff000(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff010(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff020(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff030(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff040(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff050(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff060(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff070(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff090(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff0a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff0b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff0d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff0e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff0f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff100(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff110(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff130(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff150(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff160(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff190(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff1a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff500(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff530(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff590(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff5c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff5f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff620(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff650(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff680(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff6b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff710(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff740(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff770(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106004c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106004f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600510(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600540(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600590(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106005b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106005e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600600(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600630(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600650(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600680(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106006a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106006d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106006f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600720(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600740(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600770(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600790(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106007c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106007e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600810(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600910(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600930(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600980(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106009b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106009d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600a00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600a20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600a50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600a70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600aa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600b60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600c20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600c40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600c70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600c90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600cc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600d80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600da0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600dd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600df0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600e20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600e40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600e70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600e90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600ec0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106012e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10601310(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106014a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106014b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106014c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106014d0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_106014e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_106014f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10601500(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10601510(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10601520(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106043c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106043d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106043e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106043f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10604400(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10604410(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10604420(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10604430(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10604440(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10604450(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10604460(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10604480(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10604490(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106044a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106044b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106044c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106044d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106044e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10604500(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10604510(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10604520(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10604530(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10604540(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10604550(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10604560(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10604570(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10604580(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10604590(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106045a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106045b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106045c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106050e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106050f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10605100(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10605110(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10605130(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10605140(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10605150(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10605160(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10605180(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10608100(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10610c10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10610c20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10610c30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10613c70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10613c80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10613c90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618c00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618c10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618c20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618c30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618c40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618c50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618c60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618c70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618c80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618c90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618ca0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618cb0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618cc0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618cd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618ce0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618cf0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618d00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618d10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618d20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618d30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618d40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618d50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618d60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618d70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618d80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618d90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618da0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10618db0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618dc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618dd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618de0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618df0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618e00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618e10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618e20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618e30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618e40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618e50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618e60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618e70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618e80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618e90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618ea0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618eb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618ec0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618ed0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618ee0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618f00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618f10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618f20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618f30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618f40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618f50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618f60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618f70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618f80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618f90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618fa0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618fb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618fc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618fd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618fe0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10618ff0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10619000(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10619010(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10619020(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10619030(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10619040(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10619050(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10619060(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10619070(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10619080(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10619090(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106196f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10619860(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10619880(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10619890(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10619a50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10619a60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10619a70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10619a80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10619a90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10619aa0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10619ab0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10619ac0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10619ad0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10619ae0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1061c260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061c430(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061c460(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061c490(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061c4c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061c4f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061c520(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1061c540(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1061c550(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1061c560(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1061c570(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1061c580(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1061c590(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1061c5a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1061c600(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1061c620(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1061cf20(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1061cf30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1061cf40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1061dce0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061dd70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1061e380(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1061e390(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1061e3a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1061e3b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1061e3c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1061e7e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f1f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f2c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f2d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f2e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f2f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f670(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f690(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f6c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f6e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f710(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f7e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1061f870(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1061f880(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10621c70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10623180(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10623190(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106231a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106231b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106231c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106231e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106231f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10623200(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10623220(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10623be0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10623df0(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10623e70(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10623ef0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10623f00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10623f10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106241a0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106241c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106241d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106241e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106241f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624200(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624210(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624220(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624230(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624240(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624250(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624260(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624270(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624280(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624290(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106242a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106242b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106242c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106242d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106242e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106242f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624300(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624310(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624320(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624330(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624340(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624350(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624360(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624370(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624380(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10624390(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106243a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * FUN_106243c0(uint *param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106243f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10625f80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c280(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c2d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c480(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c4b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c4e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c510(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c540(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c570(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c5d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c600(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c630(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c660(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c690(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c6c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c6f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c720(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062ce80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062ced0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062cf20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062cf70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062cfc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d0e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d1f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d300(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d350(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d530(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d580(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d5d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d600(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d620(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d670(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d6c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d710(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d760(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d790(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d7b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d800(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d850(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d8a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d9c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062da10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1062de50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1062de60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1062de70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_1062de80(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10630710(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106307d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106307f0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10630fc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10633d70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10633eb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1063a6f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1063db70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_1063db80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1063e480(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642cd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642ce0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642cf0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642d00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642d10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642d20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642d30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642d40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642d50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642d60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642d70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642d80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642d90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642da0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642db0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642dc0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642dd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642de0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642df0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642e00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642e10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642e20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642e30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642e40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642e50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642e60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642e70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642e80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642e90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10642ea0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642eb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642ec0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642ed0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642ee0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642ef0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642f00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642f10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642f20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642f30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642f40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642f50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642f60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642f70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642f80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642f90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642fa0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642fb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642fc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642fd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642fe0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10642ff0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643000(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643010(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643020(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643040(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643050(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643060(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643070(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643080(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643090(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106430a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106430b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106430c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106430d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106430e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106430f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643100(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643110(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643120(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643130(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643140(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643150(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643160(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643170(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643180(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10643190(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106431a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106431b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106431d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10643780(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106473e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106473f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10647400(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10647430(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10647470(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10647980(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106479a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106479c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106479e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10647a00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10647a20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10647ba0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10647bc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10648000(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10648180(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106481a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10648510(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10648520(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106485b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106485c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106488d0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106488f0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10648a10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10648a20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10648a30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10648be0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10648cb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10648cc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10648d00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10648d10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10648d20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10648d30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10648d40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10648d50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10648d60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10648d70(int *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10648d90(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10648f70(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10648f80(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10648fa0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10648fc0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10648fe0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10648ff0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649000(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649040(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649050(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649090(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106490a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106490b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106490c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106490d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106490e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106490f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649100(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649110(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649120(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649130(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649140(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649150(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649160(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649170(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649180(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649190(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106491a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106491b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106491c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106491d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106491e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106491f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649200(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649210(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649220(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649230(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649240(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649250(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649260(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649270(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649280(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649290(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106492a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106492b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106492c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106492d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106492e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106492f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10649690(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106496a0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1064bcc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1064bd20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1064d4a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1064d4b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1064d540(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1064d560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1064d5a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1064d5c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1064d600(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1064d620(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1064d630(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1064d640(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1064d650(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1064d6e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1064d730(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1064d780(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1064da30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106541f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10654210(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654620(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654630(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654640(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654650(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654660(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654670(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654680(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654690(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106546a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106546b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106546c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106546d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106546e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106546f0(undefined4 *param_1);
// Reference entry 105b1030; body size 5 bytes.
#line 1 "ENTRY_105b1030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b1030(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b1070; body size 5 bytes.
#line 1 "ENTRY_105b1070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b1070(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b1080; body size 5 bytes.
#line 1 "ENTRY_105b1080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b1080(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b1090; body size 5 bytes.
#line 1 "ENTRY_105b1090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b1090(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b10a0; body size 5 bytes.
#line 1 "ENTRY_105b10a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b10a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b10e0; body size 5 bytes.
#line 1 "ENTRY_105b10e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b10e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b10f0; body size 6 bytes.
#line 1 "ENTRY_105b10f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_105b10f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIHouseholdManager");
}


// Reference entry 105b1100; body size 38 bytes.
#line 1 "ENTRY_105b1100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b1100(int param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2);
    return;
  }
                    
                    
                    
  ((Stub_std *)(0))->_Xbad_function_call();
  return;
}


// Reference entry 105b1240; body size 40 bytes.
#line 1 "ENTRY_105b1240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b1240(int param_1,undefined4 *param_2,undefined4 param_3)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
                    
                    
  ((Stub_std *)(0))->_Xbad_function_call();
  return;
}


// Reference entry 105b1280; body size 5 bytes.
#line 1 "ENTRY_105b1280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b1280(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b12c0; body size 5 bytes.
#line 1 "ENTRY_105b12c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b12c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b1580; body size 27 bytes.
#line 1 "ENTRY_105b1580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b1580(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b1630; body size 3 bytes.
#line 1 "ENTRY_105b1630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105b1630(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b1640; body size 3 bytes.
#line 1 "ENTRY_105b1640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105b1640(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b1650; body size 10 bytes.
#line 1 "ENTRY_105b1650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105b1650(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 105b1660; body size 10 bytes.
#line 1 "ENTRY_105b1660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105b1660(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 105b17e0; body size 42 bytes.
#line 1 "ENTRY_105b17e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b17e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&Ext_SCEventSubscriptionImpl_EventSink_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b1be0; body size 9 bytes.
#line 1 "ENTRY_105b1be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b1be0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIHouseholdManager_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b1ef0; body size 34 bytes.
#line 1 "ENTRY_105b1ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105b1ef0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}


// Reference entry 105b1f20; body size 34 bytes.
#line 1 "ENTRY_105b1f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105b1f20(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}


// Reference entry 105b1fb0; body size 19 bytes.
#line 1 "ENTRY_105b1fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105b1fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 105b2340; body size 7 bytes.
#line 1 "ENTRY_105b2340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105b2340(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 105b2370; body size 18 bytes.
#line 1 "ENTRY_105b2370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105b2370(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 105b23b0; body size 18 bytes.
#line 1 "ENTRY_105b23b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105b23b0(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 105b2440; body size 3 bytes.
#line 1 "ENTRY_105b2440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105b2440(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105b2450; body size 7 bytes.
#line 1 "ENTRY_105b2450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105b2450(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 105b2460; body size 8 bytes.
#line 1 "ENTRY_105b2460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105b2460(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 105b2470; body size 8 bytes.
#line 1 "ENTRY_105b2470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105b2470(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 105b2480; body size 3 bytes.
#line 1 "ENTRY_105b2480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105b2480(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105b2490; body size 3 bytes.
#line 1 "ENTRY_105b2490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105b2490(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105b25b0; body size 29 bytes.
#line 1 "ENTRY_105b25b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105b25b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  ((Stub_std *)(0))->_Xbad_function_call();
}


// Reference entry 105b25e0; body size 29 bytes.
#line 1 "ENTRY_105b25e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105b25e0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  ((Stub_std *)(0))->_Xbad_function_call();
}


// Reference entry 105b2d10; body size 8 bytes.
#line 1 "ENTRY_105b2d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105b2d10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 105b2d20; body size 8 bytes.
#line 1 "ENTRY_105b2d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105b2d20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 105b2d80; body size 4 bytes.
#line 1 "ENTRY_105b2d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105b2d80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 105b2d90; body size 4 bytes.
#line 1 "ENTRY_105b2d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105b2d90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 105b2da0; body size 7 bytes.
#line 1 "ENTRY_105b2da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105b2da0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 105b2db0; body size 7 bytes.
#line 1 "ENTRY_105b2db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105b2db0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 105b2e20; body size 26 bytes.
#line 1 "ENTRY_105b2e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105b2e20(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 105b2e40; body size 26 bytes.
#line 1 "ENTRY_105b2e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105b2e40(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 105b2e60; body size 76 bytes.
#line 1 "ENTRY_105b2e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105b2e60(int *param_2)
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


// Reference entry 105b2ec0; body size 10 bytes.
#line 1 "ENTRY_105b2ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105b2ec0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 105b2ed0; body size 10 bytes.
#line 1 "ENTRY_105b2ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105b2ed0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 105b33e0; body size 9 bytes.
#line 1 "ENTRY_105b33e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105b33e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105b33f0; body size 32 bytes.
#line 1 "ENTRY_105b33f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105b33f0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 105b3da0; body size 24 bytes.
#line 1 "ENTRY_105b3da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105b3da0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x60) + 0x1c))());
    if (cVar1 != '\0') {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 105b3dc0; body size 24 bytes.
#line 1 "ENTRY_105b3dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105b3dc0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x68) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x68) + 0x1c))());
    if (cVar1 != '\0') {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 105b4370; body size 6 bytes.
#line 1 "ENTRY_105b4370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_105b4370(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIHouseholdManager");
}


// Reference entry 105b4880; body size 7 bytes.
#line 1 "ENTRY_105b4880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105b4880(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 105b5080; body size 3 bytes.
#line 1 "ENTRY_105b5080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105b5080(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105b5230; body size 28 bytes.
#line 1 "ENTRY_105b5230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105b5230(undefined4 *param_1)

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


// Reference entry 105b5260; body size 28 bytes.
#line 1 "ENTRY_105b5260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105b5260(undefined4 *param_1)

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


// Reference entry 105b5290; body size 28 bytes.
#line 1 "ENTRY_105b5290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105b5290(undefined4 *param_1)

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


// Reference entry 105b5f80; body size 25 bytes.
#line 1 "ENTRY_105b5f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b5f80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b5fa0; body size 18 bytes.
#line 1 "ENTRY_105b5fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b5fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b5fc0; body size 18 bytes.
#line 1 "ENTRY_105b5fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b5fc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b5fe0; body size 25 bytes.
#line 1 "ENTRY_105b5fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b5fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b6000; body size 25 bytes.
#line 1 "ENTRY_105b6000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b6000(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b6020; body size 22 bytes.
#line 1 "ENTRY_105b6020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b6020(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b6120; body size 18 bytes.
#line 1 "ENTRY_105b6120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b6120(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b6140; body size 18 bytes.
#line 1 "ENTRY_105b6140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b6140(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b6160; body size 22 bytes.
#line 1 "ENTRY_105b6160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b6160(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b6180; body size 18 bytes.
#line 1 "ENTRY_105b6180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b6180(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b6290; body size 26 bytes.
#line 1 "ENTRY_105b6290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105b6290(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 105b62b0; body size 22 bytes.
#line 1 "ENTRY_105b62b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b62b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b62d0; body size 18 bytes.
#line 1 "ENTRY_105b62d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b62d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b62f0; body size 25 bytes.
#line 1 "ENTRY_105b62f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b62f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b6310; body size 33 bytes.
#line 1 "ENTRY_105b6310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b6310(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 105b6340; body size 3 bytes.
#line 1 "ENTRY_105b6340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b6340(void)

{
  return;
}


// Reference entry 105b6350; body size 25 bytes.
#line 1 "ENTRY_105b6350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b6350(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x34));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 105b6370; body size 25 bytes.
#line 1 "ENTRY_105b6370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b6370(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 105b6390; body size 13 bytes.
#line 1 "ENTRY_105b6390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b6390(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 105b63a0; body size 13 bytes.
#line 1 "ENTRY_105b63a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b63a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 105b63b0; body size 13 bytes.
#line 1 "ENTRY_105b63b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b63b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 105b63c0; body size 3 bytes.
#line 1 "ENTRY_105b63c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b63c0(void)

{
  return;
}


// Reference entry 105b63d0; body size 3 bytes.
#line 1 "ENTRY_105b63d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b63d0(void)

{
  return;
}


// Reference entry 105b63e0; body size 3 bytes.
#line 1 "ENTRY_105b63e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b63e0(void)

{
  return;
}


// Reference entry 105b6530; body size 34 bytes.
#line 1 "ENTRY_105b6530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b6530(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 4) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 105b6f70; body size 15 bytes.
#line 1 "ENTRY_105b6f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b6f70(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x34);
  return;
}


// Reference entry 105b6f90; body size 15 bytes.
#line 1 "ENTRY_105b6f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b6f90(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 105b6fb0; body size 26 bytes.
#line 1 "ENTRY_105b6fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b6fb0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_105b9d30();
  thunk_FUN_1148a50e(param_2,0x34);
  return;
}


// Reference entry 105b7050; body size 19 bytes.
#line 1 "ENTRY_105b7050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_105b7050(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0x4ec4ec5) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 * 0x34);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException(auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 105b7070; body size 7 bytes.
#line 1 "ENTRY_105b7070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7070(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105b7080; body size 7 bytes.
#line 1 "ENTRY_105b7080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7080(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105b7090; body size 7 bytes.
#line 1 "ENTRY_105b7090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7090(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105b70a0; body size 5 bytes.
#line 1 "ENTRY_105b70a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b70a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b70b0; body size 68 bytes.
#line 1 "ENTRY_105b70b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b70b0(int param_1,undefined4 *param_2)

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


// Reference entry 105b7110; body size 92 bytes.
#line 1 "ENTRY_105b7110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_105b7110(int *param_1,int *param_2,int *param_3)

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


// Reference entry 105b7190; body size 19 bytes.
#line 1 "ENTRY_105b7190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b7190(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 105b71b0; body size 24 bytes.
#line 1 "ENTRY_105b71b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105b71b0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105b71f0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 105b71d0; body size 5 bytes.
#line 1 "ENTRY_105b71d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b71d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b71e0; body size 5 bytes.
#line 1 "ENTRY_105b71e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b71e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7470; body size 5 bytes.
#line 1 "ENTRY_105b7470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7470(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7480; body size 5 bytes.
#line 1 "ENTRY_105b7480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7480(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7490; body size 5 bytes.
#line 1 "ENTRY_105b7490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7490(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b74a0; body size 5 bytes.
#line 1 "ENTRY_105b74a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b74a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b74b0; body size 5 bytes.
#line 1 "ENTRY_105b74b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b74b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b74c0; body size 5 bytes.
#line 1 "ENTRY_105b74c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b74c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b74d0; body size 5 bytes.
#line 1 "ENTRY_105b74d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b74d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b74e0; body size 5 bytes.
#line 1 "ENTRY_105b74e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b74e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b74f0; body size 5 bytes.
#line 1 "ENTRY_105b74f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b74f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7500; body size 5 bytes.
#line 1 "ENTRY_105b7500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7500(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7510; body size 5 bytes.
#line 1 "ENTRY_105b7510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7510(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7520; body size 60 bytes.
#line 1 "ENTRY_105b7520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b7520(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  thunk_FUN_10118c40(param_3);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x20));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0x1c));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 0x18));
  *(undefined4 *)(param_3 + 0x20) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x18) = uVar3;
  *(undefined4 *)(param_2 + 0x1c) = uVar2;
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  return;
}


// Reference entry 105b7890; body size 15 bytes.
#line 1 "ENTRY_105b7890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7890(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105b78b0; body size 15 bytes.
#line 1 "ENTRY_105b78b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b78b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105b78d0; body size 15 bytes.
#line 1 "ENTRY_105b78d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b78d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105b78f0; body size 15 bytes.
#line 1 "ENTRY_105b78f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b78f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105b7960; body size 5 bytes.
#line 1 "ENTRY_105b7960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7960(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7970; body size 5 bytes.
#line 1 "ENTRY_105b7970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7970(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7980; body size 5 bytes.
#line 1 "ENTRY_105b7980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7980(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7990; body size 5 bytes.
#line 1 "ENTRY_105b7990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7990(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b79a0; body size 5 bytes.
#line 1 "ENTRY_105b79a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b79a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b79b0; body size 5 bytes.
#line 1 "ENTRY_105b79b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b79b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b79c0; body size 5 bytes.
#line 1 "ENTRY_105b79c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b79c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b79d0; body size 5 bytes.
#line 1 "ENTRY_105b79d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b79d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b79e0; body size 5 bytes.
#line 1 "ENTRY_105b79e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b79e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b79f0; body size 5 bytes.
#line 1 "ENTRY_105b79f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b79f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7a00; body size 5 bytes.
#line 1 "ENTRY_105b7a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7a00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7a10; body size 5 bytes.
#line 1 "ENTRY_105b7a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7a10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7a20; body size 5 bytes.
#line 1 "ENTRY_105b7a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7a20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7a30; body size 5 bytes.
#line 1 "ENTRY_105b7a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7a30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7a40; body size 5 bytes.
#line 1 "ENTRY_105b7a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7a40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7e40; body size 5 bytes.
#line 1 "ENTRY_105b7e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7e40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7e50; body size 5 bytes.
#line 1 "ENTRY_105b7e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7e50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7e60; body size 5 bytes.
#line 1 "ENTRY_105b7e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7e60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7e70; body size 5 bytes.
#line 1 "ENTRY_105b7e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7e70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7e80; body size 5 bytes.
#line 1 "ENTRY_105b7e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7e80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7e90; body size 5 bytes.
#line 1 "ENTRY_105b7e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7e90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7ea0; body size 5 bytes.
#line 1 "ENTRY_105b7ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b7ea0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b7eb0; body size 19 bytes.
#line 1 "ENTRY_105b7eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b7eb0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 105b7f60; body size 28 bytes.
#line 1 "ENTRY_105b7f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b7f60(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRef_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b7f90; body size 54 bytes.
#line 1 "ENTRY_105b7f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b7f90(undefined4 *param_1)

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


// Reference entry 105b8190; body size 18 bytes.
#line 1 "ENTRY_105b8190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b8190(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b8290; body size 11 bytes.
#line 1 "ENTRY_105b8290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b8290(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b82a0; body size 11 bytes.
#line 1 "ENTRY_105b82a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b82a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b8330; body size 11 bytes.
#line 1 "ENTRY_105b8330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b8330(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b8340; body size 16 bytes.
#line 1 "ENTRY_105b8340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b8340(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b8360; body size 16 bytes.
#line 1 "ENTRY_105b8360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b8360(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b8380; body size 21 bytes.
#line 1 "ENTRY_105b8380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b8380(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b83a0; body size 21 bytes.
#line 1 "ENTRY_105b83a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b83a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b83c0; body size 11 bytes.
#line 1 "ENTRY_105b83c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b83c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b83d0; body size 11 bytes.
#line 1 "ENTRY_105b83d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b83d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b83e0; body size 11 bytes.
#line 1 "ENTRY_105b83e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b83e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b83f0; body size 23 bytes.
#line 1 "ENTRY_105b83f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b83f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b8410; body size 25 bytes.
#line 1 "ENTRY_105b8410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b8410(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b8430; body size 23 bytes.
#line 1 "ENTRY_105b8430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b8430(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b8450; body size 23 bytes.
#line 1 "ENTRY_105b8450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b8450(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b8470; body size 3 bytes.
#line 1 "ENTRY_105b8470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105b8470(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b8480; body size 3 bytes.
#line 1 "ENTRY_105b8480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105b8480(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b8490; body size 3 bytes.
#line 1 "ENTRY_105b8490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105b8490(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b84a0; body size 3 bytes.
#line 1 "ENTRY_105b84a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105b84a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b84b0; body size 3 bytes.
#line 1 "ENTRY_105b84b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105b84b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105b84c0; body size 39 bytes.
#line 1 "ENTRY_105b84c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_105b84c0(undefined4 param_2,undefined4 param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (undefined1)(0);
  thunk_FUN_1012d130(param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 105b84f0; body size 76 bytes.
#line 1 "ENTRY_105b84f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b84f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar2 = (void *)(operator_new(0x34));
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


// Reference entry 105b8550; body size 52 bytes.
#line 1 "ENTRY_105b8550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b8550(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x34));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b85a0; body size 52 bytes.
#line 1 "ENTRY_105b85a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b85a0(undefined4 *param_1)

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


// Reference entry 105b85f0; body size 66 bytes.
#line 1 "ENTRY_105b85f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_105b85f0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  thunk_FUN_10118c40(param_2);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x20));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x1c));
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 105b8740; body size 23 bytes.
#line 1 "ENTRY_105b8740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b8740(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b8760; body size 49 bytes.
#line 1 "ENTRY_105b8760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b8760(undefined4 *param_2)
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


// Reference entry 105b8860; body size 23 bytes.
#line 1 "ENTRY_105b8860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b8860(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b8880; body size 23 bytes.
#line 1 "ENTRY_105b8880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b8880(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b9160; body size 82 bytes.
#line 1 "ENTRY_105b9160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b9160(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11261e50();
  *param_1 = (undefined4)((uint)&Ext_RFileTransferDownloadAIOOp_vftable);
  param_1[2] = (uint)&Ext_RFileTransferDownloadAIOOp_vftable;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = (uint)&Ext_RControlAIOOpRef_vftable;
  param_1[10] = param_2;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  param_1[0xd] = param_5;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b91d0; body size 35 bytes.
#line 1 "ENTRY_105b91d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b91d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCAssetSet_vftable);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b9200; body size 76 bytes.
#line 1 "ENTRY_105b9200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b9200(int param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111c05a0(param_2,-(uint)(param_2 != 0) & param_2 + 4U,param_3,param_4,10000,0,0);
  *(undefined1 *)(param_1 + 0x1124) = 0;
  *param_1 = (undefined4)((uint)&Ext_SCFileTransferDownloadOp_vftable);
  param_1[0x18] = (uint)&Ext_SCFileTransferDownloadOp_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b9260; body size 70 bytes.
#line 1 "ENTRY_105b9260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b9260(int param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111c05a0(-(uint)(param_2 != 0) & param_2 + 0x620cU,param_2,param_3,param_4,10000,0,0);
  *param_1 = (undefined4)((uint)&Ext_SCSetupFileUploadHelper_SCFileTransferUploadOp_vftable);
  param_1[0x18] = (uint)&Ext_SCSetupFileUploadHelper_SCFileTransferUploadOp_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b9960; body size 21 bytes.
#line 1 "ENTRY_105b9960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b9960(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105b9980; body size 11 bytes.
#line 1 "ENTRY_105b9980"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105b9980(undefined4 *param_1)

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


// Reference entry 105ba420; body size 18 bytes.
#line 1 "ENTRY_105ba420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ba420(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCOpFileDownload_vftable);
  param_1[2] = (uint)&Ext_SCOpFileDownload_vftable;
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115aab40);
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


// Reference entry 105ba5e0; body size 14 bytes.
#line 1 "ENTRY_105ba5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_105ba5e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 105ba600; body size 3 bytes.
#line 1 "ENTRY_105ba600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105ba600(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105ba610; body size 4 bytes.
#line 1 "ENTRY_105ba610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105ba610(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 105ba620; body size 4 bytes.
#line 1 "ENTRY_105ba620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105ba620(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 105ba630; body size 3 bytes.
#line 1 "ENTRY_105ba630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105ba630(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105ba640; body size 16 bytes.
#line 1 "ENTRY_105ba640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105ba640(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 8);
  return;
}


// Reference entry 105ba660; body size 6 bytes.
#line 1 "ENTRY_105ba660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_105ba660(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 105bac90; body size 31 bytes.
#line 1 "ENTRY_105bac90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105bac90(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x34));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 105bacc0; body size 31 bytes.
#line 1 "ENTRY_105bacc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105bacc0(undefined4 *param_1)

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


// Reference entry 105bad10; body size 30 bytes.
#line 1 "ENTRY_105bad10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105bad10(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_105bc210(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = iVar1;
  param_1[2] = iVar1 + param_2 * 8;
  return;
}


// Reference entry 105bad40; body size 49 bytes.
#line 1 "ENTRY_105bad40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_105bad40(uint param_2)
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


// Reference entry 105bad80; body size 49 bytes.
#line 1 "ENTRY_105bad80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_105bad80(uint param_2)
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


// Reference entry 105baee0; body size 14 bytes.
#line 1 "ENTRY_105baee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105baee0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x4ec4ec4) {
    return;
  }
                    
  ((Stub_std *)("map/set too long"))->_Xlength_error();
}


// Reference entry 105baf00; body size 3 bytes.
#line 1 "ENTRY_105baf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105baf00(void)

{
  return;
}


// Reference entry 105baf10; body size 3 bytes.
#line 1 "ENTRY_105baf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105baf10(void)

{
  return;
}


// Reference entry 105baf90; body size 5 bytes.
#line 1 "ENTRY_105baf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105baf90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bafa0; body size 3 bytes.
#line 1 "ENTRY_105bafa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bafa0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bafb0; body size 3 bytes.
#line 1 "ENTRY_105bafb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bafb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bafc0; body size 3 bytes.
#line 1 "ENTRY_105bafc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bafc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bafd0; body size 3 bytes.
#line 1 "ENTRY_105bafd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bafd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bafe0; body size 3 bytes.
#line 1 "ENTRY_105bafe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bafe0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105baff0; body size 3 bytes.
#line 1 "ENTRY_105baff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105baff0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bb000; body size 3 bytes.
#line 1 "ENTRY_105bb000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bb000(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bb010; body size 3 bytes.
#line 1 "ENTRY_105bb010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bb010(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bb020; body size 3 bytes.
#line 1 "ENTRY_105bb020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bb020(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bb030; body size 3 bytes.
#line 1 "ENTRY_105bb030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bb030(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bb040; body size 3 bytes.
#line 1 "ENTRY_105bb040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bb040(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bb050; body size 3 bytes.
#line 1 "ENTRY_105bb050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bb050(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bb060; body size 3 bytes.
#line 1 "ENTRY_105bb060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bb060(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bb070; body size 3 bytes.
#line 1 "ENTRY_105bb070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bb070(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bb080; body size 3 bytes.
#line 1 "ENTRY_105bb080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bb080(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bb090; body size 3 bytes.
#line 1 "ENTRY_105bb090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bb090(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bb0a0; body size 3 bytes.
#line 1 "ENTRY_105bb0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bb0a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bb0b0; body size 3 bytes.
#line 1 "ENTRY_105bb0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bb0b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bb0c0; body size 3 bytes.
#line 1 "ENTRY_105bb0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bb0c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bb0d0; body size 3 bytes.
#line 1 "ENTRY_105bb0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bb0d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bb0e0; body size 3 bytes.
#line 1 "ENTRY_105bb0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bb0e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105bb380; body size 79 bytes.
#line 1 "ENTRY_105bb380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105bb380(int param_2)
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


// Reference entry 105bb3f0; body size 3 bytes.
#line 1 "ENTRY_105bb3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105bb3f0(void)

{
  return;
}


// Reference entry 105bb400; body size 3 bytes.
#line 1 "ENTRY_105bb400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105bb400(void)

{
  return;
}


// Reference entry 105bb410; body size 11 bytes.
#line 1 "ENTRY_105bb410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bb410(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105bb420; body size 6 bytes.
#line 1 "ENTRY_105bb420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105bb420(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 105bb430; body size 6 bytes.
#line 1 "ENTRY_105bb430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105bb430(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 105bb440; body size 83 bytes.
#line 1 "ENTRY_105bb440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105bb440(int *param_2)
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


// Reference entry 105bb4b0; body size 33 bytes.
#line 1 "ENTRY_105bb4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105bb4b0(undefined4 *param_2)
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


// Reference entry 105bb7a0; body size 24 bytes.
#line 1 "ENTRY_105bb7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105bb7a0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105b71f0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 105bb860; body size 24 bytes.
#line 1 "ENTRY_105bb860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105bb860(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105b71f0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 105bc120; body size 87 bytes.
#line 1 "ENTRY_105bc120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105bc120(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x4ec4ec5) {
    param_1 = (uint)(param_1 * 0x34);
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


// Reference entry 105bc190; body size 90 bytes.
#line 1 "ENTRY_105bc190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105bc190(uint param_1)

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


// Reference entry 105bc280; body size 87 bytes.
#line 1 "ENTRY_105bc280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105bc280(uint param_1)

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


// Reference entry 105bc480; body size 3 bytes.
#line 1 "ENTRY_105bc480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bc480(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105bc490; body size 11 bytes.
#line 1 "ENTRY_105bc490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105bc490(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 105bc4a0; body size 11 bytes.
#line 1 "ENTRY_105bc4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105bc4a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 105bc8d0; body size 9 bytes.
#line 1 "ENTRY_105bc8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105bc8d0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 105bc8e0; body size 9 bytes.
#line 1 "ENTRY_105bc8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105bc8e0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 105bc8f0; body size 28 bytes.
#line 1 "ENTRY_105bc8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 FUN_105bc8f0(float param_1)

{
  double dVar1;
  
  dVar1 = (double)(ceil((double)param_1));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10)((float10)(float)dVar1);
}


// Reference entry 105bce10; body size 52 bytes.
#line 1 "ENTRY_105bce10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105bce10(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x34);
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


// Reference entry 105bce60; body size 57 bytes.
#line 1 "ENTRY_105bce60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105bce60(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 105bceb0; body size 61 bytes.
#line 1 "ENTRY_105bceb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105bceb0(int param_1,int param_2)

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


// Reference entry 105bcf00; body size 55 bytes.
#line 1 "ENTRY_105bcf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105bcf00(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x34);
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


// Reference entry 105bd040; body size 12 bytes.
#line 1 "ENTRY_105bd040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105bd040(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 105bd050; body size 11 bytes.
#line 1 "ENTRY_105bd050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105bd050(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 105bd060; body size 4 bytes.
#line 1 "ENTRY_105bd060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bd060(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 105bd070; body size 12 bytes.
#line 1 "ENTRY_105bd070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105bd070(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 105bd3e0; body size 3 bytes.
#line 1 "ENTRY_105bd3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bd3e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105bd540; body size 336 bytes.
#line 1 "ENTRY_105bd540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105bd540(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  void *pvStack_418;
  undefined1 *puStack_414;
  undefined4 uStack_410;
  undefined1 auStack_40c [1028];
  uint uStack_8;
  
  uStack_410 = (undefined4)(0xffffffff);
  puStack_414 = (undefined1 *)(LAB_115ab32f);
  pvStack_418 = (void *)(ExceptionList);
  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_40c);
  ExceptionList = (void *)(&pvStack_418);
  thunk_FUN_11261760(auStack_40c,0x401,"/upload",0x18,uStack_8);
  puVar1 = (undefined4 *)(operator_new(0xa708));
  uStack_410 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(puVar1);
    thunk_FUN_111c05a0(-(uint)(puVar1 + 0x1124 != (undefined4 *)0x0) & (uint)(puVar1 + 0x29a7),
                       puVar1 + 0x1124,auStack_40c,param_4,10000,0,0);
    uStack_410 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_410 + 1)) << 8 | (uint)(1)));
    *puVar1 = (undefined4)((uint)&Ext_SetupFileTransferUploadOp_vftable);
    puVar1[0x18] = (uint)&Ext_SetupFileTransferUploadOp_vftable;
    thunk_FUN_105b8a70(param_1,param_2,param_3,param_5,param_6);
    puVar1[0x29c1] = 0;
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)puVar1[0x29ae] != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)((undefined1 *)puVar1[0x29ae]);
    }
    thunk_FUN_112af4e0("SetupFileTransferUploadOp",2,
                       "(uint)&Ext_SCSetupFileUploadHelper_SetupFileTransferUploadOp: Uploading %s requested to %s)"
                       ,puVar2,auStack_40c);
    puVar1 = (undefined4 *)(puVar3);
  }
  ExceptionList = (void *)(pvStack_418);
  thunk_FUN_1148ac28(puVar1);
  return;
}


// Reference entry 105be8b0; body size 17 bytes.
#line 1 "ENTRY_105be8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_105be8b0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6118) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6118));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 105be8f0; body size 17 bytes.
#line 1 "ENTRY_105be8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_105be8f0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6114) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6114));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 105be9e0; body size 17 bytes.
#line 1 "ENTRY_105be9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_105be9e0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6228) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6228));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 105beb90; body size 4 bytes.
#line 1 "ENTRY_105beb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105beb90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x3c));
}


// Reference entry 105bed30; body size 13 bytes.
#line 1 "ENTRY_105bed30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_105bed30(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)((undefined1 *)*param_1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 105bef70; body size 17 bytes.
#line 1 "ENTRY_105bef70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_105bef70(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6128) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6128));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 105bef90; body size 4 bytes.
#line 1 "ENTRY_105bef90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105bef90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x38));
}


// Reference entry 105beff0; body size 81 bytes.
#line 1 "ENTRY_105beff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_105beff0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x6258));
  if (iVar1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10)((float10)0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10)((float10)((float)((double)*(int *)(param_1 + 0x6254) +
                          (double)(&DAT_11880fb0)[-(*(int *)(param_1 + 0x6254) >> 0x1f)]) /
                  (float)((double)iVar1 + (double)(&DAT_11880fb0)[-(iVar1 >> 0x1f)])));
}


// Reference entry 105bfde0; body size 16 bytes.
#line 1 "ENTRY_105bfde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105bfde0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_105b7bd0(param_1,param_2);
  return;
}


// Reference entry 105c0230; body size 9 bytes.
#line 1 "ENTRY_105c0230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_105c0230(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(param_1 == 0x27);
}


// Reference entry 105c0240; body size 9 bytes.
#line 1 "ENTRY_105c0240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_105c0240(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(param_1 == 0x1c);
}


// Reference entry 105c02f0; body size 7 bytes.
#line 1 "ENTRY_105c02f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105c02f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105c0300; body size 6 bytes.
#line 1 "ENTRY_105c0300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105c0300(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x4ec4ec4);
}


// Reference entry 105c0310; body size 6 bytes.
#line 1 "ENTRY_105c0310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105c0310(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 105c0320; body size 6 bytes.
#line 1 "ENTRY_105c0320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105c0320(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 105c0330; body size 6 bytes.
#line 1 "ENTRY_105c0330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105c0330(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x4ec4ec4);
}


// Reference entry 105c0340; body size 6 bytes.
#line 1 "ENTRY_105c0340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105c0340(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 105c0350; body size 6 bytes.
#line 1 "ENTRY_105c0350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105c0350(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 105c0490; body size 3 bytes.
#line 1 "ENTRY_105c0490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c0490(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105c0ba0; body size 20 bytes.
#line 1 "ENTRY_105c0ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105c0ba0(undefined4 param_1)

{
  thunk_FUN_1125b030(param_1,0);
  return;
}


// Reference entry 105c2220; body size 5 bytes.
#line 1 "ENTRY_105c2220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105c2220(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105c2240; body size 24 bytes.
#line 1 "ENTRY_105c2240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105c2240(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105c29f0; body size 9 bytes.
#line 1 "ENTRY_105c29f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105c29f0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 105c2ed0; body size 26 bytes.
#line 1 "ENTRY_105c2ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105c2ed0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 105c2ef0; body size 91 bytes.
#line 1 "ENTRY_105c2ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105c2ef0(int *param_2)
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


// Reference entry 105c2f70; body size 91 bytes.
#line 1 "ENTRY_105c2f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105c2f70(int *param_2)
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


// Reference entry 105c2ff0; body size 91 bytes.
#line 1 "ENTRY_105c2ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105c2ff0(int *param_2)
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


// Reference entry 105c3070; body size 91 bytes.
#line 1 "ENTRY_105c3070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105c3070(int *param_2)
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


// Reference entry 105c30f0; body size 91 bytes.
#line 1 "ENTRY_105c30f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105c30f0(int *param_2)
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


// Reference entry 105c31f0; body size 26 bytes.
#line 1 "ENTRY_105c31f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105c31f0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 105c3210; body size 26 bytes.
#line 1 "ENTRY_105c3210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105c3210(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 105c3230; body size 26 bytes.
#line 1 "ENTRY_105c3230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105c3230(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 105c3250; body size 83 bytes.
#line 1 "ENTRY_105c3250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105c3250(int *param_2)
{
  int *param_1 = (int *)this;
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


// Reference entry 105c3300; body size 16 bytes.
#line 1 "ENTRY_105c3300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105c3300(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105c3320; body size 16 bytes.
#line 1 "ENTRY_105c3320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105c3320(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105c3780; body size 89 bytes.
#line 1 "ENTRY_105c3780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105c3780(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&Ext_SCIncrementHHSwgenAndOnlineUpdateWizardAction_vftable);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105c37f0; body size 70 bytes.
#line 1 "ENTRY_105c37f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105c37f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  *param_1 = (undefined4)((uint)&Ext_SCLegacyWelcomeLoginWizardAction_vftable);
  param_1[5] = 0;
  param_1[6] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105c3eb0; body size 39 bytes.
#line 1 "ENTRY_105c3eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105c3eb0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (int)((int)(uint)&Ext_SCChangeEmailWizard_vftable);
  param_1[2] = (int)(uint)&Ext_SCChangeEmailWizard_vftable;
  param_1[10] = (int)(uint)&Ext_SCChangeEmailWizard_vftable;
  param_1[0x12] = (int)(uint)&Ext_SCChangeEmailWizard_vftable;
  param_1[0x13] = (int)(uint)&Ext_SCChangeEmailWizard_vftable;
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11728460);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (int)((int)(uint)&Ext_SCWizard_vftable);
  param_1[2] = (int)(uint)&Ext_SCWizard_vftable;
  param_1[10] = (int)(uint)&Ext_SCWizard_vftable;
  param_1[0x12] = (int)(uint)&Ext_SCWizard_vftable;
  param_1[0x13] = (int)(uint)&Ext_SCWizard_vftable;
  piStack_14 = (int *)(param_1);
  thunk_FUN_112af4e0("Wizard",5,"Entering Wizard Destructor",uVar2);
  pSVar3 = (SCLibrary *)(((Stub_SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x18))(&piStack_14));
  piVar1 = (int *)((int *)*piVar4);
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  uStack_8 = (undefined4)(0);
  if (piStack_14 != (int *)0x0) {
    (**(code **)(*piStack_14 + 8))();
  }
  uStack_8 = (undefined4)(0xffffffff);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xcc))(param_1[0x14]);
  }
  thunk_FUN_10dd3190();
  if (param_1[0x2a] != 0) {
    thunk_FUN_1059d940(param_1[0x2a]);
    param_1[0x2a] = 0;
    *(undefined1 *)((int)param_1 + 0xad) = 0;
  }
  thunk_FUN_10dd31f0();
  thunk_FUN_112af4e0("Wizard",5,"Clearing sub-wizard mode.");
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x26])(1);
    param_1[0x26] = 0;
  }
  uStack_8 = (undefined4)(1);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x32]);
  uStack_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x30]);
  uStack_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x2e]);
  uStack_8 = (undefined4)(4);
  if (piVar1 != (int *)0x0) {
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x28]);
  uStack_8 = (undefined4)(5);
  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x1c]);
  uStack_8 = (undefined4)(6);
  if (piVar1 != (int *)0x0) {
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10dd1260();
  param_1[0x13] = (int)(uint)&Ext_SCHouseholdEventSink_vftable;
  piVar1 = (int *)((int *)param_1[0x15]);
  uStack_8 = (undefined4)(7);
  if (piVar1 != (int *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x12] = (int)(uint)&Ext_RControlAIOOpCB_vftable;
  thunk_FUN_11240850();
  thunk_FUN_103d60a0();
  uStack_8 = (undefined4)(8);
  param_1[2] = (int)(uint)&Ext_SCTimerUser_vftable;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (int)((int)(uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (int)((int)(uint)&Ext_SCIObj_vftable);
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 105c43e0; body size 3 bytes.
#line 1 "ENTRY_105c43e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c43e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105c43f0; body size 7 bytes.
#line 1 "ENTRY_105c43f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105c43f0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 105c4400; body size 7 bytes.
#line 1 "ENTRY_105c4400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105c4400(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 105c4410; body size 3 bytes.
#line 1 "ENTRY_105c4410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c4410(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105c4420; body size 7 bytes.
#line 1 "ENTRY_105c4420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105c4420(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 105c4430; body size 3 bytes.
#line 1 "ENTRY_105c4430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c4430(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105c4440; body size 7 bytes.
#line 1 "ENTRY_105c4440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105c4440(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 105c4450; body size 3 bytes.
#line 1 "ENTRY_105c4450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c4450(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105c4460; body size 7 bytes.
#line 1 "ENTRY_105c4460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105c4460(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 105c4470; body size 3 bytes.
#line 1 "ENTRY_105c4470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c4470(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105c4480; body size 7 bytes.
#line 1 "ENTRY_105c4480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105c4480(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 105c4490; body size 3 bytes.
#line 1 "ENTRY_105c4490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c4490(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105c44a0; body size 3 bytes.
#line 1 "ENTRY_105c44a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c44a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105c44b0; body size 3 bytes.
#line 1 "ENTRY_105c44b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c44b0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105c44c0; body size 3 bytes.
#line 1 "ENTRY_105c44c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c44c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105c44d0; body size 3 bytes.
#line 1 "ENTRY_105c44d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c44d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105c5840; body size 9 bytes.
#line 1 "ENTRY_105c5840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c5840(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105c5850; body size 9 bytes.
#line 1 "ENTRY_105c5850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c5850(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105c5860; body size 9 bytes.
#line 1 "ENTRY_105c5860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c5860(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105c5870; body size 9 bytes.
#line 1 "ENTRY_105c5870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c5870(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105c9b50; body size 3 bytes.
#line 1 "ENTRY_105c9b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c9b50(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105c9b60; body size 3 bytes.
#line 1 "ENTRY_105c9b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c9b60(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105c9b70; body size 3 bytes.
#line 1 "ENTRY_105c9b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c9b70(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105c9b80; body size 3 bytes.
#line 1 "ENTRY_105c9b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c9b80(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105c9b90; body size 3 bytes.
#line 1 "ENTRY_105c9b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105c9b90(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105c9ba0; body size 28 bytes.
#line 1 "ENTRY_105c9ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105c9ba0(undefined4 *param_1)

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


// Reference entry 105c9bd0; body size 28 bytes.
#line 1 "ENTRY_105c9bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105c9bd0(undefined4 *param_1)

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


// Reference entry 105c9c00; body size 28 bytes.
#line 1 "ENTRY_105c9c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105c9c00(undefined4 *param_1)

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


// Reference entry 105c9c30; body size 28 bytes.
#line 1 "ENTRY_105c9c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105c9c30(undefined4 *param_1)

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


// Reference entry 105c9c60; body size 28 bytes.
#line 1 "ENTRY_105c9c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105c9c60(undefined4 *param_1)

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


// Reference entry 105c9ca0; body size 25 bytes.
#line 1 "ENTRY_105c9ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105c9ca0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105c9cc0; body size 22 bytes.
#line 1 "ENTRY_105c9cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105c9cc0(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105c9fc0; body size 91 bytes.
#line 1 "ENTRY_105c9fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105c9fc0(int *param_2)
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


// Reference entry 105ca040; body size 26 bytes.
#line 1 "ENTRY_105ca040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105ca040(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 105ca060; body size 26 bytes.
#line 1 "ENTRY_105ca060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105ca060(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 105ca160; body size 26 bytes.
#line 1 "ENTRY_105ca160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105ca160(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 105ca450; body size 78 bytes.
#line 1 "ENTRY_105ca450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105ca450(int *param_2)
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


// Reference entry 105ca4c0; body size 3 bytes.
#line 1 "ENTRY_105ca4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105ca4c0(void)

{
  return;
}


// Reference entry 105caf40; body size 7 bytes.
#line 1 "ENTRY_105caf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105caf40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105caf50; body size 7 bytes.
#line 1 "ENTRY_105caf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105caf50(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105caf60; body size 7 bytes.
#line 1 "ENTRY_105caf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105caf60(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105caf70; body size 152 bytes.
#line 1 "ENTRY_105caf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105caf70(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(param_3 - param_1 >> 3);
  if (0x28 < iVar1) {
    iVar2 = (int)(iVar1 + 1 >> 3);
    iVar1 = (int)(iVar2 * 8 + param_1);
    thunk_FUN_105cb470(param_1,iVar1,iVar2 * 0x10 + param_1,param_4);
    thunk_FUN_105cb470(param_2 + iVar2 * -8,param_2,iVar2 * 8 + param_2,param_4);
    iVar3 = (int)(param_3 + iVar2 * -8);
    thunk_FUN_105cb470(param_3 + iVar2 * -0x10,iVar3,param_3,param_4);
    thunk_FUN_105cb470(iVar1,param_2,iVar3,param_4);
    return;
  }
  thunk_FUN_105cb470(param_1,param_2,param_3,param_4);
  return;
}


// Reference entry 105cb6e0; body size 8 bytes.
#line 1 "ENTRY_105cb6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_105cb6e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 8);
}


// Reference entry 105cc410; body size 5 bytes.
#line 1 "ENTRY_105cc410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105cc410(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105cc8e0; body size 8 bytes.
#line 1 "ENTRY_105cc8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_105cc8e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + -8);
}


// Reference entry 105ccf10; body size 5 bytes.
#line 1 "ENTRY_105ccf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ccf10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105cd270; body size 5 bytes.
#line 1 "ENTRY_105cd270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105cd270(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105cd310; body size 40 bytes.
#line 1 "ENTRY_105cd310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105cd310(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 105cd840; body size 5 bytes.
#line 1 "ENTRY_105cd840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105cd840(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105cd850; body size 5 bytes.
#line 1 "ENTRY_105cd850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105cd850(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105cd860; body size 5 bytes.
#line 1 "ENTRY_105cd860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105cd860(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105cd870; body size 5 bytes.
#line 1 "ENTRY_105cd870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105cd870(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105cd880; body size 5 bytes.
#line 1 "ENTRY_105cd880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105cd880(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105cd8a0; body size 5 bytes.
#line 1 "ENTRY_105cd8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105cd8a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105cd8b0; body size 5 bytes.
#line 1 "ENTRY_105cd8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105cd8b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105cd8d0; body size 6 bytes.
#line 1 "ENTRY_105cd8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_105cd8d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpRenderingControlSetRoomCalibrationStatus");
}


// Reference entry 105cd8e0; body size 6 bytes.
#line 1 "ENTRY_105cd8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_105cd8e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIResource");
}


// Reference entry 105cd8f0; body size 6 bytes.
#line 1 "ENTRY_105cd8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_105cd8f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIStringFromListSettingsProperty");
}


// Reference entry 105cda50; body size 5 bytes.
#line 1 "ENTRY_105cda50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105cda50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105cda60; body size 5 bytes.
#line 1 "ENTRY_105cda60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105cda60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105cda80; body size 31 bytes.
#line 1 "ENTRY_105cda80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105cda80(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_105ccc10(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return;
}


// Reference entry 105cdbe0; body size 28 bytes.
#line 1 "ENTRY_105cdbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdbe0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRef_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105cdc10; body size 28 bytes.
#line 1 "ENTRY_105cdc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdc10(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRef_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105cdc40; body size 28 bytes.
#line 1 "ENTRY_105cdc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdc40(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRef_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105cdc70; body size 28 bytes.
#line 1 "ENTRY_105cdc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdc70(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRef_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105cdca0; body size 28 bytes.
#line 1 "ENTRY_105cdca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdca0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRef_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105cdcd0; body size 28 bytes.
#line 1 "ENTRY_105cdcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdcd0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRef_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105cdd00; body size 28 bytes.
#line 1 "ENTRY_105cdd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdd00(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRef_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105cdd30; body size 28 bytes.
#line 1 "ENTRY_105cdd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdd30(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRef_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105cddf0; body size 28 bytes.
#line 1 "ENTRY_105cddf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cddf0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRef_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105cde20; body size 54 bytes.
#line 1 "ENTRY_105cde20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cde20(undefined4 *param_1)

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


// Reference entry 105cdf10; body size 27 bytes.
#line 1 "ENTRY_105cdf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdf10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105cdf40; body size 27 bytes.
#line 1 "ENTRY_105cdf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdf40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105ce0d0; body size 16 bytes.
#line 1 "ENTRY_105ce0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105ce0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105ce1b0; body size 16 bytes.
#line 1 "ENTRY_105ce1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105ce1b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105ce290; body size 21 bytes.
#line 1 "ENTRY_105ce290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105ce290(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105ce2b0; body size 21 bytes.
#line 1 "ENTRY_105ce2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105ce2b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105ce2d0; body size 11 bytes.
#line 1 "ENTRY_105ce2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105ce2d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105ce2e0; body size 11 bytes.
#line 1 "ENTRY_105ce2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105ce2e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105ce2f0; body size 23 bytes.
#line 1 "ENTRY_105ce2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105ce2f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105ce310; body size 3 bytes.
#line 1 "ENTRY_105ce310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105ce310(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105ce320; body size 23 bytes.
#line 1 "ENTRY_105ce320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105ce320(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105ce440; body size 21 bytes.
#line 1 "ENTRY_105ce440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105ce440(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105ce9b0; body size 127 bytes.
#line 1 "ENTRY_105ce9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105ce9b0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AVTransport:1","SetPlayMode",uVar3,param_3,
                     param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&Ext_RUpnpAVTSetPlayModeAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpAVTSetPlayModeAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpAVTSetPlayModeAIOOp_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105cebc0; body size 127 bytes.
#line 1 "ENTRY_105cebc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105cebc0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:DeviceProperties:1","SetAutoplayVolume",
                     uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&Ext_RUpnpDPSetAutoplayVolumeAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpDPSetAutoplayVolumeAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpDPSetAutoplayVolumeAIOOp_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105cec60; body size 127 bytes.
#line 1 "ENTRY_105cec60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105cec60(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:DeviceProperties:1","SetUseAutoplayVolume",
                     uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&Ext_RUpnpDPSetUseAutoplayVolumeAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpDPSetUseAutoplayVolumeAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpDPSetUseAutoplayVolumeAIOOp_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105ced00; body size 127 bytes.
#line 1 "ENTRY_105ced00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105ced00(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:HTControl:1","SetIRRepeaterState",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&Ext_RUpnpHTCSetIRRepeaterStateAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpHTCSetIRRepeaterStateAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpHTCSetIRRepeaterStateAIOOp_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105ceda0; body size 127 bytes.
#line 1 "ENTRY_105ceda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105ceda0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:HTControl:1","SetLEDFeedbackState",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&Ext_RUpnpHTCSetLEDFeedbackStateAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpHTCSetLEDFeedbackStateAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpHTCSetLEDFeedbackStateAIOOp_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105ceee0; body size 127 bytes.
#line 1 "ENTRY_105ceee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105ceee0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:RenderingControl:1",
                     "SetRoomCalibrationStatus",uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&Ext_RUpnpRCSetRoomCalibrationStatusAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpRCSetRoomCalibrationStatusAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpRCSetRoomCalibrationStatusAIOOp_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105cfb50; body size 42 bytes.
#line 1 "ENTRY_105cfb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105cfb50(undefined1 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *(undefined1 *)(param_1 + 2) = param_2;
  *param_1 = (undefined4)((uint)&Ext_SCChickenExitAction_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105cfc80; body size 69 bytes.
#line 1 "ENTRY_105cfc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cfc80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (uint)&Ext_SCIActionDelegate_vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = (undefined4)((uint)&Ext_SCFactoryResetAction_vftable);
  param_1[2] = (uint)&Ext_SCFactoryResetAction_vftable;
  *(undefined1 *)(param_1 + 6) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105cfce0; body size 69 bytes.
#line 1 "ENTRY_105cfce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cfce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (uint)&Ext_SCIActionDelegate_vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = (undefined4)((uint)&Ext_SCForgetHouseholdAction_vftable);
  param_1[2] = (uint)&Ext_SCForgetHouseholdAction_vftable;
  *(undefined1 *)(param_1 + 6) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105cffd0; body size 33 bytes.
#line 1 "ENTRY_105cffd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cffd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&Ext_SCHideOfflineDeviceSupport_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105d0000; body size 9 bytes.
#line 1 "ENTRY_105d0000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105d0000(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIOpRenderingControlSetRoomCalibrationStatus_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105d0010; body size 9 bytes.
#line 1 "ENTRY_105d0010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105d0010(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIResource_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105d0f40; body size 33 bytes.
#line 1 "ENTRY_105d0f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105d0f40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&Ext_SCResetDismissedServicesAction_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105d24b0; body size 21 bytes.
#line 1 "ENTRY_105d24b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105d24b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105d2500; body size 11 bytes.
#line 1 "ENTRY_105d2500"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d2500(undefined4 *param_1)

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


// Reference entry 105d2540; body size 11 bytes.
#line 1 "ENTRY_105d2540"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d2540(undefined4 *param_1)

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


// Reference entry 105d2fe0; body size 28 bytes.
#line 1 "ENTRY_105d2fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d2fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_RUpnpAISetAudioInputAttributesAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpAISetAudioInputAttributesAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpAISetAudioInputAttributesAIOOp_vftable;
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


// Reference entry 105d3010; body size 28 bytes.
#line 1 "ENTRY_105d3010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3010(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_RUpnpAISetLineInLevelAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpAISetLineInLevelAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpAISetLineInLevelAIOOp_vftable;
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


// Reference entry 105d3040; body size 28 bytes.
#line 1 "ENTRY_105d3040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3040(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_RUpnpAVTSetPlayModeAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpAVTSetPlayModeAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpAVTSetPlayModeAIOOp_vftable;
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


// Reference entry 105d3070; body size 28 bytes.
#line 1 "ENTRY_105d3070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3070(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_RUpnpDPGetZoneAttributesAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpDPGetZoneAttributesAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpDPGetZoneAttributesAIOOp_vftable;
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


// Reference entry 105d30a0; body size 28 bytes.
#line 1 "ENTRY_105d30a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d30a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_RUpnpDPSetAutoplayRoomUUIDAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpDPSetAutoplayRoomUUIDAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpDPSetAutoplayRoomUUIDAIOOp_vftable;
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


// Reference entry 105d30d0; body size 28 bytes.
#line 1 "ENTRY_105d30d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d30d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_RUpnpDPSetAutoplayVolumeAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpDPSetAutoplayVolumeAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpDPSetAutoplayVolumeAIOOp_vftable;
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


// Reference entry 105d3100; body size 28 bytes.
#line 1 "ENTRY_105d3100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3100(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_RUpnpDPSetUseAutoplayVolumeAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpDPSetUseAutoplayVolumeAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpDPSetUseAutoplayVolumeAIOOp_vftable;
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


// Reference entry 105d3130; body size 28 bytes.
#line 1 "ENTRY_105d3130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3130(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_RUpnpHTCSetIRRepeaterStateAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpHTCSetIRRepeaterStateAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpHTCSetIRRepeaterStateAIOOp_vftable;
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


// Reference entry 105d3160; body size 28 bytes.
#line 1 "ENTRY_105d3160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3160(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_RUpnpHTCSetLEDFeedbackStateAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpHTCSetLEDFeedbackStateAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpHTCSetLEDFeedbackStateAIOOp_vftable;
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


// Reference entry 105d3190; body size 28 bytes.
#line 1 "ENTRY_105d3190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3190(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_RUpnpRCSetOutputFixedAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpRCSetOutputFixedAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpRCSetOutputFixedAIOOp_vftable;
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


// Reference entry 105d31c0; body size 28 bytes.
#line 1 "ENTRY_105d31c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d31c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_RUpnpRCSetRoomCalibrationStatusAIOOp_vftable);
  param_1[0x18] = (uint)&Ext_RUpnpRCSetRoomCalibrationStatusAIOOp_vftable;
  param_1[0x11b] = (uint)&Ext_RUpnpRCSetRoomCalibrationStatusAIOOp_vftable;
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


// Reference entry 105d31f0; body size 11 bytes.
#line 1 "ENTRY_105d31f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d31f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCAudioCompressionSelectAction_vftable);
  puStack_c = (undefined1 *)(LAB_115afdb0);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCMenuSelectSettingActionBase_vftable);
  piVar1 = (int *)((int *)param_1[0xe]);
  uStack_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0xb]);
  uStack_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[9]);
  uStack_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  uStack_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;
  uStack_8 = (undefined4)(4);
  ((Stub_SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = 0;
  uStack_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;
  uStack_8 = (undefined4)(6);
  ((Stub_SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;
  piVar1 = (int *)((int *)param_1[3]);
  uStack_8 = (undefined4)(7);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 105d3340; body size 19 bytes.
#line 1 "ENTRY_105d3340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3340(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 105d37e0; body size 19 bytes.
#line 1 "ENTRY_105d37e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d37e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 105d3800; body size 7 bytes.
#line 1 "ENTRY_105d3800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3800(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 105d3810; body size 7 bytes.
#line 1 "ENTRY_105d3810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3810(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 105d3e10; body size 19 bytes.
#line 1 "ENTRY_105d3e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3e10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 105d3ef0; body size 18 bytes.
#line 1 "ENTRY_105d3ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3ef0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCSearchHistoryToggleAction_vftable);
  param_1[2] = (uint)&Ext_SCSearchHistoryToggleAction_vftable;
  puStack_c = (undefined1 *)(LAB_115b0050);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCToggleBooleanSettingActionBase_vftable);
  param_1[2] = (uint)&Ext_SCToggleBooleanSettingActionBase_vftable;
  piVar1 = (int *)((int *)param_1[0xb]);
  uStack_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[9]);
  uStack_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  uStack_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = 0;
  piVar1 = (int *)((int *)param_1[4]);
  uStack_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[2] = (uint)&Ext_SCIObj_vftable;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 105d4190; body size 18 bytes.
#line 1 "ENTRY_105d4190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d4190(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&Ext_SCStaleSessionToggleAction_vftable);
  param_1[2] = (uint)&Ext_SCStaleSessionToggleAction_vftable;
  puStack_c = (undefined1 *)(LAB_115b0050);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&Ext_SCToggleBooleanSettingActionBase_vftable);
  param_1[2] = (uint)&Ext_SCToggleBooleanSettingActionBase_vftable;
  piVar1 = (int *)((int *)param_1[0xb]);
  uStack_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[9]);
  uStack_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  uStack_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = 0;
  piVar1 = (int *)((int *)param_1[4]);
  uStack_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[2] = (uint)&Ext_SCIObj_vftable;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 105d48a0; body size 5 bytes.
#line 1 "ENTRY_105d48a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105d48a0(undefined2 param_2)
{
  int param_1 = (int )this;
  *(undefined2 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 8) = 1;
  thunk_FUN_1145c720(param_1 + 0x38,0x18,&DAT_1188f3d4,param_2);
  return;
}


// Reference entry 105d48b0; body size 5 bytes.
#line 1 "ENTRY_105d48b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105d48b0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 8) = 4;
  thunk_FUN_1145c720(param_1 + 0x38,0x18,&DAT_11884800,param_2);
  return;
}


// Reference entry 105d48c0; body size 12 bytes.
#line 1 "ENTRY_105d48c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_105d48c0(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 8);
}


// Reference entry 105d48d0; body size 7 bytes.
#line 1 "ENTRY_105d48d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105d48d0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 105d48e0; body size 3 bytes.
#line 1 "ENTRY_105d48e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d48e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105d48f0; body size 3 bytes.
#line 1 "ENTRY_105d48f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d48f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105d4900; body size 7 bytes.
#line 1 "ENTRY_105d4900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105d4900(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 105d4910; body size 3 bytes.
#line 1 "ENTRY_105d4910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d4910(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105d4920; body size 3 bytes.
#line 1 "ENTRY_105d4920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d4920(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105d4930; body size 7 bytes.
#line 1 "ENTRY_105d4930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105d4930(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 105d4940; body size 7 bytes.
#line 1 "ENTRY_105d4940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105d4940(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 105d4950; body size 7 bytes.
#line 1 "ENTRY_105d4950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105d4950(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 105d4960; body size 3 bytes.
#line 1 "ENTRY_105d4960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d4960(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105d4970; body size 4 bytes.
#line 1 "ENTRY_105d4970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d4970(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 105d4980; body size 3 bytes.
#line 1 "ENTRY_105d4980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d4980(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105d4990; body size 3 bytes.
#line 1 "ENTRY_105d4990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d4990(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105d49a0; body size 3 bytes.
#line 1 "ENTRY_105d49a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d49a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105d49b0; body size 3 bytes.
#line 1 "ENTRY_105d49b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d49b0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105d49c0; body size 3 bytes.
#line 1 "ENTRY_105d49c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d49c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105d49d0; body size 3 bytes.
#line 1 "ENTRY_105d49d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d49d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105d49e0; body size 18 bytes.
#line 1 "ENTRY_105d49e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105d49e0(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 105d4a20; body size 14 bytes.
#line 1 "ENTRY_105d4a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105d4a20(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 105d4a40; body size 14 bytes.
#line 1 "ENTRY_105d4a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105d4a40(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 105d6c90; body size 49 bytes.
#line 1 "ENTRY_105d6c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_105d6c90(uint param_2)
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


// Reference entry 105d6cd0; body size 63 bytes.
#line 1 "ENTRY_105d6cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_105d6cd0(uint param_2)
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


// Reference entry 105d6ee0; body size 3 bytes.
#line 1 "ENTRY_105d6ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d6ee0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105d6ef0; body size 3 bytes.
#line 1 "ENTRY_105d6ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d6ef0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105d6f00; body size 3 bytes.
#line 1 "ENTRY_105d6f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d6f00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105d6f10; body size 3 bytes.
#line 1 "ENTRY_105d6f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d6f10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105d6f20; body size 3 bytes.
#line 1 "ENTRY_105d6f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d6f20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105d6f30; body size 3 bytes.
#line 1 "ENTRY_105d6f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d6f30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105d6f50; body size 3 bytes.
#line 1 "ENTRY_105d6f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105d6f50(void)

{
  return;
}


// Reference entry 105d6f60; body size 3 bytes.
#line 1 "ENTRY_105d6f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105d6f60(void)

{
  return;
}


// Reference entry 105d6f70; body size 6 bytes.
#line 1 "ENTRY_105d6f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d6f70(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 105d6f80; body size 6 bytes.
#line 1 "ENTRY_105d6f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d6f80(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 105d7540; body size 3 bytes.
#line 1 "ENTRY_105d7540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105d7540(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105d7550; body size 3 bytes.
#line 1 "ENTRY_105d7550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105d7550(void)

{
  return;
}


// Reference entry 105d8630; body size 22 bytes.
#line 1 "ENTRY_105d8630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105d8630(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1124ff50(param_1));
  *(undefined1 *)(iVar1 + 0x30) = 1;
  return;
}


// Reference entry 105d87a0; body size 87 bytes.
#line 1 "ENTRY_105d87a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105d87a0(uint param_1)

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


// Reference entry 105d8810; body size 90 bytes.
#line 1 "ENTRY_105d8810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105d8810(uint param_1)

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


// Reference entry 105d8be0; body size 11 bytes.
#line 1 "ENTRY_105d8be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105d8be0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 105d8eb0; body size 9 bytes.
#line 1 "ENTRY_105d8eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105d8eb0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 105d8ec0; body size 23 bytes.
#line 1 "ENTRY_105d8ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105d8ec0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[2] - *param_1) / 0x14);
}


// Reference entry 105d8ee0; body size 25 bytes.
#line 1 "ENTRY_105d8ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d8ee0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 8));
  thunk_FUN_105ca4f0(*puVar1,*(undefined4 *)(param_1 + 0xc),puVar1);
  *(undefined4 *)(param_1 + 0xc) = *puVar1;
  return;
}


// Reference entry 105da410; body size 13 bytes.
#line 1 "ENTRY_105da410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105da410(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 105dc110; body size 16 bytes.
#line 1 "ENTRY_105dc110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105dc110(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105dc130; body size 9 bytes.
#line 1 "ENTRY_105dc130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105dc130(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105dc1d0; body size 12 bytes.
#line 1 "ENTRY_105dc1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105dc1d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 105dc220; body size 4 bytes.
#line 1 "ENTRY_105dc220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105dc220(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x2c));
}


// Reference entry 105dd510; body size 13 bytes.
#line 1 "ENTRY_105dd510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_105dd510(int param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(param_1 + 8) + param_2 * 8);
}


// Reference entry 105dd580; body size 7 bytes.
#line 1 "ENTRY_105dd580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105dd580(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0xd7d0);
}


// Reference entry 105dd5c0; body size 4 bytes.
#line 1 "ENTRY_105dd5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105dd5c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x2c));
}


// Reference entry 105dd6a0; body size 35 bytes.
#line 1 "ENTRY_105dd6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_105dd6a0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1fe8,&DAT_11882ff0));
  ((Stub_SCStr *)(param_1))->int_allocRep(pcVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_1);
}


// Reference entry 105de470; body size 4 bytes.
#line 1 "ENTRY_105de470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105de470(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 105de480; body size 4 bytes.
#line 1 "ENTRY_105de480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105de480(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x2c));
}


// Reference entry 105e2b50; body size 25 bytes.
#line 1 "ENTRY_105e2b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_105e2b50(void)

{
  thunk_FUN_112af4e0("SCORDS",2,"hideDevice: no cloud support");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 105e37f0; body size 6 bytes.
#line 1 "ENTRY_105e37f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_105e37f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpRenderingControlSetRoomCalibrationStatus");
}


// Reference entry 105e3800; body size 6 bytes.
#line 1 "ENTRY_105e3800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_105e3800(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIResource");
}


// Reference entry 105e3810; body size 6 bytes.
#line 1 "ENTRY_105e3810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_105e3810(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIStringFromListSettingsProperty");
}


// Reference entry 105e3f20; body size 6 bytes.
#line 1 "ENTRY_105e3f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105e3f20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 105e3f30; body size 6 bytes.
#line 1 "ENTRY_105e3f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105e3f30(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xccccccc);
}


// Reference entry 105e3f40; body size 6 bytes.
#line 1 "ENTRY_105e3f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105e3f40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 105e3f50; body size 6 bytes.
#line 1 "ENTRY_105e3f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105e3f50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xccccccc);
}


// Reference entry 105e66d0; body size 3 bytes.
#line 1 "ENTRY_105e66d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105e66d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105e66e0; body size 3 bytes.
#line 1 "ENTRY_105e66e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105e66e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105e66f0; body size 3 bytes.
#line 1 "ENTRY_105e66f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105e66f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105e6700; body size 3 bytes.
#line 1 "ENTRY_105e6700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105e6700(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105e6710; body size 3 bytes.
#line 1 "ENTRY_105e6710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105e6710(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105e6d50; body size 28 bytes.
#line 1 "ENTRY_105e6d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105e6d50(undefined4 *param_1)

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


// Reference entry 105e6d80; body size 28 bytes.
#line 1 "ENTRY_105e6d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105e6d80(undefined4 *param_1)

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


// Reference entry 105e6db0; body size 28 bytes.
#line 1 "ENTRY_105e6db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105e6db0(undefined4 *param_1)

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


// Reference entry 105e6de0; body size 28 bytes.
#line 1 "ENTRY_105e6de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105e6de0(undefined4 *param_1)

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


// Reference entry 105e6e10; body size 28 bytes.
#line 1 "ENTRY_105e6e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105e6e10(undefined4 *param_1)

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


// Reference entry 105e6e40; body size 28 bytes.
#line 1 "ENTRY_105e6e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105e6e40(undefined4 *param_1)

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


// Reference entry 105e6e70; body size 28 bytes.
#line 1 "ENTRY_105e6e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105e6e70(undefined4 *param_1)

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


// Reference entry 105e6ea0; body size 20 bytes.
#line 1 "ENTRY_105e6ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105e6ea0(int *param_1)

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


// Reference entry 105e6ec0; body size 20 bytes.
#line 1 "ENTRY_105e6ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105e6ec0(int *param_1)

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


// Reference entry 105e6ee0; body size 20 bytes.
#line 1 "ENTRY_105e6ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105e6ee0(int *param_1)

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


// Reference entry 105e70e0; body size 24 bytes.
#line 1 "ENTRY_105e70e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105e70e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105e7100; body size 24 bytes.
#line 1 "ENTRY_105e7100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105e7100(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105e7120; body size 24 bytes.
#line 1 "ENTRY_105e7120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105e7120(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105e7140; body size 24 bytes.
#line 1 "ENTRY_105e7140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105e7140(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105e7160; body size 24 bytes.
#line 1 "ENTRY_105e7160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105e7160(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105e7180; body size 24 bytes.
#line 1 "ENTRY_105e7180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105e7180(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105e71a0; body size 24 bytes.
#line 1 "ENTRY_105e71a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105e71a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105e71c0; body size 24 bytes.
#line 1 "ENTRY_105e71c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105e71c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105e76d0; body size 5 bytes.
#line 1 "ENTRY_105e76d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105e76d0(int param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}


// Reference entry 105e7790; body size 10 bytes.
#line 1 "ENTRY_105e7790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105e7790(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3);
}


// Reference entry 105e77a0; body size 9 bytes.
#line 1 "ENTRY_105e77a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105e77a0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 105e77b0; body size 38 bytes.
#line 1 "ENTRY_105e77b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105e77b0(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 8) + param_3 * 8);
  thunk_FUN_105ccc10(iVar1,*(int *)(param_1 + 0xc),*(int *)(param_1 + 0xc) - iVar1 >> 3,param_2);
  return;
}


// Reference entry 105e9f80; body size 3 bytes.
#line 1 "ENTRY_105e9f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105e9f80(void)

{
  return;
}


// Reference entry 105ea0f0; body size 43 bytes.
#line 1 "ENTRY_105ea0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_105ea0f0(int param_1,undefined4 *param_2)

{
  char cVar1;
  uint extraout_EAX;
  
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)((uint)(cVar1 == '\0'));
  }
                    
                    
                    
  ((Stub_std *)(0))->_Xbad_function_call();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(extraout_EAX);
}


// Reference entry 105ea160; body size 84 bytes.
#line 1 "ENTRY_105ea160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_105ea160(int param_1,undefined4 *param_2)

{
  char cVar1;
  
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) == (int *)0x0) {
                    
    ((Stub_std *)(0))->_Xbad_function_call();
  }
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2));
  if (cVar1 == '\0') {
    if (*(int **)(param_1 + 0x4c) == (int *)0x0) {
                    
      ((Stub_std *)(0))->_Xbad_function_call();
    }
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x4c) + 8))(&stack0x00000000));
    if (cVar1 == '\0') {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
}


// Reference entry 105ea7b0; body size 86 bytes.
#line 1 "ENTRY_105ea7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ea7b0(int param_1,undefined4 *param_2)

{
  char cVar1;
  
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) == (int *)0x0) {
                    
    ((Stub_std *)(0))->_Xbad_function_call();
  }
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2));
  if (cVar1 != '\0') {
    if (*(int **)(param_1 + 0x4c) == (int *)0x0) {
                    
      ((Stub_std *)(0))->_Xbad_function_call();
    }
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x4c) + 8))(&stack0x00000000));
    if (cVar1 != '\0') {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 105ea850; body size 49 bytes.
#line 1 "ENTRY_105ea850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_105ea850(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  bool bVar1;
  
  if (param_1 == (SCStr *)(param_2)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_1);
  }
  do {
    bVar1 = (bool)(((Stub_SCStr *)(param_1))->op_eq(param_3));
    if (bVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_1);
    }
    param_1 = (SCStr *)(param_1 + 4);
  } while (param_1 != (SCStr *)(param_2));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_1);
}


// Reference entry 105ea890; body size 49 bytes.
#line 1 "ENTRY_105ea890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_105ea890(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  bool bVar1;
  
  if (param_1 == (SCStr *)(param_2)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_1);
  }
  do {
    bVar1 = (bool)(((Stub_SCStr *)(param_1))->op_eq(param_3));
    if (bVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_1);
    }
    param_1 = (SCStr *)(param_1 + 4);
  } while (param_1 != (SCStr *)(param_2));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_1);
}


// Reference entry 105ea8d0; body size 7 bytes.
#line 1 "ENTRY_105ea8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ea8d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105ea8e0; body size 7 bytes.
#line 1 "ENTRY_105ea8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ea8e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105eb3d0; body size 5 bytes.
#line 1 "ENTRY_105eb3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105eb3d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105ebaf0; body size 13 bytes.
#line 1 "ENTRY_105ebaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105ebaf0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 105ebb40; body size 3 bytes.
#line 1 "ENTRY_105ebb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_105ebb40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
}


// Reference entry 105ebb60; body size 3 bytes.
#line 1 "ENTRY_105ebb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_105ebb60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
}


// Reference entry 105ebbf0; body size 3 bytes.
#line 1 "ENTRY_105ebbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_105ebbf0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
}


// Reference entry 105ebc50; body size 5 bytes.
#line 1 "ENTRY_105ebc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ebc50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105ebc70; body size 5 bytes.
#line 1 "ENTRY_105ebc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ebc70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105ebd00; body size 5 bytes.
#line 1 "ENTRY_105ebd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ebd00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105ebd20; body size 5 bytes.
#line 1 "ENTRY_105ebd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ebd20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105ebd30; body size 57 bytes.
#line 1 "ENTRY_105ebd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105ebd30(undefined4 *param_1,SCStr *param_2,SCStr *param_3,SCStr *param_4)

{
  bool bVar1;
  
  if (param_2 == (SCStr *)(param_3)) {
    *param_1 = (undefined4)(param_2);
    return;
  }
  do {
    bVar1 = (bool)(((Stub_SCStr *)(param_2))->op_eq(param_4));
    if (bVar1) break;
    param_2 = (SCStr *)(param_2 + 4);
  } while (param_2 != (SCStr *)(param_3));
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 105ebdc0; body size 5 bytes.
#line 1 "ENTRY_105ebdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ebdc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105ebde0; body size 5 bytes.
#line 1 "ENTRY_105ebde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ebde0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105ebe70; body size 5 bytes.
#line 1 "ENTRY_105ebe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ebe70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105ebe90; body size 5 bytes.
#line 1 "ENTRY_105ebe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ebe90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105ebee0; body size 5 bytes.
#line 1 "ENTRY_105ebee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ebee0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105ebf00; body size 5 bytes.
#line 1 "ENTRY_105ebf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ebf00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105ebf90; body size 5 bytes.
#line 1 "ENTRY_105ebf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ebf90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105ec110; body size 43 bytes.
#line 1 "ENTRY_105ec110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_105ec110(int param_1,undefined4 *param_2)

{
  char cVar1;
  uint extraout_EAX;
  
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)((uint)(cVar1 == '\0'));
  }
                    
                    
                    
  ((Stub_std *)(0))->_Xbad_function_call();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(extraout_EAX);
}


// Reference entry 105ec180; body size 84 bytes.
#line 1 "ENTRY_105ec180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_105ec180(int param_1,undefined4 *param_2)

{
  char cVar1;
  
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) == (int *)0x0) {
                    
    ((Stub_std *)(0))->_Xbad_function_call();
  }
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2));
  if (cVar1 == '\0') {
    if (*(int **)(param_1 + 0x4c) == (int *)0x0) {
                    
      ((Stub_std *)(0))->_Xbad_function_call();
    }
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x4c) + 8))(&stack0x00000000));
    if (cVar1 == '\0') {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
}


// Reference entry 105ec7d0; body size 86 bytes.
#line 1 "ENTRY_105ec7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ec7d0(int param_1,undefined4 *param_2)

{
  char cVar1;
  
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) == (int *)0x0) {
                    
    ((Stub_std *)(0))->_Xbad_function_call();
  }
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2));
  if (cVar1 != '\0') {
    if (*(int **)(param_1 + 0x4c) == (int *)0x0) {
                    
      ((Stub_std *)(0))->_Xbad_function_call();
    }
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x4c) + 8))(&stack0x00000000));
    if (cVar1 != '\0') {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 105ec8b0; body size 5 bytes.
#line 1 "ENTRY_105ec8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ec8b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105ec8d0; body size 5 bytes.
#line 1 "ENTRY_105ec8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ec8d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105ec960; body size 5 bytes.
#line 1 "ENTRY_105ec960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ec960(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105ed300; body size 11 bytes.
#line 1 "ENTRY_105ed300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105ed300(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105ed310; body size 11 bytes.
#line 1 "ENTRY_105ed310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105ed310(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105eec80; body size 34 bytes.
#line 1 "ENTRY_105eec80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105eec80(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}


// Reference entry 105eed20; body size 67 bytes.
#line 1 "ENTRY_105eed20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105eed20(int param_1)

{
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
  return;
}


// Reference entry 105eeed0; body size 67 bytes.
#line 1 "ENTRY_105eeed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105eeed0(int param_1)

{
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
  return;
}


// Reference entry 105ef090; body size 18 bytes.
#line 1 "ENTRY_105ef090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ef090(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 105ef110; body size 18 bytes.
#line 1 "ENTRY_105ef110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ef110(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1148a50e(*param_1,0x58);
  }
  return;
}


// Reference entry 105ef210; body size 18 bytes.
#line 1 "ENTRY_105ef210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ef210(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1148a50e(*param_1,0x58);
  }
  return;
}


// Reference entry 105ef920; body size 40 bytes.
#line 1 "ENTRY_105ef920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_105ef920(undefined4 param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(cVar1 == '\0');
  }
                    
  ((Stub_std *)(0))->_Xbad_function_call();
}


// Reference entry 105f1e50; body size 31 bytes.
#line 1 "ENTRY_105f1e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_105f1e50(int *param_1)

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


// Reference entry 105f2000; body size 9 bytes.
#line 1 "ENTRY_105f2000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f2000(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 105f2120; body size 3 bytes.
#line 1 "ENTRY_105f2120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105f2120(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105f21d0; body size 13 bytes.
#line 1 "ENTRY_105f21d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f21d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 105f21e0; body size 11 bytes.
#line 1 "ENTRY_105f21e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f21e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 105f21f0; body size 11 bytes.
#line 1 "ENTRY_105f21f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f21f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 105f2200; body size 12 bytes.
#line 1 "ENTRY_105f2200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f2200(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 105f22e0; body size 25 bytes.
#line 1 "ENTRY_105f22e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f22e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f2300; body size 25 bytes.
#line 1 "ENTRY_105f2300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f2300(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f2320; body size 25 bytes.
#line 1 "ENTRY_105f2320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f2320(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f2340; body size 25 bytes.
#line 1 "ENTRY_105f2340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f2340(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f2360; body size 25 bytes.
#line 1 "ENTRY_105f2360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f2360(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f2410; body size 33 bytes.
#line 1 "ENTRY_105f2410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f2410(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 105f2440; body size 25 bytes.
#line 1 "ENTRY_105f2440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f2440(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f2460; body size 33 bytes.
#line 1 "ENTRY_105f2460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f2460(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 105f2490; body size 25 bytes.
#line 1 "ENTRY_105f2490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f2490(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f24b0; body size 33 bytes.
#line 1 "ENTRY_105f24b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f24b0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 105f24e0; body size 25 bytes.
#line 1 "ENTRY_105f24e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f24e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f2500; body size 33 bytes.
#line 1 "ENTRY_105f2500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f2500(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 105f2530; body size 25 bytes.
#line 1 "ENTRY_105f2530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f2530(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f2550; body size 33 bytes.
#line 1 "ENTRY_105f2550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f2550(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 105f2580; body size 25 bytes.
#line 1 "ENTRY_105f2580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f2580(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f25a0; body size 33 bytes.
#line 1 "ENTRY_105f25a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f25a0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 105f25d0; body size 25 bytes.
#line 1 "ENTRY_105f25d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f25d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f25f0; body size 33 bytes.
#line 1 "ENTRY_105f25f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f25f0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 105f2620; body size 25 bytes.
#line 1 "ENTRY_105f2620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f2620(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f2640; body size 33 bytes.
#line 1 "ENTRY_105f2640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f2640(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 105f2a70; body size 34 bytes.
#line 1 "ENTRY_105f2a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f2a70(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 105f2aa0; body size 34 bytes.
#line 1 "ENTRY_105f2aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f2aa0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 105f2ad0; body size 34 bytes.
#line 1 "ENTRY_105f2ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f2ad0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 105f2c90; body size 23 bytes.
#line 1 "ENTRY_105f2c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f2c90(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_105f5a00(param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x20;
  return;
}


// Reference entry 105f2cb0; body size 23 bytes.
#line 1 "ENTRY_105f2cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f2cb0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_105f5df0(param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x20;
  return;
}


// Reference entry 105f2cd0; body size 23 bytes.
#line 1 "ENTRY_105f2cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f2cd0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_105f60e0(param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x20;
  return;
}


// Reference entry 105f3170; body size 27 bytes.
#line 1 "ENTRY_105f3170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f3170(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_105f4a20(param_1,*(undefined4 *)(param_1 + 4),param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x34;
  return;
}


// Reference entry 105f31a0; body size 23 bytes.
#line 1 "ENTRY_105f31a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f31a0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_105f5a00(param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x20;
  return;
}


// Reference entry 105f31c0; body size 23 bytes.
#line 1 "ENTRY_105f31c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f31c0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_105f5df0(param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x20;
  return;
}


// Reference entry 105f31e0; body size 23 bytes.
#line 1 "ENTRY_105f31e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f31e0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_105f60e0(param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x20;
  return;
}


// Reference entry 105f3d30; body size 7 bytes.
#line 1 "ENTRY_105f3d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f3d30(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105f3d40; body size 7 bytes.
#line 1 "ENTRY_105f3d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f3d40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105f3d50; body size 7 bytes.
#line 1 "ENTRY_105f3d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f3d50(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105f3d60; body size 7 bytes.
#line 1 "ENTRY_105f3d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f3d60(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105f3d70; body size 7 bytes.
#line 1 "ENTRY_105f3d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f3d70(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105f3d80; body size 7 bytes.
#line 1 "ENTRY_105f3d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f3d80(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 105f3d90; body size 24 bytes.
#line 1 "ENTRY_105f3d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f3d90(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105f4090(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 105f3f60; body size 24 bytes.
#line 1 "ENTRY_105f3f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f3f60(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105f4340(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 105f4040; body size 5 bytes.
#line 1 "ENTRY_105f4040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f4040(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f4050; body size 5 bytes.
#line 1 "ENTRY_105f4050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f4050(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f4060; body size 5 bytes.
#line 1 "ENTRY_105f4060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f4060(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f4070; body size 5 bytes.
#line 1 "ENTRY_105f4070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f4070(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f4080; body size 5 bytes.
#line 1 "ENTRY_105f4080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f4080(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f4be0; body size 14 bytes.
#line 1 "ENTRY_105f4be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f4be0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_105f5a00(param_3);
  return;
}


// Reference entry 105f4c00; body size 14 bytes.
#line 1 "ENTRY_105f4c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f4c00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_105f5a00(param_3);
  return;
}


// Reference entry 105f4c20; body size 103 bytes.
#line 1 "ENTRY_105f4c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f4c20(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_2 = (undefined4)((uint)&Ext_SCConditionalElementTree_vftable);
  param_2[1] = *(undefined4 *)(param_3 + 4);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x10));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0xc));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 8));
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  param_2[2] = uVar3;
  param_2[3] = uVar2;
  param_2[4] = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x1c));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0x18));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 0x14));
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  param_2[5] = uVar3;
  param_2[6] = uVar2;
  param_2[7] = uVar1;
  return;
}


// Reference entry 105f4ca0; body size 14 bytes.
#line 1 "ENTRY_105f4ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f4ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_105f5df0(param_3);
  return;
}


// Reference entry 105f4cc0; body size 14 bytes.
#line 1 "ENTRY_105f4cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f4cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_105f5df0(param_3);
  return;
}


// Reference entry 105f4ce0; body size 103 bytes.
#line 1 "ENTRY_105f4ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f4ce0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_2 = (undefined4)((uint)&Ext_SCConditionalVectorBuilderTree_vftable);
  param_2[1] = *(undefined4 *)(param_3 + 4);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x10));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0xc));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 8));
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  param_2[2] = uVar3;
  param_2[3] = uVar2;
  param_2[4] = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x1c));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0x18));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 0x14));
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  param_2[5] = uVar3;
  param_2[6] = uVar2;
  param_2[7] = uVar1;
  return;
}


// Reference entry 105f4d60; body size 14 bytes.
#line 1 "ENTRY_105f4d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f4d60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_105f60e0(param_3);
  return;
}


// Reference entry 105f4d80; body size 14 bytes.
#line 1 "ENTRY_105f4d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f4d80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_105f60e0(param_3);
  return;
}


// Reference entry 105f4da0; body size 103 bytes.
#line 1 "ENTRY_105f4da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f4da0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_2 = (undefined4)((uint)&Ext_SCConditionalVectorBuilderTree_vftable);
  param_2[1] = *(undefined4 *)(param_3 + 4);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x10));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0xc));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 8));
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  param_2[2] = uVar3;
  param_2[3] = uVar2;
  param_2[4] = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x1c));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0x18));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 0x14));
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  param_2[5] = uVar3;
  param_2[6] = uVar2;
  param_2[7] = uVar1;
  return;
}


// Reference entry 105f5020; body size 9 bytes.
#line 1 "ENTRY_105f5020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f5020(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = (undefined1 *)(LAB_115b9c50);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  piVar1 = (int *)(*(int **)(param_2 + 0x30));
  uStack_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x2c) = 0;
    *(undefined4 *)(param_2 + 0x30) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_2 + 0x28));
  uStack_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 105f5030; body size 11 bytes.
#line 1 "ENTRY_105f5030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f5030(undefined4 param_1,undefined4 *param_2)

{
  (**(code **)*param_2)(0);
  return;
}


// Reference entry 105f5040; body size 11 bytes.
#line 1 "ENTRY_105f5040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f5040(undefined4 param_1,undefined4 *param_2)

{
  (**(code **)*param_2)(0);
  return;
}


// Reference entry 105f5050; body size 11 bytes.
#line 1 "ENTRY_105f5050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f5050(undefined4 param_1,undefined4 *param_2)

{
  (**(code **)*param_2)(0);
  return;
}


// Reference entry 105f50f0; body size 42 bytes.
#line 1 "ENTRY_105f50f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f50f0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    thunk_FUN_105f4a20(param_1);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x34;
    return;
  }
  thunk_FUN_105f3290(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 105f5130; body size 40 bytes.
#line 1 "ENTRY_105f5130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f5130(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    thunk_FUN_105f5a00(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x20;
    return;
  }
  thunk_FUN_105f34e0(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 105f5170; body size 40 bytes.
#line 1 "ENTRY_105f5170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f5170(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    thunk_FUN_105f5df0(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x20;
    return;
  }
  thunk_FUN_105f36d0(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 105f51b0; body size 40 bytes.
#line 1 "ENTRY_105f51b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f51b0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    thunk_FUN_105f60e0(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x20;
    return;
  }
  thunk_FUN_105f38c0(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 105f52b0; body size 15 bytes.
#line 1 "ENTRY_105f52b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f52b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105f52d0; body size 15 bytes.
#line 1 "ENTRY_105f52d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f52d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105f52f0; body size 15 bytes.
#line 1 "ENTRY_105f52f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f52f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105f5310; body size 15 bytes.
#line 1 "ENTRY_105f5310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5310(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105f5330; body size 15 bytes.
#line 1 "ENTRY_105f5330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5330(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105f5350; body size 15 bytes.
#line 1 "ENTRY_105f5350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5350(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105f5370; body size 15 bytes.
#line 1 "ENTRY_105f5370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5370(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105f5390; body size 15 bytes.
#line 1 "ENTRY_105f5390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5390(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 105f53b0; body size 5 bytes.
#line 1 "ENTRY_105f53b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f53b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f53c0; body size 5 bytes.
#line 1 "ENTRY_105f53c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f53c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f53d0; body size 5 bytes.
#line 1 "ENTRY_105f53d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f53d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f53e0; body size 5 bytes.
#line 1 "ENTRY_105f53e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f53e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f53f0; body size 5 bytes.
#line 1 "ENTRY_105f53f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f53f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5400; body size 5 bytes.
#line 1 "ENTRY_105f5400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5400(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5410; body size 5 bytes.
#line 1 "ENTRY_105f5410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5410(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5420; body size 5 bytes.
#line 1 "ENTRY_105f5420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5420(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5430; body size 5 bytes.
#line 1 "ENTRY_105f5430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5430(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5440; body size 5 bytes.
#line 1 "ENTRY_105f5440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5440(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5450; body size 5 bytes.
#line 1 "ENTRY_105f5450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5450(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5460; body size 5 bytes.
#line 1 "ENTRY_105f5460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5460(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5470; body size 5 bytes.
#line 1 "ENTRY_105f5470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5470(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5480; body size 5 bytes.
#line 1 "ENTRY_105f5480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5480(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5490; body size 5 bytes.
#line 1 "ENTRY_105f5490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5490(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f54a0; body size 5 bytes.
#line 1 "ENTRY_105f54a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f54a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f54b0; body size 5 bytes.
#line 1 "ENTRY_105f54b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f54b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f54c0; body size 5 bytes.
#line 1 "ENTRY_105f54c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f54c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f54d0; body size 5 bytes.
#line 1 "ENTRY_105f54d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f54d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f54e0; body size 5 bytes.
#line 1 "ENTRY_105f54e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f54e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f54f0; body size 5 bytes.
#line 1 "ENTRY_105f54f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f54f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5500; body size 5 bytes.
#line 1 "ENTRY_105f5500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5500(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5510; body size 5 bytes.
#line 1 "ENTRY_105f5510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5510(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5520; body size 5 bytes.
#line 1 "ENTRY_105f5520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5520(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5530; body size 5 bytes.
#line 1 "ENTRY_105f5530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5530(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5540; body size 5 bytes.
#line 1 "ENTRY_105f5540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5540(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5550; body size 5 bytes.
#line 1 "ENTRY_105f5550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5550(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5560; body size 5 bytes.
#line 1 "ENTRY_105f5560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5560(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5570; body size 5 bytes.
#line 1 "ENTRY_105f5570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5570(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5580; body size 5 bytes.
#line 1 "ENTRY_105f5580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5580(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5590; body size 5 bytes.
#line 1 "ENTRY_105f5590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5590(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f55a0; body size 6 bytes.
#line 1 "ENTRY_105f55a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f55a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a212c);
}


// Reference entry 105f55b0; body size 6 bytes.
#line 1 "ENTRY_105f55b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f55b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a216c);
}


// Reference entry 105f55c0; body size 6 bytes.
#line 1 "ENTRY_105f55c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f55c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2168);
}


// Reference entry 105f55d0; body size 6 bytes.
#line 1 "ENTRY_105f55d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f55d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a215c);
}


// Reference entry 105f55e0; body size 6 bytes.
#line 1 "ENTRY_105f55e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f55e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2148);
}


// Reference entry 105f55f0; body size 6 bytes.
#line 1 "ENTRY_105f55f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f55f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2180);
}


// Reference entry 105f5600; body size 6 bytes.
#line 1 "ENTRY_105f5600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5600(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2170);
}


// Reference entry 105f5610; body size 6 bytes.
#line 1 "ENTRY_105f5610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5610(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a218c);
}


// Reference entry 105f5620; body size 6 bytes.
#line 1 "ENTRY_105f5620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5620(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2158);
}


// Reference entry 105f5630; body size 6 bytes.
#line 1 "ENTRY_105f5630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5630(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2190);
}


// Reference entry 105f5640; body size 6 bytes.
#line 1 "ENTRY_105f5640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5640(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a217c);
}


// Reference entry 105f5650; body size 6 bytes.
#line 1 "ENTRY_105f5650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5650(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2128);
}


// Reference entry 105f5660; body size 6 bytes.
#line 1 "ENTRY_105f5660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5660(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2188);
}


// Reference entry 105f5670; body size 6 bytes.
#line 1 "ENTRY_105f5670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5670(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2184);
}


// Reference entry 105f5680; body size 6 bytes.
#line 1 "ENTRY_105f5680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5680(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a214c);
}


// Reference entry 105f5690; body size 6 bytes.
#line 1 "ENTRY_105f5690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5690(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2164);
}


// Reference entry 105f56a0; body size 6 bytes.
#line 1 "ENTRY_105f56a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f56a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2174);
}


// Reference entry 105f56b0; body size 6 bytes.
#line 1 "ENTRY_105f56b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f56b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2140);
}


// Reference entry 105f56c0; body size 6 bytes.
#line 1 "ENTRY_105f56c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f56c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a213c);
}


// Reference entry 105f56d0; body size 6 bytes.
#line 1 "ENTRY_105f56d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f56d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2130);
}


// Reference entry 105f56e0; body size 6 bytes.
#line 1 "ENTRY_105f56e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f56e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2134);
}


// Reference entry 105f56f0; body size 6 bytes.
#line 1 "ENTRY_105f56f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f56f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2138);
}


// Reference entry 105f5700; body size 6 bytes.
#line 1 "ENTRY_105f5700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5700(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2178);
}


// Reference entry 105f5710; body size 6 bytes.
#line 1 "ENTRY_105f5710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5710(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2144);
}


// Reference entry 105f5720; body size 6 bytes.
#line 1 "ENTRY_105f5720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5720(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2154);
}


// Reference entry 105f5730; body size 6 bytes.
#line 1 "ENTRY_105f5730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5730(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2160);
}


// Reference entry 105f5750; body size 6 bytes.
#line 1 "ENTRY_105f5750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5750(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2150);
}


// Reference entry 105f5760; body size 6 bytes.
#line 1 "ENTRY_105f5760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_105f5760(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIHapticDelegate");
}


// Reference entry 105f5770; body size 5 bytes.
#line 1 "ENTRY_105f5770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5770(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5780; body size 5 bytes.
#line 1 "ENTRY_105f5780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5780(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5790; body size 5 bytes.
#line 1 "ENTRY_105f5790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5790(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f57a0; body size 5 bytes.
#line 1 "ENTRY_105f57a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f57a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f57b0; body size 5 bytes.
#line 1 "ENTRY_105f57b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f57b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f57c0; body size 5 bytes.
#line 1 "ENTRY_105f57c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f57c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f57d0; body size 5 bytes.
#line 1 "ENTRY_105f57d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f57d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f57e0; body size 5 bytes.
#line 1 "ENTRY_105f57e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f57e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f57f0; body size 5 bytes.
#line 1 "ENTRY_105f57f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f57f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5800; body size 5 bytes.
#line 1 "ENTRY_105f5800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5800(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5810; body size 5 bytes.
#line 1 "ENTRY_105f5810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5810(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5820; body size 5 bytes.
#line 1 "ENTRY_105f5820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105f5820(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f5830; body size 65 bytes.
#line 1 "ENTRY_105f5830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f5830(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  *param_1 = (undefined4)((uint)&Ext_SCConditionalElementTree_vftable);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f5890; body size 105 bytes.
#line 1 "ENTRY_105f5890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f5890(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = (undefined4)((uint)&Ext_SCConditionalElementTree_vftable);
  param_1[1] = *(undefined4 *)(param_2 + 4);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x1c));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  param_1[7] = uVar2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f5ba0; body size 63 bytes.
#line 1 "ENTRY_105f5ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f5ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCConditionalElementTree_vftable);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f5bf0; body size 11 bytes.
#line 1 "ENTRY_105f5bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f5bf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCConditionalElementTreeIfChainInterface_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f5c00; body size 9 bytes.
#line 1 "ENTRY_105f5c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f5c00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCConditionalElementTreeIfChainInterface_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f5c10; body size 11 bytes.
#line 1 "ENTRY_105f5c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f5c10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCConditionalElementTreeNoAppendInterface_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f5c20; body size 9 bytes.
#line 1 "ENTRY_105f5c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f5c20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCConditionalElementTreeNoAppendInterface_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f5c30; body size 65 bytes.
#line 1 "ENTRY_105f5c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f5c30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  *param_1 = (undefined4)((uint)&Ext_SCConditionalVectorBuilderTree_vftable);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f5c90; body size 105 bytes.
#line 1 "ENTRY_105f5c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f5c90(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = (undefined4)((uint)&Ext_SCConditionalVectorBuilderTree_vftable);
  param_1[1] = *(undefined4 *)(param_2 + 4);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x1c));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  param_1[7] = uVar2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f5fa0; body size 63 bytes.
#line 1 "ENTRY_105f5fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f5fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCConditionalVectorBuilderTree_vftable);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f5ff0; body size 65 bytes.
#line 1 "ENTRY_105f5ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f5ff0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  *param_1 = (undefined4)((uint)&Ext_SCConditionalVectorBuilderTree_vftable);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f6390; body size 63 bytes.
#line 1 "ENTRY_105f6390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f6390(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCConditionalVectorBuilderTree_vftable);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f6400; body size 11 bytes.
#line 1 "ENTRY_105f6400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f6400(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCConditionalVectorBuilderTreeIfChainInterface_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f6410; body size 9 bytes.
#line 1 "ENTRY_105f6410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f6410(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCConditionalVectorBuilderTreeIfChainInterface_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f6420; body size 57 bytes.
#line 1 "ENTRY_105f6420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f6420(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f7dc0; body size 16 bytes.
#line 1 "ENTRY_105f7dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f7dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8d00; body size 21 bytes.
#line 1 "ENTRY_105f8d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f8d00(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8d20; body size 21 bytes.
#line 1 "ENTRY_105f8d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f8d20(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8d40; body size 21 bytes.
#line 1 "ENTRY_105f8d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f8d40(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8d60; body size 21 bytes.
#line 1 "ENTRY_105f8d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f8d60(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8d80; body size 21 bytes.
#line 1 "ENTRY_105f8d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f8d80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8da0; body size 21 bytes.
#line 1 "ENTRY_105f8da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f8da0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8dc0; body size 25 bytes.
#line 1 "ENTRY_105f8dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f8dc0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8de0; body size 25 bytes.
#line 1 "ENTRY_105f8de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f8de0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8e00; body size 23 bytes.
#line 1 "ENTRY_105f8e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f8e00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8e20; body size 25 bytes.
#line 1 "ENTRY_105f8e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f8e20(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8e40; body size 23 bytes.
#line 1 "ENTRY_105f8e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f8e40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8e60; body size 25 bytes.
#line 1 "ENTRY_105f8e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f8e60(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8e80; body size 23 bytes.
#line 1 "ENTRY_105f8e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f8e80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8ea0; body size 25 bytes.
#line 1 "ENTRY_105f8ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f8ea0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8ec0; body size 23 bytes.
#line 1 "ENTRY_105f8ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f8ec0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8ee0; body size 25 bytes.
#line 1 "ENTRY_105f8ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f8ee0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8f00; body size 23 bytes.
#line 1 "ENTRY_105f8f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f8f00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8f20; body size 25 bytes.
#line 1 "ENTRY_105f8f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f8f20(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8f40; body size 23 bytes.
#line 1 "ENTRY_105f8f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f8f40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8f60; body size 25 bytes.
#line 1 "ENTRY_105f8f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f8f60(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8f80; body size 23 bytes.
#line 1 "ENTRY_105f8f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f8f80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f8fa0; body size 3 bytes.
#line 1 "ENTRY_105f8fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105f8fa0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f8fb0; body size 3 bytes.
#line 1 "ENTRY_105f8fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105f8fb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f8fc0; body size 3 bytes.
#line 1 "ENTRY_105f8fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105f8fc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f8fd0; body size 3 bytes.
#line 1 "ENTRY_105f8fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105f8fd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f8fe0; body size 3 bytes.
#line 1 "ENTRY_105f8fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105f8fe0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 105f91d0; body size 49 bytes.
#line 1 "ENTRY_105f91d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f91d0(undefined4 *param_2)
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


// Reference entry 105f9210; body size 49 bytes.
#line 1 "ENTRY_105f9210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f9210(undefined4 *param_2)
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


// Reference entry 105f9320; body size 23 bytes.
#line 1 "ENTRY_105f9320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f9320(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f9340; body size 49 bytes.
#line 1 "ENTRY_105f9340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f9340(undefined4 *param_2)
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


// Reference entry 105f9480; body size 23 bytes.
#line 1 "ENTRY_105f9480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f9480(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f94a0; body size 49 bytes.
#line 1 "ENTRY_105f94a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f94a0(undefined4 *param_2)
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


// Reference entry 105f95e0; body size 23 bytes.
#line 1 "ENTRY_105f95e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f95e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f9600; body size 49 bytes.
#line 1 "ENTRY_105f9600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f9600(undefined4 *param_2)
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


// Reference entry 105f9740; body size 23 bytes.
#line 1 "ENTRY_105f9740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f9740(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f9760; body size 49 bytes.
#line 1 "ENTRY_105f9760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f9760(undefined4 *param_2)
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


// Reference entry 105f9870; body size 23 bytes.
#line 1 "ENTRY_105f9870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f9870(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105f9890; body size 49 bytes.
#line 1 "ENTRY_105f9890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f9890(undefined4 *param_2)
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


// Reference entry 105f9a40; body size 49 bytes.
#line 1 "ENTRY_105f9a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f9a40(undefined4 *param_2)
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


// Reference entry 105f9dc0; body size 97 bytes.
#line 1 "ENTRY_105f9dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_105f9dc0(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
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
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 105faa60; body size 57 bytes.
#line 1 "ENTRY_105faa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105faa60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCWifiConfigAskNetworkModifiedPage_vftable);
  param_1[4] = (uint)&Ext_SCWifiConfigAskNetworkModifiedPage_vftable;
  param_1[0x23] = (uint)&Ext_SCWifiConfigAskNetworkModifiedPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCWifiConfigAskNetworkModifiedPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105fabb0; body size 64 bytes.
#line 1 "ENTRY_105fabb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105fabb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCWifiConfigAskUnplugEthernetPage_vftable);
  param_1[4] = (uint)&Ext_SCWifiConfigAskUnplugEthernetPage_vftable;
  param_1[0x23] = (uint)&Ext_SCWifiConfigAskUnplugEthernetPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCWifiConfigAskUnplugEthernetPage_vftable;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105fb540; body size 57 bytes.
#line 1 "ENTRY_105fb540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105fb540(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCWifiConfigInformWiredConnectionPage_vftable);
  param_1[4] = (uint)&Ext_SCWifiConfigInformWiredConnectionPage_vftable;
  param_1[0x23] = (uint)&Ext_SCWifiConfigInformWiredConnectionPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCWifiConfigInformWiredConnectionPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105fbc90; body size 57 bytes.
#line 1 "ENTRY_105fbc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105fbc90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCWifiConfigPlayerOutOfDatePage_vftable);
  param_1[4] = (uint)&Ext_SCWifiConfigPlayerOutOfDatePage_vftable;
  param_1[0x23] = (uint)&Ext_SCWifiConfigPlayerOutOfDatePage_vftable;
  param_1[0x2a] = (uint)&Ext_SCWifiConfigPlayerOutOfDatePage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105fc560; body size 57 bytes.
#line 1 "ENTRY_105fc560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105fc560(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCWifiConfigSetupCardNoNetworkPage_vftable);
  param_1[4] = (uint)&Ext_SCWifiConfigSetupCardNoNetworkPage_vftable;
  param_1[0x23] = (uint)&Ext_SCWifiConfigSetupCardNoNetworkPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCWifiConfigSetupCardNoNetworkPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105fc6b0; body size 57 bytes.
#line 1 "ENTRY_105fc6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105fc6b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCWifiConfigSetupCardNothingFoundPage_vftable);
  param_1[4] = (uint)&Ext_SCWifiConfigSetupCardNothingFoundPage_vftable;
  param_1[0x23] = (uint)&Ext_SCWifiConfigSetupCardNothingFoundPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCWifiConfigSetupCardNothingFoundPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105fc9b0; body size 57 bytes.
#line 1 "ENTRY_105fc9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105fc9b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCWifiConfigStartOpenApPage_vftable);
  param_1[4] = (uint)&Ext_SCWifiConfigStartOpenApPage_vftable;
  param_1[0x23] = (uint)&Ext_SCWifiConfigStartOpenApPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCWifiConfigStartOpenApPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105fcb00; body size 57 bytes.
#line 1 "ENTRY_105fcb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105fcb00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCWifiConfigSuccessPage_vftable);
  param_1[4] = (uint)&Ext_SCWifiConfigSuccessPage_vftable;
  param_1[0x23] = (uint)&Ext_SCWifiConfigSuccessPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCWifiConfigSuccessPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105fe9e0; body size 57 bytes.
#line 1 "ENTRY_105fe9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105fe9e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCWifiConfigWrongHHIDPage_vftable);
  param_1[4] = (uint)&Ext_SCWifiConfigWrongHHIDPage_vftable;
  param_1[0x23] = (uint)&Ext_SCWifiConfigWrongHHIDPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCWifiConfigWrongHHIDPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 105febc0; body size 7 bytes.
#line 1 "ENTRY_105febc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105febc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCConditionalElementTreeNoAppendInterface_vftable);
  return;
}


// Reference entry 105ff000; body size 11 bytes.
#line 1 "ENTRY_105ff000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff000(undefined4 *param_1)

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


// Reference entry 105ff010; body size 11 bytes.
#line 1 "ENTRY_105ff010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff010(undefined4 *param_1)

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


// Reference entry 105ff020; body size 11 bytes.
#line 1 "ENTRY_105ff020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff020(undefined4 *param_1)

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


// Reference entry 105ff030; body size 11 bytes.
#line 1 "ENTRY_105ff030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff030(undefined4 *param_1)

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


// Reference entry 105ff040; body size 11 bytes.
#line 1 "ENTRY_105ff040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff040(undefined4 *param_1)

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


// Reference entry 105ff050; body size 11 bytes.
#line 1 "ENTRY_105ff050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff050(undefined4 *param_1)

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


// Reference entry 105ff060; body size 11 bytes.
#line 1 "ENTRY_105ff060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff060(undefined4 *param_1)

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


// Reference entry 105ff070; body size 11 bytes.
#line 1 "ENTRY_105ff070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff070(undefined4 *param_1)

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


// Reference entry 105ff080; body size 11 bytes.
#line 1 "ENTRY_105ff080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff080(undefined4 *param_1)

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


// Reference entry 105ff090; body size 11 bytes.
#line 1 "ENTRY_105ff090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff090(undefined4 *param_1)

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


// Reference entry 105ff0a0; body size 11 bytes.
#line 1 "ENTRY_105ff0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff0a0(undefined4 *param_1)

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


// Reference entry 105ff0b0; body size 11 bytes.
#line 1 "ENTRY_105ff0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff0b0(undefined4 *param_1)

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


// Reference entry 105ff0d0; body size 11 bytes.
#line 1 "ENTRY_105ff0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff0d0(undefined4 *param_1)

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


// Reference entry 105ff0e0; body size 11 bytes.
#line 1 "ENTRY_105ff0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff0e0(undefined4 *param_1)

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


// Reference entry 105ff0f0; body size 11 bytes.
#line 1 "ENTRY_105ff0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff0f0(undefined4 *param_1)

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


// Reference entry 105ff100; body size 11 bytes.
#line 1 "ENTRY_105ff100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff100(undefined4 *param_1)

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


// Reference entry 105ff110; body size 11 bytes.
#line 1 "ENTRY_105ff110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff110(undefined4 *param_1)

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


// Reference entry 105ff120; body size 11 bytes.
#line 1 "ENTRY_105ff120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff120(undefined4 *param_1)

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


// Reference entry 105ff130; body size 11 bytes.
#line 1 "ENTRY_105ff130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff130(undefined4 *param_1)

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


// Reference entry 105ff140; body size 11 bytes.
#line 1 "ENTRY_105ff140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff140(undefined4 *param_1)

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


// Reference entry 105ff150; body size 11 bytes.
#line 1 "ENTRY_105ff150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff150(undefined4 *param_1)

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


// Reference entry 105ff160; body size 11 bytes.
#line 1 "ENTRY_105ff160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff160(undefined4 *param_1)

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


// Reference entry 105ff170; body size 11 bytes.
#line 1 "ENTRY_105ff170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff170(undefined4 *param_1)

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


// Reference entry 105ff180; body size 11 bytes.
#line 1 "ENTRY_105ff180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff180(undefined4 *param_1)

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


// Reference entry 105ff190; body size 11 bytes.
#line 1 "ENTRY_105ff190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff190(undefined4 *param_1)

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


// Reference entry 105ff1a0; body size 11 bytes.
#line 1 "ENTRY_105ff1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff1a0(undefined4 *param_1)

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


// Reference entry 105ff500; body size 38 bytes.
#line 1 "ENTRY_105ff500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff500(undefined4 *param_1)

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


// Reference entry 105ff530; body size 38 bytes.
#line 1 "ENTRY_105ff530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff530(undefined4 *param_1)

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


// Reference entry 105ff560; body size 38 bytes.
#line 1 "ENTRY_105ff560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff560(undefined4 *param_1)

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


// Reference entry 105ff590; body size 38 bytes.
#line 1 "ENTRY_105ff590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff590(undefined4 *param_1)

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


// Reference entry 105ff5c0; body size 38 bytes.
#line 1 "ENTRY_105ff5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff5c0(undefined4 *param_1)

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


// Reference entry 105ff5f0; body size 38 bytes.
#line 1 "ENTRY_105ff5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff5f0(undefined4 *param_1)

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


// Reference entry 105ff620; body size 38 bytes.
#line 1 "ENTRY_105ff620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff620(undefined4 *param_1)

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


// Reference entry 105ff650; body size 38 bytes.
#line 1 "ENTRY_105ff650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff650(undefined4 *param_1)

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


// Reference entry 105ff680; body size 38 bytes.
#line 1 "ENTRY_105ff680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff680(undefined4 *param_1)

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


// Reference entry 105ff6b0; body size 38 bytes.
#line 1 "ENTRY_105ff6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff6b0(undefined4 *param_1)

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


// Reference entry 105ff710; body size 38 bytes.
#line 1 "ENTRY_105ff710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff710(undefined4 *param_1)

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


// Reference entry 105ff740; body size 38 bytes.
#line 1 "ENTRY_105ff740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff740(undefined4 *param_1)

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


// Reference entry 105ff770; body size 38 bytes.
#line 1 "ENTRY_105ff770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff770(undefined4 *param_1)

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


// Reference entry 106004c0; body size 38 bytes.
#line 1 "ENTRY_106004c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106004c0(undefined4 *param_1)

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


// Reference entry 106004f0; body size 21 bytes.
#line 1 "ENTRY_106004f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106004f0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a212c = (int)(0);
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


// Reference entry 10600510; body size 38 bytes.
#line 1 "ENTRY_10600510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600510(undefined4 *param_1)

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


// Reference entry 10600540; body size 21 bytes.
#line 1 "ENTRY_10600540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600540(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a216c = (int)(0);
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


// Reference entry 10600560; body size 38 bytes.
#line 1 "ENTRY_10600560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600560(undefined4 *param_1)

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


// Reference entry 10600590; body size 21 bytes.
#line 1 "ENTRY_10600590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600590(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2168 = (int)(0);
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


// Reference entry 106005b0; body size 38 bytes.
#line 1 "ENTRY_106005b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106005b0(undefined4 *param_1)

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


// Reference entry 106005e0; body size 21 bytes.
#line 1 "ENTRY_106005e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106005e0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a215c = (int)(0);
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


// Reference entry 10600600; body size 38 bytes.
#line 1 "ENTRY_10600600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600600(undefined4 *param_1)

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


// Reference entry 10600630; body size 21 bytes.
#line 1 "ENTRY_10600630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600630(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2148 = (int)(0);
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


// Reference entry 10600650; body size 38 bytes.
#line 1 "ENTRY_10600650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600650(undefined4 *param_1)

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


// Reference entry 10600680; body size 21 bytes.
#line 1 "ENTRY_10600680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600680(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2180 = (int)(0);
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


// Reference entry 106006a0; body size 38 bytes.
#line 1 "ENTRY_106006a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106006a0(undefined4 *param_1)

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


// Reference entry 106006d0; body size 21 bytes.
#line 1 "ENTRY_106006d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106006d0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2170 = (int)(0);
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


// Reference entry 106006f0; body size 38 bytes.
#line 1 "ENTRY_106006f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106006f0(undefined4 *param_1)

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


// Reference entry 10600720; body size 21 bytes.
#line 1 "ENTRY_10600720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600720(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a218c = (int)(0);
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


// Reference entry 10600740; body size 38 bytes.
#line 1 "ENTRY_10600740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600740(undefined4 *param_1)

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


// Reference entry 10600770; body size 21 bytes.
#line 1 "ENTRY_10600770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600770(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2158 = (int)(0);
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


// Reference entry 10600790; body size 38 bytes.
#line 1 "ENTRY_10600790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600790(undefined4 *param_1)

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


// Reference entry 106007c0; body size 21 bytes.
#line 1 "ENTRY_106007c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106007c0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2190 = (int)(0);
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


// Reference entry 106007e0; body size 38 bytes.
#line 1 "ENTRY_106007e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106007e0(undefined4 *param_1)

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


// Reference entry 10600810; body size 21 bytes.
#line 1 "ENTRY_10600810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600810(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a217c = (int)(0);
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


// Reference entry 10600910; body size 21 bytes.
#line 1 "ENTRY_10600910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600910(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2128 = (int)(0);
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


// Reference entry 10600930; body size 38 bytes.
#line 1 "ENTRY_10600930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600930(undefined4 *param_1)

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


// Reference entry 10600980; body size 38 bytes.
#line 1 "ENTRY_10600980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600980(undefined4 *param_1)

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


// Reference entry 106009b0; body size 21 bytes.
#line 1 "ENTRY_106009b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106009b0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2184 = (int)(0);
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


// Reference entry 106009d0; body size 38 bytes.
#line 1 "ENTRY_106009d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106009d0(undefined4 *param_1)

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


// Reference entry 10600a00; body size 21 bytes.
#line 1 "ENTRY_10600a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600a00(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a214c = (int)(0);
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


// Reference entry 10600a20; body size 38 bytes.
#line 1 "ENTRY_10600a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600a20(undefined4 *param_1)

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


// Reference entry 10600a50; body size 21 bytes.
#line 1 "ENTRY_10600a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600a50(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2164 = (int)(0);
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


// Reference entry 10600a70; body size 38 bytes.
#line 1 "ENTRY_10600a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600a70(undefined4 *param_1)

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


// Reference entry 10600aa0; body size 21 bytes.
#line 1 "ENTRY_10600aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600aa0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2174 = (int)(0);
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


// Reference entry 10600b60; body size 21 bytes.
#line 1 "ENTRY_10600b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600b60(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2140 = (int)(0);
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


// Reference entry 10600c20; body size 21 bytes.
#line 1 "ENTRY_10600c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600c20(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a213c = (int)(0);
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


// Reference entry 10600c40; body size 38 bytes.
#line 1 "ENTRY_10600c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600c40(undefined4 *param_1)

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


// Reference entry 10600c70; body size 21 bytes.
#line 1 "ENTRY_10600c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600c70(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2130 = (int)(0);
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


// Reference entry 10600c90; body size 38 bytes.
#line 1 "ENTRY_10600c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600c90(undefined4 *param_1)

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


// Reference entry 10600cc0; body size 21 bytes.
#line 1 "ENTRY_10600cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600cc0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2134 = (int)(0);
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


// Reference entry 10600d80; body size 21 bytes.
#line 1 "ENTRY_10600d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600d80(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2138 = (int)(0);
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


// Reference entry 10600da0; body size 38 bytes.
#line 1 "ENTRY_10600da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600da0(undefined4 *param_1)

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


// Reference entry 10600dd0; body size 21 bytes.
#line 1 "ENTRY_10600dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600dd0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2178 = (int)(0);
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


// Reference entry 10600df0; body size 38 bytes.
#line 1 "ENTRY_10600df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600df0(undefined4 *param_1)

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


// Reference entry 10600e20; body size 21 bytes.
#line 1 "ENTRY_10600e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600e20(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2144 = (int)(0);
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


// Reference entry 10600e40; body size 38 bytes.
#line 1 "ENTRY_10600e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600e40(undefined4 *param_1)

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


// Reference entry 10600e70; body size 21 bytes.
#line 1 "ENTRY_10600e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600e70(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2154 = (int)(0);
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


// Reference entry 10600e90; body size 38 bytes.
#line 1 "ENTRY_10600e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600e90(undefined4 *param_1)

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


// Reference entry 10600ec0; body size 21 bytes.
#line 1 "ENTRY_10600ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600ec0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2160 = (int)(0);
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


// Reference entry 106012e0; body size 38 bytes.
#line 1 "ENTRY_106012e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106012e0(undefined4 *param_1)

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


// Reference entry 10601310; body size 21 bytes.
#line 1 "ENTRY_10601310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10601310(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2150 = (int)(0);
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


// Reference entry 10601330; body size 65 bytes.
#line 1 "ENTRY_10601330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10601330(int *param_2)
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


// Reference entry 106014a0; body size 3 bytes.
#line 1 "ENTRY_106014a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106014a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106014b0; body size 7 bytes.
#line 1 "ENTRY_106014b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106014b0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 106014c0; body size 7 bytes.
#line 1 "ENTRY_106014c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106014c0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 106014d0; body size 7 bytes.
#line 1 "ENTRY_106014d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106014d0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 106014e0; body size 3 bytes.
#line 1 "ENTRY_106014e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_106014e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
}


// Reference entry 106014f0; body size 3 bytes.
#line 1 "ENTRY_106014f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_106014f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 10601500; body size 3 bytes.
#line 1 "ENTRY_10601500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10601500(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10601510; body size 3 bytes.
#line 1 "ENTRY_10601510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10601510(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10601520; body size 3 bytes.
#line 1 "ENTRY_10601520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10601520(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10603ca0; body size 32 bytes.
#line 1 "ENTRY_10603ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10603ca0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10604d60(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = iVar1;
  param_1[2] = param_2 * 0x34 + iVar1;
  return;
}


// Reference entry 10603cd0; body size 32 bytes.
#line 1 "ENTRY_10603cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10603cd0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10604dd0(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = iVar1;
  param_1[2] = param_2 * 0x20 + iVar1;
  return;
}


// Reference entry 10603d00; body size 32 bytes.
#line 1 "ENTRY_10603d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10603d00(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10604e40(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = iVar1;
  param_1[2] = param_2 * 0x20 + iVar1;
  return;
}


// Reference entry 10603d30; body size 32 bytes.
#line 1 "ENTRY_10603d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10603d30(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10604eb0(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = iVar1;
  param_1[2] = param_2 * 0x20 + iVar1;
  return;
}


// Reference entry 10603d60; body size 33 bytes.
#line 1 "ENTRY_10603d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10603d60(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10604f20(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = iVar1;
  param_1[2] = iVar1 + param_2 * 0xc;
  return;
}


// Reference entry 10603d90; body size 137 bytes.
#line 1 "ENTRY_10603d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10603d90(uint param_2)
{
  uint *param_1 = (uint *)this;
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


// Reference entry 10603e40; body size 63 bytes.
#line 1 "ENTRY_10603e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10603e40(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x34);
  if (0x4ec4ec4 - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x4ec4ec4);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10603e90; body size 49 bytes.
#line 1 "ENTRY_10603e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10603e90(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 5);
  if (0x7ffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x7ffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10603ed0; body size 49 bytes.
#line 1 "ENTRY_10603ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10603ed0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 5);
  if (0x7ffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x7ffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10603f10; body size 49 bytes.
#line 1 "ENTRY_10603f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10603f10(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 5);
  if (0x7ffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x7ffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10603f50; body size 62 bytes.
#line 1 "ENTRY_10603f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10603f50(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0xc);
  if (0x15555555 - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x15555555);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 106043c0; body size 3 bytes.
#line 1 "ENTRY_106043c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106043c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106043d0; body size 3 bytes.
#line 1 "ENTRY_106043d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106043d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106043e0; body size 3 bytes.
#line 1 "ENTRY_106043e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106043e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106043f0; body size 3 bytes.
#line 1 "ENTRY_106043f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106043f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10604400; body size 3 bytes.
#line 1 "ENTRY_10604400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10604400(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10604410; body size 3 bytes.
#line 1 "ENTRY_10604410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10604410(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10604420; body size 3 bytes.
#line 1 "ENTRY_10604420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10604420(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10604430; body size 3 bytes.
#line 1 "ENTRY_10604430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10604430(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10604440; body size 3 bytes.
#line 1 "ENTRY_10604440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10604440(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10604450; body size 3 bytes.
#line 1 "ENTRY_10604450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10604450(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10604460; body size 3 bytes.
#line 1 "ENTRY_10604460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10604460(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10604480; body size 3 bytes.
#line 1 "ENTRY_10604480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10604480(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10604490; body size 3 bytes.
#line 1 "ENTRY_10604490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10604490(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106044a0; body size 3 bytes.
#line 1 "ENTRY_106044a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106044a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106044b0; body size 3 bytes.
#line 1 "ENTRY_106044b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106044b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106044c0; body size 3 bytes.
#line 1 "ENTRY_106044c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106044c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106044d0; body size 3 bytes.
#line 1 "ENTRY_106044d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106044d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106044e0; body size 3 bytes.
#line 1 "ENTRY_106044e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106044e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10604500; body size 3 bytes.
#line 1 "ENTRY_10604500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10604500(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10604510; body size 3 bytes.
#line 1 "ENTRY_10604510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10604510(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10604520; body size 3 bytes.
#line 1 "ENTRY_10604520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10604520(void)

{
  return;
}


// Reference entry 10604530; body size 3 bytes.
#line 1 "ENTRY_10604530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10604530(void)

{
  return;
}


// Reference entry 10604540; body size 3 bytes.
#line 1 "ENTRY_10604540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10604540(void)

{
  return;
}


// Reference entry 10604550; body size 3 bytes.
#line 1 "ENTRY_10604550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10604550(void)

{
  return;
}


// Reference entry 10604560; body size 3 bytes.
#line 1 "ENTRY_10604560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10604560(void)

{
  return;
}


// Reference entry 10604570; body size 6 bytes.
#line 1 "ENTRY_10604570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10604570(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10604580; body size 6 bytes.
#line 1 "ENTRY_10604580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10604580(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10604590; body size 6 bytes.
#line 1 "ENTRY_10604590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10604590(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106045a0; body size 6 bytes.
#line 1 "ENTRY_106045a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106045a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106045b0; body size 6 bytes.
#line 1 "ENTRY_106045b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106045b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106045c0; body size 6 bytes.
#line 1 "ENTRY_106045c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106045c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10604a20; body size 24 bytes.
#line 1 "ENTRY_10604a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10604a20(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105f4630(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10604a40; body size 24 bytes.
#line 1 "ENTRY_10604a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10604a40(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105f46f0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10604a60; body size 24 bytes.
#line 1 "ENTRY_10604a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10604a60(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105f47b0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10604b50; body size 24 bytes.
#line 1 "ENTRY_10604b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10604b50(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105f4090(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10604b70; body size 24 bytes.
#line 1 "ENTRY_10604b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10604b70(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105f4630(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10604b90; body size 24 bytes.
#line 1 "ENTRY_10604b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10604b90(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105f46f0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10604bb0; body size 24 bytes.
#line 1 "ENTRY_10604bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10604bb0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105f47b0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10604bd0; body size 24 bytes.
#line 1 "ENTRY_10604bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10604bd0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105f4340(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10604bf0; body size 24 bytes.
#line 1 "ENTRY_10604bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10604bf0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105f4090(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10604c10; body size 24 bytes.
#line 1 "ENTRY_10604c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10604c10(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105f4630(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10604c30; body size 24 bytes.
#line 1 "ENTRY_10604c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10604c30(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105f46f0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10604c50; body size 24 bytes.
#line 1 "ENTRY_10604c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10604c50(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105f47b0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10604c70; body size 24 bytes.
#line 1 "ENTRY_10604c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10604c70(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105f4340(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 106050e0; body size 7 bytes.
#line 1 "ENTRY_106050e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106050e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(param_1 + 4) + -0x20);
}


// Reference entry 106050f0; body size 7 bytes.
#line 1 "ENTRY_106050f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106050f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(param_1 + 4) + -0x20);
}


// Reference entry 10605100; body size 7 bytes.
#line 1 "ENTRY_10605100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10605100(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(param_1 + 4) + -0x20);
}


// Reference entry 10605110; body size 23 bytes.
#line 1 "ENTRY_10605110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10605110(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[2] - *param_1) / 0x34);
}


// Reference entry 10605130; body size 9 bytes.
#line 1 "ENTRY_10605130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10605130(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 5);
}


// Reference entry 10605140; body size 9 bytes.
#line 1 "ENTRY_10605140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10605140(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 5);
}


// Reference entry 10605150; body size 9 bytes.
#line 1 "ENTRY_10605150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10605150(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 5);
}


// Reference entry 10605160; body size 22 bytes.
#line 1 "ENTRY_10605160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10605160(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[2] - *param_1) / 0xc);
}


// Reference entry 10605180; body size 18 bytes.
#line 1 "ENTRY_10605180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10605180(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eac8d0());
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(iVar1 != 1);
}


// Reference entry 10608100; body size 9 bytes.
#line 1 "ENTRY_10608100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10608100(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10610c10; body size 7 bytes.
#line 1 "ENTRY_10610c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10610c10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x111));
}


// Reference entry 10610c20; body size 7 bytes.
#line 1 "ENTRY_10610c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10610c20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x118));
}


// Reference entry 10610c30; body size 7 bytes.
#line 1 "ENTRY_10610c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10610c30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x119));
}


// Reference entry 10610c40; body size 23 bytes.
#line 1 "ENTRY_10610c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10610c40(SCStr *param_2)
{
  int param_1 = (int )this;
  ((Stub_SCStr *)(param_2))->SCStr((SCStr *)(param_1 + 0x114));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10610e70; body size 23 bytes.
#line 1 "ENTRY_10610e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_10610e70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_2);
  (**(code **)*param_1)(param_2);
  thunk_FUN_106d83f0(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_2);
}


// Reference entry 10613c70; body size 7 bytes.
#line 1 "ENTRY_10613c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10613c70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x11c));
}


// Reference entry 10613c80; body size 7 bytes.
#line 1 "ENTRY_10613c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10613c80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x118));
}


// Reference entry 10613c90; body size 7 bytes.
#line 1 "ENTRY_10613c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10613c90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x120));
}


// Reference entry 10618c00; body size 6 bytes.
#line 1 "ENTRY_10618c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618c00(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a212c);
}


// Reference entry 10618c10; body size 6 bytes.
#line 1 "ENTRY_10618c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618c10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a216c);
}


// Reference entry 10618c20; body size 6 bytes.
#line 1 "ENTRY_10618c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618c20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2168);
}


// Reference entry 10618c30; body size 6 bytes.
#line 1 "ENTRY_10618c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618c30(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a215c);
}


// Reference entry 10618c40; body size 6 bytes.
#line 1 "ENTRY_10618c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618c40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2148);
}


// Reference entry 10618c50; body size 6 bytes.
#line 1 "ENTRY_10618c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618c50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2180);
}


// Reference entry 10618c60; body size 6 bytes.
#line 1 "ENTRY_10618c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618c60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2170);
}


// Reference entry 10618c70; body size 6 bytes.
#line 1 "ENTRY_10618c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618c70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a218c);
}


// Reference entry 10618c80; body size 6 bytes.
#line 1 "ENTRY_10618c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618c80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2158);
}


// Reference entry 10618c90; body size 6 bytes.
#line 1 "ENTRY_10618c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618c90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2190);
}


// Reference entry 10618ca0; body size 6 bytes.
#line 1 "ENTRY_10618ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618ca0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a217c);
}


// Reference entry 10618cb0; body size 6 bytes.
#line 1 "ENTRY_10618cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618cb0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2128);
}


// Reference entry 10618cc0; body size 6 bytes.
#line 1 "ENTRY_10618cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618cc0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2188);
}


// Reference entry 10618cd0; body size 6 bytes.
#line 1 "ENTRY_10618cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618cd0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2184);
}


// Reference entry 10618ce0; body size 6 bytes.
#line 1 "ENTRY_10618ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618ce0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a214c);
}


// Reference entry 10618cf0; body size 6 bytes.
#line 1 "ENTRY_10618cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618cf0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2164);
}


// Reference entry 10618d00; body size 6 bytes.
#line 1 "ENTRY_10618d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618d00(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2174);
}


// Reference entry 10618d10; body size 6 bytes.
#line 1 "ENTRY_10618d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618d10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2140);
}


// Reference entry 10618d20; body size 6 bytes.
#line 1 "ENTRY_10618d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618d20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a213c);
}


// Reference entry 10618d30; body size 6 bytes.
#line 1 "ENTRY_10618d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618d30(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2130);
}


// Reference entry 10618d40; body size 6 bytes.
#line 1 "ENTRY_10618d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618d40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2134);
}


// Reference entry 10618d50; body size 6 bytes.
#line 1 "ENTRY_10618d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618d50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2138);
}


// Reference entry 10618d60; body size 6 bytes.
#line 1 "ENTRY_10618d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618d60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2178);
}


// Reference entry 10618d70; body size 6 bytes.
#line 1 "ENTRY_10618d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618d70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2144);
}


// Reference entry 10618d80; body size 6 bytes.
#line 1 "ENTRY_10618d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618d80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2154);
}


// Reference entry 10618d90; body size 6 bytes.
#line 1 "ENTRY_10618d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618d90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2160);
}


// Reference entry 10618da0; body size 6 bytes.
#line 1 "ENTRY_10618da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618da0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2194);
}


// Reference entry 10618db0; body size 6 bytes.
#line 1 "ENTRY_10618db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10618db0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2150);
}


// Reference entry 10618dc0; body size 5 bytes.
#line 1 "ENTRY_10618dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618dc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618dd0; body size 5 bytes.
#line 1 "ENTRY_10618dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618dd0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618de0; body size 5 bytes.
#line 1 "ENTRY_10618de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618de0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618df0; body size 5 bytes.
#line 1 "ENTRY_10618df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618df0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618e00; body size 5 bytes.
#line 1 "ENTRY_10618e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618e00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618e10; body size 5 bytes.
#line 1 "ENTRY_10618e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618e10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618e20; body size 5 bytes.
#line 1 "ENTRY_10618e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618e20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618e30; body size 5 bytes.
#line 1 "ENTRY_10618e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618e30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618e40; body size 5 bytes.
#line 1 "ENTRY_10618e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618e40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618e50; body size 5 bytes.
#line 1 "ENTRY_10618e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618e50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618e60; body size 5 bytes.
#line 1 "ENTRY_10618e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618e60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618e70; body size 5 bytes.
#line 1 "ENTRY_10618e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618e70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618e80; body size 5 bytes.
#line 1 "ENTRY_10618e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618e80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618e90; body size 5 bytes.
#line 1 "ENTRY_10618e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618e90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618ea0; body size 5 bytes.
#line 1 "ENTRY_10618ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618ea0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618eb0; body size 5 bytes.
#line 1 "ENTRY_10618eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618eb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618ec0; body size 5 bytes.
#line 1 "ENTRY_10618ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618ec0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618ed0; body size 5 bytes.
#line 1 "ENTRY_10618ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618ed0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618ee0; body size 5 bytes.
#line 1 "ENTRY_10618ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618ee0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10618f00; body size 5 bytes.
#line 1 "ENTRY_10618f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618f00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10618f10; body size 5 bytes.
#line 1 "ENTRY_10618f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618f10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10618f20; body size 5 bytes.
#line 1 "ENTRY_10618f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618f20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10618f30; body size 5 bytes.
#line 1 "ENTRY_10618f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618f30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10618f40; body size 5 bytes.
#line 1 "ENTRY_10618f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618f40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10618f50; body size 5 bytes.
#line 1 "ENTRY_10618f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618f50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10618f60; body size 5 bytes.
#line 1 "ENTRY_10618f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618f60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10618f70; body size 5 bytes.
#line 1 "ENTRY_10618f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618f70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10618f80; body size 5 bytes.
#line 1 "ENTRY_10618f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618f80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10618f90; body size 5 bytes.
#line 1 "ENTRY_10618f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618f90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10618fa0; body size 5 bytes.
#line 1 "ENTRY_10618fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618fa0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10618fb0; body size 5 bytes.
#line 1 "ENTRY_10618fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618fb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10618fc0; body size 5 bytes.
#line 1 "ENTRY_10618fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618fc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10618fd0; body size 5 bytes.
#line 1 "ENTRY_10618fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618fd0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10618fe0; body size 5 bytes.
#line 1 "ENTRY_10618fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618fe0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10618ff0; body size 5 bytes.
#line 1 "ENTRY_10618ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10618ff0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10619000; body size 5 bytes.
#line 1 "ENTRY_10619000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10619000(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10619010; body size 5 bytes.
#line 1 "ENTRY_10619010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10619010(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10619020; body size 5 bytes.
#line 1 "ENTRY_10619020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10619020(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10619030; body size 5 bytes.
#line 1 "ENTRY_10619030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10619030(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10619040; body size 5 bytes.
#line 1 "ENTRY_10619040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10619040(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10619050; body size 5 bytes.
#line 1 "ENTRY_10619050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10619050(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10619060; body size 5 bytes.
#line 1 "ENTRY_10619060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10619060(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10619070; body size 5 bytes.
#line 1 "ENTRY_10619070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10619070(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10619080; body size 5 bytes.
#line 1 "ENTRY_10619080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10619080(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10619090; body size 5 bytes.
#line 1 "ENTRY_10619090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10619090(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106196f0; body size 14 bytes.
#line 1 "ENTRY_106196f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106196f0(void)

{
  thunk_FUN_11248b40(0x15);
  return;
}


// Reference entry 10619710; body size 82 bytes.
#line 1 "ENTRY_10619710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10619710(undefined4 param_2,char param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c)) {
    thunk_FUN_105f34e0(*(int *)(param_1 + 0x18),param_2);
  }
  else {
    thunk_FUN_105f5a00(param_2);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x20;
  }
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  if (param_3 == '\0') {
    if (*(int *)(iVar1 + -0x1c) == 4) {
      *(undefined4 *)(iVar1 + -0x1c) = 5;
      return;
    }
    if (*(int *)(iVar1 + -0x1c) == 0) {
      *(undefined4 *)(iVar1 + -0x1c) = 1;
    }
  }
  return;
}


// Reference entry 10619780; body size 82 bytes.
#line 1 "ENTRY_10619780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10619780(undefined4 param_2,char param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c)) {
    thunk_FUN_105f36d0(*(int *)(param_1 + 0x18),param_2);
  }
  else {
    thunk_FUN_105f5df0(param_2);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x20;
  }
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  if (param_3 == '\0') {
    if (*(int *)(iVar1 + -0x1c) == 4) {
      *(undefined4 *)(iVar1 + -0x1c) = 5;
      return;
    }
    if (*(int *)(iVar1 + -0x1c) == 0) {
      *(undefined4 *)(iVar1 + -0x1c) = 1;
    }
  }
  return;
}


// Reference entry 106197f0; body size 82 bytes.
#line 1 "ENTRY_106197f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106197f0(undefined4 param_2,char param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c)) {
    thunk_FUN_105f38c0(*(int *)(param_1 + 0x18),param_2);
  }
  else {
    thunk_FUN_105f60e0(param_2);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x20;
  }
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  if (param_3 == '\0') {
    if (*(int *)(iVar1 + -0x1c) == 4) {
      *(undefined4 *)(iVar1 + -0x1c) = 5;
      return;
    }
    if (*(int *)(iVar1 + -0x1c) == 0) {
      *(undefined4 *)(iVar1 + -0x1c) = 1;
    }
  }
  return;
}


// Reference entry 10619860; body size 6 bytes.
#line 1 "ENTRY_10619860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10619860(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIHapticDelegate");
}


// Reference entry 10619880; body size 7 bytes.
#line 1 "ENTRY_10619880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10619880(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10619890; body size 7 bytes.
#line 1 "ENTRY_10619890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10619890(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10619a50; body size 6 bytes.
#line 1 "ENTRY_10619a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10619a50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x4ec4ec4);
}


// Reference entry 10619a60; body size 6 bytes.
#line 1 "ENTRY_10619a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10619a60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x7ffffff);
}


// Reference entry 10619a70; body size 6 bytes.
#line 1 "ENTRY_10619a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10619a70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x7ffffff);
}


// Reference entry 10619a80; body size 6 bytes.
#line 1 "ENTRY_10619a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10619a80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x7ffffff);
}


// Reference entry 10619a90; body size 6 bytes.
#line 1 "ENTRY_10619a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10619a90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x15555555);
}


// Reference entry 10619aa0; body size 6 bytes.
#line 1 "ENTRY_10619aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10619aa0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x4ec4ec4);
}


// Reference entry 10619ab0; body size 6 bytes.
#line 1 "ENTRY_10619ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10619ab0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x7ffffff);
}


// Reference entry 10619ac0; body size 6 bytes.
#line 1 "ENTRY_10619ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10619ac0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x7ffffff);
}


// Reference entry 10619ad0; body size 6 bytes.
#line 1 "ENTRY_10619ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10619ad0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x7ffffff);
}


// Reference entry 10619ae0; body size 6 bytes.
#line 1 "ENTRY_10619ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10619ae0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x15555555);
}


// Reference entry 1061c260; body size 3 bytes.
#line 1 "ENTRY_1061c260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1061c260(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1061c270; body size 42 bytes.
#line 1 "ENTRY_1061c270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1061c270(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    thunk_FUN_105f4a20(param_1);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x34;
    return;
  }
  thunk_FUN_105f3290(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 1061c2b0; body size 40 bytes.
#line 1 "ENTRY_1061c2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1061c2b0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    thunk_FUN_105f5a00(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x20;
    return;
  }
  thunk_FUN_105f34e0(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 1061c2f0; body size 40 bytes.
#line 1 "ENTRY_1061c2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1061c2f0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    thunk_FUN_105f5df0(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x20;
    return;
  }
  thunk_FUN_105f36d0(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 1061c330; body size 40 bytes.
#line 1 "ENTRY_1061c330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1061c330(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    thunk_FUN_105f60e0(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x20;
    return;
  }
  thunk_FUN_105f38c0(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 1061c430; body size 28 bytes.
#line 1 "ENTRY_1061c430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061c430(undefined4 *param_1)

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


// Reference entry 1061c460; body size 28 bytes.
#line 1 "ENTRY_1061c460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061c460(undefined4 *param_1)

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


// Reference entry 1061c490; body size 28 bytes.
#line 1 "ENTRY_1061c490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061c490(undefined4 *param_1)

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


// Reference entry 1061c4c0; body size 28 bytes.
#line 1 "ENTRY_1061c4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061c4c0(undefined4 *param_1)

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


// Reference entry 1061c4f0; body size 28 bytes.
#line 1 "ENTRY_1061c4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061c4f0(undefined4 *param_1)

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


// Reference entry 1061c520; body size 20 bytes.
#line 1 "ENTRY_1061c520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061c520(int *param_1)

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


// Reference entry 1061c540; body size 5 bytes.
#line 1 "ENTRY_1061c540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1061c540(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1061c550; body size 5 bytes.
#line 1 "ENTRY_1061c550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1061c550(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1061c560; body size 5 bytes.
#line 1 "ENTRY_1061c560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1061c560(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1061c570; body size 5 bytes.
#line 1 "ENTRY_1061c570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1061c570(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1061c580; body size 5 bytes.
#line 1 "ENTRY_1061c580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1061c580(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1061c590; body size 5 bytes.
#line 1 "ENTRY_1061c590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1061c590(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1061c5a0; body size 5 bytes.
#line 1 "ENTRY_1061c5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1061c5a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1061c5b0; body size 13 bytes.
#line 1 "ENTRY_1061c5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1061c5b0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x118) = param_2;
  return;
}


// Reference entry 1061c5c0; body size 13 bytes.
#line 1 "ENTRY_1061c5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1061c5c0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x120) = param_2;
  return;
}


// Reference entry 1061c5d0; body size 13 bytes.
#line 1 "ENTRY_1061c5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1061c5d0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x118) = param_2;
  return;
}


// Reference entry 1061c5f0; body size 13 bytes.
#line 1 "ENTRY_1061c5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1061c5f0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x119) = param_2;
  return;
}


// Reference entry 1061c600; body size 23 bytes.
#line 1 "ENTRY_1061c600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1061c600(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[1] - *param_1) / 0x4c);
}


// Reference entry 1061c620; body size 7 bytes.
#line 1 "ENTRY_1061c620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1061c620(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0xf8));
}


// Reference entry 1061cad0; body size 43 bytes.
#line 1 "ENTRY_1061cad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1061cad0(int *param_2)
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


// Reference entry 1061cf20; body size 7 bytes.
#line 1 "ENTRY_1061cf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1061cf20(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 1061cf30; body size 3 bytes.
#line 1 "ENTRY_1061cf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1061cf30(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1061cf40; body size 3 bytes.
#line 1 "ENTRY_1061cf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1061cf40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1061dce0; body size 3 bytes.
#line 1 "ENTRY_1061dce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1061dce0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1061dd70; body size 28 bytes.
#line 1 "ENTRY_1061dd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061dd70(undefined4 *param_1)

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


// Reference entry 1061e380; body size 6 bytes.
#line 1 "ENTRY_1061e380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1061e380(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2244);
}


// Reference entry 1061e390; body size 6 bytes.
#line 1 "ENTRY_1061e390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1061e390(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2240);
}


// Reference entry 1061e3a0; body size 6 bytes.
#line 1 "ENTRY_1061e3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1061e3a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2238);
}


// Reference entry 1061e3b0; body size 6 bytes.
#line 1 "ENTRY_1061e3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1061e3b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a223c);
}


// Reference entry 1061e3c0; body size 6 bytes.
#line 1 "ENTRY_1061e3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1061e3c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIClipboardDelegate");
}


// Reference entry 1061e3d0; body size 57 bytes.
#line 1 "ENTRY_1061e3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1061e3d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1061e7e0; body size 9 bytes.
#line 1 "ENTRY_1061e7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1061e7e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1061e7f0; body size 67 bytes.
#line 1 "ENTRY_1061e7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1061e7f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSubmitDiagsWizard_vftable);
  param_1[4] = (uint)&Ext_SCSubmitDiagsWizard_vftable;
  param_1[0x23] = (uint)&Ext_SCSubmitDiagsWizard_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubmitDiagsWizard_vftable;
  param_1[0x3a] = 0xffffffff;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1061e850; body size 67 bytes.
#line 1 "ENTRY_1061e850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1061e850(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSubmitDiagsWizardDonePage_vftable);
  param_1[4] = (uint)&Ext_SCSubmitDiagsWizardDonePage_vftable;
  param_1[0x23] = (uint)&Ext_SCSubmitDiagsWizardDonePage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubmitDiagsWizardDonePage_vftable;
  param_1[0x38] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1061e9b0; body size 57 bytes.
#line 1 "ENTRY_1061e9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1061e9b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSubmitDiagsWizardErrorPage_vftable);
  param_1[4] = (uint)&Ext_SCSubmitDiagsWizardErrorPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSubmitDiagsWizardErrorPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubmitDiagsWizardErrorPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1061eb00; body size 64 bytes.
#line 1 "ENTRY_1061eb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1061eb00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSubmitDiagsWizardIntroPage_vftable);
  param_1[4] = (uint)&Ext_SCSubmitDiagsWizardIntroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSubmitDiagsWizardIntroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubmitDiagsWizardIntroPage_vftable;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1061ec50; body size 84 bytes.
#line 1 "ENTRY_1061ec50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1061ec50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSubmitDiagsWizardSubmittingPage_vftable);
  param_1[4] = (uint)&Ext_SCSubmitDiagsWizardSubmittingPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSubmitDiagsWizardSubmittingPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubmitDiagsWizardSubmittingPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1061f1f0; body size 38 bytes.
#line 1 "ENTRY_1061f1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f1f0(undefined4 *param_1)

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


// Reference entry 1061f2c0; body size 11 bytes.
#line 1 "ENTRY_1061f2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f2c0(undefined4 *param_1)

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


// Reference entry 1061f2d0; body size 11 bytes.
#line 1 "ENTRY_1061f2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f2d0(undefined4 *param_1)

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


// Reference entry 1061f2e0; body size 11 bytes.
#line 1 "ENTRY_1061f2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f2e0(undefined4 *param_1)

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


// Reference entry 1061f2f0; body size 11 bytes.
#line 1 "ENTRY_1061f2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f2f0(undefined4 *param_1)

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


// Reference entry 1061f670; body size 21 bytes.
#line 1 "ENTRY_1061f670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f670(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2244 = (int)(0);
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


// Reference entry 1061f690; body size 38 bytes.
#line 1 "ENTRY_1061f690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f690(undefined4 *param_1)

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


// Reference entry 1061f6c0; body size 21 bytes.
#line 1 "ENTRY_1061f6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f6c0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2240 = (int)(0);
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


// Reference entry 1061f6e0; body size 38 bytes.
#line 1 "ENTRY_1061f6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f6e0(undefined4 *param_1)

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


// Reference entry 1061f710; body size 21 bytes.
#line 1 "ENTRY_1061f710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f710(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2238 = (int)(0);
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


// Reference entry 1061f7e0; body size 21 bytes.
#line 1 "ENTRY_1061f7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f7e0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a223c = (int)(0);
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


// Reference entry 1061f870; body size 7 bytes.
#line 1 "ENTRY_1061f870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1061f870(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 1061f880; body size 3 bytes.
#line 1 "ENTRY_1061f880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1061f880(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10621c70; body size 7 bytes.
#line 1 "ENTRY_10621c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10621c70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xe8));
}


// Reference entry 10623180; body size 6 bytes.
#line 1 "ENTRY_10623180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10623180(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2244);
}


// Reference entry 10623190; body size 6 bytes.
#line 1 "ENTRY_10623190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10623190(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2240);
}


// Reference entry 106231a0; body size 6 bytes.
#line 1 "ENTRY_106231a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106231a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2238);
}


// Reference entry 106231b0; body size 6 bytes.
#line 1 "ENTRY_106231b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106231b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a223c);
}


// Reference entry 106231c0; body size 6 bytes.
#line 1 "ENTRY_106231c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106231c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2248);
}


// Reference entry 106231e0; body size 5 bytes.
#line 1 "ENTRY_106231e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106231e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106231f0; body size 5 bytes.
#line 1 "ENTRY_106231f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106231f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10623200; body size 6 bytes.
#line 1 "ENTRY_10623200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10623200(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIClipboardDelegate");
}


// Reference entry 10623220; body size 7 bytes.
#line 1 "ENTRY_10623220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10623220(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10623be0; body size 20 bytes.
#line 1 "ENTRY_10623be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10623be0(int *param_1)

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


// Reference entry 10623c00; body size 13 bytes.
#line 1 "ENTRY_10623c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10623c00(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xe8) = param_2;
  return;
}


// Reference entry 10623c40; body size 33 bytes.
#line 1 "ENTRY_10623c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10623c40(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 10623df0; body size 93 bytes.
#line 1 "ENTRY_10623df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10623df0(int *param_1,int *param_2,int *param_3)

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


// Reference entry 10623e70; body size 92 bytes.
#line 1 "ENTRY_10623e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10623e70(int *param_1,int *param_2,int *param_3)

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


// Reference entry 10623ef0; body size 5 bytes.
#line 1 "ENTRY_10623ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10623ef0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10623f00; body size 5 bytes.
#line 1 "ENTRY_10623f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10623f00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10623f10; body size 5 bytes.
#line 1 "ENTRY_10623f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10623f10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106241a0; body size 15 bytes.
#line 1 "ENTRY_106241a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106241a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 106241c0; body size 5 bytes.
#line 1 "ENTRY_106241c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106241c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106241d0; body size 5 bytes.
#line 1 "ENTRY_106241d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106241d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106241e0; body size 6 bytes.
#line 1 "ENTRY_106241e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106241e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22c0);
}


// Reference entry 106241f0; body size 6 bytes.
#line 1 "ENTRY_106241f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106241f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22bc);
}


// Reference entry 10624200; body size 6 bytes.
#line 1 "ENTRY_10624200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624200(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22c4);
}


// Reference entry 10624210; body size 6 bytes.
#line 1 "ENTRY_10624210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624210(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22a8);
}


// Reference entry 10624220; body size 6 bytes.
#line 1 "ENTRY_10624220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624220(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22c8);
}


// Reference entry 10624230; body size 6 bytes.
#line 1 "ENTRY_10624230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624230(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22b0);
}


// Reference entry 10624240; body size 6 bytes.
#line 1 "ENTRY_10624240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624240(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22d8);
}


// Reference entry 10624250; body size 6 bytes.
#line 1 "ENTRY_10624250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624250(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22e4);
}


// Reference entry 10624260; body size 6 bytes.
#line 1 "ENTRY_10624260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624260(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22dc);
}


// Reference entry 10624270; body size 6 bytes.
#line 1 "ENTRY_10624270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624270(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22e0);
}


// Reference entry 10624280; body size 6 bytes.
#line 1 "ENTRY_10624280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624280(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22ac);
}


// Reference entry 10624290; body size 6 bytes.
#line 1 "ENTRY_10624290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624290(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22f8);
}


// Reference entry 106242a0; body size 6 bytes.
#line 1 "ENTRY_106242a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106242a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22fc);
}


// Reference entry 106242b0; body size 6 bytes.
#line 1 "ENTRY_106242b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106242b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2300);
}


// Reference entry 106242c0; body size 6 bytes.
#line 1 "ENTRY_106242c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106242c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22f4);
}


// Reference entry 106242d0; body size 6 bytes.
#line 1 "ENTRY_106242d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106242d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22d4);
}


// Reference entry 106242e0; body size 6 bytes.
#line 1 "ENTRY_106242e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106242e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2298);
}


// Reference entry 106242f0; body size 6 bytes.
#line 1 "ENTRY_106242f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106242f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22b8);
}


// Reference entry 10624300; body size 6 bytes.
#line 1 "ENTRY_10624300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624300(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22f0);
}


// Reference entry 10624310; body size 6 bytes.
#line 1 "ENTRY_10624310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624310(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22ec);
}


// Reference entry 10624320; body size 6 bytes.
#line 1 "ENTRY_10624320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624320(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2294);
}


// Reference entry 10624330; body size 6 bytes.
#line 1 "ENTRY_10624330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624330(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2304);
}


// Reference entry 10624340; body size 6 bytes.
#line 1 "ENTRY_10624340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624340(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22b4);
}


// Reference entry 10624350; body size 6 bytes.
#line 1 "ENTRY_10624350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624350(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a229c);
}


// Reference entry 10624360; body size 6 bytes.
#line 1 "ENTRY_10624360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624360(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22a0);
}


// Reference entry 10624370; body size 6 bytes.
#line 1 "ENTRY_10624370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624370(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22e8);
}


// Reference entry 10624380; body size 6 bytes.
#line 1 "ENTRY_10624380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624380(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22a4);
}


// Reference entry 10624390; body size 6 bytes.
#line 1 "ENTRY_10624390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10624390(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22cc);
}


// Reference entry 106243a0; body size 6 bytes.
#line 1 "ENTRY_106243a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106243a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22d0);
}


// Reference entry 106243c0; body size 33 bytes.
#line 1 "ENTRY_106243c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint * FUN_106243c0(uint *param_1,uint *param_2)

{
  if (((int)param_2[1] <= (int)param_1[1]) &&
     (((int)param_2[1] < (int)param_1[1] || (*param_2 < *param_1)))) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint *)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint *)(param_1);
}


// Reference entry 106243f0; body size 5 bytes.
#line 1 "ENTRY_106243f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106243f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10624400; body size 57 bytes.
#line 1 "ENTRY_10624400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10624400(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10625f80; body size 16 bytes.
#line 1 "ENTRY_10625f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10625f80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10626fd0; body size 11 bytes.
#line 1 "ENTRY_10626fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10626fd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10626fe0; body size 11 bytes.
#line 1 "ENTRY_10626fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10626fe0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10626ff0; body size 25 bytes.
#line 1 "ENTRY_10626ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10626ff0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10627010; body size 49 bytes.
#line 1 "ENTRY_10627010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10627010(undefined4 *param_2)
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


// Reference entry 106270d0; body size 49 bytes.
#line 1 "ENTRY_106270d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106270d0(undefined4 *param_2)
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


// Reference entry 10627bf0; body size 84 bytes.
#line 1 "ENTRY_10627bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10627bf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSwgenDowngradeProductCheckRunningLegacySWPage_vftable);
  param_1[4] = (uint)&Ext_SCSwgenDowngradeProductCheckRunningLegacySWPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSwgenDowngradeProductCheckRunningLegacySWPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSwgenDowngradeProductCheckRunningLegacySWPage_vftable;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10628120; body size 57 bytes.
#line 1 "ENTRY_10628120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10628120(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSwgenDowngradeProductConnectingProductPage_vftable);
  param_1[4] = (uint)&Ext_SCSwgenDowngradeProductConnectingProductPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSwgenDowngradeProductConnectingProductPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSwgenDowngradeProductConnectingProductPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106286e0; body size 57 bytes.
#line 1 "ENTRY_106286e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106286e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSwgenDowngradeProductFirmwareDowngradeIntroPage_vftable);
  param_1[4] = (uint)&Ext_SCSwgenDowngradeProductFirmwareDowngradeIntroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSwgenDowngradeProductFirmwareDowngradeIntroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSwgenDowngradeProductFirmwareDowngradeIntroPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10628830; body size 84 bytes.
#line 1 "ENTRY_10628830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10628830(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSwgenDowngradeProductFirmwareDowngradingPage_vftable);
  param_1[4] = (uint)&Ext_SCSwgenDowngradeProductFirmwareDowngradingPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSwgenDowngradeProductFirmwareDowngradingPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSwgenDowngradeProductFirmwareDowngradingPage_vftable;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10628f70; body size 57 bytes.
#line 1 "ENTRY_10628f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10628f70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSwgenDowngradeProductIntroPage_vftable);
  param_1[4] = (uint)&Ext_SCSwgenDowngradeProductIntroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSwgenDowngradeProductIntroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSwgenDowngradeProductIntroPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106292d0; body size 57 bytes.
#line 1 "ENTRY_106292d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106292d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSwgenDowngradeProductJoinProductFailurePage_vftable);
  param_1[4] = (uint)&Ext_SCSwgenDowngradeProductJoinProductFailurePage_vftable;
  param_1[0x23] = (uint)&Ext_SCSwgenDowngradeProductJoinProductFailurePage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSwgenDowngradeProductJoinProductFailurePage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10629630; body size 57 bytes.
#line 1 "ENTRY_10629630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10629630(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSwgenDowngradeProductOptionsPage_vftable);
  param_1[4] = (uint)&Ext_SCSwgenDowngradeProductOptionsPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSwgenDowngradeProductOptionsPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSwgenDowngradeProductOptionsPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10629780; body size 57 bytes.
#line 1 "ENTRY_10629780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10629780(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSwgenDowngradeProductOutroPage_vftable);
  param_1[4] = (uint)&Ext_SCSwgenDowngradeProductOutroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSwgenDowngradeProductOutroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSwgenDowngradeProductOutroPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10629ae0; body size 57 bytes.
#line 1 "ENTRY_10629ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10629ae0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSwgenDowngradeProductSearchingPage_vftable);
  param_1[4] = (uint)&Ext_SCSwgenDowngradeProductSearchingPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSwgenDowngradeProductSearchingPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSwgenDowngradeProductSearchingPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10629c30; body size 57 bytes.
#line 1 "ENTRY_10629c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10629c30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSwgenDowngradeProductSearchingRetryPage_vftable);
  param_1[4] = (uint)&Ext_SCSwgenDowngradeProductSearchingRetryPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSwgenDowngradeProductSearchingRetryPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSwgenDowngradeProductSearchingRetryPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10629f90; body size 84 bytes.
#line 1 "ENTRY_10629f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10629f90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCSwgenDowngradeProductSelectionPage_vftable);
  param_1[4] = (uint)&Ext_SCSwgenDowngradeProductSelectionPage_vftable;
  param_1[0x23] = (uint)&Ext_SCSwgenDowngradeProductSelectionPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCSwgenDowngradeProductSelectionPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1062c280; body size 11 bytes.
#line 1 "ENTRY_1062c280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c280(undefined4 *param_1)

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


// Reference entry 1062c2d0; body size 11 bytes.
#line 1 "ENTRY_1062c2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c2d0(undefined4 *param_1)

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


// Reference entry 1062c480; body size 38 bytes.
#line 1 "ENTRY_1062c480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c480(undefined4 *param_1)

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


// Reference entry 1062c4b0; body size 38 bytes.
#line 1 "ENTRY_1062c4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c4b0(undefined4 *param_1)

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


// Reference entry 1062c4e0; body size 38 bytes.
#line 1 "ENTRY_1062c4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c4e0(undefined4 *param_1)

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


// Reference entry 1062c510; body size 38 bytes.
#line 1 "ENTRY_1062c510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c510(undefined4 *param_1)

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


// Reference entry 1062c540; body size 38 bytes.
#line 1 "ENTRY_1062c540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c540(undefined4 *param_1)

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


// Reference entry 1062c570; body size 38 bytes.
#line 1 "ENTRY_1062c570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c570(undefined4 *param_1)

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


// Reference entry 1062c5d0; body size 38 bytes.
#line 1 "ENTRY_1062c5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c5d0(undefined4 *param_1)

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


// Reference entry 1062c600; body size 38 bytes.
#line 1 "ENTRY_1062c600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c600(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062c630; body size 38 bytes.
#line 1 "ENTRY_1062c630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c630(undefined4 *param_1)

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


// Reference entry 1062c660; body size 38 bytes.
#line 1 "ENTRY_1062c660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c660(undefined4 *param_1)

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


// Reference entry 1062c690; body size 38 bytes.
#line 1 "ENTRY_1062c690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062c6c0; body size 38 bytes.
#line 1 "ENTRY_1062c6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c6c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062c6f0; body size 38 bytes.
#line 1 "ENTRY_1062c6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c6f0(undefined4 *param_1)

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


// Reference entry 1062c720; body size 38 bytes.
#line 1 "ENTRY_1062c720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c720(undefined4 *param_1)

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


// Reference entry 1062ce80; body size 38 bytes.
#line 1 "ENTRY_1062ce80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062ce80(undefined4 *param_1)

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


// Reference entry 1062ced0; body size 38 bytes.
#line 1 "ENTRY_1062ced0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062ced0(undefined4 *param_1)

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


// Reference entry 1062cf20; body size 38 bytes.
#line 1 "ENTRY_1062cf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062cf20(undefined4 *param_1)

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


// Reference entry 1062cf70; body size 38 bytes.
#line 1 "ENTRY_1062cf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062cf70(undefined4 *param_1)

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


// Reference entry 1062cfc0; body size 38 bytes.
#line 1 "ENTRY_1062cfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062cfc0(undefined4 *param_1)

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


// Reference entry 1062d0e0; body size 38 bytes.
#line 1 "ENTRY_1062d0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d0e0(undefined4 *param_1)

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


// Reference entry 1062d1f0; body size 38 bytes.
#line 1 "ENTRY_1062d1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d1f0(undefined4 *param_1)

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


// Reference entry 1062d300; body size 38 bytes.
#line 1 "ENTRY_1062d300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d300(undefined4 *param_1)

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


// Reference entry 1062d350; body size 38 bytes.
#line 1 "ENTRY_1062d350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d350(undefined4 *param_1)

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


// Reference entry 1062d530; body size 38 bytes.
#line 1 "ENTRY_1062d530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d530(undefined4 *param_1)

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


// Reference entry 1062d580; body size 38 bytes.
#line 1 "ENTRY_1062d580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d580(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062d5d0; body size 38 bytes.
#line 1 "ENTRY_1062d5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d5d0(undefined4 *param_1)

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


// Reference entry 1062d600; body size 21 bytes.
#line 1 "ENTRY_1062d600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d600(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2298 = (int)(0);
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


// Reference entry 1062d620; body size 38 bytes.
#line 1 "ENTRY_1062d620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d620(undefined4 *param_1)

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


// Reference entry 1062d670; body size 38 bytes.
#line 1 "ENTRY_1062d670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d670(undefined4 *param_1)

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


// Reference entry 1062d6c0; body size 38 bytes.
#line 1 "ENTRY_1062d6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d6c0(undefined4 *param_1)

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


// Reference entry 1062d710; body size 38 bytes.
#line 1 "ENTRY_1062d710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d710(undefined4 *param_1)

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


// Reference entry 1062d760; body size 38 bytes.
#line 1 "ENTRY_1062d760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d760(undefined4 *param_1)

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


// Reference entry 1062d790; body size 21 bytes.
#line 1 "ENTRY_1062d790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d790(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2304 = (int)(0);
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


// Reference entry 1062d7b0; body size 38 bytes.
#line 1 "ENTRY_1062d7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d7b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062d800; body size 38 bytes.
#line 1 "ENTRY_1062d800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d800(undefined4 *param_1)

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


// Reference entry 1062d850; body size 38 bytes.
#line 1 "ENTRY_1062d850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d850(undefined4 *param_1)

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


// Reference entry 1062d8a0; body size 38 bytes.
#line 1 "ENTRY_1062d8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d8a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCSubwizStateFor_vftable);
  param_1[4] = (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x23] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  param_1[0x2a] =
       (uint)&Ext_SCSubwizStateFor_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCSubwizState_vftable);
  param_1[4] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x23] = (uint)&Ext_SCSubwizState_vftable;
  param_1[0x2a] = (uint)&Ext_SCSubwizState_vftable;
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062d9c0; body size 38 bytes.
#line 1 "ENTRY_1062d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d9c0(undefined4 *param_1)

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


// Reference entry 1062da10; body size 38 bytes.
#line 1 "ENTRY_1062da10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062da10(undefined4 *param_1)

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


// Reference entry 1062ddc0; body size 65 bytes.
#line 1 "ENTRY_1062ddc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1062ddc0(int *param_2)
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


// Reference entry 1062de40; body size 12 bytes.
#line 1 "ENTRY_1062de40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1062de40(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 8);
}


// Reference entry 1062de50; body size 3 bytes.
#line 1 "ENTRY_1062de50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1062de50(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1062de60; body size 3 bytes.
#line 1 "ENTRY_1062de60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1062de60(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1062de70; body size 3 bytes.
#line 1 "ENTRY_1062de70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1062de70(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1062de80; body size 6 bytes.
#line 1 "ENTRY_1062de80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_1062de80(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 1062de90; body size 16 bytes.
#line 1 "ENTRY_1062de90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1062de90(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 8);
  return;
}


// Reference entry 10630710; body size 3 bytes.
#line 1 "ENTRY_10630710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10630710(void)

{
  return;
}


// Reference entry 106307d0; body size 3 bytes.
#line 1 "ENTRY_106307d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106307d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106307f0; body size 13 bytes.
#line 1 "ENTRY_106307f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106307f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10630990; body size 11 bytes.
#line 1 "ENTRY_10630990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10630990(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10630fc0; body size 11 bytes.
#line 1 "ENTRY_10630fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10630fc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x110) < 2);
}


// Reference entry 10633d70; body size 9 bytes.
#line 1 "ENTRY_10633d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10633d70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10633d80; body size 12 bytes.
#line 1 "ENTRY_10633d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10633d80(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10633eb0; body size 7 bytes.
#line 1 "ENTRY_10633eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10633eb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x10f));
}


// Reference entry 1063a6d0; body size 22 bytes.
#line 1 "ENTRY_1063a6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1063a6d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_2);
  (**(code **)*param_1)(param_2);
  thunk_FUN_10ec7200(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_2);
}


// Reference entry 1063a6f0; body size 7 bytes.
#line 1 "ENTRY_1063a6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1063a6f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x118));
}


// Reference entry 1063db70; body size 7 bytes.
#line 1 "ENTRY_1063db70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1063db70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x119));
}


// Reference entry 1063db80; body size 3 bytes.
#line 1 "ENTRY_1063db80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_1063db80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
}


// Reference entry 1063e480; body size 7 bytes.
#line 1 "ENTRY_1063e480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1063e480(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x10d));
}


// Reference entry 10642cd0; body size 6 bytes.
#line 1 "ENTRY_10642cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642cd0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22c0);
}


// Reference entry 10642ce0; body size 6 bytes.
#line 1 "ENTRY_10642ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642ce0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22bc);
}


// Reference entry 10642cf0; body size 6 bytes.
#line 1 "ENTRY_10642cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642cf0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22c4);
}


// Reference entry 10642d00; body size 6 bytes.
#line 1 "ENTRY_10642d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642d00(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22a8);
}


// Reference entry 10642d10; body size 6 bytes.
#line 1 "ENTRY_10642d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642d10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22c8);
}


// Reference entry 10642d20; body size 6 bytes.
#line 1 "ENTRY_10642d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642d20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22b0);
}


// Reference entry 10642d30; body size 6 bytes.
#line 1 "ENTRY_10642d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642d30(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22d8);
}


// Reference entry 10642d40; body size 6 bytes.
#line 1 "ENTRY_10642d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642d40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22e4);
}


// Reference entry 10642d50; body size 6 bytes.
#line 1 "ENTRY_10642d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642d50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22dc);
}


// Reference entry 10642d60; body size 6 bytes.
#line 1 "ENTRY_10642d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642d60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22e0);
}


// Reference entry 10642d70; body size 6 bytes.
#line 1 "ENTRY_10642d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642d70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22ac);
}


// Reference entry 10642d80; body size 6 bytes.
#line 1 "ENTRY_10642d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642d80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22f8);
}


// Reference entry 10642d90; body size 6 bytes.
#line 1 "ENTRY_10642d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642d90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22fc);
}


// Reference entry 10642da0; body size 6 bytes.
#line 1 "ENTRY_10642da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642da0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2300);
}


// Reference entry 10642db0; body size 6 bytes.
#line 1 "ENTRY_10642db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642db0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22f4);
}


// Reference entry 10642dc0; body size 6 bytes.
#line 1 "ENTRY_10642dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642dc0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22d4);
}


// Reference entry 10642dd0; body size 6 bytes.
#line 1 "ENTRY_10642dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642dd0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2298);
}


// Reference entry 10642de0; body size 6 bytes.
#line 1 "ENTRY_10642de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642de0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22b8);
}


// Reference entry 10642df0; body size 6 bytes.
#line 1 "ENTRY_10642df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642df0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22f0);
}


// Reference entry 10642e00; body size 6 bytes.
#line 1 "ENTRY_10642e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642e00(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22ec);
}


// Reference entry 10642e10; body size 6 bytes.
#line 1 "ENTRY_10642e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642e10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2294);
}


// Reference entry 10642e20; body size 6 bytes.
#line 1 "ENTRY_10642e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642e20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2304);
}


// Reference entry 10642e30; body size 6 bytes.
#line 1 "ENTRY_10642e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642e30(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22b4);
}


// Reference entry 10642e40; body size 6 bytes.
#line 1 "ENTRY_10642e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642e40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a229c);
}


// Reference entry 10642e50; body size 6 bytes.
#line 1 "ENTRY_10642e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642e50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22a0);
}


// Reference entry 10642e60; body size 6 bytes.
#line 1 "ENTRY_10642e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642e60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22e8);
}


// Reference entry 10642e70; body size 6 bytes.
#line 1 "ENTRY_10642e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642e70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22a4);
}


// Reference entry 10642e80; body size 6 bytes.
#line 1 "ENTRY_10642e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642e80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22cc);
}


// Reference entry 10642e90; body size 6 bytes.
#line 1 "ENTRY_10642e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642e90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a22d0);
}


// Reference entry 10642ea0; body size 6 bytes.
#line 1 "ENTRY_10642ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10642ea0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2308);
}


// Reference entry 10642eb0; body size 5 bytes.
#line 1 "ENTRY_10642eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642eb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642ec0; body size 5 bytes.
#line 1 "ENTRY_10642ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642ec0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642ed0; body size 5 bytes.
#line 1 "ENTRY_10642ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642ed0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642ee0; body size 5 bytes.
#line 1 "ENTRY_10642ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642ee0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642ef0; body size 5 bytes.
#line 1 "ENTRY_10642ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642ef0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642f00; body size 5 bytes.
#line 1 "ENTRY_10642f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642f00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642f10; body size 5 bytes.
#line 1 "ENTRY_10642f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642f10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642f20; body size 5 bytes.
#line 1 "ENTRY_10642f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642f20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642f30; body size 5 bytes.
#line 1 "ENTRY_10642f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642f30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642f40; body size 5 bytes.
#line 1 "ENTRY_10642f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642f40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642f50; body size 5 bytes.
#line 1 "ENTRY_10642f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642f50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642f60; body size 5 bytes.
#line 1 "ENTRY_10642f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642f60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642f70; body size 5 bytes.
#line 1 "ENTRY_10642f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642f70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642f80; body size 5 bytes.
#line 1 "ENTRY_10642f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642f80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642f90; body size 5 bytes.
#line 1 "ENTRY_10642f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642f90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642fa0; body size 5 bytes.
#line 1 "ENTRY_10642fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642fa0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642fb0; body size 5 bytes.
#line 1 "ENTRY_10642fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642fb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642fc0; body size 5 bytes.
#line 1 "ENTRY_10642fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642fc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642fd0; body size 5 bytes.
#line 1 "ENTRY_10642fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642fd0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642fe0; body size 5 bytes.
#line 1 "ENTRY_10642fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642fe0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10642ff0; body size 5 bytes.
#line 1 "ENTRY_10642ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10642ff0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10643000; body size 5 bytes.
#line 1 "ENTRY_10643000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643000(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10643010; body size 5 bytes.
#line 1 "ENTRY_10643010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643010(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10643020; body size 5 bytes.
#line 1 "ENTRY_10643020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643020(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10643040; body size 5 bytes.
#line 1 "ENTRY_10643040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643040(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10643050; body size 5 bytes.
#line 1 "ENTRY_10643050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643050(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10643060; body size 5 bytes.
#line 1 "ENTRY_10643060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643060(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10643070; body size 5 bytes.
#line 1 "ENTRY_10643070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643070(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10643080; body size 5 bytes.
#line 1 "ENTRY_10643080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643080(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10643090; body size 5 bytes.
#line 1 "ENTRY_10643090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643090(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106430a0; body size 5 bytes.
#line 1 "ENTRY_106430a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106430a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106430b0; body size 5 bytes.
#line 1 "ENTRY_106430b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106430b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106430c0; body size 5 bytes.
#line 1 "ENTRY_106430c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106430c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106430d0; body size 5 bytes.
#line 1 "ENTRY_106430d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106430d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106430e0; body size 5 bytes.
#line 1 "ENTRY_106430e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106430e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106430f0; body size 5 bytes.
#line 1 "ENTRY_106430f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106430f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10643100; body size 5 bytes.
#line 1 "ENTRY_10643100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643100(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10643110; body size 5 bytes.
#line 1 "ENTRY_10643110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643110(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10643120; body size 5 bytes.
#line 1 "ENTRY_10643120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643120(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10643130; body size 5 bytes.
#line 1 "ENTRY_10643130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643130(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10643140; body size 5 bytes.
#line 1 "ENTRY_10643140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643140(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10643150; body size 5 bytes.
#line 1 "ENTRY_10643150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643150(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10643160; body size 5 bytes.
#line 1 "ENTRY_10643160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643160(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10643170; body size 5 bytes.
#line 1 "ENTRY_10643170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643170(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10643180; body size 5 bytes.
#line 1 "ENTRY_10643180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643180(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10643190; body size 5 bytes.
#line 1 "ENTRY_10643190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10643190(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106431a0; body size 5 bytes.
#line 1 "ENTRY_106431a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106431a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106431b0; body size 5 bytes.
#line 1 "ENTRY_106431b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106431b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106431d0; body size 14 bytes.
#line 1 "ENTRY_106431d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106431d0(void)

{
  thunk_FUN_11248b40(0x15);
  return;
}


// Reference entry 10643780; body size 24 bytes.
#line 1 "ENTRY_10643780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10643780(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10623fa0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106473e0; body size 3 bytes.
#line 1 "ENTRY_106473e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106473e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 106473f0; body size 3 bytes.
#line 1 "ENTRY_106473f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106473f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10647400; body size 28 bytes.
#line 1 "ENTRY_10647400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10647400(undefined4 *param_1)

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


// Reference entry 10647430; body size 7 bytes.
#line 1 "ENTRY_10647430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10647430(int param_1)

{
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
  return;
}


// Reference entry 10647440; body size 13 bytes.
#line 1 "ENTRY_10647440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10647440(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x10f) = param_2;
  return;
}


// Reference entry 10647450; body size 13 bytes.
#line 1 "ENTRY_10647450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10647450(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x10c) = param_2;
  return;
}


// Reference entry 10647460; body size 13 bytes.
#line 1 "ENTRY_10647460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10647460(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x10d) = param_2;
  return;
}


// Reference entry 10647470; body size 9 bytes.
#line 1 "ENTRY_10647470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10647470(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10647980; body size 18 bytes.
#line 1 "ENTRY_10647980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10647980(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106479a0; body size 18 bytes.
#line 1 "ENTRY_106479a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106479a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106479c0; body size 25 bytes.
#line 1 "ENTRY_106479c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106479c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106479e0; body size 25 bytes.
#line 1 "ENTRY_106479e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106479e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10647a00; body size 18 bytes.
#line 1 "ENTRY_10647a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10647a00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10647a20; body size 18 bytes.
#line 1 "ENTRY_10647a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10647a20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10647b80; body size 26 bytes.
#line 1 "ENTRY_10647b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10647b80(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10647ba0; body size 25 bytes.
#line 1 "ENTRY_10647ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10647ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10647bc0; body size 25 bytes.
#line 1 "ENTRY_10647bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10647bc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10647be0; body size 33 bytes.
#line 1 "ENTRY_10647be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10647be0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 10648000; body size 3 bytes.
#line 1 "ENTRY_10648000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10648000(void)

{
  return;
}


// Reference entry 10648180; body size 25 bytes.
#line 1 "ENTRY_10648180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10648180(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 106481a0; body size 25 bytes.
#line 1 "ENTRY_106481a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106481a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10648510; body size 13 bytes.
#line 1 "ENTRY_10648510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10648510(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10648520; body size 13 bytes.
#line 1 "ENTRY_10648520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10648520(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106485b0; body size 3 bytes.
#line 1 "ENTRY_106485b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106485b0(void)

{
  return;
}


// Reference entry 106485c0; body size 3 bytes.
#line 1 "ENTRY_106485c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106485c0(void)

{
  return;
}


// Reference entry 106488d0; body size 15 bytes.
#line 1 "ENTRY_106488d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106488d0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 106488f0; body size 15 bytes.
#line 1 "ENTRY_106488f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106488f0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10648a10; body size 7 bytes.
#line 1 "ENTRY_10648a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10648a10(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10648a20; body size 7 bytes.
#line 1 "ENTRY_10648a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10648a20(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10648a30; body size 3 bytes.
#line 1 "ENTRY_10648a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10648a30(void)

{
  return;
}


// Reference entry 10648be0; body size 5 bytes.
#line 1 "ENTRY_10648be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10648be0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10648cb0; body size 5 bytes.
#line 1 "ENTRY_10648cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10648cb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10648cc0; body size 5 bytes.
#line 1 "ENTRY_10648cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10648cc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10648d00; body size 5 bytes.
#line 1 "ENTRY_10648d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10648d00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10648d10; body size 5 bytes.
#line 1 "ENTRY_10648d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10648d10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10648d20; body size 5 bytes.
#line 1 "ENTRY_10648d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10648d20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10648d30; body size 5 bytes.
#line 1 "ENTRY_10648d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10648d30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10648d40; body size 5 bytes.
#line 1 "ENTRY_10648d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10648d40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10648d50; body size 5 bytes.
#line 1 "ENTRY_10648d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10648d50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10648d60; body size 5 bytes.
#line 1 "ENTRY_10648d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10648d60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10648d70; body size 18 bytes.
#line 1 "ENTRY_10648d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10648d70(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 8);
  return;
}


// Reference entry 10648d90; body size 20 bytes.
#line 1 "ENTRY_10648d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10648d90(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10648010(param_1,param_2,param_2);
  return;
}


// Reference entry 10648f70; body size 12 bytes.
#line 1 "ENTRY_10648f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10648f70(int param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 - param_1 >> 3);
}


// Reference entry 10648f80; body size 15 bytes.
#line 1 "ENTRY_10648f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10648f80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10648fa0; body size 15 bytes.
#line 1 "ENTRY_10648fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10648fa0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10648fc0; body size 15 bytes.
#line 1 "ENTRY_10648fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10648fc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10648fe0; body size 5 bytes.
#line 1 "ENTRY_10648fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10648fe0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10648ff0; body size 5 bytes.
#line 1 "ENTRY_10648ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10648ff0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10649000; body size 5 bytes.
#line 1 "ENTRY_10649000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649000(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10649040; body size 5 bytes.
#line 1 "ENTRY_10649040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649040(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10649050; body size 5 bytes.
#line 1 "ENTRY_10649050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649050(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10649090; body size 5 bytes.
#line 1 "ENTRY_10649090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649090(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106490a0; body size 6 bytes.
#line 1 "ENTRY_106490a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106490a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2388);
}


// Reference entry 106490b0; body size 6 bytes.
#line 1 "ENTRY_106490b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106490b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23d8);
}


// Reference entry 106490c0; body size 6 bytes.
#line 1 "ENTRY_106490c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106490c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2390);
}


// Reference entry 106490d0; body size 6 bytes.
#line 1 "ENTRY_106490d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106490d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2394);
}


// Reference entry 106490e0; body size 6 bytes.
#line 1 "ENTRY_106490e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106490e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2378);
}


// Reference entry 106490f0; body size 6 bytes.
#line 1 "ENTRY_106490f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106490f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23b0);
}


// Reference entry 10649100; body size 6 bytes.
#line 1 "ENTRY_10649100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649100(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2398);
}


// Reference entry 10649110; body size 6 bytes.
#line 1 "ENTRY_10649110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649110(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2374);
}


// Reference entry 10649120; body size 6 bytes.
#line 1 "ENTRY_10649120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649120(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23a8);
}


// Reference entry 10649130; body size 6 bytes.
#line 1 "ENTRY_10649130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649130(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23fc);
}


// Reference entry 10649140; body size 6 bytes.
#line 1 "ENTRY_10649140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649140(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23f0);
}


// Reference entry 10649150; body size 6 bytes.
#line 1 "ENTRY_10649150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649150(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23f8);
}


// Reference entry 10649160; body size 6 bytes.
#line 1 "ENTRY_10649160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649160(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a236c);
}


// Reference entry 10649170; body size 6 bytes.
#line 1 "ENTRY_10649170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649170(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a237c);
}


// Reference entry 10649180; body size 6 bytes.
#line 1 "ENTRY_10649180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649180(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23f4);
}


// Reference entry 10649190; body size 6 bytes.
#line 1 "ENTRY_10649190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649190(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23d4);
}


// Reference entry 106491a0; body size 6 bytes.
#line 1 "ENTRY_106491a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106491a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23c8);
}


// Reference entry 106491b0; body size 6 bytes.
#line 1 "ENTRY_106491b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106491b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a239c);
}


// Reference entry 106491c0; body size 6 bytes.
#line 1 "ENTRY_106491c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106491c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2384);
}


// Reference entry 106491d0; body size 6 bytes.
#line 1 "ENTRY_106491d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106491d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23b8);
}


// Reference entry 106491e0; body size 6 bytes.
#line 1 "ENTRY_106491e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106491e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23ac);
}


// Reference entry 106491f0; body size 6 bytes.
#line 1 "ENTRY_106491f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106491f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23ec);
}


// Reference entry 10649200; body size 6 bytes.
#line 1 "ENTRY_10649200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649200(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23c0);
}


// Reference entry 10649210; body size 6 bytes.
#line 1 "ENTRY_10649210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649210(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a238c);
}


// Reference entry 10649220; body size 6 bytes.
#line 1 "ENTRY_10649220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649220(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2368);
}


// Reference entry 10649230; body size 6 bytes.
#line 1 "ENTRY_10649230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649230(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23e0);
}


// Reference entry 10649240; body size 6 bytes.
#line 1 "ENTRY_10649240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649240(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23dc);
}


// Reference entry 10649250; body size 6 bytes.
#line 1 "ENTRY_10649250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649250(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2380);
}


// Reference entry 10649260; body size 6 bytes.
#line 1 "ENTRY_10649260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649260(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23cc);
}


// Reference entry 10649270; body size 6 bytes.
#line 1 "ENTRY_10649270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649270(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23bc);
}


// Reference entry 10649280; body size 6 bytes.
#line 1 "ENTRY_10649280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649280(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23b4);
}


// Reference entry 10649290; body size 6 bytes.
#line 1 "ENTRY_10649290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649290(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23d0);
}


// Reference entry 106492a0; body size 6 bytes.
#line 1 "ENTRY_106492a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106492a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a2370);
}


// Reference entry 106492b0; body size 6 bytes.
#line 1 "ENTRY_106492b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106492b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23e4);
}


// Reference entry 106492c0; body size 6 bytes.
#line 1 "ENTRY_106492c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106492c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23c4);
}


// Reference entry 106492d0; body size 6 bytes.
#line 1 "ENTRY_106492d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106492d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23e8);
}


// Reference entry 106492e0; body size 6 bytes.
#line 1 "ENTRY_106492e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106492e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23a4);
}


// Reference entry 106492f0; body size 6 bytes.
#line 1 "ENTRY_106492f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106492f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_121a23a0);
}


// Reference entry 10649690; body size 5 bytes.
#line 1 "ENTRY_10649690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10649690(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 106496a0; body size 12 bytes.
#line 1 "ENTRY_106496a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106496a0(int param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + param_2 * 8);
}


// Reference entry 106497d0; body size 95 bytes.
#line 1 "ENTRY_106497d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106497d0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_109e1620());
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4));
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizControllerFor_vftable);
  param_1[2] = (uint)&Ext_SCNewWizControllerFor_vftable;
  param_1[6] = (uint)&Ext_SCNewWizControllerFor_vftable;
  param_1[7] = (uint)&Ext_SCNewWizControllerFor_vftable;
  param_1[0xe] = (uint)&Ext_SCNewWizControllerFor_vftable;
  param_1[0x11] = (uint)&Ext_SCNewWizControllerFor_vftable;
  param_1[0x14] = (uint)&Ext_SCNewWizControllerFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10649850; body size 57 bytes.
#line 1 "ENTRY_10649850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10649850(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCNewWizPageFor_vftable);
  param_1[4] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x23] = (uint)&Ext_SCNewWizPageFor_vftable;
  param_1[0x2a] = (uint)&Ext_SCNewWizPageFor_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1064bcc0; body size 16 bytes.
#line 1 "ENTRY_1064bcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1064bcc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1064bd20; body size 16 bytes.
#line 1 "ENTRY_1064bd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1064bd20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1064d4a0; body size 3 bytes.
#line 1 "ENTRY_1064d4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1064d4a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1064d4b0; body size 10 bytes.
#line 1 "ENTRY_1064d4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1064d4b0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1064d540; body size 16 bytes.
#line 1 "ENTRY_1064d540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1064d540(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1064d560; body size 16 bytes.
#line 1 "ENTRY_1064d560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1064d560(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1064d580; body size 21 bytes.
#line 1 "ENTRY_1064d580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1064d580(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1064d5a0; body size 23 bytes.
#line 1 "ENTRY_1064d5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1064d5a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1064d5c0; body size 23 bytes.
#line 1 "ENTRY_1064d5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1064d5c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1064d5e0; body size 25 bytes.
#line 1 "ENTRY_1064d5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1064d5e0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1064d600; body size 23 bytes.
#line 1 "ENTRY_1064d600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1064d600(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1064d620; body size 3 bytes.
#line 1 "ENTRY_1064d620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1064d620(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1064d630; body size 3 bytes.
#line 1 "ENTRY_1064d630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1064d630(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1064d640; body size 3 bytes.
#line 1 "ENTRY_1064d640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1064d640(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1064d650; body size 3 bytes.
#line 1 "ENTRY_1064d650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1064d650(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1064d6e0; body size 52 bytes.
#line 1 "ENTRY_1064d6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1064d6e0(undefined4 *param_1)

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


// Reference entry 1064d730; body size 52 bytes.
#line 1 "ENTRY_1064d730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1064d730(undefined4 *param_1)

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


// Reference entry 1064d780; body size 23 bytes.
#line 1 "ENTRY_1064d780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1064d780(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1064d9f0; body size 49 bytes.
#line 1 "ENTRY_1064d9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1064d9f0(undefined4 *param_2)
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


// Reference entry 1064da30; body size 23 bytes.
#line 1 "ENTRY_1064da30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1064da30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1064dc60; body size 57 bytes.
#line 1 "ENTRY_1064dc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1064dc60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAddProductAddAnotherProductPage_vftable);
  param_1[4] = (uint)&Ext_SCAddProductAddAnotherProductPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAddProductAddAnotherProductPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAddProductAddAnotherProductPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1064ebc0; body size 57 bytes.
#line 1 "ENTRY_1064ebc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1064ebc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAddProductConnectionLastResortPage_vftable);
  param_1[4] = (uint)&Ext_SCAddProductConnectionLastResortPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAddProductConnectionLastResortPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAddProductConnectionLastResortPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1064ed10; body size 57 bytes.
#line 1 "ENTRY_1064ed10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1064ed10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAddProductContinueConfigurationPage_vftable);
  param_1[4] = (uint)&Ext_SCAddProductContinueConfigurationPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAddProductContinueConfigurationPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAddProductContinueConfigurationPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1064ee60; body size 57 bytes.
#line 1 "ENTRY_1064ee60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1064ee60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAddProductDeactivatedErrorPage_vftable);
  param_1[4] = (uint)&Ext_SCAddProductDeactivatedErrorPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAddProductDeactivatedErrorPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAddProductDeactivatedErrorPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1064efb0; body size 93 bytes.
#line 1 "ENTRY_1064efb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1064efb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAddProductDefaultIntroPage_vftable);
  param_1[4] = (uint)&Ext_SCAddProductDefaultIntroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAddProductDefaultIntroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAddProductDefaultIntroPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1064f340; body size 57 bytes.
#line 1 "ENTRY_1064f340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1064f340(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAddProductFatalVerificationErrorPage_vftable);
  param_1[4] = (uint)&Ext_SCAddProductFatalVerificationErrorPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAddProductFatalVerificationErrorPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAddProductFatalVerificationErrorPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1064f490; body size 64 bytes.
#line 1 "ENTRY_1064f490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1064f490(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAddProductFinishConfigurationPage_vftable);
  param_1[4] = (uint)&Ext_SCAddProductFinishConfigurationPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAddProductFinishConfigurationPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAddProductFinishConfigurationPage_vftable;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10650030; body size 64 bytes.
#line 1 "ENTRY_10650030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10650030(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAddProductLegacyOnlyPage_vftable);
  param_1[4] = (uint)&Ext_SCAddProductLegacyOnlyPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAddProductLegacyOnlyPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAddProductLegacyOnlyPage_vftable;
  *(undefined1 *)((int)param_1 + 0xe1) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10650540; body size 93 bytes.
#line 1 "ENTRY_10650540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10650540(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAddProductNotificationIntroPage_vftable);
  param_1[4] = (uint)&Ext_SCAddProductNotificationIntroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAddProductNotificationIntroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAddProductNotificationIntroPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106506c0; body size 57 bytes.
#line 1 "ENTRY_106506c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106506c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAddProductOutroFailurePage_vftable);
  param_1[4] = (uint)&Ext_SCAddProductOutroFailurePage_vftable;
  param_1[0x23] = (uint)&Ext_SCAddProductOutroFailurePage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAddProductOutroFailurePage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10650810; body size 86 bytes.
#line 1 "ENTRY_10650810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10650810(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAddProductOutroPage_vftable);
  param_1[4] = (uint)&Ext_SCAddProductOutroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAddProductOutroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAddProductOutroPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106513d0; body size 114 bytes.
#line 1 "ENTRY_106513d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106513d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAddProductSelectionIntroPage_vftable);
  param_1[4] = (uint)&Ext_SCAddProductSelectionIntroPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAddProductSelectionIntroPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAddProductSelectionIntroPage_vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10651560; body size 57 bytes.
#line 1 "ENTRY_10651560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10651560(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAddProductTempWireInstructionsPage_vftable);
  param_1[4] = (uint)&Ext_SCAddProductTempWireInstructionsPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAddProductTempWireInstructionsPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAddProductTempWireInstructionsPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 106518c0; body size 57 bytes.
#line 1 "ENTRY_106518c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106518c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&Ext_SCAddProductVanishedProductErrorPage_vftable);
  param_1[4] = (uint)&Ext_SCAddProductVanishedProductErrorPage_vftable;
  param_1[0x23] = (uint)&Ext_SCAddProductVanishedProductErrorPage_vftable;
  param_1[0x2a] = (uint)&Ext_SCAddProductVanishedProductErrorPage_vftable;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10653f20; body size 24 bytes.
#line 1 "ENTRY_10653f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10653f20(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((Stub_SCStr *)(param_1))->SCStr(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_1);
}


// Reference entry 106541b0; body size 49 bytes.
#line 1 "ENTRY_106541b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106541b0(undefined4 *param_2)
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


// Reference entry 106541f0; body size 23 bytes.
#line 1 "ENTRY_106541f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106541f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10654210; body size 122 bytes.
#line 1 "ENTRY_10654210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10654210(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (uint)&Ext_SCIOpCBDelegate_vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (undefined4)((uint)&Ext_SCOpPerformQueue_vftable);
  param_1[2] = (uint)&Ext_SCOpPerformQueue_vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  param_1[0xd] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10654620; body size 11 bytes.
#line 1 "ENTRY_10654620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654620(undefined4 *param_1)

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


// Reference entry 10654630; body size 11 bytes.
#line 1 "ENTRY_10654630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654630(undefined4 *param_1)

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


// Reference entry 10654640; body size 11 bytes.
#line 1 "ENTRY_10654640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654640(undefined4 *param_1)

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


// Reference entry 10654650; body size 11 bytes.
#line 1 "ENTRY_10654650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654650(undefined4 *param_1)

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


// Reference entry 10654660; body size 11 bytes.
#line 1 "ENTRY_10654660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654660(undefined4 *param_1)

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


// Reference entry 10654670; body size 11 bytes.
#line 1 "ENTRY_10654670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654670(undefined4 *param_1)

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


// Reference entry 10654680; body size 11 bytes.
#line 1 "ENTRY_10654680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654680(undefined4 *param_1)

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


// Reference entry 10654690; body size 11 bytes.
#line 1 "ENTRY_10654690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654690(undefined4 *param_1)

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


// Reference entry 106546a0; body size 11 bytes.
#line 1 "ENTRY_106546a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106546a0(undefined4 *param_1)

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


// Reference entry 106546b0; body size 11 bytes.
#line 1 "ENTRY_106546b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106546b0(undefined4 *param_1)

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


// Reference entry 106546c0; body size 11 bytes.
#line 1 "ENTRY_106546c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106546c0(undefined4 *param_1)

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


// Reference entry 106546d0; body size 11 bytes.
#line 1 "ENTRY_106546d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106546d0(undefined4 *param_1)

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


// Reference entry 106546e0; body size 11 bytes.
#line 1 "ENTRY_106546e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106546e0(undefined4 *param_1)

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


// Reference entry 106546f0; body size 11 bytes.
#line 1 "ENTRY_106546f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106546f0(undefined4 *param_1)

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

